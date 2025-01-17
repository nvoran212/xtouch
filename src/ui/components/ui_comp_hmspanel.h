#ifndef _UI_COMP_HMSPANEL_H
#define _UI_COMP_HMSPANEL_H

#include "../ui.h"

#ifdef __cplusplus
extern "C"
{
#endif

// COMPONENT hmsPanel
#define UI_COMP_HMSPANEL_HMSPANEL 0
#define UI_COMP_HMSPANEL_HMSPANELCONTAINER 1
#define UI_COMP_HMSPANEL_HMSPANELCONTAINER_HMSPANELCAPTION 2
#define UI_COMP_HMSPANEL_HMSPANELCONTAINER_HMSPANEL_RETRY_BUTTON 3
#define UI_COMP_HMSPANEL_HMSPANELCONTAINER_HMSPANEL_RETRY_BUTTON_LABEL 4
#define UI_COMP_HMSPANEL_HMSPANELCONTAINER_HMSPANEL_DONE_BUTTON 5
#define UI_COMP_HMSPANEL_HMSPANELCONTAINER_HMSPANEL_DONE_BUTTON_LABEL 6
#define UI_COMP_HMSPANEL_HMSPANELCONTAINER_HMSPANEL_CONFIRM_BUTTON 7
#define UI_COMP_HMSPANEL_HMSPANELCONTAINER_HMSPANEL_CONFIRM_BUTTON_LABEL 8
#define _UI_COMP_HMSPANEL_NUM 9
    lv_obj_t *ui_hmsPanel_create(lv_obj_t *comp_parent);
    void ui_hmsPanel_show(const char *title, bool hasDone, bool hasRetry);
    void ui_hmsPanel_hide();
    const char *ui_hmsPanel_deviceHMSError(unsigned long long prefix);
#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
