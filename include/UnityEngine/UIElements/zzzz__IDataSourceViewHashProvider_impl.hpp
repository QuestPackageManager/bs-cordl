#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\IDataSourceViewHashProvider.hpp"
#include "UnityEngine/UIElements/zzzz__IDataSourceViewHashProvider_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IDataSourceViewHashProvider.GetViewHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::UIElements::IDataSourceViewHashProvider::*)()>(
    &::UnityEngine::UIElements::IDataSourceViewHashProvider::GetViewHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IDataSourceViewHashProvider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::IDataSourceViewHashProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline int64_t UnityEngine::UIElements::IDataSourceViewHashProvider::GetViewHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IDataSourceViewHashProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
