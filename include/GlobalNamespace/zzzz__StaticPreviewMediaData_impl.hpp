#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticPreviewMediaData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StaticPreviewMediaData_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewMediaData_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StaticPreviewMediaData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StaticPreviewMediaData::*)(::UnityEngine::Sprite*, ::UnityEngine::AudioClip*)>(
    &::GlobalNamespace::StaticPreviewMediaData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3721374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticPreviewMediaData*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticPreviewMediaData.GetCoverSpriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* (::GlobalNamespace::StaticPreviewMediaData::*)()>(
    &::GlobalNamespace::StaticPreviewMediaData::GetCoverSpriteAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3726798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticPreviewMediaData*>(), { "GetCoverSpriteAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticPreviewMediaData.GetPreviewAudioClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (::GlobalNamespace::StaticPreviewMediaData::*)()>(
    &::GlobalNamespace::StaticPreviewMediaData::GetPreviewAudioClip)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3726810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticPreviewMediaData*>(), { "GetPreviewAudioClip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticPreviewMediaData.UnloadPreviewAudioClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StaticPreviewMediaData::*)()>(&::GlobalNamespace::StaticPreviewMediaData::UnloadPreviewAudioClip)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3726888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticPreviewMediaData*>(), { "UnloadPreviewAudioClip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticPreviewMediaData.UnloadCoverSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StaticPreviewMediaData::*)()>(&::GlobalNamespace::StaticPreviewMediaData::UnloadCoverSprite)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x372688c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticPreviewMediaData*>(), { "UnloadCoverSprite", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::StaticPreviewMediaData::__cordl_internal_get__coverSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::StaticPreviewMediaData::__cordl_internal_get__coverSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverSprite;
}
constexpr void GlobalNamespace::StaticPreviewMediaData::__cordl_internal_set__coverSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____coverSprite = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::StaticPreviewMediaData::__cordl_internal_get__previewAudioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewAudioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::StaticPreviewMediaData::__cordl_internal_get__previewAudioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewAudioClip;
}
constexpr void GlobalNamespace::StaticPreviewMediaData::__cordl_internal_set__previewAudioClip(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previewAudioClip = value;
}
inline void GlobalNamespace::StaticPreviewMediaData::_ctor(::UnityEngine::Sprite* coverSprite, ::UnityEngine::AudioClip* previewAudioClip) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticPreviewMediaData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coverSprite, previewAudioClip);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* GlobalNamespace::StaticPreviewMediaData::GetCoverSpriteAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticPreviewMediaData*>(), { "GetCoverSpriteAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::StaticPreviewMediaData::GetPreviewAudioClip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticPreviewMediaData*>(), { "GetPreviewAudioClip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>(this, ___internal_method);
}
inline void GlobalNamespace::StaticPreviewMediaData::UnloadPreviewAudioClip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticPreviewMediaData*>(), { "UnloadPreviewAudioClip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StaticPreviewMediaData::UnloadCoverSprite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticPreviewMediaData*>(), { "UnloadCoverSprite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StaticPreviewMediaData* GlobalNamespace::StaticPreviewMediaData::New_ctor(::UnityEngine::Sprite* coverSprite, ::UnityEngine::AudioClip* previewAudioClip) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StaticPreviewMediaData*>(coverSprite, previewAudioClip));
}
/// @brief Convert operator to "::GlobalNamespace::IPreviewMediaData"
constexpr GlobalNamespace::StaticPreviewMediaData::operator ::GlobalNamespace::IPreviewMediaData*() noexcept {
  return static_cast<::GlobalNamespace::IPreviewMediaData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPreviewMediaData"
constexpr ::GlobalNamespace::IPreviewMediaData* GlobalNamespace::StaticPreviewMediaData::i___GlobalNamespace__IPreviewMediaData() noexcept {
  return static_cast<::GlobalNamespace::IPreviewMediaData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StaticPreviewMediaData::StaticPreviewMediaData() {}
