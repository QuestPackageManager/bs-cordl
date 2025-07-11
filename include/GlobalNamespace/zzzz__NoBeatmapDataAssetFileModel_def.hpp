#pragma once
// IWYU pragma private; include "GlobalNamespace/NoBeatmapDataAssetFileModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataAssetFileModel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoBeatmapDataAssetFileModel)
namespace GlobalNamespace {
struct BeatmapLevelDataVersion;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate;
}
namespace GlobalNamespace {
struct NoBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__3;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
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
// Forward declare root types
namespace GlobalNamespace {
class NoBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
struct NoBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__3;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoBeatmapDataAssetFileModel);
MARK_VAL_T(::GlobalNamespace::NoBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__3);
// Dependencies GetAssetBundleFileResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: NoBeatmapDataAssetFileModel/<GetAssetBundleFileForBeatmapLevelAsync>d__3
struct CORDL_TYPE NoBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26d565c, size 0x2d8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26d5934, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NoBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__3();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
  constexpr NoBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__3(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder,
      ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13027 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__3, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__3, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__3, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IBeatmapDataAssetFileModel, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoBeatmapDataAssetFileModel
class CORDL_TYPE NoBeatmapDataAssetFileModel : public ::System::Object {
public:
  // Declarations
  using _GetAssetBundleFileForBeatmapLevelAsync_d__3 = ::GlobalNamespace::NoBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__3;

  /// @brief Field levelDataAssetDownloadUpdateEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelDataAssetDownloadUpdateEvent,
                      put = __cordl_internal_set_levelDataAssetDownloadUpdateEvent)) ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* levelDataAssetDownloadUpdateEvent;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapDataAssetFileModel"
  constexpr operator ::GlobalNamespace::IBeatmapDataAssetFileModel*() noexcept;

  /// @brief Method GetAssetBundleFileForBeatmapLevelAsync, addr 0x26d54c4, size 0xf0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GetAssetBundleFileForBeatmapLevelAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                                                 ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::NoBeatmapDataAssetFileModel* New_ctor();

  /// @brief Method TryDeleteAssetBundleFileForBeatmapLevelAsync, addr 0x26d55b4, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* TryDeleteAssetBundleFileForBeatmapLevelAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                                                ::System::Threading::CancellationToken cancellationToken);

  constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* const& __cordl_internal_get_levelDataAssetDownloadUpdateEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*& __cordl_internal_get_levelDataAssetDownloadUpdateEvent();

  constexpr void __cordl_internal_set_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

  /// @brief Method .ctor, addr 0x26d5654, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_levelDataAssetDownloadUpdateEvent, addr 0x26d5364, size 0xb0, virtual true, abstract: false, final true
  inline void add_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

  /// @brief Convert to "::GlobalNamespace::IBeatmapDataAssetFileModel"
  constexpr ::GlobalNamespace::IBeatmapDataAssetFileModel* i___GlobalNamespace__IBeatmapDataAssetFileModel() noexcept;

  /// @brief Method remove_levelDataAssetDownloadUpdateEvent, addr 0x26d5414, size 0xb0, virtual true, abstract: false, final true
  inline void remove_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoBeatmapDataAssetFileModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoBeatmapDataAssetFileModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoBeatmapDataAssetFileModel(NoBeatmapDataAssetFileModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoBeatmapDataAssetFileModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoBeatmapDataAssetFileModel(NoBeatmapDataAssetFileModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13028 };

  /// @brief Field levelDataAssetDownloadUpdateEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* ___levelDataAssetDownloadUpdateEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoBeatmapDataAssetFileModel, ___levelDataAssetDownloadUpdateEvent) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoBeatmapDataAssetFileModel, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoBeatmapDataAssetFileModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoBeatmapDataAssetFileModel*, "", "NoBeatmapDataAssetFileModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__3, "", "NoBeatmapDataAssetFileModel/<GetAssetBundleFileForBeatmapLevelAsync>d__3");
