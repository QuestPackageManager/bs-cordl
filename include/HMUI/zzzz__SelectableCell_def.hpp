#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__Interactable_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectableCell)
namespace GlobalNamespace {
class Signal;
}
namespace HMUI {
struct __SelectableCell__TransitionType;
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
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace HMUI {
struct __SelectableCell__TransitionType;
}
namespace HMUI {
class SelectableCell;
}
// Write type traits
MARK_VAL_T(::HMUI::__SelectableCell__TransitionType);
MARK_REF_PTR_T(::HMUI::SelectableCell);
// Type: ::TransitionType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// CS Name: ::SelectableCell::TransitionType
struct CORDL_TYPE __SelectableCell__TransitionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SelectableCell__TransitionType_Unwrapped
  enum struct ____SelectableCell__TransitionType_Unwrapped : int32_t {
    __E_Instant = static_cast<int32_t>(0x0),
    __E_Animated = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SelectableCell__TransitionType_Unwrapped() const noexcept {
    return static_cast<____SelectableCell__TransitionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SelectableCell__TransitionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SelectableCell__TransitionType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Animated value: static_cast<int32_t>(0x1)
  static ::HMUI::__SelectableCell__TransitionType const Animated;

  /// @brief Field Instant value: static_cast<int32_t>(0x0)
  static ::HMUI::__SelectableCell__TransitionType const Instant;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__SelectableCell__TransitionType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__SelectableCell__TransitionType, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::SelectableCell
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 66, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::SelectableCell*
class CORDL_TYPE SelectableCell : public ::HMUI::Interactable {
public:
  // Declarations
  using TransitionType = ::HMUI::__SelectableCell__TransitionType;

  /// @brief Field <highlighted>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__highlighted_k__BackingField, put = __cordl_internal_set__highlighted_k__BackingField)) bool _highlighted_k__BackingField;

  /// @brief Field <selected>k__BackingField, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__selected_k__BackingField, put = __cordl_internal_set__selected_k__BackingField)) bool _selected_k__BackingField;

  /// @brief Field _wasPressedSignal, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__wasPressedSignal, put = __cordl_internal_set__wasPressedSignal))::UnityW<::GlobalNamespace::Signal> _wasPressedSignal;

  /// @brief Field highlightDidChangeEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_highlightDidChangeEvent,
                      put = __cordl_internal_set_highlightDidChangeEvent))::System::Action_2<::UnityW<::HMUI::SelectableCell>, ::HMUI::__SelectableCell__TransitionType>* highlightDidChangeEvent;

  __declspec(property(get = get_highlighted, put = set_highlighted)) bool highlighted;

  __declspec(property(get = get_selected, put = set_selected)) bool selected;

  /// @brief Field selectionDidChangeEvent, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get_selectionDidChangeEvent,
      put = __cordl_internal_set_selectionDidChangeEvent))::System::Action_3<::UnityW<::HMUI::SelectableCell>, ::HMUI::__SelectableCell__TransitionType, ::System::Object*>* selectionDidChangeEvent;

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

  /// @brief Method ClearHighlight, addr 0x2426f00, size 0x10, virtual false, abstract: false, final false
  inline void ClearHighlight(::HMUI::__SelectableCell__TransitionType transitionType);

  /// @brief Method HighlightDidChange, addr 0x2426f14, size 0x4, virtual true, abstract: false, final false
  inline void HighlightDidChange(::HMUI::__SelectableCell__TransitionType transitionType);

  /// @brief Method InternalToggle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void InternalToggle();

  static inline ::HMUI::SelectableCell* New_ctor();

  /// @brief Method OnDisable, addr 0x2426df8, size 0x10, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnPointerClick, addr 0x2426f18, size 0xb0, virtual true, abstract: false, final false
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerEnter, addr 0x2427068, size 0x10, virtual true, abstract: false, final false
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit, addr 0x2427078, size 0x10, virtual true, abstract: false, final false
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSubmit, addr 0x2426fc8, size 0xa0, virtual true, abstract: false, final false
  inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method SelectionDidChange, addr 0x2426f10, size 0x4, virtual true, abstract: false, final false
  inline void SelectionDidChange(::HMUI::__SelectableCell__TransitionType transitionType);

  /// @brief Method SetHighlight, addr 0x2426e08, size 0x78, virtual false, abstract: false, final false
  inline void SetHighlight(bool value, ::HMUI::__SelectableCell__TransitionType transitionType, bool ignoreCurrentValue);

  /// @brief Method SetSelected, addr 0x2426e80, size 0x80, virtual false, abstract: false, final false
  inline void SetSelected(bool value, ::HMUI::__SelectableCell__TransitionType transitionType, ::System::Object* changeOwner, bool ignoreCurrentValue);

  /// @brief Method Start, addr 0x2426dc8, size 0x30, virtual true, abstract: false, final false
  inline void Start();

  constexpr bool const& __cordl_internal_get__highlighted_k__BackingField() const;

  constexpr bool& __cordl_internal_get__highlighted_k__BackingField();

  constexpr bool const& __cordl_internal_get__selected_k__BackingField() const;

  constexpr bool& __cordl_internal_get__selected_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__wasPressedSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__wasPressedSignal();

  constexpr ::System::Action_2<::UnityW<::HMUI::SelectableCell>, ::HMUI::__SelectableCell__TransitionType>*& __cordl_internal_get_highlightDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::HMUI::SelectableCell>, ::HMUI::__SelectableCell__TransitionType>*> const&
  __cordl_internal_get_highlightDidChangeEvent() const;

  constexpr ::System::Action_3<::UnityW<::HMUI::SelectableCell>, ::HMUI::__SelectableCell__TransitionType, ::System::Object*>*& __cordl_internal_get_selectionDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::UnityW<::HMUI::SelectableCell>, ::HMUI::__SelectableCell__TransitionType, ::System::Object*>*> const&
  __cordl_internal_get_selectionDidChangeEvent() const;

  constexpr void __cordl_internal_set__highlighted_k__BackingField(bool value);

  constexpr void __cordl_internal_set__selected_k__BackingField(bool value);

  constexpr void __cordl_internal_set__wasPressedSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set_highlightDidChangeEvent(::System::Action_2<::UnityW<::HMUI::SelectableCell>, ::HMUI::__SelectableCell__TransitionType>* value);

  constexpr void __cordl_internal_set_selectionDidChangeEvent(::System::Action_3<::UnityW<::HMUI::SelectableCell>, ::HMUI::__SelectableCell__TransitionType, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x2427088, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_highlightDidChangeEvent, addr 0x2426c40, size 0xb0, virtual false, abstract: false, final false
  inline void add_highlightDidChangeEvent(::System::Action_2<::UnityW<::HMUI::SelectableCell>, ::HMUI::__SelectableCell__TransitionType>* value);

  /// @brief Method add_selectionDidChangeEvent, addr 0x2426ae0, size 0xb0, virtual false, abstract: false, final false
  inline void add_selectionDidChangeEvent(::System::Action_3<::UnityW<::HMUI::SelectableCell>, ::HMUI::__SelectableCell__TransitionType, ::System::Object*>* value);

  /// @brief Method get_highlighted, addr 0x2426da0, size 0x8, virtual false, abstract: false, final false
  inline bool get_highlighted();

  /// @brief Method get_selected, addr 0x2426db4, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Method remove_highlightDidChangeEvent, addr 0x2426cf0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_highlightDidChangeEvent(::System::Action_2<::UnityW<::HMUI::SelectableCell>, ::HMUI::__SelectableCell__TransitionType>* value);

  /// @brief Method remove_selectionDidChangeEvent, addr 0x2426b90, size 0xb0, virtual false, abstract: false, final false
  inline void remove_selectionDidChangeEvent(::System::Action_3<::UnityW<::HMUI::SelectableCell>, ::HMUI::__SelectableCell__TransitionType, ::System::Object*>* value);

  /// @brief Method set_highlighted, addr 0x2426da8, size 0xc, virtual false, abstract: false, final false
  inline void set_highlighted(bool value);

  /// @brief Method set_selected, addr 0x2426dbc, size 0xc, virtual false, abstract: false, final false
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

  /// @brief Field _wasPressedSignal, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____wasPressedSignal;

  /// @brief Field selectionDidChangeEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_3<::UnityW<::HMUI::SelectableCell>, ::HMUI::__SelectableCell__TransitionType, ::System::Object*>* ___selectionDidChangeEvent;

  /// @brief Field highlightDidChangeEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::HMUI::SelectableCell>, ::HMUI::__SelectableCell__TransitionType>* ___highlightDidChangeEvent;

  /// @brief Field <highlighted>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____highlighted_k__BackingField;

  /// @brief Field <selected>k__BackingField, offset: 0x41, size: 0x1, def value: None
  bool ____selected_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::SelectableCell, 0x48>, "Size mismatch!");

static_assert(offsetof(::HMUI::SelectableCell, ____wasPressedSignal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::SelectableCell, ___selectionDidChangeEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::SelectableCell, ___highlightDidChangeEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::SelectableCell, ____highlighted_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::SelectableCell, ____selected_k__BackingField) == 0x41, "Offset mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__SelectableCell__TransitionType, "HMUI", "SelectableCell/TransitionType");
NEED_NO_BOX(::HMUI::SelectableCell);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SelectableCell*, "HMUI", "SelectableCell");
