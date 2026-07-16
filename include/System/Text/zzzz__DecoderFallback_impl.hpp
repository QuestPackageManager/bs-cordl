#pragma once
// IWYU pragma private; include "System/Text/DecoderFallback.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/zzzz__DecoderFallback_def.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
//  Writing Method size for method: ::System::Text::DecoderFallback.get_ReplacementFallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::DecoderFallback* (*)()>(&::System::Text::DecoderFallback::get_ReplacementFallback)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5cc6ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallback*>(), { "get_ReplacementFallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderFallback.get_ExceptionFallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::DecoderFallback* (*)()>(&::System::Text::DecoderFallback::get_ExceptionFallback)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5cc9d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallback*>(), { "get_ExceptionFallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderFallback.CreateFallbackBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::DecoderFallbackBuffer* (::System::Text::DecoderFallback::*)()>(&::System::Text::DecoderFallback::CreateFallbackBuffer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallback*>(), { ::i2c::class_of<::System::Text::DecoderFallback*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderFallback.get_MaxCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::DecoderFallback::*)()>(&::System::Text::DecoderFallback::get_MaxCharCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallback*>(), { ::i2c::class_of<::System::Text::DecoderFallback*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderFallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::DecoderFallback::*)()>(&::System::Text::DecoderFallback::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cc9570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallback*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Text::DecoderFallback::setStaticF_s_replacementFallback(::System::Text::DecoderFallback* value) {
  ::cordl_internals::setStaticField<::System::Text::DecoderFallback*, "s_replacementFallback", ::System::Text::DecoderFallback*>(std::forward<::System::Text::DecoderFallback*>(value));
}
inline ::System::Text::DecoderFallback* System::Text::DecoderFallback::getStaticF_s_replacementFallback() {
  return ::cordl_internals::getStaticField<::System::Text::DecoderFallback*, "s_replacementFallback", ::System::Text::DecoderFallback*>();
}
inline void System::Text::DecoderFallback::setStaticF_s_exceptionFallback(::System::Text::DecoderFallback* value) {
  ::cordl_internals::setStaticField<::System::Text::DecoderFallback*, "s_exceptionFallback", ::System::Text::DecoderFallback*>(std::forward<::System::Text::DecoderFallback*>(value));
}
inline ::System::Text::DecoderFallback* System::Text::DecoderFallback::getStaticF_s_exceptionFallback() {
  return ::cordl_internals::getStaticField<::System::Text::DecoderFallback*, "s_exceptionFallback", ::System::Text::DecoderFallback*>();
}
inline ::System::Text::DecoderFallback* System::Text::DecoderFallback::get_ReplacementFallback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallback*>(), { "get_ReplacementFallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::DecoderFallback*>(nullptr, ___internal_method);
}
inline ::System::Text::DecoderFallback* System::Text::DecoderFallback::get_ExceptionFallback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallback*>(), { "get_ExceptionFallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::DecoderFallback*>(nullptr, ___internal_method);
}
inline ::System::Text::DecoderFallbackBuffer* System::Text::DecoderFallback::CreateFallbackBuffer() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderFallback*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::DecoderFallbackBuffer*>(this, ___internal_method);
}
inline int32_t System::Text::DecoderFallback::get_MaxCharCount() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderFallback*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Text::DecoderFallback::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallback*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::DecoderFallback* System::Text::DecoderFallback::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::DecoderFallback*>());
}
// Ctor Parameters []
constexpr ::System::Text::DecoderFallback::DecoderFallback() {}
