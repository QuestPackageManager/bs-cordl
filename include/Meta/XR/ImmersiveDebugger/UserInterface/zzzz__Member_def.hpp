#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Member.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Member)
namespace Meta::XR::ImmersiveDebugger::Manager {
class ActionHook;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class GizmoHook;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class TweakEnum;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class Tweak;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class WatchTexture;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class Watch;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Background;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ButtonForAction;
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
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Slider;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Switch;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class TextArea;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ToggleForGizmo;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class IMember;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class Values;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class Member;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Member);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller, UnityEngine.Color
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Member
class CORDL_TYPE Member : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller {
public:
  // Declarations
  __declspec(property(get = get_Description, put = set_Description)) ::StringW Description;

  __declspec(property(put = set_PillColor)) ::UnityEngine::Color PillColor;

  __declspec(property(put = set_PillStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> PillStyle;

  __declspec(property(get = get_Title, put = set_Title)) ::StringW Title;

  /// @brief Field _action, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__action, put = __cordl_internal_set__action)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction> _action;

  /// @brief Field _defaultPillColor, offset 0xd0, size 0x10
  __declspec(property(get = __cordl_internal_get__defaultPillColor, put = __cordl_internal_set__defaultPillColor)) ::UnityEngine::Color _defaultPillColor;

  /// @brief Field _description, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__description, put = __cordl_internal_set__description)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextArea> _description;

  /// @brief Field _flex, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__flex, put = __cordl_internal_set__flex)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> _flex;

  /// @brief Field _gizmo, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__gizmo, put = __cordl_internal_set__gizmo)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleForGizmo> _gizmo;

  /// @brief Field _pill, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__pill, put = __cordl_internal_set__pill)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> _pill;

  /// @brief Field _pillBackgroundStyle, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__pillBackgroundStyle, put = __cordl_internal_set__pillBackgroundStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>
      _pillBackgroundStyle;

  /// @brief Field _slider, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__slider, put = __cordl_internal_set__slider)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Slider> _slider;

  /// @brief Field _switch, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__switch, put = __cordl_internal_set__switch)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch> _switch;

  /// @brief Field _title, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__title, put = __cordl_internal_set__title)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> _title;

  /// @brief Field _transparentPillColor, offset 0xe0, size 0x10
  __declspec(property(get = __cordl_internal_get__transparentPillColor, put = __cordl_internal_set__transparentPillColor)) ::UnityEngine::Color _transparentPillColor;

  /// @brief Field _valueFlex, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__valueFlex, put = __cordl_internal_set__valueFlex)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> _valueFlex;

  /// @brief Field _values, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Values> _values;

  /// @brief Field _verticalFlex, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__verticalFlex, put = __cordl_internal_set__verticalFlex)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> _verticalFlex;

  /// @brief Convert operator to "::Meta::XR::ImmersiveDebugger::UserInterface::IMember"
  constexpr operator ::Meta::XR::ImmersiveDebugger::UserInterface::IMember*() noexcept;

  /// @brief Method AddSlider, addr 0x583f6f8, size 0x1b0, virtual false, abstract: false, final false
  inline void AddSlider(::Meta::XR::ImmersiveDebugger::Manager::Tweak* tweak);

  /// @brief Method AddToggle, addr 0x583f8a8, size 0x28c, virtual false, abstract: false, final false
  inline void AddToggle(::Meta::XR::ImmersiveDebugger::Manager::Tweak* tweak);

  /// @brief Method GetAction, addr 0x583e8dc, size 0x84, virtual true, abstract: false, final true
  inline ::Meta::XR::ImmersiveDebugger::Manager::ActionHook* GetAction();

  /// @brief Method GetGizmo, addr 0x583ebdc, size 0x84, virtual true, abstract: false, final true
  inline ::Meta::XR::ImmersiveDebugger::Manager::GizmoHook* GetGizmo();

  /// @brief Method GetTweak, addr 0x583f54c, size 0x84, virtual true, abstract: false, final true
  inline ::Meta::XR::ImmersiveDebugger::Manager::Tweak* GetTweak();

  /// @brief Method GetWatch, addr 0x583ee48, size 0x84, virtual true, abstract: false, final true
  inline ::Meta::XR::ImmersiveDebugger::Manager::Watch* GetWatch();

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Member* New_ctor();

  /// @brief Method OnTransparencyChanged, addr 0x583e868, size 0x74, virtual true, abstract: false, final false
  inline void OnTransparencyChanged();

  /// @brief Method RegisterAction, addr 0x583e960, size 0x260, virtual true, abstract: false, final true
  inline void RegisterAction(::Meta::XR::ImmersiveDebugger::Manager::ActionHook* action);

  /// @brief Method RegisterDescriptor, addr 0x583aa80, size 0x1b8, virtual false, abstract: false, final false
  inline void RegisterDescriptor();

  /// @brief Method RegisterEnum, addr 0x583f378, size 0xe0, virtual true, abstract: false, final true
  inline void RegisterEnum(::Meta::XR::ImmersiveDebugger::Manager::TweakEnum* tweak);

  /// @brief Method RegisterGizmo, addr 0x583ec60, size 0x1e8, virtual true, abstract: false, final true
  inline void RegisterGizmo(::Meta::XR::ImmersiveDebugger::Manager::GizmoHook* gizmo);

  /// @brief Method RegisterTexture, addr 0x583f458, size 0xf4, virtual true, abstract: false, final true
  inline void RegisterTexture(::Meta::XR::ImmersiveDebugger::Manager::WatchTexture* watchTexture);

  /// @brief Method RegisterTweak, addr 0x583f5d0, size 0x128, virtual true, abstract: false, final true
  inline void RegisterTweak(::Meta::XR::ImmersiveDebugger::Manager::Tweak* tweak);

  /// @brief Method RegisterWatch, addr 0x583eecc, size 0xd4, virtual true, abstract: false, final true
  inline void RegisterWatch(::Meta::XR::ImmersiveDebugger::Manager::Watch* watch);

  /// @brief Method Setup, addr 0x583e484, size 0x344, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  /// @brief Method <AddToggle>b__37_0, addr 0x583fb40, size 0x34, virtual false, abstract: false, final false
  inline void _AddToggle_b__37_0();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction> const& __cordl_internal_get__action() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction>& __cordl_internal_get__action();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__defaultPillColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__defaultPillColor();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextArea> const& __cordl_internal_get__description() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextArea>& __cordl_internal_get__description();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& __cordl_internal_get__flex() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& __cordl_internal_get__flex();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleForGizmo> const& __cordl_internal_get__gizmo() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleForGizmo>& __cordl_internal_get__gizmo();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const& __cordl_internal_get__pill() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& __cordl_internal_get__pill();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const& __cordl_internal_get__pillBackgroundStyle() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>& __cordl_internal_get__pillBackgroundStyle();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Slider> const& __cordl_internal_get__slider() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Slider>& __cordl_internal_get__slider();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch> const& __cordl_internal_get__switch() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch>& __cordl_internal_get__switch();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> const& __cordl_internal_get__title() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>& __cordl_internal_get__title();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__transparentPillColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__transparentPillColor();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& __cordl_internal_get__valueFlex() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& __cordl_internal_get__valueFlex();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Values> const& __cordl_internal_get__values() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Values>& __cordl_internal_get__values();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& __cordl_internal_get__verticalFlex() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& __cordl_internal_get__verticalFlex();

  constexpr void __cordl_internal_set__action(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction> value);

  constexpr void __cordl_internal_set__defaultPillColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__description(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextArea> value);

  constexpr void __cordl_internal_set__flex(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value);

  constexpr void __cordl_internal_set__gizmo(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleForGizmo> value);

  constexpr void __cordl_internal_set__pill(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value);

  constexpr void __cordl_internal_set__pillBackgroundStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value);

  constexpr void __cordl_internal_set__slider(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Slider> value);

  constexpr void __cordl_internal_set__switch(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch> value);

  constexpr void __cordl_internal_set__title(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> value);

  constexpr void __cordl_internal_set__transparentPillColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__valueFlex(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value);

  constexpr void __cordl_internal_set__values(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Values> value);

  constexpr void __cordl_internal_set__verticalFlex(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value);

  /// @brief Method .ctor, addr 0x583fb34, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Description, addr 0x583e3cc, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_Description();

  /// @brief Method get_Title, addr 0x583e1e8, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_Title();

  /// @brief Convert to "::Meta::XR::ImmersiveDebugger::UserInterface::IMember"
  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IMember* i___Meta__XR__ImmersiveDebugger__UserInterface__IMember() noexcept;

  /// @brief Method set_Description, addr 0x583ac38, size 0x1c, virtual false, abstract: false, final false
  inline void set_Description(::StringW value);

  /// @brief Method set_PillColor, addr 0x583ac54, size 0x9c, virtual false, abstract: false, final false
  inline void set_PillColor(::UnityEngine::Color value);

  /// @brief Method set_PillStyle, addr 0x583e3e8, size 0x9c, virtual false, abstract: false, final false
  inline void set_PillStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value);

  /// @brief Method set_Title, addr 0x583aa44, size 0x3c, virtual false, abstract: false, final false
  inline void set_Title(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Member();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Member", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Member(Member&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Member", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Member(Member const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18329 };

  /// @brief Field _title, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> ____title;

  /// @brief Field _description, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextArea> ____description;

  /// @brief Field _flex, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> ____flex;

  /// @brief Field _valueFlex, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> ____valueFlex;

  /// @brief Field _verticalFlex, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> ____verticalFlex;

  /// @brief Field _values, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Values> ____values;

  /// @brief Field _action, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction> ____action;

  /// @brief Field _slider, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Slider> ____slider;

  /// @brief Field _switch, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch> ____switch;

  /// @brief Field _gizmo, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleForGizmo> ____gizmo;

  /// @brief Field _pill, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> ____pill;

  /// @brief Field _pillBackgroundStyle, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> ____pillBackgroundStyle;

  /// @brief Field _defaultPillColor, offset: 0xd0, size: 0x10, def value: None
  ::UnityEngine::Color ____defaultPillColor;

  /// @brief Field _transparentPillColor, offset: 0xe0, size: 0x10, def value: None
  ::UnityEngine::Color ____transparentPillColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Member, ____title) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Member, ____description) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Member, ____flex) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Member, ____valueFlex) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Member, ____verticalFlex) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Member, ____values) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Member, ____action) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Member, ____slider) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Member, ____switch) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Member, ____gizmo) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Member, ____pill) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Member, ____pillBackgroundStyle) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Member, ____defaultPillColor) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Member, ____transparentPillColor) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Member, 0xf0>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Member);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Member*, "Meta.XR.ImmersiveDebugger.UserInterface", "Member");
