#pragma once
#include "System/Xml/Schema/zzzz__BaseValidator_impl.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_impl.hpp"
#include "System/Xml/Schema/zzzz__DtdValidator_def.hpp"
#include "System/Xml/Schema/zzzz__DtdValidator_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapter_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::__DtdValidator__NamespaceManager.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::__DtdValidator__NamespaceManager::*)(::StringW)>(
    &::System::Xml::Schema::__DtdValidator__NamespaceManager::LookupNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29aa410;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__DtdValidator__NamespaceManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__DtdValidator__NamespaceManager*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::__DtdValidator__NamespaceManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::__DtdValidator__NamespaceManager::*)()>(
    &::System::Xml::Schema::__DtdValidator__NamespaceManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29aa408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__DtdValidator__NamespaceManager*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::StringW System::Xml::Schema::__DtdValidator__NamespaceManager::LookupNamespace(::StringW prefix) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__DtdValidator__NamespaceManager*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline ::System::Xml::Schema::__DtdValidator__NamespaceManager* System::Xml::Schema::__DtdValidator__NamespaceManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::__DtdValidator__NamespaceManager*>());
}
inline void System::Xml::Schema::__DtdValidator__NamespaceManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__DtdValidator__NamespaceManager*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::__DtdValidator__NamespaceManager::__DtdValidator__NamespaceManager() {}
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.SetDefaultTypedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::SchemaAttDef*, ::System::Xml::IDtdParserAdapter*)>(
    &::System::Xml::Schema::DtdValidator::SetDefaultTypedValue)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x29a9f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "SetDefaultTypedValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdParserAdapter*>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::DtdValidator::setStaticF_namespaceManager(::System::Xml::Schema::__DtdValidator__NamespaceManager* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::__DtdValidator__NamespaceManager*, "namespaceManager",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get>(
      std::forward<::System::Xml::Schema::__DtdValidator__NamespaceManager*>(value));
}
inline ::System::Xml::Schema::__DtdValidator__NamespaceManager* System::Xml::Schema::DtdValidator::getStaticF_namespaceManager() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::__DtdValidator__NamespaceManager*, "namespaceManager",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get>();
}
inline void System::Xml::Schema::DtdValidator::SetDefaultTypedValue(::System::Xml::Schema::SchemaAttDef* attdef, ::System::Xml::IDtdParserAdapter* readerAdapter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "SetDefaultTypedValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdParserAdapter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attdef, readerAdapter);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::DtdValidator::DtdValidator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
