#pragma once
#include "System/Text/zzzz__DecoderFallbackBuffer_impl.hpp"
#include "System/Text/zzzz__DecoderFallback_impl.hpp"
#include "System/Text/zzzz__DecoderNLS_impl.hpp"
#include "System/Text/zzzz__EncoderNLS_impl.hpp"
#include "System/Text/zzzz__Encoding_impl.hpp"
#include "System/Text/zzzz__UTF7Encoding_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Text/zzzz__UTF7Encoding_def.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__EncoderNLS_def.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
//  Writing Method size for method: ::System::Text::__UTF7Encoding__Decoder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__UTF7Encoding__Decoder::*)(::System::Text::UTF7Encoding*)>(
    &::System::Text::__UTF7Encoding__Decoder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24419dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__Decoder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::UTF7Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__UTF7Encoding__Decoder.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__UTF7Encoding__Decoder::*)()>(&::System::Text::__UTF7Encoding__Decoder::Reset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2441bf8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__Decoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__Decoder*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__UTF7Encoding__Decoder.get_HasState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::__UTF7Encoding__Decoder::*)()>(&::System::Text::__UTF7Encoding__Decoder::get_HasState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2441c20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__Decoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__Decoder*>::get(), 14));
    return ___internal_method;
  }
};
constexpr int32_t& System::Text::__UTF7Encoding__Decoder::__get_bits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bits;
}
constexpr int32_t const& System::Text::__UTF7Encoding__Decoder::__get_bits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bits;
}
constexpr void System::Text::__UTF7Encoding__Decoder::__set_bits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bits = value;
}
constexpr int32_t& System::Text::__UTF7Encoding__Decoder::__get_bitCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitCount;
}
constexpr int32_t const& System::Text::__UTF7Encoding__Decoder::__get_bitCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitCount;
}
constexpr void System::Text::__UTF7Encoding__Decoder::__set_bitCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bitCount = value;
}
constexpr bool& System::Text::__UTF7Encoding__Decoder::__get_firstByte() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstByte;
}
constexpr bool const& System::Text::__UTF7Encoding__Decoder::__get_firstByte() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstByte;
}
constexpr void System::Text::__UTF7Encoding__Decoder::__set_firstByte(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstByte = value;
}
inline ::System::Text::__UTF7Encoding__Decoder* System::Text::__UTF7Encoding__Decoder::New_ctor(::System::Text::UTF7Encoding* encoding) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Text::__UTF7Encoding__Decoder*>(encoding));
}
inline void System::Text::__UTF7Encoding__Decoder::_ctor(::System::Text::UTF7Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__Decoder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::UTF7Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encoding);
}
inline void System::Text::__UTF7Encoding__Decoder::Reset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__Decoder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Text::__UTF7Encoding__Decoder::get_HasState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__Decoder*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Text::__UTF7Encoding__Decoder::__UTF7Encoding__Decoder() {}
//  Writing Method size for method: ::System::Text::__UTF7Encoding__Encoder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__UTF7Encoding__Encoder::*)(::System::Text::UTF7Encoding*)>(
    &::System::Text::__UTF7Encoding__Encoder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2441a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__Encoder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::UTF7Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__UTF7Encoding__Encoder.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__UTF7Encoding__Encoder::*)()>(&::System::Text::__UTF7Encoding__Encoder::Reset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2441c30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__Encoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__Encoder*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__UTF7Encoding__Encoder.get_HasState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::__UTF7Encoding__Encoder::*)()>(&::System::Text::__UTF7Encoding__Encoder::get_HasState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2441c54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__Encoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__Encoder*>::get(), 11));
    return ___internal_method;
  }
};
constexpr int32_t& System::Text::__UTF7Encoding__Encoder::__get_bits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bits;
}
constexpr int32_t const& System::Text::__UTF7Encoding__Encoder::__get_bits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bits;
}
constexpr void System::Text::__UTF7Encoding__Encoder::__set_bits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bits = value;
}
constexpr int32_t& System::Text::__UTF7Encoding__Encoder::__get_bitCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitCount;
}
constexpr int32_t const& System::Text::__UTF7Encoding__Encoder::__get_bitCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitCount;
}
constexpr void System::Text::__UTF7Encoding__Encoder::__set_bitCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bitCount = value;
}
inline ::System::Text::__UTF7Encoding__Encoder* System::Text::__UTF7Encoding__Encoder::New_ctor(::System::Text::UTF7Encoding* encoding) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Text::__UTF7Encoding__Encoder*>(encoding));
}
inline void System::Text::__UTF7Encoding__Encoder::_ctor(::System::Text::UTF7Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__Encoder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::UTF7Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encoding);
}
inline void System::Text::__UTF7Encoding__Encoder::Reset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__Encoder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Text::__UTF7Encoding__Encoder::get_HasState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__Encoder*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Text::__UTF7Encoding__Encoder::__UTF7Encoding__Encoder() {}
//  Writing Method size for method: ::System::Text::__UTF7Encoding__DecoderUTF7Fallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__UTF7Encoding__DecoderUTF7Fallback::*)()>(
    &::System::Text::__UTF7Encoding__DecoderUTF7Fallback::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244015c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7Fallback*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__UTF7Encoding__DecoderUTF7Fallback.CreateFallbackBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::DecoderFallbackBuffer* (::System::Text::__UTF7Encoding__DecoderUTF7Fallback::*)()>(
    &::System::Text::__UTF7Encoding__DecoderUTF7Fallback::CreateFallbackBuffer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2441c74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7Fallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7Fallback*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__UTF7Encoding__DecoderUTF7Fallback.get_MaxCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::__UTF7Encoding__DecoderUTF7Fallback::*)()>(
    &::System::Text::__UTF7Encoding__DecoderUTF7Fallback::get_MaxCharCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2441ce8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7Fallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7Fallback*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__UTF7Encoding__DecoderUTF7Fallback.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::__UTF7Encoding__DecoderUTF7Fallback::*)(::System::Object*)>(
    &::System::Text::__UTF7Encoding__DecoderUTF7Fallback::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2441cf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7Fallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7Fallback*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__UTF7Encoding__DecoderUTF7Fallback.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::__UTF7Encoding__DecoderUTF7Fallback::*)()>(
    &::System::Text::__UTF7Encoding__DecoderUTF7Fallback::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2441d4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7Fallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7Fallback*>::get(), 2));
    return ___internal_method;
  }
};
inline ::System::Text::__UTF7Encoding__DecoderUTF7Fallback* System::Text::__UTF7Encoding__DecoderUTF7Fallback::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Text::__UTF7Encoding__DecoderUTF7Fallback*>());
}
inline void System::Text::__UTF7Encoding__DecoderUTF7Fallback::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7Fallback*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Text::DecoderFallbackBuffer* System::Text::__UTF7Encoding__DecoderUTF7Fallback::CreateFallbackBuffer() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7Fallback*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Text::DecoderFallbackBuffer*, false>(this, ___internal_method);
}
inline int32_t System::Text::__UTF7Encoding__DecoderUTF7Fallback::get_MaxCharCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7Fallback*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Text::__UTF7Encoding__DecoderUTF7Fallback::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7Fallback*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline int32_t System::Text::__UTF7Encoding__DecoderUTF7Fallback::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7Fallback*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Text::__UTF7Encoding__DecoderUTF7Fallback::__UTF7Encoding__DecoderUTF7Fallback() {}
//  Writing Method size for method: ::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::*)(
    ::System::Text::__UTF7Encoding__DecoderUTF7Fallback*)>(&::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2441cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::__UTF7Encoding__DecoderUTF7Fallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer.Fallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::Fallback)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2441d54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer.GetNextChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::*)()>(
    &::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::GetNextChar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2441d94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer.get_Remaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::*)()>(
    &::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::get_Remaining)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2441db4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::*)()>(
    &::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2441dc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer.InternalFallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::cordl_internals::Ptr<uint8_t>)>(&::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::InternalFallback)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2441dd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer*>::get(), 9));
    return ___internal_method;
  }
};
constexpr char16_t& System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::__get_cFallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cFallback;
}
constexpr char16_t const& System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::__get_cFallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cFallback;
}
constexpr void System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::__set_cFallback(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cFallback = value;
}
constexpr int32_t& System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::__get_iCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iCount;
}
constexpr int32_t const& System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::__get_iCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iCount;
}
constexpr void System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::__set_iCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iCount = value;
}
constexpr int32_t& System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::__get_iSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iSize;
}
constexpr int32_t const& System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::__get_iSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iSize;
}
constexpr void System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::__set_iSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iSize = value;
}
inline ::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer* System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::New_ctor(::System::Text::__UTF7Encoding__DecoderUTF7Fallback* fallback) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer*>(fallback));
}
inline void System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::_ctor(::System::Text::__UTF7Encoding__DecoderUTF7Fallback* fallback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::__UTF7Encoding__DecoderUTF7Fallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fallback);
}
inline bool System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::Fallback(::ArrayW<uint8_t, ::Array<uint8_t>*> bytesUnknown, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bytesUnknown, index);
}
inline char16_t System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::GetNextChar() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline int32_t System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::get_Remaining() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::Reset() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::InternalFallback(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::cordl_internals::Ptr<uint8_t> pBytes) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, pBytes);
}
// Ctor Parameters []
constexpr ::System::Text::__UTF7Encoding__DecoderUTF7FallbackBuffer::__UTF7Encoding__DecoderUTF7FallbackBuffer() {}
//  Writing Method size for method: ::System::Text::UTF7Encoding._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::UTF7Encoding::*)()>(&::System::Text::UTF7Encoding::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x243fdcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::UTF7Encoding::*)(bool)>(&::System::Text::UTF7Encoding::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x243fdf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.MakeTables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::UTF7Encoding::*)()>(&::System::Text::UTF7Encoding::MakeTables)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x243fe20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), "MakeTables",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.SetDefaultFallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::UTF7Encoding::*)()>(&::System::Text::UTF7Encoding::SetDefaultFallbacks)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x24400a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::UTF7Encoding::*)(::System::Object*)>(&::System::Text::UTF7Encoding::Equals)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2440164;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF7Encoding::*)()>(&::System::Text::UTF7Encoding::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2440234;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Text::UTF7Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x24402a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(::StringW)>(&::System::Text::UTF7Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2440424;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(::cordl_internals::Ptr<char16_t>, int32_t)>(
    &::System::Text::UTF7Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x24404b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Text::UTF7Encoding::*)(::StringW, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::System::Text::UTF7Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x244058c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(
    ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::System::Text::UTF7Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x24407ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Text::UTF7Encoding::*)(::cordl_internals::Ptr<char16_t>, int32_t, ::cordl_internals::Ptr<uint8_t>, int32_t)>(&::System::Text::UTF7Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2440a68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Text::UTF7Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2440b68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(::cordl_internals::Ptr<uint8_t>, int32_t)>(
    &::System::Text::UTF7Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2440cec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t)>(&::System::Text::UTF7Encoding::GetChars)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x2440dc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Text::UTF7Encoding::*)(::cordl_internals::Ptr<uint8_t>, int32_t, ::cordl_internals::Ptr<char16_t>, int32_t)>(&::System::Text::UTF7Encoding::GetChars)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2441040;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Text::UTF7Encoding::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Text::UTF7Encoding::GetString)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2441140;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(::cordl_internals::Ptr<char16_t>, int32_t, ::System::Text::EncoderNLS*)>(
    &::System::Text::UTF7Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2441308;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(
    ::cordl_internals::Ptr<char16_t>, int32_t, ::cordl_internals::Ptr<uint8_t>, int32_t, ::System::Text::EncoderNLS*)>(&::System::Text::UTF7Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x2441324;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(::cordl_internals::Ptr<uint8_t>, int32_t, ::System::Text::DecoderNLS*)>(
    &::System::Text::UTF7Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24416c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(
    ::cordl_internals::Ptr<uint8_t>, int32_t, ::cordl_internals::Ptr<char16_t>, int32_t, ::System::Text::DecoderNLS*)>(&::System::Text::UTF7Encoding::GetChars)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x24416dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetDecoder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Decoder* (::System::Text::UTF7Encoding::*)()>(&::System::Text::UTF7Encoding::GetDecoder)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2441978;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetEncoder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoder* (::System::Text::UTF7Encoding::*)()>(&::System::Text::UTF7Encoding::GetEncoder)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24419e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetMaxByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(int32_t)>(&::System::Text::UTF7Encoding::GetMaxByteCount)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2441a48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetMaxCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(int32_t)>(&::System::Text::UTF7Encoding::GetMaxCharCount)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2441b0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 34));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Text::UTF7Encoding::__get__base64Bytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____base64Bytes;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Text::UTF7Encoding::__get__base64Bytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____base64Bytes;
}
constexpr void System::Text::UTF7Encoding::__set__base64Bytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____base64Bytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int8_t, ::Array<int8_t>*>& System::Text::UTF7Encoding::__get__base64Values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____base64Values;
}
constexpr ::ArrayW<int8_t, ::Array<int8_t>*> const& System::Text::UTF7Encoding::__get__base64Values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____base64Values;
}
constexpr void System::Text::UTF7Encoding::__set__base64Values(::ArrayW<int8_t, ::Array<int8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____base64Values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<bool, ::Array<bool>*>& System::Text::UTF7Encoding::__get__directEncode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directEncode;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& System::Text::UTF7Encoding::__get__directEncode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directEncode;
}
constexpr void System::Text::UTF7Encoding::__set__directEncode(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____directEncode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Text::UTF7Encoding::__get__allowOptionals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowOptionals;
}
constexpr bool const& System::Text::UTF7Encoding::__get__allowOptionals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowOptionals;
}
constexpr void System::Text::UTF7Encoding::__set__allowOptionals(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowOptionals = value;
}
inline void System::Text::UTF7Encoding::setStaticF_s_default(::System::Text::UTF7Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UTF7Encoding*, "s_default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get>(
      std::forward<::System::Text::UTF7Encoding*>(value));
}
inline ::System::Text::UTF7Encoding* System::Text::UTF7Encoding::getStaticF_s_default() {
  return ::cordl_internals::getStaticField<::System::Text::UTF7Encoding*, "s_default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get>();
}
inline ::System::Text::UTF7Encoding* System::Text::UTF7Encoding::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Text::UTF7Encoding*>());
}
inline void System::Text::UTF7Encoding::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Text::UTF7Encoding* System::Text::UTF7Encoding::New_ctor(bool allowOptionals) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Text::UTF7Encoding*>(allowOptionals));
}
inline void System::Text::UTF7Encoding::_ctor(bool allowOptionals) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allowOptionals);
}
inline void System::Text::UTF7Encoding::MakeTables() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), "MakeTables",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Text::UTF7Encoding::SetDefaultFallbacks() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Text::UTF7Encoding::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline int32_t System::Text::UTF7Encoding::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Text::UTF7Encoding::GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, index, count);
}
inline int32_t System::Text::UTF7Encoding::GetByteCount(::StringW s) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s);
}
inline int32_t System::Text::UTF7Encoding::GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, count);
}
inline int32_t System::Text::UTF7Encoding::GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::UTF7Encoding::GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::UTF7Encoding::GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, charCount, bytes, byteCount);
}
inline int32_t System::Text::UTF7Encoding::GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::UTF7Encoding::GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, count);
}
inline int32_t System::Text::UTF7Encoding::GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline int32_t System::Text::UTF7Encoding::GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, byteCount, chars, charCount);
}
inline ::StringW System::Text::UTF7Encoding::GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::UTF7Encoding::GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count, ::System::Text::EncoderNLS* baseEncoder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, count, baseEncoder);
}
inline int32_t System::Text::UTF7Encoding::GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount,
                                                    ::System::Text::EncoderNLS* baseEncoder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, charCount, bytes, byteCount, baseEncoder);
}
inline int32_t System::Text::UTF7Encoding::GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count, ::System::Text::DecoderNLS* baseDecoder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, count, baseDecoder);
}
inline int32_t System::Text::UTF7Encoding::GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount,
                                                    ::System::Text::DecoderNLS* baseDecoder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, byteCount, chars, charCount, baseDecoder);
}
inline ::System::Text::Decoder* System::Text::UTF7Encoding::GetDecoder() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Decoder*, false>(this, ___internal_method);
}
inline ::System::Text::Encoder* System::Text::UTF7Encoding::GetEncoder() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoder*, false>(this, ___internal_method);
}
inline int32_t System::Text::UTF7Encoding::GetMaxByteCount(int32_t charCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, charCount);
}
inline int32_t System::Text::UTF7Encoding::GetMaxCharCount(int32_t byteCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF7Encoding*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, byteCount);
}
// Ctor Parameters []
constexpr ::System::Text::UTF7Encoding::UTF7Encoding() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
