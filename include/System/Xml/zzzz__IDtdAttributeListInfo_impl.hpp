#pragma once
#include "System/Xml/zzzz__IDtdAttributeListInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Xml/zzzz__IDtdAttributeInfo_def.hpp"
#include "System/Xml/zzzz__IDtdDefaultAttributeInfo_def.hpp"
//  Writing Method size for method: ::System::Xml::IDtdAttributeListInfo.get_HasNonCDataAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::IDtdAttributeListInfo::*)()>(&::System::Xml::IDtdAttributeListInfo::get_HasNonCDataAttributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdAttributeListInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdAttributeListInfo*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdAttributeListInfo.LookupAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IDtdAttributeInfo* (::System::Xml::IDtdAttributeListInfo::*)(::StringW, ::StringW)>(
    &::System::Xml::IDtdAttributeListInfo::LookupAttribute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdAttributeListInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdAttributeListInfo*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdAttributeListInfo.LookupDefaultAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Xml::IDtdDefaultAttributeInfo*>* (
    ::System::Xml::IDtdAttributeListInfo::*)()>(&::System::Xml::IDtdAttributeListInfo::LookupDefaultAttributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdAttributeListInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdAttributeListInfo*>::get(), 2));
    return ___internal_method;
  }
};
inline bool System::Xml::IDtdAttributeListInfo::get_HasNonCDataAttributes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdAttributeListInfo*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::IDtdAttributeInfo* System::Xml::IDtdAttributeListInfo::LookupAttribute(::StringW prefix, ::StringW localName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdAttributeListInfo*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdAttributeInfo*, false>(this, ___internal_method, prefix, localName);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Xml::IDtdDefaultAttributeInfo*>* System::Xml::IDtdAttributeListInfo::LookupDefaultAttributes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdAttributeListInfo*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Xml::IDtdDefaultAttributeInfo*>*, false>(this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
