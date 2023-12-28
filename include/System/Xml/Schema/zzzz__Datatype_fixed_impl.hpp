#pragma once
#include "System/Xml/Schema/zzzz__Datatype_decimal_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_fixed_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_fixed.ParseValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Xml::Schema::Datatype_fixed::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*)>(&::System::Xml::Schema::Datatype_fixed::ParseValue)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x28bf89c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_fixed*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_fixed*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_fixed.TryParseValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Exception* (::System::Xml::Schema::Datatype_fixed::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ByRef<::System::Object*>)>(
        &::System::Xml::Schema::Datatype_fixed::TryParseValue)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x28bfdec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_fixed*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_fixed*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_fixed._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Datatype_fixed::*)()>(&::System::Xml::Schema::Datatype_fixed::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x28bff44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_fixed*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Object* System::Xml::Schema::Datatype_fixed::ParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_fixed*>::get(), "ParseValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlNamespaceResolver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, s, nameTable, nsmgr);
}
inline ::System::Exception* System::Xml::Schema::Datatype_fixed::TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr,
                                                                               ByRef<::System::Object*> typedValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_fixed*>::get(), "TryParseValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlNamespaceResolver*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, s, nameTable, nsmgr, typedValue);
}
inline ::System::Xml::Schema::Datatype_fixed* System::Xml::Schema::Datatype_fixed::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::Datatype_fixed*>());
}
inline void System::Xml::Schema::Datatype_fixed::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_fixed*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_fixed::Datatype_fixed() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
