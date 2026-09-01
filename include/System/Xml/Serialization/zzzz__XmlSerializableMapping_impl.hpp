#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlSerializableMapping.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapping_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializableMapping_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/Serialization/zzzz__TypeData_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlRootAttribute_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializableMapping._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializableMapping::*)(::System::Xml::Serialization::XmlRootAttribute*, ::StringW, ::StringW,
                                                                                                                      ::System::Xml::Serialization::TypeData*, ::StringW, ::StringW)>(
    &::System::Xml::Serialization::XmlSerializableMapping::_ctor)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x63138f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializableMapping*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchema*& System::Xml::Serialization::XmlSerializableMapping::__cordl_internal_get__schema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schema;
}
constexpr ::System::Xml::Schema::XmlSchema* const& System::Xml::Serialization::XmlSerializableMapping::__cordl_internal_get__schema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schema;
}
constexpr void System::Xml::Serialization::XmlSerializableMapping::__cordl_internal_set__schema(::System::Xml::Schema::XmlSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____schema = value;
}
constexpr ::System::Xml::Schema::XmlSchemaComplexType*& System::Xml::Serialization::XmlSerializableMapping::__cordl_internal_get__schemaType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaType;
}
constexpr ::System::Xml::Schema::XmlSchemaComplexType* const& System::Xml::Serialization::XmlSerializableMapping::__cordl_internal_get__schemaType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaType;
}
constexpr void System::Xml::Serialization::XmlSerializableMapping::__cordl_internal_set__schemaType(::System::Xml::Schema::XmlSchemaComplexType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____schemaType = value;
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Serialization::XmlSerializableMapping::__cordl_internal_get__schemaTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaTypeName;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Serialization::XmlSerializableMapping::__cordl_internal_get__schemaTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaTypeName;
}
constexpr void System::Xml::Serialization::XmlSerializableMapping::__cordl_internal_set__schemaTypeName(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____schemaTypeName = value;
}
inline void System::Xml::Serialization::XmlSerializableMapping::_ctor(::System::Xml::Serialization::XmlRootAttribute* root, ::StringW elementName, ::StringW ns,
                                                                      ::System::Xml::Serialization::TypeData* typeData, ::StringW xmlType, ::StringW xmlTypeNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializableMapping*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Serialization::XmlRootAttribute*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, elementName, ns, typeData, xmlType, xmlTypeNamespace);
}
inline ::System::Xml::Serialization::XmlSerializableMapping* System::Xml::Serialization::XmlSerializableMapping::New_ctor(::System::Xml::Serialization::XmlRootAttribute* root, ::StringW elementName,
                                                                                                                          ::StringW ns, ::System::Xml::Serialization::TypeData* typeData,
                                                                                                                          ::StringW xmlType, ::StringW xmlTypeNamespace) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlSerializableMapping*>(root, elementName, ns, typeData, xmlType, xmlTypeNamespace));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializableMapping::XmlSerializableMapping() {}
