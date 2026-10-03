#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/AbstractGenericMenu.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__AbstractGenericMenu_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuSizeMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractGenericMenu.AddItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::AbstractGenericMenu::*)(::StringW, bool, ::System::Action*)>(
    &::UnityEngine::UIElements::AbstractGenericMenu::AddItem)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractGenericMenu*>(), { ::i2c::class_of<::UnityEngine::UIElements::AbstractGenericMenu*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractGenericMenu.AddItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::AbstractGenericMenu::*)(::StringW, bool, ::System::Action_1<::System::Object*>*, ::System::Object*)>(
    &::UnityEngine::UIElements::AbstractGenericMenu::AddItem)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractGenericMenu*>(), { ::i2c::class_of<::UnityEngine::UIElements::AbstractGenericMenu*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractGenericMenu.AddDisabledItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::AbstractGenericMenu::*)(::StringW, bool)>(&::UnityEngine::UIElements::AbstractGenericMenu::AddDisabledItem)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractGenericMenu*>(), { ::i2c::class_of<::UnityEngine::UIElements::AbstractGenericMenu*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractGenericMenu.AddSeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::AbstractGenericMenu::*)(::StringW)>(&::UnityEngine::UIElements::AbstractGenericMenu::AddSeparator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractGenericMenu*>(), { ::i2c::class_of<::UnityEngine::UIElements::AbstractGenericMenu*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractGenericMenu.DropDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::AbstractGenericMenu::*)(
    ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DropdownMenuSizeMode)>(&::UnityEngine::UIElements::AbstractGenericMenu::DropDown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractGenericMenu*>(), { ::i2c::class_of<::UnityEngine::UIElements::AbstractGenericMenu*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AbstractGenericMenu._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::AbstractGenericMenu::*)()>(&::UnityEngine::UIElements::AbstractGenericMenu::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x71b5918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractGenericMenu*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::AbstractGenericMenu::AddItem(::StringW itemName, bool isChecked, ::System::Action* action) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::AbstractGenericMenu*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemName, isChecked, action);
}
inline void UnityEngine::UIElements::AbstractGenericMenu::AddItem(::StringW itemName, bool isChecked, ::System::Action_1<::System::Object*>* action, ::System::Object* data) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::AbstractGenericMenu*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemName, isChecked, action, data);
}
inline void UnityEngine::UIElements::AbstractGenericMenu::AddDisabledItem(::StringW itemName, bool isChecked) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::AbstractGenericMenu*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemName, isChecked);
}
inline void UnityEngine::UIElements::AbstractGenericMenu::AddSeparator(::StringW path) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::AbstractGenericMenu*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void UnityEngine::UIElements::AbstractGenericMenu::DropDown(::UnityEngine::Rect position, ::UnityEngine::UIElements::VisualElement* targetElement,
                                                                   ::UnityEngine::UIElements::DropdownMenuSizeMode dropdownMenuSizeMode) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::AbstractGenericMenu*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, targetElement, dropdownMenuSizeMode);
}
inline void UnityEngine::UIElements::AbstractGenericMenu::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AbstractGenericMenu*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::AbstractGenericMenu* UnityEngine::UIElements::AbstractGenericMenu::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::AbstractGenericMenu*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::AbstractGenericMenu::AbstractGenericMenu() {}
