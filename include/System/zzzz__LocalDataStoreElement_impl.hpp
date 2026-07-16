#pragma once
// IWYU pragma private; include "System/LocalDataStoreElement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__LocalDataStoreElement_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::LocalDataStoreElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::LocalDataStoreElement::*)(int64_t)>(&::System::LocalDataStoreElement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6e940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreElement*>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreElement.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::LocalDataStoreElement::*)()>(&::System::LocalDataStoreElement::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6e948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreElement*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreElement.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::LocalDataStoreElement::*)(::System::Object*)>(&::System::LocalDataStoreElement::set_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6e950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreElement*>(), { "set_Value", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreElement.get_Cookie
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::LocalDataStoreElement::*)()>(&::System::LocalDataStoreElement::get_Cookie)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6e958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreElement*>(), { "get_Cookie", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::LocalDataStoreElement::__cordl_internal_get_m_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_value;
}
constexpr ::System::Object* const& System::LocalDataStoreElement::__cordl_internal_get_m_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_value;
}
constexpr void System::LocalDataStoreElement::__cordl_internal_set_m_value(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_value = value;
}
constexpr int64_t& System::LocalDataStoreElement::__cordl_internal_get_m_cookie() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cookie;
}
constexpr int64_t const& System::LocalDataStoreElement::__cordl_internal_get_m_cookie() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cookie;
}
constexpr void System::LocalDataStoreElement::__cordl_internal_set_m_cookie(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_cookie = value;
}
inline void System::LocalDataStoreElement::_ctor(int64_t cookie) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreElement*>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cookie);
}
inline ::System::Object* System::LocalDataStoreElement::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreElement*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::LocalDataStoreElement::set_Value(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreElement*>(), { "set_Value", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::LocalDataStoreElement::get_Cookie() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::LocalDataStoreElement*>(), { "get_Cookie", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::System::LocalDataStoreElement* System::LocalDataStoreElement::New_ctor(int64_t cookie) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::LocalDataStoreElement*>(cookie));
}
// Ctor Parameters []
constexpr ::System::LocalDataStoreElement::LocalDataStoreElement() {}
