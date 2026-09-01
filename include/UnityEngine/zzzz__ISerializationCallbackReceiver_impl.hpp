#pragma once
// IWYU pragma private; include "UnityEngine\ISerializationCallbackReceiver.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::ISerializationCallbackReceiver.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ISerializationCallbackReceiver::*)()>(&::UnityEngine::ISerializationCallbackReceiver::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ISerializationCallbackReceiver*>(), { ::i2c::class_of<::UnityEngine::ISerializationCallbackReceiver*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ISerializationCallbackReceiver.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ISerializationCallbackReceiver::*)()>(&::UnityEngine::ISerializationCallbackReceiver::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ISerializationCallbackReceiver*>(), { ::i2c::class_of<::UnityEngine::ISerializationCallbackReceiver*>(), 1 }));
    return ___internal_method;
  }
};
inline void UnityEngine::ISerializationCallbackReceiver::OnBeforeSerialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ISerializationCallbackReceiver*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ISerializationCallbackReceiver::OnAfterDeserialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ISerializationCallbackReceiver*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
