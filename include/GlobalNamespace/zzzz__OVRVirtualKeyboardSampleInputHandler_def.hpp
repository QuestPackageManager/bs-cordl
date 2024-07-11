#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRVirtualKeyboardSampleInputHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRVirtualKeyboardSampleInputHandler)
namespace GlobalNamespace {
class OVRRaycaster;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard;
}
namespace GlobalNamespace {
struct __OVRVirtualKeyboard__InputSource;
}
namespace UnityEngine::EventSystems {
class OVRInputModule;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRVirtualKeyboardSampleInputHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler);
// Type: ::OVRVirtualKeyboardSampleInputHandler
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRVirtualKeyboardSampleInputHandler*
class CORDL_TYPE OVRVirtualKeyboardSampleInputHandler : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_AnalogStickX)) float_t AnalogStickX;

  __declspec(property(get = get_AnalogStickY)) float_t AnalogStickY;

  __declspec(property(get = get_InputRayPosition))::UnityEngine::Vector3 InputRayPosition;

  __declspec(property(get = get_InputRayRotation))::UnityEngine::Quaternion InputRayRotation;

  /// @brief Field OVRVirtualKeyboard, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_OVRVirtualKeyboard, put = __cordl_internal_set_OVRVirtualKeyboard))::UnityW<::GlobalNamespace::OVRVirtualKeyboard> OVRVirtualKeyboard;

  /// @brief Field inputModule, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_inputModule, put = __cordl_internal_set_inputModule))::UnityW<::UnityEngine::EventSystems::OVRInputModule> inputModule;

  /// @brief Field interactionDevice_, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_interactionDevice_, put = __cordl_internal_set_interactionDevice_))::System::Nullable_1<::GlobalNamespace::__OVRInput__Controller> interactionDevice_;

  /// @brief Field leftLinePointer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_leftLinePointer, put = __cordl_internal_set_leftLinePointer))::UnityW<::UnityEngine::LineRenderer> leftLinePointer;

  /// @brief Field linePointerInitialWidth_, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_linePointerInitialWidth_, put = __cordl_internal_set_linePointerInitialWidth_)) float_t linePointerInitialWidth_;

  /// @brief Field raycaster, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_raycaster, put = __cordl_internal_set_raycaster))::UnityW<::GlobalNamespace::OVRRaycaster> raycaster;

  /// @brief Field rightLinePointer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_rightLinePointer, put = __cordl_internal_set_rightLinePointer))::UnityW<::UnityEngine::LineRenderer> rightLinePointer;

  /// @brief Method ApplyDeadzone, addr 0x2ba90b0, size 0x50, virtual false, abstract: false, final false
  static inline float_t ApplyDeadzone(float_t value);

  static inline ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler* New_ctor();

  /// @brief Method Start, addr 0x2ba9100, size 0xc4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2ba91c4, size 0x18, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateInteractionAnchor, addr 0x2ba91dc, size 0x2b8, virtual false, abstract: false, final false
  inline void UpdateInteractionAnchor();

  /// @brief Method UpdateLineRenderer, addr 0x2ba9494, size 0x68, virtual false, abstract: false, final false
  inline void UpdateLineRenderer();

  /// @brief Method UpdateLineRendererFromSource, addr 0x2ba94fc, size 0x6e0, virtual false, abstract: false, final false
  inline void UpdateLineRendererFromSource(::GlobalNamespace::__OVRVirtualKeyboard__InputSource source);

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> const& __cordl_internal_get_OVRVirtualKeyboard() const;

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard>& __cordl_internal_get_OVRVirtualKeyboard();

  constexpr ::UnityW<::UnityEngine::EventSystems::OVRInputModule> const& __cordl_internal_get_inputModule() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::OVRInputModule>& __cordl_internal_get_inputModule();

  constexpr ::System::Nullable_1<::GlobalNamespace::__OVRInput__Controller> const& __cordl_internal_get_interactionDevice_() const;

  constexpr ::System::Nullable_1<::GlobalNamespace::__OVRInput__Controller>& __cordl_internal_get_interactionDevice_();

  constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_leftLinePointer() const;

  constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_leftLinePointer();

  constexpr float_t const& __cordl_internal_get_linePointerInitialWidth_() const;

  constexpr float_t& __cordl_internal_get_linePointerInitialWidth_();

  constexpr ::UnityW<::GlobalNamespace::OVRRaycaster> const& __cordl_internal_get_raycaster() const;

  constexpr ::UnityW<::GlobalNamespace::OVRRaycaster>& __cordl_internal_get_raycaster();

  constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_rightLinePointer() const;

  constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_rightLinePointer();

  constexpr void __cordl_internal_set_OVRVirtualKeyboard(::UnityW<::GlobalNamespace::OVRVirtualKeyboard> value);

  constexpr void __cordl_internal_set_inputModule(::UnityW<::UnityEngine::EventSystems::OVRInputModule> value);

  constexpr void __cordl_internal_set_interactionDevice_(::System::Nullable_1<::GlobalNamespace::__OVRInput__Controller> value);

  constexpr void __cordl_internal_set_leftLinePointer(::UnityW<::UnityEngine::LineRenderer> value);

  constexpr void __cordl_internal_set_linePointerInitialWidth_(float_t value);

  constexpr void __cordl_internal_set_raycaster(::UnityW<::GlobalNamespace::OVRRaycaster> value);

  constexpr void __cordl_internal_set_rightLinePointer(::UnityW<::UnityEngine::LineRenderer> value);

  /// @brief Method .ctor, addr 0x2ba9bdc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AnalogStickX, addr 0x2ba8e44, size 0xc4, virtual false, abstract: false, final false
  inline float_t get_AnalogStickX();

  /// @brief Method get_AnalogStickY, addr 0x2ba8d80, size 0xc4, virtual false, abstract: false, final false
  inline float_t get_AnalogStickY();

  /// @brief Method get_InputRayPosition, addr 0x2ba8858, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_InputRayPosition();

  /// @brief Method get_InputRayRotation, addr 0x2ba8f08, size 0x198, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_InputRayRotation();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboardSampleInputHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardSampleInputHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboardSampleInputHandler(OVRVirtualKeyboardSampleInputHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardSampleInputHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboardSampleInputHandler(OVRVirtualKeyboardSampleInputHandler const&) = delete;

  /// @brief Field OVRVirtualKeyboard, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> ___OVRVirtualKeyboard;

  /// @brief Field raycaster, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRRaycaster> ___raycaster;

  /// @brief Field inputModule, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::OVRInputModule> ___inputModule;

  /// @brief Field leftLinePointer, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::LineRenderer> ___leftLinePointer;

  /// @brief Field rightLinePointer, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::LineRenderer> ___rightLinePointer;

  /// @brief Field interactionDevice_, offset: 0x40, size: 0x8, def value: None
  ::System::Nullable_1<::GlobalNamespace::__OVRInput__Controller> ___interactionDevice_;

  /// @brief Field linePointerInitialWidth_, offset: 0x48, size: 0x4, def value: None
  float_t ___linePointerInitialWidth_;

  /// @brief Field COLLISION_BOUNDS_ADDED_BLEED_PERCENT offset 0xffffffff size 0x4
  static constexpr float_t COLLISION_BOUNDS_ADDED_BLEED_PERCENT{ 0.1 };

  /// @brief Field LINEPOINTER_THINNING_THRESHOLD offset 0xffffffff size 0x4
  static constexpr float_t LINEPOINTER_THINNING_THRESHOLD{ 0.015 };

  /// @brief Field RAY_MAX_DISTANCE offset 0xffffffff size 0x4
  static constexpr float_t RAY_MAX_DISTANCE{ 100.0 };

  /// @brief Field THUMBSTICK_DEADZONE offset 0xffffffff size 0x4
  static constexpr float_t THUMBSTICK_DEADZONE{ 0.2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler, ___OVRVirtualKeyboard) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler, ___raycaster) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler, ___inputModule) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler, ___leftLinePointer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler, ___rightLinePointer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler, ___interactionDevice_) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler, ___linePointerInitialWidth_) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*, "", "OVRVirtualKeyboardSampleInputHandler");
