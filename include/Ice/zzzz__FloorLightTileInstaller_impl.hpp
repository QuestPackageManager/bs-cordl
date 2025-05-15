#pragma once
// IWYU pragma private; include "Ice/FloorLightTileInstaller.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_impl.hpp"
#include "Ice/zzzz__FloorLightTileInstaller_def.hpp"
#include "Ice/zzzz__FloorLightTile_def.hpp"
//  Writing Method size for method: ::Ice::FloorLightTileInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Ice::FloorLightTileInstaller::*)()>(&::Ice::FloorLightTileInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2269a18;

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
  constexpr static std::size_t addrs = 0x2269a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTileInstaller*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Ice::FloorLightTile>& Ice::FloorLightTileInstaller::__cordl_internal_get__floorLightTilePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorLightTilePrefab;
}
constexpr ::UnityW<::Ice::FloorLightTile> const& Ice::FloorLightTileInstaller::__cordl_internal_get__floorLightTilePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorLightTilePrefab;
}
constexpr void Ice::FloorLightTileInstaller::__cordl_internal_set__floorLightTilePrefab(::UnityW<::Ice::FloorLightTile> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floorLightTilePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Ice::FloorLightTileInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTileInstaller*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Ice::FloorLightTileInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Ice::FloorLightTileInstaller*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Ice::FloorLightTileInstaller* Ice::FloorLightTileInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Ice::FloorLightTileInstaller*>());
}
// Ctor Parameters []
constexpr ::Ice::FloorLightTileInstaller::FloorLightTileInstaller() {}
