#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerObjectInstaller_def.hpp"
#include "GlobalNamespace/zzzz__FireworkItemController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsPyramidViewAvatar_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreRingItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerObjectInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerObjectInstaller::*)()>(
    &::GlobalNamespace::MultiplayerObjectInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x22529fc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerObjectInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerObjectInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerObjectInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerObjectInstaller::*)()>(&::GlobalNamespace::MultiplayerObjectInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2252b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerObjectInstaller*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerScoreRingItem*& GlobalNamespace::MultiplayerObjectInstaller::__get__inEnvironmentTextsPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inEnvironmentTextsPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreRingItem*> const& GlobalNamespace::MultiplayerObjectInstaller::__get__inEnvironmentTextsPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inEnvironmentTextsPrefab;
}
constexpr void GlobalNamespace::MultiplayerObjectInstaller::__set__inEnvironmentTextsPrefab(::GlobalNamespace::MultiplayerScoreRingItem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inEnvironmentTextsPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FireworkItemController*& GlobalNamespace::MultiplayerObjectInstaller::__get__fireworkItemControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fireworkItemControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FireworkItemController*> const& GlobalNamespace::MultiplayerObjectInstaller::__get__fireworkItemControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fireworkItemControllerPrefab;
}
constexpr void GlobalNamespace::MultiplayerObjectInstaller::__set__fireworkItemControllerPrefab(::GlobalNamespace::FireworkItemController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fireworkItemControllerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*& GlobalNamespace::MultiplayerObjectInstaller::__get__multiplayerResultsPyramidViewAvatarPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerResultsPyramidViewAvatarPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*> const&
GlobalNamespace::MultiplayerObjectInstaller::__get__multiplayerResultsPyramidViewAvatarPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerResultsPyramidViewAvatarPrefab;
}
constexpr void GlobalNamespace::MultiplayerObjectInstaller::__set__multiplayerResultsPyramidViewAvatarPrefab(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerResultsPyramidViewAvatarPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerObjectInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerObjectInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerObjectInstaller* GlobalNamespace::MultiplayerObjectInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerObjectInstaller*>());
}
inline void GlobalNamespace::MultiplayerObjectInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerObjectInstaller*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerObjectInstaller::MultiplayerObjectInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
