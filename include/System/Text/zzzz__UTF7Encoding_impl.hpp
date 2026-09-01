#pragma once
// IWYU pragma private; include "System\Text\UTF7Encoding.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_impl.hpp"
#include "System/Text/zzzz__DecoderFallback_impl.hpp"
#include "System/Text/zzzz__DecoderNLS_impl.hpp"
#include "System/Text/zzzz__EncoderNLS_impl.hpp"
#include "System/Text/zzzz__Encoding_impl.hpp"
#include "System/Text/zzzz__UTF7Encoding_def.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__EncoderNLS_def.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
#include "System/Text/zzzz__UTF7Encoding_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Text::UTF7Encoding_Decoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF7Encoding_Decoder::*)(::System::Text::UTF7Encoding*)>(&::System::Text::UTF7Encoding_Decoder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5adff08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding_Decoder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::UTF7Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding_Decoder.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF7Encoding_Decoder::*)()>(&::System::Text::UTF7Encoding_Decoder::Reset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ae017c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding_Decoder*>(), { ::i2c::class_of<::System::Text::UTF7Encoding_Decoder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding_Decoder.get_HasState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::UTF7Encoding_Decoder::*)()>(&::System::Text::UTF7Encoding_Decoder::get_HasState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ae01a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding_Decoder*>(), { ::i2c::class_of<::System::Text::UTF7Encoding_Decoder*>(), 14 }));
    return ___internal_method;
  }
};
constexpr int32_t& System::Text::UTF7Encoding_Decoder::__cordl_internal_get_bits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bits;
}
constexpr int32_t const& System::Text::UTF7Encoding_Decoder::__cordl_internal_get_bits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bits;
}
constexpr void System::Text::UTF7Encoding_Decoder::__cordl_internal_set_bits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bits = value;
}
constexpr int32_t& System::Text::UTF7Encoding_Decoder::__cordl_internal_get_bitCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitCount;
}
constexpr int32_t const& System::Text::UTF7Encoding_Decoder::__cordl_internal_get_bitCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitCount;
}
constexpr void System::Text::UTF7Encoding_Decoder::__cordl_internal_set_bitCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bitCount = value;
}
constexpr bool& System::Text::UTF7Encoding_Decoder::__cordl_internal_get_firstByte() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstByte;
}
constexpr bool const& System::Text::UTF7Encoding_Decoder::__cordl_internal_get_firstByte() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstByte;
}
constexpr void System::Text::UTF7Encoding_Decoder::__cordl_internal_set_firstByte(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstByte = value;
}
inline void System::Text::UTF7Encoding_Decoder::_ctor(::System::Text::UTF7Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding_Decoder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::UTF7Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoding);
}
inline void System::Text::UTF7Encoding_Decoder::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding_Decoder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Text::UTF7Encoding_Decoder::get_HasState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding_Decoder*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Text::UTF7Encoding_Decoder* System::Text::UTF7Encoding_Decoder::New_ctor(::System::Text::UTF7Encoding* encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::UTF7Encoding_Decoder*>(encoding));
}
// Ctor Parameters []
constexpr ::System::Text::UTF7Encoding_Decoder::UTF7Encoding_Decoder() {}
//  Writing Method size for method: ::System::Text::UTF7Encoding_Encoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF7Encoding_Encoder::*)(::System::Text::UTF7Encoding*)>(&::System::Text::UTF7Encoding_Encoder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5adffa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding_Encoder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::UTF7Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding_Encoder.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF7Encoding_Encoder::*)()>(&::System::Text::UTF7Encoding_Encoder::Reset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ae01b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding_Encoder*>(), { ::i2c::class_of<::System::Text::UTF7Encoding_Encoder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding_Encoder.get_HasState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::UTF7Encoding_Encoder::*)()>(&::System::Text::UTF7Encoding_Encoder::get_HasState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ae01d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding_Encoder*>(), { ::i2c::class_of<::System::Text::UTF7Encoding_Encoder*>(), 11 }));
    return ___internal_method;
  }
};
constexpr int32_t& System::Text::UTF7Encoding_Encoder::__cordl_internal_get_bits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bits;
}
constexpr int32_t const& System::Text::UTF7Encoding_Encoder::__cordl_internal_get_bits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bits;
}
constexpr void System::Text::UTF7Encoding_Encoder::__cordl_internal_set_bits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bits = value;
}
constexpr int32_t& System::Text::UTF7Encoding_Encoder::__cordl_internal_get_bitCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitCount;
}
constexpr int32_t const& System::Text::UTF7Encoding_Encoder::__cordl_internal_get_bitCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitCount;
}
constexpr void System::Text::UTF7Encoding_Encoder::__cordl_internal_set_bitCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bitCount = value;
}
inline void System::Text::UTF7Encoding_Encoder::_ctor(::System::Text::UTF7Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding_Encoder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::UTF7Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoding);
}
inline void System::Text::UTF7Encoding_Encoder::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding_Encoder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Text::UTF7Encoding_Encoder::get_HasState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding_Encoder*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Text::UTF7Encoding_Encoder* System::Text::UTF7Encoding_Encoder::New_ctor(::System::Text::UTF7Encoding* encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::UTF7Encoding_Encoder*>(encoding));
}
// Ctor Parameters []
constexpr ::System::Text::UTF7Encoding_Encoder::UTF7Encoding_Encoder() {}
//  Writing Method size for method: ::System::Text::UTF7Encoding_DecoderUTF7Fallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF7Encoding_DecoderUTF7Fallback::*)()>(&::System::Text::UTF7Encoding_DecoderUTF7Fallback::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ade718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7Fallback*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding_DecoderUTF7Fallback.CreateFallbackBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::DecoderFallbackBuffer* (::System::Text::UTF7Encoding_DecoderUTF7Fallback::*)()>(
    &::System::Text::UTF7Encoding_DecoderUTF7Fallback::CreateFallbackBuffer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ae01f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7Fallback*>(), { ::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7Fallback*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding_DecoderUTF7Fallback.get_MaxCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF7Encoding_DecoderUTF7Fallback::*)()>(&::System::Text::UTF7Encoding_DecoderUTF7Fallback::get_MaxCharCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ae0254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7Fallback*>(), { ::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7Fallback*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding_DecoderUTF7Fallback.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::UTF7Encoding_DecoderUTF7Fallback::*)(::System::Object*)>(&::System::Text::UTF7Encoding_DecoderUTF7Fallback::Equals)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ae025c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7Fallback*>(), { ::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7Fallback*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding_DecoderUTF7Fallback.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF7Encoding_DecoderUTF7Fallback::*)()>(&::System::Text::UTF7Encoding_DecoderUTF7Fallback::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ae02bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7Fallback*>(), { ::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7Fallback*>(), 2 }));
    return ___internal_method;
  }
};
inline void System::Text::UTF7Encoding_DecoderUTF7Fallback::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7Fallback*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::DecoderFallbackBuffer* System::Text::UTF7Encoding_DecoderUTF7Fallback::CreateFallbackBuffer() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7Fallback*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::DecoderFallbackBuffer*>(this, ___internal_method);
}
inline int32_t System::Text::UTF7Encoding_DecoderUTF7Fallback::get_MaxCharCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7Fallback*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Text::UTF7Encoding_DecoderUTF7Fallback::Equals(::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7Fallback*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::Text::UTF7Encoding_DecoderUTF7Fallback::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7Fallback*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Text::UTF7Encoding_DecoderUTF7Fallback* System::Text::UTF7Encoding_DecoderUTF7Fallback::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::UTF7Encoding_DecoderUTF7Fallback*>());
}
// Ctor Parameters []
constexpr ::System::Text::UTF7Encoding_DecoderUTF7Fallback::UTF7Encoding_DecoderUTF7Fallback() {}
//  Writing Method size for method: ::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::*)(::System::Text::UTF7Encoding_DecoderUTF7Fallback*)>(
    &::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ae0248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Text::UTF7Encoding_DecoderUTF7Fallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer.Fallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::*)(::ArrayW<uint8_t>, int32_t)>(
    &::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::Fallback)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ae02c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer*>(),
                                                                                          { ::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer.GetNextChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::*)()>(&::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::GetNextChar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ae0300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer*>(),
                                                                                          { ::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer.get_Remaining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::*)()>(&::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::get_Remaining)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ae0320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer*>(),
                                                                                          { ::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::*)()>(&::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ae032c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer*>(),
                                                                                          { ::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer.InternalFallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::*)(::ArrayW<uint8_t>, uint8_t*)>(
    &::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::InternalFallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ae033c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer*>(),
                                                                                          { ::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer*>(), 9 }));
    return ___internal_method;
  }
};
constexpr char16_t& System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::__cordl_internal_get_cFallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cFallback;
}
constexpr char16_t const& System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::__cordl_internal_get_cFallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cFallback;
}
constexpr void System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::__cordl_internal_set_cFallback(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cFallback = value;
}
constexpr int32_t& System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::__cordl_internal_get_iCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iCount;
}
constexpr int32_t const& System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::__cordl_internal_get_iCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iCount;
}
constexpr void System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::__cordl_internal_set_iCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iCount = value;
}
constexpr int32_t& System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::__cordl_internal_get_iSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iSize;
}
constexpr int32_t const& System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::__cordl_internal_get_iSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iSize;
}
constexpr void System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::__cordl_internal_set_iSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iSize = value;
}
inline void System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::_ctor(::System::Text::UTF7Encoding_DecoderUTF7Fallback* fallback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Text::UTF7Encoding_DecoderUTF7Fallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fallback);
}
inline bool System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::Fallback(::ArrayW<uint8_t> bytesUnknown, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bytesUnknown, index);
}
inline char16_t System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::GetNextChar() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline int32_t System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::get_Remaining() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::InternalFallback(::ArrayW<uint8_t> bytes, uint8_t* pBytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, pBytes);
}
inline ::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer* System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::New_ctor(::System::Text::UTF7Encoding_DecoderUTF7Fallback* fallback) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer*>(fallback));
}
// Ctor Parameters []
constexpr ::System::Text::UTF7Encoding_DecoderUTF7FallbackBuffer::UTF7Encoding_DecoderUTF7FallbackBuffer() {}
//  Writing Method size for method: ::System::Text::UTF7Encoding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF7Encoding::*)()>(&::System::Text::UTF7Encoding::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ade3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF7Encoding::*)(bool)>(&::System::Text::UTF7Encoding::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ade3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.MakeTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF7Encoding::*)()>(&::System::Text::UTF7Encoding::MakeTables)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5ade434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { "MakeTables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.SetDefaultFallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF7Encoding::*)()>(&::System::Text::UTF7Encoding::SetDefaultFallbacks)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ade688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::UTF7Encoding::*)(::System::Object*)>(&::System::Text::UTF7Encoding::Equals)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5ade71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF7Encoding::*)()>(&::System::Text::UTF7Encoding::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ade7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Text::UTF7Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5ade860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(::StringW)>(&::System::Text::UTF7Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ade9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(char16_t*, int32_t)>(&::System::Text::UTF7Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5adea54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(::StringW, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::System::Text::UTF7Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5adeb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(::ArrayW<char16_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::System::Text::UTF7Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5aded6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(char16_t*, int32_t, uint8_t*, int32_t)>(&::System::Text::UTF7Encoding::GetBytes)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5adefec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Text::UTF7Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5adf0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(uint8_t*, int32_t)>(&::System::Text::UTF7Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5adf26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(
    &::System::Text::UTF7Encoding::GetChars)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5adf33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(uint8_t*, int32_t, char16_t*, int32_t)>(&::System::Text::UTF7Encoding::GetChars)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5adf5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Text::UTF7Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Text::UTF7Encoding::GetString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5adf6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(char16_t*, int32_t, ::System::Text::EncoderNLS*)>(&::System::Text::UTF7Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5adf848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(char16_t*, int32_t, uint8_t*, int32_t, ::System::Text::EncoderNLS*)>(
    &::System::Text::UTF7Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5adf864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(uint8_t*, int32_t, ::System::Text::DecoderNLS*)>(&::System::Text::UTF7Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5adfbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(uint8_t*, int32_t, char16_t*, int32_t, ::System::Text::DecoderNLS*)>(
    &::System::Text::UTF7Encoding::GetChars)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5adfc08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetDecoder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Decoder* (::System::Text::UTF7Encoding::*)()>(&::System::Text::UTF7Encoding::GetDecoder)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5adfe94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetEncoder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoder* (::System::Text::UTF7Encoding::*)()>(&::System::Text::UTF7Encoding::GetEncoder)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5adff30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetMaxByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(int32_t)>(&::System::Text::UTF7Encoding::GetMaxByteCount)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5adffcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF7Encoding.GetMaxCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF7Encoding::*)(int32_t)>(&::System::Text::UTF7Encoding::GetMaxCharCount)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ae0088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 34 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Text::UTF7Encoding::__cordl_internal_get__base64Bytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____base64Bytes;
}
constexpr ::ArrayW<uint8_t> const& System::Text::UTF7Encoding::__cordl_internal_get__base64Bytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____base64Bytes;
}
constexpr void System::Text::UTF7Encoding::__cordl_internal_set__base64Bytes(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____base64Bytes = value;
}
constexpr ::ArrayW<int8_t>& System::Text::UTF7Encoding::__cordl_internal_get__base64Values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____base64Values;
}
constexpr ::ArrayW<int8_t> const& System::Text::UTF7Encoding::__cordl_internal_get__base64Values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____base64Values;
}
constexpr void System::Text::UTF7Encoding::__cordl_internal_set__base64Values(::ArrayW<int8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____base64Values = value;
}
constexpr ::ArrayW<bool>& System::Text::UTF7Encoding::__cordl_internal_get__directEncode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directEncode;
}
constexpr ::ArrayW<bool> const& System::Text::UTF7Encoding::__cordl_internal_get__directEncode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directEncode;
}
constexpr void System::Text::UTF7Encoding::__cordl_internal_set__directEncode(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____directEncode = value;
}
constexpr bool& System::Text::UTF7Encoding::__cordl_internal_get__allowOptionals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowOptionals;
}
constexpr bool const& System::Text::UTF7Encoding::__cordl_internal_get__allowOptionals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowOptionals;
}
constexpr void System::Text::UTF7Encoding::__cordl_internal_set__allowOptionals(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowOptionals = value;
}
inline void System::Text::UTF7Encoding::setStaticF_s_default(::System::Text::UTF7Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UTF7Encoding*, "s_default", ::System::Text::UTF7Encoding*>(std::forward<::System::Text::UTF7Encoding*>(value));
}
inline ::System::Text::UTF7Encoding* System::Text::UTF7Encoding::getStaticF_s_default() {
  return ::cordl_internals::getStaticField<::System::Text::UTF7Encoding*, "s_default", ::System::Text::UTF7Encoding*>();
}
inline void System::Text::UTF7Encoding::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::UTF7Encoding::_ctor(bool allowOptionals) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allowOptionals);
}
inline void System::Text::UTF7Encoding::MakeTables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF7Encoding*>(), { "MakeTables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::UTF7Encoding::SetDefaultFallbacks() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Text::UTF7Encoding::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::Text::UTF7Encoding::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Text::UTF7Encoding::GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, index, count);
}
inline int32_t System::Text::UTF7Encoding::GetByteCount(::StringW s) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s);
}
inline int32_t System::Text::UTF7Encoding::GetByteCount(char16_t* chars, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, count);
}
inline int32_t System::Text::UTF7Encoding::GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::UTF7Encoding::GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::UTF7Encoding::GetBytes(char16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charCount, bytes, byteCount);
}
inline int32_t System::Text::UTF7Encoding::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::UTF7Encoding::GetCharCount(uint8_t* bytes, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, count);
}
inline int32_t System::Text::UTF7Encoding::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline int32_t System::Text::UTF7Encoding::GetChars(uint8_t* bytes, int32_t byteCount, char16_t* chars, int32_t charCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteCount, chars, charCount);
}
inline ::StringW System::Text::UTF7Encoding::GetString(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::UTF7Encoding::GetByteCount(char16_t* chars, int32_t count, ::System::Text::EncoderNLS* baseEncoder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, count, baseEncoder);
}
inline int32_t System::Text::UTF7Encoding::GetBytes(char16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, ::System::Text::EncoderNLS* baseEncoder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charCount, bytes, byteCount, baseEncoder);
}
inline int32_t System::Text::UTF7Encoding::GetCharCount(uint8_t* bytes, int32_t count, ::System::Text::DecoderNLS* baseDecoder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, count, baseDecoder);
}
inline int32_t System::Text::UTF7Encoding::GetChars(uint8_t* bytes, int32_t byteCount, char16_t* chars, int32_t charCount, ::System::Text::DecoderNLS* baseDecoder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteCount, chars, charCount, baseDecoder);
}
inline ::System::Text::Decoder* System::Text::UTF7Encoding::GetDecoder() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Decoder*>(this, ___internal_method);
}
inline ::System::Text::Encoder* System::Text::UTF7Encoding::GetEncoder() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoder*>(this, ___internal_method);
}
inline int32_t System::Text::UTF7Encoding::GetMaxByteCount(int32_t charCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, charCount);
}
inline int32_t System::Text::UTF7Encoding::GetMaxCharCount(int32_t byteCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF7Encoding*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, byteCount);
}
inline ::System::Text::UTF7Encoding* System::Text::UTF7Encoding::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::UTF7Encoding*>());
}
inline ::System::Text::UTF7Encoding* System::Text::UTF7Encoding::New_ctor(bool allowOptionals) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::UTF7Encoding*>(allowOptionals));
}
// Ctor Parameters []
constexpr ::System::Text::UTF7Encoding::UTF7Encoding() {}
