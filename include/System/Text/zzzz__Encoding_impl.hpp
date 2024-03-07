#pragma once
#include "System/Text/zzzz__Decoder_impl.hpp"
#include "System/Text/zzzz__Encoder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Globalization/zzzz__CodePageDataItem_def.hpp"
#include "System/Runtime/Serialization/zzzz__IObjectReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
#include "System/Text/zzzz__DecoderFallback_def.hpp"
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
#include "System/Text/zzzz__EncoderFallback_def.hpp"
#include "System/Text/zzzz__EncoderNLS_def.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Text::__Encoding__DefaultEncoder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__Encoding__DefaultEncoder::*)(::System::Text::Encoding*)>(
    &::System::Text::__Encoding__DefaultEncoder::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x25a24d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultEncoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__DefaultEncoder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__Encoding__DefaultEncoder::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Text::__Encoding__DefaultEncoder::_ctor)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x25a2b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultEncoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__DefaultEncoder.GetRealObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Text::__Encoding__DefaultEncoder::*)(::System::Runtime::Serialization::StreamingContext)>(&::System::Text::__Encoding__DefaultEncoder::GetRealObject)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x25a2e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultEncoder*>::get(), "GetRealObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__DefaultEncoder.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Text::__Encoding__DefaultEncoder::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::Text::__Encoding__DefaultEncoder::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x25a2f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultEncoder*>::get(),
                                    "System.Runtime.Serialization.ISerializable.GetObjectData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__DefaultEncoder.GetByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Text::__Encoding__DefaultEncoder::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t, bool)>(&::System::Text::__Encoding__DefaultEncoder::GetByteCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25a2ff8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultEncoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultEncoder*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__DefaultEncoder.GetByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::__Encoding__DefaultEncoder::*)(::cordl_internals::Ptr<char16_t>, int32_t, bool)>(
    &::System::Text::__Encoding__DefaultEncoder::GetByteCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x25a3018;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultEncoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultEncoder*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__DefaultEncoder.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::__Encoding__DefaultEncoder::*)(
    ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, bool)>(&::System::Text::__Encoding__DefaultEncoder::GetBytes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x25a303c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultEncoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultEncoder*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__DefaultEncoder.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::__Encoding__DefaultEncoder::*)(
    ::cordl_internals::Ptr<char16_t>, int32_t, ::cordl_internals::Ptr<uint8_t>, int32_t, bool)>(&::System::Text::__Encoding__DefaultEncoder::GetBytes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x25a3060;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultEncoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultEncoder*>::get(), 8));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Text::__Encoding__DefaultEncoder::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Text::__Encoding__DefaultEncoder::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
constexpr System::Text::__Encoding__DefaultEncoder::operator ::System::Runtime::Serialization::IObjectReference*() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IObjectReference"
constexpr ::System::Runtime::Serialization::IObjectReference* System::Text::__Encoding__DefaultEncoder::i___System__Runtime__Serialization__IObjectReference() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
constexpr ::System::Text::Encoding*& System::Text::__Encoding__DefaultEncoder::__cordl_internal_get_m_encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_encoding;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& System::Text::__Encoding__DefaultEncoder::__cordl_internal_get_m_encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_encoding;
}
constexpr void System::Text::__Encoding__DefaultEncoder::__cordl_internal_set_m_encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_encoding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Text::__Encoding__DefaultEncoder::__cordl_internal_get_m_hasInitializedEncoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hasInitializedEncoding;
}
constexpr bool const& System::Text::__Encoding__DefaultEncoder::__cordl_internal_get_m_hasInitializedEncoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hasInitializedEncoding;
}
constexpr void System::Text::__Encoding__DefaultEncoder::__cordl_internal_set_m_hasInitializedEncoding(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_hasInitializedEncoding = value;
}
constexpr char16_t& System::Text::__Encoding__DefaultEncoder::__cordl_internal_get_charLeftOver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charLeftOver;
}
constexpr char16_t const& System::Text::__Encoding__DefaultEncoder::__cordl_internal_get_charLeftOver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charLeftOver;
}
constexpr void System::Text::__Encoding__DefaultEncoder::__cordl_internal_set_charLeftOver(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___charLeftOver = value;
}
inline ::System::Text::__Encoding__DefaultEncoder* System::Text::__Encoding__DefaultEncoder::New_ctor(::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::__Encoding__DefaultEncoder*>(encoding));
}
inline void System::Text::__Encoding__DefaultEncoder::_ctor(::System::Text::Encoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultEncoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encoding);
}
inline ::System::Text::__Encoding__DefaultEncoder* System::Text::__Encoding__DefaultEncoder::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                      ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::__Encoding__DefaultEncoder*>(info, context));
}
inline void System::Text::__Encoding__DefaultEncoder::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultEncoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::System::Object* System::Text::__Encoding__DefaultEncoder::GetRealObject(::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultEncoder*>::get(), "GetRealObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context);
}
inline void System::Text::__Encoding__DefaultEncoder::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                               ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultEncoder*>::get(),
                                  "System.Runtime.Serialization.ISerializable.GetObjectData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline int32_t System::Text::__Encoding__DefaultEncoder::GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count, bool flush) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultEncoder*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, index, count, flush);
}
inline int32_t System::Text::__Encoding__DefaultEncoder::GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count, bool flush) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultEncoder*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, count, flush);
}
inline int32_t System::Text::__Encoding__DefaultEncoder::GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes,
                                                                  int32_t byteIndex, bool flush) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultEncoder*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, charIndex, charCount, bytes, byteIndex, flush);
}
inline int32_t System::Text::__Encoding__DefaultEncoder::GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, bool flush) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultEncoder*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, charCount, bytes, byteCount, flush);
}
// Ctor Parameters []
constexpr ::System::Text::__Encoding__DefaultEncoder::__Encoding__DefaultEncoder() {}
//  Writing Method size for method: ::System::Text::__Encoding__DefaultDecoder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__Encoding__DefaultDecoder::*)(::System::Text::Encoding*)>(
    &::System::Text::__Encoding__DefaultDecoder::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x25a2250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__DefaultDecoder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__Encoding__DefaultDecoder::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Text::__Encoding__DefaultDecoder::_ctor)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x25a3084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__DefaultDecoder.GetRealObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Text::__Encoding__DefaultDecoder::*)(::System::Runtime::Serialization::StreamingContext)>(&::System::Text::__Encoding__DefaultDecoder::GetRealObject)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x25a333c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(), "GetRealObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__DefaultDecoder.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Text::__Encoding__DefaultDecoder::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::Text::__Encoding__DefaultDecoder::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x25a3388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(),
                                    "System.Runtime.Serialization.ISerializable.GetObjectData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__DefaultDecoder.GetCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::__Encoding__DefaultDecoder::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Text::__Encoding__DefaultDecoder::GetCharCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x25a342c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__DefaultDecoder.GetCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Text::__Encoding__DefaultDecoder::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, bool)>(&::System::Text::__Encoding__DefaultDecoder::GetCharCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x25a343c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__DefaultDecoder.GetCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::__Encoding__DefaultDecoder::*)(::cordl_internals::Ptr<uint8_t>, int32_t, bool)>(
    &::System::Text::__Encoding__DefaultDecoder::GetCharCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x25a3460;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__DefaultDecoder.GetChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::__Encoding__DefaultDecoder::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t)>(&::System::Text::__Encoding__DefaultDecoder::GetChars)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x25a3484;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__DefaultDecoder.GetChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::__Encoding__DefaultDecoder::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, bool)>(&::System::Text::__Encoding__DefaultDecoder::GetChars)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x25a3494;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__DefaultDecoder.GetChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::__Encoding__DefaultDecoder::*)(
    ::cordl_internals::Ptr<uint8_t>, int32_t, ::cordl_internals::Ptr<char16_t>, int32_t, bool)>(&::System::Text::__Encoding__DefaultDecoder::GetChars)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x25a34b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(), 10));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Text::__Encoding__DefaultDecoder::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Text::__Encoding__DefaultDecoder::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
constexpr System::Text::__Encoding__DefaultDecoder::operator ::System::Runtime::Serialization::IObjectReference*() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IObjectReference"
constexpr ::System::Runtime::Serialization::IObjectReference* System::Text::__Encoding__DefaultDecoder::i___System__Runtime__Serialization__IObjectReference() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
constexpr ::System::Text::Encoding*& System::Text::__Encoding__DefaultDecoder::__cordl_internal_get_m_encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_encoding;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& System::Text::__Encoding__DefaultDecoder::__cordl_internal_get_m_encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_encoding;
}
constexpr void System::Text::__Encoding__DefaultDecoder::__cordl_internal_set_m_encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_encoding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Text::__Encoding__DefaultDecoder::__cordl_internal_get_m_hasInitializedEncoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hasInitializedEncoding;
}
constexpr bool const& System::Text::__Encoding__DefaultDecoder::__cordl_internal_get_m_hasInitializedEncoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hasInitializedEncoding;
}
constexpr void System::Text::__Encoding__DefaultDecoder::__cordl_internal_set_m_hasInitializedEncoding(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_hasInitializedEncoding = value;
}
inline ::System::Text::__Encoding__DefaultDecoder* System::Text::__Encoding__DefaultDecoder::New_ctor(::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::__Encoding__DefaultDecoder*>(encoding));
}
inline void System::Text::__Encoding__DefaultDecoder::_ctor(::System::Text::Encoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encoding);
}
inline ::System::Text::__Encoding__DefaultDecoder* System::Text::__Encoding__DefaultDecoder::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                      ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::__Encoding__DefaultDecoder*>(info, context));
}
inline void System::Text::__Encoding__DefaultDecoder::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::System::Object* System::Text::__Encoding__DefaultDecoder::GetRealObject(::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(), "GetRealObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context);
}
inline void System::Text::__Encoding__DefaultDecoder::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                               ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(),
                                  "System.Runtime.Serialization.ISerializable.GetObjectData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline int32_t System::Text::__Encoding__DefaultDecoder::GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::__Encoding__DefaultDecoder::GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count, bool flush) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, index, count, flush);
}
inline int32_t System::Text::__Encoding__DefaultDecoder::GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count, bool flush) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, count, flush);
}
inline int32_t System::Text::__Encoding__DefaultDecoder::GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars,
                                                                  int32_t charIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline int32_t System::Text::__Encoding__DefaultDecoder::GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars,
                                                                  int32_t charIndex, bool flush) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex, flush);
}
inline int32_t System::Text::__Encoding__DefaultDecoder::GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount, bool flush) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__DefaultDecoder*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, byteCount, chars, charCount, flush);
}
// Ctor Parameters []
constexpr ::System::Text::__Encoding__DefaultDecoder::__Encoding__DefaultDecoder() {}
//  Writing Method size for method: ::System::Text::__Encoding__EncodingCharBuffer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__Encoding__EncodingCharBuffer::*)(
    ::System::Text::Encoding*, ::System::Text::DecoderNLS*, ::cordl_internals::Ptr<char16_t>, int32_t, ::cordl_internals::Ptr<uint8_t>, int32_t)>(
    &::System::Text::__Encoding__EncodingCharBuffer::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x25a34dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingCharBuffer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::DecoderNLS*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__EncodingCharBuffer.AddChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::__Encoding__EncodingCharBuffer::*)(char16_t, int32_t)>(
    &::System::Text::__Encoding__EncodingCharBuffer::AddChar)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25a3584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingCharBuffer*>::get(), "AddChar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__EncodingCharBuffer.AddChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::__Encoding__EncodingCharBuffer::*)(char16_t)>(
    &::System::Text::__Encoding__EncodingCharBuffer::AddChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a35f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingCharBuffer*>::get(), "AddChar", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__EncodingCharBuffer.AdjustBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__Encoding__EncodingCharBuffer::*)(int32_t)>(
    &::System::Text::__Encoding__EncodingCharBuffer::AdjustBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x25a35fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingCharBuffer*>::get(), "AdjustBytes",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__EncodingCharBuffer.get_MoreData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::__Encoding__EncodingCharBuffer::*)()>(
    &::System::Text::__Encoding__EncodingCharBuffer::get_MoreData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x25a360c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingCharBuffer*>::get(),
                                                                               "get_MoreData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__EncodingCharBuffer.GetNextByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::System::Text::__Encoding__EncodingCharBuffer::*)()>(
    &::System::Text::__Encoding__EncodingCharBuffer::GetNextByte)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x25a361c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingCharBuffer*>::get(),
                                                                               "GetNextByte", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__EncodingCharBuffer.get_BytesUsed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::__Encoding__EncodingCharBuffer::*)()>(
    &::System::Text::__Encoding__EncodingCharBuffer::get_BytesUsed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x25a3640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingCharBuffer*>::get(),
                                                                               "get_BytesUsed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__EncodingCharBuffer.Fallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::__Encoding__EncodingCharBuffer::*)(uint8_t)>(
    &::System::Text::__Encoding__EncodingCharBuffer::Fallback)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x25a3650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingCharBuffer*>::get(), "Fallback",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__EncodingCharBuffer.Fallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::__Encoding__EncodingCharBuffer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Text::__Encoding__EncodingCharBuffer::Fallback)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25a36c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingCharBuffer*>::get(), "Fallback", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__EncodingCharBuffer.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::__Encoding__EncodingCharBuffer::*)()>(
    &::System::Text::__Encoding__EncodingCharBuffer::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a37a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingCharBuffer*>::get(),
                                                                               "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::cordl_internals::Ptr<char16_t>& System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_get_chars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr ::cordl_internals::Ptr<char16_t> const& System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_get_chars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr void System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_set_chars(::cordl_internals::Ptr<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chars)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::cordl_internals::Ptr<char16_t>& System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_get_charStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charStart;
}
constexpr ::cordl_internals::Ptr<char16_t> const& System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_get_charStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charStart;
}
constexpr void System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_set_charStart(::cordl_internals::Ptr<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___charStart)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::cordl_internals::Ptr<char16_t>& System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_get_charEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charEnd;
}
constexpr ::cordl_internals::Ptr<char16_t> const& System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_get_charEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charEnd;
}
constexpr void System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_set_charEnd(::cordl_internals::Ptr<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___charEnd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_get_charCountResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charCountResult;
}
constexpr int32_t const& System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_get_charCountResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charCountResult;
}
constexpr void System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_set_charCountResult(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___charCountResult = value;
}
constexpr ::System::Text::Encoding*& System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_get_enc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enc;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_get_enc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enc;
}
constexpr void System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_set_enc(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::DecoderNLS*& System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_get_decoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decoder;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::DecoderNLS*> const& System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_get_decoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decoder;
}
constexpr void System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_set_decoder(::System::Text::DecoderNLS* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___decoder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::cordl_internals::Ptr<uint8_t>& System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_get_byteStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteStart;
}
constexpr ::cordl_internals::Ptr<uint8_t> const& System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_get_byteStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteStart;
}
constexpr void System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_set_byteStart(::cordl_internals::Ptr<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___byteStart)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::cordl_internals::Ptr<uint8_t>& System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_get_byteEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteEnd;
}
constexpr ::cordl_internals::Ptr<uint8_t> const& System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_get_byteEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteEnd;
}
constexpr void System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_set_byteEnd(::cordl_internals::Ptr<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___byteEnd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::cordl_internals::Ptr<uint8_t>& System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_get_bytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bytes;
}
constexpr ::cordl_internals::Ptr<uint8_t> const& System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_get_bytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bytes;
}
constexpr void System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_set_bytes(::cordl_internals::Ptr<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::DecoderFallbackBuffer*& System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_get_fallbackBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackBuffer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::DecoderFallbackBuffer*> const& System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_get_fallbackBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackBuffer;
}
constexpr void System::Text::__Encoding__EncodingCharBuffer::__cordl_internal_set_fallbackBuffer(::System::Text::DecoderFallbackBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fallbackBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Text::__Encoding__EncodingCharBuffer* System::Text::__Encoding__EncodingCharBuffer::New_ctor(::System::Text::Encoding* enc, ::System::Text::DecoderNLS* decoder,
                                                                                                              ::cordl_internals::Ptr<char16_t> charStart, int32_t charCount,
                                                                                                              ::cordl_internals::Ptr<uint8_t> byteStart, int32_t byteCount) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::__Encoding__EncodingCharBuffer*>(enc, decoder, charStart, charCount, byteStart, byteCount));
}
inline void System::Text::__Encoding__EncodingCharBuffer::_ctor(::System::Text::Encoding* enc, ::System::Text::DecoderNLS* decoder, ::cordl_internals::Ptr<char16_t> charStart, int32_t charCount,
                                                                ::cordl_internals::Ptr<uint8_t> byteStart, int32_t byteCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingCharBuffer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::DecoderNLS*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enc, decoder, charStart, charCount, byteStart, byteCount);
}
inline bool System::Text::__Encoding__EncodingCharBuffer::AddChar(char16_t ch, int32_t numBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingCharBuffer*>::get(), "AddChar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ch, numBytes);
}
inline bool System::Text::__Encoding__EncodingCharBuffer::AddChar(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingCharBuffer*>::get(), "AddChar", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ch);
}
inline void System::Text::__Encoding__EncodingCharBuffer::AdjustBytes(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingCharBuffer*>::get(), "AdjustBytes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, count);
}
inline bool System::Text::__Encoding__EncodingCharBuffer::get_MoreData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingCharBuffer*>::get(),
                                                                             "get_MoreData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline uint8_t System::Text::__Encoding__EncodingCharBuffer::GetNextByte() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingCharBuffer*>::get(),
                                                                             "GetNextByte", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline int32_t System::Text::__Encoding__EncodingCharBuffer::get_BytesUsed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingCharBuffer*>::get(),
                                                                             "get_BytesUsed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Text::__Encoding__EncodingCharBuffer::Fallback(uint8_t fallbackByte) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingCharBuffer*>::get(), "Fallback",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, fallbackByte);
}
inline bool System::Text::__Encoding__EncodingCharBuffer::Fallback(::ArrayW<uint8_t, ::Array<uint8_t>*> byteBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingCharBuffer*>::get(), "Fallback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, byteBuffer);
}
inline int32_t System::Text::__Encoding__EncodingCharBuffer::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingCharBuffer*>::get(),
                                                                             "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Text::__Encoding__EncodingCharBuffer::__Encoding__EncodingCharBuffer() {}
//  Writing Method size for method: ::System::Text::__Encoding__EncodingByteBuffer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__Encoding__EncodingByteBuffer::*)(
    ::System::Text::Encoding*, ::System::Text::EncoderNLS*, ::cordl_internals::Ptr<uint8_t>, int32_t, ::cordl_internals::Ptr<char16_t>, int32_t)>(
    &::System::Text::__Encoding__EncodingByteBuffer::_ctor)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x25a37ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingByteBuffer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::EncoderNLS*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__EncodingByteBuffer.AddByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::__Encoding__EncodingByteBuffer::*)(uint8_t, int32_t)>(
    &::System::Text::__Encoding__EncodingByteBuffer::AddByte)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25a39b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingByteBuffer*>::get(), "AddByte", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__EncodingByteBuffer.AddByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::__Encoding__EncodingByteBuffer::*)(uint8_t)>(
    &::System::Text::__Encoding__EncodingByteBuffer::AddByte)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a3a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingByteBuffer*>::get(), "AddByte", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__EncodingByteBuffer.AddByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::__Encoding__EncodingByteBuffer::*)(uint8_t, uint8_t)>(
    &::System::Text::__Encoding__EncodingByteBuffer::AddByte)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a3a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingByteBuffer*>::get(), "AddByte", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__EncodingByteBuffer.AddByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::__Encoding__EncodingByteBuffer::*)(uint8_t, uint8_t, int32_t)>(
    &::System::Text::__Encoding__EncodingByteBuffer::AddByte)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x25a3a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingByteBuffer*>::get(), "AddByte", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__EncodingByteBuffer.MovePrevious
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__Encoding__EncodingByteBuffer::*)(bool)>(
    &::System::Text::__Encoding__EncodingByteBuffer::MovePrevious)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x25a3a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingByteBuffer*>::get(), "MovePrevious",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__EncodingByteBuffer.get_MoreData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::__Encoding__EncodingByteBuffer::*)()>(
    &::System::Text::__Encoding__EncodingByteBuffer::get_MoreData)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x25a3ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingByteBuffer*>::get(),
                                                                               "get_MoreData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__EncodingByteBuffer.GetNextChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Text::__Encoding__EncodingByteBuffer::*)()>(
    &::System::Text::__Encoding__EncodingByteBuffer::GetNextChar)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25a3b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingByteBuffer*>::get(),
                                                                               "GetNextChar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__EncodingByteBuffer.get_CharsUsed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::__Encoding__EncodingByteBuffer::*)()>(
    &::System::Text::__Encoding__EncodingByteBuffer::get_CharsUsed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25a3b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingByteBuffer*>::get(),
                                                                               "get_CharsUsed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__Encoding__EncodingByteBuffer.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::__Encoding__EncodingByteBuffer::*)()>(
    &::System::Text::__Encoding__EncodingByteBuffer::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a3b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingByteBuffer*>::get(),
                                                                               "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::cordl_internals::Ptr<uint8_t>& System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_get_bytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bytes;
}
constexpr ::cordl_internals::Ptr<uint8_t> const& System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_get_bytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bytes;
}
constexpr void System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_set_bytes(::cordl_internals::Ptr<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::cordl_internals::Ptr<uint8_t>& System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_get_byteStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteStart;
}
constexpr ::cordl_internals::Ptr<uint8_t> const& System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_get_byteStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteStart;
}
constexpr void System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_set_byteStart(::cordl_internals::Ptr<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___byteStart)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::cordl_internals::Ptr<uint8_t>& System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_get_byteEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteEnd;
}
constexpr ::cordl_internals::Ptr<uint8_t> const& System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_get_byteEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteEnd;
}
constexpr void System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_set_byteEnd(::cordl_internals::Ptr<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___byteEnd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::cordl_internals::Ptr<char16_t>& System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_get_chars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr ::cordl_internals::Ptr<char16_t> const& System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_get_chars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr void System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_set_chars(::cordl_internals::Ptr<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chars)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::cordl_internals::Ptr<char16_t>& System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_get_charStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charStart;
}
constexpr ::cordl_internals::Ptr<char16_t> const& System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_get_charStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charStart;
}
constexpr void System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_set_charStart(::cordl_internals::Ptr<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___charStart)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::cordl_internals::Ptr<char16_t>& System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_get_charEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charEnd;
}
constexpr ::cordl_internals::Ptr<char16_t> const& System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_get_charEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charEnd;
}
constexpr void System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_set_charEnd(::cordl_internals::Ptr<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___charEnd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_get_byteCountResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteCountResult;
}
constexpr int32_t const& System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_get_byteCountResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteCountResult;
}
constexpr void System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_set_byteCountResult(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___byteCountResult = value;
}
constexpr ::System::Text::Encoding*& System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_get_enc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enc;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_get_enc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enc;
}
constexpr void System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_set_enc(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::EncoderNLS*& System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_get_encoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoder;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::EncoderNLS*> const& System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_get_encoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoder;
}
constexpr void System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_set_encoder(::System::Text::EncoderNLS* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___encoder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::EncoderFallbackBuffer*& System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_get_fallbackBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackBuffer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::EncoderFallbackBuffer*> const& System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_get_fallbackBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackBuffer;
}
constexpr void System::Text::__Encoding__EncodingByteBuffer::__cordl_internal_set_fallbackBuffer(::System::Text::EncoderFallbackBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fallbackBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Text::__Encoding__EncodingByteBuffer* System::Text::__Encoding__EncodingByteBuffer::New_ctor(::System::Text::Encoding* inEncoding, ::System::Text::EncoderNLS* inEncoder,
                                                                                                              ::cordl_internals::Ptr<uint8_t> inByteStart, int32_t inByteCount,
                                                                                                              ::cordl_internals::Ptr<char16_t> inCharStart, int32_t inCharCount) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::__Encoding__EncodingByteBuffer*>(inEncoding, inEncoder, inByteStart, inByteCount, inCharStart, inCharCount));
}
inline void System::Text::__Encoding__EncodingByteBuffer::_ctor(::System::Text::Encoding* inEncoding, ::System::Text::EncoderNLS* inEncoder, ::cordl_internals::Ptr<uint8_t> inByteStart,
                                                                int32_t inByteCount, ::cordl_internals::Ptr<char16_t> inCharStart, int32_t inCharCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingByteBuffer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::EncoderNLS*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inEncoding, inEncoder, inByteStart, inByteCount, inCharStart, inCharCount);
}
inline bool System::Text::__Encoding__EncodingByteBuffer::AddByte(uint8_t b, int32_t moreBytesExpected) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingByteBuffer*>::get(), "AddByte", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, b, moreBytesExpected);
}
inline bool System::Text::__Encoding__EncodingByteBuffer::AddByte(uint8_t b1) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingByteBuffer*>::get(), "AddByte",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, b1);
}
inline bool System::Text::__Encoding__EncodingByteBuffer::AddByte(uint8_t b1, uint8_t b2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingByteBuffer*>::get(), "AddByte", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, b1, b2);
}
inline bool System::Text::__Encoding__EncodingByteBuffer::AddByte(uint8_t b1, uint8_t b2, int32_t moreBytesExpected) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingByteBuffer*>::get(), "AddByte", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, b1, b2, moreBytesExpected);
}
inline void System::Text::__Encoding__EncodingByteBuffer::MovePrevious(bool bThrow) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingByteBuffer*>::get(), "MovePrevious",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bThrow);
}
inline bool System::Text::__Encoding__EncodingByteBuffer::get_MoreData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingByteBuffer*>::get(),
                                                                             "get_MoreData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline char16_t System::Text::__Encoding__EncodingByteBuffer::GetNextChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingByteBuffer*>::get(),
                                                                             "GetNextChar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline int32_t System::Text::__Encoding__EncodingByteBuffer::get_CharsUsed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingByteBuffer*>::get(),
                                                                             "get_CharsUsed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Text::__Encoding__EncodingByteBuffer::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__Encoding__EncodingByteBuffer*>::get(),
                                                                             "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Text::__Encoding__EncodingByteBuffer::__Encoding__EncodingByteBuffer() {}
//  Writing Method size for method: ::System::Text::Encoding._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::Encoding::*)()>(&::System::Text::Encoding::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x259f180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::Encoding::*)(int32_t)>(&::System::Text::Encoding::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x259f1b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.SetDefaultFallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::Encoding::*)()>(&::System::Text::Encoding::SetDefaultFallbacks)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x259f23c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.OnDeserializing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::Encoding::*)()>(&::System::Text::Encoding::OnDeserializing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259f2d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "OnDeserializing",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.OnDeserialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::Encoding::*)()>(&::System::Text::Encoding::OnDeserialized)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x259f2e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "OnDeserialized",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.OnDeserializing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::Encoding::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Text::Encoding::OnDeserializing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x259f320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "OnDeserializing", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.OnDeserialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::Encoding::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Text::Encoding::OnDeserialized)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x259f330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "OnDeserialized", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.OnSerializing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::Encoding::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Text::Encoding::OnSerializing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f36c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "OnSerializing", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.DeserializeEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::Encoding::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Text::Encoding::DeserializeEncoding)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x259f374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "DeserializeEncoding", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.SerializeEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::Encoding::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Text::Encoding::SerializeEncoding)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x259f774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "SerializeEncoding", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.get_InternalSyncObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)()>(&::System::Text::Encoding::get_InternalSyncObject)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x259f920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_InternalSyncObject",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)(int32_t)>(&::System::Text::Encoding::GetEncoding)> {
  constexpr static std::size_t size = 0x8ec;
  constexpr static std::size_t addrs = 0x259f9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "GetEncoding", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)(int32_t, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*)>(
    &::System::Text::Encoding::GetEncoding)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x25a0e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "GetEncoding", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::EncoderFallback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::DecoderFallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)(::StringW)>(&::System::Text::Encoding::GetEncoding)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25a10d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "GetEncoding", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetPreamble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Text::Encoding::*)()>(&::System::Text::Encoding::GetPreamble)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25a116c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.get_Preamble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<uint8_t> (::System::Text::Encoding::*)()>(&::System::Text::Encoding::get_Preamble)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x25a11c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetDataItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::Encoding::*)()>(&::System::Text::Encoding::GetDataItem)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x25a1218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "GetDataItem",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.get_EncodingName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Text::Encoding::*)()>(&::System::Text::Encoding::get_EncodingName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25a1340;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.get_WebName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Text::Encoding::*)()>(&::System::Text::Encoding::get_WebName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x25a134c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.get_EncoderFallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::EncoderFallback* (::System::Text::Encoding::*)()>(&::System::Text::Encoding::get_EncoderFallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a137c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_EncoderFallback",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.set_EncoderFallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::Encoding::*)(::System::Text::EncoderFallback*)>(
    &::System::Text::Encoding::set_EncoderFallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x25a0f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "set_EncoderFallback", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::EncoderFallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.get_DecoderFallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::DecoderFallback* (::System::Text::Encoding::*)()>(&::System::Text::Encoding::get_DecoderFallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a1384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_DecoderFallback",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.set_DecoderFallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::Encoding::*)(::System::Text::DecoderFallback*)>(
    &::System::Text::Encoding::set_DecoderFallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x25a1008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "set_DecoderFallback", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::DecoderFallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Text::Encoding::*)()>(&::System::Text::Encoding::Clone)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x25a138c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::Encoding::*)()>(&::System::Text::Encoding::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a1414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_IsReadOnly",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.get_ASCII
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&::System::Text::Encoding::get_ASCII)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x25a05e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_ASCII",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.get_Latin1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&::System::Text::Encoding::get_Latin1)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x25a0688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_Latin1",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::Encoding::*)(::StringW)>(&::System::Text::Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x25a141c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::Encoding::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Text::Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::Encoding::*)(::cordl_internals::Ptr<char16_t>, int32_t)>(
    &::System::Text::Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x25a14a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::Encoding::*)(::cordl_internals::Ptr<char16_t>, int32_t, ::System::Text::EncoderNLS*)>(
    &::System::Text::Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x25a161c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Text::Encoding::*)(::ArrayW<char16_t, ::Array<char16_t>*>)>(
    &::System::Text::Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x25a162c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Text::Encoding::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(&::System::Text::Encoding::GetBytes)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x25a16c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Text::Encoding::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::System::Text::Encoding::GetBytes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Text::Encoding::*)(::StringW)>(&::System::Text::Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x25a1778;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::Encoding::*)(::StringW, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::Text::Encoding::GetBytes)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x25a187c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::Encoding::*)(::cordl_internals::Ptr<char16_t>, int32_t, ::cordl_internals::Ptr<uint8_t>,
                                                                                                                        int32_t, ::System::Text::EncoderNLS*)>(&::System::Text::Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x25a192c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Text::Encoding::*)(::cordl_internals::Ptr<char16_t>, int32_t, ::cordl_internals::Ptr<uint8_t>, int32_t)>(&::System::Text::Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x25a193c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::Encoding::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Text::Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::Encoding::*)(::cordl_internals::Ptr<uint8_t>, int32_t)>(
    &::System::Text::Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x25a1b68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::Encoding::*)(::cordl_internals::Ptr<uint8_t>, int32_t, ::System::Text::DecoderNLS*)>(
    &::System::Text::Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x25a1ce0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<char16_t, ::Array<char16_t>*> (::System::Text::Encoding::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::System::Text::Encoding::GetChars)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x25a1cf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Text::Encoding::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t)>(&::System::Text::Encoding::GetChars)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Text::Encoding::*)(::cordl_internals::Ptr<uint8_t>, int32_t, ::cordl_internals::Ptr<char16_t>, int32_t)>(&::System::Text::Encoding::GetChars)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x25a1dac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::Encoding::*)(::cordl_internals::Ptr<uint8_t>, int32_t, ::cordl_internals::Ptr<char16_t>,
                                                                                                                        int32_t, ::System::Text::DecoderNLS*)>(&::System::Text::Encoding::GetChars)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x25a1fd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Text::Encoding::*)(::cordl_internals::Ptr<uint8_t>, int32_t)>(
    &::System::Text::Encoding::GetString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x25a1fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "GetString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::Encoding::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Span_1<char16_t>)>(
    &::System::Text::Encoding::GetChars)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x25a20d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Text::Encoding::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::System::Text::Encoding::GetString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x25a2178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "GetString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.get_CodePage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::Encoding::*)()>(&::System::Text::Encoding::get_CodePage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a21dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetDecoder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Decoder* (::System::Text::Encoding::*)()>(&::System::Text::Encoding::GetDecoder)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25a21e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.CreateDefaultEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&::System::Text::Encoding::CreateDefaultEncoding)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x25a2280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "CreateDefaultEncoding",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.setReadOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::Encoding::*)(bool)>(&::System::Text::Encoding::setReadOnly)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25a245c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "setReadOnly", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.get_Default
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&::System::Text::Encoding::get_Default)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x25a02ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_Default",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetEncoder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoder* (::System::Text::Encoding::*)()>(&::System::Text::Encoding::GetEncoder)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25a2468;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetMaxByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::Encoding::*)(int32_t)>(&::System::Text::Encoding::GetMaxByteCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetMaxCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::Encoding::*)(int32_t)>(&::System::Text::Encoding::GetMaxCharCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Text::Encoding::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Text::Encoding::GetString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x25a2504;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Text::Encoding::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Text::Encoding::GetString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25a2598;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.get_Unicode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&::System::Text::Encoding::get_Unicode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x25a0328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_Unicode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.get_BigEndianUnicode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&::System::Text::Encoding::get_BigEndianUnicode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x25a03d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_BigEndianUnicode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.get_UTF7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&::System::Text::Encoding::get_UTF7)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x25a0488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_UTF7",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.get_UTF8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&::System::Text::Encoding::get_UTF8)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x259efe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_UTF8",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.get_UTF32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&::System::Text::Encoding::get_UTF32)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x25a0530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_UTF32",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::Encoding::*)(::System::Object*)>(&::System::Text::Encoding::Equals)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x25a25c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::Encoding::*)()>(&::System::Text::Encoding::GetHashCode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25a2690;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetBestFitUnicodeToBytesData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t, ::Array<char16_t>*> (::System::Text::Encoding::*)()>(
    &::System::Text::Encoding::GetBestFitUnicodeToBytesData)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25a26e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetBestFitBytesToUnicodeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t, ::Array<char16_t>*> (::System::Text::Encoding::*)()>(
    &::System::Text::Encoding::GetBestFitBytesToUnicodeData)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25a2740;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.ThrowBytesOverflow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::Encoding::*)()>(&::System::Text::Encoding::ThrowBytesOverflow)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x25a2798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "ThrowBytesOverflow",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.ThrowBytesOverflow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::Encoding::*)(::System::Text::EncoderNLS*, bool)>(
    &::System::Text::Encoding::ThrowBytesOverflow)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x25a28a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "ThrowBytesOverflow", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::EncoderNLS*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.ThrowCharsOverflow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::Encoding::*)()>(&::System::Text::Encoding::ThrowCharsOverflow)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x25a291c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "ThrowCharsOverflow",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.ThrowCharsOverflow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::Encoding::*)(::System::Text::DecoderNLS*, bool)>(
    &::System::Text::Encoding::ThrowCharsOverflow)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x25a2a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "ThrowCharsOverflow", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::DecoderNLS*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::Encoding::*)(::System::ReadOnlySpan_1<char16_t>, ::System::Span_1<uint8_t>)>(
    &::System::Text::Encoding::GetBytes)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x25a2aa0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 39));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Text::Encoding::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Text::Encoding::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
constexpr int32_t& System::Text::Encoding::__cordl_internal_get_m_codePage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_codePage;
}
constexpr int32_t const& System::Text::Encoding::__cordl_internal_get_m_codePage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_codePage;
}
constexpr void System::Text::Encoding::__cordl_internal_set_m_codePage(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_codePage = value;
}
constexpr ::System::Globalization::CodePageDataItem*& System::Text::Encoding::__cordl_internal_get_dataItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataItem;
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CodePageDataItem*> const& System::Text::Encoding::__cordl_internal_get_dataItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataItem;
}
constexpr void System::Text::Encoding::__cordl_internal_set_dataItem(::System::Globalization::CodePageDataItem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dataItem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Text::Encoding::__cordl_internal_get_m_deserializedFromEverett() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_deserializedFromEverett;
}
constexpr bool const& System::Text::Encoding::__cordl_internal_get_m_deserializedFromEverett() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_deserializedFromEverett;
}
constexpr void System::Text::Encoding::__cordl_internal_set_m_deserializedFromEverett(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_deserializedFromEverett = value;
}
constexpr bool& System::Text::Encoding::__cordl_internal_get_m_isReadOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isReadOnly;
}
constexpr bool const& System::Text::Encoding::__cordl_internal_get_m_isReadOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isReadOnly;
}
constexpr void System::Text::Encoding::__cordl_internal_set_m_isReadOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_isReadOnly = value;
}
constexpr ::System::Text::EncoderFallback*& System::Text::Encoding::__cordl_internal_get_encoderFallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoderFallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::EncoderFallback*> const& System::Text::Encoding::__cordl_internal_get_encoderFallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoderFallback;
}
constexpr void System::Text::Encoding::__cordl_internal_set_encoderFallback(::System::Text::EncoderFallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___encoderFallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::DecoderFallback*& System::Text::Encoding::__cordl_internal_get_decoderFallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decoderFallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::DecoderFallback*> const& System::Text::Encoding::__cordl_internal_get_decoderFallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decoderFallback;
}
constexpr void System::Text::Encoding::__cordl_internal_set_decoderFallback(::System::Text::DecoderFallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___decoderFallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Text::Encoding::setStaticF_defaultEncoding(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "defaultEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get>(
      std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Text::Encoding::getStaticF_defaultEncoding() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "defaultEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get>();
}
inline void System::Text::Encoding::setStaticF_unicodeEncoding(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "unicodeEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get>(
      std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Text::Encoding::getStaticF_unicodeEncoding() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "unicodeEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get>();
}
inline void System::Text::Encoding::setStaticF_bigEndianUnicode(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "bigEndianUnicode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get>(
      std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Text::Encoding::getStaticF_bigEndianUnicode() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "bigEndianUnicode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get>();
}
inline void System::Text::Encoding::setStaticF_utf7Encoding(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "utf7Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get>(
      std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Text::Encoding::getStaticF_utf7Encoding() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "utf7Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get>();
}
inline void System::Text::Encoding::setStaticF_utf8Encoding(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "utf8Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get>(
      std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Text::Encoding::getStaticF_utf8Encoding() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "utf8Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get>();
}
inline void System::Text::Encoding::setStaticF_utf32Encoding(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "utf32Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get>(
      std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Text::Encoding::getStaticF_utf32Encoding() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "utf32Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get>();
}
inline void System::Text::Encoding::setStaticF_asciiEncoding(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "asciiEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get>(
      std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Text::Encoding::getStaticF_asciiEncoding() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "asciiEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get>();
}
inline void System::Text::Encoding::setStaticF_latin1Encoding(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "latin1Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get>(
      std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Text::Encoding::getStaticF_latin1Encoding() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "latin1Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get>();
}
inline void System::Text::Encoding::setStaticF_encodings(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Text::Encoding*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Text::Encoding*>*, "encodings",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Text::Encoding*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Text::Encoding*>* System::Text::Encoding::getStaticF_encodings() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Text::Encoding*>*, "encodings",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get>();
}
inline void System::Text::Encoding::setStaticF_s_InternalSyncObject(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_InternalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Text::Encoding::getStaticF_s_InternalSyncObject() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_InternalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get>();
}
inline ::System::Text::Encoding* System::Text::Encoding::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::Encoding*>());
}
inline void System::Text::Encoding::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Text::Encoding* System::Text::Encoding::New_ctor(int32_t codePage) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::Encoding*>(codePage));
}
inline void System::Text::Encoding::_ctor(int32_t codePage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, codePage);
}
inline void System::Text::Encoding::SetDefaultFallbacks() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Text::Encoding::OnDeserializing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "OnDeserializing",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Text::Encoding::OnDeserialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "OnDeserialized",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Text::Encoding::OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "OnDeserializing", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx);
}
inline void System::Text::Encoding::OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "OnDeserialized", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx);
}
inline void System::Text::Encoding::OnSerializing(::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "OnSerializing", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx);
}
inline void System::Text::Encoding::DeserializeEncoding(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "DeserializeEncoding", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline void System::Text::Encoding::SerializeEncoding(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "SerializeEncoding", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::System::Object* System::Text::Encoding::get_InternalSyncObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_InternalSyncObject",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method);
}
inline ::System::Text::Encoding* System::Text::Encoding::GetEncoding(int32_t codepage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "GetEncoding", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method, codepage);
}
inline ::System::Text::Encoding* System::Text::Encoding::GetEncoding(int32_t codepage, ::System::Text::EncoderFallback* encoderFallback, ::System::Text::DecoderFallback* decoderFallback) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "GetEncoding", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::EncoderFallback*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::DecoderFallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method, codepage, encoderFallback, decoderFallback);
}
inline ::System::Text::Encoding* System::Text::Encoding::GetEncoding(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "GetEncoding", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method, name);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Text::Encoding::GetPreamble() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::System::ReadOnlySpan_1<uint8_t> System::Text::Encoding::get_Preamble() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>, false>(this, ___internal_method);
}
inline void System::Text::Encoding::GetDataItem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "GetDataItem",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Text::Encoding::get_EncodingName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Text::Encoding::get_WebName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Text::EncoderFallback* System::Text::Encoding::get_EncoderFallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_EncoderFallback",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::EncoderFallback*, false>(this, ___internal_method);
}
inline void System::Text::Encoding::set_EncoderFallback(::System::Text::EncoderFallback* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "set_EncoderFallback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::EncoderFallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Text::DecoderFallback* System::Text::Encoding::get_DecoderFallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_DecoderFallback",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::DecoderFallback*, false>(this, ___internal_method);
}
inline void System::Text::Encoding::set_DecoderFallback(::System::Text::DecoderFallback* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "set_DecoderFallback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::DecoderFallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Object* System::Text::Encoding::Clone() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Text::Encoding::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_IsReadOnly",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Text::Encoding* System::Text::Encoding::get_ASCII() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_ASCII",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method);
}
inline ::System::Text::Encoding* System::Text::Encoding::get_Latin1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_Latin1",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method);
}
inline int32_t System::Text::Encoding::GetByteCount(::StringW s) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s);
}
inline int32_t System::Text::Encoding::GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, index, count);
}
inline int32_t System::Text::Encoding::GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, count);
}
inline int32_t System::Text::Encoding::GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count, ::System::Text::EncoderNLS* encoder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, count, encoder);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Text::Encoding::GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, chars);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Text::Encoding::GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, chars, index, count);
}
inline int32_t System::Text::Encoding::GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, charIndex, charCount, bytes, byteIndex);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Text::Encoding::GetBytes(::StringW s) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, s);
}
inline int32_t System::Text::Encoding::GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::Encoding::GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount,
                                                ::System::Text::EncoderNLS* encoder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, charCount, bytes, byteCount, encoder);
}
inline int32_t System::Text::Encoding::GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, charCount, bytes, byteCount);
}
inline int32_t System::Text::Encoding::GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::Encoding::GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, count);
}
inline int32_t System::Text::Encoding::GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count, ::System::Text::DecoderNLS* decoder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, count, decoder);
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::Text::Encoding::GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t, ::Array<char16_t>*>, false>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::Encoding::GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline int32_t System::Text::Encoding::GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, byteCount, chars, charCount);
}
inline int32_t System::Text::Encoding::GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount,
                                                ::System::Text::DecoderNLS* decoder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, byteCount, chars, charCount, decoder);
}
inline ::StringW System::Text::Encoding::GetString(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "GetString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, bytes, byteCount);
}
inline int32_t System::Text::Encoding::GetChars(::System::ReadOnlySpan_1<uint8_t> bytes, ::System::Span_1<char16_t> chars) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, chars);
}
inline ::StringW System::Text::Encoding::GetString(::System::ReadOnlySpan_1<uint8_t> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "GetString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, bytes);
}
inline int32_t System::Text::Encoding::get_CodePage() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Text::Decoder* System::Text::Encoding::GetDecoder() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Decoder*, false>(this, ___internal_method);
}
inline ::System::Text::Encoding* System::Text::Encoding::CreateDefaultEncoding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "CreateDefaultEncoding",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method);
}
/// @param value: bool (default: true)
inline void System::Text::Encoding::setReadOnly(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "setReadOnly", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Text::Encoding* System::Text::Encoding::get_Default() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_Default",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method);
}
inline ::System::Text::Encoder* System::Text::Encoding::GetEncoder() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoder*, false>(this, ___internal_method);
}
inline int32_t System::Text::Encoding::GetMaxByteCount(int32_t charCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, charCount);
}
inline int32_t System::Text::Encoding::GetMaxCharCount(int32_t byteCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, byteCount);
}
inline ::StringW System::Text::Encoding::GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, bytes);
}
inline ::StringW System::Text::Encoding::GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, bytes, index, count);
}
inline ::System::Text::Encoding* System::Text::Encoding::get_Unicode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_Unicode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method);
}
inline ::System::Text::Encoding* System::Text::Encoding::get_BigEndianUnicode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_BigEndianUnicode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method);
}
inline ::System::Text::Encoding* System::Text::Encoding::get_UTF7() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_UTF7",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method);
}
inline ::System::Text::Encoding* System::Text::Encoding::get_UTF8() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_UTF8",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method);
}
inline ::System::Text::Encoding* System::Text::Encoding::get_UTF32() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "get_UTF32",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method);
}
inline bool System::Text::Encoding::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline int32_t System::Text::Encoding::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::Text::Encoding::GetBestFitUnicodeToBytesData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t, ::Array<char16_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::Text::Encoding::GetBestFitBytesToUnicodeData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t, ::Array<char16_t>*>, false>(this, ___internal_method);
}
inline void System::Text::Encoding::ThrowBytesOverflow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "ThrowBytesOverflow",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Text::Encoding::ThrowBytesOverflow(::System::Text::EncoderNLS* encoder, bool nothingEncoded) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "ThrowBytesOverflow", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::EncoderNLS*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encoder, nothingEncoded);
}
inline void System::Text::Encoding::ThrowCharsOverflow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "ThrowCharsOverflow",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Text::Encoding::ThrowCharsOverflow(::System::Text::DecoderNLS* decoder, bool nothingDecoded) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), "ThrowCharsOverflow", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::DecoderNLS*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, decoder, nothingDecoded);
}
inline int32_t System::Text::Encoding::GetBytes(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<uint8_t> bytes) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Encoding*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, bytes);
}
// Ctor Parameters []
constexpr ::System::Text::Encoding::Encoding() {}
