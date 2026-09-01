#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlTypeMapMemberExpandable.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberElement_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberExpandable_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberExpandable.get_FlatArrayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Serialization::XmlTypeMapMemberExpandable::*)()>(
    &::System::Xml::Serialization::XmlTypeMapMemberExpandable::get_FlatArrayIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6313114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberExpandable*>(), { "get_FlatArrayIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberExpandable.set_FlatArrayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMemberExpandable::*)(int32_t)>(
    &::System::Xml::Serialization::XmlTypeMapMemberExpandable::set_FlatArrayIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631311c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberExpandable*>(), { "set_FlatArrayIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberExpandable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMemberExpandable::*)()>(&::System::Xml::Serialization::XmlTypeMapMemberExpandable::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6313124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberExpandable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Xml::Serialization::XmlTypeMapMemberExpandable::__cordl_internal_get__flatArrayIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flatArrayIndex;
}
constexpr int32_t const& System::Xml::Serialization::XmlTypeMapMemberExpandable::__cordl_internal_get__flatArrayIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flatArrayIndex;
}
constexpr void System::Xml::Serialization::XmlTypeMapMemberExpandable::__cordl_internal_set__flatArrayIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flatArrayIndex = value;
}
inline int32_t System::Xml::Serialization::XmlTypeMapMemberExpandable::get_FlatArrayIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberExpandable*>(), { "get_FlatArrayIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlTypeMapMemberExpandable::set_FlatArrayIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberExpandable*>(), { "set_FlatArrayIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Serialization::XmlTypeMapMemberExpandable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberExpandable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlTypeMapMemberExpandable* System::Xml::Serialization::XmlTypeMapMemberExpandable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlTypeMapMemberExpandable*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlTypeMapMemberExpandable::XmlTypeMapMemberExpandable() {}
