#pragma once
// IWYU pragma private; include "System/Text/EncoderFallback.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/zzzz__EncoderFallback_def.hpp"
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
//  Writing Method size for method: ::System::Text::EncoderFallback.get_ReplacementFallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::EncoderFallback* (*)()>(&::System::Text::EncoderFallback::get_ReplacementFallback)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ad095c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallback*>(), { "get_ReplacementFallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallback.get_ExceptionFallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::EncoderFallback* (*)()>(&::System::Text::EncoderFallback::get_ExceptionFallback)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ad1fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallback*>(), { "get_ExceptionFallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallback.CreateFallbackBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::EncoderFallbackBuffer* (::System::Text::EncoderFallback::*)()>(&::System::Text::EncoderFallback::CreateFallbackBuffer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallback*>(), { ::i2c::class_of<::System::Text::EncoderFallback*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallback.get_MaxCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncoderFallback::*)()>(&::System::Text::EncoderFallback::get_MaxCharCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallback*>(), { ::i2c::class_of<::System::Text::EncoderFallback*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderFallback::*)()>(&::System::Text::EncoderFallback::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ad1368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallback*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Text::EncoderFallback::setStaticF_s_replacementFallback(::System::Text::EncoderFallback* value) {
  ::cordl_internals::setStaticField<::System::Text::EncoderFallback*, "s_replacementFallback", ::System::Text::EncoderFallback*>(std::forward<::System::Text::EncoderFallback*>(value));
}
inline ::System::Text::EncoderFallback* System::Text::EncoderFallback::getStaticF_s_replacementFallback() {
  return ::cordl_internals::getStaticField<::System::Text::EncoderFallback*, "s_replacementFallback", ::System::Text::EncoderFallback*>();
}
inline void System::Text::EncoderFallback::setStaticF_s_exceptionFallback(::System::Text::EncoderFallback* value) {
  ::cordl_internals::setStaticField<::System::Text::EncoderFallback*, "s_exceptionFallback", ::System::Text::EncoderFallback*>(std::forward<::System::Text::EncoderFallback*>(value));
}
inline ::System::Text::EncoderFallback* System::Text::EncoderFallback::getStaticF_s_exceptionFallback() {
  return ::cordl_internals::getStaticField<::System::Text::EncoderFallback*, "s_exceptionFallback", ::System::Text::EncoderFallback*>();
}
inline ::System::Text::EncoderFallback* System::Text::EncoderFallback::get_ReplacementFallback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallback*>(), { "get_ReplacementFallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::EncoderFallback*>(nullptr, ___internal_method);
}
inline ::System::Text::EncoderFallback* System::Text::EncoderFallback::get_ExceptionFallback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallback*>(), { "get_ExceptionFallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::EncoderFallback*>(nullptr, ___internal_method);
}
inline ::System::Text::EncoderFallbackBuffer* System::Text::EncoderFallback::CreateFallbackBuffer() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderFallback*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::EncoderFallbackBuffer*>(this, ___internal_method);
}
inline int32_t System::Text::EncoderFallback::get_MaxCharCount() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderFallback*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Text::EncoderFallback::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallback*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::EncoderFallback* System::Text::EncoderFallback::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::EncoderFallback*>());
}
// Ctor Parameters []
constexpr ::System::Text::EncoderFallback::EncoderFallback() {}
