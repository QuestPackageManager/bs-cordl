#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapEditorSceneSetupData.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapEditorSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEditorSceneSetupData::*)(
    bool, ::StringW, bool, ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>)>(
    &::GlobalNamespace::BeatmapEditorSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x590cde8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorSceneSetupData*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                             ::i2c::type_of<::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::BeatmapEditorSceneSetupData::__cordl_internal_get_goStraightToEditor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goStraightToEditor;
}
constexpr bool const& GlobalNamespace::BeatmapEditorSceneSetupData::__cordl_internal_get_goStraightToEditor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goStraightToEditor;
}
constexpr void GlobalNamespace::BeatmapEditorSceneSetupData::__cordl_internal_set_goStraightToEditor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___goStraightToEditor = value;
}
constexpr ::StringW& GlobalNamespace::BeatmapEditorSceneSetupData::__cordl_internal_get_projectPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectPath;
}
constexpr ::StringW const& GlobalNamespace::BeatmapEditorSceneSetupData::__cordl_internal_get_projectPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectPath;
}
constexpr void GlobalNamespace::BeatmapEditorSceneSetupData::__cordl_internal_set_projectPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___projectPath = value;
}
constexpr bool& GlobalNamespace::BeatmapEditorSceneSetupData::__cordl_internal_get_ignoreTempFolder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreTempFolder;
}
constexpr bool const& GlobalNamespace::BeatmapEditorSceneSetupData::__cordl_internal_get_ignoreTempFolder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreTempFolder;
}
constexpr void GlobalNamespace::BeatmapEditorSceneSetupData::__cordl_internal_set_ignoreTempFolder(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ignoreTempFolder = value;
}
constexpr ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>&
GlobalNamespace::BeatmapEditorSceneSetupData::__cordl_internal_get_startLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startLevel;
}
constexpr ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>> const&
GlobalNamespace::BeatmapEditorSceneSetupData::__cordl_internal_get_startLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startLevel;
}
constexpr void GlobalNamespace::BeatmapEditorSceneSetupData::__cordl_internal_set_startLevel(
    ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startLevel = value;
}
inline void
GlobalNamespace::BeatmapEditorSceneSetupData::_ctor(bool goStraightToEditor, ::StringW projectPath, bool ignoreTempFolder,
                                                    ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>> startLevel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEditorSceneSetupData*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                                  ::i2c::type_of<::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, goStraightToEditor, projectPath, ignoreTempFolder, startLevel);
}
inline ::GlobalNamespace::BeatmapEditorSceneSetupData*
GlobalNamespace::BeatmapEditorSceneSetupData::New_ctor(bool goStraightToEditor, ::StringW projectPath, bool ignoreTempFolder,
                                                       ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>> startLevel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapEditorSceneSetupData*>(goStraightToEditor, projectPath, ignoreTempFolder, startLevel));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEditorSceneSetupData::BeatmapEditorSceneSetupData() {}
