#pragma once
// IWYU pragma private; include "System/Xml/Schema/RedefineEntry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__RedefineEntry_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaRedefine_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::RedefineEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::Schema::RedefineEntry::*)(::System::Xml::Schema::XmlSchemaRedefine*, ::System::Xml::Schema::XmlSchema*)>(&::System::Xml::Schema::RedefineEntry::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2de1650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::RedefineEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaRedefine*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaRedefine*& System::Xml::Schema::RedefineEntry::__cordl_internal_get_redefine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redefine;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaRedefine*> const& System::Xml::Schema::RedefineEntry::__cordl_internal_get_redefine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redefine;
}
constexpr void System::Xml::Schema::RedefineEntry::__cordl_internal_set_redefine(::System::Xml::Schema::XmlSchemaRedefine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___redefine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchema*& System::Xml::Schema::RedefineEntry::__cordl_internal_get_schemaToUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaToUpdate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchema*> const& System::Xml::Schema::RedefineEntry::__cordl_internal_get_schemaToUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaToUpdate;
}
constexpr void System::Xml::Schema::RedefineEntry::__cordl_internal_set_schemaToUpdate(::System::Xml::Schema::XmlSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___schemaToUpdate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Schema::RedefineEntry* System::Xml::Schema::RedefineEntry::New_ctor(::System::Xml::Schema::XmlSchemaRedefine* external, ::System::Xml::Schema::XmlSchema* schema) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::RedefineEntry*>(external, schema));
}
inline void System::Xml::Schema::RedefineEntry::_ctor(::System::Xml::Schema::XmlSchemaRedefine* external, ::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::RedefineEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaRedefine*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, external, schema);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::RedefineEntry::RedefineEntry() {}
