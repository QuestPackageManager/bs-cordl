#pragma once
// IWYU pragma private; include "System/Text/DecoderReplacementFallbackBuffer.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_impl.hpp"
#include "System/Text/zzzz__DecoderReplacementFallbackBuffer_def.hpp"
#include "System/Text/zzzz__DecoderReplacementFallback_def.hpp"
//  Writing Method size for method: ::System::Text::DecoderReplacementFallbackBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::DecoderReplacementFallbackBuffer::*)(::System::Text::DecoderReplacementFallback*)>(
    &::System::Text::DecoderReplacementFallbackBuffer::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ad074c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::DecoderReplacementFallbackBuffer*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::DecoderReplacementFallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderReplacementFallbackBuffer.Fallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::DecoderReplacementFallbackBuffer::*)(::ArrayW<uint8_t>, int32_t)>(
    &::System::Text::DecoderReplacementFallbackBuffer::Fallback)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ad0820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderReplacementFallbackBuffer*>(), { ::i2c::class_of<::System::Text::DecoderReplacementFallbackBuffer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderReplacementFallbackBuffer.GetNextChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::DecoderReplacementFallbackBuffer::*)()>(&::System::Text::DecoderReplacementFallbackBuffer::GetNextChar)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ad0864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderReplacementFallbackBuffer*>(), { ::i2c::class_of<::System::Text::DecoderReplacementFallbackBuffer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderReplacementFallbackBuffer.get_Remaining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::DecoderReplacementFallbackBuffer::*)()>(&::System::Text::DecoderReplacementFallbackBuffer::get_Remaining)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ad08e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderReplacementFallbackBuffer*>(), { ::i2c::class_of<::System::Text::DecoderReplacementFallbackBuffer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderReplacementFallbackBuffer.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::DecoderReplacementFallbackBuffer::*)()>(&::System::Text::DecoderReplacementFallbackBuffer::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ad08ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderReplacementFallbackBuffer*>(), { ::i2c::class_of<::System::Text::DecoderReplacementFallbackBuffer*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderReplacementFallbackBuffer.InternalFallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::DecoderReplacementFallbackBuffer::*)(::ArrayW<uint8_t>, uint8_t*)>(
    &::System::Text::DecoderReplacementFallbackBuffer::InternalFallback)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ad08fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderReplacementFallbackBuffer*>(), { ::i2c::class_of<::System::Text::DecoderReplacementFallbackBuffer*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Text::DecoderReplacementFallbackBuffer::__cordl_internal_get__strDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strDefault;
}
constexpr ::StringW const& System::Text::DecoderReplacementFallbackBuffer::__cordl_internal_get__strDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strDefault;
}
constexpr void System::Text::DecoderReplacementFallbackBuffer::__cordl_internal_set__strDefault(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____strDefault = value;
}
constexpr int32_t& System::Text::DecoderReplacementFallbackBuffer::__cordl_internal_get__fallbackCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackCount;
}
constexpr int32_t const& System::Text::DecoderReplacementFallbackBuffer::__cordl_internal_get__fallbackCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackCount;
}
constexpr void System::Text::DecoderReplacementFallbackBuffer::__cordl_internal_set__fallbackCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fallbackCount = value;
}
constexpr int32_t& System::Text::DecoderReplacementFallbackBuffer::__cordl_internal_get__fallbackIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackIndex;
}
constexpr int32_t const& System::Text::DecoderReplacementFallbackBuffer::__cordl_internal_get__fallbackIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackIndex;
}
constexpr void System::Text::DecoderReplacementFallbackBuffer::__cordl_internal_set__fallbackIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fallbackIndex = value;
}
inline void System::Text::DecoderReplacementFallbackBuffer::_ctor(::System::Text::DecoderReplacementFallback* fallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::DecoderReplacementFallbackBuffer*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::DecoderReplacementFallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fallback);
}
inline bool System::Text::DecoderReplacementFallbackBuffer::Fallback(::ArrayW<uint8_t> bytesUnknown, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderReplacementFallbackBuffer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bytesUnknown, index);
}
inline char16_t System::Text::DecoderReplacementFallbackBuffer::GetNextChar() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderReplacementFallbackBuffer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline int32_t System::Text::DecoderReplacementFallbackBuffer::get_Remaining() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderReplacementFallbackBuffer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Text::DecoderReplacementFallbackBuffer::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderReplacementFallbackBuffer*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Text::DecoderReplacementFallbackBuffer::InternalFallback(::ArrayW<uint8_t> bytes, uint8_t* pBytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderReplacementFallbackBuffer*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, pBytes);
}
inline ::System::Text::DecoderReplacementFallbackBuffer* System::Text::DecoderReplacementFallbackBuffer::New_ctor(::System::Text::DecoderReplacementFallback* fallback) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::DecoderReplacementFallbackBuffer*>(fallback));
}
// Ctor Parameters []
constexpr ::System::Text::DecoderReplacementFallbackBuffer::DecoderReplacementFallbackBuffer() {}
