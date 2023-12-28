#pragma once
#include "Zenject/zzzz__ScriptableObjectInstaller_impl.hpp"
#include "Ice/zzzz__FloorLightTileInstaller_def.hpp"
#include "Ice/zzzz__FloorLightTile_def.hpp"
//  Writing Method size for method: ::Ice::FloorLightTileInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Ice::FloorLightTileInstaller::*)()>(&::Ice::FloorLightTileInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x129fce4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTileInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTileInstaller*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightTileInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Ice::FloorLightTileInstaller::*)()>(&::Ice::FloorLightTileInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x129fd68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTileInstaller*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Ice::FloorLightTile*& Ice::FloorLightTileInstaller::__get__floorLightTilePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorLightTilePrefab;
}
constexpr ::cordl_internals::to_const_pointer<::Ice::FloorLightTile*> const& Ice::FloorLightTileInstaller::__get__floorLightTilePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorLightTilePrefab;
}
constexpr void Ice::FloorLightTileInstaller::__set__floorLightTilePrefab(::Ice::FloorLightTile* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floorLightTilePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Ice::FloorLightTileInstaller::InstallBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTileInstaller*>::get(), "InstallBindings",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Ice::FloorLightTileInstaller* Ice::FloorLightTileInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Ice::FloorLightTileInstaller*>());
}
inline void Ice::FloorLightTileInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTileInstaller*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Ice::FloorLightTileInstaller::FloorLightTileInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
