#ifndef _USBDEV_BC_H
#define _USBDEV_BC_H

/* USB Charger Types */
#define USB_BC_TYPE_DISCNT  (0)
#define USB_BC_TYPE_SDP     (1)
#define USB_BC_TYPE_DCP     (2)
#define USB_BC_TYPE_CDP     (3)
#define USB_BC_TYPE_UNKNOW  (4)

enum {
	SYNOP_BC_BVALID = 0,
	SYNOP_BC_DCDENB,
	SYNOP_BC_VDATSRCENB,
	SYNOP_BC_VDATDETENB,
	SYNOP_BC_CHRGSEL,
	SYNOP_BC_CHGDET,
	SYNOP_BC_FSVPLUS,
	SYNOP_BC_FSVMINUS,
	SYNOP_BC_MAX,
};

enum {
	RK_BC_BVALID = 0,
	RK_BC_LINESTATE,
	RK_BC_SOFTCTRL,
	RK_BC_OPMODE,
	RK_BC_XCVRSELECT,
	RK_BC_TERMSELECT,
	RK_BC_MAX,
};

#define T_DCD_TIMEOUT	 (400)
#define T_BC_WAIT_CHGDET (40)
#define T_BC_CHGDET_VALID (200)

enum {
	DCD_POSITIVE = 0,
	DCD_PASSED,
	DCD_TIMEOUT,
};

/***********************************
USB Port Type
0 : Disconnect
1 : SDP - pc
2 : DCP - charger
3 : CDP - pc with big currect charge
***********************************/

extern int dwc_otg_check_dpdm(bool wait);
extern int usb_battery_charger_detect(bool wait);
extern void usb20otg_battery_charger_detect_cb(int charger_type_new);

#endif