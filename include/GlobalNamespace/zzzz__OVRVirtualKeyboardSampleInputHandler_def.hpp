#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRVirtualKeyboardSampleInputHandler)
namespace GlobalNamespace {
class OVRVirtualKeyboard;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class OVRRaycaster;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class LineRenderer;
}
namespace GlobalNamespace {
struct __OVRVirtualKeyboard__InputSource;
}
namespace UnityEngine::EventSystems {
class OVRInputModule;
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
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4771 }), TypeDefinitionIndex(TypeDefinitionIndex(2448)),
// TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(7598))} Self: TypeDefinitionIndex(TypeDefinitionIndex(8062)) CS Name:
// ::OVRVirtualKeyboardSampleInputHandler*
class CORDL_TYPE OVRVirtualKeyboardSampleInputHandler : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field OVRVirtualKeyboard, offset 0x18, size 0x8
  __declspec(property(get = __get_OVRVirtualKeyboard, put = __set_OVRVirtualKeyboard))::GlobalNamespace::OVRVirtualKeyboard* OVRVirtualKeyboard;

  /// @brief Field raycaster, offset 0x20, size 0x8
  __declspec(property(get = __get_raycaster, put = __set_raycaster))::GlobalNamespace::OVRRaycaster* raycaster;

  /// @brief Field inputModule, offset 0x28, size 0x8
  __declspec(property(get = __get_inputModule, put = __set_inputModule))::UnityEngine::EventSystems::OVRInputModule* inputModule;

  /// @brief Field leftLinePointer, offset 0x30, size 0x8
  __declspec(property(get = __get_leftLinePointer, put = __set_leftLinePointer))::UnityEngine::LineRenderer* leftLinePointer;

  /// @brief Field rightLinePointer, offset 0x38, size 0x8
  __declspec(property(get = __get_rightLinePointer, put = __set_rightLinePointer))::UnityEngine::LineRenderer* rightLinePointer;

  /// @brief Field interactionDevice_, offset 0x40, size 0x8
  __declspec(property(get = __get_interactionDevice_, put = __set_interactionDevice_))::System::Nullable_1<::GlobalNamespace::__OVRInput__Controller> interactionDevice_;

  /// @brief Field linePointerInitialWidth_, offset 0x48, size 0x4
  __declspec(property(get = __get_linePointerInitialWidth_, put = __set_linePointerInitialWidth_)) float_t linePointerInitialWidth_;

  __declspec(property(get = get_AnalogStickX)) float_t AnalogStickX;

  __declspec(property(get = get_AnalogStickY)) float_t AnalogStickY;

  __declspec(property(get = get_InputRayPosition))::UnityEngine::Vector3 InputRayPosition;

  __declspec(property(get = get_InputRayRotation))::UnityEngine::Quaternion InputRayRotation;

  constexpr ::GlobalNamespace::OVRVirtualKeyboard*& __get_OVRVirtualKeyboard();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRVirtualKeyboard*> const& __get_OVRVirtualKeyboard() const;

  constexpr void __set_OVRVirtualKeyboard(::GlobalNamespace::OVRVirtualKeyboard* value);

  constexpr ::GlobalNamespace::OVRRaycaster*& __get_raycaster();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRRaycaster*> const& __get_raycaster() const;

  constexpr void __set_raycaster(::GlobalNamespace::OVRRaycaster* value);

  constexpr ::UnityEngine::EventSystems::OVRInputModule*& __get_inputModule();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::OVRInputModule*> const& __get_inputModule() const;

  constexpr void __set_inputModule(::UnityEngine::EventSystems::OVRInputModule* value);

  constexpr ::UnityEngine::LineRenderer*& __get_leftLinePointer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::LineRenderer*> const& __get_leftLinePointer() const;

  constexpr void __set_leftLinePointer(::UnityEngine::LineRenderer* value);

  constexpr ::UnityEngine::LineRenderer*& __get_rightLinePointer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::LineRenderer*> const& __get_rightLinePointer() const;

  constexpr void __set_rightLinePointer(::UnityEngine::LineRenderer* value);

  constexpr ::System::Nullable_1<::GlobalNamespace::__OVRInput__Controller>& __get_interactionDevice_();

  constexpr ::System::Nullable_1<::GlobalNamespace::__OVRInput__Controller> const& __get_interactionDevice_() const;

  constexpr void __set_interactionDevice_(::System::Nullable_1<::GlobalNamespace::__OVRInput__Controller> value);

  constexpr float_t& __get_linePointerInitialWidth_();

  constexpr float_t const& __get_linePointerInitialWidth_() const;

  constexpr void __set_linePointerInitialWidth_(float_t value);

  /// @brief Method ApplyDeadzone, addr 0x27a0040, size 0x50, virtual false, abstract: false, final false
  static inline float_t ApplyDeadzone(float_t value);

  /// @brief Method get_AnalogStickX, addr 0x279fdd4, size 0xc4, virtual false, abstract: false, final false
  inline float_t get_AnalogStickX();

  /// @brief Method get_AnalogStickY, addr 0x279fd10, size 0xc4, virtual false, abstract: false, final false
  inline float_t get_AnalogStickY();

  /// @brief Method get_InputRayPosition, addr 0x279f7e8, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_InputRayPosition();

  /// @brief Method get_InputRayRotation, addr 0x279fe98, size 0x198, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_InputRayRotation();

  /// @brief Method Start, addr 0x27a0090, size 0xc4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x27a0154, size 0x18, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateLineRenderer, addr 0x27a0424, size 0x68, virtual false, abstract: false, final false
  inline void UpdateLineRenderer();

  /// @brief Method UpdateLineRendererFromSource, addr 0x27a048c, size 0x6e0, virtual false, abstract: false, final false
  inline void UpdateLineRendererFromSource(::GlobalNamespace::__OVRVirtualKeyboard__InputSource source);

  /// @brief Method UpdateInteractionAnchor, addr 0x27a016c, size 0x2b8, virtual false, abstract: false, final false
  inline void UpdateInteractionAnchor();

  static inline ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler* New_ctor();

  /// @brief Method .ctor, addr 0x27a0b6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardSampleInputHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboardSampleInputHandler(OVRVirtualKeyboardSampleInputHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardSampleInputHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboardSampleInputHandler(OVRVirtualKeyboardSampleInputHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboardSampleInputHandler();

public:
  /// @brief Field OVRVirtualKeyboard, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OVRVirtualKeyboard* ___OVRVirtualKeyboard;

  /// @brief Field raycaster, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRRaycaster* ___raycaster;

  /// @brief Field inputModule, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::EventSystems::OVRInputModule* ___inputModule;

  /// @brief Field leftLinePointer, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::LineRenderer* ___leftLinePointer;

  /// @brief Field rightLinePointer, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::LineRenderer* ___rightLinePointer;

  /// @brief Field interactionDevice_, offset: 0x40, size: 0x8, def value: None
  ::System::Nullable_1<::GlobalNamespace::__OVRInput__Controller> ___interactionDevice_;

  /// @brief Field linePointerInitialWidth_, offset: 0x48, size: 0x4, def value: None
  float_t ___linePointerInitialWidth_;

  /// @brief Field RAY_MAX_DISTANCE offset 0xffffffff size 0x4
  static constexpr float_t RAY_MAX_DISTANCE{ 100.0 };

  /// @brief Field THUMBSTICK_DEADZONE offset 0xffffffff size 0x4
  static constexpr float_t THUMBSTICK_DEADZONE{ 0.2 };

  /// @brief Field COLLISION_BOUNDS_ADDED_BLEED_PERCENT offset 0xffffffff size 0x4
  static constexpr float_t COLLISION_BOUNDS_ADDED_BLEED_PERCENT{ 0.1 };

  /// @brief Field LINEPOINTER_THINNING_THRESHOLD offset 0xffffffff size 0x4
  static constexpr float_t LINEPOINTER_THINNING_THRESHOLD{ 0.015 };

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
