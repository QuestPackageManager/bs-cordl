#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelPack.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelPack._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelPack::*)(
    ::StringW, ::StringW, ::StringW, ::UnityEngine::Sprite*, ::UnityEngine::Sprite*, ::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>,
    ::GlobalNamespace::PlayerSensitivityFlag)>(&::GlobalNamespace::BeatmapLevelPack::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x14be970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelPack*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 7>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSensitivityFlag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelPack.CreateLevelPackForFiltering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapLevelPack* (*)(::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>)>(
        &::GlobalNamespace::BeatmapLevelPack::CreateLevelPackForFiltering)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x14be9d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelPack*>::get(), "CreateLevelPackForFiltering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___packID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___packName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shortPackName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___coverImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smallCoverImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get_beatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevels;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*> const& GlobalNamespace::BeatmapLevelPack::__cordl_internal_get_beatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevels;
}
constexpr void GlobalNamespace::BeatmapLevelPack::__cordl_internal_set_beatmapLevels(::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapLevels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline ::GlobalNamespace::BeatmapLevelPack* GlobalNamespace::BeatmapLevelPack::New_ctor(::StringW packID, ::StringW packName, ::StringW shortPackName, ::UnityEngine::Sprite* coverImage,
                                                                                        ::UnityEngine::Sprite* smallCoverImage,
                                                                                        ::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*> beatmapLevels,
                                                                                        ::GlobalNamespace::PlayerSensitivityFlag contentRating) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapLevelPack*>(packID, packName, shortPackName, coverImage, smallCoverImage, beatmapLevels, contentRating));
}
inline void GlobalNamespace::BeatmapLevelPack::_ctor(::StringW packID, ::StringW packName, ::StringW shortPackName, ::UnityEngine::Sprite* coverImage, ::UnityEngine::Sprite* smallCoverImage,
                                                     ::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*> beatmapLevels,
                                                     ::GlobalNamespace::PlayerSensitivityFlag contentRating) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelPack*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSensitivityFlag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packID, packName, shortPackName, coverImage, smallCoverImage, beatmapLevels, contentRating);
}
inline ::GlobalNamespace::BeatmapLevelPack*
GlobalNamespace::BeatmapLevelPack::CreateLevelPackForFiltering(::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*> beatmapLevels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelPack*>::get(), "CreateLevelPackForFiltering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPack*, false>(nullptr, ___internal_method, beatmapLevels);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelPack::BeatmapLevelPack() {}
