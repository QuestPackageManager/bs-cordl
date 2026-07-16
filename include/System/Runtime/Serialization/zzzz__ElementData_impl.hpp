#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ElementData.hpp"
#include "System/Runtime/Serialization/zzzz__AttributeData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ElementData_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDataNode_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ElementData.AddAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ElementData::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::ElementData::AddAttribute)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x614b178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ElementData*>(),
                                                { "AddAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ElementData.GrowAttributesIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ElementData::*)()>(&::System::Runtime::Serialization::ElementData::GrowAttributesIfNeeded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6150014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ElementData*>(), { "GrowAttributesIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ElementData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ElementData::*)()>(&::System::Runtime::Serialization::ElementData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x615000c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ElementData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::ElementData::__cordl_internal_get_localName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localName;
}
constexpr ::StringW const& System::Runtime::Serialization::ElementData::__cordl_internal_get_localName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localName;
}
constexpr void System::Runtime::Serialization::ElementData::__cordl_internal_set_localName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localName = value;
}
constexpr ::StringW& System::Runtime::Serialization::ElementData::__cordl_internal_get_ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr ::StringW const& System::Runtime::Serialization::ElementData::__cordl_internal_get_ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr void System::Runtime::Serialization::ElementData::__cordl_internal_set_ns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ns = value;
}
constexpr ::StringW& System::Runtime::Serialization::ElementData::__cordl_internal_get_prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr ::StringW const& System::Runtime::Serialization::ElementData::__cordl_internal_get_prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr void System::Runtime::Serialization::ElementData::__cordl_internal_set_prefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefix = value;
}
constexpr int32_t& System::Runtime::Serialization::ElementData::__cordl_internal_get_attributeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCount;
}
constexpr int32_t const& System::Runtime::Serialization::ElementData::__cordl_internal_get_attributeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeCount;
}
constexpr void System::Runtime::Serialization::ElementData::__cordl_internal_set_attributeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeCount = value;
}
constexpr ::ArrayW<::System::Runtime::Serialization::AttributeData*>& System::Runtime::Serialization::ElementData::__cordl_internal_get_attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr ::ArrayW<::System::Runtime::Serialization::AttributeData*> const& System::Runtime::Serialization::ElementData::__cordl_internal_get_attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr void System::Runtime::Serialization::ElementData::__cordl_internal_set_attributes(::ArrayW<::System::Runtime::Serialization::AttributeData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributes = value;
}
constexpr ::System::Runtime::Serialization::IDataNode*& System::Runtime::Serialization::ElementData::__cordl_internal_get_dataNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataNode;
}
constexpr ::System::Runtime::Serialization::IDataNode* const& System::Runtime::Serialization::ElementData::__cordl_internal_get_dataNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataNode;
}
constexpr void System::Runtime::Serialization::ElementData::__cordl_internal_set_dataNode(::System::Runtime::Serialization::IDataNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dataNode = value;
}
constexpr int32_t& System::Runtime::Serialization::ElementData::__cordl_internal_get_childElementIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childElementIndex;
}
constexpr int32_t const& System::Runtime::Serialization::ElementData::__cordl_internal_get_childElementIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childElementIndex;
}
constexpr void System::Runtime::Serialization::ElementData::__cordl_internal_set_childElementIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___childElementIndex = value;
}
inline void System::Runtime::Serialization::ElementData::AddAttribute(::StringW prefix, ::StringW ns, ::StringW name, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ElementData*>(),
                                              { "AddAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, ns, name, value);
}
inline void System::Runtime::Serialization::ElementData::GrowAttributesIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ElementData*>(), { "GrowAttributesIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ElementData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ElementData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ElementData* System::Runtime::Serialization::ElementData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::ElementData*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ElementData::ElementData() {}
