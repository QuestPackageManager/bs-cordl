#pragma once
// IWYU pragma private; include "BGNet/Core/ITimeProvider.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
//  Writing Method size for method: ::BGNet::Core::ITimeProvider.GetTimeMs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::BGNet::Core::ITimeProvider::*)()>(&::BGNet::Core::ITimeProvider::GetTimeMs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGNet::Core::ITimeProvider*>(), { ::i2c::class_of<::BGNet::Core::ITimeProvider*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::ITimeProvider.GetTicks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::BGNet::Core::ITimeProvider::*)()>(&::BGNet::Core::ITimeProvider::GetTicks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGNet::Core::ITimeProvider*>(), { ::i2c::class_of<::BGNet::Core::ITimeProvider*>(), 1 }));
    return ___internal_method;
  }
};
inline int64_t BGNet::Core::ITimeProvider::GetTimeMs() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGNet::Core::ITimeProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t BGNet::Core::ITimeProvider::GetTicks() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGNet::Core::ITimeProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
