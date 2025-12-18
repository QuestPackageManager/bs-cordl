#pragma once
// IWYU pragma private; include "GlobalNamespace/GameCoreSceneSetup.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__GameCoreSceneSetup_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogSO_def.hpp"
#include "GlobalNamespace/zzzz__ScreenCaptureAfterDelay_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameCoreSceneSetup.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameCoreSceneSetup::*)()>(&::GlobalNamespace::GameCoreSceneSetup::InstallBindings)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x5778474;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameCoreSceneSetup*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameCoreSceneSetup*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameCoreSceneSetup.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameCoreSceneSetup::*)()>(&::GlobalNamespace::GameCoreSceneSetup::OnDestroy)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5778914;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameCoreSceneSetup*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameCoreSceneSetup*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameCoreSceneSetup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameCoreSceneSetup::*)()>(&::GlobalNamespace::GameCoreSceneSetup::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5778960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameCoreSceneSetup*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay>& GlobalNamespace::GameCoreSceneSetup::__cordl_internal_get__screenCaptureAfterDelayPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenCaptureAfterDelayPrefab;
}
constexpr ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> const& GlobalNamespace::GameCoreSceneSetup::__cordl_internal_get__screenCaptureAfterDelayPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenCaptureAfterDelayPrefab;
}
constexpr void GlobalNamespace::GameCoreSceneSetup::__cordl_internal_set__screenCaptureAfterDelayPrefab(::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____screenCaptureAfterDelayPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& GlobalNamespace::GameCoreSceneSetup::__cordl_internal_get__bloomFog() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFog;
}
constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& GlobalNamespace::GameCoreSceneSetup::__cordl_internal_get__bloomFog() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFog;
}
constexpr void GlobalNamespace::GameCoreSceneSetup::__cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomFog)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::GameCoreSceneSetup::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::GameCoreSceneSetup::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::GameCoreSceneSetup::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameCoreSceneSetup::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameCoreSceneSetup*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameCoreSceneSetup::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameCoreSceneSetup*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameCoreSceneSetup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameCoreSceneSetup*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameCoreSceneSetup* GlobalNamespace::GameCoreSceneSetup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameCoreSceneSetup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameCoreSceneSetup::GameCoreSceneSetup() {}
