#pragma once
// IWYU pragma private; include "GlobalNamespace/IAppIdentification.hpp"
#include "GlobalNamespace/zzzz__IAppIdentification_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IAppIdentification.get_appId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::IAppIdentification::*)()>(&::GlobalNamespace::IAppIdentification::get_appId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IAppIdentification*>(), { ::i2c::class_of<::GlobalNamespace::IAppIdentification*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAppIdentification.get_graphAppId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::IAppIdentification::*)()>(&::GlobalNamespace::IAppIdentification::get_graphAppId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IAppIdentification*>(), { ::i2c::class_of<::GlobalNamespace::IAppIdentification*>(), 1 }));
    return ___internal_method;
  }
};
inline uint64_t GlobalNamespace::IAppIdentification::get_appId() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IAppIdentification*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline uint64_t GlobalNamespace::IAppIdentification::get_graphAppId() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IAppIdentification*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
