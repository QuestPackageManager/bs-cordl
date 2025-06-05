#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLevelSceneSetupData.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelSceneSetupData::*)(::ByRef<::GlobalNamespace::BeatmapKey>, bool)>(
    &::GlobalNamespace::MultiplayerLevelSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3b3b4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelSceneSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::MultiplayerLevelSceneSetupData::__cordl_internal_get_beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::MultiplayerLevelSceneSetupData::__cordl_internal_get_beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr void GlobalNamespace::MultiplayerLevelSceneSetupData::__cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapKey = value;
}
constexpr bool& GlobalNamespace::MultiplayerLevelSceneSetupData::__cordl_internal_get_hasSong() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSong;
}
constexpr bool const& GlobalNamespace::MultiplayerLevelSceneSetupData::__cordl_internal_get_hasSong() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasSong;
}
constexpr void GlobalNamespace::MultiplayerLevelSceneSetupData::__cordl_internal_set_hasSong(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasSong = value;
}
inline void GlobalNamespace::MultiplayerLevelSceneSetupData::_ctor(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, bool hasSong) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelSceneSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapKey, hasSong);
}
inline ::GlobalNamespace::MultiplayerLevelSceneSetupData* GlobalNamespace::MultiplayerLevelSceneSetupData::New_ctor(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, bool hasSong) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerLevelSceneSetupData*>(beatmapKey, hasSong));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLevelSceneSetupData::MultiplayerLevelSceneSetupData() {}
