#pragma once
// IWYU pragma private; include "System/Net/WebRequestPrefixElement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebRequestPrefixElement_def.hpp"
#include "System/Net/zzzz__IWebRequestCreate_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Net::WebRequestPrefixElement.get_Creator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IWebRequestCreate* (::System::Net::WebRequestPrefixElement::*)()>(&::System::Net::WebRequestPrefixElement::get_Creator)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6408c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestPrefixElement*>(), { "get_Creator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestPrefixElement.set_Creator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestPrefixElement::*)(::System::Net::IWebRequestCreate*)>(&::System::Net::WebRequestPrefixElement::set_Creator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6408e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestPrefixElement*>(), { "set_Creator", {}, { ::i2c::type_of<::System::Net::IWebRequestCreate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestPrefixElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebRequestPrefixElement::*)(::StringW, ::System::Net::IWebRequestCreate*)>(
    &::System::Net::WebRequestPrefixElement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6408e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestPrefixElement*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::IWebRequestCreate*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::WebRequestPrefixElement::__cordl_internal_get_Prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Prefix;
}
constexpr ::StringW const& System::Net::WebRequestPrefixElement::__cordl_internal_get_Prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Prefix;
}
constexpr void System::Net::WebRequestPrefixElement::__cordl_internal_set_Prefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Prefix = value;
}
constexpr ::System::Net::IWebRequestCreate*& System::Net::WebRequestPrefixElement::__cordl_internal_get_creator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creator;
}
constexpr ::System::Net::IWebRequestCreate* const& System::Net::WebRequestPrefixElement::__cordl_internal_get_creator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creator;
}
constexpr void System::Net::WebRequestPrefixElement::__cordl_internal_set_creator(::System::Net::IWebRequestCreate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___creator = value;
}
constexpr ::System::Type*& System::Net::WebRequestPrefixElement::__cordl_internal_get_creatorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creatorType;
}
constexpr ::System::Type* const& System::Net::WebRequestPrefixElement::__cordl_internal_get_creatorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creatorType;
}
constexpr void System::Net::WebRequestPrefixElement::__cordl_internal_set_creatorType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___creatorType = value;
}
inline ::System::Net::IWebRequestCreate* System::Net::WebRequestPrefixElement::get_Creator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestPrefixElement*>(), { "get_Creator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IWebRequestCreate*>(this, ___internal_method);
}
inline void System::Net::WebRequestPrefixElement::set_Creator(::System::Net::IWebRequestCreate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestPrefixElement*>(), { "set_Creator", {}, { ::i2c::type_of<::System::Net::IWebRequestCreate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebRequestPrefixElement::_ctor(::StringW P, ::System::Net::IWebRequestCreate* C) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebRequestPrefixElement*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::IWebRequestCreate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, P, C);
}
inline ::System::Net::WebRequestPrefixElement* System::Net::WebRequestPrefixElement::New_ctor(::StringW P, ::System::Net::IWebRequestCreate* C) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebRequestPrefixElement*>(P, C));
}
// Ctor Parameters []
constexpr ::System::Net::WebRequestPrefixElement::WebRequestPrefixElement() {}
