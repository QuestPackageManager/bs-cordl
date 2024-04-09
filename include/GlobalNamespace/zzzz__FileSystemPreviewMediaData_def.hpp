#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileSystemPreviewMediaData)
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
class IPreviewMediaData;
}
namespace GlobalNamespace {
class SpriteAsyncLoader;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class FileSystemPreviewMediaData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FileSystemPreviewMediaData);
// Type: ::FileSystemPreviewMediaData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FileSystemPreviewMediaData*
class CORDL_TYPE FileSystemPreviewMediaData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _audioClipAsyncLoader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipAsyncLoader, put = __cordl_internal_set__audioClipAsyncLoader))::GlobalNamespace::AudioClipAsyncLoader* _audioClipAsyncLoader;

  /// @brief Field _coverSpritePath, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__coverSpritePath, put = __cordl_internal_set__coverSpritePath))::StringW _coverSpritePath;

  /// @brief Field _previewAudioClipPath, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__previewAudioClipPath, put = __cordl_internal_set__previewAudioClipPath))::StringW _previewAudioClipPath;

  /// @brief Field _spriteAsyncLoader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__spriteAsyncLoader, put = __cordl_internal_set__spriteAsyncLoader))::GlobalNamespace::SpriteAsyncLoader* _spriteAsyncLoader;

  /// @brief Convert operator to "::GlobalNamespace::IPreviewMediaData"
  constexpr operator ::GlobalNamespace::IPreviewMediaData*() noexcept;

  /// @brief Method GetCoverSpriteAsync, addr 0x13cbd9c, size 0x28, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* GetCoverSpriteAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetPreviewAudioClip, addr 0x13cbdc4, size 0x24, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GetPreviewAudioClip(::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::FileSystemPreviewMediaData* New_ctor(::GlobalNamespace::SpriteAsyncLoader* spriteAsyncLoader, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader,
                                                                        ::StringW rootPath, ::StringW coverSpritePath, ::StringW previewAudioClipPath);

  /// @brief Method UnloadPreviewAudioClip, addr 0x13cbde8, size 0x24, virtual true, abstract: false, final true
  inline void UnloadPreviewAudioClip();

  constexpr ::GlobalNamespace::AudioClipAsyncLoader*& __cordl_internal_get__audioClipAsyncLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipAsyncLoader*> const& __cordl_internal_get__audioClipAsyncLoader() const;

  constexpr ::StringW const& __cordl_internal_get__coverSpritePath() const;

  constexpr ::StringW& __cordl_internal_get__coverSpritePath();

  constexpr ::StringW const& __cordl_internal_get__previewAudioClipPath() const;

  constexpr ::StringW& __cordl_internal_get__previewAudioClipPath();

  constexpr ::GlobalNamespace::SpriteAsyncLoader*& __cordl_internal_get__spriteAsyncLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SpriteAsyncLoader*> const& __cordl_internal_get__spriteAsyncLoader() const;

  constexpr void __cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value);

  constexpr void __cordl_internal_set__coverSpritePath(::StringW value);

  constexpr void __cordl_internal_set__previewAudioClipPath(::StringW value);

  constexpr void __cordl_internal_set__spriteAsyncLoader(::GlobalNamespace::SpriteAsyncLoader* value);

  /// @brief Method .ctor, addr 0x13cbbd4, size 0x1c8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::SpriteAsyncLoader* spriteAsyncLoader, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::StringW rootPath, ::StringW coverSpritePath,
                    ::StringW previewAudioClipPath);

  /// @brief Convert to "::GlobalNamespace::IPreviewMediaData"
  constexpr ::GlobalNamespace::IPreviewMediaData* i___GlobalNamespace__IPreviewMediaData() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemPreviewMediaData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemPreviewMediaData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemPreviewMediaData(FileSystemPreviewMediaData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemPreviewMediaData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemPreviewMediaData(FileSystemPreviewMediaData const&) = delete;

  /// @brief Field _spriteAsyncLoader, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::SpriteAsyncLoader* ____spriteAsyncLoader;

  /// @brief Field _audioClipAsyncLoader, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* ____audioClipAsyncLoader;

  /// @brief Field _coverSpritePath, offset: 0x20, size: 0x8, def value: None
  ::StringW ____coverSpritePath;

  /// @brief Field _previewAudioClipPath, offset: 0x28, size: 0x8, def value: None
  ::StringW ____previewAudioClipPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileSystemPreviewMediaData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FileSystemPreviewMediaData, ____spriteAsyncLoader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileSystemPreviewMediaData, ____audioClipAsyncLoader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileSystemPreviewMediaData, ____coverSpritePath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileSystemPreviewMediaData, ____previewAudioClipPath) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FileSystemPreviewMediaData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileSystemPreviewMediaData*, "", "FileSystemPreviewMediaData");
