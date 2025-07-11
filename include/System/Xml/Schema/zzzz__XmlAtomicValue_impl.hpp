#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlAtomicValue.hpp"
#include "System/Xml/XPath/zzzz__XPathItem_impl.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__ICloneable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TypeCode_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlAtomicValue_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Xml/Schema/zzzz__XmlAtomicValue_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceScope_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
constexpr bool& System::Xml::Schema::XmlAtomicValue_Union::__cordl_internal_get_boolVal() {
  return this->___boolVal;
}
constexpr bool const& System::Xml::Schema::XmlAtomicValue_Union::__cordl_internal_get_boolVal() const {
  return this->___boolVal;
}
constexpr void System::Xml::Schema::XmlAtomicValue_Union::__cordl_internal_set_boolVal(bool value) {
  this->___boolVal = value;
}
constexpr double_t& System::Xml::Schema::XmlAtomicValue_Union::__cordl_internal_get_dblVal() {
  return this->___dblVal;
}
constexpr double_t const& System::Xml::Schema::XmlAtomicValue_Union::__cordl_internal_get_dblVal() const {
  return this->___dblVal;
}
constexpr void System::Xml::Schema::XmlAtomicValue_Union::__cordl_internal_set_dblVal(double_t value) {
  this->___dblVal = value;
}
constexpr int64_t& System::Xml::Schema::XmlAtomicValue_Union::__cordl_internal_get_i64Val() {
  return this->___i64Val;
}
constexpr int64_t const& System::Xml::Schema::XmlAtomicValue_Union::__cordl_internal_get_i64Val() const {
  return this->___i64Val;
}
constexpr void System::Xml::Schema::XmlAtomicValue_Union::__cordl_internal_set_i64Val(int64_t value) {
  this->___i64Val = value;
}
constexpr int32_t& System::Xml::Schema::XmlAtomicValue_Union::__cordl_internal_get_i32Val() {
  return this->___i32Val;
}
constexpr int32_t const& System::Xml::Schema::XmlAtomicValue_Union::__cordl_internal_get_i32Val() const {
  return this->___i32Val;
}
constexpr void System::Xml::Schema::XmlAtomicValue_Union::__cordl_internal_set_i32Val(int32_t value) {
  this->___i32Val = value;
}
constexpr ::System::DateTime& System::Xml::Schema::XmlAtomicValue_Union::__cordl_internal_get_dtVal() {
  return this->___dtVal;
}
constexpr ::System::DateTime const& System::Xml::Schema::XmlAtomicValue_Union::__cordl_internal_get_dtVal() const {
  return this->___dtVal;
}
constexpr void System::Xml::Schema::XmlAtomicValue_Union::__cordl_internal_set_dtVal(::System::DateTime value) {
  this->___dtVal = value;
}
// Ctor Parameters [CppParam { name: "boolVal", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "dblVal", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "i64Val", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "i32Val", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dtVal", ty:
// "::System::DateTime", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XmlAtomicValue_Union::XmlAtomicValue_Union(bool boolVal, double_t dblVal, int64_t i64Val, int32_t i32Val, ::System::DateTime dtVal) noexcept {
  this->boolVal = boolVal;
  this->dblVal = dblVal;
  this->i64Val = i64Val;
  this->i32Val = i32Val;
  this->dtVal = dtVal;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlAtomicValue_Union::XmlAtomicValue_Union() {}
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::*)(::StringW, ::StringW)>(
    &::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x42b6aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::*)(::StringW)>(
    &::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::LookupNamespace)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x42b76e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName*>::get(), "LookupNamespace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName.LookupPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::*)(::StringW)>(
    &::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::LookupPrefix)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x42b7718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName*>::get(), "LookupPrefix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName.GetNamespacesInScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::*)(::System::Xml::XmlNamespaceScope)>(&::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::GetNamespacesInScope)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x42b7744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName*>::get(), "GetNamespacesInScope", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceScope>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::__cordl_internal_get_prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr ::StringW const& System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::__cordl_internal_get_prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr void System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::__cordl_internal_set_prefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::__cordl_internal_get_ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr ::StringW const& System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::__cordl_internal_get_ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr void System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::__cordl_internal_set_ns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::_ctor(::StringW prefix, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, ns);
}
inline ::StringW System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::LookupNamespace(::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName*>::get(), "LookupNamespace",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::LookupPrefix(::StringW namespaceName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName*>::get(), "LookupPrefix",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, namespaceName);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName*>::get(), "GetNamespacesInScope", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceScope>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method, scope);
}
inline ::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName* System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::New_ctor(::StringW prefix, ::StringW ns) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName*>(prefix, ns));
}
/// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
constexpr System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::operator ::System::Xml::IXmlNamespaceResolver*() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
constexpr ::System::Xml::IXmlNamespaceResolver* System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::i___System__Xml__IXmlNamespaceResolver() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName::XmlAtomicValue_NamespacePrefixForQName() {}
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlAtomicValue::*)(::System::Xml::Schema::XmlSchemaType*, bool)>(
    &::System::Xml::Schema::XmlAtomicValue::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x42b64f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlAtomicValue::*)(::System::Xml::Schema::XmlSchemaType*, ::System::DateTime)>(
    &::System::Xml::Schema::XmlAtomicValue::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x42b6580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlAtomicValue::*)(::System::Xml::Schema::XmlSchemaType*, double_t)>(
    &::System::Xml::Schema::XmlAtomicValue::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x42b6604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlAtomicValue::*)(::System::Xml::Schema::XmlSchemaType*, int32_t)>(
    &::System::Xml::Schema::XmlAtomicValue::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x42b6690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlAtomicValue::*)(::System::Xml::Schema::XmlSchemaType*, int64_t)>(
    &::System::Xml::Schema::XmlAtomicValue::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x42b6714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlAtomicValue::*)(::System::Xml::Schema::XmlSchemaType*, ::StringW)>(
    &::System::Xml::Schema::XmlAtomicValue::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x42b6798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlAtomicValue::*)(
    ::System::Xml::Schema::XmlSchemaType*, ::StringW, ::System::Xml::IXmlNamespaceResolver*)>(&::System::Xml::Schema::XmlAtomicValue::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x42b6834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlNamespaceResolver*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlAtomicValue::*)(::System::Xml::Schema::XmlSchemaType*, ::System::Object*)>(
    &::System::Xml::Schema::XmlAtomicValue::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x42b6ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlAtomicValue::*)(
    ::System::Xml::Schema::XmlSchemaType*, ::System::Object*, ::System::Xml::IXmlNamespaceResolver*)>(&::System::Xml::Schema::XmlAtomicValue::_ctor)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x42b6b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlNamespaceResolver*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue.System_ICloneable_Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Schema::XmlAtomicValue::*)()>(
    &::System::Xml::Schema::XmlAtomicValue::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x42b6d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(),
                                                                               "System.ICloneable.Clone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue.get_XmlType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaType* (::System::Xml::Schema::XmlAtomicValue::*)()>(
    &::System::Xml::Schema::XmlAtomicValue::get_XmlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x42b6d64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue.get_ValueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Xml::Schema::XmlAtomicValue::*)()>(
    &::System::Xml::Schema::XmlAtomicValue::get_ValueType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x42b6d6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue.get_TypedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Schema::XmlAtomicValue::*)()>(
    &::System::Xml::Schema::XmlAtomicValue::get_TypedValue)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x42b6d94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue.get_ValueAsBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XmlAtomicValue::*)()>(&::System::Xml::Schema::XmlAtomicValue::get_ValueAsBoolean)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x42b6f5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue.get_ValueAsDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Xml::Schema::XmlAtomicValue::*)()>(
    &::System::Xml::Schema::XmlAtomicValue::get_ValueAsDateTime)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x42b702c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue.get_ValueAsDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::System::Xml::Schema::XmlAtomicValue::*)()>(&::System::Xml::Schema::XmlAtomicValue::get_ValueAsDouble)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x42b7110;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue.get_ValueAsInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XmlAtomicValue::*)()>(&::System::Xml::Schema::XmlAtomicValue::get_ValueAsInt)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x42b71f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue.get_ValueAsLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Xml::Schema::XmlAtomicValue::*)()>(&::System::Xml::Schema::XmlAtomicValue::get_ValueAsLong)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x42b72c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue.ValueAs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Schema::XmlAtomicValue::*)(::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::XmlAtomicValue::ValueAs)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x42b73ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::XmlAtomicValue::*)()>(&::System::Xml::Schema::XmlAtomicValue::get_Value)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x42b75e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::XmlAtomicValue::*)()>(&::System::Xml::Schema::XmlAtomicValue::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x42b76d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAtomicValue.GetPrefixFromQName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::XmlAtomicValue::*)(::StringW)>(
    &::System::Xml::Schema::XmlAtomicValue::GetPrefixFromQName)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x42b69e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), "GetPrefixFromQName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaType*& System::Xml::Schema::XmlAtomicValue::__cordl_internal_get_xmlType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlType;
}
constexpr ::System::Xml::Schema::XmlSchemaType* const& System::Xml::Schema::XmlAtomicValue::__cordl_internal_get_xmlType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlType;
}
constexpr void System::Xml::Schema::XmlAtomicValue::__cordl_internal_set_xmlType(::System::Xml::Schema::XmlSchemaType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Xml::Schema::XmlAtomicValue::__cordl_internal_get_objVal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objVal;
}
constexpr ::System::Object* const& System::Xml::Schema::XmlAtomicValue::__cordl_internal_get_objVal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objVal;
}
constexpr void System::Xml::Schema::XmlAtomicValue::__cordl_internal_set_objVal(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objVal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::TypeCode& System::Xml::Schema::XmlAtomicValue::__cordl_internal_get_clrType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clrType;
}
constexpr ::System::TypeCode const& System::Xml::Schema::XmlAtomicValue::__cordl_internal_get_clrType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clrType;
}
constexpr void System::Xml::Schema::XmlAtomicValue::__cordl_internal_set_clrType(::System::TypeCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clrType = value;
}
constexpr ::System::Xml::Schema::XmlAtomicValue_Union& System::Xml::Schema::XmlAtomicValue::__cordl_internal_get_unionVal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unionVal;
}
constexpr ::System::Xml::Schema::XmlAtomicValue_Union const& System::Xml::Schema::XmlAtomicValue::__cordl_internal_get_unionVal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unionVal;
}
constexpr void System::Xml::Schema::XmlAtomicValue::__cordl_internal_set_unionVal(::System::Xml::Schema::XmlAtomicValue_Union value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unionVal = value;
}
constexpr ::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName*& System::Xml::Schema::XmlAtomicValue::__cordl_internal_get_nsPrefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsPrefix;
}
constexpr ::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName* const& System::Xml::Schema::XmlAtomicValue::__cordl_internal_get_nsPrefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsPrefix;
}
constexpr void System::Xml::Schema::XmlAtomicValue::__cordl_internal_set_nsPrefix(::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nsPrefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::XmlAtomicValue::_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlType, value);
}
inline void System::Xml::Schema::XmlAtomicValue::_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlType, value);
}
inline void System::Xml::Schema::XmlAtomicValue::_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlType, value);
}
inline void System::Xml::Schema::XmlAtomicValue::_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlType, value);
}
inline void System::Xml::Schema::XmlAtomicValue::_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlType, value);
}
inline void System::Xml::Schema::XmlAtomicValue::_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlType, value);
}
inline void System::Xml::Schema::XmlAtomicValue::_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::StringW value, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlNamespaceResolver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlType, value, nsResolver);
}
inline void System::Xml::Schema::XmlAtomicValue::_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlType, value);
}
inline void System::Xml::Schema::XmlAtomicValue::_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlNamespaceResolver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlType, value, nsResolver);
}
inline ::System::Object* System::Xml::Schema::XmlAtomicValue::System_ICloneable_Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(),
                                                                             "System.ICloneable.Clone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaType* System::Xml::Schema::XmlAtomicValue::get_XmlType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaType*, false>(this, ___internal_method);
}
inline ::System::Type* System::Xml::Schema::XmlAtomicValue::get_ValueType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::XmlAtomicValue::get_TypedValue() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::XmlAtomicValue::get_ValueAsBoolean() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::DateTime System::Xml::Schema::XmlAtomicValue::get_ValueAsDateTime() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline double_t System::Xml::Schema::XmlAtomicValue::get_ValueAsDouble() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::XmlAtomicValue::get_ValueAsInt() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int64_t System::Xml::Schema::XmlAtomicValue::get_ValueAsLong() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::XmlAtomicValue::ValueAs(::System::Type* type, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, type, nsResolver);
}
inline ::StringW System::Xml::Schema::XmlAtomicValue::get_Value() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::XmlAtomicValue::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::XmlAtomicValue::GetPrefixFromQName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAtomicValue*>::get(), "GetPrefixFromQName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlAtomicValue* System::Xml::Schema::XmlAtomicValue::New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, bool value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlAtomicValue*>(xmlType, value));
}
inline ::System::Xml::Schema::XmlAtomicValue* System::Xml::Schema::XmlAtomicValue::New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::DateTime value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlAtomicValue*>(xmlType, value));
}
inline ::System::Xml::Schema::XmlAtomicValue* System::Xml::Schema::XmlAtomicValue::New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, double_t value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlAtomicValue*>(xmlType, value));
}
inline ::System::Xml::Schema::XmlAtomicValue* System::Xml::Schema::XmlAtomicValue::New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, int32_t value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlAtomicValue*>(xmlType, value));
}
inline ::System::Xml::Schema::XmlAtomicValue* System::Xml::Schema::XmlAtomicValue::New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, int64_t value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlAtomicValue*>(xmlType, value));
}
inline ::System::Xml::Schema::XmlAtomicValue* System::Xml::Schema::XmlAtomicValue::New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlAtomicValue*>(xmlType, value));
}
inline ::System::Xml::Schema::XmlAtomicValue* System::Xml::Schema::XmlAtomicValue::New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::StringW value,
                                                                                            ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlAtomicValue*>(xmlType, value, nsResolver));
}
inline ::System::Xml::Schema::XmlAtomicValue* System::Xml::Schema::XmlAtomicValue::New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::Object* value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlAtomicValue*>(xmlType, value));
}
inline ::System::Xml::Schema::XmlAtomicValue* System::Xml::Schema::XmlAtomicValue::New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::Object* value,
                                                                                            ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlAtomicValue*>(xmlType, value, nsResolver));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Xml::Schema::XmlAtomicValue::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Xml::Schema::XmlAtomicValue::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlAtomicValue::XmlAtomicValue() {}
