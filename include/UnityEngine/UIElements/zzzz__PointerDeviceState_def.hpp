#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerDeviceState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerDeviceState)
namespace UnityEngine::UIElements {
struct ContextType;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
struct PointerDeviceState_LocationFlag;
}
namespace UnityEngine::UIElements {
struct PointerDeviceState_PointerLocation;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct PointerDeviceState_LocationFlag;
}
namespace UnityEngine::UIElements {
class PointerDeviceState;
}
namespace UnityEngine::UIElements {
struct PointerDeviceState_PointerLocation;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::PointerDeviceState_LocationFlag);
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerDeviceState);
MARK_VAL_T(::UnityEngine::UIElements::PointerDeviceState_PointerLocation);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.PointerDeviceState/LocationFlag
struct CORDL_TYPE PointerDeviceState_LocationFlag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PointerDeviceState_LocationFlag_Unwrapped
  enum struct __PointerDeviceState_LocationFlag_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_OutsidePanel = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PointerDeviceState_LocationFlag_Unwrapped() const noexcept {
    return static_cast<__PointerDeviceState_LocationFlag_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerDeviceState_LocationFlag();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PointerDeviceState_LocationFlag(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::PointerDeviceState_LocationFlag const None;

  /// @brief Field OutsidePanel value: I32(1)
  static ::UnityEngine::UIElements::PointerDeviceState_LocationFlag const OutsidePanel;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4530 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PointerDeviceState_LocationFlag, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerDeviceState_LocationFlag, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.PointerDeviceState::LocationFlag, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.PointerDeviceState/PointerLocation
struct CORDL_TYPE PointerDeviceState_PointerLocation {
public:
  // Declarations
  __declspec(property(get = get_Flags, put = set_Flags)) ::UnityEngine::UIElements::PointerDeviceState_LocationFlag Flags;

  __declspec(property(get = get_Panel, put = set_Panel)) ::UnityEngine::UIElements::IPanel* Panel;

  __declspec(property(get = get_Position, put = set_Position)) ::UnityEngine::Vector2 Position;

  /// @brief Method SetLocation, addr 0x6b6e520, size 0x100, virtual false, abstract: false, final false
  inline void SetLocation(::UnityEngine::Vector2 position, ::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method get_Flags, addr 0x6b6edb4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PointerDeviceState_LocationFlag get_Flags();

  /// @brief Method get_Panel, addr 0x6b6eda4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IPanel* get_Panel();

  /// @brief Method get_Position, addr 0x6b6ed94, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_Position();

  /// @brief Method set_Flags, addr 0x6b6edbc, size 0x8, virtual false, abstract: false, final false
  inline void set_Flags(::UnityEngine::UIElements::PointerDeviceState_LocationFlag value);

  /// @brief Method set_Panel, addr 0x6b6edac, size 0x8, virtual false, abstract: false, final false
  inline void set_Panel(::UnityEngine::UIElements::IPanel* value);

  /// @brief Method set_Position, addr 0x6b6ed9c, size 0x8, virtual false, abstract: false, final false
  inline void set_Position(::UnityEngine::Vector2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerDeviceState_PointerLocation();

  // Ctor Parameters [CppParam { name: "_Position_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_Panel_k__BackingField", ty:
  // "::UnityEngine::UIElements::IPanel*", modifiers: "", def_value: None }, CppParam { name: "_Flags_k__BackingField", ty: "::UnityEngine::UIElements::PointerDeviceState_LocationFlag", modifiers: "",
  // def_value: None }]
  constexpr PointerDeviceState_PointerLocation(::UnityEngine::Vector2 _Position_k__BackingField, ::UnityEngine::UIElements::IPanel* _Panel_k__BackingField,
                                               ::UnityEngine::UIElements::PointerDeviceState_LocationFlag _Flags_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4531 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field <Position>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 _Position_k__BackingField;

  /// @brief Field <Panel>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::IPanel* _Panel_k__BackingField;

  /// @brief Field <Flags>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::UIElements::PointerDeviceState_LocationFlag _Flags_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PointerDeviceState_PointerLocation, _Position_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PointerDeviceState_PointerLocation, _Panel_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PointerDeviceState_PointerLocation, _Flags_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerDeviceState_PointerLocation, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerDeviceState
class CORDL_TYPE PointerDeviceState : public ::System::Object {
public:
  // Declarations
  using LocationFlag = ::UnityEngine::UIElements::PointerDeviceState_LocationFlag;

  using PointerLocation = ::UnityEngine::UIElements::PointerDeviceState_PointerLocation;

  /// @brief Field s_PlayerPanelWithSoftPointerCapture, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PlayerPanelWithSoftPointerCapture,
                      put = setStaticF_s_PlayerPanelWithSoftPointerCapture)) ::ArrayW<::UnityEngine::UIElements::IPanel*, ::Array<::UnityEngine::UIElements::IPanel*>*>
      s_PlayerPanelWithSoftPointerCapture;

  /// @brief Field s_PlayerPointerLocations, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_s_PlayerPointerLocations,
      put = setStaticF_s_PlayerPointerLocations)) ::ArrayW<::UnityEngine::UIElements::PointerDeviceState_PointerLocation, ::Array<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>*>
      s_PlayerPointerLocations;

  /// @brief Field s_PressedButtons, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PressedButtons, put = setStaticF_s_PressedButtons)) ::ArrayW<int32_t, ::Array<int32_t>*> s_PressedButtons;

  /// @brief Method GetPanel, addr 0x6b6e908, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::IPanel* GetPanel(int32_t pointerId, ::UnityEngine::UIElements::ContextType contextType);

  /// @brief Method GetPlayerPanelWithSoftPointerCapture, addr 0x6b6ec00, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::IPanel* GetPlayerPanelWithSoftPointerCapture(int32_t pointerId);

  /// @brief Method GetPointerPosition, addr 0x6b634c0, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetPointerPosition(int32_t pointerId, ::UnityEngine::UIElements::ContextType contextType);

  /// @brief Method GetPressedButtons, addr 0x6b6ea34, size 0x80, virtual false, abstract: false, final false
  static inline int32_t GetPressedButtons(int32_t pointerId);

  /// @brief Method HasAdditionalPressedButtons, addr 0x6b6eab4, size 0x9c, virtual false, abstract: false, final false
  static inline bool HasAdditionalPressedButtons(int32_t pointerId, int32_t exceptButtonId);

  /// @brief Method HasFlagFast, addr 0x6b6e98c, size 0xc, virtual false, abstract: false, final false
  static inline bool HasFlagFast(::UnityEngine::UIElements::PointerDeviceState_LocationFlag flagSet, ::UnityEngine::UIElements::PointerDeviceState_LocationFlag flag);

  /// @brief Method HasLocationFlag, addr 0x6b6e998, size 0x9c, virtual false, abstract: false, final false
  static inline bool HasLocationFlag(int32_t pointerId, ::UnityEngine::UIElements::ContextType contextType, ::UnityEngine::UIElements::PointerDeviceState_LocationFlag flag);

  /// @brief Method PressButton, addr 0x6b6e6d0, size 0x11c, virtual false, abstract: false, final false
  static inline void PressButton(int32_t pointerId, int32_t buttonId);

  /// @brief Method ReleaseAllButtons, addr 0x6b6c400, size 0x80, virtual false, abstract: false, final false
  static inline void ReleaseAllButtons(int32_t pointerId);

  /// @brief Method ReleaseButton, addr 0x6b6e7ec, size 0x11c, virtual false, abstract: false, final false
  static inline void ReleaseButton(int32_t pointerId, int32_t buttonId);

  /// @brief Method RemovePanelData, addr 0x6b6e324, size 0x1fc, virtual false, abstract: false, final false
  static inline void RemovePanelData(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method SavePointerPosition, addr 0x6b6e620, size 0xb0, virtual false, abstract: false, final false
  static inline void SavePointerPosition(int32_t pointerId, ::UnityEngine::Vector2 position, ::UnityEngine::UIElements::IPanel* panel, ::UnityEngine::UIElements::ContextType contextType);

  /// @brief Method SetPlayerPanelWithSoftPointerCapture, addr 0x6b6eb50, size 0xb0, virtual false, abstract: false, final false
  static inline void SetPlayerPanelWithSoftPointerCapture(int32_t pointerId, ::UnityEngine::UIElements::IPanel* panel);

  static inline ::ArrayW<::UnityEngine::UIElements::IPanel*, ::Array<::UnityEngine::UIElements::IPanel*>*> getStaticF_s_PlayerPanelWithSoftPointerCapture();

  static inline ::ArrayW<::UnityEngine::UIElements::PointerDeviceState_PointerLocation, ::Array<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>*> getStaticF_s_PlayerPointerLocations();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_PressedButtons();

  static inline void setStaticF_s_PlayerPanelWithSoftPointerCapture(::ArrayW<::UnityEngine::UIElements::IPanel*, ::Array<::UnityEngine::UIElements::IPanel*>*> value);

  static inline void
  setStaticF_s_PlayerPointerLocations(::ArrayW<::UnityEngine::UIElements::PointerDeviceState_PointerLocation, ::Array<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>*> value);

  static inline void setStaticF_s_PressedButtons(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerDeviceState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerDeviceState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerDeviceState(PointerDeviceState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerDeviceState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerDeviceState(PointerDeviceState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4532 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerDeviceState, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerDeviceState_LocationFlag, "UnityEngine.UIElements", "PointerDeviceState/LocationFlag");
NEED_NO_BOX(::UnityEngine::UIElements::PointerDeviceState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerDeviceState*, "UnityEngine.UIElements", "PointerDeviceState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerDeviceState_PointerLocation, "UnityEngine.UIElements", "PointerDeviceState/PointerLocation");
