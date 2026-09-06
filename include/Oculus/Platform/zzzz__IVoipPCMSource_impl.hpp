#pragma once
// IWYU pragma private; include "Oculus/Platform/IVoipPCMSource.hpp"
#include "Oculus/Platform/zzzz__IVoipPCMSource_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::IVoipPCMSource.GetPCM
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Platform::IVoipPCMSource::*)(::ArrayW<float_t>, int32_t)>(&::Oculus::Platform::IVoipPCMSource::GetPCM)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::IVoipPCMSource*>(), { ::i2c::class_of<::Oculus::Platform::IVoipPCMSource*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::IVoipPCMSource.SetSenderID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::IVoipPCMSource::*)(uint64_t)>(&::Oculus::Platform::IVoipPCMSource::SetSenderID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::IVoipPCMSource*>(), { ::i2c::class_of<::Oculus::Platform::IVoipPCMSource*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::IVoipPCMSource.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::IVoipPCMSource::*)()>(&::Oculus::Platform::IVoipPCMSource::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::IVoipPCMSource*>(), { ::i2c::class_of<::Oculus::Platform::IVoipPCMSource*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::IVoipPCMSource.PeekSizeElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Platform::IVoipPCMSource::*)()>(&::Oculus::Platform::IVoipPCMSource::PeekSizeElements)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::IVoipPCMSource*>(), { ::i2c::class_of<::Oculus::Platform::IVoipPCMSource*>(), 3 }));
    return ___internal_method;
  }
};
inline int32_t Oculus::Platform::IVoipPCMSource::GetPCM(::ArrayW<float_t> dest, int32_t length) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::IVoipPCMSource*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, dest, length);
}
inline void Oculus::Platform::IVoipPCMSource::SetSenderID(uint64_t senderID) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::IVoipPCMSource*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, senderID);
}
inline void Oculus::Platform::IVoipPCMSource::Update() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::IVoipPCMSource*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Oculus::Platform::IVoipPCMSource::PeekSizeElements() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::IVoipPCMSource*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
