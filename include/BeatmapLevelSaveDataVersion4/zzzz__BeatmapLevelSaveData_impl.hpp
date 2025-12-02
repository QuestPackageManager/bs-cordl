#pragma once
// IWYU pragma private; include "BeatmapLevelSaveDataVersion4/BeatmapLevelSaveData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapLevelSaveDataVersion4/zzzz__BeatmapLevelSaveData_def.hpp"
#include "BeatmapLevelSaveDataVersion4/zzzz__BeatmapLevelSaveData_def.hpp"
#include "System/zzzz__Version_def.hpp"
// Ctor Parameters [CppParam { name: "title", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "subTitle", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "author", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_SongData::BeatmapLevelSaveData_SongData(::StringW title, ::StringW subTitle, ::StringW author) noexcept {
  this->title = title;
  this->subTitle = subTitle;
  this->author = author;
}
// Ctor Parameters []
constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_SongData::BeatmapLevelSaveData_SongData() {}
// Ctor Parameters [CppParam { name: "songFilename", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "songDuration", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "audioDataFilename", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "bpm", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "lufs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "previewStartTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "previewDuration", ty:
// "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_AudioData::BeatmapLevelSaveData_AudioData(::StringW songFilename, float_t songDuration, ::StringW audioDataFilename, float_t bpm,
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
constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_AudioData::BeatmapLevelSaveData_AudioData() {}
//  Writing Method size for method: ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::*)()>(
    &::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36360e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_get_colorSchemeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSchemeName;
}
constexpr ::StringW const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_get_colorSchemeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSchemeName;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_set_colorSchemeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorSchemeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_get_overrideNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideNotes;
}
constexpr bool const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_get_overrideNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideNotes;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_set_overrideNotes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideNotes = value;
}
constexpr ::StringW& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_get_saberAColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberAColor;
}
constexpr ::StringW const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_get_saberAColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberAColor;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_set_saberAColor(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___saberAColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_get_saberBColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberBColor;
}
constexpr ::StringW const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_get_saberBColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberBColor;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_set_saberBColor(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___saberBColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_get_obstaclesColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesColor;
}
constexpr ::StringW const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_get_obstaclesColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesColor;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_set_obstaclesColor(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obstaclesColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_get_overrideLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideLights;
}
constexpr bool const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_get_overrideLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideLights;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_set_overrideLights(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideLights = value;
}
constexpr ::StringW& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_get_environmentColor0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor0;
}
constexpr ::StringW const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_get_environmentColor0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor0;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_set_environmentColor0(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___environmentColor0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_get_environmentColor1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor1;
}
constexpr ::StringW const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_get_environmentColor1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor1;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_set_environmentColor1(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___environmentColor1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_get_environmentColor0Boost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor0Boost;
}
constexpr ::StringW const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_get_environmentColor0Boost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor0Boost;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_set_environmentColor0Boost(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___environmentColor0Boost)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_get_environmentColor1Boost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor1Boost;
}
constexpr ::StringW const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_get_environmentColor1Boost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor1Boost;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::__cordl_internal_set_environmentColor1Boost(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___environmentColor1Boost)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme* BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme*>());
}
// Ctor Parameters []
constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme::BeatmapLevelSaveData_ColorScheme() {}
// Ctor Parameters [CppParam { name: "mappers", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lighters", ty:
// "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_BeatmapAuthors::BeatmapLevelSaveData_BeatmapAuthors(::ArrayW<::StringW, ::Array<::StringW>*> mappers,
                                                                                                                   ::ArrayW<::StringW, ::Array<::StringW>*> lighters) noexcept {
  this->mappers = mappers;
  this->lighters = lighters;
}
// Ctor Parameters []
constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_BeatmapAuthors::BeatmapLevelSaveData_BeatmapAuthors() {}
//  Writing Method size for method: ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::*)()>(
    &::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36360e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_get_characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr ::StringW const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_get_characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_set_characteristic(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___characteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_get_difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr ::StringW const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_get_difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_set_difficulty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___difficulty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_BeatmapAuthors& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_get_beatmapAuthors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapAuthors;
}
constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_BeatmapAuthors const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_get_beatmapAuthors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapAuthors;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_set_beatmapAuthors(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_BeatmapAuthors value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapAuthors = value;
}
constexpr int32_t& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_get_environmentNameIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentNameIdx;
}
constexpr int32_t const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_get_environmentNameIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentNameIdx;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_set_environmentNameIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentNameIdx = value;
}
constexpr int32_t& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_get_beatmapColorSchemeIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapColorSchemeIdx;
}
constexpr int32_t const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_get_beatmapColorSchemeIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapColorSchemeIdx;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_set_beatmapColorSchemeIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapColorSchemeIdx = value;
}
constexpr float_t& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_get_noteJumpMovementSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpMovementSpeed;
}
constexpr float_t const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_get_noteJumpMovementSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpMovementSpeed;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_set_noteJumpMovementSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteJumpMovementSpeed = value;
}
constexpr float_t& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_get_noteJumpStartBeatOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpStartBeatOffset;
}
constexpr float_t const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_get_noteJumpStartBeatOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpStartBeatOffset;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_set_noteJumpStartBeatOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteJumpStartBeatOffset = value;
}
constexpr ::StringW& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_get_lightshowDataFilename() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightshowDataFilename;
}
constexpr ::StringW const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_get_lightshowDataFilename() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightshowDataFilename;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_set_lightshowDataFilename(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightshowDataFilename)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_get_beatmapDataFilename() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDataFilename;
}
constexpr ::StringW const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_get_beatmapDataFilename() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDataFilename;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::__cordl_internal_set_beatmapDataFilename(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapDataFilename)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap* BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap*>());
}
// Ctor Parameters []
constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap::BeatmapLevelSaveData_DifficultyBeatmap() {}
//  Writing Method size for method: ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::*)()>(
    &::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3636004;

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
constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_SongData& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_song() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___song;
}
constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_SongData const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_song() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___song;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_set_song(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_SongData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___song = value;
}
constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_AudioData& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_audio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audio;
}
constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_AudioData const& BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_audio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audio;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_set_audio(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_AudioData value) {
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
constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme*, ::Array<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme*>*>&
BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_colorSchemes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSchemes;
}
constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme*, ::Array<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme*>*> const&
BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_colorSchemes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSchemes;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_set_colorSchemes(
    ::ArrayW<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme*, ::Array<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_ColorScheme*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorSchemes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap*, ::Array<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap*>*>&
BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_difficultyBeatmaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficultyBeatmaps;
}
constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap*, ::Array<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap*>*> const&
BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_get_difficultyBeatmaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficultyBeatmaps;
}
constexpr void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::__cordl_internal_set_difficultyBeatmaps(
    ::ArrayW<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap*, ::Array<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData_DifficultyBeatmap*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___difficultyBeatmaps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::setStaticF_kCustomColorOverridesVersion(::System::Version* value) {
  ::cordl_internals::setStaticField<::System::Version*, "kCustomColorOverridesVersion",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData*>::get>(std::forward<::System::Version*>(value));
}
inline ::System::Version* BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::getStaticF_kCustomColorOverridesVersion() {
  return ::cordl_internals::getStaticField<::System::Version*, "kCustomColorOverridesVersion",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData*>::get>();
}
inline void BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData* BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData*>());
}
// Ctor Parameters []
constexpr ::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData::BeatmapLevelSaveData() {}
