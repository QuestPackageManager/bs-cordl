#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__FireworksItemPoolInstaller_def.hpp"
#include "GlobalNamespace/zzzz__FireworkItemController_def.hpp"
#include "GlobalNamespace/zzzz__FireworksController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FireworksItemPoolInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworksItemPoolInstaller::*)()>(
    &::GlobalNamespace::FireworksItemPoolInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x26b7c34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworksItemPoolInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworksItemPoolInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworksItemPoolInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworksItemPoolInstaller::*)()>(&::GlobalNamespace::FireworksItemPoolInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b7cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworksItemPoolInstaller*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FireworksController>& GlobalNamespace::FireworksItemPoolInstaller::__cordl_internal_get__fireworksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fireworksController;
}
constexpr ::UnityW<::GlobalNamespace::FireworksController> const& GlobalNamespace::FireworksItemPoolInstaller::__cordl_internal_get__fireworksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fireworksController;
}
constexpr void GlobalNamespace::FireworksItemPoolInstaller::__cordl_internal_set__fireworksController(::UnityW<::GlobalNamespace::FireworksController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fireworksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::FireworkItemController>& GlobalNamespace::FireworksItemPoolInstaller::__cordl_internal_get__fireworkItemControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fireworkItemControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::FireworkItemController> const& GlobalNamespace::FireworksItemPoolInstaller::__cordl_internal_get__fireworkItemControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fireworkItemControllerPrefab;
}
constexpr void GlobalNamespace::FireworksItemPoolInstaller::__cordl_internal_set__fireworkItemControllerPrefab(::UnityW<::GlobalNamespace::FireworkItemController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fireworkItemControllerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FireworksItemPoolInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworksItemPoolInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FireworksItemPoolInstaller* GlobalNamespace::FireworksItemPoolInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FireworksItemPoolInstaller*>());
}
inline void GlobalNamespace::FireworksItemPoolInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworksItemPoolInstaller*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FireworksItemPoolInstaller::FireworksItemPoolInstaller() {}
