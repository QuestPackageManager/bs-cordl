#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IGenericMenu.hpp"
#include "UnityEngine/UIElements/zzzz__IGenericMenu_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IGenericMenu.AddItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IGenericMenu::*)(::StringW, bool, ::System::Action*)>(&::UnityEngine::UIElements::IGenericMenu::AddItem)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IGenericMenu*>(), { ::i2c::class_of<::UnityEngine::UIElements::IGenericMenu*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IGenericMenu.AddItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IGenericMenu::*)(::StringW, bool, ::System::Action_1<::System::Object*>*, ::System::Object*)>(
    &::UnityEngine::UIElements::IGenericMenu::AddItem)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IGenericMenu*>(), { ::i2c::class_of<::UnityEngine::UIElements::IGenericMenu*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IGenericMenu.DropDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IGenericMenu::*)(::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*, bool)>(
    &::UnityEngine::UIElements::IGenericMenu::DropDown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IGenericMenu*>(), { ::i2c::class_of<::UnityEngine::UIElements::IGenericMenu*>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::IGenericMenu::AddItem(::StringW itemName, bool isChecked, ::System::Action* action) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IGenericMenu*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemName, isChecked, action);
}
inline void UnityEngine::UIElements::IGenericMenu::AddItem(::StringW itemName, bool isChecked, ::System::Action_1<::System::Object*>* action, ::System::Object* data) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IGenericMenu*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemName, isChecked, action, data);
}
inline void UnityEngine::UIElements::IGenericMenu::DropDown(::UnityEngine::Rect position, ::UnityEngine::UIElements::VisualElement* targetElement, bool anchored) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IGenericMenu*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, targetElement, anchored);
}
