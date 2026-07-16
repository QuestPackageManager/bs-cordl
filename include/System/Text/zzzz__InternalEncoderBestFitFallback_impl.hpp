#pragma once
// IWYU pragma private; include "System/Text/InternalEncoderBestFitFallback.hpp"
#include "System/Text/zzzz__EncoderFallback_impl.hpp"
#include "System/Text/zzzz__InternalEncoderBestFitFallback_def.hpp"
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::InternalEncoderBestFitFallback::*)(::System::Text::Encoding*)>(&::System::Text::InternalEncoderBestFitFallback::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad1360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::InternalEncoderBestFitFallback*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallback.CreateFallbackBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::EncoderFallbackBuffer* (::System::Text::InternalEncoderBestFitFallback::*)()>(
    &::System::Text::InternalEncoderBestFitFallback::CreateFallbackBuffer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ad136c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::InternalEncoderBestFitFallback*>(), { ::i2c::class_of<::System::Text::InternalEncoderBestFitFallback*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallback.get_MaxCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::InternalEncoderBestFitFallback::*)()>(&::System::Text::InternalEncoderBestFitFallback::get_MaxCharCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad14e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::InternalEncoderBestFitFallback*>(), { ::i2c::class_of<::System::Text::InternalEncoderBestFitFallback*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallback.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::InternalEncoderBestFitFallback::*)(::System::Object*)>(&::System::Text::InternalEncoderBestFitFallback::Equals)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5ad14e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::InternalEncoderBestFitFallback*>(), { ::i2c::class_of<::System::Text::InternalEncoderBestFitFallback*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallback.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::InternalEncoderBestFitFallback::*)()>(&::System::Text::InternalEncoderBestFitFallback::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ad15b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::InternalEncoderBestFitFallback*>(), { ::i2c::class_of<::System::Text::InternalEncoderBestFitFallback*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::System::Text::Encoding*& System::Text::InternalEncoderBestFitFallback::__cordl_internal_get__encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr ::System::Text::Encoding* const& System::Text::InternalEncoderBestFitFallback::__cordl_internal_get__encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr void System::Text::InternalEncoderBestFitFallback::__cordl_internal_set__encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encoding = value;
}
constexpr ::ArrayW<char16_t>& System::Text::InternalEncoderBestFitFallback::__cordl_internal_get__arrayBestFit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrayBestFit;
}
constexpr ::ArrayW<char16_t> const& System::Text::InternalEncoderBestFitFallback::__cordl_internal_get__arrayBestFit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrayBestFit;
}
constexpr void System::Text::InternalEncoderBestFitFallback::__cordl_internal_set__arrayBestFit(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arrayBestFit = value;
}
inline void System::Text::InternalEncoderBestFitFallback::_ctor(::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::InternalEncoderBestFitFallback*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoding);
}
inline ::System::Text::EncoderFallbackBuffer* System::Text::InternalEncoderBestFitFallback::CreateFallbackBuffer() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::InternalEncoderBestFitFallback*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::EncoderFallbackBuffer*>(this, ___internal_method);
}
inline int32_t System::Text::InternalEncoderBestFitFallback::get_MaxCharCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::InternalEncoderBestFitFallback*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Text::InternalEncoderBestFitFallback::Equals(::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::InternalEncoderBestFitFallback*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::Text::InternalEncoderBestFitFallback::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::InternalEncoderBestFitFallback*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Text::InternalEncoderBestFitFallback* System::Text::InternalEncoderBestFitFallback::New_ctor(::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::InternalEncoderBestFitFallback*>(encoding));
}
// Ctor Parameters []
constexpr ::System::Text::InternalEncoderBestFitFallback::InternalEncoderBestFitFallback() {}
