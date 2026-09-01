#pragma once
// IWYU pragma private; include "OculusStudios\HierarchyIcons\HierarchyIgnorePrefabOverrides.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "OculusStudios/HierarchyIcons/zzzz__HierarchyIgnorePrefabOverrides_def.hpp"
//  Writing Method size for method: ::OculusStudios::HierarchyIcons::HierarchyIgnorePrefabOverrides._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::HierarchyIcons::HierarchyIgnorePrefabOverrides::*)()>(
    &::OculusStudios::HierarchyIcons::HierarchyIgnorePrefabOverrides::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f2de48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::HierarchyIcons::HierarchyIgnorePrefabOverrides*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void OculusStudios::HierarchyIcons::HierarchyIgnorePrefabOverrides::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::HierarchyIcons::HierarchyIgnorePrefabOverrides*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::HierarchyIcons::HierarchyIgnorePrefabOverrides* OculusStudios::HierarchyIcons::HierarchyIgnorePrefabOverrides::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::HierarchyIcons::HierarchyIgnorePrefabOverrides*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::HierarchyIcons::HierarchyIgnorePrefabOverrides::HierarchyIgnorePrefabOverrides() {}
