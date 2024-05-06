#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StaticPreviewMediaData)
namespace GlobalNamespace {
class IPreviewMediaData;
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
class StaticPreviewMediaData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StaticPreviewMediaData);
// Type: ::StaticPreviewMediaData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StaticPreviewMediaData*
class CORDL_TYPE StaticPreviewMediaData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _coverSprite, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__coverSprite, put = __cordl_internal_set__coverSprite))::UnityW<::UnityEngine::Sprite> _coverSprite;

  /// @brief Field _previewAudioClip, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__previewAudioClip, put = __cordl_internal_set__previewAudioClip))::UnityW<::UnityEngine::AudioClip> _previewAudioClip;

  /// @brief Convert operator to "::GlobalNamespace::IPreviewMediaData"
  constexpr operator ::GlobalNamespace::IPreviewMediaData*() noexcept;

  /// @brief Method GetCoverSpriteAsync, addr 0x14c1aec, size 0x70, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* GetCoverSpriteAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetPreviewAudioClip, addr 0x14c1b5c, size 0x70, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GetPreviewAudioClip(::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::StaticPreviewMediaData* New_ctor(::UnityEngine::Sprite* coverSprite, ::UnityEngine::AudioClip* previewAudioClip);

  /// @brief Method UnloadPreviewAudioClip, addr 0x14c1bcc, size 0x4, virtual true, abstract: false, final true
  inline void UnloadPreviewAudioClip();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__coverSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__coverSprite();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__previewAudioClip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__previewAudioClip();

  constexpr void __cordl_internal_set__coverSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__previewAudioClip(::UnityW<::UnityEngine::AudioClip> value);

  /// @brief Method .ctor, addr 0x14bdbac, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Sprite* coverSprite, ::UnityEngine::AudioClip* previewAudioClip);

  /// @brief Convert to "::GlobalNamespace::IPreviewMediaData"
  constexpr ::GlobalNamespace::IPreviewMediaData* i___GlobalNamespace__IPreviewMediaData() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticPreviewMediaData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StaticPreviewMediaData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StaticPreviewMediaData(StaticPreviewMediaData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StaticPreviewMediaData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StaticPreviewMediaData(StaticPreviewMediaData const&) = delete;

  /// @brief Field _coverSprite, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____coverSprite;

  /// @brief Field _previewAudioClip, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ____previewAudioClip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StaticPreviewMediaData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticPreviewMediaData, ____coverSprite) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticPreviewMediaData, ____previewAudioClip) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StaticPreviewMediaData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticPreviewMediaData*, "", "StaticPreviewMediaData");
