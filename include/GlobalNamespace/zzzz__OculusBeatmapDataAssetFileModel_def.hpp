#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusBeatmapDataAssetFileModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataAssetFileModel_def.hpp"
#include "GlobalNamespace/zzzz__LevelDataAssetDownloadUpdate_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusBeatmapDataAssetFileModel)
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
class OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData;
}
namespace GlobalNamespace {
struct OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__19;
}
namespace GlobalNamespace {
struct OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__24;
}
namespace GlobalNamespace {
struct OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__21;
}
namespace GlobalNamespace {
struct OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__20;
}
namespace GlobalNamespace {
class OculusBeatmapDataAssetFileModel___c__DisplayClass18_0;
}
namespace GlobalNamespace {
class OculusPlatformAdditionalContentModel;
}
namespace Oculus::Platform::Models {
class AssetDetailsList;
}
namespace Oculus::Platform::Models {
class AssetDetails;
}
namespace Oculus::Platform::Models {
class AssetFileDeleteResult;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadResult;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadUpdate;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
class OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData;
}
namespace GlobalNamespace {
class OculusBeatmapDataAssetFileModel___c__DisplayClass18_0;
}
namespace GlobalNamespace {
struct OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__19;
}
namespace GlobalNamespace {
struct OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__24;
}
namespace GlobalNamespace {
struct OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__21;
}
namespace GlobalNamespace {
struct OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__20;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusBeatmapDataAssetFileModel);
MARK_REF_PTR_T(::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData);
MARK_REF_PTR_T(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass18_0);
MARK_VAL_T(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__19);
MARK_VAL_T(::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__24);
MARK_VAL_T(::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__21);
MARK_VAL_T(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__20);
// Dependencies LevelDataAssetDownloadUpdate::AssetDownloadingState, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusBeatmapDataAssetFileModel/AssetBundleDownloadingData
class CORDL_TYPE OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData : public ::System::Object {
public:
  // Declarations
  /// @brief Field assetBundlePath, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_assetBundlePath, put = __cordl_internal_set_assetBundlePath)) ::StringW assetBundlePath;

  /// @brief Field assetId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_assetId, put = __cordl_internal_set_assetId)) uint64_t assetId;

  /// @brief Field bytesTotal, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_bytesTotal, put = __cordl_internal_set_bytesTotal)) uint32_t bytesTotal;

  /// @brief Field bytesTransferred, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_bytesTransferred, put = __cordl_internal_set_bytesTransferred)) uint32_t bytesTransferred;

  __declspec(property(get = get_debugInfo)) ::StringW debugInfo;

  /// @brief Field downloadAssetBundleFileTCS, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_downloadAssetBundleFileTCS,
                      put =
                          __cordl_internal_set_downloadAssetBundleFileTCS)) ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* downloadAssetBundleFileTCS;

  /// @brief Field downloadingState, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_downloadingState, put = __cordl_internal_set_downloadingState)) ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState downloadingState;

  /// @brief Field isStartedDownloading, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_isStartedDownloading, put = __cordl_internal_set_isStartedDownloading)) bool isStartedDownloading;

  /// @brief Field lastNotifiedTimeSeconds, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_lastNotifiedTimeSeconds, put = __cordl_internal_set_lastNotifiedTimeSeconds)) float_t lastNotifiedTimeSeconds;

  /// @brief Field lastRequestedTimeSeconds, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_lastRequestedTimeSeconds, put = __cordl_internal_set_lastRequestedTimeSeconds)) float_t lastRequestedTimeSeconds;

  /// @brief Field lastUpdatedTimeSeconds, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_lastUpdatedTimeSeconds, put = __cordl_internal_set_lastUpdatedTimeSeconds)) float_t lastUpdatedTimeSeconds;

  /// @brief Field levelId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_levelId, put = __cordl_internal_set_levelId)) ::StringW levelId;

  /// @brief Method GetLevelDataAssetDownloadUpdate, addr 0x26e5954, size 0x24, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LevelDataAssetDownloadUpdate GetLevelDataAssetDownloadUpdate();

  static inline ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData* New_ctor(uint64_t assetId, ::StringW levelId, ::StringW assetBundlePath,
                                                                                                        ::System::Threading::CancellationToken cancellationToken);

  constexpr ::StringW const& __cordl_internal_get_assetBundlePath() const;

  constexpr ::StringW& __cordl_internal_get_assetBundlePath();

  constexpr uint64_t const& __cordl_internal_get_assetId() const;

  constexpr uint64_t& __cordl_internal_get_assetId();

  constexpr uint32_t const& __cordl_internal_get_bytesTotal() const;

  constexpr uint32_t& __cordl_internal_get_bytesTotal();

  constexpr uint32_t const& __cordl_internal_get_bytesTransferred() const;

  constexpr uint32_t& __cordl_internal_get_bytesTransferred();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* const& __cordl_internal_get_downloadAssetBundleFileTCS() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*& __cordl_internal_get_downloadAssetBundleFileTCS();

  constexpr ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState const& __cordl_internal_get_downloadingState() const;

  constexpr ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState& __cordl_internal_get_downloadingState();

  constexpr bool const& __cordl_internal_get_isStartedDownloading() const;

  constexpr bool& __cordl_internal_get_isStartedDownloading();

  constexpr float_t const& __cordl_internal_get_lastNotifiedTimeSeconds() const;

  constexpr float_t& __cordl_internal_get_lastNotifiedTimeSeconds();

  constexpr float_t const& __cordl_internal_get_lastRequestedTimeSeconds() const;

  constexpr float_t& __cordl_internal_get_lastRequestedTimeSeconds();

  constexpr float_t const& __cordl_internal_get_lastUpdatedTimeSeconds() const;

  constexpr float_t& __cordl_internal_get_lastUpdatedTimeSeconds();

  constexpr ::StringW const& __cordl_internal_get_levelId() const;

  constexpr ::StringW& __cordl_internal_get_levelId();

  constexpr void __cordl_internal_set_assetBundlePath(::StringW value);

  constexpr void __cordl_internal_set_assetId(uint64_t value);

  constexpr void __cordl_internal_set_bytesTotal(uint32_t value);

  constexpr void __cordl_internal_set_bytesTransferred(uint32_t value);

  constexpr void __cordl_internal_set_downloadAssetBundleFileTCS(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* value);

  constexpr void __cordl_internal_set_downloadingState(::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState value);

  constexpr void __cordl_internal_set_isStartedDownloading(bool value);

  constexpr void __cordl_internal_set_lastNotifiedTimeSeconds(float_t value);

  constexpr void __cordl_internal_set_lastRequestedTimeSeconds(float_t value);

  constexpr void __cordl_internal_set_lastUpdatedTimeSeconds(float_t value);

  constexpr void __cordl_internal_set_levelId(::StringW value);

  /// @brief Method .ctor, addr 0x26e61cc, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(uint64_t assetId, ::StringW levelId, ::StringW assetBundlePath, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method get_debugInfo, addr 0x26e5980, size 0x88, virtual false, abstract: false, final false
  inline ::StringW get_debugInfo();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData(OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData(OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13134 };

  /// @brief Field assetId, offset: 0x10, size: 0x8, def value: None
  uint64_t ___assetId;

  /// @brief Field levelId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___levelId;

  /// @brief Field assetBundlePath, offset: 0x20, size: 0x8, def value: None
  ::StringW ___assetBundlePath;

  /// @brief Field downloadAssetBundleFileTCS, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* ___downloadAssetBundleFileTCS;

  /// @brief Field isStartedDownloading, offset: 0x30, size: 0x1, def value: None
  bool ___isStartedDownloading;

  /// @brief Field bytesTransferred, offset: 0x34, size: 0x4, def value: None
  uint32_t ___bytesTransferred;

  /// @brief Field bytesTotal, offset: 0x38, size: 0x4, def value: None
  uint32_t ___bytesTotal;

  /// @brief Field lastRequestedTimeSeconds, offset: 0x3c, size: 0x4, def value: None
  float_t ___lastRequestedTimeSeconds;

  /// @brief Field lastUpdatedTimeSeconds, offset: 0x40, size: 0x4, def value: None
  float_t ___lastUpdatedTimeSeconds;

  /// @brief Field lastNotifiedTimeSeconds, offset: 0x44, size: 0x4, def value: None
  float_t ___lastNotifiedTimeSeconds;

  /// @brief Field downloadingState, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::LevelDataAssetDownloadUpdate_AssetDownloadingState ___downloadingState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData, ___assetId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData, ___levelId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData, ___assetBundlePath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData, ___downloadAssetBundleFileTCS) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData, ___isStartedDownloading) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData, ___bytesTransferred) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData, ___bytesTotal) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData, ___lastRequestedTimeSeconds) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData, ___lastUpdatedTimeSeconds) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData, ___lastNotifiedTimeSeconds) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData, ___downloadingState) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusBeatmapDataAssetFileModel/<>c__DisplayClass18_0
class CORDL_TYPE OculusBeatmapDataAssetFileModel___c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this;

  /// @brief Field candidateDownloadingData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_candidateDownloadingData,
                      put = __cordl_internal_set_candidateDownloadingData)) ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData* candidateDownloadingData;

  static inline ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass18_0* New_ctor();

  /// @brief Method <StartMostRecentlyRequestedDownload>b__0, addr 0x26e69c8, size 0x228, virtual false, abstract: false, final false
  inline void _StartMostRecentlyRequestedDownload_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* msg);

  constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel*& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData* const& __cordl_internal_get_candidateDownloadingData() const;

  constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData*& __cordl_internal_get_candidateDownloadingData();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel* value);

  constexpr void __cordl_internal_set_candidateDownloadingData(::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData* value);

  /// @brief Method .ctor, addr 0x26e5978, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusBeatmapDataAssetFileModel___c__DisplayClass18_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusBeatmapDataAssetFileModel___c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusBeatmapDataAssetFileModel___c__DisplayClass18_0(OculusBeatmapDataAssetFileModel___c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusBeatmapDataAssetFileModel___c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusBeatmapDataAssetFileModel___c__DisplayClass18_0(OculusBeatmapDataAssetFileModel___c__DisplayClass18_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13135 };

  /// @brief Field candidateDownloadingData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData* ___candidateDownloadingData;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OculusBeatmapDataAssetFileModel* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass18_0, ___candidateDownloadingData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass18_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass18_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapLevelDataVersion, GetAssetBundleFileResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusBeatmapDataAssetFileModel/<GetAssetBundleFileForBeatmapLevelAsync>d__19
struct CORDL_TYPE OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26e6bf0, size 0x830, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26e7420, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__19();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty:
  // "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: None },
  // CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_levelId_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "_assetFile_5__3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None },
  // CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
  constexpr OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__19(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
      ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::System::Threading::CancellationToken cancellationToken,
      ::StringW _levelId_5__2, ::StringW _assetFile_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13136 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder;

  /// @brief Field beatmapLevel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this;

  /// @brief Field beatmapLevelDataVersion, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <levelId>5__2, offset: 0x40, size: 0x8, def value: None
  ::StringW _levelId_5__2;

  /// @brief Field <assetFile>5__3, offset: 0x48, size: 0x8, def value: None
  ::StringW _assetFile_5__3;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__19, beatmapLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__19, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__19, beatmapLevelDataVersion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__19, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__19, _levelId_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__19, _assetFile_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__19, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__19, __u__2) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__19, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusBeatmapDataAssetFileModel/<HandleAssetFileDownloadUpdateAsync>d__24
struct CORDL_TYPE OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26e749c, size 0xaec, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26e7f88, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__24();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "msg", ty:
  // "::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: None }, CppParam { name: "_downloadingData_5__2", ty:
  // "::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData*", modifiers: "", def_value: None }, CppParam { name: "_retryCount_5__3", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "_delay_5__4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__24(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                      ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>* msg,
                                                                                      ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this,
                                                                                      ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData* _downloadingData_5__2,
                                                                                      int32_t _retryCount_5__3, int32_t _delay_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
                                                                                      ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13137 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field msg, offset: 0x20, size: 0x8, def value: None
  ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>* msg;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this;

  /// @brief Field <downloadingData>5__2, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData* _downloadingData_5__2;

  /// @brief Field <retryCount>5__3, offset: 0x38, size: 0x4, def value: None
  int32_t _retryCount_5__3;

  /// @brief Field <delay>5__4, offset: 0x3c, size: 0x4, def value: None
  int32_t _delay_5__4;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__24, msg) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__24, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__24, _downloadingData_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__24, _retryCount_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__24, _delay_5__4) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__24, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__24, __u__2) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__24, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusBeatmapDataAssetFileModel/<ReloadAssetDetailsForAllLevelsAsync>d__21
struct CORDL_TYPE OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26e7ff0, size 0xa54, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26e8a44, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__21();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*>", modifiers: "", def_value: None }]
  constexpr OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__21(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this,
      ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13138 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__21, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__21, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__21, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__21, __u__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__21, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapLevelDataVersion, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusBeatmapDataAssetFileModel/<TryDeleteAssetBundleFileForBeatmapLevelAsync>d__20
struct CORDL_TYPE OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26e8ac0, size 0x8c0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26e9380, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__20();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "",
  // def_value: None }, CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "_levelId_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_msg_5__3", ty:
  // "::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>*>", modifiers: "", def_value: None }, CppParam { name:
  // "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__20(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
      ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this, ::System::Threading::CancellationToken cancellationToken,
      ::StringW _levelId_5__2, ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* _msg_5__3,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>*> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13139 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field beatmapLevel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field beatmapLevelDataVersion, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <levelId>5__2, offset: 0x40, size: 0x8, def value: None
  ::StringW _levelId_5__2;

  /// @brief Field <msg>5__3, offset: 0x48, size: 0x8, def value: None
  ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* _msg_5__3;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>*> __u__1;

  /// @brief Field <>u__2, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__20, beatmapLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__20, beatmapLevelDataVersion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__20, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__20, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__20, _levelId_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__20, _msg_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__20, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__20, __u__2) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__20, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IBeatmapDataAssetFileModel, System.Object, Zenject.ITickable
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusBeatmapDataAssetFileModel
class CORDL_TYPE OculusBeatmapDataAssetFileModel : public ::System::Object {
public:
  // Declarations
  using AssetBundleDownloadingData = ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData;

  using _GetAssetBundleFileForBeatmapLevelAsync_d__19 = ::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__19;

  using _HandleAssetFileDownloadUpdateAsync_d__24 = ::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__24;

  using _ReloadAssetDetailsForAllLevelsAsync_d__21 = ::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__21;

  using _TryDeleteAssetBundleFileForBeatmapLevelAsync_d__20 = ::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__20;

  using __c__DisplayClass18_0 = ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass18_0;

  /// @brief Field _activeDownloadingDataList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__activeDownloadingDataList,
                      put = __cordl_internal_set__activeDownloadingDataList)) ::System::Collections::Generic::List_1<::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData*>*
      _activeDownloadingDataList;

  /// @brief Field _assetFileToAssetDetails, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__assetFileToAssetDetails,
                      put =
                          __cordl_internal_set__assetFileToAssetDetails)) ::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>* _assetFileToAssetDetails;

  /// @brief Field _assetIdToDownloadingData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__assetIdToDownloadingData, put = __cordl_internal_set__assetIdToDownloadingData)) ::System::Collections::Generic::Dictionary_2<
      uint64_t, ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData*>* _assetIdToDownloadingData;

  /// @brief Field _downloadedAssetBundleFiles, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__downloadedAssetBundleFiles,
                      put = __cordl_internal_set__downloadedAssetBundleFiles)) ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _downloadedAssetBundleFiles;

  /// @brief Field _lastUpdatedProgressTimeSeconds, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__lastUpdatedProgressTimeSeconds, put = __cordl_internal_set__lastUpdatedProgressTimeSeconds)) float_t _lastUpdatedProgressTimeSeconds;

  /// @brief Field _oculusPlatformAdditionalContentModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusPlatformAdditionalContentModel,
                      put = __cordl_internal_set__oculusPlatformAdditionalContentModel)) ::GlobalNamespace::OculusPlatformAdditionalContentModel* _oculusPlatformAdditionalContentModel;

  /// @brief Field _reloadAssetDetailsSemaphoreSlim, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__reloadAssetDetailsSemaphoreSlim,
                      put = __cordl_internal_set__reloadAssetDetailsSemaphoreSlim)) ::System::Threading::SemaphoreSlim* _reloadAssetDetailsSemaphoreSlim;

  /// @brief Field levelDataAssetDownloadUpdateEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelDataAssetDownloadUpdateEvent,
                      put = __cordl_internal_set_levelDataAssetDownloadUpdateEvent)) ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* levelDataAssetDownloadUpdateEvent;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapDataAssetFileModel"
  constexpr operator ::GlobalNamespace::IBeatmapDataAssetFileModel*() noexcept;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  /// @brief Method CancelDownload, addr 0x26e586c, size 0xe8, virtual false, abstract: false, final false
  inline void CancelDownload(uint64_t assetId);

  /// @brief Method CancelNotRespondingDownloads, addr 0x26e5134, size 0x104, virtual false, abstract: false, final false
  inline void CancelNotRespondingDownloads(float_t currentTimeSeconds);

  /// @brief Method GetAssetBundleFileForBeatmapLevelAsync, addr 0x26e5a08, size 0x114, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GetAssetBundleFileForBeatmapLevelAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                                                 ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetCurrentTimeSeconds, addr 0x26e512c, size 0x8, virtual false, abstract: false, final false
  inline float_t GetCurrentTimeSeconds();

  /// @brief Method GetDownloadAssetBundleFileAsync, addr 0x26e5d24, size 0x4a8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GetDownloadAssetBundleFileAsync(::StringW levelId, ::Oculus::Platform::Models::AssetDetails* assetDetails,
                                                                                                                          ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method HandleAssetFileDownloadUpdate, addr 0x26e62b8, size 0xa4, virtual false, abstract: false, final false
  inline void HandleAssetFileDownloadUpdate(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>* msg);

  /// @brief Method HandleAssetFileDownloadUpdateAsync, addr 0x26e635c, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* HandleAssetFileDownloadUpdateAsync(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>* msg);

  /// @brief Method MarkDownloadCompleted, addr 0x26e6430, size 0x2d8, virtual false, abstract: false, final false
  inline void MarkDownloadCompleted(bool isError, ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData* downloadingData);

  static inline ::GlobalNamespace::OculusBeatmapDataAssetFileModel* New_ctor(::GlobalNamespace::OculusPlatformAdditionalContentModel* oculusPlatformAdditionalContentModel);

  /// @brief Method NotifyRecentlyRequestedDownloads, addr 0x26e5238, size 0x214, virtual false, abstract: false, final false
  inline void NotifyRecentlyRequestedDownloads(float_t currentTimeSeconds);

  /// @brief Method ReloadAssetDetailsForAllLevelsAsync, addr 0x26e5c2c, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ReloadAssetDetailsForAllLevelsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method RemoveFromDownloadingDataStructures, addr 0x26e6708, size 0x2c0, virtual false, abstract: false, final false
  inline bool RemoveFromDownloadingDataStructures(uint64_t assetId);

  /// @brief Method StartMostRecentlyRequestedDownload, addr 0x26e544c, size 0x420, virtual false, abstract: false, final false
  inline void StartMostRecentlyRequestedDownload(float_t currentTimeSeconds);

  /// @brief Method Tick, addr 0x26e50ec, size 0x40, virtual true, abstract: false, final true
  inline void Tick();

  /// @brief Method TryDeleteAssetBundleFileForBeatmapLevelAsync, addr 0x26e5b1c, size 0x110, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* TryDeleteAssetBundleFileForBeatmapLevelAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                                                ::System::Threading::CancellationToken cancellationToken);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData*>* const& __cordl_internal_get__activeDownloadingDataList() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData*>*& __cordl_internal_get__activeDownloadingDataList();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>* const& __cordl_internal_get__assetFileToAssetDetails() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>*& __cordl_internal_get__assetFileToAssetDetails();

  constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData*>* const&
  __cordl_internal_get__assetIdToDownloadingData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData*>*& __cordl_internal_get__assetIdToDownloadingData();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* const& __cordl_internal_get__downloadedAssetBundleFiles() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__downloadedAssetBundleFiles();

  constexpr float_t const& __cordl_internal_get__lastUpdatedProgressTimeSeconds() const;

  constexpr float_t& __cordl_internal_get__lastUpdatedProgressTimeSeconds();

  constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel* const& __cordl_internal_get__oculusPlatformAdditionalContentModel() const;

  constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel*& __cordl_internal_get__oculusPlatformAdditionalContentModel();

  constexpr ::System::Threading::SemaphoreSlim* const& __cordl_internal_get__reloadAssetDetailsSemaphoreSlim() const;

  constexpr ::System::Threading::SemaphoreSlim*& __cordl_internal_get__reloadAssetDetailsSemaphoreSlim();

  constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* const& __cordl_internal_get_levelDataAssetDownloadUpdateEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*& __cordl_internal_get_levelDataAssetDownloadUpdateEvent();

  constexpr void __cordl_internal_set__activeDownloadingDataList(::System::Collections::Generic::List_1<::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData*>* value);

  constexpr void __cordl_internal_set__assetFileToAssetDetails(::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>* value);

  constexpr void
  __cordl_internal_set__assetIdToDownloadingData(::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData*>* value);

  constexpr void __cordl_internal_set__downloadedAssetBundleFiles(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__lastUpdatedProgressTimeSeconds(float_t value);

  constexpr void __cordl_internal_set__oculusPlatformAdditionalContentModel(::GlobalNamespace::OculusPlatformAdditionalContentModel* value);

  constexpr void __cordl_internal_set__reloadAssetDetailsSemaphoreSlim(::System::Threading::SemaphoreSlim* value);

  constexpr void __cordl_internal_set_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

  /// @brief Method .ctor, addr 0x26e4f0c, size 0x1e0, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OculusPlatformAdditionalContentModel* oculusPlatformAdditionalContentModel);

  /// @brief Method add_levelDataAssetDownloadUpdateEvent, addr 0x26e4dac, size 0xb0, virtual true, abstract: false, final true
  inline void add_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

  /// @brief Convert to "::GlobalNamespace::IBeatmapDataAssetFileModel"
  constexpr ::GlobalNamespace::IBeatmapDataAssetFileModel* i___GlobalNamespace__IBeatmapDataAssetFileModel() noexcept;

  /// @brief Convert to "::Zenject::ITickable"
  constexpr ::Zenject::ITickable* i___Zenject__ITickable() noexcept;

  /// @brief Method remove_levelDataAssetDownloadUpdateEvent, addr 0x26e4e5c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusBeatmapDataAssetFileModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusBeatmapDataAssetFileModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusBeatmapDataAssetFileModel(OculusBeatmapDataAssetFileModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusBeatmapDataAssetFileModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusBeatmapDataAssetFileModel(OculusBeatmapDataAssetFileModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13140 };

  /// @brief Field kMaxConcurrentDownloads offset 0xffffffff size 0x4
  static constexpr int32_t kMaxConcurrentDownloads{ static_cast<int32_t>(0x1) };

  /// @brief Field kMaxTimeoutSecondsBeforeFail offset 0xffffffff size 0x4
  static constexpr float_t kMaxTimeoutSecondsBeforeFail{ static_cast<float_t>(15.0f) };

  /// @brief Field levelDataAssetDownloadUpdateEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* ___levelDataAssetDownloadUpdateEvent;

  /// @brief Field _downloadedAssetBundleFiles, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____downloadedAssetBundleFiles;

  /// @brief Field _assetIdToDownloadingData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData*>* ____assetIdToDownloadingData;

  /// @brief Field _activeDownloadingDataList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData*>* ____activeDownloadingDataList;

  /// @brief Field _reloadAssetDetailsSemaphoreSlim, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ____reloadAssetDetailsSemaphoreSlim;

  /// @brief Field _assetFileToAssetDetails, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>* ____assetFileToAssetDetails;

  /// @brief Field _oculusPlatformAdditionalContentModel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformAdditionalContentModel* ____oculusPlatformAdditionalContentModel;

  /// @brief Field _lastUpdatedProgressTimeSeconds, offset: 0x48, size: 0x4, def value: None
  float_t ____lastUpdatedProgressTimeSeconds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ___levelDataAssetDownloadUpdateEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ____downloadedAssetBundleFiles) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ____assetIdToDownloadingData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ____activeDownloadingDataList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ____reloadAssetDetailsSemaphoreSlim) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ____assetFileToAssetDetails) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ____oculusPlatformAdditionalContentModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ____lastUpdatedProgressTimeSeconds) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusBeatmapDataAssetFileModel, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusBeatmapDataAssetFileModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusBeatmapDataAssetFileModel*, "", "OculusBeatmapDataAssetFileModel");
NEED_NO_BOX(::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData*, "", "OculusBeatmapDataAssetFileModel/AssetBundleDownloadingData");
NEED_NO_BOX(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass18_0*, "", "OculusBeatmapDataAssetFileModel/<>c__DisplayClass18_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__19, "",
                       "OculusBeatmapDataAssetFileModel/<GetAssetBundleFileForBeatmapLevelAsync>d__19");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusBeatmapDataAssetFileModel__HandleAssetFileDownloadUpdateAsync_d__24, "", "OculusBeatmapDataAssetFileModel/<HandleAssetFileDownloadUpdateAsync>d__24");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__21, "", "OculusBeatmapDataAssetFileModel/<ReloadAssetDetailsForAllLevelsAsync>d__21");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__20, "",
                       "OculusBeatmapDataAssetFileModel/<TryDeleteAssetBundleFileForBeatmapLevelAsync>d__20");
