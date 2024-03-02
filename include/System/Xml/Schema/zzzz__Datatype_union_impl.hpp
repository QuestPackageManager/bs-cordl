#pragma once
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_union_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_union.HasAtomicMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::Datatype_union::*)()>(&::System::Xml::Schema::Datatype_union::HasAtomicMembers)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x29a0ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_union*>::get(),
                                                                               "HasAtomicMembers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*>& System::Xml::Schema::Datatype_union::__cordl_internal_get_types() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___types;
}
constexpr ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> const& System::Xml::Schema::Datatype_union::__cordl_internal_get_types() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___types;
}
constexpr void System::Xml::Schema::Datatype_union::__cordl_internal_set_types(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___types)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::Datatype_union::setStaticF_atomicValueType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "atomicValueType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_union*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::Datatype_union::getStaticF_atomicValueType() {
  return ::cordl_internals::getStaticField<::System::Type*, "atomicValueType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_union*>::get>();
}
inline void System::Xml::Schema::Datatype_union::setStaticF_listValueType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "listValueType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_union*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::Schema::Datatype_union::getStaticF_listValueType() {
  return ::cordl_internals::getStaticField<::System::Type*, "listValueType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_union*>::get>();
}
inline bool System::Xml::Schema::Datatype_union::HasAtomicMembers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_union*>::get(), "HasAtomicMembers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_union::Datatype_union() {}
