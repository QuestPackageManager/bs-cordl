#pragma once
// IWYU pragma private; include "GlobalNamespace/IPreviewMediaData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPreviewMediaData)
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
class IPreviewMediaData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IPreviewMediaData);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IPreviewMediaData
class CORDL_TYPE IPreviewMediaData {
public:
  // Declarations
  /// @brief Method GetCoverSpriteAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* GetCoverSpriteAsync();

  /// @brief Method GetPreviewAudioClip, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GetPreviewAudioClip();

  /// @brief Method UnloadCoverSprite, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UnloadCoverSprite();

  /// @brief Method UnloadPreviewAudioClip, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UnloadPreviewAudioClip();

  // Ctor Parameters [CppParam { name: "", ty: "IPreviewMediaData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPreviewMediaData(IPreviewMediaData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14953 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IPreviewMediaData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPreviewMediaData*, "", "IPreviewMediaData");
