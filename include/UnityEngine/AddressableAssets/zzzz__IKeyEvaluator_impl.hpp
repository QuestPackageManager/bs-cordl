#pragma once
// IWYU pragma private; include "UnityEngine\AddressableAssets\IKeyEvaluator.hpp"
#include "UnityEngine/AddressableAssets/zzzz__IKeyEvaluator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::IKeyEvaluator.get_RuntimeKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::AddressableAssets::IKeyEvaluator::*)()>(&::UnityEngine::AddressableAssets::IKeyEvaluator::get_RuntimeKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::IKeyEvaluator*>(), { ::i2c::class_of<::UnityEngine::AddressableAssets::IKeyEvaluator*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::IKeyEvaluator.RuntimeKeyIsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::IKeyEvaluator::*)()>(&::UnityEngine::AddressableAssets::IKeyEvaluator::RuntimeKeyIsValid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::IKeyEvaluator*>(), { ::i2c::class_of<::UnityEngine::AddressableAssets::IKeyEvaluator*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::Object* UnityEngine::AddressableAssets::IKeyEvaluator::get_RuntimeKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::IKeyEvaluator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool UnityEngine::AddressableAssets::IKeyEvaluator::RuntimeKeyIsValid() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::IKeyEvaluator*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
