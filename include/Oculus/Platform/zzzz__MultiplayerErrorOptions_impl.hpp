#pragma once
// IWYU pragma private; include "Oculus/Platform/MultiplayerErrorOptions.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__MultiplayerErrorOptions_def.hpp"
#include "Oculus/Platform/zzzz__MultiplayerErrorErrorKey_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MultiplayerErrorOptions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MultiplayerErrorOptions::*)()>(&::Oculus::Platform::MultiplayerErrorOptions::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ddb740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MultiplayerErrorOptions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MultiplayerErrorOptions.SetErrorKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MultiplayerErrorOptions::*)(::Oculus::Platform::MultiplayerErrorErrorKey)>(
    &::Oculus::Platform::MultiplayerErrorOptions::SetErrorKey)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ddb79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MultiplayerErrorOptions*>(), { "SetErrorKey", {}, { ::i2c::type_of<::Oculus::Platform::MultiplayerErrorErrorKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MultiplayerErrorOptions.op_Explicit___System__IntPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Oculus::Platform::MultiplayerErrorOptions*)>(
    &::Oculus::Platform::MultiplayerErrorOptions::op_Explicit___System__IntPtr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ddb808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MultiplayerErrorOptions*>(), { "op_Explicit", {}, { ::i2c::type_of<::Oculus::Platform::MultiplayerErrorOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MultiplayerErrorOptions.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MultiplayerErrorOptions::*)()>(&::Oculus::Platform::MultiplayerErrorOptions::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ddb814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MultiplayerErrorOptions*>(), { ::i2c::class_of<::Oculus::Platform::MultiplayerErrorOptions*>(), 1 }));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Oculus::Platform::MultiplayerErrorOptions::__cordl_internal_get_Handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Handle;
}
constexpr ::System::IntPtr const& Oculus::Platform::MultiplayerErrorOptions::__cordl_internal_get_Handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Handle;
}
constexpr void Oculus::Platform::MultiplayerErrorOptions::__cordl_internal_set_Handle(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Handle = value;
}
inline void Oculus::Platform::MultiplayerErrorOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MultiplayerErrorOptions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::MultiplayerErrorOptions::SetErrorKey(::Oculus::Platform::MultiplayerErrorErrorKey value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MultiplayerErrorOptions*>(), { "SetErrorKey", {}, { ::i2c::type_of<::Oculus::Platform::MultiplayerErrorErrorKey>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IntPtr Oculus::Platform::MultiplayerErrorOptions::op_Explicit___System__IntPtr(::Oculus::Platform::MultiplayerErrorOptions* options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MultiplayerErrorOptions*>(), { "op_Explicit", {}, { ::i2c::type_of<::Oculus::Platform::MultiplayerErrorOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, options);
}
inline void Oculus::Platform::MultiplayerErrorOptions::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MultiplayerErrorOptions*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Platform::MultiplayerErrorOptions* Oculus::Platform::MultiplayerErrorOptions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MultiplayerErrorOptions*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MultiplayerErrorOptions::MultiplayerErrorOptions() {}
