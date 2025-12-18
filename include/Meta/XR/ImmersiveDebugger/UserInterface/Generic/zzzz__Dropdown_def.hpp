#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/Dropdown.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Dropdown)
namespace Meta::XR::ImmersiveDebugger::Manager {
class TweakEnum;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Background;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ButtonWithLabel;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class DropdownMenuItem;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Dropdown__UpdateScrollPosition_d__24;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Flex;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ImageStyle;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class LayoutStyle;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class InspectorPanel;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class ScrollRect;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Dropdown;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Dropdown__UpdateScrollPosition_d__24;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown__UpdateScrollPosition_d__24);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown/<UpdateScrollPosition>d__24
class CORDL_TYPE Dropdown__UpdateScrollPosition_d__24 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown> __4__this;

  /// @brief Field <menuHeight>5__3, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__menuHeight_5__3, put = __cordl_internal_set__menuHeight_5__3)) float_t _menuHeight_5__3;

  /// @brief Field <scrollRect>5__2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__scrollRect_5__2, put = __cordl_internal_set__scrollRect_5__2)) ::UnityW<::UnityEngine::UI::ScrollRect> _scrollRect_5__2;

  /// @brief Field dropdownIsShowing, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_dropdownIsShowing, put = __cordl_internal_set_dropdownIsShowing)) bool dropdownIsShowing;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x58abc68, size 0x200, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown__UpdateScrollPosition_d__24* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x58abea4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x58abeac, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x58abee4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x58abc64, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__menuHeight_5__3() const;

  constexpr float_t& __cordl_internal_get__menuHeight_5__3();

  constexpr ::UnityW<::UnityEngine::UI::ScrollRect> const& __cordl_internal_get__scrollRect_5__2() const;

  constexpr ::UnityW<::UnityEngine::UI::ScrollRect>& __cordl_internal_get__scrollRect_5__2();

  constexpr bool const& __cordl_internal_get_dropdownIsShowing() const;

  constexpr bool& __cordl_internal_get_dropdownIsShowing();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown> value);

  constexpr void __cordl_internal_set__menuHeight_5__3(float_t value);

  constexpr void __cordl_internal_set__scrollRect_5__2(::UnityW<::UnityEngine::UI::ScrollRect> value);

  constexpr void __cordl_internal_set_dropdownIsShowing(bool value);

  /// @brief Method .ctor, addr 0x58abaf8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dropdown__UpdateScrollPosition_d__24();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Dropdown__UpdateScrollPosition_d__24", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dropdown__UpdateScrollPosition_d__24(Dropdown__UpdateScrollPosition_d__24&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dropdown__UpdateScrollPosition_d__24", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dropdown__UpdateScrollPosition_d__24(Dropdown__UpdateScrollPosition_d__24 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18361 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field dropdownIsShowing, offset: 0x20, size: 0x1, def value: None
  bool ___dropdownIsShowing;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown> _____4__this;

  /// @brief Field <scrollRect>5__2, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::ScrollRect> ____scrollRect_5__2;

  /// @brief Field <menuHeight>5__3, offset: 0x38, size: 0x4, def value: None
  float_t ____menuHeight_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown__UpdateScrollPosition_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown__UpdateScrollPosition_d__24, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown__UpdateScrollPosition_d__24, ___dropdownIsShowing) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown__UpdateScrollPosition_d__24, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown__UpdateScrollPosition_d__24, ____scrollRect_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown__UpdateScrollPosition_d__24, ____menuHeight_5__3) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown__UpdateScrollPosition_d__24, 0x40>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown
class CORDL_TYPE Dropdown : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller {
public:
  // Declarations
  using _UpdateScrollPosition_d__24 = ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown__UpdateScrollPosition_d__24;

  __declspec(property(put = set_BackgroundStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> BackgroundStyle;

  __declspec(property(get = get_DefaultHeight)) float_t DefaultHeight;

  __declspec(property(get = get_IsMenuVisible)) bool IsMenuVisible;

  __declspec(property(get = get_Label, put = set_Label)) ::StringW Label;

  /// @brief Field _background, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__background, put = __cordl_internal_set__background)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> _background;

  /// @brief Field _backgroundImageStyle, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundImageStyle, put = __cordl_internal_set__backgroundImageStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>
      _backgroundImageStyle;

  /// @brief Field _baseLabel, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__baseLabel, put = __cordl_internal_set__baseLabel)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel> _baseLabel;

  /// @brief Field _flex, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__flex, put = __cordl_internal_set__flex)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> _flex;

  /// @brief Field _inspectorPanel, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__inspectorPanel, put = __cordl_internal_set__inspectorPanel)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel> _inspectorPanel;

  /// @brief Field _previousScrollPosition, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get__previousScrollPosition, put = __cordl_internal_set__previousScrollPosition)) float_t _previousScrollPosition;

  /// @brief Field _requestBackgroundUpdate, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__requestBackgroundUpdate, put = __cordl_internal_set__requestBackgroundUpdate)) bool _requestBackgroundUpdate;

  /// @brief Field _rootLayoutStyle, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__rootLayoutStyle, put = __cordl_internal_set__rootLayoutStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle>
      _rootLayoutStyle;

  /// @brief Field _tweak, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__tweak, put = __cordl_internal_set__tweak)) ::Meta::XR::ImmersiveDebugger::Manager::TweakEnum* _tweak;

  /// @brief Method AppendValue, addr 0x58abb24, size 0xa8, virtual false, abstract: false, final false
  inline void AppendValue(::StringW data);

  /// @brief Method HideDropdownItems, addr 0x58abb00, size 0x24, virtual false, abstract: false, final false
  inline void HideDropdownItems();

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown* New_ctor();

  /// @brief Method OnDropdownClick, addr 0x58ab8c8, size 0x20, virtual false, abstract: false, final false
  inline void OnDropdownClick();

  /// @brief Method OnMenuItemClick, addr 0x58ab938, size 0x4c, virtual false, abstract: false, final false
  inline void OnMenuItemClick(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem* menuItem);

  /// @brief Method OnTransparencyChanged, addr 0x58abbcc, size 0x8c, virtual true, abstract: false, final false
  inline void OnTransparencyChanged();

  /// @brief Method SetDropdownMenuVisibility, addr 0x58ab8e8, size 0x50, virtual false, abstract: false, final false
  inline void SetDropdownMenuVisibility(bool visible);

  /// @brief Method Setup, addr 0x58ab52c, size 0x39c, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  /// @brief Method SetupDropdownList, addr 0x58aafe0, size 0x54c, virtual false, abstract: false, final false
  inline void SetupDropdownList();

  /// @brief Method SetupMenu, addr 0x58aaf80, size 0x34, virtual false, abstract: false, final false
  inline void SetupMenu(::Meta::XR::ImmersiveDebugger::Manager::TweakEnum* tweak);

  /// @brief Method Update, addr 0x58ab984, size 0x10c, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateScrollPosition, addr 0x58aba90, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* UpdateScrollPosition(bool dropdownIsShowing);

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const& __cordl_internal_get__background() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& __cordl_internal_get__background();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const& __cordl_internal_get__backgroundImageStyle() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>& __cordl_internal_get__backgroundImageStyle();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel> const& __cordl_internal_get__baseLabel() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel>& __cordl_internal_get__baseLabel();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& __cordl_internal_get__flex() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& __cordl_internal_get__flex();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel> const& __cordl_internal_get__inspectorPanel() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel>& __cordl_internal_get__inspectorPanel();

  constexpr float_t const& __cordl_internal_get__previousScrollPosition() const;

  constexpr float_t& __cordl_internal_get__previousScrollPosition();

  constexpr bool const& __cordl_internal_get__requestBackgroundUpdate() const;

  constexpr bool& __cordl_internal_get__requestBackgroundUpdate();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle> const& __cordl_internal_get__rootLayoutStyle() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle>& __cordl_internal_get__rootLayoutStyle();

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::TweakEnum* const& __cordl_internal_get__tweak() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::TweakEnum*& __cordl_internal_get__tweak();

  constexpr void __cordl_internal_set__background(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value);

  constexpr void __cordl_internal_set__backgroundImageStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value);

  constexpr void __cordl_internal_set__baseLabel(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel> value);

  constexpr void __cordl_internal_set__flex(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value);

  constexpr void __cordl_internal_set__inspectorPanel(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel> value);

  constexpr void __cordl_internal_set__previousScrollPosition(float_t value);

  constexpr void __cordl_internal_set__requestBackgroundUpdate(bool value);

  constexpr void __cordl_internal_set__rootLayoutStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle> value);

  constexpr void __cordl_internal_set__tweak(::Meta::XR::ImmersiveDebugger::Manager::TweakEnum* value);

  /// @brief Method .ctor, addr 0x58abc58, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DefaultHeight, addr 0x58aae14, size 0x2c, virtual false, abstract: false, final false
  inline float_t get_DefaultHeight();

  /// @brief Method get_IsMenuVisible, addr 0x58aadfc, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsMenuVisible();

  /// @brief Method get_Label, addr 0x58aae40, size 0x14, virtual false, abstract: false, final false
  inline ::StringW get_Label();

  /// @brief Method set_BackgroundStyle, addr 0x58aaee0, size 0xa0, virtual false, abstract: false, final false
  inline void set_BackgroundStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value);

  /// @brief Method set_Label, addr 0x58aae54, size 0x38, virtual false, abstract: false, final false
  inline void set_Label(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dropdown();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Dropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dropdown(Dropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dropdown(Dropdown const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18362 };

  /// @brief Field _flex, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> ____flex;

  /// @brief Field _tweak, offset: 0x78, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Manager::TweakEnum* ____tweak;

  /// @brief Field _baseLabel, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel> ____baseLabel;

  /// @brief Field _background, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> ____background;

  /// @brief Field _requestBackgroundUpdate, offset: 0x90, size: 0x1, def value: None
  bool ____requestBackgroundUpdate;

  /// @brief Field _rootLayoutStyle, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle> ____rootLayoutStyle;

  /// @brief Field _inspectorPanel, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::InspectorPanel> ____inspectorPanel;

  /// @brief Field _previousScrollPosition, offset: 0xa8, size: 0x4, def value: None
  float_t ____previousScrollPosition;

  /// @brief Field _backgroundImageStyle, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> ____backgroundImageStyle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown, ____flex) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown, ____tweak) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown, ____baseLabel) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown, ____background) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown, ____requestBackgroundUpdate) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown, ____rootLayoutStyle) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown, ____inspectorPanel) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown, ____previousScrollPosition) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown, ____backgroundImageStyle) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown, 0xb8>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "Dropdown");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown__UpdateScrollPosition_d__24);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown__UpdateScrollPosition_d__24*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic",
                       "Dropdown/<UpdateScrollPosition>d__24");
