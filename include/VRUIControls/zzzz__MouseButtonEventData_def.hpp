#pragma once
// IWYU pragma private; include "VRUIControls/MouseButtonEventData.hpp"
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
// Dependencies System.Object, UnityEngine.EventSystems.PointerEventData::FramePressState
namespace VRUIControls {
// Is value type: false
// CS Name: VRUIControls.MouseButtonEventData
class CORDL_TYPE MouseButtonEventData : public ::System::Object {
public:
  // Declarations
  /// @brief Field buttonData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_buttonData, put = __cordl_internal_set_buttonData)) ::UnityEngine::EventSystems::PointerEventData* buttonData;

  /// @brief Field buttonState, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_buttonState, put = __cordl_internal_set_buttonState)) ::UnityEngine::EventSystems::PointerEventData_FramePressState buttonState;

  static inline ::VRUIControls::MouseButtonEventData* New_ctor();

  /// @brief Method PressedThisFrame, addr 0x4aeccfc, size 0x10, virtual false, abstract: false, final false
  inline bool PressedThisFrame();

  /// @brief Method ReleasedThisFrame, addr 0x4aecd0c, size 0x14, virtual false, abstract: false, final false
  inline bool ReleasedThisFrame();

  constexpr ::UnityEngine::EventSystems::PointerEventData* const& __cordl_internal_get_buttonData() const;

  constexpr ::UnityEngine::EventSystems::PointerEventData*& __cordl_internal_get_buttonData();

  constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState const& __cordl_internal_get_buttonState() const;

  constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState& __cordl_internal_get_buttonState();

  constexpr void __cordl_internal_set_buttonData(::UnityEngine::EventSystems::PointerEventData* value);

  constexpr void __cordl_internal_set_buttonState(::UnityEngine::EventSystems::PointerEventData_FramePressState value);

  /// @brief Method .ctor, addr 0x4aecd20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseButtonEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseButtonEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseButtonEventData(MouseButtonEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseButtonEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseButtonEventData(MouseButtonEventData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18257 };

  /// @brief Field buttonState, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::EventSystems::PointerEventData_FramePressState ___buttonState;

  /// @brief Field buttonData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::EventSystems::PointerEventData* ___buttonData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VRUIControls::MouseButtonEventData, ___buttonState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::MouseButtonEventData, ___buttonData) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VRUIControls::MouseButtonEventData, 0x20>, "Size mismatch!");

} // namespace VRUIControls
NEED_NO_BOX(::VRUIControls::MouseButtonEventData);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::MouseButtonEventData*, "VRUIControls", "MouseButtonEventData");
