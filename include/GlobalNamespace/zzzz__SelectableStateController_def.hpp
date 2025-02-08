#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectableStateController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectableStateController)
namespace GlobalNamespace {
struct SelectableStateController_ViewState;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace Tweening {
class TimeTweeningManager;
}
// Forward declare root types
namespace GlobalNamespace {
struct SelectableStateController_ViewState;
}
namespace GlobalNamespace {
class SelectableStateController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SelectableStateController_ViewState);
MARK_REF_PTR_T(::GlobalNamespace::SelectableStateController);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: SelectableStateController/ViewState
struct CORDL_TYPE SelectableStateController_ViewState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SelectableStateController_ViewState_Unwrapped
  enum struct __SelectableStateController_ViewState_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Highlighted = static_cast<int32_t>(0x1),
    __E_Pressed = static_cast<int32_t>(0x2),
    __E_Disabled = static_cast<int32_t>(0x3),
    __E_Selected = static_cast<int32_t>(0x4),
    __E_SelectedAndHighlighted = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SelectableStateController_ViewState_Unwrapped() const noexcept {
    return static_cast<__SelectableStateController_ViewState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectableStateController_ViewState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SelectableStateController_ViewState(int32_t value__) noexcept;

  /// @brief Field Disabled value: I32(3)
  static ::GlobalNamespace::SelectableStateController_ViewState const Disabled;

  /// @brief Field Highlighted value: I32(1)
  static ::GlobalNamespace::SelectableStateController_ViewState const Highlighted;

  /// @brief Field Normal value: I32(0)
  static ::GlobalNamespace::SelectableStateController_ViewState const Normal;

  /// @brief Field Pressed value: I32(2)
  static ::GlobalNamespace::SelectableStateController_ViewState const Pressed;

  /// @brief Field Selected value: I32(4)
  static ::GlobalNamespace::SelectableStateController_ViewState const Selected;

  /// @brief Field SelectedAndHighlighted value: I32(5)
  static ::GlobalNamespace::SelectableStateController_ViewState const SelectedAndHighlighted;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18208 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SelectableStateController_ViewState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectableStateController_ViewState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies SelectableStateController::ViewState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SelectableStateController
class CORDL_TYPE SelectableStateController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ViewState = ::GlobalNamespace::SelectableStateController_ViewState;

  /// @brief Field <currentViewState>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__currentViewState_k__BackingField,
                      put = __cordl_internal_set__currentViewState_k__BackingField)) ::GlobalNamespace::SelectableStateController_ViewState _currentViewState_k__BackingField;

  /// @brief Field _tweeningManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager)) ::UnityW<::Tweening::TimeTweeningManager> _tweeningManager;

  __declspec(property(get = get_currentViewState, put = set_currentViewState)) ::GlobalNamespace::SelectableStateController_ViewState currentViewState;

  /// @brief Field stateDidChangeEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_stateDidChangeEvent,
                      put = __cordl_internal_set_stateDidChangeEvent)) ::System::Action_2<::GlobalNamespace::SelectableStateController_ViewState, bool>* stateDidChangeEvent;

  __declspec(property(get = get_tweeningManager)) ::UnityW<::Tweening::TimeTweeningManager> tweeningManager;

  static inline ::GlobalNamespace::SelectableStateController* New_ctor();

  /// @brief Method SetState, addr 0x44dd44c, size 0x24, virtual false, abstract: false, final false
  inline void SetState(::GlobalNamespace::SelectableStateController_ViewState state, bool animated);

  constexpr ::GlobalNamespace::SelectableStateController_ViewState const& __cordl_internal_get__currentViewState_k__BackingField() const;

  constexpr ::GlobalNamespace::SelectableStateController_ViewState& __cordl_internal_get__currentViewState_k__BackingField();

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr ::System::Action_2<::GlobalNamespace::SelectableStateController_ViewState, bool>* const& __cordl_internal_get_stateDidChangeEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::SelectableStateController_ViewState, bool>*& __cordl_internal_get_stateDidChangeEvent();

  constexpr void __cordl_internal_set__currentViewState_k__BackingField(::GlobalNamespace::SelectableStateController_ViewState value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  constexpr void __cordl_internal_set_stateDidChangeEvent(::System::Action_2<::GlobalNamespace::SelectableStateController_ViewState, bool>* value);

  /// @brief Method .ctor, addr 0x44dd470, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_stateDidChangeEvent, addr 0x44da560, size 0xb0, virtual false, abstract: false, final false
  inline void add_stateDidChangeEvent(::System::Action_2<::GlobalNamespace::SelectableStateController_ViewState, bool>* value);

  /// @brief Method get_currentViewState, addr 0x44dd43c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SelectableStateController_ViewState get_currentViewState();

  /// @brief Method get_tweeningManager, addr 0x44dd434, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Tweening::TimeTweeningManager> get_tweeningManager();

  /// @brief Method remove_stateDidChangeEvent, addr 0x44da69c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_stateDidChangeEvent(::System::Action_2<::GlobalNamespace::SelectableStateController_ViewState, bool>* value);

  /// @brief Method set_currentViewState, addr 0x44dd444, size 0x8, virtual false, abstract: false, final false
  inline void set_currentViewState(::GlobalNamespace::SelectableStateController_ViewState value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectableStateController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectableStateController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectableStateController(SelectableStateController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectableStateController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectableStateController(SelectableStateController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18209 };

  /// @brief Field _tweeningManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManager;

  /// @brief Field stateDidChangeEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::SelectableStateController_ViewState, bool>* ___stateDidChangeEvent;

  /// @brief Field <currentViewState>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::SelectableStateController_ViewState ____currentViewState_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SelectableStateController, ____tweeningManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectableStateController, ___stateDidChangeEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectableStateController, ____currentViewState_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectableStateController, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectableStateController_ViewState, "", "SelectableStateController/ViewState");
NEED_NO_BOX(::GlobalNamespace::SelectableStateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectableStateController*, "", "SelectableStateController");
