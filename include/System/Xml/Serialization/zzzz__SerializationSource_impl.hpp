#pragma once
// IWYU pragma private; include "System/Xml/Serialization/SerializationSource.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/Xml/Serialization/zzzz__SerializationSource_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::SerializationSource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::SerializationSource::*)(::StringW, ::ArrayW<::System::Type*>)>(
    &::System::Xml::Serialization::SerializationSource::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62e6de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::SerializationSource*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::SerializationSource.BaseEquals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::SerializationSource::*)(::System::Xml::Serialization::SerializationSource*)>(
    &::System::Xml::Serialization::SerializationSource::BaseEquals)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x62e6df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::SerializationSource*>(),
                                                                                           { "BaseEquals", {}, { ::i2c::type_of<::System::Xml::Serialization::SerializationSource*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Type*>& System::Xml::Serialization::SerializationSource::__cordl_internal_get_includedTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includedTypes;
}
constexpr ::ArrayW<::System::Type*> const& System::Xml::Serialization::SerializationSource::__cordl_internal_get_includedTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includedTypes;
}
constexpr void System::Xml::Serialization::SerializationSource::__cordl_internal_set_includedTypes(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___includedTypes = value;
}
constexpr ::StringW& System::Xml::Serialization::SerializationSource::__cordl_internal_get_namspace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namspace;
}
constexpr ::StringW const& System::Xml::Serialization::SerializationSource::__cordl_internal_get_namspace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namspace;
}
constexpr void System::Xml::Serialization::SerializationSource::__cordl_internal_set_namspace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namspace = value;
}
constexpr bool& System::Xml::Serialization::SerializationSource::__cordl_internal_get_canBeGenerated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canBeGenerated;
}
constexpr bool const& System::Xml::Serialization::SerializationSource::__cordl_internal_get_canBeGenerated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canBeGenerated;
}
constexpr void System::Xml::Serialization::SerializationSource::__cordl_internal_set_canBeGenerated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___canBeGenerated = value;
}
inline void System::Xml::Serialization::SerializationSource::_ctor(::StringW namspace, ::ArrayW<::System::Type*> includedTypes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::SerializationSource*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, namspace, includedTypes);
}
inline bool System::Xml::Serialization::SerializationSource::BaseEquals(::System::Xml::Serialization::SerializationSource* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::SerializationSource*>(),
                                                                                         { "BaseEquals", {}, { ::i2c::type_of<::System::Xml::Serialization::SerializationSource*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::System::Xml::Serialization::SerializationSource* System::Xml::Serialization::SerializationSource::New_ctor(::StringW namspace, ::ArrayW<::System::Type*> includedTypes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::SerializationSource*>(namspace, includedTypes));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::SerializationSource::SerializationSource() {}
