#pragma once
// IWYU pragma private; include "System/UriParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__UriSyntaxFlags_impl.hpp"
#include "System/zzzz__UriParser_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__UriComponents_def.hpp"
#include "System/zzzz__UriFormatException_def.hpp"
#include "System/zzzz__UriFormat_def.hpp"
#include "System/zzzz__UriParser_BuiltInUriParser_def.hpp"
#include "System/zzzz__UriParser_def.hpp"
#include "System/zzzz__UriSyntaxFlags_def.hpp"
#include "System/zzzz__Uri_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::UriParser_UriQuirksVersion::UriParser_UriQuirksVersion(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::UriParser_UriQuirksVersion::UriParser_UriQuirksVersion() {}
constexpr ::System::UriParser_UriQuirksVersion System::UriParser_UriQuirksVersion::V2{ static_cast<int32_t>(0x2) };
constexpr ::System::UriParser_UriQuirksVersion System::UriParser_UriQuirksVersion::V3{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::System::UriParser.get_SchemeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::UriParser::*)()>(&::System::UriParser::get_SchemeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63726dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "get_SchemeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.get_DefaultPort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::UriParser::*)()>(&::System::UriParser::get_DefaultPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63726e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "get_DefaultPort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UriParser::*)()>(&::System::UriParser::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63726ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.OnNewUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::UriParser* (::System::UriParser::*)()>(&::System::UriParser::OnNewUri)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6372728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { ::i2c::class_of<::System::UriParser*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.InitializeAndValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UriParser::*)(::System::Uri*, ::by_ref<::System::UriFormatException*>)>(&::System::UriParser::InitializeAndValidate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x637272c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { ::i2c::class_of<::System::UriParser*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.Resolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::UriParser::*)(::System::Uri*, ::System::Uri*, ::by_ref<::System::UriFormatException*>)>(&::System::UriParser::Resolve)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6372754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { ::i2c::class_of<::System::UriParser*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.IsBaseOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::UriParser::*)(::System::Uri*, ::System::Uri*)>(&::System::UriParser::IsBaseOf)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6372920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { ::i2c::class_of<::System::UriParser*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.GetComponents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::UriParser::*)(::System::Uri*, ::System::UriComponents, ::System::UriFormat)>(&::System::UriParser::GetComponents)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x637293c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { ::i2c::class_of<::System::UriParser*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.IsWellFormedOriginalString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::UriParser::*)(::System::Uri*)>(&::System::UriParser::IsWellFormedOriginalString)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6372b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { ::i2c::class_of<::System::UriParser*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.get_ShouldUseLegacyV2Quirks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::UriParser::get_ShouldUseLegacyV2Quirks)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6372534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "get_ShouldUseLegacyV2Quirks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.get_Flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::UriSyntaxFlags (::System::UriParser::*)()>(&::System::UriParser::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63734b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "get_Flags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.NotAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::UriParser::*)(::System::UriSyntaxFlags)>(&::System::UriParser::NotAny)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x636f294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "NotAny", {}, { ::i2c::type_of<::System::UriSyntaxFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.InFact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::UriParser::*)(::System::UriSyntaxFlags)>(&::System::UriParser::InFact)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x636f260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "InFact", {}, { ::i2c::type_of<::System::UriSyntaxFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.IsAllSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::UriParser::*)(::System::UriSyntaxFlags)>(&::System::UriParser::IsAllSet)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x63734f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "IsAllSet", {}, { ::i2c::type_of<::System::UriSyntaxFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.IsFullMatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::UriParser::*)(::System::UriSyntaxFlags, ::System::UriSyntaxFlags)>(&::System::UriParser::IsFullMatch)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x63734c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "IsFullMatch", {}, { ::i2c::type_of<::System::UriSyntaxFlags>(), ::i2c::type_of<::System::UriSyntaxFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UriParser::*)(::System::UriSyntaxFlags)>(&::System::UriParser::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x637270c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::UriSyntaxFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.FindOrFetchAsUnknownV1Syntax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::UriParser* (*)(::StringW)>(&::System::UriParser::FindOrFetchAsUnknownV1Syntax)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x637352c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "FindOrFetchAsUnknownV1Syntax", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.GetSyntax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::UriParser* (*)(::StringW)>(&::System::UriParser::GetSyntax)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x636f188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "GetSyntax", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.get_IsSimple
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::UriParser::*)()>(&::System::UriParser::get_IsSimple)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6373830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "get_IsSimple", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.InternalOnNewUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::UriParser* (::System::UriParser::*)()>(&::System::UriParser::InternalOnNewUri)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x637383c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "InternalOnNewUri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.InternalValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UriParser::*)(::System::Uri*, ::by_ref<::System::UriFormatException*>)>(&::System::UriParser::InternalValidate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6373880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "InternalValidate", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::UriFormatException*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.InternalResolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::UriParser::*)(::System::Uri*, ::System::Uri*, ::by_ref<::System::UriFormatException*>)>(
    &::System::UriParser::InternalResolve)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x637388c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::UriParser*>(),
                            { "InternalResolve", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::UriFormatException*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.InternalIsBaseOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::UriParser::*)(::System::Uri*, ::System::Uri*)>(&::System::UriParser::InternalIsBaseOf)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6373898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "InternalIsBaseOf", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.InternalGetComponents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::UriParser::*)(::System::Uri*, ::System::UriComponents, ::System::UriFormat)>(&::System::UriParser::InternalGetComponents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63738a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::UriParser*>(),
                                         { "InternalGetComponents", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::UriComponents>(), ::i2c::type_of<::System::UriFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriParser.InternalIsWellFormedOriginalString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::UriParser::*)(::System::Uri*)>(&::System::UriParser::InternalIsWellFormedOriginalString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63738b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "InternalIsWellFormedOriginalString", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::UriSyntaxFlags& System::UriParser::__cordl_internal_get_m_Flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr ::System::UriSyntaxFlags const& System::UriParser::__cordl_internal_get_m_Flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Flags;
}
constexpr void System::UriParser::__cordl_internal_set_m_Flags(::System::UriSyntaxFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Flags = value;
}
constexpr ::System::UriSyntaxFlags& System::UriParser::__cordl_internal_get_m_UpdatableFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdatableFlags;
}
constexpr ::System::UriSyntaxFlags const& System::UriParser::__cordl_internal_get_m_UpdatableFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdatableFlags;
}
constexpr void System::UriParser::__cordl_internal_set_m_UpdatableFlags(::System::UriSyntaxFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdatableFlags = value;
}
constexpr bool& System::UriParser::__cordl_internal_get_m_UpdatableFlagsUsed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdatableFlagsUsed;
}
constexpr bool const& System::UriParser::__cordl_internal_get_m_UpdatableFlagsUsed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdatableFlagsUsed;
}
constexpr void System::UriParser::__cordl_internal_set_m_UpdatableFlagsUsed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdatableFlagsUsed = value;
}
constexpr int32_t& System::UriParser::__cordl_internal_get_m_Port() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Port;
}
constexpr int32_t const& System::UriParser::__cordl_internal_get_m_Port() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Port;
}
constexpr void System::UriParser::__cordl_internal_set_m_Port(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Port = value;
}
constexpr ::StringW& System::UriParser::__cordl_internal_get_m_Scheme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scheme;
}
constexpr ::StringW const& System::UriParser::__cordl_internal_get_m_Scheme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scheme;
}
constexpr void System::UriParser::__cordl_internal_set_m_Scheme(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Scheme = value;
}
inline void System::UriParser::setStaticF_m_Table(::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>*, "m_Table", ::System::UriParser*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>* System::UriParser::getStaticF_m_Table() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>*, "m_Table", ::System::UriParser*>();
}
inline void System::UriParser::setStaticF_m_TempTable(::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>*, "m_TempTable", ::System::UriParser*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>* System::UriParser::getStaticF_m_TempTable() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>*, "m_TempTable", ::System::UriParser*>();
}
inline void System::UriParser::setStaticF_HttpUri(::System::UriParser* value) {
  ::cordl_internals::setStaticField<::System::UriParser*, "HttpUri", ::System::UriParser*>(std::forward<::System::UriParser*>(value));
}
inline ::System::UriParser* System::UriParser::getStaticF_HttpUri() {
  return ::cordl_internals::getStaticField<::System::UriParser*, "HttpUri", ::System::UriParser*>();
}
inline void System::UriParser::setStaticF_HttpsUri(::System::UriParser* value) {
  ::cordl_internals::setStaticField<::System::UriParser*, "HttpsUri", ::System::UriParser*>(std::forward<::System::UriParser*>(value));
}
inline ::System::UriParser* System::UriParser::getStaticF_HttpsUri() {
  return ::cordl_internals::getStaticField<::System::UriParser*, "HttpsUri", ::System::UriParser*>();
}
inline void System::UriParser::setStaticF_WsUri(::System::UriParser* value) {
  ::cordl_internals::setStaticField<::System::UriParser*, "WsUri", ::System::UriParser*>(std::forward<::System::UriParser*>(value));
}
inline ::System::UriParser* System::UriParser::getStaticF_WsUri() {
  return ::cordl_internals::getStaticField<::System::UriParser*, "WsUri", ::System::UriParser*>();
}
inline void System::UriParser::setStaticF_WssUri(::System::UriParser* value) {
  ::cordl_internals::setStaticField<::System::UriParser*, "WssUri", ::System::UriParser*>(std::forward<::System::UriParser*>(value));
}
inline ::System::UriParser* System::UriParser::getStaticF_WssUri() {
  return ::cordl_internals::getStaticField<::System::UriParser*, "WssUri", ::System::UriParser*>();
}
inline void System::UriParser::setStaticF_FtpUri(::System::UriParser* value) {
  ::cordl_internals::setStaticField<::System::UriParser*, "FtpUri", ::System::UriParser*>(std::forward<::System::UriParser*>(value));
}
inline ::System::UriParser* System::UriParser::getStaticF_FtpUri() {
  return ::cordl_internals::getStaticField<::System::UriParser*, "FtpUri", ::System::UriParser*>();
}
inline void System::UriParser::setStaticF_FileUri(::System::UriParser* value) {
  ::cordl_internals::setStaticField<::System::UriParser*, "FileUri", ::System::UriParser*>(std::forward<::System::UriParser*>(value));
}
inline ::System::UriParser* System::UriParser::getStaticF_FileUri() {
  return ::cordl_internals::getStaticField<::System::UriParser*, "FileUri", ::System::UriParser*>();
}
inline void System::UriParser::setStaticF_GopherUri(::System::UriParser* value) {
  ::cordl_internals::setStaticField<::System::UriParser*, "GopherUri", ::System::UriParser*>(std::forward<::System::UriParser*>(value));
}
inline ::System::UriParser* System::UriParser::getStaticF_GopherUri() {
  return ::cordl_internals::getStaticField<::System::UriParser*, "GopherUri", ::System::UriParser*>();
}
inline void System::UriParser::setStaticF_NntpUri(::System::UriParser* value) {
  ::cordl_internals::setStaticField<::System::UriParser*, "NntpUri", ::System::UriParser*>(std::forward<::System::UriParser*>(value));
}
inline ::System::UriParser* System::UriParser::getStaticF_NntpUri() {
  return ::cordl_internals::getStaticField<::System::UriParser*, "NntpUri", ::System::UriParser*>();
}
inline void System::UriParser::setStaticF_NewsUri(::System::UriParser* value) {
  ::cordl_internals::setStaticField<::System::UriParser*, "NewsUri", ::System::UriParser*>(std::forward<::System::UriParser*>(value));
}
inline ::System::UriParser* System::UriParser::getStaticF_NewsUri() {
  return ::cordl_internals::getStaticField<::System::UriParser*, "NewsUri", ::System::UriParser*>();
}
inline void System::UriParser::setStaticF_MailToUri(::System::UriParser* value) {
  ::cordl_internals::setStaticField<::System::UriParser*, "MailToUri", ::System::UriParser*>(std::forward<::System::UriParser*>(value));
}
inline ::System::UriParser* System::UriParser::getStaticF_MailToUri() {
  return ::cordl_internals::getStaticField<::System::UriParser*, "MailToUri", ::System::UriParser*>();
}
inline void System::UriParser::setStaticF_UuidUri(::System::UriParser* value) {
  ::cordl_internals::setStaticField<::System::UriParser*, "UuidUri", ::System::UriParser*>(std::forward<::System::UriParser*>(value));
}
inline ::System::UriParser* System::UriParser::getStaticF_UuidUri() {
  return ::cordl_internals::getStaticField<::System::UriParser*, "UuidUri", ::System::UriParser*>();
}
inline void System::UriParser::setStaticF_TelnetUri(::System::UriParser* value) {
  ::cordl_internals::setStaticField<::System::UriParser*, "TelnetUri", ::System::UriParser*>(std::forward<::System::UriParser*>(value));
}
inline ::System::UriParser* System::UriParser::getStaticF_TelnetUri() {
  return ::cordl_internals::getStaticField<::System::UriParser*, "TelnetUri", ::System::UriParser*>();
}
inline void System::UriParser::setStaticF_LdapUri(::System::UriParser* value) {
  ::cordl_internals::setStaticField<::System::UriParser*, "LdapUri", ::System::UriParser*>(std::forward<::System::UriParser*>(value));
}
inline ::System::UriParser* System::UriParser::getStaticF_LdapUri() {
  return ::cordl_internals::getStaticField<::System::UriParser*, "LdapUri", ::System::UriParser*>();
}
inline void System::UriParser::setStaticF_NetTcpUri(::System::UriParser* value) {
  ::cordl_internals::setStaticField<::System::UriParser*, "NetTcpUri", ::System::UriParser*>(std::forward<::System::UriParser*>(value));
}
inline ::System::UriParser* System::UriParser::getStaticF_NetTcpUri() {
  return ::cordl_internals::getStaticField<::System::UriParser*, "NetTcpUri", ::System::UriParser*>();
}
inline void System::UriParser::setStaticF_NetPipeUri(::System::UriParser* value) {
  ::cordl_internals::setStaticField<::System::UriParser*, "NetPipeUri", ::System::UriParser*>(std::forward<::System::UriParser*>(value));
}
inline ::System::UriParser* System::UriParser::getStaticF_NetPipeUri() {
  return ::cordl_internals::getStaticField<::System::UriParser*, "NetPipeUri", ::System::UriParser*>();
}
inline void System::UriParser::setStaticF_VsMacrosUri(::System::UriParser* value) {
  ::cordl_internals::setStaticField<::System::UriParser*, "VsMacrosUri", ::System::UriParser*>(std::forward<::System::UriParser*>(value));
}
inline ::System::UriParser* System::UriParser::getStaticF_VsMacrosUri() {
  return ::cordl_internals::getStaticField<::System::UriParser*, "VsMacrosUri", ::System::UriParser*>();
}
inline void System::UriParser::setStaticF_s_QuirksVersion(::System::UriParser_UriQuirksVersion value) {
  ::cordl_internals::setStaticField<::System::UriParser_UriQuirksVersion, "s_QuirksVersion", ::System::UriParser*>(std::forward<::System::UriParser_UriQuirksVersion>(value));
}
inline ::System::UriParser_UriQuirksVersion System::UriParser::getStaticF_s_QuirksVersion() {
  return ::cordl_internals::getStaticField<::System::UriParser_UriQuirksVersion, "s_QuirksVersion", ::System::UriParser*>();
}
inline void System::UriParser::setStaticF_HttpSyntaxFlags(::System::UriSyntaxFlags value) {
  ::cordl_internals::setStaticField<::System::UriSyntaxFlags, "HttpSyntaxFlags", ::System::UriParser*>(std::forward<::System::UriSyntaxFlags>(value));
}
inline ::System::UriSyntaxFlags System::UriParser::getStaticF_HttpSyntaxFlags() {
  return ::cordl_internals::getStaticField<::System::UriSyntaxFlags, "HttpSyntaxFlags", ::System::UriParser*>();
}
inline void System::UriParser::setStaticF_FileSyntaxFlags(::System::UriSyntaxFlags value) {
  ::cordl_internals::setStaticField<::System::UriSyntaxFlags, "FileSyntaxFlags", ::System::UriParser*>(std::forward<::System::UriSyntaxFlags>(value));
}
inline ::System::UriSyntaxFlags System::UriParser::getStaticF_FileSyntaxFlags() {
  return ::cordl_internals::getStaticField<::System::UriSyntaxFlags, "FileSyntaxFlags", ::System::UriParser*>();
}
inline ::StringW System::UriParser::get_SchemeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "get_SchemeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::UriParser::get_DefaultPort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "get_DefaultPort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::UriParser::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::UriParser* System::UriParser::OnNewUri() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::UriParser*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::UriParser*>(this, ___internal_method);
}
inline void System::UriParser::InitializeAndValidate(::System::Uri* uri, ::by_ref<::System::UriFormatException*> parsingError) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::UriParser*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri, parsingError);
}
inline ::StringW System::UriParser::Resolve(::System::Uri* baseUri, ::System::Uri* relativeUri, ::by_ref<::System::UriFormatException*> parsingError) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::UriParser*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, baseUri, relativeUri, parsingError);
}
inline bool System::UriParser::IsBaseOf(::System::Uri* baseUri, ::System::Uri* relativeUri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::UriParser*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, baseUri, relativeUri);
}
inline ::StringW System::UriParser::GetComponents(::System::Uri* uri, ::System::UriComponents components, ::System::UriFormat format) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::UriParser*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, uri, components, format);
}
inline bool System::UriParser::IsWellFormedOriginalString(::System::Uri* uri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::UriParser*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uri);
}
inline bool System::UriParser::get_ShouldUseLegacyV2Quirks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "get_ShouldUseLegacyV2Quirks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::UriSyntaxFlags System::UriParser::get_Flags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "get_Flags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::UriSyntaxFlags>(this, ___internal_method);
}
inline bool System::UriParser::NotAny(::System::UriSyntaxFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "NotAny", {}, { ::i2c::type_of<::System::UriSyntaxFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flags);
}
inline bool System::UriParser::InFact(::System::UriSyntaxFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "InFact", {}, { ::i2c::type_of<::System::UriSyntaxFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flags);
}
inline bool System::UriParser::IsAllSet(::System::UriSyntaxFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "IsAllSet", {}, { ::i2c::type_of<::System::UriSyntaxFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flags);
}
inline bool System::UriParser::IsFullMatch(::System::UriSyntaxFlags flags, ::System::UriSyntaxFlags expected) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "IsFullMatch", {}, { ::i2c::type_of<::System::UriSyntaxFlags>(), ::i2c::type_of<::System::UriSyntaxFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flags, expected);
}
inline void System::UriParser::_ctor(::System::UriSyntaxFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::UriSyntaxFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags);
}
inline ::System::UriParser* System::UriParser::FindOrFetchAsUnknownV1Syntax(::StringW lwrCaseScheme) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "FindOrFetchAsUnknownV1Syntax", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::UriParser*>(nullptr, ___internal_method, lwrCaseScheme);
}
inline ::System::UriParser* System::UriParser::GetSyntax(::StringW lwrCaseScheme) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "GetSyntax", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::UriParser*>(nullptr, ___internal_method, lwrCaseScheme);
}
inline bool System::UriParser::get_IsSimple() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "get_IsSimple", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::UriParser* System::UriParser::InternalOnNewUri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "InternalOnNewUri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::UriParser*>(this, ___internal_method);
}
inline void System::UriParser::InternalValidate(::System::Uri* thisUri, ::by_ref<::System::UriFormatException*> parsingError) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "InternalValidate", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::UriFormatException*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisUri, parsingError);
}
inline ::StringW System::UriParser::InternalResolve(::System::Uri* thisBaseUri, ::System::Uri* uriLink, ::by_ref<::System::UriFormatException*> parsingError) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::UriParser*>(),
                                       { "InternalResolve", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::UriFormatException*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, thisBaseUri, uriLink, parsingError);
}
inline bool System::UriParser::InternalIsBaseOf(::System::Uri* thisBaseUri, ::System::Uri* uriLink) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "InternalIsBaseOf", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, thisBaseUri, uriLink);
}
inline ::StringW System::UriParser::InternalGetComponents(::System::Uri* thisUri, ::System::UriComponents uriComponents, ::System::UriFormat uriFormat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::UriParser*>(),
                                       { "InternalGetComponents", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::UriComponents>(), ::i2c::type_of<::System::UriFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, thisUri, uriComponents, uriFormat);
}
inline bool System::UriParser::InternalIsWellFormedOriginalString(::System::Uri* thisUri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriParser*>(), { "InternalIsWellFormedOriginalString", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, thisUri);
}
inline ::System::UriParser* System::UriParser::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::UriParser*>());
}
inline ::System::UriParser* System::UriParser::New_ctor(::System::UriSyntaxFlags flags) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::UriParser*>(flags));
}
// Ctor Parameters []
constexpr ::System::UriParser::UriParser() {}
constexpr ::System::UriSyntaxFlags System::UriParser::SchemeOnlyFlags{ static_cast<int32_t>(0x10) };
constexpr ::System::UriSyntaxFlags System::UriParser::c_UpdatableFlags{ static_cast<int32_t>(0x2000000) };
constexpr ::System::UriSyntaxFlags System::UriParser::UnknownV1SyntaxFlags{ static_cast<int32_t>(0x14f10ffe) };
constexpr ::System::UriSyntaxFlags System::UriParser::FtpSyntaxFlags{ static_cast<int32_t>(0x15e00f5d) };
constexpr ::System::UriSyntaxFlags System::UriParser::VsmacrosSyntaxFlags{ static_cast<int32_t>(0x17d02fd1) };
constexpr ::System::UriSyntaxFlags System::UriParser::GopherSyntaxFlags{ static_cast<int32_t>(0x14200f5d) };
constexpr ::System::UriSyntaxFlags System::UriParser::NewsSyntaxFlags{ static_cast<int32_t>(0x10000050) };
constexpr ::System::UriSyntaxFlags System::UriParser::NntpSyntaxFlags{ static_cast<int32_t>(0x14200f5d) };
constexpr ::System::UriSyntaxFlags System::UriParser::TelnetSyntaxFlags{ static_cast<int32_t>(0x14200f5d) };
constexpr ::System::UriSyntaxFlags System::UriParser::LdapSyntaxFlags{ static_cast<int32_t>(0x14200ffd) };
constexpr ::System::UriSyntaxFlags System::UriParser::MailtoSyntaxFlags{ static_cast<int32_t>(0x14004ffc) };
constexpr ::System::UriSyntaxFlags System::UriParser::NetPipeSyntaxFlags{ static_cast<int32_t>(0x17e00e71) };
constexpr ::System::UriSyntaxFlags System::UriParser::NetTcpSyntaxFlags{ static_cast<int32_t>(0x17e00e79) };
