#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
// Type: ::FileSystemBeatmapLevelData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10804))
// CS Name: ::FileSystemBeatmapLevelData*
class CORDL_TYPE FileSystemBeatmapLevelData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _audioClipPath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipPath, put = __cordl_internal_set__audioClipPath))::StringW _audioClipPath;

  /// @brief Field _audioDataPath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__audioDataPath, put = __cordl_internal_set__audioDataPath))::StringW _audioDataPath;

  /// @brief Field _difficultyBeatmaps, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultyBeatmaps, put = __cordl_internal_set__difficultyBeatmaps))::System::Collections::Generic::Dictionary_2<
      ::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::FileDifficultyBeatmap*>* _difficultyBeatmaps;

  /// @brief Field _audioClip, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClip, put = __cordl_internal_set__audioClip))::UnityW<::UnityEngine::AudioClip> _audioClip;

  __declspec(property(get = get_songAudioClipPath))::StringW songAudioClipPath;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelData"
  constexpr operator ::GlobalNamespace::IBeatmapLevelData*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IBeatmapLevelData"
  constexpr ::GlobalNamespace::IBeatmapLevelData* i___GlobalNamespace__IBeatmapLevelData() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IFilePathSongAudioClipProvider"
  constexpr operator ::GlobalNamespace::IFilePathSongAudioClipProvider*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IFilePathSongAudioClipProvider"
  constexpr ::GlobalNamespace::IFilePathSongAudioClipProvider* i___GlobalNamespace__IFilePathSongAudioClipProvider() noexcept;

  constexpr ::StringW& __cordl_internal_get__audioClipPath();

  constexpr ::StringW const& __cordl_internal_get__audioClipPath() const;

  constexpr void __cordl_internal_set__audioClipPath(::StringW value);

  constexpr ::StringW& __cordl_internal_get__audioDataPath();

  constexpr ::StringW const& __cordl_internal_get__audioDataPath() const;

  constexpr void __cordl_internal_set__audioDataPath(::StringW value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                         ::GlobalNamespace::FileDifficultyBeatmap*>*&
  __cordl_internal_get__difficultyBeatmaps();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
      ::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::FileDifficultyBeatmap*>*> const&
  __cordl_internal_get__difficultyBeatmaps() const;

  constexpr void __cordl_internal_set__difficultyBeatmaps(
      ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                   ::GlobalNamespace::FileDifficultyBeatmap*>* value);

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__audioClip();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__audioClip() const;

  constexpr void __cordl_internal_set__audioClip(::UnityW<::UnityEngine::AudioClip> value);

  /// @brief Method get_songAudioClipPath, addr 0x1288ea4, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_songAudioClipPath();

  static inline ::GlobalNamespace::FileSystemBeatmapLevelData*
  New_ctor(::StringW audioClipPath, ::StringW audioDataPath,
           ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                        ::GlobalNamespace::FileDifficultyBeatmap*>* difficultyBeatmaps);

  /// @brief Method .ctor, addr 0x1288eac, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW audioClipPath, ::StringW audioDataPath,
                    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                                 ::GlobalNamespace::FileDifficultyBeatmap*>* difficultyBeatmaps);

  /// @brief Method GetAudioDataStringAsync, addr 0x1288ee8, size 0x94, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetAudioDataStringAsync();

  /// @brief Method GetBeatmapStringAsync, addr 0x1288f7c, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetBeatmapStringAsync(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetLightshowStringAsync, addr 0x12890b4, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetLightshowStringAsync(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetAudioDataString, addr 0x1289140, size 0x34, virtual true, abstract: false, final true
  inline ::StringW GetAudioDataString();

  /// @brief Method GetBeatmapString, addr 0x1289174, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW GetBeatmapString(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetLightshowString, addr 0x1289190, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW GetLightshowString(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetBeatmapChecksum, addr 0x12891ac, size 0x18, virtual false, abstract: false, final false
  inline ::StringW GetBeatmapChecksum(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetDifficultyBeatmap, addr 0x1289008, size 0xac, virtual false, abstract: false, final false
  inline ::GlobalNamespace::FileDifficultyBeatmap* GetDifficultyBeatmap(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method IBeatmapLevelData.GetBeatmapStringAsync, addr 0x12891c4, size 0x4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* IBeatmapLevelData_GetBeatmapStringAsync(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method IBeatmapLevelData.GetLightshowStringAsync, addr 0x12891c8, size 0x4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* IBeatmapLevelData_GetLightshowStringAsync(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method IBeatmapLevelData.GetBeatmapString, addr 0x12891cc, size 0x4, virtual true, abstract: false, final true
  inline ::StringW IBeatmapLevelData_GetBeatmapString(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method IBeatmapLevelData.GetLightshowString, addr 0x12891d0, size 0x4, virtual true, abstract: false, final true
  inline ::StringW IBeatmapLevelData_GetLightshowString(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method IBeatmapLevelData.GetBeatmapChecksum, addr 0x12891d4, size 0x18, virtual true, abstract: false, final true
  inline ::StringW IBeatmapLevelData_GetBeatmapChecksum(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemBeatmapLevelData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemBeatmapLevelData(FileSystemBeatmapLevelData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemBeatmapLevelData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemBeatmapLevelData(FileSystemBeatmapLevelData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemBeatmapLevelData();

public:
  /// @brief Field _audioClipPath, offset: 0x10, size: 0x8, def value: None
  ::StringW ____audioClipPath;

  /// @brief Field _audioDataPath, offset: 0x18, size: 0x8, def value: None
  ::StringW ____audioDataPath;

  /// @brief Field _difficultyBeatmaps, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                               ::GlobalNamespace::FileDifficultyBeatmap*>* ____difficultyBeatmaps;

  /// @brief Field _audioClip, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ____audioClip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileSystemBeatmapLevelData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FileSystemBeatmapLevelData, ____audioClipPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileSystemBeatmapLevelData, ____audioDataPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileSystemBeatmapLevelData, ____difficultyBeatmaps) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileSystemBeatmapLevelData, ____audioClip) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FileSystemBeatmapLevelData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileSystemBeatmapLevelData*, "", "FileSystemBeatmapLevelData");
