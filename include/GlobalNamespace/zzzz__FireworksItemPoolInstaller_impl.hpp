#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__FireworksItemPoolInstaller_def.hpp"
#include "GlobalNamespace/zzzz__FireworksController_def.hpp"
#include "GlobalNamespace/zzzz__FireworkItemController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FireworksItemPoolInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworksItemPoolInstaller::*)()>(
    &::GlobalNamespace::FireworksItemPoolInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2397dec;

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
  constexpr static std::size_t addrs = 0x2397e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworksItemPoolInstaller*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FireworksController*& GlobalNamespace::FireworksItemPoolInstaller::__get__fireworksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fireworksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FireworksController*> const& GlobalNamespace::FireworksItemPoolInstaller::__get__fireworksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fireworksController;
}
constexpr void GlobalNamespace::FireworksItemPoolInstaller::__set__fireworksController(::GlobalNamespace::FireworksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fireworksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FireworkItemController*& GlobalNamespace::FireworksItemPoolInstaller::__get__fireworkItemControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fireworkItemControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FireworkItemController*> const& GlobalNamespace::FireworksItemPoolInstaller::__get__fireworkItemControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fireworkItemControllerPrefab;
}
constexpr void GlobalNamespace::FireworksItemPoolInstaller::__set__fireworkItemControllerPrefab(::GlobalNamespace::FireworkItemController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fireworkItemControllerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FireworksItemPoolInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworksItemPoolInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FireworksItemPoolInstaller* GlobalNamespace::FireworksItemPoolInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FireworksItemPoolInstaller*>());
}
inline void GlobalNamespace::FireworksItemPoolInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworksItemPoolInstaller*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FireworksItemPoolInstaller::FireworksItemPoolInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
