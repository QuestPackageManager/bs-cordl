#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AudioClipAsyncLoaderExtensions)
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioClipAsyncLoaderExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioClipAsyncLoaderExtensions);
// Type: ::AudioClipAsyncLoaderExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10769))
// CS Name: ::AudioClipAsyncLoaderExtensions*
class CORDL_TYPE AudioClipAsyncLoaderExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method LoadPreview, addr 0x1281840, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* LoadPreview(::GlobalNamespace::AudioClipAsyncLoader* asyncLoader,
                                                                                                    ::GlobalNamespace::BeatmapLevel* beatmapLevel);

  /// @brief Method UnloadPreview, addr 0x128191c, size 0xa8, virtual false, abstract: false, final false
  static inline void UnloadPreview(::GlobalNamespace::AudioClipAsyncLoader* _, ::GlobalNamespace::BeatmapLevel* beatmapLevel);

  /// @brief Method LoadSong, addr 0x12819c4, size 0x208, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* LoadSong(::GlobalNamespace::AudioClipAsyncLoader* asyncLoader,
                                                                                                 ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData);

  /// @brief Method UnloadSong, addr 0x1280204, size 0x1c8, virtual false, abstract: false, final false
  static inline void UnloadSong(::GlobalNamespace::AudioClipAsyncLoader* asyncLoader, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData);

  // Ctor Parameters [CppParam { name: "", ty: "AudioClipAsyncLoaderExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioClipAsyncLoaderExtensions(AudioClipAsyncLoaderExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioClipAsyncLoaderExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioClipAsyncLoaderExtensions(AudioClipAsyncLoaderExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioClipAsyncLoaderExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioClipAsyncLoaderExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioClipAsyncLoaderExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioClipAsyncLoaderExtensions*, "", "AudioClipAsyncLoaderExtensions");
