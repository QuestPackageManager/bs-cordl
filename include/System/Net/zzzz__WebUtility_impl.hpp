#pragma once
#include "System/Net/Configuration/zzzz__UnicodeDecodingConformance_impl.hpp"
#include "System/Net/Configuration/zzzz__UnicodeEncodingConformance_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebUtility_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Net/Configuration/zzzz__UnicodeEncodingConformance_def.hpp"
#include "System/Net/zzzz__WebUtility_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::System::Net::__WebUtility__UrlDecoder.FlushBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebUtility__UrlDecoder::*)()>(&::System::Net::__WebUtility__UrlDecoder::FlushBytes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a91868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebUtility__UrlDecoder*>::get(), "FlushBytes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__WebUtility__UrlDecoder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebUtility__UrlDecoder::*)(int32_t, ::System::Text::Encoding*)>(
    &::System::Net::__WebUtility__UrlDecoder::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a914f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebUtility__UrlDecoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__WebUtility__UrlDecoder.AddChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebUtility__UrlDecoder::*)(char16_t)>(&::System::Net::__WebUtility__UrlDecoder::AddChar)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a91650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebUtility__UrlDecoder*>::get(), "AddChar", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__WebUtility__UrlDecoder.AddByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebUtility__UrlDecoder::*)(uint8_t)>(&::System::Net::__WebUtility__UrlDecoder::AddByte)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2a915b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebUtility__UrlDecoder*>::get(), "AddByte", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__WebUtility__UrlDecoder.GetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::__WebUtility__UrlDecoder::*)()>(&::System::Net::__WebUtility__UrlDecoder::GetString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a916b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebUtility__UrlDecoder*>::get(), "GetString",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::__WebUtility__UrlDecoder::__cordl_internal_get__bufferSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferSize;
}
constexpr int32_t const& System::Net::__WebUtility__UrlDecoder::__cordl_internal_get__bufferSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferSize;
}
constexpr void System::Net::__WebUtility__UrlDecoder::__cordl_internal_set__bufferSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bufferSize = value;
}
constexpr int32_t& System::Net::__WebUtility__UrlDecoder::__cordl_internal_get__numChars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numChars;
}
constexpr int32_t const& System::Net::__WebUtility__UrlDecoder::__cordl_internal_get__numChars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numChars;
}
constexpr void System::Net::__WebUtility__UrlDecoder::__cordl_internal_set__numChars(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numChars = value;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& System::Net::__WebUtility__UrlDecoder::__cordl_internal_get__charBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charBuffer;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& System::Net::__WebUtility__UrlDecoder::__cordl_internal_get__charBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charBuffer;
}
constexpr void System::Net::__WebUtility__UrlDecoder::__cordl_internal_set__charBuffer(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____charBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::__WebUtility__UrlDecoder::__cordl_internal_get__numBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numBytes;
}
constexpr int32_t const& System::Net::__WebUtility__UrlDecoder::__cordl_internal_get__numBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numBytes;
}
constexpr void System::Net::__WebUtility__UrlDecoder::__cordl_internal_set__numBytes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numBytes = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Net::__WebUtility__UrlDecoder::__cordl_internal_get__byteBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____byteBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Net::__WebUtility__UrlDecoder::__cordl_internal_get__byteBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____byteBuffer;
}
constexpr void System::Net::__WebUtility__UrlDecoder::__cordl_internal_set__byteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____byteBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::Encoding*& System::Net::__WebUtility__UrlDecoder::__cordl_internal_get__encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& System::Net::__WebUtility__UrlDecoder::__cordl_internal_get__encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr void System::Net::__WebUtility__UrlDecoder::__cordl_internal_set__encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____encoding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::__WebUtility__UrlDecoder::FlushBytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebUtility__UrlDecoder*>::get(), "FlushBytes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::__WebUtility__UrlDecoder* System::Net::__WebUtility__UrlDecoder::New_ctor(int32_t bufferSize, ::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::__WebUtility__UrlDecoder*>(bufferSize, encoding));
}
inline void System::Net::__WebUtility__UrlDecoder::_ctor(int32_t bufferSize, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebUtility__UrlDecoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferSize, encoding);
}
inline void System::Net::__WebUtility__UrlDecoder::AddChar(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebUtility__UrlDecoder*>::get(), "AddChar", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ch);
}
inline void System::Net::__WebUtility__UrlDecoder::AddByte(uint8_t b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebUtility__UrlDecoder*>::get(), "AddByte",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline ::StringW System::Net::__WebUtility__UrlDecoder::GetString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebUtility__UrlDecoder*>::get(), "GetString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::__WebUtility__UrlDecoder::__WebUtility__UrlDecoder() {}
//  Writing Method size for method: ::System::Net::WebUtility.HtmlEncode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Net::WebUtility::HtmlEncode)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2a90b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get(), "HtmlEncode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.HtmlEncode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::IO::TextWriter*)>(&::System::Net::WebUtility::HtmlEncode)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x2a90d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get(), "HtmlEncode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.IndexOfHtmlEncodingChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, int32_t)>(&::System::Net::WebUtility::IndexOfHtmlEncodingChars)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2a90c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get(), "IndexOfHtmlEncodingChars", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.get_HtmlEncodeConformance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::UnicodeEncodingConformance (*)()>(
    &::System::Net::WebUtility::get_HtmlEncodeConformance)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2a91148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get(), "get_HtmlEncodeConformance",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.UrlDecodeInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::System::Text::Encoding*)>(&::System::Net::WebUtility::UrlDecodeInternal)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2a912e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get(), "UrlDecodeInternal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.UrlDecode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Net::WebUtility::UrlDecode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2a91738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get(), "UrlDecode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.GetNextUnicodeScalarValueFromUtf16Surrogate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<::cordl_internals::Ptr<char16_t>>, ByRef<int32_t>)>(
    &::System::Net::WebUtility::GetNextUnicodeScalarValueFromUtf16Surrogate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2a9122c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get(), "GetNextUnicodeScalarValueFromUtf16Surrogate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<char16_t>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebUtility.HexToInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(char16_t)>(&::System::Net::WebUtility::HexToInt)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2a91568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get(), "HexToInt", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::WebUtility::setStaticF__htmlEntityEndingChars(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "_htmlEntityEndingChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get>(
      std::forward<::ArrayW<char16_t, ::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::Net::WebUtility::getStaticF__htmlEntityEndingChars() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "_htmlEntityEndingChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get>();
}
inline void System::Net::WebUtility::setStaticF__htmlDecodeConformance(::System::Net::Configuration::UnicodeDecodingConformance value) {
  ::cordl_internals::setStaticField<::System::Net::Configuration::UnicodeDecodingConformance, "_htmlDecodeConformance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get>(
      std::forward<::System::Net::Configuration::UnicodeDecodingConformance>(value));
}
inline ::System::Net::Configuration::UnicodeDecodingConformance System::Net::WebUtility::getStaticF__htmlDecodeConformance() {
  return ::cordl_internals::getStaticField<::System::Net::Configuration::UnicodeDecodingConformance, "_htmlDecodeConformance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get>();
}
inline void System::Net::WebUtility::setStaticF__htmlEncodeConformance(::System::Net::Configuration::UnicodeEncodingConformance value) {
  ::cordl_internals::setStaticField<::System::Net::Configuration::UnicodeEncodingConformance, "_htmlEncodeConformance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get>(
      std::forward<::System::Net::Configuration::UnicodeEncodingConformance>(value));
}
inline ::System::Net::Configuration::UnicodeEncodingConformance System::Net::WebUtility::getStaticF__htmlEncodeConformance() {
  return ::cordl_internals::getStaticField<::System::Net::Configuration::UnicodeEncodingConformance, "_htmlEncodeConformance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get>();
}
inline ::StringW System::Net::WebUtility::HtmlEncode(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get(), "HtmlEncode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
inline void System::Net::WebUtility::HtmlEncode(::StringW value, ::System::IO::TextWriter* output) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get(), "HtmlEncode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value, output);
}
inline int32_t System::Net::WebUtility::IndexOfHtmlEncodingChars(::StringW s, int32_t startPos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get(), "IndexOfHtmlEncodingChars", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s, startPos);
}
inline ::System::Net::Configuration::UnicodeEncodingConformance System::Net::WebUtility::get_HtmlEncodeConformance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get(), "get_HtmlEncodeConformance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::UnicodeEncodingConformance, false>(nullptr, ___internal_method);
}
inline ::StringW System::Net::WebUtility::UrlDecodeInternal(::StringW value, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get(), "UrlDecodeInternal", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, encoding);
}
inline ::StringW System::Net::WebUtility::UrlDecode(::StringW encodedValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get(), "UrlDecode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, encodedValue);
}
inline int32_t System::Net::WebUtility::GetNextUnicodeScalarValueFromUtf16Surrogate(ByRef<::cordl_internals::Ptr<char16_t>> pch, ByRef<int32_t> charsRemaining) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get(), "GetNextUnicodeScalarValueFromUtf16Surrogate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<char16_t>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, pch, charsRemaining);
}
inline int32_t System::Net::WebUtility::HexToInt(char16_t h) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebUtility*>::get(), "HexToInt", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, h);
}
// Ctor Parameters []
constexpr ::System::Net::WebUtility::WebUtility() {}
