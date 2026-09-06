#pragma once
// IWYU pragma private; include "GlobalNamespace/IEnvironmentLightGroups.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__ILightGroup_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IEnvironmentLightGroups.get_lightGroups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILightGroup*>* (::GlobalNamespace::IEnvironmentLightGroups::*)()>(
    &::GlobalNamespace::IEnvironmentLightGroups::get_lightGroups)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IEnvironmentLightGroups*>(), { ::i2c::class_of<::GlobalNamespace::IEnvironmentLightGroups*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IEnvironmentLightGroups.GetDataForGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILightGroup* (::GlobalNamespace::IEnvironmentLightGroups::*)(int32_t)>(
    &::GlobalNamespace::IEnvironmentLightGroups::GetDataForGroup)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IEnvironmentLightGroups*>(), { ::i2c::class_of<::GlobalNamespace::IEnvironmentLightGroups*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILightGroup*>* GlobalNamespace::IEnvironmentLightGroups::get_lightGroups() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IEnvironmentLightGroups*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILightGroup*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ILightGroup* GlobalNamespace::IEnvironmentLightGroups::GetDataForGroup(int32_t groupId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IEnvironmentLightGroups*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILightGroup*>(this, ___internal_method, groupId);
}
