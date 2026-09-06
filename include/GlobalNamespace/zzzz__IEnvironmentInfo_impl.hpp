#pragma once
// IWYU pragma private; include "GlobalNamespace/IEnvironmentInfo.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentInfo_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IEnvironmentInfo.get_environmentLightGroups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IEnvironmentLightGroups* (::GlobalNamespace::IEnvironmentInfo::*)()>(
    &::GlobalNamespace::IEnvironmentInfo::get_environmentLightGroups)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IEnvironmentInfo*>(), { ::i2c::class_of<::GlobalNamespace::IEnvironmentInfo*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IEnvironmentInfo.get_environmentKeywords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (::GlobalNamespace::IEnvironmentInfo::*)()>(
    &::GlobalNamespace::IEnvironmentInfo::get_environmentKeywords)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IEnvironmentInfo*>(), { ::i2c::class_of<::GlobalNamespace::IEnvironmentInfo*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IEnvironmentInfo.get_defaultLightshowAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextAsset> (::GlobalNamespace::IEnvironmentInfo::*)()>(
    &::GlobalNamespace::IEnvironmentInfo::get_defaultLightshowAsset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IEnvironmentInfo*>(), { ::i2c::class_of<::GlobalNamespace::IEnvironmentInfo*>(), 2 }));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IEnvironmentLightGroups* GlobalNamespace::IEnvironmentInfo::get_environmentLightGroups() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IEnvironmentInfo*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IEnvironmentLightGroups*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GlobalNamespace::IEnvironmentInfo::get_environmentKeywords() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IEnvironmentInfo*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::TextAsset> GlobalNamespace::IEnvironmentInfo::get_defaultLightshowAsset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IEnvironmentInfo*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>>(this, ___internal_method);
}
