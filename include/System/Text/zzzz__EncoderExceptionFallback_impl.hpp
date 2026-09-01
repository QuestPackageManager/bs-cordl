#pragma once
// IWYU pragma private; include "System\Text\EncoderExceptionFallback.hpp"
#include "System/Text/zzzz__EncoderFallback_impl.hpp"
#include "System/Text/zzzz__EncoderExceptionFallback_def.hpp"
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Text::EncoderExceptionFallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderExceptionFallback::*)()>(&::System::Text::EncoderExceptionFallback::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ad3c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderExceptionFallback*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderExceptionFallback.CreateFallbackBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::EncoderFallbackBuffer* (::System::Text::EncoderExceptionFallback::*)()>(
    &::System::Text::EncoderExceptionFallback::CreateFallbackBuffer)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ad3c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderExceptionFallback*>(), { ::i2c::class_of<::System::Text::EncoderExceptionFallback*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderExceptionFallback.get_MaxCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncoderExceptionFallback::*)()>(&::System::Text::EncoderExceptionFallback::get_MaxCharCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad3cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderExceptionFallback*>(), { ::i2c::class_of<::System::Text::EncoderExceptionFallback*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderExceptionFallback.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::EncoderExceptionFallback::*)(::System::Object*)>(&::System::Text::EncoderExceptionFallback::Equals)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ad3ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderExceptionFallback*>(), { ::i2c::class_of<::System::Text::EncoderExceptionFallback*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderExceptionFallback.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncoderExceptionFallback::*)()>(&::System::Text::EncoderExceptionFallback::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad3d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderExceptionFallback*>(), { ::i2c::class_of<::System::Text::EncoderExceptionFallback*>(), 2 }));
    return ___internal_method;
  }
};
inline void System::Text::EncoderExceptionFallback::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderExceptionFallback*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::EncoderFallbackBuffer* System::Text::EncoderExceptionFallback::CreateFallbackBuffer() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderExceptionFallback*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::EncoderFallbackBuffer*>(this, ___internal_method);
}
inline int32_t System::Text::EncoderExceptionFallback::get_MaxCharCount() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderExceptionFallback*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Text::EncoderExceptionFallback::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderExceptionFallback*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::Text::EncoderExceptionFallback::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderExceptionFallback*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Text::EncoderExceptionFallback* System::Text::EncoderExceptionFallback::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::EncoderExceptionFallback*>());
}
// Ctor Parameters []
constexpr ::System::Text::EncoderExceptionFallback::EncoderExceptionFallback() {}
