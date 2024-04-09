#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusBeatmapDataAssetFileModel)
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
namespace GlobalNamespace {
class IBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate;
}
namespace GlobalNamespace {
class OculusPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
class __OculusBeatmapDataAssetFileModel__LevelDownloadingData;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13;
}
namespace GlobalNamespace {
class __OculusBeatmapDataAssetFileModel____c__DisplayClass13_0;
}
namespace GlobalNamespace {
class __OculusBeatmapDataAssetFileModel____c__DisplayClass15_0;
}
namespace GlobalNamespace {
class __OculusBeatmapDataAssetFileModel____c__DisplayClass16_0;
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
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
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
class __OculusBeatmapDataAssetFileModel__LevelDownloadingData;
}
namespace GlobalNamespace {
class __OculusBeatmapDataAssetFileModel____c__DisplayClass13_0;
}
namespace GlobalNamespace {
class __OculusBeatmapDataAssetFileModel____c__DisplayClass15_0;
}
namespace GlobalNamespace {
class __OculusBeatmapDataAssetFileModel____c__DisplayClass16_0;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusBeatmapDataAssetFileModel);
MARK_REF_PTR_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData);
MARK_REF_PTR_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0);
MARK_VAL_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14);
MARK_VAL_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16);
MARK_VAL_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15);
MARK_VAL_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13);
// Type: ::LevelDownloadingData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusBeatmapDataAssetFileModel::LevelDownloadingData*
class CORDL_TYPE __OculusBeatmapDataAssetFileModel__LevelDownloadingData : public ::System::Object {
public:
  // Declarations
  /// @brief Field assetBundlePath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_assetBundlePath, put = __cordl_internal_set_assetBundlePath))::StringW assetBundlePath;

  /// @brief Field downloadAssetBundleFileTCS, offset 0x20, size 0x8
  __declspec(
      property(get = __cordl_internal_get_downloadAssetBundleFileTCS,
               put = __cordl_internal_set_downloadAssetBundleFileTCS))::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* downloadAssetBundleFileTCS;

  /// @brief Field levelId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelId, put = __cordl_internal_set_levelId))::StringW levelId;

  static inline ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData* New_ctor(::StringW levelId, ::StringW assetBundlePath);

  constexpr ::StringW const& __cordl_internal_get_assetBundlePath() const;

  constexpr ::StringW& __cordl_internal_get_assetBundlePath();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*& __cordl_internal_get_downloadAssetBundleFileTCS();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*> const&
  __cordl_internal_get_downloadAssetBundleFileTCS() const;

  constexpr ::StringW const& __cordl_internal_get_levelId() const;

  constexpr ::StringW& __cordl_internal_get_levelId();

  constexpr void __cordl_internal_set_assetBundlePath(::StringW value);

  constexpr void __cordl_internal_set_downloadAssetBundleFileTCS(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* value);

  constexpr void __cordl_internal_set_levelId(::StringW value);

  /// @brief Method .ctor, addr 0x13e5c6c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelId, ::StringW assetBundlePath);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusBeatmapDataAssetFileModel__LevelDownloadingData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel__LevelDownloadingData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusBeatmapDataAssetFileModel__LevelDownloadingData(__OculusBeatmapDataAssetFileModel__LevelDownloadingData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel__LevelDownloadingData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusBeatmapDataAssetFileModel__LevelDownloadingData(__OculusBeatmapDataAssetFileModel__LevelDownloadingData const&) = delete;

  /// @brief Field levelId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___levelId;

  /// @brief Field assetBundlePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___assetBundlePath;

  /// @brief Field downloadAssetBundleFileTCS, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* ___downloadAssetBundleFileTCS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData, ___levelId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData, ___assetBundlePath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData, ___downloadAssetBundleFileTCS) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass13_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusBeatmapDataAssetFileModel::<>c__DisplayClass13_0*
class CORDL_TYPE __OculusBeatmapDataAssetFileModel____c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this;

  /// @brief Field cancellationToken, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_cancellationToken, put = __cordl_internal_set_cancellationToken))::System::Threading::CancellationToken cancellationToken;

  /// @brief Field levelId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_levelId, put = __cordl_internal_set_levelId))::StringW levelId;

  /// @brief Field taskSource, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_taskSource, put = __cordl_internal_set_taskSource))::System::Threading::Tasks::TaskCompletionSource_1<bool>* taskSource;

  static inline ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0* New_ctor();

  /// @brief Method <TryDeleteAssetBundleFileForBeatmapLevelAsync>b__0, addr 0x13e6198, size 0x15c, virtual false, abstract: false, final false
  inline void _TryDeleteAssetBundleFileForBeatmapLevelAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* msg);

  constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken();

  constexpr ::StringW const& __cordl_internal_get_levelId() const;

  constexpr ::StringW& __cordl_internal_get_levelId();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_taskSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& __cordl_internal_get_taskSource() const;

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel* value);

  constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value);

  constexpr void __cordl_internal_set_levelId(::StringW value);

  constexpr void __cordl_internal_set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  /// @brief Method .ctor, addr 0x13e6190, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusBeatmapDataAssetFileModel____c__DisplayClass13_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusBeatmapDataAssetFileModel____c__DisplayClass13_0(__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusBeatmapDataAssetFileModel____c__DisplayClass13_0(__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OculusBeatmapDataAssetFileModel* _____4__this;

  /// @brief Field levelId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___levelId;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___cancellationToken;

  /// @brief Field taskSource, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ___taskSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0, ___levelId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0, ___cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0, ___taskSource) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<TryDeleteAssetBundleFileForBeatmapLevelAsync>d__13
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OculusBeatmapDataAssetFileModel::<TryDeleteAssetBundleFileForBeatmapLevelAsync>d__13
struct CORDL_TYPE __OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x13e62f4, size 0x488, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x13e677c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty:
  // "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*", modifiers: "",
  // def_value: None }, CppParam { name: "_deleted_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                                                   ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this,
                                                                                                   ::System::Threading::CancellationToken cancellationToken,
                                                                                                   ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                   ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0* __8__1,
                                                                                                   bool _deleted_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

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

  /// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0* __8__1;

  /// @brief Field <deleted>5__2, offset: 0x40, size: 0x1, def value: None
  bool _deleted_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13, beatmapLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13, __8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13, _deleted_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13, __u__1) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetAssetBundleFileForBeatmapLevelAsync>d__14
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OculusBeatmapDataAssetFileModel::<GetAssetBundleFileForBeatmapLevelAsync>d__14
struct CORDL_TYPE __OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x13e67d4, size 0x974, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x13e7148, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty:
  // "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: None },
  // CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_levelId_5__2", ty: "::StringW", modifiers: "", def_value:
  // None }, CppParam { name: "_assetFile_5__3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
  // def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
  constexpr __OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
      ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this, ::System::Threading::CancellationToken cancellationToken, ::StringW _levelId_5__2, ::StringW _assetFile_5__3,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__3) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder;

  /// @brief Field beatmapLevel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <levelId>5__2, offset: 0x38, size: 0x8, def value: None
  ::StringW _levelId_5__2;

  /// @brief Field <assetFile>5__3, offset: 0x40, size: 0x8, def value: None
  ::StringW _assetFile_5__3;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  /// @brief Field <>u__3, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14, beatmapLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14, _levelId_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14, _assetFile_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14, __u__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14, __u__3) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass15_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusBeatmapDataAssetFileModel::<>c__DisplayClass15_0*
class CORDL_TYPE __OculusBeatmapDataAssetFileModel____c__DisplayClass15_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this;

  /// @brief Field cancellationToken, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cancellationToken, put = __cordl_internal_set_cancellationToken))::System::Threading::CancellationToken cancellationToken;

  /// @brief Field taskSource, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_taskSource, put = __cordl_internal_set_taskSource))::System::Threading::Tasks::TaskCompletionSource_1<bool>* taskSource;

  static inline ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0* New_ctor();

  /// @brief Method <ReloadAssetDetailsForAllLevelsAsync>b__0, addr 0x13e71a8, size 0x3fc, virtual false, abstract: false, final false
  inline void _ReloadAssetDetailsForAllLevelsAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>* getListMsg);

  constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_taskSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& __cordl_internal_get_taskSource() const;

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel* value);

  constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value);

  constexpr void __cordl_internal_set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  /// @brief Method .ctor, addr 0x13e71a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusBeatmapDataAssetFileModel____c__DisplayClass15_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusBeatmapDataAssetFileModel____c__DisplayClass15_0(__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusBeatmapDataAssetFileModel____c__DisplayClass15_0(__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0 const&) = delete;

  /// @brief Field cancellationToken, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___cancellationToken;

  /// @brief Field taskSource, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ___taskSource;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusBeatmapDataAssetFileModel* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0, ___cancellationToken) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0, ___taskSource) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ReloadAssetDetailsForAllLevelsAsync>d__15
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OculusBeatmapDataAssetFileModel::<ReloadAssetDetailsForAllLevelsAsync>d__15
struct CORDL_TYPE __OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x13e75a4, size 0x318, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x13e78bc, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                                          ::System::Threading::CancellationToken cancellationToken,
                                                                                          ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this,
                                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass16_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusBeatmapDataAssetFileModel::<>c__DisplayClass16_0*
class CORDL_TYPE __OculusBeatmapDataAssetFileModel____c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this;

  /// @brief Field assetDetails, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_assetDetails, put = __cordl_internal_set_assetDetails))::Oculus::Platform::Models::AssetDetails* assetDetails;

  /// @brief Field taskSource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_taskSource,
                      put = __cordl_internal_set_taskSource))::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* taskSource;

  static inline ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0* New_ctor();

  /// @brief Method <GetDownloadAssetBundleFileAsync>b__0, addr 0x13e791c, size 0x10e0, virtual false, abstract: false, final false
  inline void _GetDownloadAssetBundleFileAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* msg);

  constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> const& __cordl_internal_get___4__this() const;

  constexpr ::Oculus::Platform::Models::AssetDetails*& __cordl_internal_get_assetDetails();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::AssetDetails*> const& __cordl_internal_get_assetDetails() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*& __cordl_internal_get_taskSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*> const& __cordl_internal_get_taskSource() const;

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel* value);

  constexpr void __cordl_internal_set_assetDetails(::Oculus::Platform::Models::AssetDetails* value);

  constexpr void __cordl_internal_set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* value);

  /// @brief Method .ctor, addr 0x13e7914, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusBeatmapDataAssetFileModel____c__DisplayClass16_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusBeatmapDataAssetFileModel____c__DisplayClass16_0(__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusBeatmapDataAssetFileModel____c__DisplayClass16_0(__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0 const&) = delete;

  /// @brief Field taskSource, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* ___taskSource;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OculusBeatmapDataAssetFileModel* _____4__this;

  /// @brief Field assetDetails, offset: 0x20, size: 0x8, def value: None
  ::Oculus::Platform::Models::AssetDetails* ___assetDetails;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0, ___taskSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0, ___assetDetails) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetDownloadAssetBundleFileAsync>d__16
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OculusBeatmapDataAssetFileModel::<GetDownloadAssetBundleFileAsync>d__16
struct CORDL_TYPE __OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x13e89fc, size 0x790, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x13e918c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: None }, CppParam { name: "assetDetails", ty: "::Oculus::Platform::Models::AssetDetails*", modifiers: "",
  // def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
  constexpr __OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder,
      ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this, ::Oculus::Platform::Models::AssetDetails* assetDetails, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this;

  /// @brief Field assetDetails, offset: 0x28, size: 0x8, def value: None
  ::Oculus::Platform::Models::AssetDetails* assetDetails;

  /// @brief Field levelId, offset: 0x30, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16, assetDetails) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusBeatmapDataAssetFileModel
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusBeatmapDataAssetFileModel*
class CORDL_TYPE OculusBeatmapDataAssetFileModel : public ::System::Object {
public:
  // Declarations
  using LevelDownloadingData = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData;

  using _GetAssetBundleFileForBeatmapLevelAsync_d__14 = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14;

  using _GetDownloadAssetBundleFileAsync_d__16 = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16;

  using _ReloadAssetDetailsForAllLevelsAsync_d__15 = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15;

  using _TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13 = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13;

  using __c__DisplayClass13_0 = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0;

  using __c__DisplayClass15_0 = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0;

  using __c__DisplayClass16_0 = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0;

  /// @brief Field _assetFileToAssetDetails, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__assetFileToAssetDetails,
                      put = __cordl_internal_set__assetFileToAssetDetails))::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>* _assetFileToAssetDetails;

  /// @brief Field _assetIdToDownloadingData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__assetIdToDownloadingData, put = __cordl_internal_set__assetIdToDownloadingData))::System::Collections::Generic::Dictionary_2<
      uint64_t, ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>* _assetIdToDownloadingData;

  /// @brief Field _downloadedAssetBundleFiles, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__downloadedAssetBundleFiles,
                      put = __cordl_internal_set__downloadedAssetBundleFiles))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _downloadedAssetBundleFiles;

  /// @brief Field _lastAssetFileDownloadUpdateForAssetIds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lastAssetFileDownloadUpdateForAssetIds, put = __cordl_internal_set__lastAssetFileDownloadUpdateForAssetIds))::System::Collections::Generic::
      Dictionary_2<uint64_t, ::Oculus::Platform::Models::AssetFileDownloadUpdate*>* _lastAssetFileDownloadUpdateForAssetIds;

  /// @brief Field _lastAssetFileDownloadUpdateTime, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__lastAssetFileDownloadUpdateTime, put = __cordl_internal_set__lastAssetFileDownloadUpdateTime)) float_t _lastAssetFileDownloadUpdateTime;

  /// @brief Field _oculusPlatformAdditionalContentModel, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusPlatformAdditionalContentModel,
                      put = __cordl_internal_set__oculusPlatformAdditionalContentModel))::GlobalNamespace::OculusPlatformAdditionalContentModel* _oculusPlatformAdditionalContentModel;

  /// @brief Field _semaphoreSlim, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__semaphoreSlim, put = __cordl_internal_set__semaphoreSlim))::System::Threading::SemaphoreSlim* _semaphoreSlim;

  /// @brief Field levelDataAssetDownloadUpdateEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelDataAssetDownloadUpdateEvent,
                      put = __cordl_internal_set_levelDataAssetDownloadUpdateEvent))::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* levelDataAssetDownloadUpdateEvent;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapDataAssetFileModel"
  constexpr operator ::GlobalNamespace::IBeatmapDataAssetFileModel*() noexcept;

  /// @brief Method GetAssetBundleFileForBeatmapLevelAsync, addr 0x13e583c, size 0x110, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GetAssetBundleFileForBeatmapLevelAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetDownloadAssetBundleFileAsync, addr 0x13e5a50, size 0x10c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GetDownloadAssetBundleFileAsync(::StringW levelId, ::Oculus::Platform::Models::AssetDetails* assetDetails,
                                                                                                                          ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetTaskCompletionSourceForDownload, addr 0x13e5b5c, size 0x110, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* GetTaskCompletionSourceForDownload(::StringW levelId,
                                                                                                                                             ::Oculus::Platform::Models::AssetDetails* assetDetail);

  /// @brief Method HandleAssetFileDownloadUpdate, addr 0x13e5d00, size 0x490, virtual false, abstract: false, final false
  inline void HandleAssetFileDownloadUpdate(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>* msg);

  static inline ::GlobalNamespace::OculusBeatmapDataAssetFileModel* New_ctor(::GlobalNamespace::OculusPlatformAdditionalContentModel* oculusPlatformAdditionalContentModel);

  /// @brief Method ReloadAssetDetailsForAllLevelsAsync, addr 0x13e594c, size 0x104, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ReloadAssetDetailsForAllLevelsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method TryDeleteAssetBundleFileForBeatmapLevelAsync, addr 0x13e572c, size 0x110, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* TryDeleteAssetBundleFileForBeatmapLevelAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                ::System::Threading::CancellationToken cancellationToken);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>*& __cordl_internal_get__assetFileToAssetDetails();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>*> const&
  __cordl_internal_get__assetFileToAssetDetails() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>*& __cordl_internal_get__assetIdToDownloadingData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>*> const&
  __cordl_internal_get__assetIdToDownloadingData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__downloadedAssetBundleFiles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__downloadedAssetBundleFiles() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Models::AssetFileDownloadUpdate*>*& __cordl_internal_get__lastAssetFileDownloadUpdateForAssetIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Models::AssetFileDownloadUpdate*>*> const&
  __cordl_internal_get__lastAssetFileDownloadUpdateForAssetIds() const;

  constexpr float_t const& __cordl_internal_get__lastAssetFileDownloadUpdateTime() const;

  constexpr float_t& __cordl_internal_get__lastAssetFileDownloadUpdateTime();

  constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel*& __cordl_internal_get__oculusPlatformAdditionalContentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformAdditionalContentModel*> const& __cordl_internal_get__oculusPlatformAdditionalContentModel() const;

  constexpr ::System::Threading::SemaphoreSlim*& __cordl_internal_get__semaphoreSlim();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& __cordl_internal_get__semaphoreSlim() const;

  constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*& __cordl_internal_get_levelDataAssetDownloadUpdateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*> const& __cordl_internal_get_levelDataAssetDownloadUpdateEvent() const;

  constexpr void __cordl_internal_set__assetFileToAssetDetails(::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>* value);

  constexpr void
  __cordl_internal_set__assetIdToDownloadingData(::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>* value);

  constexpr void __cordl_internal_set__downloadedAssetBundleFiles(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__lastAssetFileDownloadUpdateForAssetIds(::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Models::AssetFileDownloadUpdate*>* value);

  constexpr void __cordl_internal_set__lastAssetFileDownloadUpdateTime(float_t value);

  constexpr void __cordl_internal_set__oculusPlatformAdditionalContentModel(::GlobalNamespace::OculusPlatformAdditionalContentModel* value);

  constexpr void __cordl_internal_set__semaphoreSlim(::System::Threading::SemaphoreSlim* value);

  constexpr void __cordl_internal_set_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

  /// @brief Method .ctor, addr 0x13e5548, size 0x1e4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OculusPlatformAdditionalContentModel* oculusPlatformAdditionalContentModel);

  /// @brief Method add_levelDataAssetDownloadUpdateEvent, addr 0x13e53e8, size 0xb0, virtual true, abstract: false, final true
  inline void add_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

  /// @brief Convert to "::GlobalNamespace::IBeatmapDataAssetFileModel"
  constexpr ::GlobalNamespace::IBeatmapDataAssetFileModel* i___GlobalNamespace__IBeatmapDataAssetFileModel() noexcept;

  /// @brief Method remove_levelDataAssetDownloadUpdateEvent, addr 0x13e5498, size 0xb0, virtual true, abstract: false, final true
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

  /// @brief Field levelDataAssetDownloadUpdateEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* ___levelDataAssetDownloadUpdateEvent;

  /// @brief Field _assetIdToDownloadingData, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>* ____assetIdToDownloadingData;

  /// @brief Field _downloadedAssetBundleFiles, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____downloadedAssetBundleFiles;

  /// @brief Field _lastAssetFileDownloadUpdateForAssetIds, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Models::AssetFileDownloadUpdate*>* ____lastAssetFileDownloadUpdateForAssetIds;

  /// @brief Field _lastAssetFileDownloadUpdateTime, offset: 0x30, size: 0x4, def value: None
  float_t ____lastAssetFileDownloadUpdateTime;

  /// @brief Field _semaphoreSlim, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ____semaphoreSlim;

  /// @brief Field _assetFileToAssetDetails, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>* ____assetFileToAssetDetails;

  /// @brief Field _oculusPlatformAdditionalContentModel, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::OculusPlatformAdditionalContentModel* ____oculusPlatformAdditionalContentModel;

  /// @brief Field kMaxTimeOutBeforeFail offset 0xffffffff size 0x4
  static constexpr float_t kMaxTimeOutBeforeFail{ 120.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusBeatmapDataAssetFileModel, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ___levelDataAssetDownloadUpdateEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ____assetIdToDownloadingData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ____downloadedAssetBundleFiles) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ____lastAssetFileDownloadUpdateForAssetIds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ____lastAssetFileDownloadUpdateTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ____semaphoreSlim) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ____assetFileToAssetDetails) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusBeatmapDataAssetFileModel, ____oculusPlatformAdditionalContentModel) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusBeatmapDataAssetFileModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusBeatmapDataAssetFileModel*, "", "OculusBeatmapDataAssetFileModel");
NEED_NO_BOX(::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*, "", "OculusBeatmapDataAssetFileModel/LevelDownloadingData");
NEED_NO_BOX(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*, "", "OculusBeatmapDataAssetFileModel/<>c__DisplayClass13_0");
NEED_NO_BOX(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0*, "", "OculusBeatmapDataAssetFileModel/<>c__DisplayClass15_0");
NEED_NO_BOX(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0*, "", "OculusBeatmapDataAssetFileModel/<>c__DisplayClass16_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForBeatmapLevelAsync_d__14, "",
                       "OculusBeatmapDataAssetFileModel/<GetAssetBundleFileForBeatmapLevelAsync>d__14");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16, "", "OculusBeatmapDataAssetFileModel/<GetDownloadAssetBundleFileAsync>d__16");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15, "",
                       "OculusBeatmapDataAssetFileModel/<ReloadAssetDetailsForAllLevelsAsync>d__15");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForBeatmapLevelAsync_d__13, "",
                       "OculusBeatmapDataAssetFileModel/<TryDeleteAssetBundleFileForBeatmapLevelAsync>d__13");
