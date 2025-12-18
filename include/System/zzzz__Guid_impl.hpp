#pragma once
// IWYU pragma private; include "System/Guid.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__ISpanFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Guid_GuidStyles::Guid_GuidStyles(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Guid_GuidStyles::Guid_GuidStyles() {}
constexpr ::System::Guid_GuidStyles System::Guid_GuidStyles::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Guid_GuidStyles System::Guid_GuidStyles::AllowParenthesis{ static_cast<int32_t>(0x1) };
constexpr ::System::Guid_GuidStyles System::Guid_GuidStyles::AllowBraces{ static_cast<int32_t>(0x2) };
constexpr ::System::Guid_GuidStyles System::Guid_GuidStyles::AllowDashes{ static_cast<int32_t>(0x4) };
constexpr ::System::Guid_GuidStyles System::Guid_GuidStyles::AllowHexPrefix{ static_cast<int32_t>(0x8) };
constexpr ::System::Guid_GuidStyles System::Guid_GuidStyles::RequireParenthesis{ static_cast<int32_t>(0x10) };
constexpr ::System::Guid_GuidStyles System::Guid_GuidStyles::RequireBraces{ static_cast<int32_t>(0x20) };
constexpr ::System::Guid_GuidStyles System::Guid_GuidStyles::RequireDashes{ static_cast<int32_t>(0x40) };
constexpr ::System::Guid_GuidStyles System::Guid_GuidStyles::RequireHexPrefix{ static_cast<int32_t>(0x80) };
constexpr ::System::Guid_GuidStyles System::Guid_GuidStyles::HexFormat{ static_cast<int32_t>(0xa0) };
constexpr ::System::Guid_GuidStyles System::Guid_GuidStyles::NumberFormat{ static_cast<int32_t>(0x0) };
constexpr ::System::Guid_GuidStyles System::Guid_GuidStyles::DigitFormat{ static_cast<int32_t>(0x40) };
constexpr ::System::Guid_GuidStyles System::Guid_GuidStyles::BraceFormat{ static_cast<int32_t>(0x60) };
constexpr ::System::Guid_GuidStyles System::Guid_GuidStyles::ParenthesisFormat{ static_cast<int32_t>(0x50) };
constexpr ::System::Guid_GuidStyles System::Guid_GuidStyles::Any{ static_cast<int32_t>(0xf) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Guid_GuidParseThrowStyle::Guid_GuidParseThrowStyle(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Guid_GuidParseThrowStyle::Guid_GuidParseThrowStyle() {}
constexpr ::System::Guid_GuidParseThrowStyle System::Guid_GuidParseThrowStyle::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Guid_GuidParseThrowStyle System::Guid_GuidParseThrowStyle::All{ static_cast<int32_t>(0x1) };
constexpr ::System::Guid_GuidParseThrowStyle System::Guid_GuidParseThrowStyle::AllButOverflow{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Guid_ParseFailureKind::Guid_ParseFailureKind(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Guid_ParseFailureKind::Guid_ParseFailureKind() {}
constexpr ::System::Guid_ParseFailureKind System::Guid_ParseFailureKind::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Guid_ParseFailureKind System::Guid_ParseFailureKind::ArgumentNull{ static_cast<int32_t>(0x1) };
constexpr ::System::Guid_ParseFailureKind System::Guid_ParseFailureKind::Format{ static_cast<int32_t>(0x2) };
constexpr ::System::Guid_ParseFailureKind System::Guid_ParseFailureKind::FormatWithParameter{ static_cast<int32_t>(0x3) };
constexpr ::System::Guid_ParseFailureKind System::Guid_ParseFailureKind::NativeException{ static_cast<int32_t>(0x4) };
constexpr ::System::Guid_ParseFailureKind System::Guid_ParseFailureKind::FormatWithInnerException{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::System::Guid.NewGuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (*)()>(&::System::Guid::NewGuid)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a90974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "NewGuid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Guid::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::Guid::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a909c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Guid::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::System::Guid::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5a90a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Guid::*)(int32_t, int16_t, int16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)>(&::System::Guid::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5a90b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Guid::*)(::StringW)>(&::System::Guid::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5a90bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (*)(::StringW)>(&::System::Guid::Parse)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a91080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::Guid::Parse)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5a91114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.TryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ByRef<::System::Guid>)>(&::System::Guid::TryParse)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a91178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "TryParse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.TryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::ByRef<::System::Guid>)>(&::System::Guid::TryParse)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a9120c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "TryParse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.TryParseExact
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ::ByRef<::System::Guid>)>(&::System::Guid::TryParseExact)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a91258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "TryParseExact", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.TryParseExact
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::ByRef<::System::Guid>)>(
    &::System::Guid::TryParseExact)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5a912e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "TryParseExact", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.TryParseGuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Guid_GuidStyles, ::ByRef<::System::Guid_GuidResult>)>(
    &::System::Guid::TryParseGuid)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5a90cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "TryParseGuid", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid_GuidStyles>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid_GuidResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.TryParseGuidWithHexPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::ByRef<::System::Guid_GuidResult>)>(
    &::System::Guid::TryParseGuidWithHexPrefix)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x5a916f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "TryParseGuidWithHexPrefix", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid_GuidResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.TryParseGuidWithNoStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::ByRef<::System::Guid_GuidResult>)>(
    &::System::Guid::TryParseGuidWithNoStyle)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5a91cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "TryParseGuidWithNoStyle", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid_GuidResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.TryParseGuidWithDashes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::ByRef<::System::Guid_GuidResult>)>(
    &::System::Guid::TryParseGuidWithDashes)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5a91448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "TryParseGuidWithDashes", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid_GuidResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.StringToShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, int32_t, int32_t, ::ByRef<int16_t>, ::ByRef<::System::Guid_GuidResult>)>(
    &::System::Guid::StringToShort)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a9235c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "StringToShort", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid_GuidResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.StringToShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::ByRef<int32_t>, int32_t, int32_t, ::ByRef<int16_t>, ::ByRef<::System::Guid_GuidResult>)>(&::System::Guid::StringToShort)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5a926f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "StringToShort", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid_GuidResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.StringToInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, int32_t, int32_t, ::ByRef<int32_t>, ::ByRef<::System::Guid_GuidResult>)>(
    &::System::Guid::StringToInt)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a92330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "StringToInt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid_GuidResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.StringToInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::ByRef<int32_t>, int32_t, int32_t, ::ByRef<int32_t>, ::ByRef<::System::Guid_GuidResult>)>(&::System::Guid::StringToInt)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5a924f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "StringToInt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid_GuidResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.StringToLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::ByRef<int32_t>, int32_t, ::ByRef<int64_t>, ::ByRef<::System::Guid_GuidResult>)>(&::System::Guid::StringToLong)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5a923a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "StringToLong", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int64_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid_GuidResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.EatAllWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::Guid::EatAllWhitespace)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5a92010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "EatAllWhitespace", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.IsHexPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, int32_t)>(&::System::Guid::IsHexPrefix)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a92260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "IsHexPrefix", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.WriteByteHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Guid::*)(::System::Span_1<uint8_t>)>(&::System::Guid::WriteByteHelper)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5a92738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "WriteByteHelper", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.ToByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Guid::*)()>(&::System::Guid::ToByteArray)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a92848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "ToByteArray",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Guid::*)()>(&::System::Guid::ToString)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a928dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Guid::*)()>(&::System::Guid::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a92b00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Guid::*)(::System::Object*)>(&::System::Guid::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a92b1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Guid::*)(::System::Guid)>(&::System::Guid::Equals)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a92bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.GetResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Guid::*)(uint32_t, uint32_t)>(&::System::Guid::GetResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a92c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "GetResult", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Guid::*)(::System::Object*)>(&::System::Guid::CompareTo)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5a92c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Guid::*)(::System::Guid)>(&::System::Guid::CompareTo)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5a92da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Guid, ::System::Guid)>(&::System::Guid::op_Equality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a92e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Guid, ::System::Guid)>(&::System::Guid::op_Inequality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a92ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Guid::*)(::StringW)>(&::System::Guid::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a92ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.HexToChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(int32_t)>(&::System::Guid::HexToChar)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a92ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "HexToChar", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.HexsToChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(char16_t*, int32_t, int32_t)>(&::System::Guid::HexsToChars)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a92ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "HexsToChars", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.HexsToCharsHexOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(char16_t*, int32_t, int32_t)>(&::System::Guid::HexsToCharsHexOutput)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a92f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "HexsToCharsHexOutput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Guid::*)(::StringW, ::System::IFormatProvider*)>(&::System::Guid::ToString)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5a92928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.TryFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Guid::*)(::System::Span_1<char16_t>, ::ByRef<int32_t>, ::System::ReadOnlySpan_1<char16_t>)>(
    &::System::Guid::TryFormat)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x5a93000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "TryFormat", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.System_ISpanFormattable_TryFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Guid::*)(::System::Span_1<char16_t>, ::ByRef<int32_t>, ::System::ReadOnlySpan_1<char16_t>,
                                                                                                           ::System::IFormatProvider*)>(&::System::Guid::System_ISpanFormattable_TryFormat)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a9341c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "System.ISpanFormattable.TryFormat", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
inline void System::Guid::setStaticF_Empty(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get>(std::forward<::System::Guid>(value));
}
inline ::System::Guid System::Guid::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::System::Guid, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get>();
}
inline ::System::Guid System::Guid::NewGuid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "NewGuid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(nullptr, ___internal_method);
}
inline void System::Guid::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void System::Guid::_ctor(::System::ReadOnlySpan_1<uint8_t> b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void System::Guid::_ctor(int32_t a, int16_t b, int16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a, b, c, d, e, f, g, h, i, j, k);
}
inline void System::Guid::_ctor(::StringW g) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, g);
}
inline ::System::Guid System::Guid::Parse(::StringW input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(nullptr, ___internal_method, input);
}
inline ::System::Guid System::Guid::Parse(::System::ReadOnlySpan_1<char16_t> input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "Parse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(nullptr, ___internal_method, input);
}
inline bool System::Guid::TryParse(::StringW input, ::ByRef<::System::Guid> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "TryParse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, result);
}
inline bool System::Guid::TryParse(::System::ReadOnlySpan_1<char16_t> input, ::ByRef<::System::Guid> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "TryParse", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, result);
}
inline bool System::Guid::TryParseExact(::StringW input, ::StringW format, ::ByRef<::System::Guid> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "TryParseExact", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, format, result);
}
inline bool System::Guid::TryParseExact(::System::ReadOnlySpan_1<char16_t> input, ::System::ReadOnlySpan_1<char16_t> format, ::ByRef<::System::Guid> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "TryParseExact", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, format, result);
}
inline bool System::Guid::TryParseGuid(::System::ReadOnlySpan_1<char16_t> guidString, ::System::Guid_GuidStyles flags, ::ByRef<::System::Guid_GuidResult> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "TryParseGuid", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid_GuidStyles>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid_GuidResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, guidString, flags, result);
}
inline bool System::Guid::TryParseGuidWithHexPrefix(::System::ReadOnlySpan_1<char16_t> guidString, ::ByRef<::System::Guid_GuidResult> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "TryParseGuidWithHexPrefix", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid_GuidResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, guidString, result);
}
inline bool System::Guid::TryParseGuidWithNoStyle(::System::ReadOnlySpan_1<char16_t> guidString, ::ByRef<::System::Guid_GuidResult> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "TryParseGuidWithNoStyle", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid_GuidResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, guidString, result);
}
inline bool System::Guid::TryParseGuidWithDashes(::System::ReadOnlySpan_1<char16_t> guidString, ::ByRef<::System::Guid_GuidResult> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "TryParseGuidWithDashes", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid_GuidResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, guidString, result);
}
inline bool System::Guid::StringToShort(::System::ReadOnlySpan_1<char16_t> str, int32_t requiredLength, int32_t flags, ::ByRef<int16_t> result, ::ByRef<::System::Guid_GuidResult> parseResult) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "StringToShort", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid_GuidResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, requiredLength, flags, result, parseResult);
}
inline bool System::Guid::StringToShort(::System::ReadOnlySpan_1<char16_t> str, ::ByRef<int32_t> parsePos, int32_t requiredLength, int32_t flags, ::ByRef<int16_t> result,
                                        ::ByRef<::System::Guid_GuidResult> parseResult) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "StringToShort", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid_GuidResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, parsePos, requiredLength, flags, result, parseResult);
}
inline bool System::Guid::StringToInt(::System::ReadOnlySpan_1<char16_t> str, int32_t requiredLength, int32_t flags, ::ByRef<int32_t> result, ::ByRef<::System::Guid_GuidResult> parseResult) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "StringToInt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid_GuidResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, requiredLength, flags, result, parseResult);
}
inline bool System::Guid::StringToInt(::System::ReadOnlySpan_1<char16_t> str, ::ByRef<int32_t> parsePos, int32_t requiredLength, int32_t flags, ::ByRef<int32_t> result,
                                      ::ByRef<::System::Guid_GuidResult> parseResult) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "StringToInt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid_GuidResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, parsePos, requiredLength, flags, result, parseResult);
}
inline bool System::Guid::StringToLong(::System::ReadOnlySpan_1<char16_t> str, ::ByRef<int32_t> parsePos, int32_t flags, ::ByRef<int64_t> result, ::ByRef<::System::Guid_GuidResult> parseResult) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "StringToLong", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int64_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid_GuidResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, parsePos, flags, result, parseResult);
}
inline ::System::ReadOnlySpan_1<char16_t> System::Guid::EatAllWhitespace(::System::ReadOnlySpan_1<char16_t> str) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "EatAllWhitespace", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>, false>(nullptr, ___internal_method, str);
}
inline bool System::Guid::IsHexPrefix(::System::ReadOnlySpan_1<char16_t> str, int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "IsHexPrefix", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, i);
}
inline void System::Guid::WriteByteHelper(::System::Span_1<uint8_t> destination) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "WriteByteHelper", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destination);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Guid::ToByteArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "ToByteArray",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::StringW System::Guid::ToString() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Guid::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Guid::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o);
}
inline bool System::Guid::Equals(::System::Guid g) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, g);
}
inline int32_t System::Guid::GetResult(uint32_t me, uint32_t them) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "GetResult", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, me, them);
}
inline int32_t System::Guid::CompareTo(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
inline int32_t System::Guid::CompareTo(::System::Guid value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
inline bool System::Guid::op_Equality(::System::Guid a, ::System::Guid b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool System::Guid::op_Inequality(::System::Guid a, ::System::Guid b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline ::StringW System::Guid::ToString(::StringW format) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, format);
}
inline char16_t System::Guid::HexToChar(int32_t a) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "HexToChar", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, a);
}
inline int32_t System::Guid::HexsToChars(char16_t* guidChars, int32_t a, int32_t b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "HexsToChars", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, guidChars, a, b);
}
inline int32_t System::Guid::HexsToCharsHexOutput(char16_t* guidChars, int32_t a, int32_t b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "HexsToCharsHexOutput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, guidChars, a, b);
}
inline ::StringW System::Guid::ToString(::StringW format, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, format, provider);
}
inline bool System::Guid::TryFormat(::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "TryFormat", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, destination, charsWritten, format);
}
inline bool System::Guid::System_ISpanFormattable_TryFormat(::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format,
                                                            ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid>::get(), "System.ISpanFormattable.TryFormat", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, destination, charsWritten, format, provider);
}
/// @brief Convert operator to "::System::IFormattable"
constexpr System::Guid::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* System::Guid::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::Guid::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Guid::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::Guid>"
constexpr System::Guid::operator ::System::IComparable_1<::System::Guid>*() {
  return static_cast<::System::IComparable_1<::System::Guid>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::System::Guid>"
constexpr ::System::IComparable_1<::System::Guid>* System::Guid::i___System__IComparable_1___System__Guid_() {
  return static_cast<::System::IComparable_1<::System::Guid>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Guid>"
constexpr System::Guid::operator ::System::IEquatable_1<::System::Guid>*() {
  return static_cast<::System::IEquatable_1<::System::Guid>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Guid>"
constexpr ::System::IEquatable_1<::System::Guid>* System::Guid::i___System__IEquatable_1___System__Guid_() {
  return static_cast<::System::IEquatable_1<::System::Guid>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::ISpanFormattable"
constexpr System::Guid::operator ::System::ISpanFormattable*() {
  return static_cast<::System::ISpanFormattable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::ISpanFormattable"
constexpr ::System::ISpanFormattable* System::Guid::i___System__ISpanFormattable() {
  return static_cast<::System::ISpanFormattable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "_a", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_b", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_c",
// ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_d", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_e", ty: "uint8_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_f", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_g", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_h", ty:
// "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_i", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_j", ty: "uint8_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_k", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Guid::Guid(int32_t _a, int16_t _b, int16_t _c, uint8_t _d, uint8_t _e, uint8_t _f, uint8_t _g, uint8_t _h, uint8_t _i, uint8_t _j, uint8_t _k) noexcept {
  this->_a = _a;
  this->_b = _b;
  this->_c = _c;
  this->_d = _d;
  this->_e = _e;
  this->_f = _f;
  this->_g = _g;
  this->_h = _h;
  this->_i = _i;
  this->_j = _j;
  this->_k = _k;
}
// Ctor Parameters []
constexpr ::System::Guid::Guid() {}
//  Writing Method size for method: ::System::Guid_GuidResult.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Guid_GuidResult::*)(::System::Guid_GuidParseThrowStyle)>(&::System::Guid_GuidResult::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a93420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid_GuidResult>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid_GuidParseThrowStyle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid_GuidResult.SetFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Guid_GuidResult::*)(::System::Exception*)>(&::System::Guid_GuidResult::SetFailure)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a92728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid_GuidResult>::get(), "SetFailure", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid_GuidResult.SetFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Guid_GuidResult::*)(::System::Guid_ParseFailureKind, ::StringW)>(
    &::System::Guid_GuidResult::SetFailure)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a91438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid_GuidResult>::get(), "SetFailure", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid_ParseFailureKind>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid_GuidResult.SetFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Guid_GuidResult::*)(::System::Guid_ParseFailureKind, ::StringW, ::System::Object*)>(
    &::System::Guid_GuidResult::SetFailure)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a92324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid_GuidResult>::get(), "SetFailure", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid_ParseFailureKind>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid_GuidResult.SetFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Guid_GuidResult::*)(::System::Guid_ParseFailureKind, ::StringW, ::System::Object*, ::StringW, ::System::Exception*)>(&::System::Guid_GuidResult::SetFailure)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5a91fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid_GuidResult>::get(), "SetFailure", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid_ParseFailureKind>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid_GuidResult.GetGuidParseException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Guid_GuidResult::*)()>(&::System::Guid_GuidResult::GetGuidParseException)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5a90f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid_GuidResult>::get(), "GetGuidParseException",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Guid_GuidResult::Init(::System::Guid_GuidParseThrowStyle canThrow) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid_GuidResult>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid_GuidParseThrowStyle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, canThrow);
}
inline void System::Guid_GuidResult::SetFailure(::System::Exception* nativeException) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid_GuidResult>::get(), "SetFailure", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nativeException);
}
inline void System::Guid_GuidResult::SetFailure(::System::Guid_ParseFailureKind failure, ::StringW failureMessageID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid_GuidResult>::get(), "SetFailure", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid_ParseFailureKind>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, failure, failureMessageID);
}
inline void System::Guid_GuidResult::SetFailure(::System::Guid_ParseFailureKind failure, ::StringW failureMessageID, ::System::Object* failureMessageFormatArgument) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid_GuidResult>::get(), "SetFailure", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid_ParseFailureKind>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, failure, failureMessageID, failureMessageFormatArgument);
}
inline void System::Guid_GuidResult::SetFailure(::System::Guid_ParseFailureKind failure, ::StringW failureMessageID, ::System::Object* failureMessageFormatArgument, ::StringW failureArgumentName,
                                                ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid_GuidResult>::get(), "SetFailure", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid_ParseFailureKind>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, failure, failureMessageID, failureMessageFormatArgument, failureArgumentName, innerException);
}
inline ::System::Exception* System::Guid_GuidResult::GetGuidParseException() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Guid_GuidResult>::get(), "GetGuidParseException",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_parsedGuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "_throwStyle", ty: "::System::Guid_GuidParseThrowStyle", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_failure", ty: "::System::Guid_ParseFailureKind", modifiers: "", def_value: Some("{}") }, CppParam { name: "_failureMessageID", ty: "::StringW",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_failureMessageFormatArgument", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_failureArgumentName",
// ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_innerException", ty: "::System::Exception*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Guid_GuidResult::Guid_GuidResult(::System::Guid _parsedGuid, ::System::Guid_GuidParseThrowStyle _throwStyle, ::System::Guid_ParseFailureKind _failure, ::StringW _failureMessageID,
                                                     ::System::Object* _failureMessageFormatArgument, ::StringW _failureArgumentName, ::System::Exception* _innerException) noexcept {
  this->_parsedGuid = _parsedGuid;
  this->_throwStyle = _throwStyle;
  this->_failure = _failure;
  this->_failureMessageID = _failureMessageID;
  this->_failureMessageFormatArgument = _failureMessageFormatArgument;
  this->_failureArgumentName = _failureArgumentName;
  this->_innerException = _innerException;
}
// Ctor Parameters []
constexpr ::System::Guid_GuidResult::Guid_GuidResult() {}
