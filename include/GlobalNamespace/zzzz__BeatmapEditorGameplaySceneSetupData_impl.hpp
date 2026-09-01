#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapEditorGameplaySceneSetupData.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorStartTestLevelData_impl.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorGameplaySceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorStartTestLevelData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapEditorGameplaySceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEditorGameplaySceneSetupData::*)(::by_ref<::GlobalNamespace::BeatmapEditorStartTestLevelData>)>(
    &::GlobalNamespace::BeatmapEditorGameplaySceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x590cddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorGameplaySceneSetupData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapEditorStartTestLevelData>>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData& GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData const& GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__cordl_internal_set_data(::GlobalNamespace::BeatmapEditorStartTestLevelData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void GlobalNamespace::BeatmapEditorGameplaySceneSetupData::_ctor(::by_ref<::GlobalNamespace::BeatmapEditorStartTestLevelData> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorGameplaySceneSetupData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapEditorStartTestLevelData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::GlobalNamespace::BeatmapEditorGameplaySceneSetupData* GlobalNamespace::BeatmapEditorGameplaySceneSetupData::New_ctor(::by_ref<::GlobalNamespace::BeatmapEditorStartTestLevelData> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapEditorGameplaySceneSetupData*>(data));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEditorGameplaySceneSetupData::BeatmapEditorGameplaySceneSetupData() {}
