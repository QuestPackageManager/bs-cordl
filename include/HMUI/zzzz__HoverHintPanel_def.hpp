#pragma once
// IWYU pragma private; include "HMUI/HoverHintPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HoverHintPanel)
namespace System {
class Action;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace HMUI {
class HoverHintPanel;
}
// Write type traits
MARK_REF_T(::HMUI::HoverHintPanel*);
DEFINE_IL2CPP_CLASS(::HMUI::HoverHintPanel*, "HMUI", "HoverHintPanel");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace HMUI {
// Is value type: false
// CS Name: HMUI.HoverHintPanel
class CORDL_TYPE HoverHintPanel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _containerPadding, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__containerPadding, put = __cordl_internal_set__containerPadding)) ::UnityEngine::Vector2 _containerPadding;

  /// @brief Field <isPointerOver>k__BackingField, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__isPointerOver_k__BackingField, put = __cordl_internal_set__isPointerOver_k__BackingField)) bool _isPointerOver_k__BackingField;

  /// @brief Field <isShown>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__isShown_k__BackingField, put = __cordl_internal_set__isShown_k__BackingField)) bool _isShown_k__BackingField;

  /// @brief Field _padding, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__padding, put = __cordl_internal_set__padding)) ::UnityEngine::Vector2 _padding;

  /// @brief Field _separator, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__separator, put = __cordl_internal_set__separator)) float_t _separator;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshProUGUI> _text;

  /// @brief Field _zOffset, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__zOffset, put = __cordl_internal_set__zOffset)) float_t _zOffset;

  __declspec(property(get = get_isPointerOver, put = set_isPointerOver)) bool isPointerOver;

  __declspec(property(get = get_isShown, put = set_isShown)) bool isShown;

  /// @brief Field pointerDidEnterEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_pointerDidEnterEvent, put = __cordl_internal_set_pointerDidEnterEvent)) ::System::Action* pointerDidEnterEvent;

  /// @brief Field pointerDidExitEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_pointerDidExitEvent, put = __cordl_internal_set_pointerDidExitEvent)) ::System::Action* pointerDidExitEvent;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

  /// @brief Method Awake, addr 0x5cc9a38, size 0xac, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CalculatePanelPosition, addr 0x5cc9ae4, size 0x134, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 CalculatePanelPosition(::UnityEngine::Vector2 containerSize, ::UnityEngine::Rect spawnRect, ::UnityEngine::Vector2 panelSize);

  /// @brief Method Hide, addr 0x5cc8b9c, size 0x28, virtual false, abstract: false, final false
  inline void Hide();

  static inline ::HMUI::HoverHintPanel* New_ctor();

  /// @brief Method OnPointerEnter, addr 0x5cc9c18, size 0x24, virtual true, abstract: false, final true
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit, addr 0x5cc9c3c, size 0x20, virtual true, abstract: false, final true
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method Show, addr 0x5cc94d8, size 0x260, virtual false, abstract: false, final false
  inline void Show(::StringW text, ::UnityEngine::Transform* parent, ::UnityEngine::Vector2 containerSize, ::UnityEngine::Rect spawnRect);

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__containerPadding() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__containerPadding();

  constexpr bool const& __cordl_internal_get__isPointerOver_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isPointerOver_k__BackingField();

  constexpr bool const& __cordl_internal_get__isShown_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isShown_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__padding() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__padding();

  constexpr float_t const& __cordl_internal_get__separator() const;

  constexpr float_t& __cordl_internal_get__separator();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr float_t const& __cordl_internal_get__zOffset() const;

  constexpr float_t& __cordl_internal_get__zOffset();

  constexpr ::System::Action* const& __cordl_internal_get_pointerDidEnterEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_pointerDidEnterEvent();

  constexpr ::System::Action* const& __cordl_internal_get_pointerDidExitEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_pointerDidExitEvent();

  constexpr void __cordl_internal_set__containerPadding(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__isPointerOver_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isShown_k__BackingField(bool value);

  constexpr void __cordl_internal_set__padding(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__separator(float_t value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__zOffset(float_t value);

  constexpr void __cordl_internal_set_pointerDidEnterEvent(::System::Action* value);

  constexpr void __cordl_internal_set_pointerDidExitEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x5cc9c5c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method add_pointerDidEnterEvent, addr 0x5cc8bc4, size 0xac, virtual false, abstract: false, final false
  inline void add_pointerDidEnterEvent(::System::Action* value);

  /// [CompilerGenerated]
  /// @brief Method add_pointerDidExitEvent, addr 0x5cc8c70, size 0xac, virtual false, abstract: false, final false
  inline void add_pointerDidExitEvent(::System::Action* value);

  /// [CompilerGenerated]
  /// @brief Method get_isPointerOver, addr 0x5cc9a28, size 0x8, virtual false, abstract: false, final false
  inline bool get_isPointerOver();

  /// [CompilerGenerated]
  /// @brief Method get_isShown, addr 0x5cc9a18, size 0x8, virtual false, abstract: false, final false
  inline bool get_isShown();

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

  /// [CompilerGenerated]
  /// @brief Method remove_pointerDidEnterEvent, addr 0x5cc8ea8, size 0xac, virtual false, abstract: false, final false
  inline void remove_pointerDidEnterEvent(::System::Action* value);

  /// [CompilerGenerated]
  /// @brief Method remove_pointerDidExitEvent, addr 0x5cc8f54, size 0xac, virtual false, abstract: false, final false
  inline void remove_pointerDidExitEvent(::System::Action* value);

  /// [CompilerGenerated]
  /// @brief Method set_isPointerOver, addr 0x5cc9a30, size 0x8, virtual false, abstract: false, final false
  inline void set_isPointerOver(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_isShown, addr 0x5cc9a20, size 0x8, virtual false, abstract: false, final false
  inline void set_isShown(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HoverHintPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HoverHintPanel", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HoverHintPanel(HoverHintPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HoverHintPanel", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HoverHintPanel(HoverHintPanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19635 };

  /// [SerializeField]
  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// [SerializeField]
  /// @brief Field _padding, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____padding;

  /// [SerializeField]
  /// @brief Field _containerPadding, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____containerPadding;

  /// [SerializeField]
  /// @brief Field _separator, offset: 0x38, size: 0x4, def value: None
  float_t ____separator;

  /// [SerializeField]
  /// @brief Field _zOffset, offset: 0x3c, size: 0x4, def value: None
  float_t ____zOffset;

  /// [CompilerGenerated]
  /// @brief Field <isShown>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____isShown_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <isPointerOver>k__BackingField, offset: 0x41, size: 0x1, def value: None
  bool ____isPointerOver_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field pointerDidEnterEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___pointerDidEnterEvent;

  /// [CompilerGenerated]
  /// @brief Field pointerDidExitEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___pointerDidExitEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::HoverHintPanel, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintPanel, ____padding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintPanel, ____containerPadding) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintPanel, ____separator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintPanel, ____zOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintPanel, ____isShown_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintPanel, ____isPointerOver_k__BackingField) == 0x41, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintPanel, ___pointerDidEnterEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintPanel, ___pointerDidExitEvent) == 0x50, "Offset mismatch!");

static_assert(sizeof(::HMUI::HoverHintPanel) == 0x58, "Size mismatch!");

} // namespace HMUI
