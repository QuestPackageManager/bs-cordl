#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticPreviewMediaData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IPreviewMediaData_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StaticPreviewMediaData)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
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
// Dependencies IPreviewMediaData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StaticPreviewMediaData
class CORDL_TYPE StaticPreviewMediaData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _coverSprite, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__coverSprite, put = __cordl_internal_set__coverSprite)) ::UnityW<::UnityEngine::Sprite> _coverSprite;

  /// @brief Field _previewAudioClip, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__previewAudioClip, put = __cordl_internal_set__previewAudioClip)) ::UnityW<::UnityEngine::AudioClip> _previewAudioClip;

  /// @brief Convert operator to "::GlobalNamespace::IPreviewMediaData"
  constexpr operator ::GlobalNamespace::IPreviewMediaData*() noexcept;

  /// @brief Method GetCoverSpriteAsync, addr 0x26ce6a8, size 0x70, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* GetCoverSpriteAsync();

  /// @brief Method GetPreviewAudioClip, addr 0x26ce718, size 0x70, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GetPreviewAudioClip();

  static inline ::GlobalNamespace::StaticPreviewMediaData* New_ctor(::UnityEngine::Sprite* coverSprite, ::UnityEngine::AudioClip* previewAudioClip);

  /// @brief Method UnloadCoverSprite, addr 0x26ce78c, size 0x4, virtual true, abstract: false, final true
  inline void UnloadCoverSprite();

  /// @brief Method UnloadPreviewAudioClip, addr 0x26ce788, size 0x4, virtual true, abstract: false, final true
  inline void UnloadPreviewAudioClip();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__coverSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__coverSprite();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__previewAudioClip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__previewAudioClip();

  constexpr void __cordl_internal_set__coverSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__previewAudioClip(::UnityW<::UnityEngine::AudioClip> value);

  /// @brief Method .ctor, addr 0x26c97ec, size 0x2c, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12980 };

  /// @brief Field _coverSprite, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____coverSprite;

  /// @brief Field _previewAudioClip, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ____previewAudioClip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StaticPreviewMediaData, ____coverSprite) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticPreviewMediaData, ____previewAudioClip) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StaticPreviewMediaData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StaticPreviewMediaData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticPreviewMediaData*, "", "StaticPreviewMediaData");
