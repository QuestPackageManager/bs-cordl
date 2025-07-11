#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionToggle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
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
// Dependencies UnityEngine.Color, UnityEngine.EventSystems.IEventSystemHandler, UnityEngine.EventSystems.IPointerClickHandler, UnityEngine.EventSystems.IPointerEnterHandler,
// UnityEngine.EventSystems.IPointerExitHandler, UnityEngine.EventSystems.ISubmitHandler, UnityEngine.EventSystems.UIBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionToggle
class CORDL_TYPE MissionToggle : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  /// @brief Field _bgImage, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__bgImage, put = __cordl_internal_set__bgImage)) ::UnityW<::UnityEngine::UI::Image> _bgImage;

  /// @brief Field _clearedImage, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__clearedImage, put = __cordl_internal_set__clearedImage)) ::UnityW<::UnityEngine::UI::Image> _clearedImage;

  /// @brief Field _disabledColor, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__disabledColor, put = __cordl_internal_set__disabledColor)) ::UnityEngine::Color _disabledColor;

  /// @brief Field _highlightColor, offset 0x88, size 0x10
  __declspec(property(get = __cordl_internal_get__highlightColor, put = __cordl_internal_set__highlightColor)) ::UnityEngine::Color _highlightColor;

  /// @brief Field _highlighted, offset 0xa1, size 0x1
  __declspec(property(get = __cordl_internal_get__highlighted, put = __cordl_internal_set__highlighted)) bool _highlighted;

  /// @brief Field _interactable, offset 0xa2, size 0x1
  __declspec(property(get = __cordl_internal_get__interactable, put = __cordl_internal_set__interactable)) bool _interactable;

  /// @brief Field _invertColor, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get__invertColor, put = __cordl_internal_set__invertColor)) ::UnityEngine::Color _invertColor;

  /// @brief Field _lockedImage, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lockedImage, put = __cordl_internal_set__lockedImage)) ::UnityW<::UnityEngine::UI::Image> _lockedImage;

  /// @brief Field _missionCleared, offset 0xa3, size 0x1
  __declspec(property(get = __cordl_internal_get__missionCleared, put = __cordl_internal_set__missionCleared)) bool _missionCleared;

  /// @brief Field _missionToggleWasPressedSignal, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__missionToggleWasPressedSignal, put = __cordl_internal_set__missionToggleWasPressedSignal)) ::UnityW<::GlobalNamespace::Signal>
      _missionToggleWasPressedSignal;

  /// @brief Field _normalColor, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__normalColor, put = __cordl_internal_set__normalColor)) ::UnityEngine::Color _normalColor;

  /// @brief Field _selected, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get__selected, put = __cordl_internal_set__selected)) bool _selected;

  /// @brief Field _strokeImage, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__strokeImage, put = __cordl_internal_set__strokeImage)) ::UnityW<::UnityEngine::UI::Image> _strokeImage;

  /// @brief Field _text, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshProUGUI> _text;

  /// @brief Field _vrInteractable, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__vrInteractable, put = __cordl_internal_set__vrInteractable)) ::UnityW<::HMUI::Interactable> _vrInteractable;

  __declspec(property(get = get_highlighted)) bool highlighted;

  __declspec(property(get = get_interactable, put = set_interactable)) bool interactable;

  __declspec(property(put = set_missionCleared)) bool missionCleared;

  __declspec(property(get = get_selected, put = set_selected)) bool selected;

  /// @brief Field selectionDidChangeEvent, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_selectionDidChangeEvent,
                      put = __cordl_internal_set_selectionDidChangeEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>* selectionDidChangeEvent;

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

  /// @brief Method ChangeHighlight, addr 0x3b54fdc, size 0x20, virtual false, abstract: false, final false
  inline void ChangeHighlight(bool value, bool ignoreCurrentValue);

  /// @brief Method ChangeSelection, addr 0x3b54c98, size 0x64, virtual false, abstract: false, final false
  inline void ChangeSelection(bool value, bool callSelectionDidChange, bool ignoreCurrentValue);

  /// @brief Method InternalToggle, addr 0x3b55020, size 0x30, virtual false, abstract: false, final false
  inline void InternalToggle();

  static inline ::GlobalNamespace::MissionToggle* New_ctor();

  /// @brief Method OnPointerClick, addr 0x3b55050, size 0xa8, virtual true, abstract: false, final false
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerEnter, addr 0x3b55190, size 0x24, virtual true, abstract: false, final false
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit, addr 0x3b551b4, size 0x1c, virtual true, abstract: false, final false
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSubmit, addr 0x3b550f8, size 0x98, virtual true, abstract: false, final false
  inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method RefreshUI, addr 0x3b54d10, size 0x2a8, virtual false, abstract: false, final false
  inline void RefreshUI();

  /// @brief Method SetText, addr 0x3b54ffc, size 0x24, virtual false, abstract: false, final false
  inline void SetText(::StringW text);

  /// @brief Method Start, addr 0x3b54fc0, size 0x1c, virtual true, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__bgImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__bgImage();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__clearedImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__clearedImage();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__disabledColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__disabledColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__highlightColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__highlightColor();

  constexpr bool const& __cordl_internal_get__highlighted() const;

  constexpr bool& __cordl_internal_get__highlighted();

  constexpr bool const& __cordl_internal_get__interactable() const;

  constexpr bool& __cordl_internal_get__interactable();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__invertColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__invertColor();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__lockedImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__lockedImage();

  constexpr bool const& __cordl_internal_get__missionCleared() const;

  constexpr bool& __cordl_internal_get__missionCleared();

  constexpr ::UnityW<::GlobalNamespace::Signal> const& __cordl_internal_get__missionToggleWasPressedSignal() const;

  constexpr ::UnityW<::GlobalNamespace::Signal>& __cordl_internal_get__missionToggleWasPressedSignal();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__normalColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__normalColor();

  constexpr bool const& __cordl_internal_get__selected() const;

  constexpr bool& __cordl_internal_get__selected();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__strokeImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__strokeImage();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr ::UnityW<::HMUI::Interactable> const& __cordl_internal_get__vrInteractable() const;

  constexpr ::UnityW<::HMUI::Interactable>& __cordl_internal_get__vrInteractable();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>* const& __cordl_internal_get_selectionDidChangeEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>*& __cordl_internal_get_selectionDidChangeEvent();

  constexpr void __cordl_internal_set__bgImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__clearedImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__disabledColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__highlightColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__highlighted(bool value);

  constexpr void __cordl_internal_set__interactable(bool value);

  constexpr void __cordl_internal_set__invertColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__lockedImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__missionCleared(bool value);

  constexpr void __cordl_internal_set__missionToggleWasPressedSignal(::UnityW<::GlobalNamespace::Signal> value);

  constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__selected(bool value);

  constexpr void __cordl_internal_set__strokeImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__vrInteractable(::UnityW<::HMUI::Interactable> value);

  constexpr void __cordl_internal_set_selectionDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>* value);

  /// @brief Method .ctor, addr 0x3b551d0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_selectionDidChangeEvent, addr 0x3b54b14, size 0xb0, virtual false, abstract: false, final false
  inline void add_selectionDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>* value);

  /// @brief Method get_highlighted, addr 0x3b54fb8, size 0x8, virtual false, abstract: false, final false
  inline bool get_highlighted();

  /// @brief Method get_interactable, addr 0x3b54cfc, size 0x8, virtual false, abstract: false, final false
  inline bool get_interactable();

  /// @brief Method get_selected, addr 0x3b54c80, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Method remove_selectionDidChangeEvent, addr 0x3b54bc4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_selectionDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>* value);

  /// @brief Method set_interactable, addr 0x3b54d04, size 0xc, virtual false, abstract: false, final false
  inline void set_interactable(bool value);

  /// @brief Method set_missionCleared, addr 0x3b54c74, size 0xc, virtual false, abstract: false, final false
  inline void set_missionCleared(bool value);

  /// @brief Method set_selected, addr 0x3b54c88, size 0x10, virtual false, abstract: false, final false
  inline void set_selected(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionToggle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionToggle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionToggle(MissionToggle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionToggle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionToggle(MissionToggle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5314 };

  /// @brief Field _missionToggleWasPressedSignal, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Signal> ____missionToggleWasPressedSignal;

  /// @brief Field _text, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// @brief Field _lockedImage, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____lockedImage;

  /// @brief Field _clearedImage, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____clearedImage;

  /// @brief Field _bgImage, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____bgImage;

  /// @brief Field _strokeImage, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____strokeImage;

  /// @brief Field _vrInteractable, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::HMUI::Interactable> ____vrInteractable;

  /// @brief Field _disabledColor, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Color ____disabledColor;

  /// @brief Field _normalColor, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color ____normalColor;

  /// @brief Field _invertColor, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Color ____invertColor;

  /// @brief Field _highlightColor, offset: 0x88, size: 0x10, def value: None
  ::UnityEngine::Color ____highlightColor;

  /// @brief Field selectionDidChangeEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>* ___selectionDidChangeEvent;

  /// @brief Field _selected, offset: 0xa0, size: 0x1, def value: None
  bool ____selected;

  /// @brief Field _highlighted, offset: 0xa1, size: 0x1, def value: None
  bool ____highlighted;

  /// @brief Field _interactable, offset: 0xa2, size: 0x1, def value: None
  bool ____interactable;

  /// @brief Field _missionCleared, offset: 0xa3, size: 0x1, def value: None
  bool ____missionCleared;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionToggle, ____missionToggleWasPressedSignal) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____text) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____lockedImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____clearedImage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____bgImage) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____strokeImage) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____vrInteractable) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____disabledColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____normalColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____invertColor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____highlightColor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ___selectionDidChangeEvent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____selected) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____highlighted) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____interactable) == 0xa2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionToggle, ____missionCleared) == 0xa3, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionToggle, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionToggle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionToggle*, "", "MissionToggle");
