#pragma once
// IWYU pragma private; include "GlobalNamespace/FileSystemBeatmapLevelData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileSystemBeatmapLevelData)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class FileDifficultyBeatmap;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class IFilePathSongAudioClipProvider;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class FileSystemBeatmapLevelData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FileSystemBeatmapLevelData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FileSystemBeatmapLevelData
class CORDL_TYPE FileSystemBeatmapLevelData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _audioClip, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClip, put = __cordl_internal_set__audioClip)) ::UnityW<::UnityEngine::AudioClip> _audioClip;

  /// @brief Field _audioClipPath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipPath, put = __cordl_internal_set__audioClipPath)) ::StringW _audioClipPath;

  /// @brief Field _audioDataPath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__audioDataPath, put = __cordl_internal_set__audioDataPath)) ::StringW _audioDataPath;

  /// @brief Field _difficultyBeatmaps, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultyBeatmaps, put = __cordl_internal_set__difficultyBeatmaps)) ::System::Collections::Generic::Dictionary_2<
      ::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::FileDifficultyBeatmap*>* _difficultyBeatmaps;

  /// @brief Field _name, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  __declspec(property(get = get_name)) ::StringW name;

  __declspec(property(get = get_songAudioClipPath)) ::StringW songAudioClipPath;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelData"
  constexpr operator ::GlobalNamespace::IBeatmapLevelData*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IFilePathSongAudioClipProvider"
  constexpr operator ::GlobalNamespace::IFilePathSongAudioClipProvider*() noexcept;

  /// @brief Method ContainsBeatmapData, addr 0x362bc48, size 0x18, virtual false, abstract: false, final false
  inline bool ContainsBeatmapData(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetAudioDataString, addr 0x362bb98, size 0x78, virtual true, abstract: false, final true
  inline ::StringW GetAudioDataString();

  /// @brief Method GetAudioDataStringAsync, addr 0x362b8f4, size 0xc0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetAudioDataStringAsync();

  /// @brief Method GetBeatmapString, addr 0x362bc10, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW GetBeatmapString(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetBeatmapStringAsync, addr 0x362b9b4, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetBeatmapStringAsync(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetDifficultyBeatmap, addr 0x362ba5c, size 0x94, virtual false, abstract: false, final false
  inline ::GlobalNamespace::FileDifficultyBeatmap* GetDifficultyBeatmap(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetLightshowString, addr 0x362bc2c, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW GetLightshowString(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetLightshowStringAsync, addr 0x362baf0, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetLightshowStringAsync(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method IBeatmapLevelData.ContainsBeatmapData, addr 0x362bc70, size 0x18, virtual true, abstract: false, final true
  inline bool IBeatmapLevelData_ContainsBeatmapData(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method IBeatmapLevelData.GetBeatmapString, addr 0x362bc68, size 0x4, virtual true, abstract: false, final true
  inline ::StringW IBeatmapLevelData_GetBeatmapString(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method IBeatmapLevelData.GetBeatmapStringAsync, addr 0x362bc60, size 0x4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* IBeatmapLevelData_GetBeatmapStringAsync(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method IBeatmapLevelData.GetLightshowString, addr 0x362bc6c, size 0x4, virtual true, abstract: false, final true
  inline ::StringW IBeatmapLevelData_GetLightshowString(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method IBeatmapLevelData.GetLightshowStringAsync, addr 0x362bc64, size 0x4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* IBeatmapLevelData_GetLightshowStringAsync(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  static inline ::GlobalNamespace::FileSystemBeatmapLevelData*
  New_ctor(::StringW name, ::StringW audioClipPath, ::StringW audioDataPath,
           ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                        ::GlobalNamespace::FileDifficultyBeatmap*>* difficultyBeatmaps);

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__audioClip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__audioClip();

  constexpr ::StringW const& __cordl_internal_get__audioClipPath() const;

  constexpr ::StringW& __cordl_internal_get__audioClipPath();

  constexpr ::StringW const& __cordl_internal_get__audioDataPath() const;

  constexpr ::StringW& __cordl_internal_get__audioDataPath();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                         ::GlobalNamespace::FileDifficultyBeatmap*>* const&
  __cordl_internal_get__difficultyBeatmaps() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                         ::GlobalNamespace::FileDifficultyBeatmap*>*&
  __cordl_internal_get__difficultyBeatmaps();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr void __cordl_internal_set__audioClip(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set__audioClipPath(::StringW value);

  constexpr void __cordl_internal_set__audioDataPath(::StringW value);

  constexpr void __cordl_internal_set__difficultyBeatmaps(
      ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                   ::GlobalNamespace::FileDifficultyBeatmap*>* value);

  constexpr void __cordl_internal_set__name(::StringW value);

  /// @brief Method .ctor, addr 0x362b8e8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW audioClipPath, ::StringW audioDataPath,
                    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                                 ::GlobalNamespace::FileDifficultyBeatmap*>* difficultyBeatmaps);

  /// @brief Method get_name, addr 0x362b8e0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_name();

  /// @brief Method get_songAudioClipPath, addr 0x362b8d8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_songAudioClipPath();

  /// @brief Method get_version, addr 0x362b8d0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Convert to "::GlobalNamespace::IBeatmapLevelData"
  constexpr ::GlobalNamespace::IBeatmapLevelData* i___GlobalNamespace__IBeatmapLevelData() noexcept;

  /// @brief Convert to "::GlobalNamespace::IFilePathSongAudioClipProvider"
  constexpr ::GlobalNamespace::IFilePathSongAudioClipProvider* i___GlobalNamespace__IFilePathSongAudioClipProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemBeatmapLevelData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemBeatmapLevelData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemBeatmapLevelData(FileSystemBeatmapLevelData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemBeatmapLevelData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemBeatmapLevelData(FileSystemBeatmapLevelData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14958 };

  /// @brief Field _audioClipPath, offset: 0x10, size: 0x8, def value: None
  ::StringW ____audioClipPath;

  /// @brief Field _audioDataPath, offset: 0x18, size: 0x8, def value: None
  ::StringW ____audioDataPath;

  /// @brief Field _name, offset: 0x20, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _difficultyBeatmaps, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                               ::GlobalNamespace::FileDifficultyBeatmap*>* ____difficultyBeatmaps;

  /// @brief Field _audioClip, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ____audioClip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FileSystemBeatmapLevelData, ____audioClipPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileSystemBeatmapLevelData, ____audioDataPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileSystemBeatmapLevelData, ____name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileSystemBeatmapLevelData, ____difficultyBeatmaps) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileSystemBeatmapLevelData, ____audioClip) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileSystemBeatmapLevelData, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FileSystemBeatmapLevelData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileSystemBeatmapLevelData*, "", "FileSystemBeatmapLevelData");
