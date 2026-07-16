#pragma once
// IWYU pragma private; include "System/Uri.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__UriFormat_impl.hpp"
#include "System/zzzz__UriIdnScope_impl.hpp"
#include "System/zzzz__UriKind_impl.hpp"
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
constexpr ::System::Uri_Flags::Uri_Flags(uint64_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Uri_Flags::Uri_Flags() {}
constexpr ::System::Uri_Flags System::Uri_Flags::Zero{ static_cast<uint64_t>(0x0u) };
constexpr ::System::Uri_Flags System::Uri_Flags::SchemeNotCanonical{ static_cast<uint64_t>(0x1u) };
constexpr ::System::Uri_Flags System::Uri_Flags::UserNotCanonical{ static_cast<uint64_t>(0x2u) };
constexpr ::System::Uri_Flags System::Uri_Flags::HostNotCanonical{ static_cast<uint64_t>(0x4u) };
constexpr ::System::Uri_Flags System::Uri_Flags::PortNotCanonical{ static_cast<uint64_t>(0x8u) };
constexpr ::System::Uri_Flags System::Uri_Flags::PathNotCanonical{ static_cast<uint64_t>(0x10u) };
constexpr ::System::Uri_Flags System::Uri_Flags::QueryNotCanonical{ static_cast<uint64_t>(0x20u) };
constexpr ::System::Uri_Flags System::Uri_Flags::FragmentNotCanonical{ static_cast<uint64_t>(0x40u) };
constexpr ::System::Uri_Flags System::Uri_Flags::CannotDisplayCanonical{ static_cast<uint64_t>(0x7fu) };
constexpr ::System::Uri_Flags System::Uri_Flags::E_UserNotCanonical{ static_cast<uint64_t>(0x80u) };
constexpr ::System::Uri_Flags System::Uri_Flags::E_HostNotCanonical{ static_cast<uint64_t>(0x100u) };
constexpr ::System::Uri_Flags System::Uri_Flags::E_PortNotCanonical{ static_cast<uint64_t>(0x200u) };
constexpr ::System::Uri_Flags System::Uri_Flags::E_PathNotCanonical{ static_cast<uint64_t>(0x400u) };
constexpr ::System::Uri_Flags System::Uri_Flags::E_QueryNotCanonical{ static_cast<uint64_t>(0x800u) };
constexpr ::System::Uri_Flags System::Uri_Flags::E_FragmentNotCanonical{ static_cast<uint64_t>(0x1000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::E_CannotDisplayCanonical{ static_cast<uint64_t>(0x1f80u) };
constexpr ::System::Uri_Flags System::Uri_Flags::ShouldBeCompressed{ static_cast<uint64_t>(0x2000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::FirstSlashAbsent{ static_cast<uint64_t>(0x4000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::BackslashInPath{ static_cast<uint64_t>(0x8000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::IndexMask{ static_cast<uint64_t>(0xffffu) };
constexpr ::System::Uri_Flags System::Uri_Flags::HostTypeMask{ static_cast<uint64_t>(0x70000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::HostNotParsed{ static_cast<uint64_t>(0x0u) };
constexpr ::System::Uri_Flags System::Uri_Flags::IPv6HostType{ static_cast<uint64_t>(0x10000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::IPv4HostType{ static_cast<uint64_t>(0x20000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::DnsHostType{ static_cast<uint64_t>(0x30000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::UncHostType{ static_cast<uint64_t>(0x40000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::BasicHostType{ static_cast<uint64_t>(0x50000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::UnusedHostType{ static_cast<uint64_t>(0x60000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::UnknownHostType{ static_cast<uint64_t>(0x70000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::UserEscaped{ static_cast<uint64_t>(0x80000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::AuthorityFound{ static_cast<uint64_t>(0x100000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::HasUserInfo{ static_cast<uint64_t>(0x200000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::LoopbackHost{ static_cast<uint64_t>(0x400000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::NotDefaultPort{ static_cast<uint64_t>(0x800000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::UserDrivenParsing{ static_cast<uint64_t>(0x1000000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::CanonicalDnsHost{ static_cast<uint64_t>(0x2000000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::ErrorOrParsingRecursion{ static_cast<uint64_t>(0x4000000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::DosPath{ static_cast<uint64_t>(0x8000000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::UncPath{ static_cast<uint64_t>(0x10000000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::ImplicitFile{ static_cast<uint64_t>(0x20000000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::MinimalUriInfoSet{ static_cast<uint64_t>(0x40000000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::AllUriInfoSet{ static_cast<uint64_t>(0x80000000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::IdnHost{ static_cast<uint64_t>(0x100000000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::HasUnicode{ static_cast<uint64_t>(0x200000000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::HostUnicodeNormalized{ static_cast<uint64_t>(0x400000000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::RestUnicodeNormalized{ static_cast<uint64_t>(0x800000000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::UnicodeHost{ static_cast<uint64_t>(0x1000000000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::IntranetUri{ static_cast<uint64_t>(0x2000000000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::UseOrigUncdStrOffset{ static_cast<uint64_t>(0x4000000000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::UserIriCanonical{ static_cast<uint64_t>(0x8000000000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::PathIriCanonical{ static_cast<uint64_t>(0x10000000000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::QueryIriCanonical{ static_cast<uint64_t>(0x20000000000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::FragmentIriCanonical{ static_cast<uint64_t>(0x40000000000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::IriCanonical{ static_cast<uint64_t>(0x78000000000u) };
constexpr ::System::Uri_Flags System::Uri_Flags::CompressedSlashes{ static_cast<uint64_t>(0x100000000000u) };
// Ctor Parameters [CppParam { name: "Scheme", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "User", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "Host", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PortValue", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Path", ty: "uint16_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "Query", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Fragment", ty: "uint16_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "End", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Uri_Offset::Uri_Offset(uint16_t Scheme, uint16_t User, uint16_t Host, uint16_t PortValue, uint16_t Path, uint16_t Query, uint16_t Fragment, uint16_t End) noexcept {
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
constexpr ::System::Uri_Offset::Uri_Offset() {}
//  Writing Method size for method: ::System::Uri_UriInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri_UriInfo::*)()>(&::System::Uri_UriInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6370fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri_UriInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Uri_UriInfo::__cordl_internal_get_Host() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Host;
}
constexpr ::StringW const& System::Uri_UriInfo::__cordl_internal_get_Host() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Host;
}
constexpr void System::Uri_UriInfo::__cordl_internal_set_Host(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Host = value;
}
constexpr ::StringW& System::Uri_UriInfo::__cordl_internal_get_ScopeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ScopeId;
}
constexpr ::StringW const& System::Uri_UriInfo::__cordl_internal_get_ScopeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ScopeId;
}
constexpr void System::Uri_UriInfo::__cordl_internal_set_ScopeId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ScopeId = value;
}
constexpr ::StringW& System::Uri_UriInfo::__cordl_internal_get_String() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___String;
}
constexpr ::StringW const& System::Uri_UriInfo::__cordl_internal_get_String() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___String;
}
constexpr void System::Uri_UriInfo::__cordl_internal_set_String(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___String = value;
}
constexpr ::System::Uri_Offset& System::Uri_UriInfo::__cordl_internal_get_Offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Offset;
}
constexpr ::System::Uri_Offset const& System::Uri_UriInfo::__cordl_internal_get_Offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Offset;
}
constexpr void System::Uri_UriInfo::__cordl_internal_set_Offset(::System::Uri_Offset value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Offset = value;
}
constexpr ::StringW& System::Uri_UriInfo::__cordl_internal_get_DnsSafeHost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DnsSafeHost;
}
constexpr ::StringW const& System::Uri_UriInfo::__cordl_internal_get_DnsSafeHost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DnsSafeHost;
}
constexpr void System::Uri_UriInfo::__cordl_internal_set_DnsSafeHost(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DnsSafeHost = value;
}
constexpr ::System::Uri_MoreInfo*& System::Uri_UriInfo::__cordl_internal_get_MoreInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MoreInfo;
}
constexpr ::System::Uri_MoreInfo* const& System::Uri_UriInfo::__cordl_internal_get_MoreInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MoreInfo;
}
constexpr void System::Uri_UriInfo::__cordl_internal_set_MoreInfo(::System::Uri_MoreInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MoreInfo = value;
}
inline void System::Uri_UriInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri_UriInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Uri_UriInfo* System::Uri_UriInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Uri_UriInfo*>());
}
// Ctor Parameters []
constexpr ::System::Uri_UriInfo::Uri_UriInfo() {}
//  Writing Method size for method: ::System::Uri_MoreInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri_MoreInfo::*)()>(&::System::Uri_MoreInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6370fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri_MoreInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Uri_MoreInfo::__cordl_internal_get_Path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Path;
}
constexpr ::StringW const& System::Uri_MoreInfo::__cordl_internal_get_Path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Path;
}
constexpr void System::Uri_MoreInfo::__cordl_internal_set_Path(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Path = value;
}
constexpr ::StringW& System::Uri_MoreInfo::__cordl_internal_get_Query() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Query;
}
constexpr ::StringW const& System::Uri_MoreInfo::__cordl_internal_get_Query() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Query;
}
constexpr void System::Uri_MoreInfo::__cordl_internal_set_Query(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Query = value;
}
constexpr ::StringW& System::Uri_MoreInfo::__cordl_internal_get_Fragment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Fragment;
}
constexpr ::StringW const& System::Uri_MoreInfo::__cordl_internal_get_Fragment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Fragment;
}
constexpr void System::Uri_MoreInfo::__cordl_internal_set_Fragment(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Fragment = value;
}
constexpr ::StringW& System::Uri_MoreInfo::__cordl_internal_get_AbsoluteUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AbsoluteUri;
}
constexpr ::StringW const& System::Uri_MoreInfo::__cordl_internal_get_AbsoluteUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AbsoluteUri;
}
constexpr void System::Uri_MoreInfo::__cordl_internal_set_AbsoluteUri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AbsoluteUri = value;
}
constexpr int32_t& System::Uri_MoreInfo::__cordl_internal_get_Hash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Hash;
}
constexpr int32_t const& System::Uri_MoreInfo::__cordl_internal_get_Hash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Hash;
}
constexpr void System::Uri_MoreInfo::__cordl_internal_set_Hash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Hash = value;
}
constexpr ::StringW& System::Uri_MoreInfo::__cordl_internal_get_RemoteUrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RemoteUrl;
}
constexpr ::StringW const& System::Uri_MoreInfo::__cordl_internal_get_RemoteUrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RemoteUrl;
}
constexpr void System::Uri_MoreInfo::__cordl_internal_set_RemoteUrl(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RemoteUrl = value;
}
inline void System::Uri_MoreInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri_MoreInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Uri_MoreInfo* System::Uri_MoreInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Uri_MoreInfo*>());
}
// Ctor Parameters []
constexpr ::System::Uri_MoreInfo::Uri_MoreInfo() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Uri_Check::Uri_Check(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Uri_Check::Uri_Check() {}
constexpr ::System::Uri_Check System::Uri_Check::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Uri_Check System::Uri_Check::EscapedCanonical{ static_cast<int32_t>(0x1) };
constexpr ::System::Uri_Check System::Uri_Check::DisplayCanonical{ static_cast<int32_t>(0x2) };
constexpr ::System::Uri_Check System::Uri_Check::DotSlashAttn{ static_cast<int32_t>(0x4) };
constexpr ::System::Uri_Check System::Uri_Check::DotSlashEscaped{ static_cast<int32_t>(0x80) };
constexpr ::System::Uri_Check System::Uri_Check::BackslashInPath{ static_cast<int32_t>(0x10) };
constexpr ::System::Uri_Check System::Uri_Check::ReservedFound{ static_cast<int32_t>(0x20) };
constexpr ::System::Uri_Check System::Uri_Check::NotIriCanonical{ static_cast<int32_t>(0x40) };
constexpr ::System::Uri_Check System::Uri_Check::FoundNonAscii{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::System::Uri.get_IsImplicitFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_IsImplicitFile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x631c994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_IsImplicitFile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_IsUncOrDosPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_IsUncOrDosPath)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x631c9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_IsUncOrDosPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_IsDosPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_IsDosPath)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x631c9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_IsDosPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_IsUncPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_IsUncPath)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x631c9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_IsUncPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_HostType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri_Flags (::System::Uri::*)()>(&::System::Uri::get_HostType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x631c9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_HostType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_Syntax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::UriParser* (::System::Uri::*)()>(&::System::Uri::get_Syntax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631c9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_Syntax", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_IsNotAbsoluteUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_IsNotAbsoluteUri)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x631c9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_IsNotAbsoluteUri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IriParsingStatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::UriParser*)>(&::System::Uri::IriParsingStatic)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x631c9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IriParsingStatic", {}, { ::i2c::type_of<::System::UriParser*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_AllowIdn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_AllowIdn)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x631ca74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_AllowIdn", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.AllowIdnStatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)(::System::UriParser*, ::System::Uri_Flags)>(&::System::Uri::AllowIdnStatic)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x631cb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "AllowIdnStatic", {}, { ::i2c::type_of<::System::UriParser*>(), ::i2c::type_of<::System::Uri_Flags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsIntranet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)(::StringW)>(&::System::Uri::IsIntranet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631cc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsIntranet", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_UserDrivenParsing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_UserDrivenParsing)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x631cc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_UserDrivenParsing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.SetUserDrivenParsing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)()>(&::System::Uri::SetUserDrivenParsing)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x631cc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "SetUserDrivenParsing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_SecuredPathIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::System::Uri::*)()>(&::System::Uri::get_SecuredPathIndex)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x631cc4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_SecuredPathIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.NotAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)(::System::Uri_Flags)>(&::System::Uri::NotAny)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x631cb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "NotAny", {}, { ::i2c::type_of<::System::Uri_Flags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.InFact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)(::System::Uri_Flags)>(&::System::Uri::InFact)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x631ccb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "InFact", {}, { ::i2c::type_of<::System::Uri_Flags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.StaticNotAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Uri_Flags, ::System::Uri_Flags)>(&::System::Uri::StaticNotAny)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x631cc18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "StaticNotAny", {}, { ::i2c::type_of<::System::Uri_Flags>(), ::i2c::type_of<::System::Uri_Flags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.StaticInFact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Uri_Flags, ::System::Uri_Flags)>(&::System::Uri::StaticInFact)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x631ccc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "StaticInFact", {}, { ::i2c::type_of<::System::Uri_Flags>(), ::i2c::type_of<::System::Uri_Flags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.EnsureUriInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri_UriInfo* (::System::Uri::*)()>(&::System::Uri::EnsureUriInfo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x631cccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "EnsureUriInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.EnsureParseRemaining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)()>(&::System::Uri::EnsureParseRemaining)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x631d264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "EnsureParseRemaining", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.EnsureHostString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)(bool)>(&::System::Uri::EnsureHostString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x631dea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "EnsureHostString", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)(::StringW)>(&::System::Uri::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x631e2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)(::StringW, ::System::UriKind)>(&::System::Uri::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x631e4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::UriKind>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)(::System::Uri*, ::StringW)>(&::System::Uri::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x631e534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { ".ctor", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CreateUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)(::System::Uri*, ::StringW, bool)>(&::System::Uri::CreateUri)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x631e5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CreateUri", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)(::System::Uri*, ::System::Uri*)>(&::System::Uri::_ctor)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x631ece0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { ".ctor", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetCombinedString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ParsingError (*)(::System::Uri*, ::StringW, bool, ::by_ref<::StringW>)>(&::System::Uri::GetCombinedString)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x631eee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                            { "GetCombinedString", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::UriFormatException* (*)(::System::ParsingError)>(&::System::Uri::GetException)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x631fad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "GetException", {}, { ::i2c::type_of<::System::ParsingError>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Uri::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x631fcec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Uri::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x631fdf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                                { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Uri::GetObjectData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x631fdfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Uri*>(),
                         { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_AbsolutePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_AbsolutePath)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x631fee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_AbsolutePath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_PrivateAbsolutePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_PrivateAbsolutePath)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x631ff90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_PrivateAbsolutePath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_AbsoluteUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_AbsoluteUri)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6320030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_AbsoluteUri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_LocalPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_LocalPath)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x632011c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_LocalPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_Authority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_Authority)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6320758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_Authority", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_HostNameType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::UriHostNameType (::System::Uri::*)()>(&::System::Uri::get_HostNameType)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x63207bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_HostNameType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_IsDefaultPort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_IsDefaultPort)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x63208a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_IsDefaultPort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_IsFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_IsFile)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6320944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_IsFile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_IsLoopback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_IsLoopback)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6320a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_IsLoopback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_PathAndQuery
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_PathAndQuery)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6320a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_PathAndQuery", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_Segments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Uri::*)()>(&::System::Uri::get_Segments)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6320b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_Segments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_IsUnc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_IsUnc)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6320d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_IsUnc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_Host
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_Host)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6320d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_Host", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.StaticIsFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::UriParser*)>(&::System::Uri::StaticIsFile)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6320ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "StaticIsFile", {}, { ::i2c::type_of<::System::UriParser*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_InitializeLock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)()>(&::System::Uri::get_InitializeLock)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6320df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_InitializeLock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.InitializeUriConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Uri::InitializeUriConfig)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6320ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "InitializeUriConfig", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetLocalPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::GetLocalPath)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x6320178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "GetLocalPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_Port
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Uri::*)()>(&::System::Uri::get_Port)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x63215a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_Port", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_Query
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_Query)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6321660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_Query", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_Fragment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_Fragment)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6321750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_Fragment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_Scheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_Scheme)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6321840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_Scheme", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_OriginalStringSwitched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_OriginalStringSwitched)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x63218a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_OriginalStringSwitched", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_OriginalString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_OriginalString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x631f1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_OriginalString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_DnsSafeHost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_DnsSafeHost)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x63218e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_DnsSafeHost", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_IsAbsoluteUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_IsAbsoluteUri)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x631e5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_IsAbsoluteUri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_UserEscaped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_UserEscaped)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6321b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_UserEscaped", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_UserInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::get_UserInfo)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6321b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_UserInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.HexEscape
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(char16_t)>(&::System::Uri::HexEscape)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6321b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "HexEscape", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsGenDelim
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Uri::IsGenDelim)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6321c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsGenDelim", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckSchemeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Uri::CheckSchemeName)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6321c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CheckSchemeName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsHexDigit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Uri::IsHexDigit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6321e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsHexDigit", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.FromHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t)>(&::System::Uri::FromHex)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6321e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "FromHex", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Uri::*)()>(&::System::Uri::GetHashCode)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6321ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Uri*>(), { ::i2c::class_of<::System::Uri*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)()>(&::System::Uri::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x63220d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Uri*>(), { ::i2c::class_of<::System::Uri*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Uri*, ::System::Uri*)>(&::System::Uri::op_Equality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x63223b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "op_Equality", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Uri*, ::System::Uri*)>(&::System::Uri::op_Inequality)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x631eb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "op_Inequality", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)(::System::Object*)>(&::System::Uri::Equals)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x63223e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Uri*>(), { ::i2c::class_of<::System::Uri*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckForColonInFirstPathSegment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Uri::CheckForColonInFirstPathSegment)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x63229a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CheckForColonInFirstPathSegment", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.InternalEscapeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Uri::InternalEscapeString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6322a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "InternalEscapeString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.ParseScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ParsingError (*)(::StringW, ::by_ref<::System::Uri_Flags>, ::by_ref<::System::UriParser*>)>(&::System::Uri::ParseScheme)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6322b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                         { "ParseScheme", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Uri_Flags>>(), ::i2c::type_of<::by_ref<::System::UriParser*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.ParseMinimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::UriFormatException* (::System::Uri::*)()>(&::System::Uri::ParseMinimal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6323074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "ParseMinimal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.PrivateParseMinimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ParsingError (::System::Uri::*)()>(&::System::Uri::PrivateParseMinimal)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x63230f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "PrivateParseMinimal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.PrivateParseMinimalIri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)(::StringW, uint16_t)>(&::System::Uri::PrivateParseMinimalIri)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6324374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "PrivateParseMinimalIri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CreateUriInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)(::System::Uri_Flags)>(&::System::Uri::CreateUriInfo)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x631ccf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CreateUriInfo", {}, { ::i2c::type_of<::System::Uri_Flags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CreateHostString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)()>(&::System::Uri::CreateHostString)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x631df08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CreateHostString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CreateHostStringHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, uint16_t, uint16_t, ::by_ref<::System::Uri_Flags>, ::by_ref<::StringW>)>(&::System::Uri::CreateHostStringHelper)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6324844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CreateHostStringHelper",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(),
                                                                                                    ::i2c::type_of<::by_ref<::System::Uri_Flags>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetHostViaCustomSyntax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)()>(&::System::Uri::GetHostViaCustomSyntax)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x6324448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "GetHostViaCustomSyntax", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetParts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)(::System::UriComponents, ::System::UriFormat)>(&::System::Uri::GetParts)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x631fedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "GetParts", {}, { ::i2c::type_of<::System::UriComponents>(), ::i2c::type_of<::System::UriFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetEscapedParts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)(::System::UriComponents)>(&::System::Uri::GetEscapedParts)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6324fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "GetEscapedParts", {}, { ::i2c::type_of<::System::UriComponents>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetUnescapedParts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)(::System::UriComponents, ::System::UriFormat)>(&::System::Uri::GetUnescapedParts)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x63214cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "GetUnescapedParts", {}, { ::i2c::type_of<::System::UriComponents>(), ::i2c::type_of<::System::UriFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.ReCreateParts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)(::System::UriComponents, uint16_t, ::System::UriFormat)>(&::System::Uri::ReCreateParts)> {
  constexpr static std::size_t size = 0xc64;
  constexpr static std::size_t addrs = 0x6325688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                                { "ReCreateParts", {}, { ::i2c::type_of<::System::UriComponents>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::UriFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetUriPartsFromUserString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)(::System::UriComponents)>(&::System::Uri::GetUriPartsFromUserString)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x63250a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "GetUriPartsFromUserString", {}, { ::i2c::type_of<::System::UriComponents>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.ParseRemaining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)()>(&::System::Uri::ParseRemaining)> {
  constexpr static std::size_t size = 0xc34;
  constexpr static std::size_t addrs = 0x631d274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "ParseRemaining", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.ParseSchemeCheckImplicitFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(char16_t*, uint16_t, ::by_ref<::System::ParsingError>, ::by_ref<::System::Uri_Flags>, ::by_ref<::System::UriParser*>)>(
    &::System::Uri::ParseSchemeCheckImplicitFile)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x6322c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "ParseSchemeCheckImplicitFile",
                                                                                     {},
                                                                                     { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<::System::ParsingError>>(),
                                                                                       ::i2c::type_of<::by_ref<::System::Uri_Flags>>(), ::i2c::type_of<::by_ref<::System::UriParser*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckKnownSchemes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t*, uint16_t, ::by_ref<::System::UriParser*>)>(&::System::Uri::CheckKnownSchemes)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x6326984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                                { "CheckKnownSchemes", {}, { ::i2c::type_of<int64_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<::System::UriParser*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckSchemeSyntax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ParsingError (*)(char16_t*, uint16_t, ::by_ref<::System::UriParser*>)>(&::System::Uri::CheckSchemeSyntax)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x631f0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                                { "CheckSchemeSyntax", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<::System::UriParser*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckAuthorityHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::System::Uri::*)(char16_t*, uint16_t, uint16_t, ::by_ref<::System::ParsingError>, ::by_ref<::System::Uri_Flags>, ::System::UriParser*,
                                                                                   ::by_ref<::StringW>)>(&::System::Uri::CheckAuthorityHelper)> {
  constexpr static std::size_t size = 0xca0;
  constexpr static std::size_t addrs = 0x63236d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CheckAuthorityHelper",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(),
                                                                                                    ::i2c::type_of<::by_ref<::System::ParsingError>>(), ::i2c::type_of<::by_ref<::System::Uri_Flags>>(),
                                                                                                    ::i2c::type_of<::System::UriParser*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckAuthorityHelperHandleDnsIri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)(char16_t*, uint16_t, int32_t, int32_t, bool, bool, ::System::UriParser*, ::StringW, ::by_ref<::System::Uri_Flags>,
                                                                               ::by_ref<bool>, ::by_ref<::StringW>, ::by_ref<::System::ParsingError>)>(
    &::System::Uri::CheckAuthorityHelperHandleDnsIri)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x6326e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                                { "CheckAuthorityHelperHandleDnsIri",
                                                  {},
                                                  { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<::System::UriParser*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Uri_Flags>>(),
                                                    ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::System::ParsingError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckAuthorityHelperHandleAnyHostIri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)(char16_t*, int32_t, int32_t, bool, bool, ::System::UriParser*, ::by_ref<::System::Uri_Flags>, ::by_ref<::StringW>,
                                                                               ::by_ref<::System::ParsingError>)>(&::System::Uri::CheckAuthorityHelperHandleAnyHostIri)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x63271dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CheckAuthorityHelperHandleAnyHostIri",
                                                                                     {},
                                                                                     { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                                                       ::i2c::type_of<bool>(), ::i2c::type_of<::System::UriParser*>(), ::i2c::type_of<::by_ref<::System::Uri_Flags>>(),
                                                                                       ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::System::ParsingError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.FindEndOfComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)(::StringW, ::by_ref<uint16_t>, uint16_t, char16_t)>(&::System::Uri::FindEndOfComponent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6326954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                         { "FindEndOfComponent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.FindEndOfComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)(char16_t*, ::by_ref<uint16_t>, uint16_t, char16_t)>(&::System::Uri::FindEndOfComponent)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x63275f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                         { "FindEndOfComponent", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckCanonical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri_Check (::System::Uri::*)(char16_t*, ::by_ref<uint16_t>, uint16_t, char16_t)>(&::System::Uri::CheckCanonical)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x6324a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                         { "CheckCanonical", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetCanonicalPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (::System::Uri::*)(::ArrayW<char16_t>, ::by_ref<int32_t>, ::System::UriFormat)>(&::System::Uri::GetCanonicalPath)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x63262ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                                { "GetCanonicalPath", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::UriFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.UnescapeOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(char16_t*, int32_t, ::by_ref<int32_t>, char16_t, char16_t, char16_t)>(&::System::Uri::UnescapeOnly)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6327658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "UnescapeOnly",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                                    ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.Compress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (*)(::ArrayW<char16_t>, uint16_t, ::by_ref<int32_t>, ::System::UriParser*)>(&::System::Uri::Compress)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x6321060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                            { "Compress", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::UriParser*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CalculateCaseInsensitiveHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::System::Uri::CalculateCaseInsensitiveHashCode)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6322024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CalculateCaseInsensitiveHashCode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CombineUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Uri*, ::StringW, ::System::UriFormat)>(&::System::Uri::CombineUri)> {
  constexpr static std::size_t size = 0x8b0;
  constexpr static std::size_t addrs = 0x631f224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CombineUri", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::UriFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.get_HasAuthority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::get_HasAuthority)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6327850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_HasAuthority", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsLWS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Uri::IsLWS)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63236b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsLWS", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsAsciiLetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Uri::IsAsciiLetter)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6321dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsAsciiLetter", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsAsciiLetterOrDigit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Uri::IsAsciiLetterOrDigit)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6321dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsAsciiLetterOrDigit", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsBidiControlCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Uri::IsBidiControlCharacter)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x632785c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsBidiControlCharacter", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.StripBidiControlCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(char16_t*, int32_t, int32_t)>(&::System::Uri::StripBidiControlCharacter)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6327488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "StripBidiControlCharacter", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CreateThis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)(::StringW, bool, ::System::UriKind)>(&::System::Uri::CreateThis)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x631e32c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CreateThis", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::UriKind>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.InitializeUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)(::System::ParsingError, ::System::UriKind, ::by_ref<::System::UriFormatException*>)>(&::System::Uri::InitializeUri)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x6327884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                            { "InitializeUri", {}, { ::i2c::type_of<::System::ParsingError>(), ::i2c::type_of<::System::UriKind>(), ::i2c::type_of<::by_ref<::System::UriFormatException*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckForConfigLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)(::StringW)>(&::System::Uri::CheckForConfigLoad)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6327d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CheckForConfigLoad", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckForUnicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)(::StringW)>(&::System::Uri::CheckForUnicode)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6327e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CheckForUnicode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CheckForEscapedUnreserved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)(::StringW)>(&::System::Uri::CheckForEscapedUnreserved)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x6327f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CheckForEscapedUnreserved", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.TryCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::UriKind, ::by_ref<::System::Uri*>)>(&::System::Uri::TryCreate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x63228e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "TryCreate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::UriKind>(), ::i2c::type_of<::by_ref<::System::Uri*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.TryCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Uri*, ::StringW, ::by_ref<::System::Uri*>)>(&::System::Uri::TryCreate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6328340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "TryCreate", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Uri*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.TryCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Uri*, ::System::Uri*, ::by_ref<::System::Uri*>)>(&::System::Uri::TryCreate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x632841c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                                             { "TryCreate", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::Uri*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetComponents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)(::System::UriComponents, ::System::UriFormat)>(&::System::Uri::GetComponents)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6324e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "GetComponents", {}, { ::i2c::type_of<::System::UriComponents>(), ::i2c::type_of<::System::UriFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsWellFormedOriginalString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::IsWellFormedOriginalString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x63287c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsWellFormedOriginalString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsWellFormedUriString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::UriKind)>(&::System::Uri::IsWellFormedUriString)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6328c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsWellFormedUriString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::UriKind>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.InternalIsWellFormedOriginalString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)()>(&::System::Uri::InternalIsWellFormedOriginalString)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x63287e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "InternalIsWellFormedOriginalString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.UnescapeDataString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Uri::UnescapeDataString)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6328cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "UnescapeDataString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.EscapeUriString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Uri::EscapeUriString)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6328e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "EscapeUriString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.EscapeDataString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Uri::EscapeDataString)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6328f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "EscapeDataString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.EscapeUnescapeIri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)(::StringW, int32_t, int32_t, ::System::UriComponents)>(&::System::Uri::EscapeUnescapeIri)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6326964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                            { "EscapeUnescapeIri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::UriComponents>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)(::System::Uri_Flags, ::System::UriParser*, ::StringW)>(&::System::Uri::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6329064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { ".ctor", {}, { ::i2c::type_of<::System::Uri_Flags>(), ::i2c::type_of<::System::UriParser*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CreateHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (*)(::StringW, bool, ::System::UriKind, ::by_ref<::System::UriFormatException*>)>(&::System::Uri::CreateHelper)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x63280f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Uri*>(),
            { "CreateHelper", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::UriKind>(), ::i2c::type_of<::by_ref<::System::UriFormatException*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.ResolveHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (*)(::System::Uri*, ::System::Uri*, ::by_ref<::StringW>, ::by_ref<bool>, ::by_ref<::System::UriFormatException*>)>(
    &::System::Uri::ResolveHelper)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x631e76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "ResolveHelper",
                                                                                     {},
                                                                                     { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                                                                       ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::System::UriFormatException*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetRelativeSerializationString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)(::System::UriFormat)>(&::System::Uri::GetRelativeSerializationString)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6328594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "GetRelativeSerializationString", {}, { ::i2c::type_of<::System::UriFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.GetComponentsHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Uri::*)(::System::UriComponents, ::System::UriFormat)>(&::System::Uri::GetComponentsHelper)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x632219c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "GetComponentsHelper", {}, { ::i2c::type_of<::System::UriComponents>(), ::i2c::type_of<::System::UriFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsBaseOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)(::System::Uri*)>(&::System::Uri::IsBaseOf)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6329074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsBaseOf", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.IsBaseOfHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Uri::*)(::System::Uri*)>(&::System::Uri::IsBaseOfHelper)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x63290f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsBaseOfHelper", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Uri.CreateThisFromUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Uri::*)(::System::Uri*)>(&::System::Uri::CreateThisFromUri)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x631ebc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CreateThisFromUri", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
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
  this->___m_String = value;
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
  this->___m_originalUnicodeString = value;
}
constexpr ::System::UriParser*& System::Uri::__cordl_internal_get_m_Syntax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Syntax;
}
constexpr ::System::UriParser* const& System::Uri::__cordl_internal_get_m_Syntax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Syntax;
}
constexpr void System::Uri::__cordl_internal_set_m_Syntax(::System::UriParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Syntax = value;
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
  this->___m_DnsSafeHost = value;
}
constexpr ::System::Uri_Flags& System::Uri::__cordl_internal_get_m_Flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr ::System::Uri_Flags const& System::Uri::__cordl_internal_get_m_Flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr void System::Uri::__cordl_internal_set_m_Flags(::System::Uri_Flags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Flags = value;
}
constexpr ::System::Uri_UriInfo*& System::Uri::__cordl_internal_get_m_Info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Info;
}
constexpr ::System::Uri_UriInfo* const& System::Uri::__cordl_internal_get_m_Info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Info;
}
constexpr void System::Uri::__cordl_internal_set_m_Info(::System::Uri_UriInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Info = value;
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
  ::cordl_internals::setStaticField<::StringW, "UriSchemeFile", ::System::Uri*>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeFile() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeFile", ::System::Uri*>();
}
inline void System::Uri::setStaticF_UriSchemeFtp(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeFtp", ::System::Uri*>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeFtp() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeFtp", ::System::Uri*>();
}
inline void System::Uri::setStaticF_UriSchemeGopher(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeGopher", ::System::Uri*>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeGopher() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeGopher", ::System::Uri*>();
}
inline void System::Uri::setStaticF_UriSchemeHttp(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeHttp", ::System::Uri*>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeHttp() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeHttp", ::System::Uri*>();
}
inline void System::Uri::setStaticF_UriSchemeHttps(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeHttps", ::System::Uri*>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeHttps() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeHttps", ::System::Uri*>();
}
inline void System::Uri::setStaticF_UriSchemeWs(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeWs", ::System::Uri*>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeWs() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeWs", ::System::Uri*>();
}
inline void System::Uri::setStaticF_UriSchemeWss(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeWss", ::System::Uri*>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeWss() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeWss", ::System::Uri*>();
}
inline void System::Uri::setStaticF_UriSchemeMailto(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeMailto", ::System::Uri*>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeMailto() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeMailto", ::System::Uri*>();
}
inline void System::Uri::setStaticF_UriSchemeNews(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeNews", ::System::Uri*>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeNews() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeNews", ::System::Uri*>();
}
inline void System::Uri::setStaticF_UriSchemeNntp(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeNntp", ::System::Uri*>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeNntp() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeNntp", ::System::Uri*>();
}
inline void System::Uri::setStaticF_UriSchemeNetTcp(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeNetTcp", ::System::Uri*>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeNetTcp() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeNetTcp", ::System::Uri*>();
}
inline void System::Uri::setStaticF_UriSchemeNetPipe(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UriSchemeNetPipe", ::System::Uri*>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_UriSchemeNetPipe() {
  return ::cordl_internals::getStaticField<::StringW, "UriSchemeNetPipe", ::System::Uri*>();
}
inline void System::Uri::setStaticF_SchemeDelimiter(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "SchemeDelimiter", ::System::Uri*>(std::forward<::StringW>(value));
}
inline ::StringW System::Uri::getStaticF_SchemeDelimiter() {
  return ::cordl_internals::getStaticField<::StringW, "SchemeDelimiter", ::System::Uri*>();
}
inline void System::Uri::setStaticF_s_ConfigInitialized(bool value) {
  ::cordl_internals::setStaticField<bool, "s_ConfigInitialized", ::System::Uri*>(std::forward<bool>(value));
}
inline bool System::Uri::getStaticF_s_ConfigInitialized() {
  return ::cordl_internals::getStaticField<bool, "s_ConfigInitialized", ::System::Uri*>();
}
inline void System::Uri::setStaticF_s_ConfigInitializing(bool value) {
  ::cordl_internals::setStaticField<bool, "s_ConfigInitializing", ::System::Uri*>(std::forward<bool>(value));
}
inline bool System::Uri::getStaticF_s_ConfigInitializing() {
  return ::cordl_internals::getStaticField<bool, "s_ConfigInitializing", ::System::Uri*>();
}
inline void System::Uri::setStaticF_s_IdnScope(::System::UriIdnScope value) {
  ::cordl_internals::setStaticField<::System::UriIdnScope, "s_IdnScope", ::System::Uri*>(std::forward<::System::UriIdnScope>(value));
}
inline ::System::UriIdnScope System::Uri::getStaticF_s_IdnScope() {
  return ::cordl_internals::getStaticField<::System::UriIdnScope, "s_IdnScope", ::System::Uri*>();
}
inline void System::Uri::setStaticF_s_IriParsing(bool value) {
  ::cordl_internals::setStaticField<bool, "s_IriParsing", ::System::Uri*>(std::forward<bool>(value));
}
inline bool System::Uri::getStaticF_s_IriParsing() {
  return ::cordl_internals::getStaticField<bool, "s_IriParsing", ::System::Uri*>();
}
inline void System::Uri::setStaticF_useDotNetRelativeOrAbsolute(bool value) {
  ::cordl_internals::setStaticField<bool, "useDotNetRelativeOrAbsolute", ::System::Uri*>(std::forward<bool>(value));
}
inline bool System::Uri::getStaticF_useDotNetRelativeOrAbsolute() {
  return ::cordl_internals::getStaticField<bool, "useDotNetRelativeOrAbsolute", ::System::Uri*>();
}
inline void System::Uri::setStaticF_IsWindowsFileSystem(bool value) {
  ::cordl_internals::setStaticField<bool, "IsWindowsFileSystem", ::System::Uri*>(std::forward<bool>(value));
}
inline bool System::Uri::getStaticF_IsWindowsFileSystem() {
  return ::cordl_internals::getStaticField<bool, "IsWindowsFileSystem", ::System::Uri*>();
}
inline void System::Uri::setStaticF_s_initLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_initLock", ::System::Uri*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Uri::getStaticF_s_initLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_initLock", ::System::Uri*>();
}
inline void System::Uri::setStaticF_HexLowerChars(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "HexLowerChars", ::System::Uri*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Uri::getStaticF_HexLowerChars() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "HexLowerChars", ::System::Uri*>();
}
inline void System::Uri::setStaticF__WSchars(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "_WSchars", ::System::Uri*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Uri::getStaticF__WSchars() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "_WSchars", ::System::Uri*>();
}
inline bool System::Uri::get_IsImplicitFile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_IsImplicitFile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Uri::get_IsUncOrDosPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_IsUncOrDosPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Uri::get_IsDosPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_IsDosPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Uri::get_IsUncPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_IsUncPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Uri_Flags System::Uri::get_HostType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_HostType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri_Flags>(this, ___internal_method);
}
inline ::System::UriParser* System::Uri::get_Syntax() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_Syntax", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::UriParser*>(this, ___internal_method);
}
inline bool System::Uri::get_IsNotAbsoluteUri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_IsNotAbsoluteUri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Uri::IriParsingStatic(::System::UriParser* syntax) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IriParsingStatic", {}, { ::i2c::type_of<::System::UriParser*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, syntax);
}
inline bool System::Uri::get_AllowIdn() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_AllowIdn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Uri::AllowIdnStatic(::System::UriParser* syntax, ::System::Uri_Flags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "AllowIdnStatic", {}, { ::i2c::type_of<::System::UriParser*>(), ::i2c::type_of<::System::Uri_Flags>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, syntax, flags);
}
inline bool System::Uri::IsIntranet(::StringW schemeHost) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsIntranet", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, schemeHost);
}
inline bool System::Uri::get_UserDrivenParsing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_UserDrivenParsing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Uri::SetUserDrivenParsing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "SetUserDrivenParsing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint16_t System::Uri::get_SecuredPathIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_SecuredPathIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline bool System::Uri::NotAny(::System::Uri_Flags flags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "NotAny", {}, { ::i2c::type_of<::System::Uri_Flags>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flags);
}
inline bool System::Uri::InFact(::System::Uri_Flags flags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "InFact", {}, { ::i2c::type_of<::System::Uri_Flags>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flags);
}
inline bool System::Uri::StaticNotAny(::System::Uri_Flags allFlags, ::System::Uri_Flags checkFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "StaticNotAny", {}, { ::i2c::type_of<::System::Uri_Flags>(), ::i2c::type_of<::System::Uri_Flags>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, allFlags, checkFlags);
}
inline bool System::Uri::StaticInFact(::System::Uri_Flags allFlags, ::System::Uri_Flags checkFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "StaticInFact", {}, { ::i2c::type_of<::System::Uri_Flags>(), ::i2c::type_of<::System::Uri_Flags>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, allFlags, checkFlags);
}
inline ::System::Uri_UriInfo* System::Uri::EnsureUriInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "EnsureUriInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri_UriInfo*>(this, ___internal_method);
}
inline void System::Uri::EnsureParseRemaining() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "EnsureParseRemaining", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Uri::EnsureHostString(bool allowDnsOptimization) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "EnsureHostString", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allowDnsOptimization);
}
inline void System::Uri::_ctor(::StringW uriString) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uriString);
}
inline void System::Uri::_ctor(::StringW uriString, ::System::UriKind uriKind) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::UriKind>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uriString, uriKind);
}
inline void System::Uri::_ctor(::System::Uri* baseUri, ::StringW relativeUri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { ".ctor", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseUri, relativeUri);
}
inline void System::Uri::CreateUri(::System::Uri* baseUri, ::StringW relativeUri, bool dontEscape) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CreateUri", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseUri, relativeUri, dontEscape);
}
inline void System::Uri::_ctor(::System::Uri* baseUri, ::System::Uri* relativeUri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { ".ctor", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseUri, relativeUri);
}
inline ::System::ParsingError System::Uri::GetCombinedString(::System::Uri* baseUri, ::StringW relativeStr, bool dontEscape, ::by_ref<::StringW> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                       { "GetCombinedString", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ParsingError>(nullptr, ___internal_method, baseUri, relativeStr, dontEscape, result);
}
inline ::System::UriFormatException* System::Uri::GetException(::System::ParsingError err) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "GetException", {}, { ::i2c::type_of<::System::ParsingError>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::UriFormatException*>(nullptr, ___internal_method, err);
}
inline void System::Uri::_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Uri::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                                  ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Uri::GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                          { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline ::StringW System::Uri::get_AbsolutePath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_AbsolutePath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Uri::get_PrivateAbsolutePath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_PrivateAbsolutePath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Uri::get_AbsoluteUri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_AbsoluteUri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Uri::get_LocalPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_LocalPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Uri::get_Authority() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_Authority", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::UriHostNameType System::Uri::get_HostNameType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_HostNameType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::UriHostNameType>(this, ___internal_method);
}
inline bool System::Uri::get_IsDefaultPort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_IsDefaultPort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Uri::get_IsFile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_IsFile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Uri::get_IsLoopback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_IsLoopback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Uri::get_PathAndQuery() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_PathAndQuery", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Uri::get_Segments() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_Segments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline bool System::Uri::get_IsUnc() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_IsUnc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Uri::get_Host() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_Host", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Uri::StaticIsFile(::System::UriParser* syntax) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "StaticIsFile", {}, { ::i2c::type_of<::System::UriParser*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, syntax);
}
inline ::System::Object* System::Uri::get_InitializeLock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_InitializeLock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method);
}
inline void System::Uri::InitializeUriConfig() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "InitializeUriConfig", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW System::Uri::GetLocalPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "GetLocalPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Uri::get_Port() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_Port", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Uri::get_Query() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_Query", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Uri::get_Fragment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_Fragment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Uri::get_Scheme() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_Scheme", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Uri::get_OriginalStringSwitched() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_OriginalStringSwitched", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Uri::get_OriginalString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_OriginalString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Uri::get_DnsSafeHost() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_DnsSafeHost", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Uri::get_IsAbsoluteUri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_IsAbsoluteUri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Uri::get_UserEscaped() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_UserEscaped", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Uri::get_UserInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_UserInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Uri::HexEscape(char16_t character) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "HexEscape", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, character);
}
inline bool System::Uri::IsGenDelim(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsGenDelim", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline bool System::Uri::CheckSchemeName(::StringW schemeName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CheckSchemeName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, schemeName);
}
inline bool System::Uri::IsHexDigit(char16_t character) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsHexDigit", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, character);
}
inline int32_t System::Uri::FromHex(char16_t digit) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "FromHex", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, digit);
}
inline int32_t System::Uri::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Uri*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Uri::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Uri*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Uri::op_Equality(::System::Uri* uri1, ::System::Uri* uri2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "op_Equality", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, uri1, uri2);
}
inline bool System::Uri::op_Inequality(::System::Uri* uri1, ::System::Uri* uri2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "op_Inequality", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, uri1, uri2);
}
inline bool System::Uri::Equals(::System::Object* comparand) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Uri*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, comparand);
}
inline bool System::Uri::CheckForColonInFirstPathSegment(::StringW uriString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CheckForColonInFirstPathSegment", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, uriString);
}
inline ::StringW System::Uri::InternalEscapeString(::StringW rawString) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "InternalEscapeString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, rawString);
}
inline ::System::ParsingError System::Uri::ParseScheme(::StringW uriString, ::by_ref<::System::Uri_Flags> flags, ::by_ref<::System::UriParser*> syntax) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                       { "ParseScheme", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Uri_Flags>>(), ::i2c::type_of<::by_ref<::System::UriParser*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ParsingError>(nullptr, ___internal_method, uriString, flags, syntax);
}
inline ::System::UriFormatException* System::Uri::ParseMinimal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "ParseMinimal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::UriFormatException*>(this, ___internal_method);
}
inline ::System::ParsingError System::Uri::PrivateParseMinimal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "PrivateParseMinimal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ParsingError>(this, ___internal_method);
}
inline void System::Uri::PrivateParseMinimalIri(::StringW newHost, uint16_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "PrivateParseMinimalIri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newHost, idx);
}
inline void System::Uri::CreateUriInfo(::System::Uri_Flags cF) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CreateUriInfo", {}, { ::i2c::type_of<::System::Uri_Flags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cF);
}
inline void System::Uri::CreateHostString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CreateHostString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Uri::CreateHostStringHelper(::StringW str, uint16_t idx, uint16_t end, ::by_ref<::System::Uri_Flags> flags, ::by_ref<::StringW> scopeId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CreateHostStringHelper",
                                                                                                {},
                                                                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(),
                                                                                                  ::i2c::type_of<::by_ref<::System::Uri_Flags>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str, idx, end, flags, scopeId);
}
inline void System::Uri::GetHostViaCustomSyntax() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "GetHostViaCustomSyntax", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Uri::GetParts(::System::UriComponents uriParts, ::System::UriFormat formatAs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "GetParts", {}, { ::i2c::type_of<::System::UriComponents>(), ::i2c::type_of<::System::UriFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, uriParts, formatAs);
}
inline ::StringW System::Uri::GetEscapedParts(::System::UriComponents uriParts) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "GetEscapedParts", {}, { ::i2c::type_of<::System::UriComponents>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, uriParts);
}
inline ::StringW System::Uri::GetUnescapedParts(::System::UriComponents uriParts, ::System::UriFormat formatAs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "GetUnescapedParts", {}, { ::i2c::type_of<::System::UriComponents>(), ::i2c::type_of<::System::UriFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, uriParts, formatAs);
}
inline ::StringW System::Uri::ReCreateParts(::System::UriComponents parts, uint16_t nonCanonical, ::System::UriFormat formatAs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                                           { "ReCreateParts", {}, { ::i2c::type_of<::System::UriComponents>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::UriFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, parts, nonCanonical, formatAs);
}
inline ::StringW System::Uri::GetUriPartsFromUserString(::System::UriComponents uriParts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "GetUriPartsFromUserString", {}, { ::i2c::type_of<::System::UriComponents>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, uriParts);
}
inline void System::Uri::ParseRemaining() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "ParseRemaining", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint16_t System::Uri::ParseSchemeCheckImplicitFile(char16_t* uriString, uint16_t length, ::by_ref<::System::ParsingError> err, ::by_ref<::System::Uri_Flags> flags,
                                                          ::by_ref<::System::UriParser*> syntax) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "ParseSchemeCheckImplicitFile",
                                                                                   {},
                                                                                   { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<::System::ParsingError>>(),
                                                                                     ::i2c::type_of<::by_ref<::System::Uri_Flags>>(), ::i2c::type_of<::by_ref<::System::UriParser*>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, uriString, length, err, flags, syntax);
}
inline bool System::Uri::CheckKnownSchemes(int64_t* lptr, uint16_t nChars, ::by_ref<::System::UriParser*> syntax) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                                           { "CheckKnownSchemes", {}, { ::i2c::type_of<int64_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<::System::UriParser*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lptr, nChars, syntax);
}
inline ::System::ParsingError System::Uri::CheckSchemeSyntax(char16_t* ptr, uint16_t length, ::by_ref<::System::UriParser*> syntax) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                              { "CheckSchemeSyntax", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<::System::UriParser*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ParsingError>(nullptr, ___internal_method, ptr, length, syntax);
}
inline uint16_t System::Uri::CheckAuthorityHelper(char16_t* pString, uint16_t idx, uint16_t length, ::by_ref<::System::ParsingError> err, ::by_ref<::System::Uri_Flags> flags,
                                                  ::System::UriParser* syntax, ::by_ref<::StringW> newHost) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                                           { "CheckAuthorityHelper",
                                                             {},
                                                             { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<::System::ParsingError>>(),
                                                               ::i2c::type_of<::by_ref<::System::Uri_Flags>>(), ::i2c::type_of<::System::UriParser*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method, pString, idx, length, err, flags, syntax, newHost);
}
inline void System::Uri::CheckAuthorityHelperHandleDnsIri(char16_t* pString, uint16_t start, int32_t end, int32_t startInput, bool iriParsing, bool hasUnicode, ::System::UriParser* syntax,
                                                          ::StringW userInfoString, ::by_ref<::System::Uri_Flags> flags, ::by_ref<bool> justNormalized, ::by_ref<::StringW> newHost,
                                                          ::by_ref<::System::ParsingError> err) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                              { "CheckAuthorityHelperHandleDnsIri",
                                                {},
                                                { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                  ::i2c::type_of<bool>(), ::i2c::type_of<::System::UriParser*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Uri_Flags>>(),
                                                  ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::System::ParsingError>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pString, start, end, startInput, iriParsing, hasUnicode, syntax, userInfoString, flags, justNormalized, newHost, err);
}
inline void System::Uri::CheckAuthorityHelperHandleAnyHostIri(char16_t* pString, int32_t startInput, int32_t end, bool iriParsing, bool hasUnicode, ::System::UriParser* syntax,
                                                              ::by_ref<::System::Uri_Flags> flags, ::by_ref<::StringW> newHost, ::by_ref<::System::ParsingError> err) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CheckAuthorityHelperHandleAnyHostIri",
                                                                                   {},
                                                                                   { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                                                     ::i2c::type_of<bool>(), ::i2c::type_of<::System::UriParser*>(), ::i2c::type_of<::by_ref<::System::Uri_Flags>>(),
                                                                                     ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::System::ParsingError>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pString, startInput, end, iriParsing, hasUnicode, syntax, flags, newHost, err);
}
inline void System::Uri::FindEndOfComponent(::StringW input, ::by_ref<uint16_t> idx, uint16_t end, char16_t delim) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                       { "FindEndOfComponent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, idx, end, delim);
}
inline void System::Uri::FindEndOfComponent(char16_t* str, ::by_ref<uint16_t> idx, uint16_t end, char16_t delim) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                       { "FindEndOfComponent", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str, idx, end, delim);
}
inline ::System::Uri_Check System::Uri::CheckCanonical(char16_t* str, ::by_ref<uint16_t> idx, uint16_t end, char16_t delim) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                       { "CheckCanonical", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri_Check>(this, ___internal_method, str, idx, end, delim);
}
inline ::ArrayW<char16_t> System::Uri::GetCanonicalPath(::ArrayW<char16_t> dest, ::by_ref<int32_t> pos, ::System::UriFormat formatAs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                              { "GetCanonicalPath", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::UriFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(this, ___internal_method, dest, pos, formatAs);
}
inline void System::Uri::UnescapeOnly(char16_t* pch, int32_t start, ::by_ref<int32_t> end, char16_t ch1, char16_t ch2, char16_t ch3) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "UnescapeOnly",
                                                                                                {},
                                                                                                { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                                  ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pch, start, end, ch1, ch2, ch3);
}
inline ::ArrayW<char16_t> System::Uri::Compress(::ArrayW<char16_t> dest, uint16_t start, ::by_ref<int32_t> destLength, ::System::UriParser* syntax) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                          { "Compress", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::UriParser*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(nullptr, ___internal_method, dest, start, destLength, syntax);
}
inline int32_t System::Uri::CalculateCaseInsensitiveHashCode(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CalculateCaseInsensitiveHashCode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text);
}
inline ::StringW System::Uri::CombineUri(::System::Uri* basePart, ::StringW relativePart, ::System::UriFormat uriFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CombineUri", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::UriFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, basePart, relativePart, uriFormat);
}
inline bool System::Uri::get_HasAuthority() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "get_HasAuthority", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Uri::IsLWS(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsLWS", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline bool System::Uri::IsAsciiLetter(char16_t character) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsAsciiLetter", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, character);
}
inline bool System::Uri::IsAsciiLetterOrDigit(char16_t character) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsAsciiLetterOrDigit", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, character);
}
inline bool System::Uri::IsBidiControlCharacter(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsBidiControlCharacter", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline ::StringW System::Uri::StripBidiControlCharacter(char16_t* strToClean, int32_t start, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "StripBidiControlCharacter", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, strToClean, start, length);
}
inline void System::Uri::CreateThis(::StringW uri, bool dontEscape, ::System::UriKind uriKind) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CreateThis", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::UriKind>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri, dontEscape, uriKind);
}
inline void System::Uri::InitializeUri(::System::ParsingError err, ::System::UriKind uriKind, ::by_ref<::System::UriFormatException*> e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                          { "InitializeUri", {}, { ::i2c::type_of<::System::ParsingError>(), ::i2c::type_of<::System::UriKind>(), ::i2c::type_of<::by_ref<::System::UriFormatException*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, err, uriKind, e);
}
inline bool System::Uri::CheckForConfigLoad(::StringW data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CheckForConfigLoad", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
inline bool System::Uri::CheckForUnicode(::StringW data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CheckForUnicode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
inline bool System::Uri::CheckForEscapedUnreserved(::StringW data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CheckForEscapedUnreserved", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
inline bool System::Uri::TryCreate(::StringW uriString, ::System::UriKind uriKind, ::by_ref<::System::Uri*> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "TryCreate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::UriKind>(), ::i2c::type_of<::by_ref<::System::Uri*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, uriString, uriKind, result);
}
inline bool System::Uri::TryCreate(::System::Uri* baseUri, ::StringW relativeUri, ::by_ref<::System::Uri*> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "TryCreate", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Uri*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, baseUri, relativeUri, result);
}
inline bool System::Uri::TryCreate(::System::Uri* baseUri, ::System::Uri* relativeUri, ::by_ref<::System::Uri*> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "TryCreate", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::Uri*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, baseUri, relativeUri, result);
}
inline ::StringW System::Uri::GetComponents(::System::UriComponents components, ::System::UriFormat format) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "GetComponents", {}, { ::i2c::type_of<::System::UriComponents>(), ::i2c::type_of<::System::UriFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, components, format);
}
inline bool System::Uri::IsWellFormedOriginalString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsWellFormedOriginalString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Uri::IsWellFormedUriString(::StringW uriString, ::System::UriKind uriKind) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsWellFormedUriString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::UriKind>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, uriString, uriKind);
}
inline bool System::Uri::InternalIsWellFormedOriginalString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "InternalIsWellFormedOriginalString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Uri::UnescapeDataString(::StringW stringToUnescape) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "UnescapeDataString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, stringToUnescape);
}
inline ::StringW System::Uri::EscapeUriString(::StringW stringToEscape) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "EscapeUriString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, stringToEscape);
}
inline ::StringW System::Uri::EscapeDataString(::StringW stringToEscape) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "EscapeDataString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, stringToEscape);
}
inline ::StringW System::Uri::EscapeUnescapeIri(::StringW input, int32_t start, int32_t end, ::System::UriComponents component) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Uri*>(),
                                       { "EscapeUnescapeIri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::UriComponents>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, input, start, end, component);
}
inline void System::Uri::_ctor(::System::Uri_Flags flags, ::System::UriParser* uriParser, ::StringW uri) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { ".ctor", {}, { ::i2c::type_of<::System::Uri_Flags>(), ::i2c::type_of<::System::UriParser*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags, uriParser, uri);
}
inline ::System::Uri* System::Uri::CreateHelper(::StringW uriString, bool dontEscape, ::System::UriKind uriKind, ::by_ref<::System::UriFormatException*> e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Uri*>(),
          { "CreateHelper", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::UriKind>(), ::i2c::type_of<::by_ref<::System::UriFormatException*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*>(nullptr, ___internal_method, uriString, dontEscape, uriKind, e);
}
inline ::System::Uri* System::Uri::ResolveHelper(::System::Uri* baseUri, ::System::Uri* relativeUri, ::by_ref<::StringW> newUriString, ::by_ref<bool> userEscaped,
                                                 ::by_ref<::System::UriFormatException*> e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "ResolveHelper",
                                                                                   {},
                                                                                   { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                                                                     ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::System::UriFormatException*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*>(nullptr, ___internal_method, baseUri, relativeUri, newUriString, userEscaped, e);
}
inline ::StringW System::Uri::GetRelativeSerializationString(::System::UriFormat format) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "GetRelativeSerializationString", {}, { ::i2c::type_of<::System::UriFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, format);
}
inline ::StringW System::Uri::GetComponentsHelper(::System::UriComponents uriComponents, ::System::UriFormat uriFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "GetComponentsHelper", {}, { ::i2c::type_of<::System::UriComponents>(), ::i2c::type_of<::System::UriFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, uriComponents, uriFormat);
}
inline bool System::Uri::IsBaseOf(::System::Uri* uri) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsBaseOf", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uri);
}
inline bool System::Uri::IsBaseOfHelper(::System::Uri* uriLink) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "IsBaseOfHelper", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uriLink);
}
inline void System::Uri::CreateThisFromUri(::System::Uri* otherUri) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Uri*>(), { "CreateThisFromUri", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherUri);
}
inline ::System::Uri* System::Uri::New_ctor(::StringW uriString) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Uri*>(uriString));
}
inline ::System::Uri* System::Uri::New_ctor(::StringW uriString, ::System::UriKind uriKind) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Uri*>(uriString, uriKind));
}
inline ::System::Uri* System::Uri::New_ctor(::System::Uri* baseUri, ::StringW relativeUri) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Uri*>(baseUri, relativeUri));
}
inline ::System::Uri* System::Uri::New_ctor(::System::Uri* baseUri, ::System::Uri* relativeUri) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Uri*>(baseUri, relativeUri));
}
inline ::System::Uri* System::Uri::New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Uri*>(serializationInfo, streamingContext));
}
inline ::System::Uri* System::Uri::New_ctor(::System::Uri_Flags flags, ::System::UriParser* uriParser, ::StringW uri) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Uri*>(flags, uriParser, uri));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Uri::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Uri::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Uri::Uri() {}
constexpr ::System::UriKind System::Uri::DotNetRelativeOrAbsolute{ static_cast<int32_t>(0x12c) };
constexpr ::System::UriFormat System::Uri::V1ToStringUnescape{ static_cast<int32_t>(0x7fff) };
