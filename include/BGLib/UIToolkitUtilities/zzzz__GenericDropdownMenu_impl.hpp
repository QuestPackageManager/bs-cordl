#pragma once
// IWYU pragma private; include "BGLib/UIToolkitUtilities/GenericDropdownMenu.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/UIToolkitUtilities/zzzz__GenericDropdownMenu_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__GenericDropdownMenu_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::BGLib::UIToolkitUtilities::GenericDropdownMenu._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UIToolkitUtilities::GenericDropdownMenu::*)()>(&::BGLib::UIToolkitUtilities::GenericDropdownMenu::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c15514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UIToolkitUtilities::GenericDropdownMenu*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UIToolkitUtilities::GenericDropdownMenu.AddItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UIToolkitUtilities::GenericDropdownMenu::*)(::StringW, bool, ::System::Action*)>(
    &::BGLib::UIToolkitUtilities::GenericDropdownMenu::AddItem)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6c15570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UIToolkitUtilities::GenericDropdownMenu*>(),
                                                             { "AddItem", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UIToolkitUtilities::GenericDropdownMenu.AddItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UIToolkitUtilities::GenericDropdownMenu::*)(::StringW, bool, ::System::Action_1<::System::Object*>*, ::System::Object*)>(
    &::BGLib::UIToolkitUtilities::GenericDropdownMenu::AddItem)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6c155a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::BGLib::UIToolkitUtilities::GenericDropdownMenu*>(),
                         { "AddItem", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UIToolkitUtilities::GenericDropdownMenu.AddDisabledItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UIToolkitUtilities::GenericDropdownMenu::*)(::StringW, bool)>(
    &::BGLib::UIToolkitUtilities::GenericDropdownMenu::AddDisabledItem)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c155d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGLib::UIToolkitUtilities::GenericDropdownMenu*>(), { "AddDisabledItem", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UIToolkitUtilities::GenericDropdownMenu.AddSeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UIToolkitUtilities::GenericDropdownMenu::*)(::StringW)>(&::BGLib::UIToolkitUtilities::GenericDropdownMenu::AddSeparator)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c155f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UIToolkitUtilities::GenericDropdownMenu*>(), { "AddSeparator", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UIToolkitUtilities::GenericDropdownMenu.DropDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UIToolkitUtilities::GenericDropdownMenu::*)(::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*, bool)>(
    &::BGLib::UIToolkitUtilities::GenericDropdownMenu::DropDown)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c1560c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UIToolkitUtilities::GenericDropdownMenu*>(),
                                                { "DropDown", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UIToolkitUtilities::GenericDropdownMenu.UpdateItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UIToolkitUtilities::GenericDropdownMenu::*)(::StringW, bool)>(&::BGLib::UIToolkitUtilities::GenericDropdownMenu::UpdateItem)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c15628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UIToolkitUtilities::GenericDropdownMenu*>(), { "UpdateItem", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::GenericDropdownMenu*& BGLib::UIToolkitUtilities::GenericDropdownMenu::__cordl_internal_get__dropdownMenu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dropdownMenu;
}
constexpr ::UnityEngine::UIElements::GenericDropdownMenu* const& BGLib::UIToolkitUtilities::GenericDropdownMenu::__cordl_internal_get__dropdownMenu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dropdownMenu;
}
constexpr void BGLib::UIToolkitUtilities::GenericDropdownMenu::__cordl_internal_set__dropdownMenu(::UnityEngine::UIElements::GenericDropdownMenu* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dropdownMenu = value;
}
inline void BGLib::UIToolkitUtilities::GenericDropdownMenu::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UIToolkitUtilities::GenericDropdownMenu*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::UIToolkitUtilities::GenericDropdownMenu::AddItem(::StringW itemName, bool isChecked, ::System::Action* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UIToolkitUtilities::GenericDropdownMenu*>(),
                                                           { "AddItem", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemName, isChecked, action);
}
inline void BGLib::UIToolkitUtilities::GenericDropdownMenu::AddItem(::StringW itemName, bool isChecked, ::System::Action_1<::System::Object*>* action, ::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BGLib::UIToolkitUtilities::GenericDropdownMenu*>(),
                          { "AddItem", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemName, isChecked, action, data);
}
inline void BGLib::UIToolkitUtilities::GenericDropdownMenu::AddDisabledItem(::StringW itemName, bool isChecked) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::UIToolkitUtilities::GenericDropdownMenu*>(), { "AddDisabledItem", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemName, isChecked);
}
inline void BGLib::UIToolkitUtilities::GenericDropdownMenu::AddSeparator(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UIToolkitUtilities::GenericDropdownMenu*>(), { "AddSeparator", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void BGLib::UIToolkitUtilities::GenericDropdownMenu::DropDown(::UnityEngine::Rect position, ::UnityEngine::UIElements::VisualElement* targetElement, bool anchored) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UIToolkitUtilities::GenericDropdownMenu*>(),
                                              { "DropDown", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, targetElement, anchored);
}
inline void BGLib::UIToolkitUtilities::GenericDropdownMenu::UpdateItem(::StringW itemName, bool isChecked) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UIToolkitUtilities::GenericDropdownMenu*>(), { "UpdateItem", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemName, isChecked);
}
inline ::BGLib::UIToolkitUtilities::GenericDropdownMenu* BGLib::UIToolkitUtilities::GenericDropdownMenu::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UIToolkitUtilities::GenericDropdownMenu*>());
}
// Ctor Parameters []
constexpr ::BGLib::UIToolkitUtilities::GenericDropdownMenu::GenericDropdownMenu() {}
