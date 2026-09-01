#pragma once
// IWYU pragma private; include "Oculus\Platform\VoipOptions.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__VoipOptions_def.hpp"
#include "Oculus/Platform/zzzz__VoipBitrate_def.hpp"
#include "Oculus/Platform/zzzz__VoipDtxState_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::VoipOptions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::VoipOptions::*)()>(&::Oculus::Platform::VoipOptions::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ded058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipOptions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipOptions.SetBitrateForNewConnections
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::VoipOptions::*)(::Oculus::Platform::VoipBitrate)>(&::Oculus::Platform::VoipOptions::SetBitrateForNewConnections)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ded0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipOptions*>(), { "SetBitrateForNewConnections", {}, { ::i2c::type_of<::Oculus::Platform::VoipBitrate>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipOptions.SetCreateNewConnectionUseDtx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::VoipOptions::*)(::Oculus::Platform::VoipDtxState)>(&::Oculus::Platform::VoipOptions::SetCreateNewConnectionUseDtx)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ded120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipOptions*>(), { "SetCreateNewConnectionUseDtx", {}, { ::i2c::type_of<::Oculus::Platform::VoipDtxState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipOptions.op_Explicit___System__IntPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Oculus::Platform::VoipOptions*)>(&::Oculus::Platform::VoipOptions::op_Explicit___System__IntPtr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5de21b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipOptions*>(), { "op_Explicit", {}, { ::i2c::type_of<::Oculus::Platform::VoipOptions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipOptions.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::VoipOptions::*)()>(&::Oculus::Platform::VoipOptions::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ded18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipOptions*>(), { ::i2c::class_of<::Oculus::Platform::VoipOptions*>(), 1 }));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Oculus::Platform::VoipOptions::__cordl_internal_get_Handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Handle;
}
constexpr ::System::IntPtr const& Oculus::Platform::VoipOptions::__cordl_internal_get_Handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Handle;
}
constexpr void Oculus::Platform::VoipOptions::__cordl_internal_set_Handle(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Handle = value;
}
inline void Oculus::Platform::VoipOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipOptions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::VoipOptions::SetBitrateForNewConnections(::Oculus::Platform::VoipBitrate value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipOptions*>(), { "SetBitrateForNewConnections", {}, { ::i2c::type_of<::Oculus::Platform::VoipBitrate>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Platform::VoipOptions::SetCreateNewConnectionUseDtx(::Oculus::Platform::VoipDtxState value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipOptions*>(), { "SetCreateNewConnectionUseDtx", {}, { ::i2c::type_of<::Oculus::Platform::VoipDtxState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IntPtr Oculus::Platform::VoipOptions::op_Explicit___System__IntPtr(::Oculus::Platform::VoipOptions* options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipOptions*>(), { "op_Explicit", {}, { ::i2c::type_of<::Oculus::Platform::VoipOptions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, options);
}
inline void Oculus::Platform::VoipOptions::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::VoipOptions*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Platform::VoipOptions* Oculus::Platform::VoipOptions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::VoipOptions*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::VoipOptions::VoipOptions() {}
