#pragma once
#include "System/Xml/Schema/zzzz__Datatype_duration_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_yearMonthDuration_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_yearMonthDuration.TryParseValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Exception* (::System::Xml::Schema::Datatype_yearMonthDuration::*)(::StringW, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ByRef<::System::Object*>)>(
        &::System::Xml::Schema::Datatype_yearMonthDuration::TryParseValue)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2e09c70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_yearMonthDuration*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_yearMonthDuration*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_yearMonthDuration.get_TypeCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::Datatype_yearMonthDuration::*)()>(
    &::System::Xml::Schema::Datatype_yearMonthDuration::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e09e38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_yearMonthDuration*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_yearMonthDuration*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_yearMonthDuration._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Datatype_yearMonthDuration::*)()>(
    &::System::Xml::Schema::Datatype_yearMonthDuration::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2e04444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_yearMonthDuration*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Exception* System::Xml::Schema::Datatype_yearMonthDuration::TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr,
                                                                                           ByRef<::System::Object*> typedValue) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_yearMonthDuration*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, s, nameTable, nsmgr, typedValue);
}
inline ::System::Xml::Schema::XmlTypeCode System::Xml::Schema::Datatype_yearMonthDuration::get_TypeCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_yearMonthDuration*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::Datatype_yearMonthDuration* System::Xml::Schema::Datatype_yearMonthDuration::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::Datatype_yearMonthDuration*>());
}
inline void System::Xml::Schema::Datatype_yearMonthDuration::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_yearMonthDuration*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_yearMonthDuration::Datatype_yearMonthDuration() {}
