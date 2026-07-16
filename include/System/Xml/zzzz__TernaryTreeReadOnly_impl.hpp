#pragma once
// IWYU pragma private; include "System/Xml/TernaryTreeReadOnly.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__TernaryTreeReadOnly_def.hpp"
//  Writing Method size for method: ::System::Xml::TernaryTreeReadOnly._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TernaryTreeReadOnly::*)(::ArrayW<uint8_t>)>(&::System::Xml::TernaryTreeReadOnly::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61a9924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::TernaryTreeReadOnly*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TernaryTreeReadOnly.FindCaseInsensitiveString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Xml::TernaryTreeReadOnly::*)(::StringW)>(&::System::Xml::TernaryTreeReadOnly::FindCaseInsensitiveString)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x61a8240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::TernaryTreeReadOnly*>(), { "FindCaseInsensitiveString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Xml::TernaryTreeReadOnly::__cordl_internal_get_nodeBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodeBuffer;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::TernaryTreeReadOnly::__cordl_internal_get_nodeBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodeBuffer;
}
constexpr void System::Xml::TernaryTreeReadOnly::__cordl_internal_set_nodeBuffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nodeBuffer = value;
}
inline void System::Xml::TernaryTreeReadOnly::_ctor(::ArrayW<uint8_t> nodeBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::TernaryTreeReadOnly*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeBuffer);
}
inline uint8_t System::Xml::TernaryTreeReadOnly::FindCaseInsensitiveString(::StringW stringToFind) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::TernaryTreeReadOnly*>(), { "FindCaseInsensitiveString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, stringToFind);
}
inline ::System::Xml::TernaryTreeReadOnly* System::Xml::TernaryTreeReadOnly::New_ctor(::ArrayW<uint8_t> nodeBuffer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::TernaryTreeReadOnly*>(nodeBuffer));
}
// Ctor Parameters []
constexpr ::System::Xml::TernaryTreeReadOnly::TernaryTreeReadOnly() {}
