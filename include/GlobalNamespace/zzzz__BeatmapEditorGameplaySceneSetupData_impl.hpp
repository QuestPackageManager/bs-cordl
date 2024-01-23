#pragma once
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorGameplaySceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapEditorGameplaySceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEditorGameplaySceneSetupData::*)(bool, bool, bool)>(
    &::GlobalNamespace::BeatmapEditorGameplaySceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x231c354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEditorGameplaySceneSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__cordl_internal_get_useFirstPersonFlyingController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useFirstPersonFlyingController;
}
constexpr bool const& GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__cordl_internal_get_useFirstPersonFlyingController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useFirstPersonFlyingController;
}
constexpr void GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__cordl_internal_set_useFirstPersonFlyingController(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useFirstPersonFlyingController = value;
}
constexpr bool& GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__cordl_internal_get_recordVRMovement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordVRMovement;
}
constexpr bool const& GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__cordl_internal_get_recordVRMovement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recordVRMovement;
}
constexpr void GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__cordl_internal_set_recordVRMovement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recordVRMovement = value;
}
constexpr bool& GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__cordl_internal_get_playVRMovement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playVRMovement;
}
constexpr bool const& GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__cordl_internal_get_playVRMovement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playVRMovement;
}
constexpr void GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__cordl_internal_set_playVRMovement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playVRMovement = value;
}
inline ::GlobalNamespace::BeatmapEditorGameplaySceneSetupData* GlobalNamespace::BeatmapEditorGameplaySceneSetupData::New_ctor(bool useFirstPersonFlyingController, bool recordVRMovement,
                                                                                                                              bool playVRMovement) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapEditorGameplaySceneSetupData*>(useFirstPersonFlyingController, recordVRMovement, playVRMovement));
}
inline void GlobalNamespace::BeatmapEditorGameplaySceneSetupData::_ctor(bool useFirstPersonFlyingController, bool recordVRMovement, bool playVRMovement) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEditorGameplaySceneSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, useFirstPersonFlyingController, recordVRMovement, playVRMovement);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEditorGameplaySceneSetupData::BeatmapEditorGameplaySceneSetupData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
