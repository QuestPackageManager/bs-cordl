#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__VREvent_ApplicationLaunch_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Chaperone_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Controller_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_DualAnalog_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_EditingCameraSurface_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_HapticVibration_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_InputBindingLoad_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Ipd_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Keyboard_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_MessageOverlay_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Mouse_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Notification_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Overlay_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_PerformanceTest_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Process_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Property_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Reserved_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_ScreenshotProgress_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Screenshot_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Scroll_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_SeatedZeroPoseReset_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_SpatialAnchor_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Status_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_TouchPadMove_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_WebConsole_t_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VREvent_Data_t)
namespace OVR::OpenVR {
struct VREvent_Property_t;
}
namespace OVR::OpenVR {
struct VREvent_SeatedZeroPoseReset_t;
}
namespace OVR::OpenVR {
struct VREvent_Chaperone_t;
}
namespace OVR::OpenVR {
struct VREvent_Process_t;
}
namespace OVR::OpenVR {
struct VREvent_Scroll_t;
}
namespace OVR::OpenVR {
struct VREvent_EditingCameraSurface_t;
}
namespace OVR::OpenVR {
struct VREvent_WebConsole_t;
}
namespace OVR::OpenVR {
struct VREvent_InputBindingLoad_t;
}
namespace OVR::OpenVR {
struct VREvent_SpatialAnchor_t;
}
namespace OVR::OpenVR {
struct VREvent_ApplicationLaunch_t;
}
namespace OVR::OpenVR {
struct VREvent_Keyboard_t;
}
namespace OVR::OpenVR {
struct VREvent_Notification_t;
}
namespace OVR::OpenVR {
struct VREvent_HapticVibration_t;
}
namespace OVR::OpenVR {
struct VREvent_MessageOverlay_t;
}
namespace OVR::OpenVR {
struct VREvent_Ipd_t;
}
namespace OVR::OpenVR {
struct VREvent_Overlay_t;
}
namespace OVR::OpenVR {
struct VREvent_TouchPadMove_t;
}
namespace OVR::OpenVR {
struct VREvent_DualAnalog_t;
}
namespace OVR::OpenVR {
struct VREvent_Reserved_t;
}
namespace OVR::OpenVR {
struct VREvent_Mouse_t;
}
namespace OVR::OpenVR {
struct VREvent_Screenshot_t;
}
namespace OVR::OpenVR {
struct VREvent_PerformanceTest_t;
}
namespace OVR::OpenVR {
struct VREvent_Status_t;
}
namespace OVR::OpenVR {
struct VREvent_ScreenshotProgress_t;
}
namespace OVR::OpenVR {
struct VREvent_Controller_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Data_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_Data_t);
// Type: OVR.OpenVR::VREvent_Data_t
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8684)), TypeDefinitionIndex(TypeDefinitionIndex(8682)), TypeDefinitionIndex(TypeDefinitionIndex(8687)),
// TypeDefinitionIndex(TypeDefinitionIndex(8678)), TypeDefinitionIndex(TypeDefinitionIndex(8671)), TypeDefinitionIndex(TypeDefinitionIndex(8672)), TypeDefinitionIndex(TypeDefinitionIndex(8667)),
// TypeDefinitionIndex(TypeDefinitionIndex(8679)), TypeDefinitionIndex(TypeDefinitionIndex(8683)), TypeDefinitionIndex(TypeDefinitionIndex(8685)), TypeDefinitionIndex(TypeDefinitionIndex(8668)),
// TypeDefinitionIndex(TypeDefinitionIndex(8675)), TypeDefinitionIndex(TypeDefinitionIndex(8673)), TypeDefinitionIndex(TypeDefinitionIndex(8669)), TypeDefinitionIndex(TypeDefinitionIndex(8680)),
// TypeDefinitionIndex(TypeDefinitionIndex(8676)), TypeDefinitionIndex(TypeDefinitionIndex(8686)), TypeDefinitionIndex(TypeDefinitionIndex(8688)), TypeDefinitionIndex(TypeDefinitionIndex(8674)),
// TypeDefinitionIndex(TypeDefinitionIndex(8677)), TypeDefinitionIndex(TypeDefinitionIndex(8689)), TypeDefinitionIndex(TypeDefinitionIndex(8670)), TypeDefinitionIndex(TypeDefinitionIndex(8691)),
// TypeDefinitionIndex(TypeDefinitionIndex(8666)), TypeDefinitionIndex(TypeDefinitionIndex(8681))} Self: TypeDefinitionIndex(TypeDefinitionIndex(8642)) CS Name: ::OVR.OpenVR::VREvent_Data_t
struct CORDL_TYPE VREvent_Data_t {
public:
  // Declarations
  /// @brief Field reserved, offset 0x0, size 0x20
  __declspec(property(get = __get_reserved, put = __set_reserved))::OVR::OpenVR::VREvent_Reserved_t reserved;

  /// @brief Field controller, offset 0x0, size 0x4
  __declspec(property(get = __get_controller, put = __set_controller))::OVR::OpenVR::VREvent_Controller_t controller;

  /// @brief Field mouse, offset 0x0, size 0xc
  __declspec(property(get = __get_mouse, put = __set_mouse))::OVR::OpenVR::VREvent_Mouse_t mouse;

  /// @brief Field scroll, offset 0x0, size 0xc
  __declspec(property(get = __get_scroll, put = __set_scroll))::OVR::OpenVR::VREvent_Scroll_t scroll;

  /// @brief Field process, offset 0x0, size 0xc
  __declspec(property(get = __get_process, put = __set_process))::OVR::OpenVR::VREvent_Process_t process;

  /// @brief Field notification, offset 0x0, size 0x10
  __declspec(property(get = __get_notification, put = __set_notification))::OVR::OpenVR::VREvent_Notification_t notification;

  /// @brief Field overlay, offset 0x0, size 0x10
  __declspec(property(get = __get_overlay, put = __set_overlay))::OVR::OpenVR::VREvent_Overlay_t overlay;

  /// @brief Field status, offset 0x0, size 0x4
  __declspec(property(get = __get_status, put = __set_status))::OVR::OpenVR::VREvent_Status_t status;

  /// @brief Field ipd, offset 0x0, size 0x4
  __declspec(property(get = __get_ipd, put = __set_ipd))::OVR::OpenVR::VREvent_Ipd_t ipd;

  /// @brief Field chaperone, offset 0x0, size 0x10
  __declspec(property(get = __get_chaperone, put = __set_chaperone))::OVR::OpenVR::VREvent_Chaperone_t chaperone;

  /// @brief Field performanceTest, offset 0x0, size 0x4
  __declspec(property(get = __get_performanceTest, put = __set_performanceTest))::OVR::OpenVR::VREvent_PerformanceTest_t performanceTest;

  /// @brief Field touchPadMove, offset 0x0, size 0x18
  __declspec(property(get = __get_touchPadMove, put = __set_touchPadMove))::OVR::OpenVR::VREvent_TouchPadMove_t touchPadMove;

  /// @brief Field seatedZeroPoseReset, offset 0x0, size 0x1
  __declspec(property(get = __get_seatedZeroPoseReset, put = __set_seatedZeroPoseReset))::OVR::OpenVR::VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;

  /// @brief Field screenshot, offset 0x0, size 0x8
  __declspec(property(get = __get_screenshot, put = __set_screenshot))::OVR::OpenVR::VREvent_Screenshot_t screenshot;

  /// @brief Field screenshotProgress, offset 0x0, size 0x4
  __declspec(property(get = __get_screenshotProgress, put = __set_screenshotProgress))::OVR::OpenVR::VREvent_ScreenshotProgress_t screenshotProgress;

  /// @brief Field applicationLaunch, offset 0x0, size 0x8
  __declspec(property(get = __get_applicationLaunch, put = __set_applicationLaunch))::OVR::OpenVR::VREvent_ApplicationLaunch_t applicationLaunch;

  /// @brief Field cameraSurface, offset 0x0, size 0x10
  __declspec(property(get = __get_cameraSurface, put = __set_cameraSurface))::OVR::OpenVR::VREvent_EditingCameraSurface_t cameraSurface;

  /// @brief Field messageOverlay, offset 0x0, size 0x4
  __declspec(property(get = __get_messageOverlay, put = __set_messageOverlay))::OVR::OpenVR::VREvent_MessageOverlay_t messageOverlay;

  /// @brief Field property, offset 0x0, size 0x10
  __declspec(property(get = __get_property, put = __set_property))::OVR::OpenVR::VREvent_Property_t property;

  /// @brief Field dualAnalog, offset 0x0, size 0x14
  __declspec(property(get = __get_dualAnalog, put = __set_dualAnalog))::OVR::OpenVR::VREvent_DualAnalog_t dualAnalog;

  /// @brief Field hapticVibration, offset 0x0, size 0x20
  __declspec(property(get = __get_hapticVibration, put = __set_hapticVibration))::OVR::OpenVR::VREvent_HapticVibration_t hapticVibration;

  /// @brief Field webConsole, offset 0x0, size 0x8
  __declspec(property(get = __get_webConsole, put = __set_webConsole))::OVR::OpenVR::VREvent_WebConsole_t webConsole;

  /// @brief Field inputBinding, offset 0x0, size 0x20
  __declspec(property(get = __get_inputBinding, put = __set_inputBinding))::OVR::OpenVR::VREvent_InputBindingLoad_t inputBinding;

  /// @brief Field spatialAnchor, offset 0x0, size 0x4
  __declspec(property(get = __get_spatialAnchor, put = __set_spatialAnchor))::OVR::OpenVR::VREvent_SpatialAnchor_t spatialAnchor;

  /// @brief Field keyboard, offset 0x0, size 0x10
  __declspec(property(get = __get_keyboard, put = __set_keyboard))::OVR::OpenVR::VREvent_Keyboard_t keyboard;

  constexpr ::OVR::OpenVR::VREvent_Reserved_t& __get_reserved();

  constexpr ::OVR::OpenVR::VREvent_Reserved_t const& __get_reserved() const;

  constexpr void __set_reserved(::OVR::OpenVR::VREvent_Reserved_t value);

  constexpr ::OVR::OpenVR::VREvent_Controller_t& __get_controller();

  constexpr ::OVR::OpenVR::VREvent_Controller_t const& __get_controller() const;

  constexpr void __set_controller(::OVR::OpenVR::VREvent_Controller_t value);

  constexpr ::OVR::OpenVR::VREvent_Mouse_t& __get_mouse();

  constexpr ::OVR::OpenVR::VREvent_Mouse_t const& __get_mouse() const;

  constexpr void __set_mouse(::OVR::OpenVR::VREvent_Mouse_t value);

  constexpr ::OVR::OpenVR::VREvent_Scroll_t& __get_scroll();

  constexpr ::OVR::OpenVR::VREvent_Scroll_t const& __get_scroll() const;

  constexpr void __set_scroll(::OVR::OpenVR::VREvent_Scroll_t value);

  constexpr ::OVR::OpenVR::VREvent_Process_t& __get_process();

  constexpr ::OVR::OpenVR::VREvent_Process_t const& __get_process() const;

  constexpr void __set_process(::OVR::OpenVR::VREvent_Process_t value);

  constexpr ::OVR::OpenVR::VREvent_Notification_t& __get_notification();

  constexpr ::OVR::OpenVR::VREvent_Notification_t const& __get_notification() const;

  constexpr void __set_notification(::OVR::OpenVR::VREvent_Notification_t value);

  constexpr ::OVR::OpenVR::VREvent_Overlay_t& __get_overlay();

  constexpr ::OVR::OpenVR::VREvent_Overlay_t const& __get_overlay() const;

  constexpr void __set_overlay(::OVR::OpenVR::VREvent_Overlay_t value);

  constexpr ::OVR::OpenVR::VREvent_Status_t& __get_status();

  constexpr ::OVR::OpenVR::VREvent_Status_t const& __get_status() const;

  constexpr void __set_status(::OVR::OpenVR::VREvent_Status_t value);

  constexpr ::OVR::OpenVR::VREvent_Ipd_t& __get_ipd();

  constexpr ::OVR::OpenVR::VREvent_Ipd_t const& __get_ipd() const;

  constexpr void __set_ipd(::OVR::OpenVR::VREvent_Ipd_t value);

  constexpr ::OVR::OpenVR::VREvent_Chaperone_t& __get_chaperone();

  constexpr ::OVR::OpenVR::VREvent_Chaperone_t const& __get_chaperone() const;

  constexpr void __set_chaperone(::OVR::OpenVR::VREvent_Chaperone_t value);

  constexpr ::OVR::OpenVR::VREvent_PerformanceTest_t& __get_performanceTest();

  constexpr ::OVR::OpenVR::VREvent_PerformanceTest_t const& __get_performanceTest() const;

  constexpr void __set_performanceTest(::OVR::OpenVR::VREvent_PerformanceTest_t value);

  constexpr ::OVR::OpenVR::VREvent_TouchPadMove_t& __get_touchPadMove();

  constexpr ::OVR::OpenVR::VREvent_TouchPadMove_t const& __get_touchPadMove() const;

  constexpr void __set_touchPadMove(::OVR::OpenVR::VREvent_TouchPadMove_t value);

  constexpr ::OVR::OpenVR::VREvent_SeatedZeroPoseReset_t& __get_seatedZeroPoseReset();

  constexpr ::OVR::OpenVR::VREvent_SeatedZeroPoseReset_t const& __get_seatedZeroPoseReset() const;

  constexpr void __set_seatedZeroPoseReset(::OVR::OpenVR::VREvent_SeatedZeroPoseReset_t value);

  constexpr ::OVR::OpenVR::VREvent_Screenshot_t& __get_screenshot();

  constexpr ::OVR::OpenVR::VREvent_Screenshot_t const& __get_screenshot() const;

  constexpr void __set_screenshot(::OVR::OpenVR::VREvent_Screenshot_t value);

  constexpr ::OVR::OpenVR::VREvent_ScreenshotProgress_t& __get_screenshotProgress();

  constexpr ::OVR::OpenVR::VREvent_ScreenshotProgress_t const& __get_screenshotProgress() const;

  constexpr void __set_screenshotProgress(::OVR::OpenVR::VREvent_ScreenshotProgress_t value);

  constexpr ::OVR::OpenVR::VREvent_ApplicationLaunch_t& __get_applicationLaunch();

  constexpr ::OVR::OpenVR::VREvent_ApplicationLaunch_t const& __get_applicationLaunch() const;

  constexpr void __set_applicationLaunch(::OVR::OpenVR::VREvent_ApplicationLaunch_t value);

  constexpr ::OVR::OpenVR::VREvent_EditingCameraSurface_t& __get_cameraSurface();

  constexpr ::OVR::OpenVR::VREvent_EditingCameraSurface_t const& __get_cameraSurface() const;

  constexpr void __set_cameraSurface(::OVR::OpenVR::VREvent_EditingCameraSurface_t value);

  constexpr ::OVR::OpenVR::VREvent_MessageOverlay_t& __get_messageOverlay();

  constexpr ::OVR::OpenVR::VREvent_MessageOverlay_t const& __get_messageOverlay() const;

  constexpr void __set_messageOverlay(::OVR::OpenVR::VREvent_MessageOverlay_t value);

  constexpr ::OVR::OpenVR::VREvent_Property_t& __get_property();

  constexpr ::OVR::OpenVR::VREvent_Property_t const& __get_property() const;

  constexpr void __set_property(::OVR::OpenVR::VREvent_Property_t value);

  constexpr ::OVR::OpenVR::VREvent_DualAnalog_t& __get_dualAnalog();

  constexpr ::OVR::OpenVR::VREvent_DualAnalog_t const& __get_dualAnalog() const;

  constexpr void __set_dualAnalog(::OVR::OpenVR::VREvent_DualAnalog_t value);

  constexpr ::OVR::OpenVR::VREvent_HapticVibration_t& __get_hapticVibration();

  constexpr ::OVR::OpenVR::VREvent_HapticVibration_t const& __get_hapticVibration() const;

  constexpr void __set_hapticVibration(::OVR::OpenVR::VREvent_HapticVibration_t value);

  constexpr ::OVR::OpenVR::VREvent_WebConsole_t& __get_webConsole();

  constexpr ::OVR::OpenVR::VREvent_WebConsole_t const& __get_webConsole() const;

  constexpr void __set_webConsole(::OVR::OpenVR::VREvent_WebConsole_t value);

  constexpr ::OVR::OpenVR::VREvent_InputBindingLoad_t& __get_inputBinding();

  constexpr ::OVR::OpenVR::VREvent_InputBindingLoad_t const& __get_inputBinding() const;

  constexpr void __set_inputBinding(::OVR::OpenVR::VREvent_InputBindingLoad_t value);

  constexpr ::OVR::OpenVR::VREvent_SpatialAnchor_t& __get_spatialAnchor();

  constexpr ::OVR::OpenVR::VREvent_SpatialAnchor_t const& __get_spatialAnchor() const;

  constexpr void __set_spatialAnchor(::OVR::OpenVR::VREvent_SpatialAnchor_t value);

  constexpr ::OVR::OpenVR::VREvent_Keyboard_t& __get_keyboard();

  constexpr ::OVR::OpenVR::VREvent_Keyboard_t const& __get_keyboard() const;

  constexpr void __set_keyboard(::OVR::OpenVR::VREvent_Keyboard_t value);

  // Ctor Parameters [CppParam { name: "reserved", ty: "::OVR::OpenVR::VREvent_Reserved_t", modifiers: "", def_value: None }, CppParam { name: "controller", ty: "::OVR::OpenVR::VREvent_Controller_t",
  // modifiers: "", def_value: None }, CppParam { name: "mouse", ty: "::OVR::OpenVR::VREvent_Mouse_t", modifiers: "", def_value: None }, CppParam { name: "scroll", ty:
  // "::OVR::OpenVR::VREvent_Scroll_t", modifiers: "", def_value: None }, CppParam { name: "process", ty: "::OVR::OpenVR::VREvent_Process_t", modifiers: "", def_value: None }, CppParam { name:
  // "notification", ty: "::OVR::OpenVR::VREvent_Notification_t", modifiers: "", def_value: None }, CppParam { name: "overlay", ty: "::OVR::OpenVR::VREvent_Overlay_t", modifiers: "", def_value: None
  // }, CppParam { name: "status", ty: "::OVR::OpenVR::VREvent_Status_t", modifiers: "", def_value: None }, CppParam { name: "ipd", ty: "::OVR::OpenVR::VREvent_Ipd_t", modifiers: "", def_value: None
  // }, CppParam { name: "chaperone", ty: "::OVR::OpenVR::VREvent_Chaperone_t", modifiers: "", def_value: None }, CppParam { name: "performanceTest", ty: "::OVR::OpenVR::VREvent_PerformanceTest_t",
  // modifiers: "", def_value: None }, CppParam { name: "touchPadMove", ty: "::OVR::OpenVR::VREvent_TouchPadMove_t", modifiers: "", def_value: None }, CppParam { name: "seatedZeroPoseReset", ty:
  // "::OVR::OpenVR::VREvent_SeatedZeroPoseReset_t", modifiers: "", def_value: None }, CppParam { name: "screenshot", ty: "::OVR::OpenVR::VREvent_Screenshot_t", modifiers: "", def_value: None },
  // CppParam { name: "screenshotProgress", ty: "::OVR::OpenVR::VREvent_ScreenshotProgress_t", modifiers: "", def_value: None }, CppParam { name: "applicationLaunch", ty:
  // "::OVR::OpenVR::VREvent_ApplicationLaunch_t", modifiers: "", def_value: None }, CppParam { name: "cameraSurface", ty: "::OVR::OpenVR::VREvent_EditingCameraSurface_t", modifiers: "", def_value:
  // None }, CppParam { name: "messageOverlay", ty: "::OVR::OpenVR::VREvent_MessageOverlay_t", modifiers: "", def_value: None }, CppParam { name: "property", ty: "::OVR::OpenVR::VREvent_Property_t",
  // modifiers: "", def_value: None }, CppParam { name: "dualAnalog", ty: "::OVR::OpenVR::VREvent_DualAnalog_t", modifiers: "", def_value: None }, CppParam { name: "hapticVibration", ty:
  // "::OVR::OpenVR::VREvent_HapticVibration_t", modifiers: "", def_value: None }, CppParam { name: "webConsole", ty: "::OVR::OpenVR::VREvent_WebConsole_t", modifiers: "", def_value: None }, CppParam
  // { name: "inputBinding", ty: "::OVR::OpenVR::VREvent_InputBindingLoad_t", modifiers: "", def_value: None }, CppParam { name: "spatialAnchor", ty: "::OVR::OpenVR::VREvent_SpatialAnchor_t",
  // modifiers: "", def_value: None }, CppParam { name: "keyboard", ty: "::OVR::OpenVR::VREvent_Keyboard_t", modifiers: "", def_value: None }]
  constexpr VREvent_Data_t(::OVR::OpenVR::VREvent_Reserved_t reserved, ::OVR::OpenVR::VREvent_Controller_t controller, ::OVR::OpenVR::VREvent_Mouse_t mouse, ::OVR::OpenVR::VREvent_Scroll_t scroll,
                           ::OVR::OpenVR::VREvent_Process_t process, ::OVR::OpenVR::VREvent_Notification_t notification, ::OVR::OpenVR::VREvent_Overlay_t overlay,
                           ::OVR::OpenVR::VREvent_Status_t status, ::OVR::OpenVR::VREvent_Ipd_t ipd, ::OVR::OpenVR::VREvent_Chaperone_t chaperone,
                           ::OVR::OpenVR::VREvent_PerformanceTest_t performanceTest, ::OVR::OpenVR::VREvent_TouchPadMove_t touchPadMove,
                           ::OVR::OpenVR::VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset, ::OVR::OpenVR::VREvent_Screenshot_t screenshot,
                           ::OVR::OpenVR::VREvent_ScreenshotProgress_t screenshotProgress, ::OVR::OpenVR::VREvent_ApplicationLaunch_t applicationLaunch,
                           ::OVR::OpenVR::VREvent_EditingCameraSurface_t cameraSurface, ::OVR::OpenVR::VREvent_MessageOverlay_t messageOverlay, ::OVR::OpenVR::VREvent_Property_t property,
                           ::OVR::OpenVR::VREvent_DualAnalog_t dualAnalog, ::OVR::OpenVR::VREvent_HapticVibration_t hapticVibration, ::OVR::OpenVR::VREvent_WebConsole_t webConsole,
                           ::OVR::OpenVR::VREvent_InputBindingLoad_t inputBinding, ::OVR::OpenVR::VREvent_SpatialAnchor_t spatialAnchor, ::OVR::OpenVR::VREvent_Keyboard_t keyboard) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_Data_t();

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___reserved_padding[0x0];
      /// @brief Field reserved, offset: 0x0, size: 0x20, def value: None
      ::OVR::OpenVR::VREvent_Reserved_t ___reserved;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___reserved_padding_forAlignment[0x0];
      /// @brief Field reserved, offset: 0x0, size: 0x20, def value: None
      ::OVR::OpenVR::VREvent_Reserved_t ___reserved_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___controller_padding[0x0];
      /// @brief Field controller, offset: 0x0, size: 0x4, def value: None
      ::OVR::OpenVR::VREvent_Controller_t ___controller;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___controller_padding_forAlignment[0x0];
      /// @brief Field controller, offset: 0x0, size: 0x4, def value: None
      ::OVR::OpenVR::VREvent_Controller_t ___controller_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___mouse_padding[0x0];
      /// @brief Field mouse, offset: 0x0, size: 0xc, def value: None
      ::OVR::OpenVR::VREvent_Mouse_t ___mouse;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___mouse_padding_forAlignment[0x0];
      /// @brief Field mouse, offset: 0x0, size: 0xc, def value: None
      ::OVR::OpenVR::VREvent_Mouse_t ___mouse_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___scroll_padding[0x0];
      /// @brief Field scroll, offset: 0x0, size: 0xc, def value: None
      ::OVR::OpenVR::VREvent_Scroll_t ___scroll;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___scroll_padding_forAlignment[0x0];
      /// @brief Field scroll, offset: 0x0, size: 0xc, def value: None
      ::OVR::OpenVR::VREvent_Scroll_t ___scroll_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___process_padding[0x0];
      /// @brief Field process, offset: 0x0, size: 0xc, def value: None
      ::OVR::OpenVR::VREvent_Process_t ___process;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___process_padding_forAlignment[0x0];
      /// @brief Field process, offset: 0x0, size: 0xc, def value: None
      ::OVR::OpenVR::VREvent_Process_t ___process_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___notification_padding[0x0];
      /// @brief Field notification, offset: 0x0, size: 0x10, def value: None
      ::OVR::OpenVR::VREvent_Notification_t ___notification;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___notification_padding_forAlignment[0x0];
      /// @brief Field notification, offset: 0x0, size: 0x10, def value: None
      ::OVR::OpenVR::VREvent_Notification_t ___notification_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___overlay_padding[0x0];
      /// @brief Field overlay, offset: 0x0, size: 0x10, def value: None
      ::OVR::OpenVR::VREvent_Overlay_t ___overlay;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___overlay_padding_forAlignment[0x0];
      /// @brief Field overlay, offset: 0x0, size: 0x10, def value: None
      ::OVR::OpenVR::VREvent_Overlay_t ___overlay_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___status_padding[0x0];
      /// @brief Field status, offset: 0x0, size: 0x4, def value: None
      ::OVR::OpenVR::VREvent_Status_t ___status;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___status_padding_forAlignment[0x0];
      /// @brief Field status, offset: 0x0, size: 0x4, def value: None
      ::OVR::OpenVR::VREvent_Status_t ___status_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___ipd_padding[0x0];
      /// @brief Field ipd, offset: 0x0, size: 0x4, def value: None
      ::OVR::OpenVR::VREvent_Ipd_t ___ipd;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___ipd_padding_forAlignment[0x0];
      /// @brief Field ipd, offset: 0x0, size: 0x4, def value: None
      ::OVR::OpenVR::VREvent_Ipd_t ___ipd_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___chaperone_padding[0x0];
      /// @brief Field chaperone, offset: 0x0, size: 0x10, def value: None
      ::OVR::OpenVR::VREvent_Chaperone_t ___chaperone;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___chaperone_padding_forAlignment[0x0];
      /// @brief Field chaperone, offset: 0x0, size: 0x10, def value: None
      ::OVR::OpenVR::VREvent_Chaperone_t ___chaperone_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___performanceTest_padding[0x0];
      /// @brief Field performanceTest, offset: 0x0, size: 0x4, def value: None
      ::OVR::OpenVR::VREvent_PerformanceTest_t ___performanceTest;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___performanceTest_padding_forAlignment[0x0];
      /// @brief Field performanceTest, offset: 0x0, size: 0x4, def value: None
      ::OVR::OpenVR::VREvent_PerformanceTest_t ___performanceTest_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___touchPadMove_padding[0x0];
      /// @brief Field touchPadMove, offset: 0x0, size: 0x18, def value: None
      ::OVR::OpenVR::VREvent_TouchPadMove_t ___touchPadMove;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___touchPadMove_padding_forAlignment[0x0];
      /// @brief Field touchPadMove, offset: 0x0, size: 0x18, def value: None
      ::OVR::OpenVR::VREvent_TouchPadMove_t ___touchPadMove_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___seatedZeroPoseReset_padding[0x0];
      /// @brief Field seatedZeroPoseReset, offset: 0x0, size: 0x1, def value: None
      ::OVR::OpenVR::VREvent_SeatedZeroPoseReset_t ___seatedZeroPoseReset;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___seatedZeroPoseReset_padding_forAlignment[0x0];
      /// @brief Field seatedZeroPoseReset, offset: 0x0, size: 0x1, def value: None
      ::OVR::OpenVR::VREvent_SeatedZeroPoseReset_t ___seatedZeroPoseReset_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___screenshot_padding[0x0];
      /// @brief Field screenshot, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::VREvent_Screenshot_t ___screenshot;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___screenshot_padding_forAlignment[0x0];
      /// @brief Field screenshot, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::VREvent_Screenshot_t ___screenshot_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___screenshotProgress_padding[0x0];
      /// @brief Field screenshotProgress, offset: 0x0, size: 0x4, def value: None
      ::OVR::OpenVR::VREvent_ScreenshotProgress_t ___screenshotProgress;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___screenshotProgress_padding_forAlignment[0x0];
      /// @brief Field screenshotProgress, offset: 0x0, size: 0x4, def value: None
      ::OVR::OpenVR::VREvent_ScreenshotProgress_t ___screenshotProgress_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___applicationLaunch_padding[0x0];
      /// @brief Field applicationLaunch, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::VREvent_ApplicationLaunch_t ___applicationLaunch;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___applicationLaunch_padding_forAlignment[0x0];
      /// @brief Field applicationLaunch, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::VREvent_ApplicationLaunch_t ___applicationLaunch_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___cameraSurface_padding[0x0];
      /// @brief Field cameraSurface, offset: 0x0, size: 0x10, def value: None
      ::OVR::OpenVR::VREvent_EditingCameraSurface_t ___cameraSurface;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___cameraSurface_padding_forAlignment[0x0];
      /// @brief Field cameraSurface, offset: 0x0, size: 0x10, def value: None
      ::OVR::OpenVR::VREvent_EditingCameraSurface_t ___cameraSurface_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___messageOverlay_padding[0x0];
      /// @brief Field messageOverlay, offset: 0x0, size: 0x4, def value: None
      ::OVR::OpenVR::VREvent_MessageOverlay_t ___messageOverlay;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___messageOverlay_padding_forAlignment[0x0];
      /// @brief Field messageOverlay, offset: 0x0, size: 0x4, def value: None
      ::OVR::OpenVR::VREvent_MessageOverlay_t ___messageOverlay_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___property_padding[0x0];
      /// @brief Field property, offset: 0x0, size: 0x10, def value: None
      ::OVR::OpenVR::VREvent_Property_t ___property;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___property_padding_forAlignment[0x0];
      /// @brief Field property, offset: 0x0, size: 0x10, def value: None
      ::OVR::OpenVR::VREvent_Property_t ___property_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___dualAnalog_padding[0x0];
      /// @brief Field dualAnalog, offset: 0x0, size: 0x14, def value: None
      ::OVR::OpenVR::VREvent_DualAnalog_t ___dualAnalog;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___dualAnalog_padding_forAlignment[0x0];
      /// @brief Field dualAnalog, offset: 0x0, size: 0x14, def value: None
      ::OVR::OpenVR::VREvent_DualAnalog_t ___dualAnalog_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___hapticVibration_padding[0x0];
      /// @brief Field hapticVibration, offset: 0x0, size: 0x20, def value: None
      ::OVR::OpenVR::VREvent_HapticVibration_t ___hapticVibration;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___hapticVibration_padding_forAlignment[0x0];
      /// @brief Field hapticVibration, offset: 0x0, size: 0x20, def value: None
      ::OVR::OpenVR::VREvent_HapticVibration_t ___hapticVibration_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___webConsole_padding[0x0];
      /// @brief Field webConsole, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::VREvent_WebConsole_t ___webConsole;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___webConsole_padding_forAlignment[0x0];
      /// @brief Field webConsole, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::VREvent_WebConsole_t ___webConsole_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___inputBinding_padding[0x0];
      /// @brief Field inputBinding, offset: 0x0, size: 0x20, def value: None
      ::OVR::OpenVR::VREvent_InputBindingLoad_t ___inputBinding;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___inputBinding_padding_forAlignment[0x0];
      /// @brief Field inputBinding, offset: 0x0, size: 0x20, def value: None
      ::OVR::OpenVR::VREvent_InputBindingLoad_t ___inputBinding_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___spatialAnchor_padding[0x0];
      /// @brief Field spatialAnchor, offset: 0x0, size: 0x4, def value: None
      ::OVR::OpenVR::VREvent_SpatialAnchor_t ___spatialAnchor;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___spatialAnchor_padding_forAlignment[0x0];
      /// @brief Field spatialAnchor, offset: 0x0, size: 0x4, def value: None
      ::OVR::OpenVR::VREvent_SpatialAnchor_t ___spatialAnchor_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___keyboard_padding[0x0];
      /// @brief Field keyboard, offset: 0x0, size: 0x10, def value: None
      ::OVR::OpenVR::VREvent_Keyboard_t ___keyboard;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___keyboard_padding_forAlignment[0x0];
      /// @brief Field keyboard, offset: 0x0, size: 0x10, def value: None
      ::OVR::OpenVR::VREvent_Keyboard_t ___keyboard_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_Data_t, 0x20>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Data_t, "OVR.OpenVR", "VREvent_Data_t");
