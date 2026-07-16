#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelPack.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_impl.hpp"
#include "GlobalNamespace/zzzz__PackBuyOption_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__PackBuyOption_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelPack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::BeatmapLevelPack::*)(::StringW, ::StringW, ::StringW, ::UnityEngine::Sprite*, ::UnityEngine::Sprite*, ::GlobalNamespace::PackBuyOption,
                                                              ::ArrayW<::GlobalNamespace::BeatmapLevel*>, ::GlobalNamespace::PlayerSensitivityFlag)>(&::GlobalNamespace::BeatmapLevelPack::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x37224b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPack*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Sprite*>(),
                                                                 ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::GlobalNamespace::PackBuyOption>(),
                                                                 ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapLevel*>>(), ::i2c::type_of<::GlobalNamespace::PlayerSensitivityFlag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelPack.AllBeatmapLevels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* (::GlobalNamespace::BeatmapLevelPack::*)()>(
    &::GlobalNamespace::BeatmapLevelPack::AllBeatmapLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37225cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPack*>(), { "AllBeatmapLevels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelPack.CreateLevelPackForFiltering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevelPack* (*)(::ArrayW<::GlobalNamespace::BeatmapLevel*>)>(
    &::GlobalNamespace::BeatmapLevelPack::CreateLevelPackForFiltering)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x37225d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPack*>(),
                                                                                           { "CreateLevelPackForFiltering", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapLevel*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelPack.AddAdditionalBeatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelPack::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::BeatmapLevelPack::AddAdditionalBeatmapLevel)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x37226a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPack*>(), { "AddAdditionalBeatmapLevel", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelPack.ClearAdditionalBeatmapLevels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelPack::*)()>(&::GlobalNamespace::BeatmapLevelPack::ClearAdditionalBeatmapLevels)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3722794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPack*>(), { "ClearAdditionalBeatmapLevels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelPack.SetAdditionalBeatmapLevels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelPack::*)(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*)>(
    &::GlobalNamespace::BeatmapLevelPack::SetAdditionalBeatmapLevels)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3722850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPack*>(),
                                                             { "SetAdditionalBeatmapLevels", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get_packID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packID;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get_packID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packID;
}
constexpr void GlobalNamespace::BeatmapLevelPack::__cordl_internal_set_packID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___packID = value;
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get_packName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packName;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get_packName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packName;
}
constexpr void GlobalNamespace::BeatmapLevelPack::__cordl_internal_set_packName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___packName = value;
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get_shortPackName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shortPackName;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get_shortPackName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shortPackName;
}
constexpr void GlobalNamespace::BeatmapLevelPack::__cordl_internal_set_shortPackName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shortPackName = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get_coverImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coverImage;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get_coverImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coverImage;
}
constexpr void GlobalNamespace::BeatmapLevelPack::__cordl_internal_set_coverImage(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___coverImage = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get_smallCoverImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smallCoverImage;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get_smallCoverImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smallCoverImage;
}
constexpr void GlobalNamespace::BeatmapLevelPack::__cordl_internal_set_smallCoverImage(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smallCoverImage = value;
}
constexpr ::GlobalNamespace::PackBuyOption& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get_packBuyOption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packBuyOption;
}
constexpr ::GlobalNamespace::PackBuyOption const& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get_packBuyOption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packBuyOption;
}
constexpr void GlobalNamespace::BeatmapLevelPack::__cordl_internal_set_packBuyOption(::GlobalNamespace::PackBuyOption value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___packBuyOption = value;
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get_contentRating() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentRating;
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag const& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get_contentRating() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentRating;
}
constexpr void GlobalNamespace::BeatmapLevelPack::__cordl_internal_set_contentRating(::GlobalNamespace::PlayerSensitivityFlag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentRating = value;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevel*>& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get__beatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevel*> const& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get__beatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr void GlobalNamespace::BeatmapLevelPack::__cordl_internal_set__beatmapLevels(::ArrayW<::GlobalNamespace::BeatmapLevel*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevels = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get__additionalBeatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalBeatmapLevels;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* const& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get__additionalBeatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalBeatmapLevels;
}
constexpr void GlobalNamespace::BeatmapLevelPack::__cordl_internal_set__additionalBeatmapLevels(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____additionalBeatmapLevels = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get__allBeatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allBeatmapLevels;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* const& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get__allBeatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allBeatmapLevels;
}
constexpr void GlobalNamespace::BeatmapLevelPack::__cordl_internal_set__allBeatmapLevels(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allBeatmapLevels = value;
}
inline void GlobalNamespace::BeatmapLevelPack::_ctor(::StringW packID, ::StringW packName, ::StringW shortPackName, ::UnityEngine::Sprite* coverImage, ::UnityEngine::Sprite* smallCoverImage,
                                                     ::GlobalNamespace::PackBuyOption packBuyOption, ::ArrayW<::GlobalNamespace::BeatmapLevel*> beatmapLevels,
                                                     ::GlobalNamespace::PlayerSensitivityFlag contentRating) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPack*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Sprite*>(),
                                                               ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::GlobalNamespace::PackBuyOption>(),
                                                               ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapLevel*>>(), ::i2c::type_of<::GlobalNamespace::PlayerSensitivityFlag>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packID, packName, shortPackName, coverImage, smallCoverImage, packBuyOption, beatmapLevels, contentRating);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* GlobalNamespace::BeatmapLevelPack::AllBeatmapLevels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPack*>(), { "AllBeatmapLevels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelPack* GlobalNamespace::BeatmapLevelPack::CreateLevelPackForFiltering(::ArrayW<::GlobalNamespace::BeatmapLevel*> beatmapLevels) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPack*>(),
                                                                                         { "CreateLevelPackForFiltering", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapLevel*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPack*>(nullptr, ___internal_method, beatmapLevels);
}
inline void GlobalNamespace::BeatmapLevelPack::AddAdditionalBeatmapLevel(::GlobalNamespace::BeatmapLevel* levelToAdd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPack*>(), { "AddAdditionalBeatmapLevel", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelToAdd);
}
inline void GlobalNamespace::BeatmapLevelPack::ClearAdditionalBeatmapLevels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPack*>(), { "ClearAdditionalBeatmapLevels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelPack::SetAdditionalBeatmapLevels(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* additionalBeatmapLevels) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelPack*>(),
                                                           { "SetAdditionalBeatmapLevels", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, additionalBeatmapLevels);
}
inline ::GlobalNamespace::BeatmapLevelPack* GlobalNamespace::BeatmapLevelPack::New_ctor(::StringW packID, ::StringW packName, ::StringW shortPackName, ::UnityEngine::Sprite* coverImage,
                                                                                        ::UnityEngine::Sprite* smallCoverImage, ::GlobalNamespace::PackBuyOption packBuyOption,
                                                                                        ::ArrayW<::GlobalNamespace::BeatmapLevel*> beatmapLevels,
                                                                                        ::GlobalNamespace::PlayerSensitivityFlag contentRating) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelPack*>(packID, packName, shortPackName, coverImage, smallCoverImage, packBuyOption, beatmapLevels, contentRating));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelPack::BeatmapLevelPack() {}
