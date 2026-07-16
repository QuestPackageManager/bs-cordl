#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/GenericDropdownMenu.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__GenericDropdownMenu_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__DetachFromPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusOutEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__GenericDropdownMenu_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGenericMenu_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationManipulator_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationOperation_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollView_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu_MenuItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu_MenuItem::*)()>(&::UnityEngine::UIElements::GenericDropdownMenu_MenuItem::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d42b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::GenericDropdownMenu_MenuItem::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& UnityEngine::UIElements::GenericDropdownMenu_MenuItem::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu_MenuItem::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::GenericDropdownMenu_MenuItem::__cordl_internal_get_element() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___element;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::GenericDropdownMenu_MenuItem::__cordl_internal_get_element() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___element;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu_MenuItem::__cordl_internal_set_element(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___element = value;
}
constexpr ::System::Action*& UnityEngine::UIElements::GenericDropdownMenu_MenuItem::__cordl_internal_get_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
constexpr ::System::Action* const& UnityEngine::UIElements::GenericDropdownMenu_MenuItem::__cordl_internal_get_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu_MenuItem::__cordl_internal_set_action(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___action = value;
}
constexpr ::System::Action_1<::System::Object*>*& UnityEngine::UIElements::GenericDropdownMenu_MenuItem::__cordl_internal_get_actionUserData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actionUserData;
}
constexpr ::System::Action_1<::System::Object*>* const& UnityEngine::UIElements::GenericDropdownMenu_MenuItem::__cordl_internal_get_actionUserData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actionUserData;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu_MenuItem::__cordl_internal_set_actionUserData(::System::Action_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___actionUserData = value;
}
inline void UnityEngine::UIElements::GenericDropdownMenu_MenuItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::GenericDropdownMenu_MenuItem* UnityEngine::UIElements::GenericDropdownMenu_MenuItem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::GenericDropdownMenu_MenuItem::GenericDropdownMenu_MenuItem() {}
// Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityEngine::UIElements::GenericDropdownMenu*", modifiers: "", def_value: Some("{}") }, CppParam { name: "selectedIndex", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass48_0::GenericDropdownMenu___c__DisplayClass48_0(::UnityEngine::UIElements::GenericDropdownMenu* __4__this,
                                                                                                                          int32_t selectedIndex) noexcept {
  this->__4__this = __4__this;
  this->selectedIndex = selectedIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass48_0::GenericDropdownMenu___c__DisplayClass48_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass63_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass63_0::*)()>(
    &::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass63_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d42b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass63_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass63_0._UpdateItem_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass63_0::*)(::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass63_0::_UpdateItem_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6d42b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass63_0*>(),
                                                             { "<UpdateItem>b__0", {}, { ::i2c::type_of<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass63_0::__cordl_internal_get_itemName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemName;
}
constexpr ::StringW const& UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass63_0::__cordl_internal_get_itemName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemName;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass63_0::__cordl_internal_set_itemName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemName = value;
}
inline void UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass63_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass63_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass63_0::_UpdateItem_b__0(::UnityEngine::UIElements::GenericDropdownMenu_MenuItem* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass63_0*>(),
                                                                                         { "<UpdateItem>b__0", {}, { ::i2c::type_of<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass63_0* UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass63_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass63_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass63_0::GenericDropdownMenu___c__DisplayClass63_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.get_isSingleSelectionDropdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::GenericDropdownMenu::*)()>(&::UnityEngine::UIElements::GenericDropdownMenu::get_isSingleSelectionDropdown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d3f278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "get_isSingleSelectionDropdown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.set_isSingleSelectionDropdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(bool)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::set_isSingleSelectionDropdown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d3f280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "set_isSingleSelectionDropdown", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.get_closeOnParentResize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::GenericDropdownMenu::*)()>(&::UnityEngine::UIElements::GenericDropdownMenu::get_closeOnParentResize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d3f288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "get_closeOnParentResize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.set_closeOnParentResize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(bool)>(&::UnityEngine::UIElements::GenericDropdownMenu::set_closeOnParentResize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d3f290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "set_closeOnParentResize", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.get_contentContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::GenericDropdownMenu::*)()>(
    &::UnityEngine::UIElements::GenericDropdownMenu::get_contentContainer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6d3f298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "get_contentContainer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)()>(&::UnityEngine::UIElements::GenericDropdownMenu::_ctor)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x6d3c88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnAttachToPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::AttachToPanelEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnAttachToPanel)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x6d3f2b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                                                           { "OnAttachToPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::AttachToPanelEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnDetachFromPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::DetachFromPanelEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnDetachFromPanel)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x6d3f7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                                                           { "OnDetachFromPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::DetachFromPanelEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.Hide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(bool)>(&::UnityEngine::UIElements::GenericDropdownMenu::Hide)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6d3fb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "Hide", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(
    ::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::GenericDropdownMenu::Apply)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6d3fcb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                         { "Apply", {}, { ::i2c::type_of<::UnityEngine::UIElements::KeyboardNavigationOperation>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::KeyboardNavigationOperation)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::Apply)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6d3fcdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                                                           { "Apply", {}, { ::i2c::type_of<::UnityEngine::UIElements::KeyboardNavigationOperation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnPointerDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::PointerDownEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnPointerDown)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6d400d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                                                           { "OnPointerDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDownEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnPointerMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::PointerMoveEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnPointerMove)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6d402dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                                                           { "OnPointerMove", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::PointerUpEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnPointerUp)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6d403c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "OnPointerUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnFocusOut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::FocusOutEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnFocusOut)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6d40520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "OnFocusOut", {}, { ::i2c::type_of<::UnityEngine::UIElements::FocusOutEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnParentResized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnParentResized)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6d40698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                                                           { "OnParentResized", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.UpdateSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::UpdateSelection)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6d401c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                                                           { "UpdateSelection", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.ChangeSelectedIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(int32_t, int32_t)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::ChangeSelectedIndex)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6d406ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "ChangeSelectedIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.GetSelectedIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::GenericDropdownMenu::*)()>(&::UnityEngine::UIElements::GenericDropdownMenu::GetSelectedIndex)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6d3febc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "GetSelectedIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.AddItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::StringW, bool, ::System::Action*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::AddItem)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6d407d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                             { "AddItem", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.AddItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::StringW, bool, ::System::Action_1<::System::Object*>*, ::System::Object*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::AddItem)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6d40b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                         { "AddItem", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.AddDisabledItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::StringW, bool)>(&::UnityEngine::UIElements::GenericDropdownMenu::AddDisabledItem)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6d40b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "AddDisabledItem", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.AddSeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::StringW)>(&::UnityEngine::UIElements::GenericDropdownMenu::AddSeparator)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d40b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "AddSeparator", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.AddItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem* (
    ::UnityEngine::UIElements::GenericDropdownMenu::*)(::StringW, bool, bool, ::System::Object*)>(&::UnityEngine::UIElements::GenericDropdownMenu::AddItem)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x6d407fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                             { "AddItem", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.UpdateItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::StringW, bool)>(&::UnityEngine::UIElements::GenericDropdownMenu::UpdateItem)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6d40c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "UpdateItem", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.DropDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*, bool)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::DropDown)> {
  constexpr static std::size_t size = 0xa54;
  constexpr static std::size_t addrs = 0x6d40d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                { "DropDown", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnTargetElementDetachFromPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::DetachFromPanelEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnTargetElementDetachFromPanel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d421d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                             { "OnTargetElementDetachFromPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::DetachFromPanelEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnContainerGeometryChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnContainerGeometryChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d421d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                             { "OnContainerGeometryChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnInitialDisplay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnInitialDisplay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6d421dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                                                           { "OnInitialDisplay", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.EnsureVisibilityInParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)()>(&::UnityEngine::UIElements::GenericDropdownMenu::EnsureVisibilityInParent)> {
  constexpr static std::size_t size = 0x9fc;
  constexpr static std::size_t addrs = 0x6d417d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "EnsureVisibilityInParent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.GetLargestItemWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::GenericDropdownMenu::*)()>(&::UnityEngine::UIElements::GenericDropdownMenu::GetLargestItemWidth)> {
  constexpr static std::size_t size = 0x734;
  constexpr static std::size_t addrs = 0x6d421fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "GetLargestItemWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu._Apply_g__UpdateSelectionDown_48_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(
    int32_t, ::by_ref<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass48_0>)>(&::UnityEngine::UIElements::GenericDropdownMenu::_Apply_g__UpdateSelectionDown_48_0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6d40010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
            { "<Apply>g__UpdateSelectionDown|48_0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass48_0>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu._Apply_g__UpdateSelectionUp_48_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(
    int32_t, ::by_ref<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass48_0>)>(&::UnityEngine::UIElements::GenericDropdownMenu::_Apply_g__UpdateSelectionUp_48_1)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6d3ff64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                         { "<Apply>g__UpdateSelectionUp|48_1", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass48_0>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*>*& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_Items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Items;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*>* const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_Items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Items;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_Items(::System::Collections::Generic::List_1<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Items = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_MenuContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MenuContainer;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_MenuContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MenuContainer;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_MenuContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MenuContainer = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_OuterContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OuterContainer;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_OuterContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OuterContainer;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_OuterContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OuterContainer = value;
}
constexpr ::UnityEngine::UIElements::ScrollView*& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_ScrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollView;
}
constexpr ::UnityEngine::UIElements::ScrollView* const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_ScrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollView;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_ScrollView(::UnityEngine::UIElements::ScrollView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScrollView = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_PanelRootVisualContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PanelRootVisualContainer;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_PanelRootVisualContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PanelRootVisualContainer;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_PanelRootVisualContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PanelRootVisualContainer = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_TargetElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetElement;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_TargetElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetElement;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_TargetElement(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TargetElement = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_DesiredRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DesiredRect;
}
constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_DesiredRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DesiredRect;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_DesiredRect(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DesiredRect = value;
}
constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator*& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_NavigationManipulator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NavigationManipulator;
}
constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator* const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_NavigationManipulator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NavigationManipulator;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_NavigationManipulator(::UnityEngine::UIElements::KeyboardNavigationManipulator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NavigationManipulator = value;
}
constexpr float_t& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_PositionTop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionTop;
}
constexpr float_t const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_PositionTop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionTop;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_PositionTop(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PositionTop = value;
}
constexpr float_t& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_PositionLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionLeft;
}
constexpr float_t const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_PositionLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionLeft;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_PositionLeft(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PositionLeft = value;
}
constexpr float_t& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_ContentWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentWidth;
}
constexpr float_t const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_ContentWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentWidth;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_ContentWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContentWidth = value;
}
constexpr bool& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_FitContentWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FitContentWidth;
}
constexpr bool const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_FitContentWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FitContentWidth;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_FitContentWidth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FitContentWidth = value;
}
constexpr bool& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_ShownAboveTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShownAboveTarget;
}
constexpr bool const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_ShownAboveTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShownAboveTarget;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_ShownAboveTarget(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShownAboveTarget = value;
}
constexpr bool& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get__isSingleSelectionDropdown_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSingleSelectionDropdown_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get__isSingleSelectionDropdown_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSingleSelectionDropdown_k__BackingField;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set__isSingleSelectionDropdown_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isSingleSelectionDropdown_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get__closeOnParentResize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeOnParentResize_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get__closeOnParentResize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeOnParentResize_k__BackingField;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set__closeOnParentResize_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____closeOnParentResize_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_MousePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MousePosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_MousePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MousePosition;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_MousePosition(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MousePosition = value;
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::GenericDropdownMenu*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::GenericDropdownMenu*>();
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_itemUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "itemUssClassName", ::UnityEngine::UIElements::GenericDropdownMenu*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_itemUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "itemUssClassName", ::UnityEngine::UIElements::GenericDropdownMenu*>();
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_itemContentUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "itemContentUssClassName", ::UnityEngine::UIElements::GenericDropdownMenu*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_itemContentUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "itemContentUssClassName", ::UnityEngine::UIElements::GenericDropdownMenu*>();
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::GenericDropdownMenu*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::GenericDropdownMenu*>();
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_containerInnerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "containerInnerUssClassName", ::UnityEngine::UIElements::GenericDropdownMenu*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_containerInnerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "containerInnerUssClassName", ::UnityEngine::UIElements::GenericDropdownMenu*>();
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_containerOuterUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "containerOuterUssClassName", ::UnityEngine::UIElements::GenericDropdownMenu*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_containerOuterUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "containerOuterUssClassName", ::UnityEngine::UIElements::GenericDropdownMenu*>();
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_checkmarkUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "checkmarkUssClassName", ::UnityEngine::UIElements::GenericDropdownMenu*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_checkmarkUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "checkmarkUssClassName", ::UnityEngine::UIElements::GenericDropdownMenu*>();
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_separatorUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "separatorUssClassName", ::UnityEngine::UIElements::GenericDropdownMenu*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_separatorUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "separatorUssClassName", ::UnityEngine::UIElements::GenericDropdownMenu*>();
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_contentWidthUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "contentWidthUssClassName", ::UnityEngine::UIElements::GenericDropdownMenu*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_contentWidthUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "contentWidthUssClassName", ::UnityEngine::UIElements::GenericDropdownMenu*>();
}
inline bool UnityEngine::UIElements::GenericDropdownMenu::get_isSingleSelectionDropdown() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "get_isSingleSelectionDropdown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::set_isSingleSelectionDropdown(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "set_isSingleSelectionDropdown", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::GenericDropdownMenu::get_closeOnParentResize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "get_closeOnParentResize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::set_closeOnParentResize(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "set_closeOnParentResize", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::GenericDropdownMenu::get_contentContainer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "get_contentContainer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                                                         { "OnAttachToPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::AttachToPanelEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                                                         { "OnDetachFromPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::DetachFromPanelEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::Hide(bool giveFocusBack) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "Hide", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, giveFocusBack);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::Apply(::UnityEngine::UIElements::KeyboardNavigationOperation op, ::UnityEngine::UIElements::EventBase* sourceEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                              { "Apply", {}, { ::i2c::type_of<::UnityEngine::UIElements::KeyboardNavigationOperation>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op, sourceEvent);
}
inline bool UnityEngine::UIElements::GenericDropdownMenu::Apply(::UnityEngine::UIElements::KeyboardNavigationOperation op) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                                                         { "Apply", {}, { ::i2c::type_of<::UnityEngine::UIElements::KeyboardNavigationOperation>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, op);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                                                         { "OnPointerDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDownEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                                                         { "OnPointerMove", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "OnPointerUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnFocusOut(::UnityEngine::UIElements::FocusOutEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "OnFocusOut", {}, { ::i2c::type_of<::UnityEngine::UIElements::FocusOutEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnParentResized(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                                                         { "OnParentResized", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::UpdateSelection(::UnityEngine::UIElements::VisualElement* target) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                                                         { "UpdateSelection", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::ChangeSelectedIndex(int32_t newIndex, int32_t previousIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "ChangeSelectedIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newIndex, previousIndex);
}
inline int32_t UnityEngine::UIElements::GenericDropdownMenu::GetSelectedIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "GetSelectedIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::AddItem(::StringW itemName, bool isChecked, ::System::Action* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                           { "AddItem", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemName, isChecked, action);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::AddItem(::StringW itemName, bool isChecked, ::System::Action_1<::System::Object*>* action, ::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                          { "AddItem", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemName, isChecked, action, data);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::AddDisabledItem(::StringW itemName, bool isChecked) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "AddDisabledItem", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemName, isChecked);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::AddSeparator(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "AddSeparator", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline ::UnityEngine::UIElements::GenericDropdownMenu_MenuItem* UnityEngine::UIElements::GenericDropdownMenu::AddItem(::StringW itemName, bool isChecked, bool isEnabled, ::System::Object* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                           { "AddItem", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*>(this, ___internal_method, itemName, isChecked, isEnabled, data);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::UpdateItem(::StringW itemName, bool isChecked) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "UpdateItem", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemName, isChecked);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::DropDown(::UnityEngine::Rect position, ::UnityEngine::UIElements::VisualElement* targetElement, bool anchored) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                              { "DropDown", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, targetElement, anchored);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnTargetElementDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                           { "OnTargetElementDetachFromPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::DetachFromPanelEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnContainerGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                           { "OnContainerGeometryChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnInitialDisplay(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                                                                                         { "OnInitialDisplay", {}, { ::i2c::type_of<::UnityEngine::UIElements::GeometryChangedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::EnsureVisibilityInParent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "EnsureVisibilityInParent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::GenericDropdownMenu::GetLargestItemWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(), { "GetLargestItemWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void
UnityEngine::UIElements::GenericDropdownMenu::_Apply_g__UpdateSelectionDown_48_0(int32_t newIndex,
                                                                                 ::by_ref<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass48_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                       { "<Apply>g__UpdateSelectionDown|48_0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass48_0>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newIndex, _cordl_fixed_empty_name_whitespace);
}
inline void
UnityEngine::UIElements::GenericDropdownMenu::_Apply_g__UpdateSelectionUp_48_1(int32_t newIndex,
                                                                               ::by_ref<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass48_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::GenericDropdownMenu*>(),
                       { "<Apply>g__UpdateSelectionUp|48_1", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass48_0>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newIndex, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::UIElements::GenericDropdownMenu* UnityEngine::UIElements::GenericDropdownMenu::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::GenericDropdownMenu*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::IGenericMenu"
constexpr UnityEngine::UIElements::GenericDropdownMenu::operator ::UnityEngine::UIElements::IGenericMenu*() noexcept {
  return static_cast<::UnityEngine::UIElements::IGenericMenu*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IGenericMenu"
constexpr ::UnityEngine::UIElements::IGenericMenu* UnityEngine::UIElements::GenericDropdownMenu::i___UnityEngine__UIElements__IGenericMenu() noexcept {
  return static_cast<::UnityEngine::UIElements::IGenericMenu*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::GenericDropdownMenu::GenericDropdownMenu() {}
