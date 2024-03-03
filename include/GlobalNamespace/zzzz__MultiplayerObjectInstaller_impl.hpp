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
  constexpr static std::size_t addrs = 0x24808e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerObjectInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerObjectInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerObjectInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerObjectInstaller::*)()>(&::GlobalNamespace::MultiplayerObjectInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2480a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerObjectInstaller*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem>& GlobalNamespace::MultiplayerObjectInstaller::__cordl_internal_get__inEnvironmentTextsPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inEnvironmentTextsPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem> const& GlobalNamespace::MultiplayerObjectInstaller::__cordl_internal_get__inEnvironmentTextsPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inEnvironmentTextsPrefab;
}
constexpr void GlobalNamespace::MultiplayerObjectInstaller::__cordl_internal_set__inEnvironmentTextsPrefab(::UnityW<::GlobalNamespace::MultiplayerScoreRingItem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inEnvironmentTextsPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::FireworkItemController>& GlobalNamespace::MultiplayerObjectInstaller::__cordl_internal_get__fireworkItemControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fireworkItemControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::FireworkItemController> const& GlobalNamespace::MultiplayerObjectInstaller::__cordl_internal_get__fireworkItemControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fireworkItemControllerPrefab;
}
constexpr void GlobalNamespace::MultiplayerObjectInstaller::__cordl_internal_set__fireworkItemControllerPrefab(::UnityW<::GlobalNamespace::FireworkItemController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fireworkItemControllerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar>& GlobalNamespace::MultiplayerObjectInstaller::__cordl_internal_get__multiplayerResultsPyramidViewAvatarPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerResultsPyramidViewAvatarPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar> const& GlobalNamespace::MultiplayerObjectInstaller::__cordl_internal_get__multiplayerResultsPyramidViewAvatarPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerResultsPyramidViewAvatarPrefab;
}
constexpr void GlobalNamespace::MultiplayerObjectInstaller::__cordl_internal_set__multiplayerResultsPyramidViewAvatarPrefab(::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar> value) {
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
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerObjectInstaller*>());
}
inline void GlobalNamespace::MultiplayerObjectInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerObjectInstaller*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerObjectInstaller::MultiplayerObjectInstaller() {}
