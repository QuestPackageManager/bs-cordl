#pragma once
#include "BeatmapLevelSaveDataVersion4/zzzz__BeatmapLevelSaveData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapLevelSaveDataVersion4/zzzz__BeatmapLevelSaveData_def.hpp"
#include "BeatmapLevelSaveDataVersion4/zzzz__BeatmapLevelSaveData_def.hpp"
// Ctor Parameters [CppParam { name: "title", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "subTitle", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "author", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__SongData::__BeatmapLevelSaveData__SongData(::StringW title, ::StringW subTitle, ::StringW author) noexcept {
  this->title = title;
  this->subTitle = subTitle;
  this->author = author;
}
// Ctor Parameters []
constexpr ::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__SongData::__BeatmapLevelSaveData__SongData() {}
// Ctor Parameters [CppParam { name: "songFilename", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "songDuration", ty: "float_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "audioDataFilename", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "bpm", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "lufs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "previewStartTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "previewDuration",
// ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__AudioData::__BeatmapLevelSaveData__AudioData(::StringW songFilename, float_t songDuration, ::StringW audioDataFilename, float_t bpm,
                                                                                                               float_t lufs, float_t previewStartTime, float_t previewDuration) noexcept {
  this->songFilename = songFilename;
  this->songDuration = songDuration;
  this->audioDataFilename = audioDataFilename;
  this->bpm = bpm;
  this->lufs = lufs;
  this->previewStartTime = previewStartTime;
  this->previewDuration = previewDuration;
}
// Ctor Parameters []
constexpr ::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__AudioData::__BeatmapLevelSaveData__AudioData() {}
// Ctor Parameters [CppParam { name: "useOverride", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorSchemeName", ty: "::StringW", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "saberAColor", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "saberBColor", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "obstaclesColor", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "environmentColor0", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "environmentColor1", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "environmentColor0Boost", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "environmentColor1Boost", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__ColorScheme::__BeatmapLevelSaveData__ColorScheme(bool useOverride, ::StringW colorSchemeName, ::StringW saberAColor,
                                                                                                                   ::StringW saberBColor, ::StringW obstaclesColor, ::StringW environmentColor0,
                                                                                                                   ::StringW environmentColor1, ::StringW environmentColor0Boost,
                                                                                                                   ::StringW environmentColor1Boost) noexcept {
  this->useOverride = useOverride;
  this->colorSchemeName = colorSchemeName;
  this->saberAColor = saberAColor;
  this->saberBColor = saberBColor;
  this->obstaclesColor = obstaclesColor;
  this->environmentColor0 = environmentColor0;
  this->environmentColor1 = environmentColor1;
  this->environmentColor0Boost = environmentColor0Boost;
  this->environmentColor1Boost = environmentColor1Boost;
}
// Ctor Parameters []
constexpr ::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__ColorScheme::__BeatmapLevelSaveData__ColorScheme() {}
// Ctor Parameters [CppParam { name: "mappers", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "lighters", ty:
// "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__BeatmapAuthors::__BeatmapLevelSaveData__BeatmapAuthors(::ArrayW<::StringW, ::Array<::StringW>*> mappers,
                                                                                                                         ::ArrayW<::StringW, ::Array<::StringW>*> lighters) noexcept {
  this->mappers = mappers;
  this->lighters = lighters;
}
// Ctor Parameters []
constexpr ::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__BeatmapAuthors::__BeatmapLevelSaveData__BeatmapAuthors() {}
// Ctor Parameters [CppParam { name: "characteristic", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "difficulty", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "beatmapAuthors", ty: "::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__BeatmapAuthors", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "environmentNameIdx", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapColorSchemeIdx", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "noteJumpMovementSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "noteJumpStartBeatOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "lightshowDataFilename", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "beatmapDataFilename", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__DifficultyBeatmap::__BeatmapLevelSaveData__DifficultyBeatmap(
    ::StringW characteristic, ::StringW difficulty, ::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__BeatmapAuthors beatmapAuthors, int32_t environmentNameIdx, int32_t beatmapColorSchemeIdx,
    float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset, ::StringW lightshowDataFilename, ::StringW beatmapDataFilename) noexcept {
  this->characteristic = characteristic;
  this->difficulty = difficulty;
  this->beatmapAuthors = beatmapAuthors;
  this->environmentNameIdx = environmentNameIdx;
  this->beatmapColorSchemeIdx = beatmapColorSchemeIdx;
  this->noteJumpMovementSpeed = noteJumpMovementSpeed;
  this->noteJumpStartBeatOffset = noteJumpStartBeatOffset;
  this->lightshowDataFilename = lightshowDataFilename;
  this->beatmapDataFilename = beatmapDataFilename;
}
// Ctor Parameters []
constexpr ::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__DifficultyBeatmap::__BeatmapLevelSaveData__DifficultyBeatmap() {}
//  Writing Method size for method: ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::*)()>(
    &::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x12bceac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::StringW const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_set_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__SongData& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_song() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___song;
}
constexpr ::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__SongData const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_song() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___song;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_set_song(::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__SongData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___song = value;
}
constexpr ::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__AudioData& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_audio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audio;
}
constexpr ::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__AudioData const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_audio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audio;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_set_audio(::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__AudioData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___audio = value;
}
constexpr ::StringW& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_songPreviewFilename() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songPreviewFilename;
}
constexpr ::StringW const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_songPreviewFilename() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songPreviewFilename;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_set_songPreviewFilename(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___songPreviewFilename)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_coverImageFilename() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coverImageFilename;
}
constexpr ::StringW const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_coverImageFilename() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coverImageFilename;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_set_coverImageFilename(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___coverImageFilename)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_environmentNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_environmentNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentNames;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_set_environmentNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___environmentNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__ColorScheme, ::Array<::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__ColorScheme>*>&
BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_colorSchemes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSchemes;
}
constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__ColorScheme, ::Array<::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__ColorScheme>*> const&
BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_colorSchemes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSchemes;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_set_colorSchemes(
    ::ArrayW<::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__ColorScheme, ::Array<::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__ColorScheme>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorSchemes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__DifficultyBeatmap, ::Array<::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__DifficultyBeatmap>*>&
BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_difficultyBeatmaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficultyBeatmaps;
}
constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__DifficultyBeatmap, ::Array<::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__DifficultyBeatmap>*> const&
BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_difficultyBeatmaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficultyBeatmaps;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_set_difficultyBeatmaps(
    ::ArrayW<::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__DifficultyBeatmap, ::Array<::BeatmapLevelSaveDataVersion4::__BeatmapLevelSaveData__DifficultyBeatmap>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___difficultyBeatmaps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData* BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData*>());
}
inline void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::BeatmapLevelSaveData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
