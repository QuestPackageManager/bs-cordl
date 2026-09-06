#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/ResourceLocators/IResourceLocator.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator.get_LocatorId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator::get_LocatorId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator.get_Keys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>* (::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator::*)()>(
    &::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator::get_Keys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator.Locate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator::*)(
    ::System::Object*, ::System::Type*, ::by_ref<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>)>(
    &::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator::Locate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(), 2 }));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator::get_LocatorId() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator::get_Keys() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(this, ___internal_method);
}
inline bool UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator::Locate(
    ::System::Object* key, ::System::Type* type, ::by_ref<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> locations) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, type, locations);
}
