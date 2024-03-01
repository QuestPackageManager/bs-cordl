#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPreviewMediaData)
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
class IPreviewMediaData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IPreviewMediaData);
// Type: ::IPreviewMediaData
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IPreviewMediaData*
class CORDL_TYPE IPreviewMediaData {
public:
  // Declarations
  /// @brief Method GetCoverSpriteAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* GetCoverSpriteAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetPreviewAudioClip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GetPreviewAudioClip(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method UnloadPreviewAudioClip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UnloadPreviewAudioClip();

  // Ctor Parameters [CppParam { name: "", ty: "IPreviewMediaData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPreviewMediaData(IPreviewMediaData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPreviewMediaData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPreviewMediaData(IPreviewMediaData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IPreviewMediaData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPreviewMediaData*, "", "IPreviewMediaData");
