#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SelectableStateController_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectableStateController)
namespace GlobalNamespace {
struct __SelectableStateController__ViewState;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace Tweening {
class TimeTweeningManager;
}
// Forward declare root types
namespace GlobalNamespace {
struct __SelectableStateController__ViewState;
}
namespace GlobalNamespace {
class SelectableStateController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SelectableStateController__ViewState);
MARK_REF_PTR_T(::GlobalNamespace::SelectableStateController);
// Type: ::ViewState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SelectableStateController::ViewState
struct CORDL_TYPE __SelectableStateController__ViewState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SelectableStateController__ViewState_Unwrapped
  enum struct ____SelectableStateController__ViewState_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Highlighted = static_cast<int32_t>(0x1),
    __E_Pressed = static_cast<int32_t>(0x2),
    __E_Disabled = static_cast<int32_t>(0x3),
    __E_Selected = static_cast<int32_t>(0x4),
    __E_SelectedAndHighlighted = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SelectableStateController__ViewState_Unwrapped() const noexcept {
    return static_cast<____SelectableStateController__ViewState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SelectableStateController__ViewState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SelectableStateController__ViewState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Disabled value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__SelectableStateController__ViewState const Disabled;

  /// @brief Field Highlighted value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__SelectableStateController__ViewState const Highlighted;

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__SelectableStateController__ViewState const Normal;

  /// @brief Field Pressed value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__SelectableStateController__ViewState const Pressed;

  /// @brief Field Selected value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__SelectableStateController__ViewState const Selected;

  /// @brief Field SelectedAndHighlighted value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__SelectableStateController__ViewState const SelectedAndHighlighted;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SelectableStateController__ViewState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectableStateController__ViewState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SelectableStateController
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SelectableStateController*
class CORDL_TYPE SelectableStateController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ViewState = ::GlobalNamespace::__SelectableStateController__ViewState;

  /// @brief Field <currentViewState>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__currentViewState_k__BackingField,
                      put = __cordl_internal_set__currentViewState_k__BackingField))::GlobalNamespace::__SelectableStateController__ViewState _currentViewState_k__BackingField;

  /// @brief Field _tweeningManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager))::UnityW<::Tweening::TimeTweeningManager> _tweeningManager;

  __declspec(property(get = get_currentViewState, put = set_currentViewState))::GlobalNamespace::__SelectableStateController__ViewState currentViewState;

  /// @brief Field stateDidChangeEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_stateDidChangeEvent,
                      put = __cordl_internal_set_stateDidChangeEvent))::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState, bool>* stateDidChangeEvent;

  __declspec(property(get = get_tweeningManager))::UnityW<::Tweening::TimeTweeningManager> tweeningManager;

  __declspec(property(get = get_viewState))::GlobalNamespace::__SelectableStateController__ViewState viewState;

  static inline ::GlobalNamespace::SelectableStateController* New_ctor();

  /// @brief Method SetState, addr 0x26362b0, size 0x24, virtual false, abstract: false, final false
  inline void SetState(::GlobalNamespace::__SelectableStateController__ViewState state, bool animated);

  constexpr ::GlobalNamespace::__SelectableStateController__ViewState const& __cordl_internal_get__currentViewState_k__BackingField() const;

  constexpr ::GlobalNamespace::__SelectableStateController__ViewState& __cordl_internal_get__currentViewState_k__BackingField();

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr ::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState, bool>*& __cordl_internal_get_stateDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState, bool>*> const& __cordl_internal_get_stateDidChangeEvent() const;

  constexpr void __cordl_internal_set__currentViewState_k__BackingField(::GlobalNamespace::__SelectableStateController__ViewState value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  constexpr void __cordl_internal_set_stateDidChangeEvent(::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState, bool>* value);

  /// @brief Method .ctor, addr 0x26362d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_stateDidChangeEvent, addr 0x2633780, size 0xb0, virtual false, abstract: false, final false
  inline void add_stateDidChangeEvent(::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState, bool>* value);

  /// @brief Method get_currentViewState, addr 0x26362a0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SelectableStateController__ViewState get_currentViewState();

  /// @brief Method get_tweeningManager, addr 0x2636298, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Tweening::TimeTweeningManager> get_tweeningManager();

  /// @brief Method get_viewState, addr 0x2633830, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SelectableStateController__ViewState get_viewState();

  /// @brief Method remove_stateDidChangeEvent, addr 0x26338c0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_stateDidChangeEvent(::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState, bool>* value);

  /// @brief Method set_currentViewState, addr 0x26362a8, size 0x8, virtual false, abstract: false, final false
  inline void set_currentViewState(::GlobalNamespace::__SelectableStateController__ViewState value);

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

  /// @brief Field _tweeningManager, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManager;

  /// @brief Field stateDidChangeEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::__SelectableStateController__ViewState, bool>* ___stateDidChangeEvent;

  /// @brief Field <currentViewState>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__SelectableStateController__ViewState ____currentViewState_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectableStateController, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectableStateController, ____tweeningManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectableStateController, ___stateDidChangeEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectableStateController, ____currentViewState_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SelectableStateController__ViewState, "", "SelectableStateController/ViewState");
NEED_NO_BOX(::GlobalNamespace::SelectableStateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectableStateController*, "", "SelectableStateController");
