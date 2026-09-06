#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatmapLevelLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBeatmapLevelLoader)
namespace GlobalNamespace {
struct BeatmapLevelDataVersion;
}
namespace GlobalNamespace {
struct BeatmapLevelLoader_LevelDownloadingUpdate;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
struct LoadBeatmapLevelDataResult;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapLevelLoader;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IBeatmapLevelLoader*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IBeatmapLevelLoader*, "", "IBeatmapLevelLoader");
// [NullableContext(2)]
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IBeatmapLevelLoader
class CORDL_TYPE IBeatmapLevelLoader {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// [NullableContext(1)]
  /// @brief Method CheckBeatmapLevelDataExistsAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<bool>* CheckBeatmapLevelDataExistsAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                                    ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ClearCache, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ClearCache();

  /// [NullableContext(1)]
  /// @brief Method LoadBeatmapLevelDataAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>* LoadBeatmapLevelDataAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                                      ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                                                                      ::System::Threading::CancellationToken cancellationToken);

  /// [CompilerGenerated]
  /// @brief Method add_levelDownloadingUpdateEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate>* value);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// [CompilerGenerated]
  /// @brief Method remove_levelDownloadingUpdateEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelLoader_LevelDownloadingUpdate>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapLevelLoader", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatmapLevelLoader(IBeatmapLevelLoaderconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15036 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
