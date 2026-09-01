#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\Util\IObjectInitializationDataProvider.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IObjectInitializationDataProvider_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ObjectInitializationData_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider::*)()>(
    &::UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider::get_Name)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider.CreateObjectInitializationData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::Util::ObjectInitializationData (
    ::UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider::*)()>(&::UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider::CreateObjectInitializationData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider*>(), 1 }));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider::get_Name() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::ObjectInitializationData UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider::CreateObjectInitializationData() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>(this, ___internal_method);
}
