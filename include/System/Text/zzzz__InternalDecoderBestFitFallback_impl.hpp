#pragma once
// IWYU pragma private; include "System/Text/InternalDecoderBestFitFallback.hpp"
#include "System/Text/zzzz__DecoderFallback_impl.hpp"
#include "System/Text/zzzz__InternalDecoderBestFitFallback_def.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::InternalDecoderBestFitFallback::*)(::System::Text::Encoding*)>(&::System::Text::InternalDecoderBestFitFallback::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cc9560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::InternalDecoderBestFitFallback*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallback.CreateFallbackBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::DecoderFallbackBuffer* (::System::Text::InternalDecoderBestFitFallback::*)()>(
    &::System::Text::InternalDecoderBestFitFallback::CreateFallbackBuffer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cc9574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::InternalDecoderBestFitFallback*>(), { ::i2c::class_of<::System::Text::InternalDecoderBestFitFallback*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallback.get_MaxCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::InternalDecoderBestFitFallback::*)()>(&::System::Text::InternalDecoderBestFitFallback::get_MaxCharCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc96e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::InternalDecoderBestFitFallback*>(), { ::i2c::class_of<::System::Text::InternalDecoderBestFitFallback*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallback.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::InternalDecoderBestFitFallback::*)(::System::Object*)>(&::System::Text::InternalDecoderBestFitFallback::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5cc96f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::InternalDecoderBestFitFallback*>(), { ::i2c::class_of<::System::Text::InternalDecoderBestFitFallback*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallback.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::InternalDecoderBestFitFallback::*)()>(&::System::Text::InternalDecoderBestFitFallback::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cc97a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::InternalDecoderBestFitFallback*>(), { ::i2c::class_of<::System::Text::InternalDecoderBestFitFallback*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::System::Text::Encoding*& System::Text::InternalDecoderBestFitFallback::__cordl_internal_get__encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr ::System::Text::Encoding* const& System::Text::InternalDecoderBestFitFallback::__cordl_internal_get__encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr void System::Text::InternalDecoderBestFitFallback::__cordl_internal_set__encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encoding = value;
}
constexpr ::ArrayW<char16_t>& System::Text::InternalDecoderBestFitFallback::__cordl_internal_get__arrayBestFit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrayBestFit;
}
constexpr ::ArrayW<char16_t> const& System::Text::InternalDecoderBestFitFallback::__cordl_internal_get__arrayBestFit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrayBestFit;
}
constexpr void System::Text::InternalDecoderBestFitFallback::__cordl_internal_set__arrayBestFit(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arrayBestFit = value;
}
constexpr char16_t& System::Text::InternalDecoderBestFitFallback::__cordl_internal_get__cReplacement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cReplacement;
}
constexpr char16_t const& System::Text::InternalDecoderBestFitFallback::__cordl_internal_get__cReplacement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cReplacement;
}
constexpr void System::Text::InternalDecoderBestFitFallback::__cordl_internal_set__cReplacement(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cReplacement = value;
}
inline void System::Text::InternalDecoderBestFitFallback::_ctor(::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::InternalDecoderBestFitFallback*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoding);
}
inline ::System::Text::DecoderFallbackBuffer* System::Text::InternalDecoderBestFitFallback::CreateFallbackBuffer() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::InternalDecoderBestFitFallback*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::DecoderFallbackBuffer*>(this, ___internal_method);
}
inline int32_t System::Text::InternalDecoderBestFitFallback::get_MaxCharCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::InternalDecoderBestFitFallback*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Text::InternalDecoderBestFitFallback::Equals(::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::InternalDecoderBestFitFallback*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::Text::InternalDecoderBestFitFallback::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::InternalDecoderBestFitFallback*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Text::InternalDecoderBestFitFallback* System::Text::InternalDecoderBestFitFallback::New_ctor(::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::InternalDecoderBestFitFallback*>(encoding));
}
// Ctor Parameters []
constexpr ::System::Text::InternalDecoderBestFitFallback::InternalDecoderBestFitFallback() {}
