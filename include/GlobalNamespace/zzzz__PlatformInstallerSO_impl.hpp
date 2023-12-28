#pragma once
#include "Zenject/zzzz__ScriptableObjectInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformInstallerSO_def.hpp"
#include "GlobalNamespace/zzzz__MockPlatformAdditionalContentModelInitialDataSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyAchievementIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__AppInitSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformInstallerSO.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformInstallerSO::*)()>(&::GlobalNamespace::PlatformInstallerSO::InstallBindings)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2229a34;

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
  constexpr static std::size_t addrs = 0x2229ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstallerSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AppInitSetupData*& GlobalNamespace::PlatformInstallerSO::__get__setupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitSetupData*> const& GlobalNamespace::PlatformInstallerSO::__get__setupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setupData;
}
constexpr void GlobalNamespace::PlatformInstallerSO::__set__setupData(::GlobalNamespace::AppInitSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____setupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SonyAchievementIdsModelSO*& GlobalNamespace::PlatformInstallerSO::__get__ps4AchievementIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4AchievementIdsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyAchievementIdsModelSO*> const& GlobalNamespace::PlatformInstallerSO::__get__ps4AchievementIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4AchievementIdsModel;
}
constexpr void GlobalNamespace::PlatformInstallerSO::__set__ps4AchievementIdsModel(::GlobalNamespace::SonyAchievementIdsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps4AchievementIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SonyAchievementIdsModelSO*& GlobalNamespace::PlatformInstallerSO::__get__ps5AchievementIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5AchievementIdsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyAchievementIdsModelSO*> const& GlobalNamespace::PlatformInstallerSO::__get__ps5AchievementIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5AchievementIdsModel;
}
constexpr void GlobalNamespace::PlatformInstallerSO::__set__ps5AchievementIdsModel(::GlobalNamespace::SonyAchievementIdsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps5AchievementIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AchievementIdsModelSO*& GlobalNamespace::PlatformInstallerSO::__get__achievementIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementIdsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementIdsModelSO*> const& GlobalNamespace::PlatformInstallerSO::__get__achievementIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementIdsModel;
}
constexpr void GlobalNamespace::PlatformInstallerSO::__set__achievementIdsModel(::GlobalNamespace::AchievementIdsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____achievementIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*& GlobalNamespace::PlatformInstallerSO::__get__mockPlatformAdditionalContentModelInitialData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mockPlatformAdditionalContentModelInitialData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*> const&
GlobalNamespace::PlatformInstallerSO::__get__mockPlatformAdditionalContentModelInitialData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mockPlatformAdditionalContentModelInitialData;
}
constexpr void GlobalNamespace::PlatformInstallerSO::__set__mockPlatformAdditionalContentModelInitialData(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mockPlatformAdditionalContentModelInitialData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlatformInstallerSO::InstallBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstallerSO*>::get(), "InstallBindings",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlatformInstallerSO* GlobalNamespace::PlatformInstallerSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlatformInstallerSO*>());
}
inline void GlobalNamespace::PlatformInstallerSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstallerSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformInstallerSO::PlatformInstallerSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
