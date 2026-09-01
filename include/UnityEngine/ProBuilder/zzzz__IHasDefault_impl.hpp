#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\IHasDefault.hpp"
#include "UnityEngine/ProBuilder/zzzz__IHasDefault_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::IHasDefault.SetDefaultValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::IHasDefault::*)()>(&::UnityEngine::ProBuilder::IHasDefault::SetDefaultValues)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IHasDefault*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::IHasDefault*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::IHasDefault::SetDefaultValues() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::IHasDefault*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
