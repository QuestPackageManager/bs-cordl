#pragma once
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaGroupBase_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectCollection_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaGroupBase.get_Items
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectCollection* (::System::Xml::Schema::XmlSchemaGroupBase::*)()>(
    &::System::Xml::Schema::XmlSchemaGroupBase::get_Items)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaGroupBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaGroupBase*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaGroupBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaGroupBase::*)()>(&::System::Xml::Schema::XmlSchemaGroupBase::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x28c8b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaGroupBase*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Xml::Schema::XmlSchemaObjectCollection* System::Xml::Schema::XmlSchemaGroupBase::get_Items() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaGroupBase*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectCollection*, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaGroupBase* System::Xml::Schema::XmlSchemaGroupBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::XmlSchemaGroupBase*>());
}
inline void System::Xml::Schema::XmlSchemaGroupBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaGroupBase*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaGroupBase::XmlSchemaGroupBase() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
