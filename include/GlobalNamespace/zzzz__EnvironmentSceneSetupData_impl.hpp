#pragma once
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentSceneSetupData::*)(
    ::GlobalNamespace::EnvironmentInfoSO*, ::GlobalNamespace::IPreviewBeatmapLevel*, bool)>(&::GlobalNamespace::EnvironmentSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x231c3d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSceneSetupData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::EnvironmentSceneSetupData::__get_hideBranding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideBranding;
}
constexpr bool const& GlobalNamespace::EnvironmentSceneSetupData::__get_hideBranding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideBranding;
}
constexpr void GlobalNamespace::EnvironmentSceneSetupData::__set_hideBranding(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hideBranding = value;
}
constexpr ::GlobalNamespace::EnvironmentInfoSO*& GlobalNamespace::EnvironmentSceneSetupData::__get_environmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentInfo;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& GlobalNamespace::EnvironmentSceneSetupData::__get_environmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentInfo;
}
constexpr void GlobalNamespace::EnvironmentSceneSetupData::__set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___environmentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& GlobalNamespace::EnvironmentSceneSetupData::__get_previewBeatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewBeatmapLevel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& GlobalNamespace::EnvironmentSceneSetupData::__get_previewBeatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewBeatmapLevel;
}
constexpr void GlobalNamespace::EnvironmentSceneSetupData::__set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previewBeatmapLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::EnvironmentSceneSetupData* GlobalNamespace::EnvironmentSceneSetupData::New_ctor(::GlobalNamespace::EnvironmentInfoSO* environmentInfo,
                                                                                                          ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, bool hideBranding) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EnvironmentSceneSetupData*>(environmentInfo, previewBeatmapLevel, hideBranding));
}
inline void GlobalNamespace::EnvironmentSceneSetupData::_ctor(::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, bool hideBranding) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSceneSetupData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, environmentInfo, previewBeatmapLevel, hideBranding);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentSceneSetupData::EnvironmentSceneSetupData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
