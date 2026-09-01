#pragma once
// IWYU pragma private; include "GlobalNamespace\CustomLevelLoader.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CustomLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__ICustomLevelLoader_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomLevelLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomLevelLoader::*)()>(&::GlobalNamespace::CustomLevelLoader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3707e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLevelLoader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*& GlobalNamespace::CustomLevelLoader::__cordl_internal_get__defaultEnvironmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultEnvironmentInfo;
}
constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* const&
GlobalNamespace::CustomLevelLoader::__cordl_internal_get__defaultEnvironmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultEnvironmentInfo;
}
constexpr void
GlobalNamespace::CustomLevelLoader::__cordl_internal_set__defaultEnvironmentInfo(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultEnvironmentInfo = value;
}
constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*&
GlobalNamespace::CustomLevelLoader::__cordl_internal_get__defaultAllDirectionsEnvironmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultAllDirectionsEnvironmentInfo;
}
constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* const&
GlobalNamespace::CustomLevelLoader::__cordl_internal_get__defaultAllDirectionsEnvironmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultAllDirectionsEnvironmentInfo;
}
constexpr void GlobalNamespace::CustomLevelLoader::__cordl_internal_set__defaultAllDirectionsEnvironmentInfo(
    ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultAllDirectionsEnvironmentInfo = value;
}
inline void GlobalNamespace::CustomLevelLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLevelLoader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomLevelLoader* GlobalNamespace::CustomLevelLoader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomLevelLoader*>());
}
/// @brief Convert operator to "::GlobalNamespace::ICustomLevelLoader"
constexpr GlobalNamespace::CustomLevelLoader::operator ::GlobalNamespace::ICustomLevelLoader*() noexcept {
  return static_cast<::GlobalNamespace::ICustomLevelLoader*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICustomLevelLoader"
constexpr ::GlobalNamespace::ICustomLevelLoader* GlobalNamespace::CustomLevelLoader::i___GlobalNamespace__ICustomLevelLoader() noexcept {
  return static_cast<::GlobalNamespace::ICustomLevelLoader*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomLevelLoader::CustomLevelLoader() {}
