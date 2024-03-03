#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__UriFormat_impl.hpp"
#include "System/zzzz__UriIdnScope_impl.hpp"
#include "System/zzzz__UriKind_impl.hpp"
#include "System/zzzz__Uri_impl.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ParsingError_def.hpp"
#include "System/zzzz__UriComponents_def.hpp"
#include "System/zzzz__UriFormatException_def.hpp"
#include "System/zzzz__UriFormat_def.hpp"
#include "System/zzzz__UriHostNameType_def.hpp"
#include "System/zzzz__UriKind_def.hpp"
#include "System/zzzz__UriParser_def.hpp"
#include "System/zzzz__Uri_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::__Uri__Flags::__Uri__Flags(uint64_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::__Uri__Flags::__Uri__Flags() {}
constexpr ::System::__Uri__Flags System::__Uri__Flags::Zero{ static_cast<uint64_t>(0x0u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::SchemeNotCanonical{ static_cast<uint64_t>(0x1u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::UserNotCanonical{ static_cast<uint64_t>(0x2u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::HostNotCanonical{ static_cast<uint64_t>(0x4u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::PortNotCanonical{ static_cast<uint64_t>(0x8u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::PathNotCanonical{ static_cast<uint64_t>(0x10u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::QueryNotCanonical{ static_cast<uint64_t>(0x20u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::FragmentNotCanonical{ static_cast<uint64_t>(0x40u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::CannotDisplayCanonical{ static_cast<uint64_t>(0x7fu) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::E_UserNotCanonical{ static_cast<uint64_t>(0x80u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::E_HostNotCanonical{ static_cast<uint64_t>(0x100u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::E_PortNotCanonical{ static_cast<uint64_t>(0x200u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::E_PathNotCanonical{ static_cast<uint64_t>(0x400u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::E_QueryNotCanonical{ static_cast<uint64_t>(0x800u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::E_FragmentNotCanonical{ static_cast<uint64_t>(0x1000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::E_CannotDisplayCanonical{ static_cast<uint64_t>(0x1f80u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::ShouldBeCompressed{ static_cast<uint64_t>(0x2000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::FirstSlashAbsent{ static_cast<uint64_t>(0x4000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::BackslashInPath{ static_cast<uint64_t>(0x8000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::IndexMask{ static_cast<uint64_t>(0xffffu) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::HostTypeMask{ static_cast<uint64_t>(0x70000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::HostNotParsed{ static_cast<uint64_t>(0x0u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::IPv6HostType{ static_cast<uint64_t>(0x10000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::IPv4HostType{ static_cast<uint64_t>(0x20000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::DnsHostType{ static_cast<uint64_t>(0x30000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::UncHostType{ static_cast<uint64_t>(0x40000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::BasicHostType{ static_cast<uint64_t>(0x50000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::UnusedHostType{ static_cast<uint64_t>(0x60000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::UnknownHostType{ static_cast<uint64_t>(0x70000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::UserEscaped{ static_cast<uint64_t>(0x80000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::AuthorityFound{ static_cast<uint64_t>(0x100000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::HasUserInfo{ static_cast<uint64_t>(0x200000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::LoopbackHost{ static_cast<uint64_t>(0x400000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::NotDefaultPort{ static_cast<uint64_t>(0x800000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::UserDrivenParsing{ static_cast<uint64_t>(0x1000000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::CanonicalDnsHost{ static_cast<uint64_t>(0x2000000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::ErrorOrParsingRecursion{ static_cast<uint64_t>(0x4000000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::DosPath{ static_cast<uint64_t>(0x8000000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::UncPath{ static_cast<uint64_t>(0x10000000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::ImplicitFile{ static_cast<uint64_t>(0x20000000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::MinimalUriInfoSet{ static_cast<uint64_t>(0x40000000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::AllUriInfoSet{ static_cast<uint64_t>(0x80000000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::IdnHost{ static_cast<uint64_t>(0x100000000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::HasUnicode{ static_cast<uint64_t>(0x200000000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::HostUnicodeNormalized{ static_cast<uint64_t>(0x400000000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::RestUnicodeNormalized{ static_cast<uint64_t>(0x800000000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::UnicodeHost{ static_cast<uint64_t>(0x1000000000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::IntranetUri{ static_cast<uint64_t>(0x2000000000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::UseOrigUncdStrOffset{ static_cast<uint64_t>(0x4000000000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::UserIriCanonical{ static_cast<uint64_t>(0x8000000000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::PathIriCanonical{ static_cast<uint64_t>(0x10000000000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::QueryIriCanonical{ static_cast<uint64_t>(0x20000000000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::FragmentIriCanonical{ static_cast<uint64_t>(0x40000000000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::IriCanonical{ static_cast<uint64_t>(0x78000000000u) };
constexpr ::System::__Uri__Flags System::__Uri__Flags::CompressedSlashes{ static_cast<uint64_t>(0x100000000000u) };
// Ctor Parameters [CppParam { name: "Scheme", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "User", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "Host", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PortValue", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Path", ty: "uint16_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "Query", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Fragment", ty: "uint16_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "End", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::__Uri__Offset::__Uri__Offset(uint16_t Scheme, uint16_t User, uint16_t Host, uint16_t PortValue, uint16_t Path, uint16_t Query, uint16_t Fragment, uint16_t End) noexcept {
  this->Scheme = Scheme;
  this->User = User;
  this->Host = Host;
  this->PortValue = PortValue;
  this->Path = Path;
  this->Query = Query;
  this->Fragment = Fragment;
  this->End = End;
}
// Ctor Parameters []
constexpr ::System::__Uri__Offset::__Uri__Offset() {}
//  Writing Method size for method: ::System::__Uri__UriInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__Uri__UriInfo::*)()>(&::System::__Uri__UriInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a335f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Uri__UriInfo*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& System::__Uri__UriInfo::__cordl_internal_get_Host() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Host;
}
constexpr ::StringW const& System::__Uri__UriInfo::__cordl_internal_get_Host() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Host;
}
constexpr void System::__Uri__UriInfo::__cordl_internal_set_Host(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Host)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::__Uri__UriInfo::__cordl_internal_get_ScopeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ScopeId;
}
constexpr ::StringW const& System::__Uri__UriInfo::__cordl_internal_get_ScopeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ScopeId;
}
constexpr void System::__Uri__UriInfo::__cordl_internal_set_ScopeId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ScopeId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::__Uri__UriInfo::__cordl_internal_get_String() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___String;
}
constexpr ::StringW const& System::__Uri__UriInfo::__cordl_internal_get_String() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___String;
}
constexpr void System::__Uri__UriInfo::__cordl_internal_set_String(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___String)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::__Uri__Offset& System::__Uri__UriInfo::__cordl_internal_get_Offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Offset;
}
constexpr ::System::__Uri__Offset const& System::__Uri__UriInfo::__cordl_internal_get_Offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Offset;
}
constexpr void System::__Uri__UriInfo::__cordl_internal_set_Offset(::System::__Uri__Offset value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Offset = value;
}
constexpr ::StringW& System::__Uri__UriInfo::__cordl_internal_get_DnsSafeHost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DnsSafeHost;
}
constexpr ::StringW const& System::__Uri__UriInfo::__cordl_internal_get_DnsSafeHost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DnsSafeHost;
}
constexpr void System::__Uri__UriInfo::__cordl_internal_set_DnsSafeHost(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DnsSafeHost)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::__Uri__MoreInfo*& System::__Uri__UriInfo::__cordl_internal_get_MoreInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MoreInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::__Uri__MoreInfo*> const& System::__Uri__UriInfo::__cordl_internal_get_MoreInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MoreInfo;
}
constexpr void System::__Uri__UriInfo::__cordl_internal_set_MoreInfo(::System::__Uri__MoreInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MoreInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::__Uri__UriInfo* System::__Uri__UriInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::__Uri__UriInfo*>());
}
inline void System::__Uri__UriInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Uri__UriInfo*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::__Uri__UriInfo::__Uri__UriInfo() {}
//  Writing Method size for method: ::System::__Uri__MoreInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__Uri__MoreInfo::*)()>(&::System::__Uri__MoreInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a335fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Uri__MoreInfo*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& System::__Uri__MoreInfo::__cordl_internal_get_Path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Path;
}
constexpr ::StringW const& System::__Uri__MoreInfo::__cordl_internal_get_Path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Path;
}
constexpr void System::__Uri__MoreInfo::__cordl_internal_set_Path(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Path)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::__Uri__MoreInfo::__cordl_internal_get_Query() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Query;
}
constexpr ::StringW const& System::__Uri__MoreInfo::__cordl_internal_get_Query() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Query;
}
constexpr void System::__Uri__MoreInfo::__cordl_internal_set_Query(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Query)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::__Uri__MoreInfo::__cordl_internal_get_Fragment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Fragment;
}
constexpr ::StringW const& System::__Uri__MoreInfo::__cordl_internal_get_Fragment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Fragment;
}
constexpr void System::__Uri__MoreInfo::__cordl_internal_set_Fragment(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Fragment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::__Uri__MoreInfo::__cordl_internal_get_AbsoluteUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AbsoluteUri;
}
constexpr ::StringW const& System::__Uri__MoreInfo::__cordl_internal_get_AbsoluteUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AbsoluteUri;
}
constexpr void System::__Uri__MoreInfo::__cordl_internal_set_AbsoluteUri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AbsoluteUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::__Uri__MoreInfo::__cordl_internal_get_Hash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Hash;
}
constexpr int32_t const& System::__Uri__MoreInfo::__cordl_internal_get_Hash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Hash;
}
constexpr void System::__Uri__MoreInfo::__cordl_internal_set_Hash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Hash = value;
}
constexpr ::StringW& System::__Uri__MoreInfo::__cordl_internal_get_RemoteUrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RemoteUrl;
}
constexpr ::StringW const& System::__Uri__MoreInfo::__cordl_internal_get_RemoteUrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RemoteUrl;
}
constexpr void System::__Uri__MoreInfo::__cordl_internal_set_RemoteUrl(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RemoteUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::__Uri__MoreInfo* System::__Uri__MoreInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::__Uri__MoreInfo*>());
}
inline void System::__Uri__MoreInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Uri__MoreInfo*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::__Uri__MoreInfo::__Uri__MoreInfo() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::__Uri__Check::__Uri__Check(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::__Uri__Check::__Uri__Check() {}
constexpr ::System::__Uri__Check System::__Uri__Check::None{ static_cast<int32_t>(0x0) };
constexpr ::System::__Uri__Check System::__Uri__Check::EscapedCanonical{ static_cast<int32_t>(0x1) };
constexpr ::System::__Uri__Check System::__Uri__Check::DisplayCanonical{ static_cast<int32_t>(0x2) };
constexpr ::System::__Uri__Check System::__Uri__Check::DotSlashAttn{ static_cast<int32_t>(0x4) };
constexpr ::System::__Uri__Check System::__Uri__Check::DotSlashEscaped{ static_cast<int32_t>(0x80) };
constexpr ::System::__Uri__Check System::__Uri__Check::BackslashInPath{ static_cast<int32_t>(0x10) };
constexpr ::System::__Uri__Check System::__Uri__Check::ReservedFound{ static_cast<int32_t>(0x20) };
constexpr ::System::__Uri__Check System::__Uri__Check::NotIriCanonical{ static_cast<int32_t>(0x40) };
constexpr ::System::__Uri__Check System::__Uri__Check::FoundNonAscii{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::System::Uri.get_IsImplicitFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_IsImplicitFile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29d533c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_IsImplicitFile",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_IsUncOrDosPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_IsUncOrDosPath)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29d5348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_IsUncOrDosPath",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_IsDosPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_IsDosPath)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29d5358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_IsDosPath",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_IsUncPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_IsUncPath)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29d5364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_IsUncPath",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_HostType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::__Uri__Flags (::System::Uri::*)()>(&::System::Uri::get_HostType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29d5370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_HostType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_Syntax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::UriParser* (::System::Uri::*)()>(&::System::Uri::get_Syntax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29d537c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_Syntax",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_IsNotAbsoluteUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_IsNotAbsoluteUri)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29d5384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_IsNotAbsoluteUri",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IriParsingStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::UriParser*)>(&::System::Uri::IriParsingStatic)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x29d5394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IriParsingStatic", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriParser*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_AllowIdn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_AllowIdn)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x29d5420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_AllowIdn",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.AllowIdnStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)(::System::UriParser*, ::System::__Uri__Flags)>(&::System::Uri::AllowIdnStatic)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x29d54ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "AllowIdnStatic", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriParser*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Uri__Flags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsIntranet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)(::StringW)>(&::System::Uri::IsIntranet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29d55c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsIntranet", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_UserDrivenParsing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_UserDrivenParsing)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29d55c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_UserDrivenParsing",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.SetUserDrivenParsing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Uri::*)()>(&::System::Uri::SetUserDrivenParsing)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x29d55d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "SetUserDrivenParsing",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_SecuredPathIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::System::Uri::*)()>(&::System::Uri::get_SecuredPathIndex)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x29d55e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_SecuredPathIndex",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.NotAny
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)(::System::__Uri__Flags)>(&::System::Uri::NotAny)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29d54dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "NotAny", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Uri__Flags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.InFact
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)(::System::__Uri__Flags)>(&::System::Uri::InFact)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29d5644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "InFact", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Uri__Flags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.StaticNotAny
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::__Uri__Flags, ::System::__Uri__Flags)>(&::System::Uri::StaticNotAny)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29d55b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "StaticNotAny", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Uri__Flags>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Uri__Flags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.StaticInFact
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::__Uri__Flags, ::System::__Uri__Flags)>(&::System::Uri::StaticInFact)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29d5654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "StaticInFact", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Uri__Flags>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Uri__Flags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.EnsureUriInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::__Uri__UriInfo* (::System::Uri::*)()>(&::System::Uri::EnsureUriInfo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29d5660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "EnsureUriInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.EnsureParseRemaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Uri::*)()>(&::System::Uri::EnsureParseRemaining)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29d5c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "EnsureParseRemaining",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.EnsureHostString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Uri::*)(bool)>(&::System::Uri::EnsureHostString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29d67e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "EnsureHostString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Uri::*)(::StringW)>(&::System::Uri::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x29d6c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Uri::*)(::StringW, ::System::UriKind)>(&::System::Uri::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x29d6e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriKind>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Uri::*)(::System::Uri*, ::StringW)>(&::System::Uri::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x29d6f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CreateUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Uri::*)(::System::Uri*, ::StringW, bool)>(&::System::Uri::CreateUri)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x29d6fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CreateUri", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Uri::*)(::System::Uri*, ::System::Uri*)>(&::System::Uri::_ctor)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x29d778c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetCombinedString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ParsingError (*)(::System::Uri*, ::StringW, bool, ByRef<::StringW>)>(&::System::Uri::GetCombinedString)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x29d79b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetCombinedString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::UriFormatException* (*)(::System::ParsingError)>(&::System::Uri::GetException)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x29d87d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetException", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ParsingError>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Uri::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Uri::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x29d8970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Uri::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Uri::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29d8a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "System.Runtime.Serialization.ISerializable.GetObjectData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Uri::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Uri::GetObjectData)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x29d8a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetObjectData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_AbsolutePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_AbsolutePath)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x29d8b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_AbsolutePath",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_PrivateAbsolutePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_PrivateAbsolutePath)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x29d8c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_PrivateAbsolutePath",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_AbsoluteUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_AbsoluteUri)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x29d8cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_AbsoluteUri",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_LocalPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_LocalPath)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x29d8dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_LocalPath",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_Authority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_Authority)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29d9430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_Authority",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_HostNameType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::UriHostNameType (::System::Uri::*)()>(&::System::Uri::get_HostNameType)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x29d94ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_HostNameType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_IsDefaultPort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_IsDefaultPort)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x29d95ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_IsDefaultPort",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_IsFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_IsFile)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x29d965c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_IsFile",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_IsLoopback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_IsLoopback)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x29d9724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_IsLoopback",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_PathAndQuery
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_PathAndQuery)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x29d97ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_PathAndQuery",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_Segments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Uri::*)()>(&::System::Uri::get_Segments)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x29d987c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_Segments",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_IsUnc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_IsUnc)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29d9a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_IsUnc",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_Host
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_Host)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29d9b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_Host",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.StaticIsFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::UriParser*)>(&::System::Uri::StaticIsFile)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29d9b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "StaticIsFile", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriParser*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_InitializeLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)()>(&::System::Uri::get_InitializeLock)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x29d9b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_InitializeLock",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.InitializeUriConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Uri::InitializeUriConfig)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x29d9c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "InitializeUriConfig",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetLocalPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::GetLocalPath)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0x29d8e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetLocalPath",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_Port
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Uri::*)()>(&::System::Uri::get_Port)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x29da3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_Port",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_Query
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_Query)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x29da484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_Query",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_Fragment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_Fragment)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x29da58c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_Fragment",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_Scheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_Scheme)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x29da694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_Scheme",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_OriginalStringSwitched
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_OriginalStringSwitched)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x29da70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_OriginalStringSwitched",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_OriginalString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_OriginalString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29d7d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_OriginalString",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_DnsSafeHost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_DnsSafeHost)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x29da754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_DnsSafeHost",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_IsAbsoluteUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_IsAbsoluteUri)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29d6fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_IsAbsoluteUri",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_UserEscaped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_UserEscaped)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29da9a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_UserEscaped",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_UserInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_UserInfo)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29da9b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_UserInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsGenDelim
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::Uri::IsGenDelim)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x29daa30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsGenDelim", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckSchemeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Uri::CheckSchemeName)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x29daa7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckSchemeName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsHexDigit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::Uri::IsHexDigit)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x29dac64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsHexDigit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.FromHex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(char16_t)>(&::System::Uri::FromHex)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x29daca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "FromHex", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Uri::*)()>(&::System::Uri::GetHashCode)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x29dad50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::ToString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x29daf28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Uri*, ::System::Uri*)>(&::System::Uri::op_Equality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x29db20c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Uri*, ::System::Uri*)>(&::System::Uri::op_Inequality)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x29d7624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)(::System::Object*)>(&::System::Uri::Equals)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x29db240;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckForColonInFirstPathSegment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Uri::CheckForColonInFirstPathSegment)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x29db880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckForColonInFirstPathSegment", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.InternalEscapeString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Uri::InternalEscapeString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x29db938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "InternalEscapeString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.ParseScheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ParsingError (*)(::StringW, ByRef<::System::__Uri__Flags>, ByRef<::System::UriParser*>)>(
    &::System::Uri::ParseScheme)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x29dba18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "ParseScheme", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__Uri__Flags>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::UriParser*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.ParseMinimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::UriFormatException* (::System::Uri::*)()>(&::System::Uri::ParseMinimal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x29dc040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "ParseMinimal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.PrivateParseMinimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ParsingError (::System::Uri::*)()>(&::System::Uri::PrivateParseMinimal)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x29dc0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "PrivateParseMinimal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.PrivateParseMinimalIri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Uri::*)(::StringW, uint16_t)>(&::System::Uri::PrivateParseMinimalIri)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x29dd56c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "PrivateParseMinimalIri", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CreateUriInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Uri::*)(::System::__Uri__Flags)>(&::System::Uri::CreateUriInfo)> {
  constexpr static std::size_t size = 0x594;
  constexpr static std::size_t addrs = 0x29d5684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CreateUriInfo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Uri__Flags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CreateHostString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Uri::*)()>(&::System::Uri::CreateHostString)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x29d6840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CreateHostString",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CreateHostStringHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, uint16_t, uint16_t, ByRef<::System::__Uri__Flags>, ByRef<::StringW>)>(
    &::System::Uri::CreateHostStringHelper)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x29dda80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CreateHostStringHelper", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__Uri__Flags>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetHostViaCustomSyntax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Uri::*)()>(&::System::Uri::GetHostViaCustomSyntax)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x29dd640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetHostViaCustomSyntax",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetParts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)(::System::UriComponents, ::System::UriFormat)>(&::System::Uri::GetParts)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29d8b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetParts", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriComponents>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetEscapedParts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)(::System::UriComponents)>(&::System::Uri::GetEscapedParts)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x29de238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetEscapedParts", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriComponents>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetUnescapedParts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)(::System::UriComponents, ::System::UriFormat)>(&::System::Uri::GetUnescapedParts)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x29da2e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetUnescapedParts", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriComponents>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.ReCreateParts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)(::System::UriComponents, uint16_t, ::System::UriFormat)>(
    &::System::Uri::ReCreateParts)> {
  constexpr static std::size_t size = 0xc8c;
  constexpr static std::size_t addrs = 0x29de8b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "ReCreateParts", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriComponents>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetUriPartsFromUserString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)(::System::UriComponents)>(&::System::Uri::GetUriPartsFromUserString)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x29de300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetUriPartsFromUserString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriComponents>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.ParseRemaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Uri::*)()>(&::System::Uri::ParseRemaining)> {
  constexpr static std::size_t size = 0xbb8;
  constexpr static std::size_t addrs = 0x29d5c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "ParseRemaining",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.ParseSchemeCheckImplicitFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::cordl_internals::Ptr<char16_t>, uint16_t, ByRef<::System::ParsingError>, ByRef<::System::__Uri__Flags>,
                                                                                               ByRef<::System::UriParser*>)>(&::System::Uri::ParseSchemeCheckImplicitFile)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x29dbaf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "ParseSchemeCheckImplicitFile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ParsingError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__Uri__Flags>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::UriParser*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckKnownSchemes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::cordl_internals::Ptr<int64_t>, uint16_t, ByRef<::System::UriParser*>)>(
    &::System::Uri::CheckKnownSchemes)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x29dfc48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckKnownSchemes", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int64_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::UriParser*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckSchemeSyntax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ParsingError (*)(::cordl_internals::Ptr<char16_t>, uint16_t, ByRef<::System::UriParser*>)>(
    &::System::Uri::CheckSchemeSyntax)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x29d7c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckSchemeSyntax", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::UriParser*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckAuthorityHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::System::Uri::*)(::cordl_internals::Ptr<char16_t>, uint16_t, uint16_t, ByRef<::System::ParsingError>,
                                                                                                              ByRef<::System::__Uri__Flags>, ::System::UriParser*, ByRef<::StringW>)>(
    &::System::Uri::CheckAuthorityHelper)> {
  constexpr static std::size_t size = 0xe04;
  constexpr static std::size_t addrs = 0x29dc768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckAuthorityHelper", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ParsingError>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__Uri__Flags>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriParser*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckAuthorityHelperHandleDnsIri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Uri::*)(::cordl_internals::Ptr<char16_t>, uint16_t, int32_t, int32_t, bool, bool, ::System::UriParser*, ::StringW, ByRef<::System::__Uri__Flags>, ByRef<bool>,
                                        ByRef<::StringW>, ByRef<::System::ParsingError>)>(&::System::Uri::CheckAuthorityHelperHandleDnsIri)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x29e0148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckAuthorityHelperHandleDnsIri", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 12>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriParser*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__Uri__Flags>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ParsingError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckAuthorityHelperHandleAnyHostIri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Uri::*)(::cordl_internals::Ptr<char16_t>, int32_t, int32_t, bool, bool, ::System::UriParser*,
                                                                                                          ByRef<::System::__Uri__Flags>, ByRef<::StringW>, ByRef<::System::ParsingError>)>(
    &::System::Uri::CheckAuthorityHelperHandleAnyHostIri)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x29e0498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckAuthorityHelperHandleAnyHostIri", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriParser*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__Uri__Flags>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ParsingError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.FindEndOfComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Uri::*)(::StringW, ByRef<uint16_t>, uint16_t, char16_t)>(&::System::Uri::FindEndOfComponent)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x29dfba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "FindEndOfComponent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.FindEndOfComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Uri::*)(::cordl_internals::Ptr<char16_t>, ByRef<uint16_t>, uint16_t, char16_t)>(
    &::System::Uri::FindEndOfComponent)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x29e08d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "FindEndOfComponent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckCanonical
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::__Uri__Check (::System::Uri::*)(::cordl_internals::Ptr<char16_t>, ByRef<uint16_t>, uint16_t, char16_t)>(
    &::System::Uri::CheckCanonical)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x29ddc64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckCanonical", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetCanonicalPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<char16_t, ::Array<char16_t>*> (::System::Uri::*)(::ArrayW<char16_t, ::Array<char16_t>*>, ByRef<int32_t>, ::System::UriFormat)>(&::System::Uri::GetCanonicalPath)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x29df53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetCanonicalPath", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.UnescapeOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<char16_t>, int32_t, ByRef<int32_t>, char16_t, char16_t, char16_t)>(
    &::System::Uri::UnescapeOnly)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x29e0968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "UnescapeOnly", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.Compress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<char16_t, ::Array<char16_t>*> (*)(::ArrayW<char16_t, ::Array<char16_t>*>, uint16_t, ByRef<int32_t>, ::System::UriParser*)>(&::System::Uri::Compress)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x29d9e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "Compress", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriParser*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CalculateCaseInsensitiveHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::System::Uri::CalculateCaseInsensitiveHashCode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x29dae88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CalculateCaseInsensitiveHashCode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CombineUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Uri*, ::StringW, ::System::UriFormat)>(&::System::Uri::CombineUri)> {
  constexpr static std::size_t size = 0xa74;
  constexpr static std::size_t addrs = 0x29d7d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CombineUri", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_HasAuthority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_HasAuthority)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29e0b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_HasAuthority",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsLWS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::Uri::IsLWS)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x29dc728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsLWS", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsAsciiLetter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::Uri::IsAsciiLetter)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x29dabbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsAsciiLetter", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsAsciiLetterOrDigit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::Uri::IsAsciiLetterOrDigit)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29dabe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsAsciiLetterOrDigit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsBidiControlCharacter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::Uri::IsBidiControlCharacter)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x29e0b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsBidiControlCharacter", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.StripBidiControlCharacter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::cordl_internals::Ptr<char16_t>, int32_t, int32_t)>(&::System::Uri::StripBidiControlCharacter)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x29e075c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "StripBidiControlCharacter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CreateThis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Uri::*)(::StringW, bool, ::System::UriKind)>(&::System::Uri::CreateThis)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x29d6cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CreateThis", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriKind>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.InitializeUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Uri::*)(::System::ParsingError, ::System::UriKind, ByRef<::System::UriFormatException*>)>(
    &::System::Uri::InitializeUri)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x29e0bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "InitializeUri", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ParsingError>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriKind>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::UriFormatException*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckForConfigLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)(::StringW)>(&::System::Uri::CheckForConfigLoad)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x29e10ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckForConfigLoad", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckForUnicode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)(::StringW)>(&::System::Uri::CheckForUnicode)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x29e1158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckForUnicode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckForEscapedUnreserved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)(::StringW)>(&::System::Uri::CheckForEscapedUnreserved)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x29e1270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckForEscapedUnreserved", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.TryCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::System::UriKind, ByRef<::System::Uri*>)>(&::System::Uri::TryCreate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x29db7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "TryCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriKind>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Uri*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.TryCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Uri*, ::StringW, ByRef<::System::Uri*>)>(&::System::Uri::TryCreate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x29e1690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "TryCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Uri*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.TryCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Uri*, ::System::Uri*, ByRef<::System::Uri*>)>(&::System::Uri::TryCreate)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x29e1760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "TryCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Uri*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetComponents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)(::System::UriComponents, ::System::UriFormat)>(&::System::Uri::GetComponents)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x29de05c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetComponents", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriComponents>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsWellFormedOriginalString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::IsWellFormedOriginalString)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x29e1af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsWellFormedOriginalString",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsWellFormedUriString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::System::UriKind)>(&::System::Uri::IsWellFormedUriString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x29e1fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsWellFormedUriString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriKind>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.InternalIsWellFormedOriginalString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::InternalIsWellFormedOriginalString)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x29e1b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "InternalIsWellFormedOriginalString",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.UnescapeDataString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Uri::UnescapeDataString)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x29e2058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "UnescapeDataString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.EscapeUnescapeIri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)(::StringW, int32_t, int32_t, ::System::UriComponents)>(
    &::System::Uri::EscapeUnescapeIri)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x29dfbf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "EscapeUnescapeIri", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriComponents>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Uri::*)(::System::__Uri__Flags, ::System::UriParser*, ::StringW)>(&::System::Uri::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x29e2200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Uri__Flags>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriParser*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CreateHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (*)(::StringW, bool, ::System::UriKind, ByRef<::System::UriFormatException*>)>(
    &::System::Uri::CreateHelper)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x29e141c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CreateHelper", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriKind>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::UriFormatException*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.ResolveHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Uri* (*)(::System::Uri*, ::System::Uri*, ByRef<::StringW>, ByRef<bool>, ByRef<::System::UriFormatException*>)>(&::System::Uri::ResolveHelper)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x29d7168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "ResolveHelper", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::UriFormatException*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetRelativeSerializationString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)(::System::UriFormat)>(&::System::Uri::GetRelativeSerializationString)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x29e18d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetRelativeSerializationString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetComponentsHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Uri::*)(::System::UriComponents, ::System::UriFormat)>(&::System::Uri::GetComponentsHelper)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x29daff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetComponentsHelper", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriComponents>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsBaseOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)(::System::Uri*)>(&::System::Uri::IsBaseOf)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x29e2240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsBaseOf", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsBaseOfHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Uri::*)(::System::Uri*)>(&::System::Uri::IsBaseOfHelper)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x29e22f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsBaseOfHelper", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CreateThisFromUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Uri::*)(::System::Uri*)>(&::System::Uri::CreateThisFromUri)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x29d766c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CreateThisFromUri", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Uri::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Uri::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
constexpr ::StringW& System::Uri::__cordl_internal_get_m_String() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_String;
}
constexpr ::StringW const& System::Uri::__cordl_internal_get_m_String() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_String;
}
constexpr void System::Uri::__cordl_internal_set_m_String(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_String)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Uri::__cordl_internal_get_m_originalUnicodeString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_originalUnicodeString;
}
constexpr ::StringW const& System::Uri::__cordl_internal_get_m_originalUnicodeString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_originalUnicodeString;
}
constexpr void System::Uri::__cordl_internal_set_m_originalUnicodeString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_originalUnicodeString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::UriParser*& System::Uri::__cordl_internal_get_m_Syntax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Syntax;
}
constexpr ::cordl_internals::to_const_pointer<::System::UriParser*> const& System::Uri::__cordl_internal_get_m_Syntax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Syntax;
}
constexpr void System::Uri::__cordl_internal_set_m_Syntax(::System::UriParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Syntax)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Uri::__cordl_internal_get_m_DnsSafeHost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DnsSafeHost;
}
constexpr ::StringW const& System::Uri::__cordl_internal_get_m_DnsSafeHost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DnsSafeHost;
}
constexpr void System::Uri::__cordl_internal_set_m_DnsSafeHost(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DnsSafeHost)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::__Uri__Flags& System::Uri::__cordl_internal_get_m_Flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr ::System::__Uri__Flags const& System::Uri::__cordl_internal_get_m_Flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr void System::Uri::__cordl_internal_set_m_Flags(::System::__Uri__Flags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Flags = value;
}
constexpr ::System::__Uri__UriInfo*& System::Uri::__cordl_internal_get_m_Info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Info;
}
constexpr ::cordl_internals::to_const_pointer<::System::__Uri__UriInfo*> const& System::Uri::__cordl_internal_get_m_Info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Info;
}
constexpr void System::Uri::__cordl_internal_set_m_Info(::System::__Uri__UriInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Info)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Uri::__cordl_internal_get_m_iriParsing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_iriParsing;
}
constexpr bool const& System::Uri::__cordl_internal_get_m_iriParsing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_iriParsing;
}
constexpr void System::Uri::__cordl_internal_set_m_iriParsing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_iriParsing = value;
}
inline void System::Uri::setStaticF_UriSchemeFile(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeFile", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeFile() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeFile", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline void System::Uri::setStaticF_UriSchemeFtp(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeFtp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeFtp() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeFtp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline void System::Uri::setStaticF_UriSchemeGopher(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeGopher", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeGopher() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeGopher", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline void System::Uri::setStaticF_UriSchemeHttp(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeHttp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeHttp() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeHttp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline void System::Uri::setStaticF_UriSchemeHttps(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeHttps", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeHttps() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeHttps", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline void System::Uri::setStaticF_UriSchemeWs(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeWs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeWs() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeWs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline void System::Uri::setStaticF_UriSchemeWss(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeWss", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeWss() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeWss", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline void System::Uri::setStaticF_UriSchemeMailto(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeMailto", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeMailto() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeMailto", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline void System::Uri::setStaticF_UriSchemeNews(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeNews", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeNews() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeNews", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline void System::Uri::setStaticF_UriSchemeNntp(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeNntp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeNntp() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeNntp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline void System::Uri::setStaticF_UriSchemeNetTcp(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeNetTcp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeNetTcp() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeNetTcp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline void System::Uri::setStaticF_UriSchemeNetPipe(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeNetPipe", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeNetPipe() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeNetPipe", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline void System::Uri::setStaticF_SchemeDelimiter(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "SchemeDelimiter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_SchemeDelimiter() {
  return ::cordl_internals::getStaticField<::StringW, "SchemeDelimiter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline void System::Uri::setStaticF_s_ConfigInitialized(bool value) {
  ::cordl_internals::setStaticField<bool, "s_ConfigInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(std::forward<bool>(value));
}
inline bool System::Uri::getStaticF_s_ConfigInitialized() {
  return ::cordl_internals::getStaticField<bool, "s_ConfigInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline void System::Uri::setStaticF_s_ConfigInitializing(bool value) {
  ::cordl_internals::setStaticField<bool, "s_ConfigInitializing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(std::forward<bool>(value));
}
inline bool System::Uri::getStaticF_s_ConfigInitializing() {
  return ::cordl_internals::getStaticField<bool, "s_ConfigInitializing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline void System::Uri::setStaticF_s_IdnScope(::System::UriIdnScope value) {
  ::cordl_internals::setStaticField<::System::UriIdnScope, "s_IdnScope", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(std::forward<::System::UriIdnScope>(value));
}
inline ::System::UriIdnScope System::Uri::getStaticF_s_IdnScope() {
  return ::cordl_internals::getStaticField<::System::UriIdnScope, "s_IdnScope", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline void System::Uri::setStaticF_s_IriParsing(bool value) {
  ::cordl_internals::setStaticField<bool, "s_IriParsing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(std::forward<bool>(value));
}
inline bool System::Uri::getStaticF_s_IriParsing() {
  return ::cordl_internals::getStaticField<bool, "s_IriParsing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline void System::Uri::setStaticF_useDotNetRelativeOrAbsolute(bool value) {
  ::cordl_internals::setStaticField<bool, "useDotNetRelativeOrAbsolute", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(std::forward<bool>(value));
}
inline bool System::Uri::getStaticF_useDotNetRelativeOrAbsolute() {
  return ::cordl_internals::getStaticField<bool, "useDotNetRelativeOrAbsolute", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline void System::Uri::setStaticF_IsWindowsFileSystem(bool value) {
  ::cordl_internals::setStaticField<bool, "IsWindowsFileSystem", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(std::forward<bool>(value));
}
inline bool System::Uri::getStaticF_IsWindowsFileSystem() {
  return ::cordl_internals::getStaticField<bool, "IsWindowsFileSystem", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline void System::Uri::setStaticF_s_initLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_initLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Uri::getStaticF_s_initLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_initLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline void System::Uri::setStaticF_HexLowerChars(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "HexLowerChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(
      std::forward<::ArrayW<char16_t, ::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::Uri::getStaticF_HexLowerChars() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "HexLowerChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline void System::Uri::setStaticF__WSchars(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "_WSchars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>(
      std::forward<::ArrayW<char16_t, ::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::Uri::getStaticF__WSchars() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "_WSchars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get>();
}
inline bool System::Uri::get_IsImplicitFile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_IsImplicitFile",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Uri::get_IsUncOrDosPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_IsUncOrDosPath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Uri::get_IsDosPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_IsDosPath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Uri::get_IsUncPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_IsUncPath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::__Uri__Flags System::Uri::get_HostType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_HostType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::__Uri__Flags, false>(this, ___internal_method);
}
inline ::System::UriParser* System::Uri::get_Syntax() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_Syntax",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::UriParser*, false>(this, ___internal_method);
}
inline bool System::Uri::get_IsNotAbsoluteUri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_IsNotAbsoluteUri",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Uri::IriParsingStatic(::System::UriParser* syntax) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IriParsingStatic", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriParser*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, syntax);
}
inline bool System::Uri::get_AllowIdn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_AllowIdn",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Uri::AllowIdnStatic(::System::UriParser* syntax, ::System::__Uri__Flags flags) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "AllowIdnStatic", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriParser*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Uri__Flags>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, syntax, flags);
}
inline bool System::Uri::IsIntranet(::StringW schemeHost) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsIntranet", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, schemeHost);
}
inline bool System::Uri::get_UserDrivenParsing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_UserDrivenParsing",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Uri::SetUserDrivenParsing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "SetUserDrivenParsing",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint16_t System::Uri::get_SecuredPathIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_SecuredPathIndex",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method);
}
inline bool System::Uri::NotAny(::System::__Uri__Flags flags) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "NotAny", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Uri__Flags>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, flags);
}
inline bool System::Uri::InFact(::System::__Uri__Flags flags) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "InFact", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Uri__Flags>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, flags);
}
inline bool System::Uri::StaticNotAny(::System::__Uri__Flags allFlags, ::System::__Uri__Flags checkFlags) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "StaticNotAny", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Uri__Flags>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Uri__Flags>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, allFlags, checkFlags);
}
inline bool System::Uri::StaticInFact(::System::__Uri__Flags allFlags, ::System::__Uri__Flags checkFlags) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "StaticInFact", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Uri__Flags>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Uri__Flags>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, allFlags, checkFlags);
}
inline ::System::__Uri__UriInfo* System::Uri::EnsureUriInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "EnsureUriInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::__Uri__UriInfo*, false>(this, ___internal_method);
}
inline void System::Uri::EnsureParseRemaining() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "EnsureParseRemaining",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Uri::EnsureHostString(bool allowDnsOptimization) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "EnsureHostString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allowDnsOptimization);
}
inline ::System::Uri* System::Uri::New_ctor(::StringW uriString) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Uri*>(uriString));
}
inline void System::Uri::_ctor(::StringW uriString) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uriString);
}
inline ::System::Uri* System::Uri::New_ctor(::StringW uriString, ::System::UriKind uriKind) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Uri*>(uriString, uriKind));
}
inline void System::Uri::_ctor(::StringW uriString, ::System::UriKind uriKind) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriKind>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uriString, uriKind);
}
inline ::System::Uri* System::Uri::New_ctor(::System::Uri* baseUri, ::StringW relativeUri) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Uri*>(baseUri, relativeUri));
}
inline void System::Uri::_ctor(::System::Uri* baseUri, ::StringW relativeUri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseUri, relativeUri);
}
inline void System::Uri::CreateUri(::System::Uri* baseUri, ::StringW relativeUri, bool dontEscape) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CreateUri", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseUri, relativeUri, dontEscape);
}
inline ::System::Uri* System::Uri::New_ctor(::System::Uri* baseUri, ::System::Uri* relativeUri) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Uri*>(baseUri, relativeUri));
}
inline void System::Uri::_ctor(::System::Uri* baseUri, ::System::Uri* relativeUri) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseUri, relativeUri);
}
inline ::System::ParsingError System::Uri::GetCombinedString(::System::Uri* baseUri, ::StringW relativeStr, bool dontEscape, ByRef<::StringW> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetCombinedString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ParsingError, false>(nullptr, ___internal_method, baseUri, relativeStr, dontEscape, result);
}
inline ::System::UriFormatException* System::Uri::GetException(::System::ParsingError err) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetException", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ParsingError>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::UriFormatException*, false>(nullptr, ___internal_method, err);
}
inline ::System::Uri* System::Uri::New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Uri*>(serializationInfo, streamingContext));
}
inline void System::Uri::_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Uri::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                                  ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "System.Runtime.Serialization.ISerializable.GetObjectData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Uri::GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetObjectData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationInfo, streamingContext);
}
inline ::StringW System::Uri::get_AbsolutePath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_AbsolutePath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Uri::get_PrivateAbsolutePath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_PrivateAbsolutePath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Uri::get_AbsoluteUri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_AbsoluteUri",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Uri::get_LocalPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_LocalPath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Uri::get_Authority() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_Authority",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::UriHostNameType System::Uri::get_HostNameType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_HostNameType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::UriHostNameType, false>(this, ___internal_method);
}
inline bool System::Uri::get_IsDefaultPort() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_IsDefaultPort",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Uri::get_IsFile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_IsFile",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Uri::get_IsLoopback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_IsLoopback",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Uri::get_PathAndQuery() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_PathAndQuery",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Uri::get_Segments() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_Segments",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline bool System::Uri::get_IsUnc() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_IsUnc",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Uri::get_Host() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_Host",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Uri::StaticIsFile(::System::UriParser* syntax) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "StaticIsFile", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriParser*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, syntax);
}
inline ::System::Object* System::Uri::get_InitializeLock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_InitializeLock",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method);
}
inline void System::Uri::InitializeUriConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "InitializeUriConfig",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::StringW System::Uri::GetLocalPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetLocalPath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Uri::get_Port() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_Port",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Uri::get_Query() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_Query",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Uri::get_Fragment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_Fragment",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Uri::get_Scheme() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_Scheme",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Uri::get_OriginalStringSwitched() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_OriginalStringSwitched",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Uri::get_OriginalString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_OriginalString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Uri::get_DnsSafeHost() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_DnsSafeHost",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Uri::get_IsAbsoluteUri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_IsAbsoluteUri",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Uri::get_UserEscaped() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_UserEscaped",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Uri::get_UserInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_UserInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Uri::IsGenDelim(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsGenDelim", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
inline bool System::Uri::CheckSchemeName(::StringW schemeName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckSchemeName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, schemeName);
}
inline bool System::Uri::IsHexDigit(char16_t character) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsHexDigit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, character);
}
inline int32_t System::Uri::FromHex(char16_t digit) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "FromHex", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, digit);
}
inline int32_t System::Uri::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Uri::ToString() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Uri::op_Equality(::System::Uri* uri1, ::System::Uri* uri2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, uri1, uri2);
}
inline bool System::Uri::op_Inequality(::System::Uri* uri1, ::System::Uri* uri2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, uri1, uri2);
}
inline bool System::Uri::Equals(::System::Object* comparand) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, comparand);
}
inline bool System::Uri::CheckForColonInFirstPathSegment(::StringW uriString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckForColonInFirstPathSegment", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, uriString);
}
inline ::StringW System::Uri::InternalEscapeString(::StringW rawString) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "InternalEscapeString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, rawString);
}
inline ::System::ParsingError System::Uri::ParseScheme(::StringW uriString, ByRef<::System::__Uri__Flags> flags, ByRef<::System::UriParser*> syntax) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "ParseScheme", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__Uri__Flags>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::UriParser*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ParsingError, false>(nullptr, ___internal_method, uriString, flags, syntax);
}
inline ::System::UriFormatException* System::Uri::ParseMinimal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "ParseMinimal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::UriFormatException*, false>(this, ___internal_method);
}
inline ::System::ParsingError System::Uri::PrivateParseMinimal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "PrivateParseMinimal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ParsingError, false>(this, ___internal_method);
}
inline void System::Uri::PrivateParseMinimalIri(::StringW newHost, uint16_t idx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "PrivateParseMinimalIri", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newHost, idx);
}
inline void System::Uri::CreateUriInfo(::System::__Uri__Flags cF) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CreateUriInfo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Uri__Flags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cF);
}
inline void System::Uri::CreateHostString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CreateHostString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Uri::CreateHostStringHelper(::StringW str, uint16_t idx, uint16_t end, ByRef<::System::__Uri__Flags> flags, ByRef<::StringW> scopeId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CreateHostStringHelper", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__Uri__Flags>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, str, idx, end, flags, scopeId);
}
inline void System::Uri::GetHostViaCustomSyntax() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetHostViaCustomSyntax",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Uri::GetParts(::System::UriComponents uriParts, ::System::UriFormat formatAs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetParts", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriComponents>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, uriParts, formatAs);
}
inline ::StringW System::Uri::GetEscapedParts(::System::UriComponents uriParts) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetEscapedParts", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriComponents>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, uriParts);
}
inline ::StringW System::Uri::GetUnescapedParts(::System::UriComponents uriParts, ::System::UriFormat formatAs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetUnescapedParts", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriComponents>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, uriParts, formatAs);
}
inline ::StringW System::Uri::ReCreateParts(::System::UriComponents parts, uint16_t nonCanonical, ::System::UriFormat formatAs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "ReCreateParts", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriComponents>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, parts, nonCanonical, formatAs);
}
inline ::StringW System::Uri::GetUriPartsFromUserString(::System::UriComponents uriParts) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetUriPartsFromUserString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriComponents>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, uriParts);
}
inline void System::Uri::ParseRemaining() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "ParseRemaining",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint16_t System::Uri::ParseSchemeCheckImplicitFile(::cordl_internals::Ptr<char16_t> uriString, uint16_t length, ByRef<::System::ParsingError> err, ByRef<::System::__Uri__Flags> flags,
                                                          ByRef<::System::UriParser*> syntax) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "ParseSchemeCheckImplicitFile", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ParsingError>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__Uri__Flags>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::UriParser*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, uriString, length, err, flags, syntax);
}
inline bool System::Uri::CheckKnownSchemes(::cordl_internals::Ptr<int64_t> lptr, uint16_t nChars, ByRef<::System::UriParser*> syntax) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckKnownSchemes", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int64_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::UriParser*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lptr, nChars, syntax);
}
inline ::System::ParsingError System::Uri::CheckSchemeSyntax(::cordl_internals::Ptr<char16_t> ptr, uint16_t length, ByRef<::System::UriParser*> syntax) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckSchemeSyntax", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::UriParser*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ParsingError, false>(nullptr, ___internal_method, ptr, length, syntax);
}
inline uint16_t System::Uri::CheckAuthorityHelper(::cordl_internals::Ptr<char16_t> pString, uint16_t idx, uint16_t length, ByRef<::System::ParsingError> err, ByRef<::System::__Uri__Flags> flags,
                                                  ::System::UriParser* syntax, ByRef<::StringW> newHost) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckAuthorityHelper", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ParsingError>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__Uri__Flags>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriParser*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method, pString, idx, length, err, flags, syntax, newHost);
}
inline void System::Uri::CheckAuthorityHelperHandleDnsIri(::cordl_internals::Ptr<char16_t> pString, uint16_t start, int32_t end, int32_t startInput, bool iriParsing, bool hasUnicode,
                                                          ::System::UriParser* syntax, ::StringW userInfoString, ByRef<::System::__Uri__Flags> flags, ByRef<bool> justNormalized,
                                                          ByRef<::StringW> newHost, ByRef<::System::ParsingError> err) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckAuthorityHelperHandleDnsIri", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 12>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriParser*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__Uri__Flags>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ParsingError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pString, start, end, startInput, iriParsing, hasUnicode, syntax, userInfoString, flags, justNormalized, newHost,
                                                          err);
}
inline void System::Uri::CheckAuthorityHelperHandleAnyHostIri(::cordl_internals::Ptr<char16_t> pString, int32_t startInput, int32_t end, bool iriParsing, bool hasUnicode, ::System::UriParser* syntax,
                                                              ByRef<::System::__Uri__Flags> flags, ByRef<::StringW> newHost, ByRef<::System::ParsingError> err) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckAuthorityHelperHandleAnyHostIri", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriParser*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__Uri__Flags>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ParsingError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pString, startInput, end, iriParsing, hasUnicode, syntax, flags, newHost, err);
}
inline void System::Uri::FindEndOfComponent(::StringW input, ByRef<uint16_t> idx, uint16_t end, char16_t delim) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "FindEndOfComponent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, idx, end, delim);
}
inline void System::Uri::FindEndOfComponent(::cordl_internals::Ptr<char16_t> str, ByRef<uint16_t> idx, uint16_t end, char16_t delim) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "FindEndOfComponent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, str, idx, end, delim);
}
inline ::System::__Uri__Check System::Uri::CheckCanonical(::cordl_internals::Ptr<char16_t> str, ByRef<uint16_t> idx, uint16_t end, char16_t delim) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckCanonical", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::__Uri__Check, false>(this, ___internal_method, str, idx, end, delim);
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::Uri::GetCanonicalPath(::ArrayW<char16_t, ::Array<char16_t>*> dest, ByRef<int32_t> pos, ::System::UriFormat formatAs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetCanonicalPath", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t, ::Array<char16_t>*>, false>(this, ___internal_method, dest, pos, formatAs);
}
inline void System::Uri::UnescapeOnly(::cordl_internals::Ptr<char16_t> pch, int32_t start, ByRef<int32_t> end, char16_t ch1, char16_t ch2, char16_t ch3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "UnescapeOnly", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pch, start, end, ch1, ch2, ch3);
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::Uri::Compress(::ArrayW<char16_t, ::Array<char16_t>*> dest, uint16_t start, ByRef<int32_t> destLength, ::System::UriParser* syntax) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "Compress", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriParser*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t, ::Array<char16_t>*>, false>(nullptr, ___internal_method, dest, start, destLength, syntax);
}
inline int32_t System::Uri::CalculateCaseInsensitiveHashCode(::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CalculateCaseInsensitiveHashCode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text);
}
inline ::StringW System::Uri::CombineUri(::System::Uri* basePart, ::StringW relativePart, ::System::UriFormat uriFormat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CombineUri", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, basePart, relativePart, uriFormat);
}
inline bool System::Uri::get_HasAuthority() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "get_HasAuthority",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Uri::IsLWS(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsLWS", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
inline bool System::Uri::IsAsciiLetter(char16_t character) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsAsciiLetter", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, character);
}
inline bool System::Uri::IsAsciiLetterOrDigit(char16_t character) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsAsciiLetterOrDigit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, character);
}
inline bool System::Uri::IsBidiControlCharacter(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsBidiControlCharacter", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
inline ::StringW System::Uri::StripBidiControlCharacter(::cordl_internals::Ptr<char16_t> strToClean, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "StripBidiControlCharacter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, strToClean, start, length);
}
inline void System::Uri::CreateThis(::StringW uri, bool dontEscape, ::System::UriKind uriKind) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CreateThis", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriKind>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uri, dontEscape, uriKind);
}
inline void System::Uri::InitializeUri(::System::ParsingError err, ::System::UriKind uriKind, ByRef<::System::UriFormatException*> e) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "InitializeUri", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ParsingError>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriKind>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::UriFormatException*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, err, uriKind, e);
}
inline bool System::Uri::CheckForConfigLoad(::StringW data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckForConfigLoad", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data);
}
inline bool System::Uri::CheckForUnicode(::StringW data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckForUnicode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data);
}
inline bool System::Uri::CheckForEscapedUnreserved(::StringW data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CheckForEscapedUnreserved", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data);
}
inline bool System::Uri::TryCreate(::StringW uriString, ::System::UriKind uriKind, ByRef<::System::Uri*> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "TryCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriKind>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Uri*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, uriString, uriKind, result);
}
inline bool System::Uri::TryCreate(::System::Uri* baseUri, ::StringW relativeUri, ByRef<::System::Uri*> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "TryCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Uri*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, baseUri, relativeUri, result);
}
inline bool System::Uri::TryCreate(::System::Uri* baseUri, ::System::Uri* relativeUri, ByRef<::System::Uri*> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "TryCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Uri*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, baseUri, relativeUri, result);
}
inline ::StringW System::Uri::GetComponents(::System::UriComponents components, ::System::UriFormat format) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetComponents", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriComponents>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, components, format);
}
inline bool System::Uri::IsWellFormedOriginalString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsWellFormedOriginalString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Uri::IsWellFormedUriString(::StringW uriString, ::System::UriKind uriKind) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsWellFormedUriString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriKind>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, uriString, uriKind);
}
inline bool System::Uri::InternalIsWellFormedOriginalString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "InternalIsWellFormedOriginalString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Uri::UnescapeDataString(::StringW stringToUnescape) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "UnescapeDataString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, stringToUnescape);
}
inline ::StringW System::Uri::EscapeUnescapeIri(::StringW input, int32_t start, int32_t end, ::System::UriComponents component) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "EscapeUnescapeIri", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriComponents>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, input, start, end, component);
}
inline ::System::Uri* System::Uri::New_ctor(::System::__Uri__Flags flags, ::System::UriParser* uriParser, ::StringW uri) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Uri*>(flags, uriParser, uri));
}
inline void System::Uri::_ctor(::System::__Uri__Flags flags, ::System::UriParser* uriParser, ::StringW uri) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Uri__Flags>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriParser*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flags, uriParser, uri);
}
inline ::System::Uri* System::Uri::CreateHelper(::StringW uriString, bool dontEscape, ::System::UriKind uriKind, ByRef<::System::UriFormatException*> e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CreateHelper", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriKind>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::UriFormatException*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(nullptr, ___internal_method, uriString, dontEscape, uriKind, e);
}
inline ::System::Uri* System::Uri::ResolveHelper(::System::Uri* baseUri, ::System::Uri* relativeUri, ByRef<::StringW> newUriString, ByRef<bool> userEscaped, ByRef<::System::UriFormatException*> e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "ResolveHelper", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::UriFormatException*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(nullptr, ___internal_method, baseUri, relativeUri, newUriString, userEscaped, e);
}
inline ::StringW System::Uri::GetRelativeSerializationString(::System::UriFormat format) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetRelativeSerializationString", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, format);
}
inline ::StringW System::Uri::GetComponentsHelper(::System::UriComponents uriComponents, ::System::UriFormat uriFormat) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "GetComponentsHelper", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriComponents>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UriFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, uriComponents, uriFormat);
}
inline bool System::Uri::IsBaseOf(::System::Uri* uri) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsBaseOf", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, uri);
}
inline bool System::Uri::IsBaseOfHelper(::System::Uri* uriLink) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "IsBaseOfHelper", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, uriLink);
}
inline void System::Uri::CreateThisFromUri(::System::Uri* otherUri) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Uri*>::get(), "CreateThisFromUri", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, otherUri);
}
// Ctor Parameters []
constexpr ::System::Uri::Uri() {}
constexpr ::System::UriKind System::Uri::DotNetRelativeOrAbsolute{ static_cast<int32_t>(0x12c) };
constexpr ::System::UriFormat System::Uri::V1ToStringUnescape{ static_cast<int32_t>(0x7fff) };
