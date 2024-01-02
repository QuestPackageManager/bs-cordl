#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
CORDL_MODULE_EXPORT(MouseButtonEventData)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace VRUIControls {
class MouseButtonEventData;
}
// Write type traits
MARK_REF_PTR_T(::VRUIControls::MouseButtonEventData);
// Type: VRUIControls::MouseButtonEventData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace VRUIControls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(13167))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15669))
// CS Name: ::VRUIControls::MouseButtonEventData*
class CORDL_TYPE MouseButtonEventData : public ::System::Object {
public:
  // Declarations
  /// @brief Field buttonState, offset 0x10, size 0x4
  __declspec(property(get = __get_buttonState, put = __set_buttonState))::UnityEngine::EventSystems::__PointerEventData__FramePressState buttonState;

  /// @brief Field buttonData, offset 0x18, size 0x8
  __declspec(property(get = __get_buttonData, put = __set_buttonData))::UnityEngine::EventSystems::PointerEventData* buttonData;

  constexpr ::UnityEngine::EventSystems::__PointerEventData__FramePressState& __get_buttonState();

  constexpr ::UnityEngine::EventSystems::__PointerEventData__FramePressState const& __get_buttonState() const;

  constexpr void __set_buttonState(::UnityEngine::EventSystems::__PointerEventData__FramePressState value);

  constexpr ::UnityEngine::EventSystems::PointerEventData*& __get_buttonData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::PointerEventData*> const& __get_buttonData() const;

  constexpr void __set_buttonData(::UnityEngine::EventSystems::PointerEventData* value);

  /// @brief Method PressedThisFrame, addr 0x2eb41a8, size 0x10, virtual false, abstract: false, final false
  inline bool PressedThisFrame();

  /// @brief Method ReleasedThisFrame, addr 0x2eb41b8, size 0x14, virtual false, abstract: false, final false
  inline bool ReleasedThisFrame();

  static inline ::VRUIControls::MouseButtonEventData* New_ctor();

  /// @brief Method .ctor, addr 0x2eb41cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MouseButtonEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseButtonEventData(MouseButtonEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseButtonEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseButtonEventData(MouseButtonEventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseButtonEventData();

public:
  /// @brief Field buttonState, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::EventSystems::__PointerEventData__FramePressState ___buttonState;

  /// @brief Field buttonData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::EventSystems::PointerEventData* ___buttonData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRUIControls::MouseButtonEventData, 0x20>, "Size mismatch!");

static_assert(offsetof(::VRUIControls::MouseButtonEventData, ___buttonState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::MouseButtonEventData, ___buttonData) == 0x18, "Offset mismatch!");

} // namespace VRUIControls
NEED_NO_BOX(::VRUIControls::MouseButtonEventData);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::MouseButtonEventData*, "VRUIControls", "MouseButtonEventData");
