#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/GenericDropdownMenu.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IGenericMenu_impl.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu_MenuItem::*)()>(
    &::UnityEngine::UIElements::GenericDropdownMenu_MenuItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49a46fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___element)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___action)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___actionUserData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::GenericDropdownMenu_MenuItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::GenericDropdownMenu_MenuItem* UnityEngine::UIElements::GenericDropdownMenu_MenuItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::GenericDropdownMenu_MenuItem::GenericDropdownMenu_MenuItem() {}
// Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityEngine::UIElements::GenericDropdownMenu*", modifiers: "", def_value: Some("{}") }, CppParam { name: "selectedIndex", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass39_0::GenericDropdownMenu___c__DisplayClass39_0(::UnityEngine::UIElements::GenericDropdownMenu* __4__this,
                                                                                                                          int32_t selectedIndex) noexcept {
  this->__4__this = __4__this;
  this->selectedIndex = selectedIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass39_0::GenericDropdownMenu___c__DisplayClass39_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0::*)()>(
    &::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49a4828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0._UpdateItem_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0::*)(
    ::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*)>(&::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0::_UpdateItem_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x49a5880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0*>::get(), "<UpdateItem>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0::__cordl_internal_get_itemName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemName;
}
constexpr ::StringW const& UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0::__cordl_internal_get_itemName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemName;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0::__cordl_internal_set_itemName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0::_UpdateItem_b__0(::UnityEngine::UIElements::GenericDropdownMenu_MenuItem* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0*>::get(), "<UpdateItem>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0* UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass54_0::GenericDropdownMenu___c__DisplayClass54_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.get_isSingleSelectionDropdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::GenericDropdownMenu::*)()>(
    &::UnityEngine::UIElements::GenericDropdownMenu::get_isSingleSelectionDropdown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49a2ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(),
                                                                               "get_isSingleSelectionDropdown", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.set_isSingleSelectionDropdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(bool)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::set_isSingleSelectionDropdown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x49a2eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "set_isSingleSelectionDropdown",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.get_closeOnParentResize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::GenericDropdownMenu::*)()>(
    &::UnityEngine::UIElements::GenericDropdownMenu::get_closeOnParentResize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49a2ef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(),
                                                                               "get_closeOnParentResize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.set_closeOnParentResize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(bool)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::set_closeOnParentResize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x49a2f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "set_closeOnParentResize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.get_contentContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::GenericDropdownMenu::*)()>(
    &::UnityEngine::UIElements::GenericDropdownMenu::get_contentContainer)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x49a2f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(),
                                                                               "get_contentContainer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)()>(&::UnityEngine::UIElements::GenericDropdownMenu::_ctor)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x49a0c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnAttachToPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::AttachToPanelEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnAttachToPanel)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x49a2f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnAttachToPanel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnDetachFromPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::DetachFromPanelEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnDetachFromPanel)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x49a3348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnDetachFromPanel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.Hide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(bool)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::Hide)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x49a36e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "Hide",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(
    ::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::GenericDropdownMenu::Apply)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x49a3770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::KeyboardNavigationOperation)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::Apply)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x49a37ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnPointerDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::PointerDownEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnPointerDown)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x49a3b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnPointerDown", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDownEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnPointerMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::PointerMoveEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnPointerMove)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x49a3da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnPointerMove", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerMoveEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnPointerUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::PointerUpEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnPointerUp)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x49a3ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnPointerUp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerUpEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnFocusOut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::FocusOutEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnFocusOut)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x49a4014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnFocusOut", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusOutEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnParentResized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnParentResized)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x49a415c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnParentResized", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.UpdateSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::UpdateSelection)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x49a3c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "UpdateSelection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.ChangeSelectedIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(int32_t, int32_t)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::ChangeSelectedIndex)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x49a4170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "ChangeSelectedIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.GetSelectedIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::GenericDropdownMenu::*)()>(
    &::UnityEngine::UIElements::GenericDropdownMenu::GetSelectedIndex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x49a3940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(),
                                                                               "GetSelectedIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.AddItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::StringW, bool, ::System::Action*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::AddItem)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x49a42ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "AddItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.AddItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(
    ::StringW, bool, ::System::Action_1<::System::Object*>*, ::System::Object*)>(&::UnityEngine::UIElements::GenericDropdownMenu::AddItem)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x49a4608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "AddItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.AddDisabledItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::StringW, bool)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::AddDisabledItem)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x49a462c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "AddDisabledItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.AddSeparator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::StringW)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::AddSeparator)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x49a463c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "AddSeparator",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.AddItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem* (
    ::UnityEngine::UIElements::GenericDropdownMenu::*)(::StringW, bool, bool, ::System::Object*)>(&::UnityEngine::UIElements::GenericDropdownMenu::AddItem)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x49a42d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "AddItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.UpdateItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::StringW, bool)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::UpdateItem)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x49a4704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "UpdateItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.DropDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(
    ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*, bool)>(&::UnityEngine::UIElements::GenericDropdownMenu::DropDown)> {
  constexpr static std::size_t size = 0x928;
  constexpr static std::size_t addrs = 0x49a4830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "DropDown", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnTargetElementDetachFromPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::DetachFromPanelEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnTargetElementDetachFromPanel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49a56d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnTargetElementDetachFromPanel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnContainerGeometryChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnContainerGeometryChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x49a56dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnContainerGeometryChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.EnsureVisibilityInParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)()>(
    &::UnityEngine::UIElements::GenericDropdownMenu::EnsureVisibilityInParent)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x49a5158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(),
                                                                               "EnsureVisibilityInParent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu._Apply_g__UpdateSelectionDown_39_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(
    int32_t, ::ByRef<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass39_0>)>(&::UnityEngine::UIElements::GenericDropdownMenu::_Apply_g__UpdateSelectionDown_39_0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x49a3a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "<Apply>g__UpdateSelectionDown|39_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass39_0>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu._Apply_g__UpdateSelectionUp_39_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(
    int32_t, ::ByRef<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass39_0>)>(&::UnityEngine::UIElements::GenericDropdownMenu::_Apply_g__UpdateSelectionUp_39_1)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x49a39e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "<Apply>g__UpdateSelectionUp|39_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass39_0>>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MenuContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OuterContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ScrollView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PanelRootVisualContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TargetElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_NavigationManipulator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>();
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_itemUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "itemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_itemUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "itemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>();
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>();
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_containerInnerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "containerInnerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_containerInnerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "containerInnerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>();
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_containerOuterUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "containerOuterUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_containerOuterUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "containerOuterUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>();
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_checkmarkUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "checkmarkUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_checkmarkUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "checkmarkUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>();
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_separatorUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "separatorUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_separatorUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "separatorUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>();
}
inline bool UnityEngine::UIElements::GenericDropdownMenu::get_isSingleSelectionDropdown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(),
                                                                             "get_isSingleSelectionDropdown", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::set_isSingleSelectionDropdown(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "set_isSingleSelectionDropdown",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::GenericDropdownMenu::get_closeOnParentResize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(),
                                                                             "get_closeOnParentResize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::set_closeOnParentResize(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "set_closeOnParentResize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::GenericDropdownMenu::get_contentContainer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(),
                                                                             "get_contentContainer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnAttachToPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnDetachFromPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::Hide(bool giveFocusBack) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "Hide",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, giveFocusBack);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::Apply(::UnityEngine::UIElements::KeyboardNavigationOperation op, ::UnityEngine::UIElements::EventBase* sourceEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op, sourceEvent);
}
inline bool UnityEngine::UIElements::GenericDropdownMenu::Apply(::UnityEngine::UIElements::KeyboardNavigationOperation op) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, op);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnPointerDown", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDownEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnPointerMove", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerMoveEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnPointerUp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerUpEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnFocusOut(::UnityEngine::UIElements::FocusOutEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnFocusOut", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusOutEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnParentResized(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnParentResized", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::UpdateSelection(::UnityEngine::UIElements::VisualElement* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "UpdateSelection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::ChangeSelectedIndex(int32_t newIndex, int32_t previousIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "ChangeSelectedIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIndex, previousIndex);
}
inline int32_t UnityEngine::UIElements::GenericDropdownMenu::GetSelectedIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(),
                                                                             "GetSelectedIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::AddItem(::StringW itemName, bool isChecked, ::System::Action* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "AddItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemName, isChecked, action);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::AddItem(::StringW itemName, bool isChecked, ::System::Action_1<::System::Object*>* action, ::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "AddItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemName, isChecked, action, data);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::AddDisabledItem(::StringW itemName, bool isChecked) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "AddDisabledItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemName, isChecked);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::AddSeparator(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "AddSeparator",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path);
}
inline ::UnityEngine::UIElements::GenericDropdownMenu_MenuItem* UnityEngine::UIElements::GenericDropdownMenu::AddItem(::StringW itemName, bool isChecked, bool isEnabled, ::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "AddItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::GenericDropdownMenu_MenuItem*, false>(this, ___internal_method, itemName, isChecked, isEnabled, data);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::UpdateItem(::StringW itemName, bool isChecked) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "UpdateItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemName, isChecked);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::DropDown(::UnityEngine::Rect position, ::UnityEngine::UIElements::VisualElement* targetElement, bool anchored) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "DropDown", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, targetElement, anchored);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnTargetElementDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnTargetElementDetachFromPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnContainerGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnContainerGeometryChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::EnsureVisibilityInParent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(),
                                                                             "EnsureVisibilityInParent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
UnityEngine::UIElements::GenericDropdownMenu::_Apply_g__UpdateSelectionDown_39_0(int32_t newIndex,
                                                                                 ::ByRef<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass39_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "<Apply>g__UpdateSelectionDown|39_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass39_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIndex, _cordl_fixed_empty_name_whitespace);
}
inline void
UnityEngine::UIElements::GenericDropdownMenu::_Apply_g__UpdateSelectionUp_39_1(int32_t newIndex,
                                                                               ::ByRef<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass39_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "<Apply>g__UpdateSelectionUp|39_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::GenericDropdownMenu___c__DisplayClass39_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIndex, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::UIElements::GenericDropdownMenu* UnityEngine::UIElements::GenericDropdownMenu::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::GenericDropdownMenu*>());
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
