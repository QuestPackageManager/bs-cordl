#pragma once
// IWYU pragma private; include "System/Xml/Schema/ValidationEventArgs.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventArgs_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaException_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::ValidationEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::ValidationEventArgs::*)(::System::Xml::Schema::XmlSchemaException*)>(
    &::System::Xml::Schema::ValidationEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2e0025c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaException*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ValidationEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::ValidationEventArgs::*)(
    ::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType)>(&::System::Xml::Schema::ValidationEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2e002cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaException*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ValidationEventArgs.get_Severity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSeverityType (::System::Xml::Schema::ValidationEventArgs::*)()>(
    &::System::Xml::Schema::ValidationEventArgs::get_Severity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e00340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationEventArgs*>::get(),
                                                                               "get_Severity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ValidationEventArgs.get_Exception
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaException* (::System::Xml::Schema::ValidationEventArgs::*)()>(
    &::System::Xml::Schema::ValidationEventArgs::get_Exception)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e00348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationEventArgs*>::get(),
                                                                               "get_Exception", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaException*& System::Xml::Schema::ValidationEventArgs::__cordl_internal_get_ex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ex;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaException*> const& System::Xml::Schema::ValidationEventArgs::__cordl_internal_get_ex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ex;
}
constexpr void System::Xml::Schema::ValidationEventArgs::__cordl_internal_set_ex(::System::Xml::Schema::XmlSchemaException* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSeverityType& System::Xml::Schema::ValidationEventArgs::__cordl_internal_get_severity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___severity;
}
constexpr ::System::Xml::Schema::XmlSeverityType const& System::Xml::Schema::ValidationEventArgs::__cordl_internal_get_severity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___severity;
}
constexpr void System::Xml::Schema::ValidationEventArgs::__cordl_internal_set_severity(::System::Xml::Schema::XmlSeverityType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___severity = value;
}
inline ::System::Xml::Schema::ValidationEventArgs* System::Xml::Schema::ValidationEventArgs::New_ctor(::System::Xml::Schema::XmlSchemaException* ex) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::ValidationEventArgs*>(ex));
}
inline void System::Xml::Schema::ValidationEventArgs::_ctor(::System::Xml::Schema::XmlSchemaException* ex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaException*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ex);
}
inline ::System::Xml::Schema::ValidationEventArgs* System::Xml::Schema::ValidationEventArgs::New_ctor(::System::Xml::Schema::XmlSchemaException* ex, ::System::Xml::Schema::XmlSeverityType severity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::ValidationEventArgs*>(ex, severity));
}
inline void System::Xml::Schema::ValidationEventArgs::_ctor(::System::Xml::Schema::XmlSchemaException* ex, ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaException*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ex, severity);
}
inline ::System::Xml::Schema::XmlSeverityType System::Xml::Schema::ValidationEventArgs::get_Severity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationEventArgs*>::get(), "get_Severity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSeverityType, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaException* System::Xml::Schema::ValidationEventArgs::get_Exception() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationEventArgs*>::get(),
                                                                             "get_Exception", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaException*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::ValidationEventArgs::ValidationEventArgs() {}
