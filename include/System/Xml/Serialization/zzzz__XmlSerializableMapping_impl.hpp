#pragma once
#include "System/Xml/Serialization/zzzz__XmlTypeMapping_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializableMapping_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/Serialization/zzzz__TypeData_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlRootAttribute_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializableMapping._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializableMapping::*)(
    ::System::Xml::Serialization::XmlRootAttribute*, ::StringW, ::StringW, ::System::Xml::Serialization::TypeData*, ::StringW, ::StringW)>(
    &::System::Xml::Serialization::XmlSerializableMapping::_ctor)> {
  constexpr static std::size_t size = 0x76c;
  constexpr static std::size_t addrs = 0x2eee0cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializableMapping*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchema*& System::Xml::Serialization::XmlSerializableMapping::__cordl_internal_get__schema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schema;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchema*> const& System::Xml::Serialization::XmlSerializableMapping::__cordl_internal_get__schema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schema;
}
constexpr void System::Xml::Serialization::XmlSerializableMapping::__cordl_internal_set__schema(::System::Xml::Schema::XmlSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____schema)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaComplexType*& System::Xml::Serialization::XmlSerializableMapping::__cordl_internal_get__schemaType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaComplexType*> const& System::Xml::Serialization::XmlSerializableMapping::__cordl_internal_get__schemaType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaType;
}
constexpr void System::Xml::Serialization::XmlSerializableMapping::__cordl_internal_set__schemaType(::System::Xml::Schema::XmlSchemaComplexType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____schemaType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Serialization::XmlSerializableMapping::__cordl_internal_get__schemaTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaTypeName;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& System::Xml::Serialization::XmlSerializableMapping::__cordl_internal_get__schemaTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaTypeName;
}
constexpr void System::Xml::Serialization::XmlSerializableMapping::__cordl_internal_set__schemaTypeName(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____schemaTypeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Serialization::XmlSerializableMapping* System::Xml::Serialization::XmlSerializableMapping::New_ctor(::System::Xml::Serialization::XmlRootAttribute* root, ::StringW elementName,
                                                                                                                          ::StringW ns, ::System::Xml::Serialization::TypeData* typeData,
                                                                                                                          ::StringW xmlType, ::StringW xmlTypeNamespace) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlSerializableMapping*>(root, elementName, ns, typeData, xmlType, xmlTypeNamespace));
}
inline void System::Xml::Serialization::XmlSerializableMapping::_ctor(::System::Xml::Serialization::XmlRootAttribute* root, ::StringW elementName, ::StringW ns,
                                                                      ::System::Xml::Serialization::TypeData* typeData, ::StringW xmlType, ::StringW xmlTypeNamespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializableMapping*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlRootAttribute*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, root, elementName, ns, typeData, xmlType, xmlTypeNamespace);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializableMapping::XmlSerializableMapping() {}
