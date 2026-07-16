#pragma once
// IWYU pragma private; include "UnityEngine/ContextMenu.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__ContextMenu_def.hpp"
//  Writing Method size for method: ::UnityEngine::ContextMenu._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ContextMenu::*)(::StringW)>(&::UnityEngine::ContextMenu::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6ad77d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContextMenu*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContextMenu._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ContextMenu::*)(::StringW, bool)>(&::UnityEngine::ContextMenu::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6ad77ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContextMenu*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContextMenu._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ContextMenu::*)(::StringW, bool, int32_t)>(&::UnityEngine::ContextMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ad7804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContextMenu*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::ContextMenu::__cordl_internal_get_menuItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuItem;
}
constexpr ::StringW const& UnityEngine::ContextMenu::__cordl_internal_get_menuItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuItem;
}
constexpr void UnityEngine::ContextMenu::__cordl_internal_set_menuItem(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___menuItem = value;
}
constexpr bool& UnityEngine::ContextMenu::__cordl_internal_get_validate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validate;
}
constexpr bool const& UnityEngine::ContextMenu::__cordl_internal_get_validate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validate;
}
constexpr void UnityEngine::ContextMenu::__cordl_internal_set_validate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validate = value;
}
constexpr int32_t& UnityEngine::ContextMenu::__cordl_internal_get_priority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priority;
}
constexpr int32_t const& UnityEngine::ContextMenu::__cordl_internal_get_priority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priority;
}
constexpr void UnityEngine::ContextMenu::__cordl_internal_set_priority(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___priority = value;
}
inline void UnityEngine::ContextMenu::_ctor(::StringW itemName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContextMenu*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemName);
}
inline void UnityEngine::ContextMenu::_ctor(::StringW itemName, bool isValidateFunction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContextMenu*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemName, isValidateFunction);
}
inline void UnityEngine::ContextMenu::_ctor(::StringW itemName, bool isValidateFunction, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContextMenu*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemName, isValidateFunction, priority);
}
inline ::UnityEngine::ContextMenu* UnityEngine::ContextMenu::New_ctor(::StringW itemName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ContextMenu*>(itemName));
}
inline ::UnityEngine::ContextMenu* UnityEngine::ContextMenu::New_ctor(::StringW itemName, bool isValidateFunction) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ContextMenu*>(itemName, isValidateFunction));
}
inline ::UnityEngine::ContextMenu* UnityEngine::ContextMenu::New_ctor(::StringW itemName, bool isValidateFunction, int32_t priority) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ContextMenu*>(itemName, isValidateFunction, priority));
}
// Ctor Parameters []
constexpr ::UnityEngine::ContextMenu::ContextMenu() {}
