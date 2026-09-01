#pragma once
// IWYU pragma private; include "GlobalNamespace\FileSystemPreviewMediaData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FileSystemPreviewMediaData_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewMediaData_def.hpp"
#include "GlobalNamespace/zzzz__SpriteAsyncLoader_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FileSystemPreviewMediaData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileSystemPreviewMediaData::*)(
    ::GlobalNamespace::SpriteAsyncLoader*, ::GlobalNamespace::AudioClipAsyncLoader*, ::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::FileSystemPreviewMediaData::_ctor)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x372adcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemPreviewMediaData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::SpriteAsyncLoader*>(), ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemPreviewMediaData.GetCoverSpriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* (::GlobalNamespace::FileSystemPreviewMediaData::*)()>(
    &::GlobalNamespace::FileSystemPreviewMediaData::GetCoverSpriteAsync)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x372af50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemPreviewMediaData*>(), { "GetCoverSpriteAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemPreviewMediaData.GetPreviewAudioClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (::GlobalNamespace::FileSystemPreviewMediaData::*)()>(
    &::GlobalNamespace::FileSystemPreviewMediaData::GetPreviewAudioClip)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x372aff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemPreviewMediaData*>(), { "GetPreviewAudioClip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemPreviewMediaData.UnloadPreviewAudioClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileSystemPreviewMediaData::*)()>(&::GlobalNamespace::FileSystemPreviewMediaData::UnloadPreviewAudioClip)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x372b090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemPreviewMediaData*>(), { "UnloadPreviewAudioClip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemPreviewMediaData.UnloadCoverSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileSystemPreviewMediaData::*)()>(&::GlobalNamespace::FileSystemPreviewMediaData::UnloadCoverSprite)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x372b0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemPreviewMediaData*>(), { "UnloadCoverSprite", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SpriteAsyncLoader*& GlobalNamespace::FileSystemPreviewMediaData::__cordl_internal_get__spriteAsyncLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteAsyncLoader;
}
constexpr ::GlobalNamespace::SpriteAsyncLoader* const& GlobalNamespace::FileSystemPreviewMediaData::__cordl_internal_get__spriteAsyncLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteAsyncLoader;
}
constexpr void GlobalNamespace::FileSystemPreviewMediaData::__cordl_internal_set__spriteAsyncLoader(::GlobalNamespace::SpriteAsyncLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spriteAsyncLoader = value;
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader*& GlobalNamespace::FileSystemPreviewMediaData::__cordl_internal_get__audioClipAsyncLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipAsyncLoader;
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader* const& GlobalNamespace::FileSystemPreviewMediaData::__cordl_internal_get__audioClipAsyncLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipAsyncLoader;
}
constexpr void GlobalNamespace::FileSystemPreviewMediaData::__cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioClipAsyncLoader = value;
}
constexpr ::StringW& GlobalNamespace::FileSystemPreviewMediaData::__cordl_internal_get__coverSpritePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverSpritePath;
}
constexpr ::StringW const& GlobalNamespace::FileSystemPreviewMediaData::__cordl_internal_get__coverSpritePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverSpritePath;
}
constexpr void GlobalNamespace::FileSystemPreviewMediaData::__cordl_internal_set__coverSpritePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____coverSpritePath = value;
}
constexpr ::StringW& GlobalNamespace::FileSystemPreviewMediaData::__cordl_internal_get__previewAudioClipPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewAudioClipPath;
}
constexpr ::StringW const& GlobalNamespace::FileSystemPreviewMediaData::__cordl_internal_get__previewAudioClipPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewAudioClipPath;
}
constexpr void GlobalNamespace::FileSystemPreviewMediaData::__cordl_internal_set__previewAudioClipPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previewAudioClipPath = value;
}
inline void GlobalNamespace::FileSystemPreviewMediaData::_ctor(::GlobalNamespace::SpriteAsyncLoader* spriteAsyncLoader, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader,
                                                               ::StringW rootPath, ::StringW coverSpritePath, ::StringW previewAudioClipPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemPreviewMediaData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::SpriteAsyncLoader*>(), ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spriteAsyncLoader, audioClipAsyncLoader, rootPath, coverSpritePath, previewAudioClipPath);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* GlobalNamespace::FileSystemPreviewMediaData::GetCoverSpriteAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemPreviewMediaData*>(), { "GetCoverSpriteAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::FileSystemPreviewMediaData::GetPreviewAudioClip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemPreviewMediaData*>(), { "GetPreviewAudioClip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>(this, ___internal_method);
}
inline void GlobalNamespace::FileSystemPreviewMediaData::UnloadPreviewAudioClip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemPreviewMediaData*>(), { "UnloadPreviewAudioClip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FileSystemPreviewMediaData::UnloadCoverSprite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemPreviewMediaData*>(), { "UnloadCoverSprite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FileSystemPreviewMediaData* GlobalNamespace::FileSystemPreviewMediaData::New_ctor(::GlobalNamespace::SpriteAsyncLoader* spriteAsyncLoader,
                                                                                                            ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::StringW rootPath,
                                                                                                            ::StringW coverSpritePath, ::StringW previewAudioClipPath) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FileSystemPreviewMediaData*>(spriteAsyncLoader, audioClipAsyncLoader, rootPath, coverSpritePath, previewAudioClipPath));
}
/// @brief Convert operator to "::GlobalNamespace::IPreviewMediaData"
constexpr GlobalNamespace::FileSystemPreviewMediaData::operator ::GlobalNamespace::IPreviewMediaData*() noexcept {
  return static_cast<::GlobalNamespace::IPreviewMediaData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPreviewMediaData"
constexpr ::GlobalNamespace::IPreviewMediaData* GlobalNamespace::FileSystemPreviewMediaData::i___GlobalNamespace__IPreviewMediaData() noexcept {
  return static_cast<::GlobalNamespace::IPreviewMediaData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileSystemPreviewMediaData::FileSystemPreviewMediaData() {}
