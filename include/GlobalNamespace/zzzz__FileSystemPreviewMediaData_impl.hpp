#pragma once
// IWYU pragma private; include "GlobalNamespace/FileSystemPreviewMediaData.hpp"
#include "GlobalNamespace/zzzz__IPreviewMediaData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FileSystemPreviewMediaData_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__SpriteAsyncLoader_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FileSystemPreviewMediaData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FileSystemPreviewMediaData::*)(
    ::GlobalNamespace::SpriteAsyncLoader*, ::GlobalNamespace::AudioClipAsyncLoader*, ::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::FileSystemPreviewMediaData::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x26cbe34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemPreviewMediaData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SpriteAsyncLoader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioClipAsyncLoader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemPreviewMediaData.GetCoverSpriteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* (
    ::GlobalNamespace::FileSystemPreviewMediaData::*)()>(&::GlobalNamespace::FileSystemPreviewMediaData::GetCoverSpriteAsync)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26cbff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemPreviewMediaData*>::get(),
                                                                               "GetCoverSpriteAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemPreviewMediaData.GetPreviewAudioClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (
    ::GlobalNamespace::FileSystemPreviewMediaData::*)()>(&::GlobalNamespace::FileSystemPreviewMediaData::GetPreviewAudioClip)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26cc018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemPreviewMediaData*>::get(),
                                                                               "GetPreviewAudioClip", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemPreviewMediaData.UnloadPreviewAudioClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FileSystemPreviewMediaData::*)()>(
    &::GlobalNamespace::FileSystemPreviewMediaData::UnloadPreviewAudioClip)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26cc03c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemPreviewMediaData*>::get(),
                                                                               "UnloadPreviewAudioClip", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemPreviewMediaData.UnloadCoverSprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FileSystemPreviewMediaData::*)()>(
    &::GlobalNamespace::FileSystemPreviewMediaData::UnloadCoverSprite)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26cc060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemPreviewMediaData*>::get(),
                                                                               "UnloadCoverSprite", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spriteAsyncLoader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioClipAsyncLoader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____coverSpritePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previewAudioClipPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FileSystemPreviewMediaData::_ctor(::GlobalNamespace::SpriteAsyncLoader* spriteAsyncLoader, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader,
                                                               ::StringW rootPath, ::StringW coverSpritePath, ::StringW previewAudioClipPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemPreviewMediaData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SpriteAsyncLoader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioClipAsyncLoader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, spriteAsyncLoader, audioClipAsyncLoader, rootPath, coverSpritePath, previewAudioClipPath);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* GlobalNamespace::FileSystemPreviewMediaData::GetCoverSpriteAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemPreviewMediaData*>::get(),
                                                                             "GetCoverSpriteAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::FileSystemPreviewMediaData::GetPreviewAudioClip() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemPreviewMediaData*>::get(),
                                                                             "GetPreviewAudioClip", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::FileSystemPreviewMediaData::UnloadPreviewAudioClip() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemPreviewMediaData*>::get(),
                                                                             "UnloadPreviewAudioClip", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FileSystemPreviewMediaData::UnloadCoverSprite() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemPreviewMediaData*>::get(),
                                                                             "UnloadCoverSprite", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FileSystemPreviewMediaData* GlobalNamespace::FileSystemPreviewMediaData::New_ctor(::GlobalNamespace::SpriteAsyncLoader* spriteAsyncLoader,
                                                                                                            ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::StringW rootPath,
                                                                                                            ::StringW coverSpritePath, ::StringW previewAudioClipPath) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FileSystemPreviewMediaData*>(spriteAsyncLoader, audioClipAsyncLoader, rootPath, coverSpritePath, previewAudioClipPath));
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
