#pragma once
// IWYU pragma private; include "Oculus\Platform\IMicrophone.hpp"
#include "Oculus/Platform/zzzz__IMicrophone_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::IMicrophone.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::IMicrophone::*)()>(&::Oculus::Platform::IMicrophone::Start)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::IMicrophone*>(), { ::i2c::class_of<::Oculus::Platform::IMicrophone*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::IMicrophone.Stop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::IMicrophone::*)()>(&::Oculus::Platform::IMicrophone::Stop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::IMicrophone*>(), { ::i2c::class_of<::Oculus::Platform::IMicrophone*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::IMicrophone.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::Oculus::Platform::IMicrophone::*)()>(&::Oculus::Platform::IMicrophone::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::IMicrophone*>(), { ::i2c::class_of<::Oculus::Platform::IMicrophone*>(), 2 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::IMicrophone::Start() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::IMicrophone*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::IMicrophone::Stop() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::IMicrophone*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<float_t> Oculus::Platform::IMicrophone::Update() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::IMicrophone*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
