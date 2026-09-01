#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\Util\IAllocationStrategy.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IAllocationStrategy_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::IAllocationStrategy.New
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::ResourceManagement::Util::IAllocationStrategy::*)(::System::Type*, int32_t)>(
    &::UnityEngine::ResourceManagement::Util::IAllocationStrategy::New)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::IAllocationStrategy.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::IAllocationStrategy::*)(int32_t, ::System::Object*)>(
    &::UnityEngine::ResourceManagement::Util::IAllocationStrategy::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::Object* UnityEngine::ResourceManagement::Util::IAllocationStrategy::New(::System::Type* type, int32_t typeHash) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type, typeHash);
}
inline void UnityEngine::ResourceManagement::Util::IAllocationStrategy::Release(int32_t typeHash, ::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeHash, obj);
}
