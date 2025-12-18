#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/ConsoleLine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__InteractableController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConsoleLine)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Background;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Flex;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ImageStyle;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Label;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class LogEntry;
}
namespace UnityEngine::Events {
template <typename T0> class UnityEvent_1;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class ConsoleLine;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.InteractableController
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.ConsoleLine
class CORDL_TYPE ConsoleLine : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::InteractableController {
public:
  // Declarations
  __declspec(property(put = set_BackgroundStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> BackgroundStyle;

  __declspec(property(get = get_Entry, put = set_Entry)) ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* Entry;

  __declspec(property(get = get_Label, put = set_Label)) ::StringW Label;

  /// @brief Field OnClick, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_OnClick, put = __cordl_internal_set_OnClick)) ::UnityEngine::Events::UnityEvent_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* OnClick;

  __declspec(property(put = set_PillStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> PillStyle;

  /// @brief Field _background, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__background, put = __cordl_internal_set__background)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> _background;

  /// @brief Field _backgroundImageStyle, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundImageStyle, put = __cordl_internal_set__backgroundImageStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>
      _backgroundImageStyle;

  /// @brief Field _counterBackground, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__counterBackground, put = __cordl_internal_set__counterBackground)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>
      _counterBackground;

  /// @brief Field _counterLabel, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__counterLabel, put = __cordl_internal_set__counterLabel)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> _counterLabel;

  /// @brief Field _entry, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__entry, put = __cordl_internal_set__entry)) ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* _entry;

  /// @brief Field _flex, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__flex, put = __cordl_internal_set__flex)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> _flex;

  /// @brief Field _label, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__label, put = __cordl_internal_set__label)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> _label;

  /// @brief Field _pill, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__pill, put = __cordl_internal_set__pill)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> _pill;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine* New_ctor();

  /// @brief Method OnHoverChanged, addr 0x589dbf4, size 0xa0, virtual true, abstract: false, final false
  inline void OnHoverChanged();

  /// @brief Method OnPointerClick, addr 0x589db74, size 0x10, virtual true, abstract: false, final false
  inline void OnPointerClick();

  /// @brief Method OnTransparencyChanged, addr 0x589da64, size 0x8c, virtual true, abstract: false, final false
  inline void OnTransparencyChanged();

  /// @brief Method RefreshLogCounter, addr 0x589d2e8, size 0x1a4, virtual false, abstract: false, final false
  inline void RefreshLogCounter();

  /// @brief Method Setup, addr 0x589d554, size 0x510, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  /// @brief Method ShowCounter, addr 0x589daf4, size 0x80, virtual false, abstract: false, final false
  inline void ShowCounter(bool show);

  constexpr ::UnityEngine::Events::UnityEvent_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* const& __cordl_internal_get_OnClick() const;

  constexpr ::UnityEngine::Events::UnityEvent_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>*& __cordl_internal_get_OnClick();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const& __cordl_internal_get__background() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& __cordl_internal_get__background();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const& __cordl_internal_get__backgroundImageStyle() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>& __cordl_internal_get__backgroundImageStyle();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const& __cordl_internal_get__counterBackground() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& __cordl_internal_get__counterBackground();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> const& __cordl_internal_get__counterLabel() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>& __cordl_internal_get__counterLabel();

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* const& __cordl_internal_get__entry() const;

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*& __cordl_internal_get__entry();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& __cordl_internal_get__flex() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& __cordl_internal_get__flex();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> const& __cordl_internal_get__label() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>& __cordl_internal_get__label();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const& __cordl_internal_get__pill() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& __cordl_internal_get__pill();

  constexpr void __cordl_internal_set_OnClick(::UnityEngine::Events::UnityEvent_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* value);

  constexpr void __cordl_internal_set__background(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value);

  constexpr void __cordl_internal_set__backgroundImageStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value);

  constexpr void __cordl_internal_set__counterBackground(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value);

  constexpr void __cordl_internal_set__counterLabel(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> value);

  constexpr void __cordl_internal_set__entry(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* value);

  constexpr void __cordl_internal_set__flex(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value);

  constexpr void __cordl_internal_set__label(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> value);

  constexpr void __cordl_internal_set__pill(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value);

  /// @brief Method .ctor, addr 0x589dc94, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Entry, addr 0x589d164, size 0x8, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* get_Entry();

  /// @brief Method get_Label, addr 0x589d48c, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_Label();

  /// @brief Method set_BackgroundStyle, addr 0x589d4b8, size 0x9c, virtual false, abstract: false, final false
  inline void set_BackgroundStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value);

  /// @brief Method set_Entry, addr 0x589d16c, size 0x88, virtual false, abstract: false, final false
  inline void set_Entry(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* value);

  /// @brief Method set_Label, addr 0x589d220, size 0x2c, virtual false, abstract: false, final false
  inline void set_Label(::StringW value);

  /// @brief Method set_PillStyle, addr 0x589d24c, size 0x9c, virtual false, abstract: false, final false
  inline void set_PillStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleLine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConsoleLine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConsoleLine(ConsoleLine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConsoleLine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConsoleLine(ConsoleLine const&) = delete;

  /// @brief Field DefaultCounterBackgroundWidth offset 0xffffffff size 0x4
  static constexpr int32_t DefaultCounterBackgroundWidth{ static_cast<int32_t>(0x10) };

  /// @brief Field MaxCounterBackgroundWidth offset 0xffffffff size 0x4
  static constexpr int32_t MaxCounterBackgroundWidth{ static_cast<int32_t>(0x40) };

  /// @brief Field MaxLabelCharacterSize offset 0xffffffff size 0x4
  static constexpr int32_t MaxLabelCharacterSize{ static_cast<int32_t>(0x74) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18328 };

  /// @brief Field _label, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> ____label;

  /// @brief Field _flex, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> ____flex;

  /// @brief Field _background, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> ____background;

  /// @brief Field _pill, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> ____pill;

  /// @brief Field _entry, offset: 0xa0, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* ____entry;

  /// @brief Field OnClick, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* ___OnClick;

  /// @brief Field _counterLabel, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> ____counterLabel;

  /// @brief Field _counterBackground, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> ____counterBackground;

  /// @brief Field _backgroundImageStyle, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> ____backgroundImageStyle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine, ____label) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine, ____flex) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine, ____background) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine, ____pill) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine, ____entry) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine, ___OnClick) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine, ____counterLabel) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine, ____counterBackground) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine, ____backgroundImageStyle) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine, 0xc8>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine*, "Meta.XR.ImmersiveDebugger.UserInterface", "ConsoleLine");
