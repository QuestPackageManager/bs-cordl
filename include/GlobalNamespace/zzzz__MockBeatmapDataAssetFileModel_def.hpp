#pragma once
// IWYU pragma private; include "GlobalNamespace/MockBeatmapDataAssetFileModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataAssetFileModel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MockBeatmapDataAssetFileModel)
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
struct MockBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__4;
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
class MockBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
struct MockBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockBeatmapDataAssetFileModel);
MARK_VAL_T(::GlobalNamespace::MockBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__4);
// Dependencies GetAssetBundleFileResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: MockBeatmapDataAssetFileModel/<GetAssetBundleFileForBeatmapLevelAsync>d__4
struct CORDL_TYPE MockBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26d12a8, size 0x4f8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26d17a0, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MockBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__4();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty:
  // "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockBeatmapDataAssetFileModel*", modifiers: "", def_value: None },
  // CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_path_5__2", ty: "::StringW", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "_i_5__3", ty: "uint32_t", modifiers: "", def_value:
  // None }]
  constexpr MockBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__4(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
      ::GlobalNamespace::MockBeatmapDataAssetFileModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW _path_5__2,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__1, uint32_t _i_5__3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13021 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder;

  /// @brief Field beatmapLevel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MockBeatmapDataAssetFileModel* __4__this;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <path>5__2, offset: 0x38, size: 0x8, def value: None
  ::StringW _path_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <i>5__3, offset: 0x48, size: 0x4, def value: None
  uint32_t _i_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__4, beatmapLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__4, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__4, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__4, _path_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__4, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__4, _i_5__3) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__4, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IBeatmapDataAssetFileModel, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockBeatmapDataAssetFileModel
class CORDL_TYPE MockBeatmapDataAssetFileModel : public ::System::Object {
public:
  // Declarations
  using _GetAssetBundleFileForBeatmapLevelAsync_d__4 = ::GlobalNamespace::MockBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__4;

  /// @brief Field levelDataAssetDownloadUpdateEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelDataAssetDownloadUpdateEvent,
                      put = __cordl_internal_set_levelDataAssetDownloadUpdateEvent)) ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* levelDataAssetDownloadUpdateEvent;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapDataAssetFileModel"
  constexpr operator ::GlobalNamespace::IBeatmapDataAssetFileModel*() noexcept;

  /// @brief Method GetAssetBundleFileForBeatmapLevelAsync, addr 0x26d1130, size 0x108, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GetAssetBundleFileForBeatmapLevelAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                                                 ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::MockBeatmapDataAssetFileModel* New_ctor();

  /// @brief Method TryDeleteAssetBundleFileForBeatmapLevelAsync, addr 0x26d1238, size 0x68, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* TryDeleteAssetBundleFileForBeatmapLevelAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                                                ::System::Threading::CancellationToken cancellationToken);

  constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* const& __cordl_internal_get_levelDataAssetDownloadUpdateEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*& __cordl_internal_get_levelDataAssetDownloadUpdateEvent();

  constexpr void __cordl_internal_set_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

  /// @brief Method .ctor, addr 0x26d12a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_levelDataAssetDownloadUpdateEvent, addr 0x26d0fd0, size 0xb0, virtual true, abstract: false, final true
  inline void add_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

  /// @brief Convert to "::GlobalNamespace::IBeatmapDataAssetFileModel"
  constexpr ::GlobalNamespace::IBeatmapDataAssetFileModel* i___GlobalNamespace__IBeatmapDataAssetFileModel() noexcept;

  /// @brief Method remove_levelDataAssetDownloadUpdateEvent, addr 0x26d1080, size 0xb0, virtual true, abstract: false, final true
  inline void remove_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockBeatmapDataAssetFileModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockBeatmapDataAssetFileModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockBeatmapDataAssetFileModel(MockBeatmapDataAssetFileModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockBeatmapDataAssetFileModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockBeatmapDataAssetFileModel(MockBeatmapDataAssetFileModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13022 };

  /// @brief Field kAssetsDir offset 0xffffffff size 0x8
  static constexpr ::ConstString kAssetsDir{ u"BeatmapDataAssets" };

  /// @brief Field levelDataAssetDownloadUpdateEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* ___levelDataAssetDownloadUpdateEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockBeatmapDataAssetFileModel, ___levelDataAssetDownloadUpdateEvent) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockBeatmapDataAssetFileModel, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockBeatmapDataAssetFileModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockBeatmapDataAssetFileModel*, "", "MockBeatmapDataAssetFileModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__4, "", "MockBeatmapDataAssetFileModel/<GetAssetBundleFileForBeatmapLevelAsync>d__4");
