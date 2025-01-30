#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusBeatmapDataAssetFileModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataAssetFileModel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
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
struct OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData;
}
namespace GlobalNamespace {
struct OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13;
}
namespace GlobalNamespace {
struct OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15;
}
namespace GlobalNamespace {
struct OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14;
}
namespace GlobalNamespace {
class OculusBeatmapDataAssetFileModel___c__DisplayClass14_0;
}
namespace GlobalNamespace {
class OculusBeatmapDataAssetFileModel___c__DisplayClass15_0;
}
namespace GlobalNamespace {
class OculusBeatmapDataAssetFileModel___c__DisplayClass16_0;
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
namespace Priority_Queue {
template <typename TItem, typename TPriority> class SimplePriorityQueue_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
class OculusBeatmapDataAssetFileModel___c__DisplayClass14_0;
}
namespace GlobalNamespace {
class OculusBeatmapDataAssetFileModel___c__DisplayClass15_0;
}
namespace GlobalNamespace {
class OculusBeatmapDataAssetFileModel___c__DisplayClass16_0;
}
namespace GlobalNamespace {
struct OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData;
}
namespace GlobalNamespace {
struct OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13;
}
namespace GlobalNamespace {
struct OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15;
}
namespace GlobalNamespace {
struct OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusBeatmapDataAssetFileModel);
MARK_REF_PTR_T(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0);
MARK_REF_PTR_T(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0);
MARK_REF_PTR_T(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0);
MARK_VAL_T(::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData);
MARK_VAL_T(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13);
MARK_VAL_T(::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15);
MARK_VAL_T(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusBeatmapDataAssetFileModel/AssetBundleDownloadingData
struct CORDL_TYPE OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x26e45c0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelId, ::StringW assetBundlePath, ::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData();

  // Ctor Parameters [CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "downloadAssetBundleFileTCS", ty: "::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*", modifiers: "", def_value: None }]
  constexpr OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData(
      ::StringW levelId, ::StringW assetBundlePath, ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* downloadAssetBundleFileTCS) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13132 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field levelId, offset: 0x0, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field assetBundlePath, offset: 0x8, size: 0x8, def value: None
  ::StringW assetBundlePath;

  /// @brief Field downloadAssetBundleFileTCS, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* downloadAssetBundleFileTCS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData, levelId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData, assetBundlePath) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData, downloadAssetBundleFileTCS) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusBeatmapDataAssetFileModel/<>c__DisplayClass14_0
class CORDL_TYPE OculusBeatmapDataAssetFileModel___c__DisplayClass14_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this;

  /// @brief Field cancellationToken, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_cancellationToken, put = __cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field levelId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelId, put = __cordl_internal_set_levelId)) ::StringW levelId;

  /// @brief Field taskSource, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_taskSource, put = __cordl_internal_set_taskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>* taskSource;

  static inline ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0* New_ctor();

  /// @brief Method <TryDeleteAssetBundleFileForBeatmapLevelAsync>b__0, addr 0x26e4ef0, size 0x43c, virtual false, abstract: false, final false
  inline void _TryDeleteAssetBundleFileForBeatmapLevelAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* msg);

  constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel*& __cordl_internal_get___4__this();

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken();

  constexpr ::StringW const& __cordl_internal_get_levelId() const;

  constexpr ::StringW& __cordl_internal_get_levelId();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_taskSource() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_taskSource();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel* value);

  constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value);

  constexpr void __cordl_internal_set_levelId(::StringW value);

  constexpr void __cordl_internal_set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  /// @brief Method .ctor, addr 0x26e4ee8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusBeatmapDataAssetFileModel___c__DisplayClass14_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusBeatmapDataAssetFileModel___c__DisplayClass14_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusBeatmapDataAssetFileModel___c__DisplayClass14_0(OculusBeatmapDataAssetFileModel___c__DisplayClass14_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusBeatmapDataAssetFileModel___c__DisplayClass14_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusBeatmapDataAssetFileModel___c__DisplayClass14_0(OculusBeatmapDataAssetFileModel___c__DisplayClass14_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13133 };

  /// @brief Field levelId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___levelId;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OculusBeatmapDataAssetFileModel* _____4__this;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___cancellationToken;

  /// @brief Field taskSource, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ___taskSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0, ___levelId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0, ___cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0, ___taskSource) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusBeatmapDataAssetFileModel/<>c__DisplayClass15_0
class CORDL_TYPE OculusBeatmapDataAssetFileModel___c__DisplayClass15_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this;

  /// @brief Field cancellationToken, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cancellationToken, put = __cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field taskSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_taskSource, put = __cordl_internal_set_taskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>* taskSource;

  static inline ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0* New_ctor();

  /// @brief Method <ReloadAssetDetailsForAllLevelsAsync>b__0, addr 0x26e5334, size 0x5f8, virtual false, abstract: false, final false
  inline void _ReloadAssetDetailsForAllLevelsAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>* getListMsg);

  constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel*& __cordl_internal_get___4__this();

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_taskSource() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_taskSource();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel* value);

  constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value);

  constexpr void __cordl_internal_set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  /// @brief Method .ctor, addr 0x26e532c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusBeatmapDataAssetFileModel___c__DisplayClass15_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusBeatmapDataAssetFileModel___c__DisplayClass15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusBeatmapDataAssetFileModel___c__DisplayClass15_0(OculusBeatmapDataAssetFileModel___c__DisplayClass15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusBeatmapDataAssetFileModel___c__DisplayClass15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusBeatmapDataAssetFileModel___c__DisplayClass15_0(OculusBeatmapDataAssetFileModel___c__DisplayClass15_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13134 };

  /// @brief Field cancellationToken, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___cancellationToken;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OculusBeatmapDataAssetFileModel* _____4__this;

  /// @brief Field taskSource, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ___taskSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0, ___cancellationToken) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0, ___taskSource) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusBeatmapDataAssetFileModel/<>c__DisplayClass16_0
class CORDL_TYPE OculusBeatmapDataAssetFileModel___c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this;

  /// @brief Field assetDetails, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_assetDetails, put = __cordl_internal_set_assetDetails)) ::Oculus::Platform::Models::AssetDetails* assetDetails;

  /// @brief Field levelId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelId, put = __cordl_internal_set_levelId)) ::StringW levelId;

  static inline ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0* New_ctor();

  /// @brief Method <GetDownloadAssetBundleFileAsync>b__0, addr 0x26e592c, size 0x218, virtual false, abstract: false, final false
  inline void _GetDownloadAssetBundleFileAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* msg);

  constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel*& __cordl_internal_get___4__this();

  constexpr ::Oculus::Platform::Models::AssetDetails* const& __cordl_internal_get_assetDetails() const;

  constexpr ::Oculus::Platform::Models::AssetDetails*& __cordl_internal_get_assetDetails();

  constexpr ::StringW const& __cordl_internal_get_levelId() const;

  constexpr ::StringW& __cordl_internal_get_levelId();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel* value);

  constexpr void __cordl_internal_set_assetDetails(::Oculus::Platform::Models::AssetDetails* value);

  constexpr void __cordl_internal_set_levelId(::StringW value);

  /// @brief Method .ctor, addr 0x26e45b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusBeatmapDataAssetFileModel___c__DisplayClass16_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusBeatmapDataAssetFileModel___c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusBeatmapDataAssetFileModel___c__DisplayClass16_0(OculusBeatmapDataAssetFileModel___c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusBeatmapDataAssetFileModel___c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusBeatmapDataAssetFileModel___c__DisplayClass16_0(OculusBeatmapDataAssetFileModel___c__DisplayClass16_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13135 };

  /// @brief Field levelId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___levelId;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OculusBeatmapDataAssetFileModel* _____4__this;

  /// @brief Field assetDetails, offset: 0x20, size: 0x8, def value: None
  ::Oculus::Platform::Models::AssetDetails* ___assetDetails;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0, ___levelId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0, ___assetDetails) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapLevelDataVersion, GetAssetBundleFileResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusBeatmapDataAssetFileModel/<GetAssetBundleFileForBeatmapLevelAsync>d__13
struct CORDL_TYPE OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26e5b44, size 0x830, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26e6374, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty:
  // "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: None },
  // CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_levelId_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "_assetFile_5__3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None },
  // CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
  constexpr OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13(
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
static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13, beatmapLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13, beatmapLevelDataVersion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13, _levelId_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13, _assetFile_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13, __u__2) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusBeatmapDataAssetFileModel/<ReloadAssetDetailsForAllLevelsAsync>d__15
struct CORDL_TYPE OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26e63f0, size 0x63c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26e6a2c, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                                       ::System::Threading::CancellationToken cancellationToken,
                                                                                       ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this,
                                                                                       ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0* __8__1,
                                                                                       ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13137 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this;

  /// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0* __8__1;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15, __8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15, __u__2) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapLevelDataVersion, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusBeatmapDataAssetFileModel/<TryDeleteAssetBundleFileForBeatmapLevelAsync>d__14
struct CORDL_TYPE OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26e6aa8, size 0x608, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26e70b0, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty:
  // "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: None
  // }, CppParam { name: "__8__1", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0*", modifiers: "", def_value: None }, CppParam { name: "_deleted_5__2", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                                                ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this,
                                                                                                ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                                                ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0* __8__1, bool _deleted_5__2,
                                                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13138 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field beatmapLevel, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field beatmapLevelDataVersion, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion;

  /// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0* __8__1;

  /// @brief Field <deleted>5__2, offset: 0x48, size: 0x1, def value: None
  bool _deleted_5__2;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14, beatmapLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14, beatmapLevelDataVersion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14, __8__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14, _deleted_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14, __u__1) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IBeatmapDataAssetFileModel, System.Object, Zenject.ITickable
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusBeatmapDataAssetFileModel
class CORDL_TYPE OculusBeatmapDataAssetFileModel : public ::System::Object {
public:
  // Declarations
  using AssetBundleDownloadingData = ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData;

  using _GetAssetBundleFileForBeatmapLevelAsync_d__13 = ::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13;

  using _ReloadAssetDetailsForAllLevelsAsync_d__15 = ::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15;

  using _TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14 = ::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14;

  using __c__DisplayClass14_0 = ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0;

  using __c__DisplayClass15_0 = ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0;

  using __c__DisplayClass16_0 = ::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0;

  /// @brief Field _assetFileToAssetDetails, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__assetFileToAssetDetails,
                      put =
                          __cordl_internal_set__assetFileToAssetDetails)) ::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>* _assetFileToAssetDetails;

  /// @brief Field _assetIdToDownloadingData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__assetIdToDownloadingData, put = __cordl_internal_set__assetIdToDownloadingData)) ::System::Collections::Generic::Dictionary_2<
      uint64_t, ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData>* _assetIdToDownloadingData;

  /// @brief Field _downloadedAssetBundleFiles, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__downloadedAssetBundleFiles,
                      put = __cordl_internal_set__downloadedAssetBundleFiles)) ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _downloadedAssetBundleFiles;

  /// @brief Field _downloadingAssetBundlesQueue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__downloadingAssetBundlesQueue,
                      put = __cordl_internal_set__downloadingAssetBundlesQueue)) ::Priority_Queue::SimplePriorityQueue_2<uint64_t, float_t>* _downloadingAssetBundlesQueue;

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

  /// @brief Method CancelDownload, addr 0x26e3bd0, size 0xe8, virtual false, abstract: false, final false
  inline void CancelDownload(uint64_t assetId);

  /// @brief Method GetAssetBundleFileForBeatmapLevelAsync, addr 0x26e3cb8, size 0x114, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GetAssetBundleFileForBeatmapLevelAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                                                 ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetDownloadAssetBundleFileAsync, addr 0x26e3fdc, size 0x5dc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GetDownloadAssetBundleFileAsync(::StringW levelId, ::Oculus::Platform::Models::AssetDetails* assetDetails,
                                                                                                                          ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method HandleAssetFileDownloadUpdate, addr 0x26e4684, size 0x46c, virtual false, abstract: false, final false
  inline void HandleAssetFileDownloadUpdate(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>* msg);

  /// @brief Method MarkDownloadCompleted, addr 0x26e4af0, size 0x1dc, virtual false, abstract: false, final false
  inline void MarkDownloadCompleted(uint64_t assetId, bool isError, ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData downloadingData);

  static inline ::GlobalNamespace::OculusBeatmapDataAssetFileModel* New_ctor(::GlobalNamespace::OculusPlatformAdditionalContentModel* oculusPlatformAdditionalContentModel);

  /// @brief Method ReloadAssetDetailsForAllLevelsAsync, addr 0x26e3ee0, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ReloadAssetDetailsForAllLevelsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method RemoveFromDownloadingDataStructures, addr 0x26e4ccc, size 0x21c, virtual false, abstract: false, final false
  inline bool RemoveFromDownloadingDataStructures(uint64_t assetId);

  /// @brief Method Tick, addr 0x26e3998, size 0x1bc, virtual true, abstract: false, final true
  inline void Tick();

  /// @brief Method TryDeleteAssetBundleFileForBeatmapLevelAsync, addr 0x26e3dcc, size 0x114, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* TryDeleteAssetBundleFileForBeatmapLevelAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                                                ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method <Tick>g__GetAssetTime|12_0, addr 0x26e3b54, size 0x7c, virtual false, abstract: false, final false
  inline float_t _Tick_g__GetAssetTime_12_0(uint64_t id);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>* const& __cordl_internal_get__assetFileToAssetDetails() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>*& __cordl_internal_get__assetFileToAssetDetails();

  constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData>* const&
  __cordl_internal_get__assetIdToDownloadingData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData>*& __cordl_internal_get__assetIdToDownloadingData();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* const& __cordl_internal_get__downloadedAssetBundleFiles() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__downloadedAssetBundleFiles();

  constexpr ::Priority_Queue::SimplePriorityQueue_2<uint64_t, float_t>* const& __cordl_internal_get__downloadingAssetBundlesQueue() const;

  constexpr ::Priority_Queue::SimplePriorityQueue_2<uint64_t, float_t>*& __cordl_internal_get__downloadingAssetBundlesQueue();

  constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel* const& __cordl_internal_get__oculusPlatformAdditionalContentModel() const;

  constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel*& __cordl_internal_get__oculusPlatformAdditionalContentModel();

  constexpr ::System::Threading::SemaphoreSlim* const& __cordl_internal_get__reloadAssetDetailsSemaphoreSlim() const;

  constexpr ::System::Threading::SemaphoreSlim*& __cordl_internal_get__reloadAssetDetailsSemaphoreSlim();

  constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* const& __cordl_internal_get_levelDataAssetDownloadUpdateEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*& __cordl_internal_get_levelDataAssetDownloadUpdateEvent();

  constexpr void __cordl_internal_set__assetFileToAssetDetails(::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>* value);

  constexpr void
  __cordl_internal_set__assetIdToDownloadingData(::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData>* value);

  constexpr void __cordl_internal_set__downloadedAssetBundleFiles(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__downloadingAssetBundlesQueue(::Priority_Queue::SimplePriorityQueue_2<uint64_t, float_t>* value);

  constexpr void __cordl_internal_set__oculusPlatformAdditionalContentModel(::GlobalNamespace::OculusPlatformAdditionalContentModel* value);

  constexpr void __cordl_internal_set__reloadAssetDetailsSemaphoreSlim(::System::Threading::SemaphoreSlim* value);

  constexpr void __cordl_internal_set_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

  /// @brief Method .ctor, addr 0x26e37b8, size 0x1e0, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OculusPlatformAdditionalContentModel* oculusPlatformAdditionalContentModel);

  /// @brief Method add_levelDataAssetDownloadUpdateEvent, addr 0x26e3658, size 0xb0, virtual true, abstract: false, final true
  inline void add_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

  /// @brief Convert to "::GlobalNamespace::IBeatmapDataAssetFileModel"
  constexpr ::GlobalNamespace::IBeatmapDataAssetFileModel* i___GlobalNamespace__IBeatmapDataAssetFileModel() noexcept;

  /// @brief Convert to "::Zenject::ITickable"
  constexpr ::Zenject::ITickable* i___Zenject__ITickable() noexcept;

  /// @brief Method remove_levelDataAssetDownloadUpdateEvent, addr 0x26e3708, size 0xb0, virtual true, abstract: false, final true
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13139 };

  /// @brief Field kMaxTimeoutBeforeFail offset 0xffffffff size 0x4
  static constexpr float_t kMaxTimeoutBeforeFail{ static_cast<float_t>(15.0f) };

  /// @brief Field levelDataAssetDownloadUpdateEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* ___levelDataAssetDownloadUpdateEvent;

  /// @brief Field _downloadedAssetBundleFiles, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____downloadedAssetBundleFiles;

  /// @brief Field _downloadingAssetBundlesQueue, offset: 0x20, size: 0x8, def value: None
  ::Priority_Queue::SimplePriorityQueue_2<uint64_t, float_t>* ____downloadingAssetBundlesQueue;

  /// @brief Field _assetIdToDownloadingData, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData>* ____assetIdToDownloadingData;

  /// @brief Field _reloadAssetDetailsSemaphoreSlim, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ____reloadAssetDetailsSemaphoreSlim;

  /// @brief Field _assetFileToAssetDetails, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>* ____assetFileToAssetDetails;

  /// @brief Field _oculusPlatformAdditionalContentModel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformAdditionalContentModel* ____oculusPlatformAdditionalContentModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ___levelDataAssetDownloadUpdateEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ____downloadedAssetBundleFiles) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ____downloadingAssetBundlesQueue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ____assetIdToDownloadingData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ____reloadAssetDetailsSemaphoreSlim) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ____assetFileToAssetDetails) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ____oculusPlatformAdditionalContentModel) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusBeatmapDataAssetFileModel, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusBeatmapDataAssetFileModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusBeatmapDataAssetFileModel*, "", "OculusBeatmapDataAssetFileModel");
NEED_NO_BOX(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass14_0*, "", "OculusBeatmapDataAssetFileModel/<>c__DisplayClass14_0");
NEED_NO_BOX(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass15_0*, "", "OculusBeatmapDataAssetFileModel/<>c__DisplayClass15_0");
NEED_NO_BOX(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusBeatmapDataAssetFileModel___c__DisplayClass16_0*, "", "OculusBeatmapDataAssetFileModel/<>c__DisplayClass16_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusBeatmapDataAssetFileModel_AssetBundleDownloadingData, "", "OculusBeatmapDataAssetFileModel/AssetBundleDownloadingData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusBeatmapDataAssetFileModel__GetAssetBundleFileForBeatmapLevelAsync_d__13, "",
                       "OculusBeatmapDataAssetFileModel/<GetAssetBundleFileForBeatmapLevelAsync>d__13");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusBeatmapDataAssetFileModel__ReloadAssetDetailsForAllLevelsAsync_d__15, "", "OculusBeatmapDataAssetFileModel/<ReloadAssetDetailsForAllLevelsAsync>d__15");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusBeatmapDataAssetFileModel__TryDeleteAssetBundleFileForBeatmapLevelAsync_d__14, "",
                       "OculusBeatmapDataAssetFileModel/<TryDeleteAssetBundleFileForBeatmapLevelAsync>d__14");
