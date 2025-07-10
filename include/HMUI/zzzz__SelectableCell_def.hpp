#pragma once
// IWYU pragma private; include "HMUI/SelectableCell.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__Interactable_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectableCell)
namespace GlobalNamespace {
class Signal;
}
namespace HMUI {
struct SelectableCell_TransitionType;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace HMUI {
struct SelectableCell_TransitionType;
}
namespace HMUI {
class SelectableCell;
}
// Write type traits
MARK_VAL_T(::HMUI::SelectableCell_TransitionType);
MARK_REF_PTR_T(::HMUI::SelectableCell);
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.SelectableCell/TransitionType
struct CORDL_TYPE SelectableCell_TransitionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SelectableCell_TransitionType_Unwrapped
  enum struct __SelectableCell_TransitionType_Unwrapped : int32_t {
    __E_Instant = static_cast<int32_t>(0x0),
    __E_Animated = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SelectableCell_TransitionType_Unwrapped() const noexcept {
    return static_cast<__SelectableCell_TransitionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectableCell_TransitionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SelectableCell_TransitionType(int32_t value__) noexcept;

  /// @brief Field Animated value: I32(1)
  static ::HMUI::SelectableCell_TransitionType const Animated;

  /// @brief Field Instant value: I32(0)
  static ::HMUI::SelectableCell_TransitionType const Instant;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16107 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::SelectableCell_TransitionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::SelectableCell_TransitionType, 0x4>, "Size mismatch!");

} // namespace HMUI
// Dependencies HMUI.Interactable, UnityEngine.EventSystems.IEventSystemHandler, UnityEngine.EventSystems.IPointerClickHandler, UnityEngine.EventSystems.IPointerEnterHandler,
// UnityEngine.EventSystems.IPointerExitHandler, UnityEngine.EventSystems.ISubmitHandler
namespace HMUI {
// Is value type: false
// CS Name: HMUI.SelectableCell
class CORDL_TYPE SelectableCell : public ::HMUI::Interactable {
public:
  // Declarations
  using TransitionType = ::HMUI::SelectableCell_TransitionType;

  /// @brief Field <highlighted>k__BackingField, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__highlighted_k__BackingField, put = __cordl_internal_set__highlighted_k__BackingField)) bool _highlighted_k__BackingField;

  /// @brief Field <selected>k__BackingField, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get__selected_k__BackingField, put = __cordl_internal_set__selected_k__BackingField)) bool _selected_k__BackingField;

  /// @brief Field _wasPressedSignal, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__wasPressedSignal, put = __cordl_internal_set__wasPressedSignal)) ::UnityW<::GlobalNamespace::Signal> _wasPressedSignal;

  /// @brief Field highlightDidChangeEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_highlightDidChangeEvent,
                      put = __cordl_internal_set_highlightDidChangeEvent)) ::System::Action_2<::UnityW<::HMUI::SelectableCell>, ::HMUI::SelectableCell_TransitionType>* highlightDidChangeEvent;

  __declspec(property(get = get_highlighted, put = set_highlighted)) bool highlighted;

  /// @brief Field nonInteractableCellWasPressedEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_nonInteractableCellWasPressedEvent,
                      put = __cordl_internal_set_nonInteractableCellWasPressedEvent)) ::System::Action_1<::UnityW<::HMUI::SelectableCell>>* nonInteractableCellWasPressedEvent;

  __declspec(property(get = get_selected, put = set_selected)) bool selected;

  /// @brief Field selectionDidChangeEvent, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get_selectionDidChangeEvent,
      put = __cordl_internal_set_selectionDidChangeEvent)) ::System::Action_3<::UnityW<::HMUI::SelectableCell>, ::HMUI::SelectableCell_TransitionType, ::System::Object*>* selectionDidChangeEvent;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

  /// @brief Method ClearHighlight, addr 0x39fc9e8, size 0x10, virtual false, abstract: false, final false
  inline void ClearHighlight(::HMUI::SelectableCell_TransitionType transitionType);

  /// @brief Method HighlightDidChange, addr 0x39fc9fc, size 0x4, virtual true, abstract: false, final false
  inline void HighlightDidChange(::HMUI::SelectableCell_TransitionType transitionType);

  /// @brief Method InternalToggle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void InternalToggle();

  static inline ::HMUI::SelectableCell* New_ctor();

  /// @brief Method OnDisable, addr 0x39fc8b8, size 0x28, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnPointerClick, addr 0x39fca00, size 0xe0, virtual true, abstract: false, final false
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerEnter, addr 0x39fcb8c, size 0x34, virtual true, abstract: false, final false
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit, addr 0x39fcbc0, size 0x10, virtual true, abstract: false, final false
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSubmit, addr 0x39fcae0, size 0xac, virtual true, abstract: false, final false
  inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method SelectionDidChange, addr 0x39fc9f8, size 0x4, virtual true, abstract: false, final false
  inline void SelectionDidChange(::HMUI::SelectableCell_TransitionType transitionType);

  /// @brief Method SetHighlight, addr 0x39fc8e0, size 0x80, virtual false, abstract: false, final false
  inline void SetHighlight(bool value, ::HMUI::SelectableCell_TransitionType transitionType, bool ignoreCurrentValue);

  /// @brief Method SetSelected, addr 0x39fc960, size 0x88, virtual false, abstract: false, final false
  inline void SetSelected(bool value, ::HMUI::SelectableCell_TransitionType transitionType, ::System::Object* changeOwner, bool ignoreCurrentValue);

  /// @brief Method Start, addr 0x39fc874, size 0x44, virtual true, abstract: false, final false
  inline void Start();

  constexpr bool const& __cordl_internal_get__highlighted_k__BackingField() const;

  constexpr bool& __cordl_internal_get__highlighted_k__BackingField();

  constexpr bool const& __cordl_internal_get__selected_k__BackingField() const;

  constexpr bool& __cordl_internal_get__selected_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__wasPressedSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__wasPressedSignal();

  constexpr ::System::Action_2<::UnityW<::HMUI::SelectableCell>, ::HMUI::SelectableCell_TransitionType>* const& __cordl_internal_get_highlightDidChangeEvent() const;

  constexpr ::System::Action_2<::UnityW<::HMUI::SelectableCell>, ::HMUI::SelectableCell_TransitionType>*& __cordl_internal_get_highlightDidChangeEvent();

  constexpr ::System::Action_1<::UnityW<::HMUI::SelectableCell>>* const& __cordl_internal_get_nonInteractableCellWasPressedEvent() const;

  constexpr ::System::Action_1<::UnityW<::HMUI::SelectableCell>>*& __cordl_internal_get_nonInteractableCellWasPressedEvent();

  constexpr ::System::Action_3<::UnityW<::HMUI::SelectableCell>, ::HMUI::SelectableCell_TransitionType, ::System::Object*>* const& __cordl_internal_get_selectionDidChangeEvent() const;

  constexpr ::System::Action_3<::UnityW<::HMUI::SelectableCell>, ::HMUI::SelectableCell_TransitionType, ::System::Object*>*& __cordl_internal_get_selectionDidChangeEvent();

  constexpr void __cordl_internal_set__highlighted_k__BackingField(bool value);

  constexpr void __cordl_internal_set__selected_k__BackingField(bool value);

  constexpr void __cordl_internal_set__wasPressedSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set_highlightDidChangeEvent(::System::Action_2<::UnityW<::HMUI::SelectableCell>, ::HMUI::SelectableCell_TransitionType>* value);

  constexpr void __cordl_internal_set_nonInteractableCellWasPressedEvent(::System::Action_1<::UnityW<::HMUI::SelectableCell>>* value);

  constexpr void __cordl_internal_set_selectionDidChangeEvent(::System::Action_3<::UnityW<::HMUI::SelectableCell>, ::HMUI::SelectableCell_TransitionType, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x39fcbd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_highlightDidChangeEvent, addr 0x39fc58c, size 0xb0, virtual false, abstract: false, final false
  inline void add_highlightDidChangeEvent(::System::Action_2<::UnityW<::HMUI::SelectableCell>, ::HMUI::SelectableCell_TransitionType>* value);

  /// @brief Method add_nonInteractableCellWasPressedEvent, addr 0x39fc6ec, size 0xb0, virtual false, abstract: false, final false
  inline void add_nonInteractableCellWasPressedEvent(::System::Action_1<::UnityW<::HMUI::SelectableCell>>* value);

  /// @brief Method add_selectionDidChangeEvent, addr 0x39fc42c, size 0xb0, virtual false, abstract: false, final false
  inline void add_selectionDidChangeEvent(::System::Action_3<::UnityW<::HMUI::SelectableCell>, ::HMUI::SelectableCell_TransitionType, ::System::Object*>* value);

  /// @brief Method get_highlighted, addr 0x39fc84c, size 0x8, virtual false, abstract: false, final false
  inline bool get_highlighted();

  /// @brief Method get_selected, addr 0x39fc860, size 0x8, virtual false, abstract: false, final false
  inline bool get_selected();

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr ::UnityEngine::EventSystems::ISubmitHandler* i___UnityEngine__EventSystems__ISubmitHandler() noexcept;

  /// @brief Method remove_highlightDidChangeEvent, addr 0x39fc63c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_highlightDidChangeEvent(::System::Action_2<::UnityW<::HMUI::SelectableCell>, ::HMUI::SelectableCell_TransitionType>* value);

  /// @brief Method remove_nonInteractableCellWasPressedEvent, addr 0x39fc79c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_nonInteractableCellWasPressedEvent(::System::Action_1<::UnityW<::HMUI::SelectableCell>>* value);

  /// @brief Method remove_selectionDidChangeEvent, addr 0x39fc4dc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_selectionDidChangeEvent(::System::Action_3<::UnityW<::HMUI::SelectableCell>, ::HMUI::SelectableCell_TransitionType, ::System::Object*>* value);

  /// @brief Method set_highlighted, addr 0x39fc854, size 0xc, virtual false, abstract: false, final false
  inline void set_highlighted(bool value);

  /// @brief Method set_selected, addr 0x39fc868, size 0xc, virtual false, abstract: false, final false
  inline void set_selected(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectableCell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectableCell(SelectableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectableCell(SelectableCell const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16108 };

  /// @brief Field _wasPressedSignal, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____wasPressedSignal;

  /// @brief Field selectionDidChangeEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_3<::UnityW<::HMUI::SelectableCell>, ::HMUI::SelectableCell_TransitionType, ::System::Object*>* ___selectionDidChangeEvent;

  /// @brief Field highlightDidChangeEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::HMUI::SelectableCell>, ::HMUI::SelectableCell_TransitionType>* ___highlightDidChangeEvent;

  /// @brief Field nonInteractableCellWasPressedEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::HMUI::SelectableCell>>* ___nonInteractableCellWasPressedEvent;

  /// @brief Field <highlighted>k__BackingField, offset: 0x60, size: 0x1, def value: None
  bool ____highlighted_k__BackingField;

  /// @brief Field <selected>k__BackingField, offset: 0x61, size: 0x1, def value: None
  bool ____selected_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::SelectableCell, ____wasPressedSignal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::SelectableCell, ___selectionDidChangeEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::SelectableCell, ___highlightDidChangeEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::SelectableCell, ___nonInteractableCellWasPressedEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::SelectableCell, ____highlighted_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::SelectableCell, ____selected_k__BackingField) == 0x61, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::SelectableCell, 0x68>, "Size mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SelectableCell_TransitionType, "HMUI", "SelectableCell/TransitionType");
NEED_NO_BOX(::HMUI::SelectableCell);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SelectableCell*, "HMUI", "SelectableCell");
