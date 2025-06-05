#pragma once
// IWYU pragma private; include "System/Xml/XmlSqlBinaryReader.hpp"
#include "System/Xml/zzzz__BinXmlToken_impl.hpp"
#include "System/Xml/zzzz__DtdProcessing_impl.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_impl.hpp"
#include "System/Xml/zzzz__XmlCharType_impl.hpp"
#include "System/Xml/zzzz__XmlNodeType_impl.hpp"
#include "System/Xml/zzzz__XmlReader_impl.hpp"
#include "System/Xml/zzzz__XmlSpace_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlSqlBinaryReader_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Xml/zzzz__BinXmlToken_def.hpp"
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__SecureStringHasher_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceScope_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlReaderSettings_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/Xml/zzzz__XmlSqlBinaryReader_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlSqlBinaryReader_ScanState::XmlSqlBinaryReader_ScanState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlSqlBinaryReader_ScanState::XmlSqlBinaryReader_ScanState() {}
constexpr ::System::Xml::XmlSqlBinaryReader_ScanState System::Xml::XmlSqlBinaryReader_ScanState::Doc{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::XmlSqlBinaryReader_ScanState System::Xml::XmlSqlBinaryReader_ScanState::XmlText{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::XmlSqlBinaryReader_ScanState System::Xml::XmlSqlBinaryReader_ScanState::Attr{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::XmlSqlBinaryReader_ScanState System::Xml::XmlSqlBinaryReader_ScanState::AttrVal{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::XmlSqlBinaryReader_ScanState System::Xml::XmlSqlBinaryReader_ScanState::AttrValPseudoValue{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::XmlSqlBinaryReader_ScanState System::Xml::XmlSqlBinaryReader_ScanState::Init{ static_cast<int32_t>(0x5) };
constexpr ::System::Xml::XmlSqlBinaryReader_ScanState System::Xml::XmlSqlBinaryReader_ScanState::Error{ static_cast<int32_t>(0x6) };
constexpr ::System::Xml::XmlSqlBinaryReader_ScanState System::Xml::XmlSqlBinaryReader_ScanState::_cordl_EOF{ static_cast<int32_t>(0x7) };
constexpr ::System::Xml::XmlSqlBinaryReader_ScanState System::Xml::XmlSqlBinaryReader_ScanState::Closed{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_QName._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader_QName::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlSqlBinaryReader_QName::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x423ecd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_QName.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader_QName::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlSqlBinaryReader_QName::Set)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x423db90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_QName.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader_QName::*)()>(&::System::Xml::XmlSqlBinaryReader_QName::Clear)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4239ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_QName.MatchNs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlSqlBinaryReader_QName::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlSqlBinaryReader_QName::MatchNs)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x423e624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), "MatchNs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_QName.MatchPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlSqlBinaryReader_QName::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlSqlBinaryReader_QName::MatchPrefix)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x423e674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), "MatchPrefix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_QName.CheckPrefixNS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader_QName::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlSqlBinaryReader_QName::CheckPrefixNS)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x423ea08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), "CheckPrefixNS", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_QName.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlSqlBinaryReader_QName::*)()>(&::System::Xml::XmlSqlBinaryReader_QName::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4241cdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_QName.GetNSHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlSqlBinaryReader_QName::*)(::System::Xml::SecureStringHasher*)>(
    &::System::Xml::XmlSqlBinaryReader_QName::GetNSHashCode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x4241d24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), "GetNSHashCode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::SecureStringHasher*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_QName.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlSqlBinaryReader_QName::*)(::System::Object*)>(
    &::System::Xml::XmlSqlBinaryReader_QName::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x4241d70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_QName.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlSqlBinaryReader_QName::*)()>(&::System::Xml::XmlSqlBinaryReader_QName::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x423f7e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_QName.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Xml::XmlSqlBinaryReader_QName, ::System::Xml::XmlSqlBinaryReader_QName)>(
    &::System::Xml::XmlSqlBinaryReader_QName::op_Equality)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4241e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSqlBinaryReader_QName>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSqlBinaryReader_QName>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlSqlBinaryReader_QName::_ctor(::StringW prefix, ::StringW lname, ::StringW nsUri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, lname, nsUri);
}
inline void System::Xml::XmlSqlBinaryReader_QName::Set(::StringW prefix, ::StringW lname, ::StringW nsUri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, lname, nsUri);
}
inline void System::Xml::XmlSqlBinaryReader_QName::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::XmlSqlBinaryReader_QName::MatchNs(::StringW lname, ::StringW nsUri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), "MatchNs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, lname, nsUri);
}
inline bool System::Xml::XmlSqlBinaryReader_QName::MatchPrefix(::StringW prefix, ::StringW lname) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), "MatchPrefix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, prefix, lname);
}
inline void System::Xml::XmlSqlBinaryReader_QName::CheckPrefixNS(::StringW prefix, ::StringW namespaceUri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), "CheckPrefixNS", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, namespaceUri);
}
inline int32_t System::Xml::XmlSqlBinaryReader_QName::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlSqlBinaryReader_QName::GetNSHashCode(::System::Xml::SecureStringHasher* hasher) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), "GetNSHashCode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::SecureStringHasher*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, hasher);
}
inline bool System::Xml::XmlSqlBinaryReader_QName::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::StringW System::Xml::XmlSqlBinaryReader_QName::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Xml::XmlSqlBinaryReader_QName::op_Equality(::System::Xml::XmlSqlBinaryReader_QName a, ::System::Xml::XmlSqlBinaryReader_QName b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_QName>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSqlBinaryReader_QName>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSqlBinaryReader_QName>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "localname", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlSqlBinaryReader_QName::XmlSqlBinaryReader_QName(::StringW prefix, ::StringW localname, ::StringW namespaceUri) noexcept {
  this->prefix = prefix;
  this->localname = localname;
  this->namespaceUri = namespaceUri;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlSqlBinaryReader_QName::XmlSqlBinaryReader_QName() {}
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_ElemInfo.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader_ElemInfo::*)(::System::Xml::XmlSqlBinaryReader_QName, bool)>(
    &::System::Xml::XmlSqlBinaryReader_ElemInfo::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x42405e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_ElemInfo>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSqlBinaryReader_QName>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_ElemInfo.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlSqlBinaryReader_NamespaceDecl* (::System::Xml::XmlSqlBinaryReader_ElemInfo::*)()>(
    &::System::Xml::XmlSqlBinaryReader_ElemInfo::Clear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x423f990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_ElemInfo>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Xml::XmlSqlBinaryReader_ElemInfo::Set(::System::Xml::XmlSqlBinaryReader_QName name, bool xmlspacePreserve) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_ElemInfo>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSqlBinaryReader_QName>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, xmlspacePreserve);
}
inline ::System::Xml::XmlSqlBinaryReader_NamespaceDecl* System::Xml::XmlSqlBinaryReader_ElemInfo::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_ElemInfo>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSqlBinaryReader_NamespaceDecl*, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "name", ty: "::System::Xml::XmlSqlBinaryReader_QName", modifiers: "", def_value: Some("{}") }, CppParam { name: "xmlLang", ty: "::StringW", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "xmlSpace", ty: "::System::Xml::XmlSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "xmlspacePreserve", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "nsdecls", ty: "::System::Xml::XmlSqlBinaryReader_NamespaceDecl*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlSqlBinaryReader_ElemInfo::XmlSqlBinaryReader_ElemInfo(::System::Xml::XmlSqlBinaryReader_QName name, ::StringW xmlLang, ::System::Xml::XmlSpace xmlSpace,
                                                                                  bool xmlspacePreserve, ::System::Xml::XmlSqlBinaryReader_NamespaceDecl* nsdecls) noexcept {
  this->name = name;
  this->xmlLang = xmlLang;
  this->xmlSpace = xmlSpace;
  this->xmlspacePreserve = xmlspacePreserve;
  this->nsdecls = nsdecls;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlSqlBinaryReader_ElemInfo::XmlSqlBinaryReader_ElemInfo() {}
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_AttrInfo.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader_AttrInfo::*)(::System::Xml::XmlSqlBinaryReader_QName, ::StringW)>(
    &::System::Xml::XmlSqlBinaryReader_AttrInfo::Set)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x423ecdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_AttrInfo>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSqlBinaryReader_QName>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_AttrInfo.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader_AttrInfo::*)(::System::Xml::XmlSqlBinaryReader_QName, int32_t)>(
    &::System::Xml::XmlSqlBinaryReader_AttrInfo::Set)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x423f1ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_AttrInfo>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSqlBinaryReader_QName>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_AttrInfo.GetLocalnameAndNamespaceUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader_AttrInfo::*)(::ByRef<::StringW>, ::ByRef<::StringW>)>(
    &::System::Xml::XmlSqlBinaryReader_AttrInfo::GetLocalnameAndNamespaceUri)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x423f7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_AttrInfo>::get(), "GetLocalnameAndNamespaceUri", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_AttrInfo.GetLocalnameAndNamespaceUriAndHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlSqlBinaryReader_AttrInfo::*)(
    ::System::Xml::SecureStringHasher*, ::ByRef<::StringW>, ::ByRef<::StringW>)>(&::System::Xml::XmlSqlBinaryReader_AttrInfo::GetLocalnameAndNamespaceUriAndHash)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x423f850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_AttrInfo>::get(), "GetLocalnameAndNamespaceUriAndHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::SecureStringHasher*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_AttrInfo.MatchNS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlSqlBinaryReader_AttrInfo::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlSqlBinaryReader_AttrInfo::MatchNS)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x423f7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_AttrInfo>::get(), "MatchNS", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_AttrInfo.MatchHashNS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlSqlBinaryReader_AttrInfo::*)(int32_t, ::StringW, ::StringW)>(
    &::System::Xml::XmlSqlBinaryReader_AttrInfo::MatchHashNS)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x423f878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_AttrInfo>::get(), "MatchHashNS", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_AttrInfo.AdjustPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader_AttrInfo::*)(int32_t)>(
    &::System::Xml::XmlSqlBinaryReader_AttrInfo::AdjustPosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x423df6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_AttrInfo>::get(), "AdjustPosition",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::XmlSqlBinaryReader_AttrInfo::Set(::System::Xml::XmlSqlBinaryReader_QName n, ::StringW v) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_AttrInfo>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSqlBinaryReader_QName>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, n, v);
}
inline void System::Xml::XmlSqlBinaryReader_AttrInfo::Set(::System::Xml::XmlSqlBinaryReader_QName n, int32_t pos) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_AttrInfo>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSqlBinaryReader_QName>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, n, pos);
}
inline void System::Xml::XmlSqlBinaryReader_AttrInfo::GetLocalnameAndNamespaceUri(::ByRef<::StringW> localname, ::ByRef<::StringW> namespaceUri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_AttrInfo>::get(),
                                                                             "GetLocalnameAndNamespaceUri", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localname, namespaceUri);
}
inline int32_t System::Xml::XmlSqlBinaryReader_AttrInfo::GetLocalnameAndNamespaceUriAndHash(::System::Xml::SecureStringHasher* hasher, ::ByRef<::StringW> localname, ::ByRef<::StringW> namespaceUri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_AttrInfo>::get(), "GetLocalnameAndNamespaceUriAndHash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::SecureStringHasher*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, hasher, localname, namespaceUri);
}
inline bool System::Xml::XmlSqlBinaryReader_AttrInfo::MatchNS(::StringW localname, ::StringW namespaceUri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_AttrInfo>::get(), "MatchNS", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, localname, namespaceUri);
}
inline bool System::Xml::XmlSqlBinaryReader_AttrInfo::MatchHashNS(int32_t hash, ::StringW localname, ::StringW namespaceUri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_AttrInfo>::get(), "MatchHashNS", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, hash, localname, namespaceUri);
}
inline void System::Xml::XmlSqlBinaryReader_AttrInfo::AdjustPosition(int32_t adj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_AttrInfo>::get(), "AdjustPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, adj);
}
// Ctor Parameters [CppParam { name: "name", ty: "::System::Xml::XmlSqlBinaryReader_QName", modifiers: "", def_value: Some("{}") }, CppParam { name: "val", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "contentPos", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "prevHash", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlSqlBinaryReader_AttrInfo::XmlSqlBinaryReader_AttrInfo(::System::Xml::XmlSqlBinaryReader_QName name, ::StringW val, int32_t contentPos, int32_t hashCode,
                                                                                  int32_t prevHash) noexcept {
  this->name = name;
  this->val = val;
  this->contentPos = contentPos;
  this->hashCode = hashCode;
  this->prevHash = prevHash;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlSqlBinaryReader_AttrInfo::XmlSqlBinaryReader_AttrInfo() {}
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_NamespaceDecl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader_NamespaceDecl::*)(
    ::StringW, ::StringW, ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*, ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*, int32_t, bool)>(
    &::System::Xml::XmlSqlBinaryReader_NamespaceDecl::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x423d664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_NamespaceDecl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSqlBinaryReader_NamespaceDecl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSqlBinaryReader_NamespaceDecl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::XmlSqlBinaryReader_NamespaceDecl::__cordl_internal_get_prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr ::StringW const& System::Xml::XmlSqlBinaryReader_NamespaceDecl::__cordl_internal_get_prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefix;
}
constexpr void System::Xml::XmlSqlBinaryReader_NamespaceDecl::__cordl_internal_set_prefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlSqlBinaryReader_NamespaceDecl::__cordl_internal_get_uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr ::StringW const& System::Xml::XmlSqlBinaryReader_NamespaceDecl::__cordl_internal_get_uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr void System::Xml::XmlSqlBinaryReader_NamespaceDecl::__cordl_internal_set_uri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___uri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*& System::Xml::XmlSqlBinaryReader_NamespaceDecl::__cordl_internal_get_scopeLink() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scopeLink;
}
constexpr ::System::Xml::XmlSqlBinaryReader_NamespaceDecl* const& System::Xml::XmlSqlBinaryReader_NamespaceDecl::__cordl_internal_get_scopeLink() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scopeLink;
}
constexpr void System::Xml::XmlSqlBinaryReader_NamespaceDecl::__cordl_internal_set_scopeLink(::System::Xml::XmlSqlBinaryReader_NamespaceDecl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scopeLink)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*& System::Xml::XmlSqlBinaryReader_NamespaceDecl::__cordl_internal_get_prevLink() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevLink;
}
constexpr ::System::Xml::XmlSqlBinaryReader_NamespaceDecl* const& System::Xml::XmlSqlBinaryReader_NamespaceDecl::__cordl_internal_get_prevLink() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevLink;
}
constexpr void System::Xml::XmlSqlBinaryReader_NamespaceDecl::__cordl_internal_set_prevLink(::System::Xml::XmlSqlBinaryReader_NamespaceDecl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prevLink)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlSqlBinaryReader_NamespaceDecl::__cordl_internal_get_scope() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scope;
}
constexpr int32_t const& System::Xml::XmlSqlBinaryReader_NamespaceDecl::__cordl_internal_get_scope() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scope;
}
constexpr void System::Xml::XmlSqlBinaryReader_NamespaceDecl::__cordl_internal_set_scope(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scope = value;
}
constexpr bool& System::Xml::XmlSqlBinaryReader_NamespaceDecl::__cordl_internal_get_implied() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___implied;
}
constexpr bool const& System::Xml::XmlSqlBinaryReader_NamespaceDecl::__cordl_internal_get_implied() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___implied;
}
constexpr void System::Xml::XmlSqlBinaryReader_NamespaceDecl::__cordl_internal_set_implied(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___implied = value;
}
inline void System::Xml::XmlSqlBinaryReader_NamespaceDecl::_ctor(::StringW prefix, ::StringW nsuri, ::System::Xml::XmlSqlBinaryReader_NamespaceDecl* nextInScope,
                                                                 ::System::Xml::XmlSqlBinaryReader_NamespaceDecl* prevDecl, int32_t scope, bool implied) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_NamespaceDecl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSqlBinaryReader_NamespaceDecl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSqlBinaryReader_NamespaceDecl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, nsuri, nextInScope, prevDecl, scope, implied);
}
inline ::System::Xml::XmlSqlBinaryReader_NamespaceDecl* System::Xml::XmlSqlBinaryReader_NamespaceDecl::New_ctor(::StringW prefix, ::StringW nsuri,
                                                                                                                ::System::Xml::XmlSqlBinaryReader_NamespaceDecl* nextInScope,
                                                                                                                ::System::Xml::XmlSqlBinaryReader_NamespaceDecl* prevDecl, int32_t scope,
                                                                                                                bool implied) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlSqlBinaryReader_NamespaceDecl*>(prefix, nsuri, nextInScope, prevDecl, scope, implied));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlSqlBinaryReader_NamespaceDecl::XmlSqlBinaryReader_NamespaceDecl() {}
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_SymbolTables.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader_SymbolTables::*)()>(&::System::Xml::XmlSqlBinaryReader_SymbolTables::Init)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x4239e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_SymbolTables>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Xml::XmlSqlBinaryReader_SymbolTables::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_SymbolTables>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "symtable", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "symCount", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "qnametable", ty: "::ArrayW<::System::Xml::XmlSqlBinaryReader_QName,::Array<::System::Xml::XmlSqlBinaryReader_QName>*>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "qnameCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlSqlBinaryReader_SymbolTables::XmlSqlBinaryReader_SymbolTables(
    ::ArrayW<::StringW, ::Array<::StringW>*> symtable, int32_t symCount, ::ArrayW<::System::Xml::XmlSqlBinaryReader_QName, ::Array<::System::Xml::XmlSqlBinaryReader_QName>*> qnametable,
    int32_t qnameCount) noexcept {
  this->symtable = symtable;
  this->symCount = symCount;
  this->qnametable = qnametable;
  this->qnameCount = qnameCount;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlSqlBinaryReader_SymbolTables::XmlSqlBinaryReader_SymbolTables() {}
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader_NestedBinXml._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader_NestedBinXml::*)(
    ::System::Xml::XmlSqlBinaryReader_SymbolTables, int32_t, ::System::Xml::XmlSqlBinaryReader_NestedBinXml*)>(&::System::Xml::XmlSqlBinaryReader_NestedBinXml::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4240608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_NestedBinXml*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSqlBinaryReader_SymbolTables>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSqlBinaryReader_NestedBinXml*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlSqlBinaryReader_SymbolTables& System::Xml::XmlSqlBinaryReader_NestedBinXml::__cordl_internal_get_symbolTables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___symbolTables;
}
constexpr ::System::Xml::XmlSqlBinaryReader_SymbolTables const& System::Xml::XmlSqlBinaryReader_NestedBinXml::__cordl_internal_get_symbolTables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___symbolTables;
}
constexpr void System::Xml::XmlSqlBinaryReader_NestedBinXml::__cordl_internal_set_symbolTables(::System::Xml::XmlSqlBinaryReader_SymbolTables value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___symbolTables = value;
}
constexpr int32_t& System::Xml::XmlSqlBinaryReader_NestedBinXml::__cordl_internal_get_docState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___docState;
}
constexpr int32_t const& System::Xml::XmlSqlBinaryReader_NestedBinXml::__cordl_internal_get_docState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___docState;
}
constexpr void System::Xml::XmlSqlBinaryReader_NestedBinXml::__cordl_internal_set_docState(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___docState = value;
}
constexpr ::System::Xml::XmlSqlBinaryReader_NestedBinXml*& System::Xml::XmlSqlBinaryReader_NestedBinXml::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::System::Xml::XmlSqlBinaryReader_NestedBinXml* const& System::Xml::XmlSqlBinaryReader_NestedBinXml::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void System::Xml::XmlSqlBinaryReader_NestedBinXml::__cordl_internal_set_next(::System::Xml::XmlSqlBinaryReader_NestedBinXml* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::XmlSqlBinaryReader_NestedBinXml::_ctor(::System::Xml::XmlSqlBinaryReader_SymbolTables symbolTables, int32_t docState, ::System::Xml::XmlSqlBinaryReader_NestedBinXml* next) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader_NestedBinXml*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSqlBinaryReader_SymbolTables>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSqlBinaryReader_NestedBinXml*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, symbolTables, docState, next);
}
inline ::System::Xml::XmlSqlBinaryReader_NestedBinXml* System::Xml::XmlSqlBinaryReader_NestedBinXml::New_ctor(::System::Xml::XmlSqlBinaryReader_SymbolTables symbolTables, int32_t docState,
                                                                                                              ::System::Xml::XmlSqlBinaryReader_NestedBinXml* next) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlSqlBinaryReader_NestedBinXml*>(symbolTables, docState, next));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlSqlBinaryReader_NestedBinXml::XmlSqlBinaryReader_NestedBinXml() {}
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)(
    ::System::IO::Stream*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::StringW, bool, ::System::Xml::XmlReaderSettings*)>(&::System::Xml::XmlSqlBinaryReader::_ctor)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x423998c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReaderSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.get_Settings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlReaderSettings* (::System::Xml::XmlSqlBinaryReader::*)()>(
    &::System::Xml::XmlSqlBinaryReader::get_Settings)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x423aaac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.get_NodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlSqlBinaryReader::*)()>(
    &::System::Xml::XmlSqlBinaryReader::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x423abc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.get_LocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::get_LocalName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x423abd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x423abd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.get_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::get_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x423abe0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::get_Value)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x423abe8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.get_Depth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::get_Depth)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x423b8b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.get_BaseURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::get_BaseURI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x423b954;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x423b95c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.get_XmlSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlSpace (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::get_XmlSpace)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x423b980;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.get_XmlLang
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::get_XmlLang)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x423ba00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.get_ValueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::get_ValueType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x423bac0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.get_AttributeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::get_AttributeCount)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x423bac8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlSqlBinaryReader::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlSqlBinaryReader::GetAttribute)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x423bb1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlSqlBinaryReader::*)(::StringW)>(&::System::Xml::XmlSqlBinaryReader::GetAttribute)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x423bccc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlSqlBinaryReader::*)(int32_t)>(&::System::Xml::XmlSqlBinaryReader::GetAttribute)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x423be18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlSqlBinaryReader::*)(::StringW)>(&::System::Xml::XmlSqlBinaryReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x423bea8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)(int32_t)>(&::System::Xml::XmlSqlBinaryReader::MoveToAttribute)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x423c000;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.MoveToFirstAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::MoveToFirstAttribute)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x423c0a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.MoveToNextAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x423c11c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.MoveToElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::MoveToElement)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x423c1a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.get_EOF
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::get_EOF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x423c258;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ReadAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ReadAttributeValue)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x423c268;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::Close)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x423c5d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.get_NameTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XmlSqlBinaryReader::*)()>(
    &::System::Xml::XmlSqlBinaryReader::get_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x423c63c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlSqlBinaryReader::*)(::StringW)>(&::System::Xml::XmlSqlBinaryReader::LookupNamespace)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x423c644;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ResolveEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ResolveEntity)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x423c6f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.get_ReadState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::ReadState (::System::Xml::XmlSqlBinaryReader::*)()>(
    &::System::Xml::XmlSqlBinaryReader::get_ReadState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x423c730;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::Read)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x423c7b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.System_Xml_IXmlNamespaceResolver_GetNamespacesInScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::System::Xml::XmlSqlBinaryReader::*)(::System::Xml::XmlNamespaceScope)>(&::System::Xml::XmlSqlBinaryReader::System_Xml_IXmlNamespaceResolver_GetNamespacesInScope)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x423d0a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "System.Xml.IXmlNamespaceResolver.GetNamespacesInScope",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceScope>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.System_Xml_IXmlNamespaceResolver_LookupPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlSqlBinaryReader::*)(::StringW)>(
    &::System::Xml::XmlSqlBinaryReader::System_Xml_IXmlNamespaceResolver_LookupPrefix)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x423d448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "System.Xml.IXmlNamespaceResolver.LookupPrefix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.VerifyVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)(int32_t, ::System::Xml::BinXmlToken)>(
    &::System::Xml::XmlSqlBinaryReader::VerifyVersion)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x423d5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "VerifyVersion", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::BinXmlToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.AddInitNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlSqlBinaryReader::AddInitNamespace)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4239f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "AddInitNamespace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.AddName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::AddName)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x423d6bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "AddName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.AddQName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::AddQName)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x423d88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "AddQName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.NameFlush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::NameFlush)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x423db9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "NameFlush",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.SkipExtn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::SkipExtn)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x423dbec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "SkipExtn",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ReadQNameRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ReadQNameRef)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x423dcc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ReadQNameRef",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ReadNameRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ReadNameRef)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x423db04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ReadNameRef",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.FillAllowEOF
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::FillAllowEOF)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x423dd4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "FillAllowEOF",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.Fill_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)(int32_t)>(&::System::Xml::XmlSqlBinaryReader::Fill_)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x423df80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "Fill_", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.Fill
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)(int32_t)>(&::System::Xml::XmlSqlBinaryReader::Fill)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x423dca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "Fill", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ReadByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ReadByte)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x423e06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ReadByte",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ReadUShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ReadUShort)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x423e0c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ReadUShort",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ParseMB32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ParseMB32)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x423dc78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ParseMB32",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ParseMB32_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlSqlBinaryReader::*)(uint8_t)>(&::System::Xml::XmlSqlBinaryReader::ParseMB32_)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x423e13c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ParseMB32_", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ParseMB32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlSqlBinaryReader::*)(int32_t)>(&::System::Xml::XmlSqlBinaryReader::ParseMB32)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x423e1d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ParseMB32", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ParseMB64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ParseMB64)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x423e2c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ParseMB64",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.PeekToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::BinXmlToken (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::PeekToken)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x423e2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "PeekToken",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ReadToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::BinXmlToken (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ReadToken)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x423e354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ReadToken",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.NextToken2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::BinXmlToken (::System::Xml::XmlSqlBinaryReader::*)(::System::Xml::BinXmlToken)>(
    &::System::Xml::XmlSqlBinaryReader::NextToken2)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x423e3c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "NextToken2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::BinXmlToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.NextToken1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::BinXmlToken (::System::Xml::XmlSqlBinaryReader::*)()>(
    &::System::Xml::XmlSqlBinaryReader::NextToken1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x423e43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "NextToken1",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.NextToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::BinXmlToken (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::NextToken)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x423e4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "NextToken",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.PeekNextToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::BinXmlToken (::System::Xml::XmlSqlBinaryReader::*)()>(
    &::System::Xml::XmlSqlBinaryReader::PeekNextToken)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x423e518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "PeekNextToken",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.RescanNextToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::BinXmlToken (::System::Xml::XmlSqlBinaryReader::*)()>(
    &::System::Xml::XmlSqlBinaryReader::RescanNextToken)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x423c3f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "RescanNextToken",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ParseText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ParseText)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x423d7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ParseText",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ScanText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlSqlBinaryReader::*)(::ByRef<int32_t>)>(&::System::Xml::XmlSqlBinaryReader::ScanText)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x423e540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ScanText", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.GetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlSqlBinaryReader::*)(int32_t, int32_t)>(&::System::Xml::XmlSqlBinaryReader::GetString)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x423acfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.GetStringAligned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlSqlBinaryReader::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::XmlSqlBinaryReader::GetStringAligned)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x423e5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetStringAligned", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.GetAttributeText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlSqlBinaryReader::*)(int32_t)>(&::System::Xml::XmlSqlBinaryReader::GetAttributeText)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x423b78c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetAttributeText", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.LocateAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlSqlBinaryReader::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlSqlBinaryReader::LocateAttribute)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x423bc44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "LocateAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.LocateAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlSqlBinaryReader::*)(::StringW)>(&::System::Xml::XmlSqlBinaryReader::LocateAttribute)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x423bd38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "LocateAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.PositionOnAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)(int32_t)>(&::System::Xml::XmlSqlBinaryReader::PositionOnAttribute)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x423bf40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "PositionOnAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.GrowElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::GrowElements)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x423e6c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GrowElements",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.GrowAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::GrowAttributes)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x423e74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GrowAttributes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ClearAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ClearAttributes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x423e7d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ClearAttributes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.PushNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)(::StringW, ::StringW, bool)>(
    &::System::Xml::XmlSqlBinaryReader::PushNamespace)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x423e7e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "PushNamespace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.PopNamespaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)(::System::Xml::XmlSqlBinaryReader_NamespaceDecl*)>(
    &::System::Xml::XmlSqlBinaryReader::PopNamespaces)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x423eb00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "PopNamespaces", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSqlBinaryReader_NamespaceDecl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.GenerateImpliedXmlnsAttrs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::GenerateImpliedXmlnsAttrs)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x423eba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                               "GenerateImpliedXmlnsAttrs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ReadInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlSqlBinaryReader::*)(bool)>(&::System::Xml::XmlSqlBinaryReader::ReadInit)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x423c978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ReadInit",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ScanAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ScanAttributes)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x423ecf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ScanAttributes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.SimpleCheckForDuplicateAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(
    &::System::Xml::XmlSqlBinaryReader::SimpleCheckForDuplicateAttributes)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x423f440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "SimpleCheckForDuplicateAttributes",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.HashCheckForDuplicateAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::HashCheckForDuplicateAttributes)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x423f58c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "HashCheckForDuplicateAttributes",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.XmlDeclValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::XmlDeclValue)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x423af6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "XmlDeclValue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.CDATAValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::CDATAValue)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x423ae68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "CDATAValue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.FinishCDATA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::FinishCDATA)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x423f898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "FinishCDATA",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.FinishEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::FinishEndElement)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x423f93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "FinishEndElement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ReadDoc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ReadDoc)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x423cd34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ReadDoc",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ImplReadData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)(::System::Xml::BinXmlToken)>(
    &::System::Xml::XmlSqlBinaryReader::ImplReadData)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x4240414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ImplReadData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::BinXmlToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ImplReadElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ImplReadElement)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x423f9a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ImplReadElement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ImplReadEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ImplReadEndElement)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x423fbe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ImplReadEndElement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ImplReadDoctype
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ImplReadDoctype)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x423fcb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ImplReadDoctype",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ImplReadPI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ImplReadPI)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x423ff1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ImplReadPI",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ImplReadComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ImplReadComment)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x423ff80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ImplReadComment",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ImplReadCDATA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ImplReadCDATA)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x423ffac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ImplReadCDATA",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ImplReadNest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ImplReadNest)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x423ffe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ImplReadNest",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ImplReadEndNest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ImplReadEndNest)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x4240080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ImplReadEndNest",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ImplReadXmlText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ImplReadXmlText)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x42400b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ImplReadXmlText",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.UpdateFromTextReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::UpdateFromTextReader)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x424064c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                               "UpdateFromTextReader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.UpdateFromTextReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlSqlBinaryReader::*)(bool)>(&::System::Xml::XmlSqlBinaryReader::UpdateFromTextReader)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x423bf24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "UpdateFromTextReader",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.CheckAllowContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::CheckAllowContent)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x4240580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "CheckAllowContent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.GenerateTokenTypeMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::GenerateTokenTypeMap)> {
  constexpr static std::size_t size = 0xa90;
  constexpr static std::size_t addrs = 0x423a01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                               "GenerateTokenTypeMap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.GetValueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Xml::XmlSqlBinaryReader::*)(::System::Xml::BinXmlToken)>(
    &::System::Xml::XmlSqlBinaryReader::GetValueType)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x423c4e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetValueType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::BinXmlToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ReScanOverValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)(::System::Xml::BinXmlToken)>(
    &::System::Xml::XmlSqlBinaryReader::ReScanOverValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x423c4d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ReScanOverValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::BinXmlToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ScanOverValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlSqlBinaryReader::*)(::System::Xml::BinXmlToken, bool, bool)>(
    &::System::Xml::XmlSqlBinaryReader::ScanOverValue)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x423f294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ScanOverValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::BinXmlToken>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ScanOverAnyValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlSqlBinaryReader::*)(::System::Xml::BinXmlToken, bool, bool)>(
    &::System::Xml::XmlSqlBinaryReader::ScanOverAnyValue)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x4240950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ScanOverAnyValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::BinXmlToken>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.CheckText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlSqlBinaryReader::*)(bool)>(
    &::System::Xml::XmlSqlBinaryReader::CheckText)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x42406f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "CheckText",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.CheckTextIsWS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlSqlBinaryReader::*)()>(
    &::System::Xml::XmlSqlBinaryReader::CheckTextIsWS)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x42408b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "CheckTextIsWS",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.CheckValueTokenBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::CheckValueTokenBounds)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4240d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                               "CheckValueTokenBounds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.GetXsdKatmaiTokenLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlSqlBinaryReader::*)(::System::Xml::BinXmlToken)>(
    &::System::Xml::XmlSqlBinaryReader::GetXsdKatmaiTokenLength)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x4240c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetXsdKatmaiTokenLength", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::BinXmlToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.XsdKatmaiTimeScaleToValueLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlSqlBinaryReader::*)(uint8_t)>(
    &::System::Xml::XmlSqlBinaryReader::XsdKatmaiTimeScaleToValueLength)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4240dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "XsdKatmaiTimeScaleToValueLength",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ValueAsLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ValueAsLong)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x4240e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ValueAsLong",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ValueAsULong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ValueAsULong)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x42416a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ValueAsULong",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ValueAsDecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ValueAsDecimal)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x42414bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ValueAsDecimal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ValueAsDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ValueAsDouble)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x4241388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ValueAsDouble",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ValueAsDateTimeString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlSqlBinaryReader::*)()>(&::System::Xml::XmlSqlBinaryReader::ValueAsDateTimeString)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x424183c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                               "ValueAsDateTimeString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ValueAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlSqlBinaryReader::*)(::System::Xml::BinXmlToken)>(
    &::System::Xml::XmlSqlBinaryReader::ValueAsString)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x423b0ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ValueAsString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::BinXmlToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.GetInt16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::System::Xml::XmlSqlBinaryReader::*)(int32_t)>(&::System::Xml::XmlSqlBinaryReader::GetInt16)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4241078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetInt16", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.GetUInt16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::System::Xml::XmlSqlBinaryReader::*)(int32_t)>(&::System::Xml::XmlSqlBinaryReader::GetUInt16)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4241200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetUInt16", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.GetInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlSqlBinaryReader::*)(int32_t)>(&::System::Xml::XmlSqlBinaryReader::GetInt32)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x42410bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetInt32", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.GetUInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Xml::XmlSqlBinaryReader::*)(int32_t)>(&::System::Xml::XmlSqlBinaryReader::GetUInt32)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4241244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetUInt32", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.GetInt64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Xml::XmlSqlBinaryReader::*)(int32_t)>(&::System::Xml::XmlSqlBinaryReader::GetInt64)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x4241130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetInt64", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.GetUInt64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::System::Xml::XmlSqlBinaryReader::*)(int32_t)>(&::System::Xml::XmlSqlBinaryReader::GetUInt64)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x42412b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetUInt64", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.GetSingle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::System::Xml::XmlSqlBinaryReader::*)(int32_t)>(&::System::Xml::XmlSqlBinaryReader::GetSingle)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x42416f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetSingle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.GetDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::System::Xml::XmlSqlBinaryReader::*)(int32_t)>(&::System::Xml::XmlSqlBinaryReader::GetDouble)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4241768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetDouble", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ThrowUnexpectedToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Xml::XmlSqlBinaryReader::*)(::System::Xml::BinXmlToken)>(
    &::System::Xml::XmlSqlBinaryReader::ThrowUnexpectedToken)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x423d61c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ThrowUnexpectedToken", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::BinXmlToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ThrowXmlException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Xml::XmlSqlBinaryReader::*)(::StringW)>(
    &::System::Xml::XmlSqlBinaryReader::ThrowXmlException)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x423dff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ThrowXmlException", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ThrowXmlException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Xml::XmlSqlBinaryReader::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::XmlSqlBinaryReader::ThrowXmlException)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x423f1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ThrowXmlException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlSqlBinaryReader.ThrowNotSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Xml::XmlSqlBinaryReader::*)(::StringW)>(
    &::System::Xml::XmlSqlBinaryReader::ThrowNotSupported)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x423f3bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ThrowNotSupported", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_inStrm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inStrm;
}
constexpr ::System::IO::Stream* const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_inStrm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inStrm;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_inStrm(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inStrm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_data(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_pos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pos;
}
constexpr int32_t const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_pos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pos;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_pos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pos = value;
}
constexpr int32_t& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_mark() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mark;
}
constexpr int32_t const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_mark() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mark;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_mark(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mark = value;
}
constexpr int32_t& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_end() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___end;
}
constexpr int32_t const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_end() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___end;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_end(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___end = value;
}
constexpr int64_t& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr int64_t const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_offset(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr bool& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_eof() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eof;
}
constexpr bool const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_eof() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eof;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_eof(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eof = value;
}
constexpr bool& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_sniffed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sniffed;
}
constexpr bool const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_sniffed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sniffed;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_sniffed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sniffed = value;
}
constexpr bool& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_isEmpty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEmpty;
}
constexpr bool const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_isEmpty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEmpty;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_isEmpty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isEmpty = value;
}
constexpr int32_t& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_docState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___docState;
}
constexpr int32_t const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_docState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___docState;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_docState(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___docState = value;
}
constexpr ::System::Xml::XmlSqlBinaryReader_SymbolTables& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_symbolTables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___symbolTables;
}
constexpr ::System::Xml::XmlSqlBinaryReader_SymbolTables const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_symbolTables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___symbolTables;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_symbolTables(::System::Xml::XmlSqlBinaryReader_SymbolTables value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___symbolTables = value;
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_xnt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xnt;
}
constexpr ::System::Xml::XmlNameTable* const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_xnt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xnt;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_xnt(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xnt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_xntFromSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xntFromSettings;
}
constexpr bool const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_xntFromSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xntFromSettings;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_xntFromSettings(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xntFromSettings = value;
}
constexpr ::StringW& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_xml() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xml;
}
constexpr ::StringW const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_xml() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xml;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_xml(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xml)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_xmlns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlns;
}
constexpr ::StringW const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_xmlns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlns;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_xmlns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_nsxmlns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsxmlns;
}
constexpr ::StringW const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_nsxmlns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nsxmlns;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_nsxmlns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nsxmlns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_baseUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseUri;
}
constexpr ::StringW const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_baseUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseUri;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_baseUri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___baseUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlSqlBinaryReader_ScanState& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::System::Xml::XmlSqlBinaryReader_ScanState const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_state(::System::Xml::XmlSqlBinaryReader_ScanState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
constexpr ::System::Xml::XmlNodeType& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_nodetype() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodetype;
}
constexpr ::System::Xml::XmlNodeType const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_nodetype() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodetype;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_nodetype(::System::Xml::XmlNodeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nodetype = value;
}
constexpr ::System::Xml::BinXmlToken& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_token() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___token;
}
constexpr ::System::Xml::BinXmlToken const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_token() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___token;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_token(::System::Xml::BinXmlToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___token = value;
}
constexpr int32_t& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_attrIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrIndex;
}
constexpr int32_t const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_attrIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrIndex;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_attrIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attrIndex = value;
}
constexpr ::System::Xml::XmlSqlBinaryReader_QName& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_qnameOther() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qnameOther;
}
constexpr ::System::Xml::XmlSqlBinaryReader_QName const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_qnameOther() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qnameOther;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_qnameOther(::System::Xml::XmlSqlBinaryReader_QName value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___qnameOther = value;
}
constexpr ::System::Xml::XmlSqlBinaryReader_QName& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_qnameElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qnameElement;
}
constexpr ::System::Xml::XmlSqlBinaryReader_QName const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_qnameElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qnameElement;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_qnameElement(::System::Xml::XmlSqlBinaryReader_QName value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___qnameElement = value;
}
constexpr ::System::Xml::XmlNodeType& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_parentNodeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentNodeType;
}
constexpr ::System::Xml::XmlNodeType const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_parentNodeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentNodeType;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_parentNodeType(::System::Xml::XmlNodeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parentNodeType = value;
}
constexpr ::ArrayW<::System::Xml::XmlSqlBinaryReader_ElemInfo, ::Array<::System::Xml::XmlSqlBinaryReader_ElemInfo>*>& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_elementStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementStack;
}
constexpr ::ArrayW<::System::Xml::XmlSqlBinaryReader_ElemInfo, ::Array<::System::Xml::XmlSqlBinaryReader_ElemInfo>*> const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_elementStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementStack;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_elementStack(::ArrayW<::System::Xml::XmlSqlBinaryReader_ElemInfo, ::Array<::System::Xml::XmlSqlBinaryReader_ElemInfo>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elementStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_elemDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elemDepth;
}
constexpr int32_t const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_elemDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elemDepth;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_elemDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elemDepth = value;
}
constexpr ::ArrayW<::System::Xml::XmlSqlBinaryReader_AttrInfo, ::Array<::System::Xml::XmlSqlBinaryReader_AttrInfo>*>& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr ::ArrayW<::System::Xml::XmlSqlBinaryReader_AttrInfo, ::Array<::System::Xml::XmlSqlBinaryReader_AttrInfo>*> const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_attributes(::ArrayW<::System::Xml::XmlSqlBinaryReader_AttrInfo, ::Array<::System::Xml::XmlSqlBinaryReader_AttrInfo>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_attrHashTbl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrHashTbl;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_attrHashTbl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrHashTbl;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_attrHashTbl(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attrHashTbl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_attrCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrCount;
}
constexpr int32_t const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_attrCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrCount;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_attrCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attrCount = value;
}
constexpr int32_t& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_posAfterAttrs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___posAfterAttrs;
}
constexpr int32_t const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_posAfterAttrs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___posAfterAttrs;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_posAfterAttrs(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___posAfterAttrs = value;
}
constexpr bool& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_xmlspacePreserve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlspacePreserve;
}
constexpr bool const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_xmlspacePreserve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlspacePreserve;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_xmlspacePreserve(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlspacePreserve = value;
}
constexpr int32_t& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_tokLen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokLen;
}
constexpr int32_t const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_tokLen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokLen;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_tokLen(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tokLen = value;
}
constexpr int32_t& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_tokDataPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokDataPos;
}
constexpr int32_t const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_tokDataPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokDataPos;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_tokDataPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tokDataPos = value;
}
constexpr bool& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_hasTypedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasTypedValue;
}
constexpr bool const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_hasTypedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasTypedValue;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_hasTypedValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasTypedValue = value;
}
constexpr ::System::Type*& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_valueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueType;
}
constexpr ::System::Type* const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_valueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueType;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_valueType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___valueType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_stringValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stringValue;
}
constexpr ::StringW const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_stringValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stringValue;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_stringValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stringValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*>*& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_namespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*>* const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_namespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaces;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_namespaces(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___namespaces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlSqlBinaryReader_NestedBinXml*& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_prevNameInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevNameInfo;
}
constexpr ::System::Xml::XmlSqlBinaryReader_NestedBinXml* const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_prevNameInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevNameInfo;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_prevNameInfo(::System::Xml::XmlSqlBinaryReader_NestedBinXml* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prevNameInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlReader*& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_textXmlReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textXmlReader;
}
constexpr ::System::Xml::XmlReader* const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_textXmlReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textXmlReader;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_textXmlReader(::System::Xml::XmlReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___textXmlReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_closeInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeInput;
}
constexpr bool const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_closeInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeInput;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_closeInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___closeInput = value;
}
constexpr bool& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_checkCharacters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkCharacters;
}
constexpr bool const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_checkCharacters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkCharacters;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_checkCharacters(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___checkCharacters = value;
}
constexpr bool& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_ignoreWhitespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreWhitespace;
}
constexpr bool const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_ignoreWhitespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreWhitespace;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_ignoreWhitespace(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ignoreWhitespace = value;
}
constexpr bool& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_ignorePIs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignorePIs;
}
constexpr bool const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_ignorePIs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignorePIs;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_ignorePIs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ignorePIs = value;
}
constexpr bool& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_ignoreComments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreComments;
}
constexpr bool const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_ignoreComments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreComments;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_ignoreComments(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ignoreComments = value;
}
constexpr ::System::Xml::DtdProcessing& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_dtdProcessing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dtdProcessing;
}
constexpr ::System::Xml::DtdProcessing const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_dtdProcessing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dtdProcessing;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_dtdProcessing(::System::Xml::DtdProcessing value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dtdProcessing = value;
}
constexpr ::System::Xml::SecureStringHasher*& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_hasher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasher;
}
constexpr ::System::Xml::SecureStringHasher* const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_hasher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasher;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_hasher(::System::Xml::SecureStringHasher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hasher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlCharType& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_xmlCharType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlCharType;
}
constexpr ::System::Xml::XmlCharType const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_xmlCharType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlCharType;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_xmlCharType(::System::Xml::XmlCharType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlCharType = value;
}
constexpr ::System::Text::Encoding*& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_unicode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unicode;
}
constexpr ::System::Text::Encoding* const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_unicode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unicode;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_unicode(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unicode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint8_t& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr uint8_t const& System::Xml::XmlSqlBinaryReader::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void System::Xml::XmlSqlBinaryReader::__cordl_internal_set_version(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
inline void System::Xml::XmlSqlBinaryReader::setStaticF_TypeOfObject(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "TypeOfObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::XmlSqlBinaryReader::getStaticF_TypeOfObject() {
  return ::cordl_internals::getStaticField<::System::Type*, "TypeOfObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get>();
}
inline void System::Xml::XmlSqlBinaryReader::setStaticF_TypeOfString(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "TypeOfString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Xml::XmlSqlBinaryReader::getStaticF_TypeOfString() {
  return ::cordl_internals::getStaticField<::System::Type*, "TypeOfString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get>();
}
inline void System::Xml::XmlSqlBinaryReader::setStaticF_TokenTypeMap(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, "TokenTypeMap",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get>(
      std::forward<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>(value));
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::Xml::XmlSqlBinaryReader::getStaticF_TokenTypeMap() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, "TokenTypeMap",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get>();
}
inline void System::Xml::XmlSqlBinaryReader::setStaticF_XsdKatmaiTimeScaleToValueLengthMap(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "XsdKatmaiTimeScaleToValueLengthMap",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get>(std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Xml::XmlSqlBinaryReader::getStaticF_XsdKatmaiTimeScaleToValueLengthMap() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "XsdKatmaiTimeScaleToValueLengthMap",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get>();
}
inline void System::Xml::XmlSqlBinaryReader::setStaticF_ScanState2ReadState(::ArrayW<::System::Xml::ReadState, ::Array<::System::Xml::ReadState>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::ReadState, ::Array<::System::Xml::ReadState>*>, "ScanState2ReadState",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get>(
      std::forward<::ArrayW<::System::Xml::ReadState, ::Array<::System::Xml::ReadState>*>>(value));
}
inline ::ArrayW<::System::Xml::ReadState, ::Array<::System::Xml::ReadState>*> System::Xml::XmlSqlBinaryReader::getStaticF_ScanState2ReadState() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::ReadState, ::Array<::System::Xml::ReadState>*>, "ScanState2ReadState",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get>();
}
inline void System::Xml::XmlSqlBinaryReader::_ctor(::System::IO::Stream* stream, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t len, ::StringW baseUri, bool closeInput,
                                                   ::System::Xml::XmlReaderSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReaderSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, data, len, baseUri, closeInput, settings);
}
inline ::System::Xml::XmlReaderSettings* System::Xml::XmlSqlBinaryReader::get_Settings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReaderSettings*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlSqlBinaryReader::get_NodeType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlSqlBinaryReader::get_LocalName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlSqlBinaryReader::get_NamespaceURI() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlSqlBinaryReader::get_Prefix() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlSqlBinaryReader::get_Value() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlSqlBinaryReader::get_Depth() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlSqlBinaryReader::get_BaseURI() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Xml::XmlSqlBinaryReader::get_IsEmptyElement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace System::Xml::XmlSqlBinaryReader::get_XmlSpace() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlSqlBinaryReader::get_XmlLang() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Type* System::Xml::XmlSqlBinaryReader::get_ValueType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlSqlBinaryReader::get_AttributeCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlSqlBinaryReader::GetAttribute(::StringW name, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name, ns);
}
inline ::StringW System::Xml::XmlSqlBinaryReader::GetAttribute(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name);
}
inline ::StringW System::Xml::XmlSqlBinaryReader::GetAttribute(int32_t i) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, i);
}
inline bool System::Xml::XmlSqlBinaryReader::MoveToAttribute(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline void System::Xml::XmlSqlBinaryReader::MoveToAttribute(int32_t i) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline bool System::Xml::XmlSqlBinaryReader::MoveToFirstAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlSqlBinaryReader::MoveToNextAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlSqlBinaryReader::MoveToElement() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlSqlBinaryReader::get_EOF() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlSqlBinaryReader::ReadAttributeValue() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Xml::XmlSqlBinaryReader::get_NameTable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlSqlBinaryReader::LookupNamespace(::StringW prefix) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline void System::Xml::XmlSqlBinaryReader::ResolveEntity() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::ReadState System::Xml::XmlSqlBinaryReader::get_ReadState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ReadState, false>(this, ___internal_method);
}
inline bool System::Xml::XmlSqlBinaryReader::Read() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*
System::Xml::XmlSqlBinaryReader::System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "System.Xml.IXmlNamespaceResolver.GetNamespacesInScope",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceScope>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method, scope);
}
inline ::StringW System::Xml::XmlSqlBinaryReader::System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "System.Xml.IXmlNamespaceResolver.LookupPrefix",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, namespaceName);
}
inline void System::Xml::XmlSqlBinaryReader::VerifyVersion(int32_t requiredVersion, ::System::Xml::BinXmlToken token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "VerifyVersion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::BinXmlToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requiredVersion, token);
}
inline void System::Xml::XmlSqlBinaryReader::AddInitNamespace(::StringW prefix, ::StringW uri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "AddInitNamespace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, uri);
}
inline void System::Xml::XmlSqlBinaryReader::AddName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "AddName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::AddQName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "AddQName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::NameFlush() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "NameFlush",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::SkipExtn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "SkipExtn",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlSqlBinaryReader::ReadQNameRef() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ReadQNameRef",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlSqlBinaryReader::ReadNameRef() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ReadNameRef",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Xml::XmlSqlBinaryReader::FillAllowEOF() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "FillAllowEOF",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::Fill_(int32_t require) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "Fill_", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, require);
}
inline void System::Xml::XmlSqlBinaryReader::Fill(int32_t require) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "Fill", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, require);
}
inline uint8_t System::Xml::XmlSqlBinaryReader::ReadByte() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ReadByte",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline uint16_t System::Xml::XmlSqlBinaryReader::ReadUShort() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ReadUShort",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlSqlBinaryReader::ParseMB32() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ParseMB32",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlSqlBinaryReader::ParseMB32_(uint8_t b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ParseMB32_",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, b);
}
inline int32_t System::Xml::XmlSqlBinaryReader::ParseMB32(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ParseMB32", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, pos);
}
inline int32_t System::Xml::XmlSqlBinaryReader::ParseMB64() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ParseMB64",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Xml::BinXmlToken System::Xml::XmlSqlBinaryReader::PeekToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "PeekToken",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::BinXmlToken, false>(this, ___internal_method);
}
inline ::System::Xml::BinXmlToken System::Xml::XmlSqlBinaryReader::ReadToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ReadToken",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::BinXmlToken, false>(this, ___internal_method);
}
inline ::System::Xml::BinXmlToken System::Xml::XmlSqlBinaryReader::NextToken2(::System::Xml::BinXmlToken token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "NextToken2", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::BinXmlToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::BinXmlToken, false>(this, ___internal_method, token);
}
inline ::System::Xml::BinXmlToken System::Xml::XmlSqlBinaryReader::NextToken1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "NextToken1",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::BinXmlToken, false>(this, ___internal_method);
}
inline ::System::Xml::BinXmlToken System::Xml::XmlSqlBinaryReader::NextToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "NextToken",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::BinXmlToken, false>(this, ___internal_method);
}
inline ::System::Xml::BinXmlToken System::Xml::XmlSqlBinaryReader::PeekNextToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "PeekNextToken",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::BinXmlToken, false>(this, ___internal_method);
}
inline ::System::Xml::BinXmlToken System::Xml::XmlSqlBinaryReader::RescanNextToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "RescanNextToken",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::BinXmlToken, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlSqlBinaryReader::ParseText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ParseText",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlSqlBinaryReader::ScanText(::ByRef<int32_t> start) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ScanText", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, start);
}
inline ::StringW System::Xml::XmlSqlBinaryReader::GetString(int32_t pos, int32_t cch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, pos, cch);
}
inline ::StringW System::Xml::XmlSqlBinaryReader::GetStringAligned(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t cch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetStringAligned", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, data, offset, cch);
}
inline ::StringW System::Xml::XmlSqlBinaryReader::GetAttributeText(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetAttributeText",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, i);
}
inline int32_t System::Xml::XmlSqlBinaryReader::LocateAttribute(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "LocateAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, name, ns);
}
inline int32_t System::Xml::XmlSqlBinaryReader::LocateAttribute(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "LocateAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, name);
}
inline void System::Xml::XmlSqlBinaryReader::PositionOnAttribute(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "PositionOnAttribute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
inline void System::Xml::XmlSqlBinaryReader::GrowElements() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GrowElements",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::GrowAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GrowAttributes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::ClearAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ClearAttributes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::PushNamespace(::StringW prefix, ::StringW ns, bool implied) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "PushNamespace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, ns, implied);
}
inline void System::Xml::XmlSqlBinaryReader::PopNamespaces(::System::Xml::XmlSqlBinaryReader_NamespaceDecl* firstInScopeChain) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "PopNamespaces", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlSqlBinaryReader_NamespaceDecl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstInScopeChain);
}
inline void System::Xml::XmlSqlBinaryReader::GenerateImpliedXmlnsAttrs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                             "GenerateImpliedXmlnsAttrs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::XmlSqlBinaryReader::ReadInit(bool skipXmlDecl) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ReadInit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, skipXmlDecl);
}
inline void System::Xml::XmlSqlBinaryReader::ScanAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ScanAttributes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::SimpleCheckForDuplicateAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "SimpleCheckForDuplicateAttributes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::HashCheckForDuplicateAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(),
                                                                             "HashCheckForDuplicateAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlSqlBinaryReader::XmlDeclValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "XmlDeclValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlSqlBinaryReader::CDATAValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "CDATAValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::FinishCDATA() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "FinishCDATA",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::FinishEndElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "FinishEndElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::XmlSqlBinaryReader::ReadDoc() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ReadDoc",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::ImplReadData(::System::Xml::BinXmlToken tokenType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ImplReadData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::BinXmlToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tokenType);
}
inline void System::Xml::XmlSqlBinaryReader::ImplReadElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ImplReadElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::ImplReadEndElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ImplReadEndElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::ImplReadDoctype() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ImplReadDoctype",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::ImplReadPI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ImplReadPI",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::ImplReadComment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ImplReadComment",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::ImplReadCDATA() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ImplReadCDATA",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::ImplReadNest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ImplReadNest",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::ImplReadEndNest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ImplReadEndNest",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::ImplReadXmlText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ImplReadXmlText",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::UpdateFromTextReader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "UpdateFromTextReader",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::XmlSqlBinaryReader::UpdateFromTextReader(bool needUpdate) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "UpdateFromTextReader",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, needUpdate);
}
inline void System::Xml::XmlSqlBinaryReader::CheckAllowContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "CheckAllowContent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::GenerateTokenTypeMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GenerateTokenTypeMap",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Type* System::Xml::XmlSqlBinaryReader::GetValueType(::System::Xml::BinXmlToken token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetValueType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::BinXmlToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, token);
}
inline void System::Xml::XmlSqlBinaryReader::ReScanOverValue(::System::Xml::BinXmlToken token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ReScanOverValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::BinXmlToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlSqlBinaryReader::ScanOverValue(::System::Xml::BinXmlToken token, bool attr, bool checkChars) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ScanOverValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::BinXmlToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method, token, attr, checkChars);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlSqlBinaryReader::ScanOverAnyValue(::System::Xml::BinXmlToken token, bool attr, bool checkChars) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ScanOverAnyValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::BinXmlToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method, token, attr, checkChars);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlSqlBinaryReader::CheckText(bool attr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "CheckText", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method, attr);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlSqlBinaryReader::CheckTextIsWS() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "CheckTextIsWS",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method);
}
inline void System::Xml::XmlSqlBinaryReader::CheckValueTokenBounds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "CheckValueTokenBounds",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlSqlBinaryReader::GetXsdKatmaiTokenLength(::System::Xml::BinXmlToken token) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetXsdKatmaiTokenLength", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::BinXmlToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, token);
}
inline int32_t System::Xml::XmlSqlBinaryReader::XsdKatmaiTimeScaleToValueLength(uint8_t scale) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "XsdKatmaiTimeScaleToValueLength",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, scale);
}
inline int64_t System::Xml::XmlSqlBinaryReader::ValueAsLong() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ValueAsLong",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline uint64_t System::Xml::XmlSqlBinaryReader::ValueAsULong() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ValueAsULong",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline ::System::Decimal System::Xml::XmlSqlBinaryReader::ValueAsDecimal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ValueAsDecimal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(this, ___internal_method);
}
inline double_t System::Xml::XmlSqlBinaryReader::ValueAsDouble() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ValueAsDouble",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlSqlBinaryReader::ValueAsDateTimeString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ValueAsDateTimeString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlSqlBinaryReader::ValueAsString(::System::Xml::BinXmlToken token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ValueAsString", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::BinXmlToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, token);
}
inline int16_t System::Xml::XmlSqlBinaryReader::GetInt16(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetInt16", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(this, ___internal_method, pos);
}
inline uint16_t System::Xml::XmlSqlBinaryReader::GetUInt16(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetUInt16", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method, pos);
}
inline int32_t System::Xml::XmlSqlBinaryReader::GetInt32(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetInt32", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, pos);
}
inline uint32_t System::Xml::XmlSqlBinaryReader::GetUInt32(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetUInt32", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pos);
}
inline int64_t System::Xml::XmlSqlBinaryReader::GetInt64(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetInt64", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, pos);
}
inline uint64_t System::Xml::XmlSqlBinaryReader::GetUInt64(int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetUInt64", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, pos);
}
inline float_t System::Xml::XmlSqlBinaryReader::GetSingle(int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetSingle", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, offset);
}
inline double_t System::Xml::XmlSqlBinaryReader::GetDouble(int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "GetDouble", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, offset);
}
inline ::System::Exception* System::Xml::XmlSqlBinaryReader::ThrowUnexpectedToken(::System::Xml::BinXmlToken token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ThrowUnexpectedToken", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::BinXmlToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, token);
}
inline ::System::Exception* System::Xml::XmlSqlBinaryReader::ThrowXmlException(::StringW res) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ThrowXmlException", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, res);
}
inline ::System::Exception* System::Xml::XmlSqlBinaryReader::ThrowXmlException(::StringW res, ::StringW arg1, ::StringW arg2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ThrowXmlException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, res, arg1, arg2);
}
inline ::System::Exception* System::Xml::XmlSqlBinaryReader::ThrowNotSupported(::StringW res) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlSqlBinaryReader*>::get(), "ThrowNotSupported", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, res);
}
inline ::System::Xml::XmlSqlBinaryReader* System::Xml::XmlSqlBinaryReader::New_ctor(::System::IO::Stream* stream, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t len, ::StringW baseUri,
                                                                                    bool closeInput, ::System::Xml::XmlReaderSettings* settings) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlSqlBinaryReader*>(stream, data, len, baseUri, closeInput, settings));
}
/// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
constexpr System::Xml::XmlSqlBinaryReader::operator ::System::Xml::IXmlNamespaceResolver*() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
constexpr ::System::Xml::IXmlNamespaceResolver* System::Xml::XmlSqlBinaryReader::i___System__Xml__IXmlNamespaceResolver() noexcept {
  return static_cast<::System::Xml::IXmlNamespaceResolver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlSqlBinaryReader::XmlSqlBinaryReader() {}
