#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MissionToggle)
namespace GlobalNamespace {
class Signal;
}
namespace HMUI {
class Interactable;
}
namespace System {
template <typename T> class Action_1;
}
namespace TMPro {
class TextMeshProUGUI;
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
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionToggle;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionToggle);
// Type: ::MissionToggle
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 156, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(13214))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5555))
// CS Name: ::MissionToggle*
class CORDL_TYPE MissionToggle : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  /// @brief Field _missionToggleWasPressedSignal, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__missionToggleWasPressedSignal,
                      put = __cordl_internal_set__missionToggleWasPressedSignal))::UnityW<::GlobalNamespace::Signal> _missionToggleWasPressedSignal;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text))::UnityW<::TMPro::TextMeshProUGUI> _text;

  /// @brief Field _lockedImage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lockedImage, put = __cordl_internal_set__lockedImage))::UnityW<::UnityEngine::UI::Image> _lockedImage;

  /// @brief Field _clearedImage, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__clearedImage, put = __cordl_internal_set__clearedImage))::UnityW<::UnityEngine::UI::Image> _clearedImage;

  /// @brief Field _bgImage, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__bgImage, put = __cordl_internal_set__bgImage))::UnityW<::UnityEngine::UI::Image> _bgImage;

  /// @brief Field _strokeImage, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__strokeImage, put = __cordl_internal_set__strokeImage))::UnityW<::UnityEngine::UI::Image> _strokeImage;

  /// @brief Field _vrInteractable, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__vrInteractable, put = __cordl_internal_set__vrInteractable))::UnityW<::HMUI::Interactable> _vrInteractable;

  /// @brief Field _disabledColor, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__disabledColor, put = __cordl_internal_set__disabledColor))::UnityEngine::Color _disabledColor;

  /// @brief Field _normalColor, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get__normalColor, put = __cordl_internal_set__normalColor))::UnityEngine::Color _normalColor;

  /// @brief Field _invertColor, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get__invertColor, put = __cordl_internal_set__invertColor))::UnityEngine::Color _invertColor;

  /// @brief Field _highlightColor, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get__highlightColor, put = __cordl_internal_set__highlightColor))::UnityEngine::Color _highlightColor;

  /// @brief Field selectionDidChangeEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_selectionDidChangeEvent,
                      put = __cordl_internal_set_selectionDidChangeEvent))::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>* selectionDidChangeEvent;

  /// @brief Field _selected, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__selected, put = __cordl_internal_set__selected)) bool _selected;

  /// @brief Field _highlighted, offset 0x99, size 0x1
  __declspec(property(get = __cordl_internal_get__highlighted, put = __cordl_internal_set__highlighted)) bool _highlighted;

  /// @brief Field _interactable, offset 0x9a, size 0x1
  __declspec(property(get = __cordl_internal_get__interactable, put = __cordl_internal_set__interactable)) bool _interactable;

  /// @brief Field _missionCleared, offset 0x9b, size 0x1
  __declspec(property(get = __cordl_internal_get__missionCleared, put = __cordl_internal_set__missionCleared)) bool _missionCleared;

  __declspec(property(put = set_missionCleared)) bool missionCleared;

  __declspec(property(get = get_selected, put = set_selected)) bool selected;

  __declspec(property(get = get_interactable, put = set_interactable)) bool interactable;

  __declspec(property(get = get_highlighted)) bool highlighted;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr ::UnityEngine::EventSystems::ISubmitHandler* i___UnityEngine__EventSystems__ISubmitHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__missionToggleWasPressedSignal();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__missionToggleWasPressedSignal() const;

  constexpr void __cordl_internal_set__missionToggleWasPressedSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__lockedImage();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__lockedImage() const;

  constexpr void __cordl_internal_set__lockedImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__clearedImage();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__clearedImage() const;

  constexpr void __cordl_internal_set__clearedImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__bgImage();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__bgImage() const;

  constexpr void __cordl_internal_set__bgImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__strokeImage();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__strokeImage() const;

  constexpr void __cordl_internal_set__strokeImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr ::UnityW<::HMUI::Interactable>& __cordl_internal_get__vrInteractable();

  constexpr ::UnityW<::HMUI::Interactable> const& __cordl_internal_get__vrInteractable() const;

  constexpr void __cordl_internal_set__vrInteractable(::UnityW<::HMUI::Interactable> value);

  constexpr ::UnityEngine::Color& __cordl_internal_get__disabledColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__disabledColor() const;

  constexpr void __cordl_internal_set__disabledColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __cordl_internal_get__normalColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__normalColor() const;

  constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __cordl_internal_get__invertColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__invertColor() const;

  constexpr void __cordl_internal_set__invertColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __cordl_internal_get__highlightColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__highlightColor() const;

  constexpr void __cordl_internal_set__highlightColor(::UnityEngine::Color value);

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>*& __cordl_internal_get_selectionDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>*> const& __cordl_internal_get_selectionDidChangeEvent() const;

  constexpr void __cordl_internal_set_selectionDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>* value);

  constexpr bool& __cordl_internal_get__selected();

  constexpr bool const& __cordl_internal_get__selected() const;

  constexpr void __cordl_internal_set__selected(bool value);

  constexpr bool& __cordl_internal_get__highlighted();

  constexpr bool const& __cordl_internal_get__highlighted() const;

  constexpr void __cordl_internal_set__highlighted(bool value);

  constexpr bool& __cordl_internal_get__interactable();

  constexpr bool const& __cordl_internal_get__interactable() const;

  constexpr void __cordl_internal_set__interactable(bool value);

  constexpr bool& __cordl_internal_get__missionCleared();

  constexpr bool const& __cordl_internal_get__missionCleared() const;

  constexpr void __cordl_internal_set__missionCleared(bool value);

  /// @brief Method add_selectionDidChangeEvent, addr 0x22a1e7c, size 0xb0, virtual false, abstract: false, final false
  inline void add_selectionDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>* value);

  /// @brief Method remove_selectionDidChangeEvent, addr 0x22a2064, size 0xb0, virtual false, abstract: false, final false
  inline void remove_selectionDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>* value);

  /// @brief Method set_missionCleared, addr 0x22a257c, size 0xc, virtual false, abstract: false, final false
  inline void set_missionCleared(bool value);

  /// @brief Method get_selected, addr 0x22a2588, size 0x8, virtual false, abstract: false, final false
  inline bool get_selected();

  /// @brief Method set_selected, addr 0x22a1db0, size 0x10, virtual false, abstract: false, final false
  inline void set_selected(bool value);

  /// @brief Method get_interactable, addr 0x22a2590, size 0x8, virtual false, abstract: false, final false
  inline bool get_interactable();

  /// @brief Method set_interactable, addr 0x22a1f2c, size 0xc, virtual false, abstract: false, final false
  inline void set_interactable(bool value);

  /// @brief Method get_highlighted, addr 0x22a2840, size 0x8, virtual false, abstract: false, final false
  inline bool get_highlighted();

  /// @brief Method Start, addr 0x22a2848, size 0x1c, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method ChangeSelection, addr 0x22a2198, size 0x64, virtual false, abstract: false, final false
  inline void ChangeSelection(bool value, bool callSelectionDidChange, bool ignoreCurrentValue);

  /// @brief Method ChangeHighlight, addr 0x22a2864, size 0x20, virtual false, abstract: false, final false
  inline void ChangeHighlight(bool value, bool ignoreCurrentValue);

  /// @brief Method SetText, addr 0x22a2114, size 0x24, virtual false, abstract: false, final false
  inline void SetText(::StringW text);

  /// @brief Method InternalToggle, addr 0x22a2884, size 0x30, virtual false, abstract: false, final false
  inline void InternalToggle();

  /// @brief Method RefreshUI, addr 0x22a2598, size 0x2a8, virtual false, abstract: false, final false
  inline void RefreshUI();

  /// @brief Method OnPointerClick, addr 0x22a28b4, size 0xa8, virtual true, abstract: false, final false
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSubmit, addr 0x22a295c, size 0x98, virtual true, abstract: false, final false
  inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnPointerEnter, addr 0x22a29f4, size 0x24, virtual true, abstract: false, final false
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit, addr 0x22a2a18, size 0x1c, virtual true, abstract: false, final false
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  static inline ::GlobalNamespace::MissionToggle* New_ctor();

  /// @brief Method .ctor, addr 0x22a2a34, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionToggle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionToggle(MissionToggle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionToggle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionToggle(MissionToggle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionToggle();

public:
  /// @brief Field _missionToggleWasPressedSignal, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____missionToggleWasPressedSignal;

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// @brief Field _lockedImage, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____lockedImage;

  /// @brief Field _clearedImage, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____clearedImage;

  /// @brief Field _bgImage, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____bgImage;

  /// @brief Field _strokeImage, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____strokeImage;

  /// @brief Field _vrInteractable, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::HMUI::Interactable> ____vrInteractable;

  /// @brief Field _disabledColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ____disabledColor;

  /// @brief Field _normalColor, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color ____normalColor;

  /// @brief Field _invertColor, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Color ____invertColor;

  /// @brief Field _highlightColor, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Color ____highlightColor;

  /// @brief Field selectionDidChangeEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>* ___selectionDidChangeEvent;

  /// @brief Field _selected, offset: 0x98, size: 0x1, def value: None
  bool ____selected;

  /// @brief Field _highlighted, offset: 0x99, size: 0x1, def value: None
  bool ____highlighted;

  /// @brief Field _interactable, offset: 0x9a, size: 0x1, def value: None
  bool ____interactable;

  /// @brief Field _missionCleared, offset: 0x9b, size: 0x1, def value: None
  bool ____missionCleared;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionToggle, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____missionToggleWasPressedSignal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____lockedImage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____clearedImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____bgImage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____strokeImage) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____vrInteractable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____disabledColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____normalColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____invertColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____highlightColor) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ___selectionDidChangeEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____selected) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____highlighted) == 0x99, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____interactable) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____missionCleared) == 0x9b, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionToggle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionToggle*, "", "MissionToggle");
