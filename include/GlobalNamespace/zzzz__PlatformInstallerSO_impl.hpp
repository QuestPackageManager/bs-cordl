#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformInstallerSO.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformInstallerSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__AppInitSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MockPlatformAdditionalContentModelInitialDataSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyAchievementIdsModelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformInstallerSO.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformInstallerSO::*)()>(&::GlobalNamespace::PlatformInstallerSO::InstallBindings)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x271a044;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstallerSO*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstallerSO*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformInstallerSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformInstallerSO::*)()>(&::GlobalNamespace::PlatformInstallerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x271a0d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstallerSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AppInitSetupData*& GlobalNamespace::PlatformInstallerSO::__cordl_internal_get__setupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setupData;
}
constexpr ::GlobalNamespace::AppInitSetupData* const& GlobalNamespace::PlatformInstallerSO::__cordl_internal_get__setupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setupData;
}
constexpr void GlobalNamespace::PlatformInstallerSO::__cordl_internal_set__setupData(::GlobalNamespace::AppInitSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____setupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO>& GlobalNamespace::PlatformInstallerSO::__cordl_internal_get__ps4AchievementIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4AchievementIdsModel;
}
constexpr ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> const& GlobalNamespace::PlatformInstallerSO::__cordl_internal_get__ps4AchievementIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4AchievementIdsModel;
}
constexpr void GlobalNamespace::PlatformInstallerSO::__cordl_internal_set__ps4AchievementIdsModel(::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps4AchievementIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO>& GlobalNamespace::PlatformInstallerSO::__cordl_internal_get__ps5AchievementIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5AchievementIdsModel;
}
constexpr ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> const& GlobalNamespace::PlatformInstallerSO::__cordl_internal_get__ps5AchievementIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5AchievementIdsModel;
}
constexpr void GlobalNamespace::PlatformInstallerSO::__cordl_internal_set__ps5AchievementIdsModel(::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps5AchievementIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO>& GlobalNamespace::PlatformInstallerSO::__cordl_internal_get__achievementIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementIdsModel;
}
constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO> const& GlobalNamespace::PlatformInstallerSO::__cordl_internal_get__achievementIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementIdsModel;
}
constexpr void GlobalNamespace::PlatformInstallerSO::__cordl_internal_set__achievementIdsModel(::UnityW<::GlobalNamespace::AchievementIdsModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____achievementIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO>& GlobalNamespace::PlatformInstallerSO::__cordl_internal_get__mockPlatformAdditionalContentModelInitialData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mockPlatformAdditionalContentModelInitialData;
}
constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> const&
GlobalNamespace::PlatformInstallerSO::__cordl_internal_get__mockPlatformAdditionalContentModelInitialData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mockPlatformAdditionalContentModelInitialData;
}
constexpr void
GlobalNamespace::PlatformInstallerSO::__cordl_internal_set__mockPlatformAdditionalContentModelInitialData(::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mockPlatformAdditionalContentModelInitialData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlatformInstallerSO::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstallerSO*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformInstallerSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstallerSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlatformInstallerSO* GlobalNamespace::PlatformInstallerSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlatformInstallerSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformInstallerSO::PlatformInstallerSO() {}
