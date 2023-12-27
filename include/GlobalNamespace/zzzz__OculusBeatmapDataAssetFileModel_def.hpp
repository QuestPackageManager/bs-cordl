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
class IPreviewBeatmapLevel;
}
namespace Oculus::Platform::Models {
class AssetDetails;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace GlobalNamespace {
class __OculusBeatmapDataAssetFileModel__LevelDownloadingData;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadUpdate;
}
namespace GlobalNamespace {
class __OculusBeatmapDataAssetFileModel____c__DisplayClass15_0;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15;
}
namespace GlobalNamespace {
class __OculusBeatmapDataAssetFileModel____c__DisplayClass13_0;
}
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace GlobalNamespace {
class IBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
class OculusPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13;
}
namespace GlobalNamespace {
class __OculusBeatmapDataAssetFileModel____c__DisplayClass16_0;
}
namespace System {
template <typename T> class Action_1;
}
namespace Oculus::Platform::Models {
class AssetFileDeleteResult;
}
namespace Oculus::Platform::Models {
class AssetDetailsList;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadResult;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
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
struct __OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15;
}
namespace GlobalNamespace {
struct __OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusBeatmapDataAssetFileModel);
MARK_REF_PTR_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData);
MARK_REF_PTR_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0);
MARK_VAL_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14);
MARK_VAL_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16);
MARK_VAL_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15);
MARK_VAL_T(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13);
// Type: ::LevelDownloadingData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4529))
// CS Name: ::OculusBeatmapDataAssetFileModel::LevelDownloadingData*
class CORDL_TYPE __OculusBeatmapDataAssetFileModel__LevelDownloadingData : public ::System::Object {
public:
  // Declarations
  /// @brief Field levelId, offset 0x10, size 0x8
  __declspec(property(get = __get_levelId, put = __set_levelId))::StringW levelId;

  /// @brief Field assetBundlePath, offset 0x18, size 0x8
  __declspec(property(get = __get_assetBundlePath, put = __set_assetBundlePath))::StringW assetBundlePath;

  /// @brief Field downloadAssetBundleFileTCS, offset 0x20, size 0x8
  __declspec(property(get = __get_downloadAssetBundleFileTCS,
                      put = __set_downloadAssetBundleFileTCS))::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* downloadAssetBundleFileTCS;

  constexpr ::StringW& __get_levelId();

  constexpr ::StringW const& __get_levelId() const;

  constexpr void __set_levelId(::StringW value);

  constexpr ::StringW& __get_assetBundlePath();

  constexpr ::StringW const& __get_assetBundlePath() const;

  constexpr void __set_assetBundlePath(::StringW value);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*& __get_downloadAssetBundleFileTCS();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*> const& __get_downloadAssetBundleFileTCS() const;

  constexpr void __set_downloadAssetBundleFileTCS(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* value);

  static inline ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData* New_ctor(::StringW levelId, ::StringW assetBundlePath);

  /// @brief Method .ctor addr 0x2365104 size 0x94 virtual false final false
  inline void _ctor(::StringW levelId, ::StringW assetBundlePath);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel__LevelDownloadingData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusBeatmapDataAssetFileModel__LevelDownloadingData(__OculusBeatmapDataAssetFileModel__LevelDownloadingData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel__LevelDownloadingData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusBeatmapDataAssetFileModel__LevelDownloadingData(__OculusBeatmapDataAssetFileModel__LevelDownloadingData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusBeatmapDataAssetFileModel__LevelDownloadingData();

public:
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

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass13_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2677))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4530))
// CS Name: ::OculusBeatmapDataAssetFileModel::<>c__DisplayClass13_0*
class CORDL_TYPE __OculusBeatmapDataAssetFileModel____c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this;

  /// @brief Field levelId, offset 0x18, size 0x8
  __declspec(property(get = __get_levelId, put = __set_levelId))::StringW levelId;

  /// @brief Field cancellationToken, offset 0x20, size 0x8
  __declspec(property(get = __get_cancellationToken, put = __set_cancellationToken))::System::Threading::CancellationToken cancellationToken;

  /// @brief Field taskSource, offset 0x28, size 0x8
  __declspec(property(get = __get_taskSource, put = __set_taskSource))::System::Threading::Tasks::TaskCompletionSource_1<bool>* taskSource;

  constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel* value);

  constexpr ::StringW& __get_levelId();

  constexpr ::StringW const& __get_levelId() const;

  constexpr void __set_levelId(::StringW value);

  constexpr ::System::Threading::CancellationToken& __get_cancellationToken();

  constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

  constexpr void __set_cancellationToken(::System::Threading::CancellationToken value);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __get_taskSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& __get_taskSource() const;

  constexpr void __set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  static inline ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0* New_ctor();

  /// @brief Method .ctor addr 0x23655fc size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <TryDeleteAssetBundleFileForPreviewLevelAsync>b__0 addr 0x2365604 size 0x15c virtual false final false
  inline void _TryDeleteAssetBundleFileForPreviewLevelAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* msg);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusBeatmapDataAssetFileModel____c__DisplayClass13_0(__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusBeatmapDataAssetFileModel____c__DisplayClass13_0(__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusBeatmapDataAssetFileModel____c__DisplayClass13_0();

public:
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

} // namespace GlobalNamespace
// Type: ::<TryDeleteAssetBundleFileForPreviewLevelAsync>d__13
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 105 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4531)) CS Name: ::OculusBeatmapDataAssetFileModel::<TryDeleteAssetBundleFileForPreviewLevelAsync>d__13
struct CORDL_TYPE __OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2365760 size 0x564 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2365ce0 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty:
  // "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0*",
  // modifiers: "", def_value: None }, CppParam { name: "_deleted_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                                                   ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this,
                                                                                                   ::System::Threading::CancellationToken cancellationToken,
                                                                                                   ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                                                   ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0* __8__1,
                                                                                                   bool _deleted_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field previewBeatmapLevel, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetAssetBundleFileForPreviewLevelAsync>d__14
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 882 }), TypeDefinitionIndex(TypeDefinitionIndex(4413)),
// TypeDefinitionIndex(TypeDefinitionIndex(3393)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3402)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 882 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4532)) CS Name: ::OculusBeatmapDataAssetFileModel::<GetAssetBundleFileForPreviewLevelAsync>d__14
struct CORDL_TYPE __OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2365d38 size 0xa20 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2366758 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty:
  // "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_levelId_5__2", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "_assetFile_5__3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
  constexpr __OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder,
      ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this, ::System::Threading::CancellationToken cancellationToken,
      ::StringW _levelId_5__2, ::StringW _assetFile_5__3, ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__3) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder;

  /// @brief Field previewBeatmapLevel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass15_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4533))
// CS Name: ::OculusBeatmapDataAssetFileModel::<>c__DisplayClass15_0*
class CORDL_TYPE __OculusBeatmapDataAssetFileModel____c__DisplayClass15_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field cancellationToken, offset 0x10, size 0x8
  __declspec(property(get = __get_cancellationToken, put = __set_cancellationToken))::System::Threading::CancellationToken cancellationToken;

  /// @brief Field taskSource, offset 0x18, size 0x8
  __declspec(property(get = __get_taskSource, put = __set_taskSource))::System::Threading::Tasks::TaskCompletionSource_1<bool>* taskSource;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this;

  constexpr ::System::Threading::CancellationToken& __get_cancellationToken();

  constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

  constexpr void __set_cancellationToken(::System::Threading::CancellationToken value);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __get_taskSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& __get_taskSource() const;

  constexpr void __set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel* value);

  static inline ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0* New_ctor();

  /// @brief Method .ctor addr 0x23667b0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ReloadAssetDetailsForAllLevelsAsync>b__0 addr 0x23667b8 size 0x3fc virtual false final false
  inline void _ReloadAssetDetailsForAllLevelsAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>* getListMsg);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusBeatmapDataAssetFileModel____c__DisplayClass15_0(__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusBeatmapDataAssetFileModel____c__DisplayClass15_0(__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusBeatmapDataAssetFileModel____c__DisplayClass15_0();

public:
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

} // namespace GlobalNamespace
// Type: ::<ReloadAssetDetailsForAllLevelsAsync>d__15
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 105
// }), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4534)) CS
// Name: ::OculusBeatmapDataAssetFileModel::<ReloadAssetDetailsForAllLevelsAsync>d__15
struct CORDL_TYPE __OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2366bb4 size 0x318 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2366ecc size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                                          ::System::Threading::CancellationToken cancellationToken,
                                                                                          ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this,
                                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15();

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

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass16_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4535))
// CS Name: ::OculusBeatmapDataAssetFileModel::<>c__DisplayClass16_0*
class CORDL_TYPE __OculusBeatmapDataAssetFileModel____c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field taskSource, offset 0x10, size 0x8
  __declspec(property(get = __get_taskSource, put = __set_taskSource))::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* taskSource;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this;

  /// @brief Field assetDetails, offset 0x20, size 0x8
  __declspec(property(get = __get_assetDetails, put = __set_assetDetails))::Oculus::Platform::Models::AssetDetails* assetDetails;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*& __get_taskSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>*> const& __get_taskSource() const;

  constexpr void __set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* value);

  constexpr ::GlobalNamespace::OculusBeatmapDataAssetFileModel*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusBeatmapDataAssetFileModel*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::OculusBeatmapDataAssetFileModel* value);

  constexpr ::Oculus::Platform::Models::AssetDetails*& __get_assetDetails();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::AssetDetails*> const& __get_assetDetails() const;

  constexpr void __set_assetDetails(::Oculus::Platform::Models::AssetDetails* value);

  static inline ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0* New_ctor();

  /// @brief Method .ctor addr 0x2366f24 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetDownloadAssetBundleFileAsync>b__0 addr 0x2366f2c size 0xcc virtual false final false
  inline void _GetDownloadAssetBundleFileAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* msg);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusBeatmapDataAssetFileModel____c__DisplayClass16_0(__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusBeatmapDataAssetFileModel____c__DisplayClass16_0(__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusBeatmapDataAssetFileModel____c__DisplayClass16_0();

public:
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

} // namespace GlobalNamespace
// Type: ::<GetDownloadAssetBundleFileAsync>d__16
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 882 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 882 }), TypeDefinitionIndex(TypeDefinitionIndex(4413))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4536)) CS Name: ::OculusBeatmapDataAssetFileModel::<GetDownloadAssetBundleFileAsync>d__16
struct CORDL_TYPE __OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2366ff8 size 0x760 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2367758 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusBeatmapDataAssetFileModel*", modifiers: "", def_value: None }, CppParam { name: "assetDetails", ty: "::Oculus::Platform::Models::AssetDetails*", modifiers: "",
  // def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
  constexpr __OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder,
      ::GlobalNamespace::OculusBeatmapDataAssetFileModel* __4__this, ::Oculus::Platform::Models::AssetDetails* assetDetails, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16();

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

} // namespace GlobalNamespace
// Type: ::OculusBeatmapDataAssetFileModel
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4537))
// CS Name: ::OculusBeatmapDataAssetFileModel*
class CORDL_TYPE OculusBeatmapDataAssetFileModel : public ::System::Object {
public:
  // Declarations
  using _GetDownloadAssetBundleFileAsync_d__16 = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16;

  using __c__DisplayClass16_0 = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0;

  using _ReloadAssetDetailsForAllLevelsAsync_d__15 = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15;

  using __c__DisplayClass15_0 = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0;

  using _GetAssetBundleFileForPreviewLevelAsync_d__14 = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14;

  using _TryDeleteAssetBundleFileForPreviewLevelAsync_d__13 = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13;

  using __c__DisplayClass13_0 = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0;

  using LevelDownloadingData = ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData;

  /// @brief Field levelDataAssetDownloadUpdateEvent, offset 0x10, size 0x8
  __declspec(property(get = __get_levelDataAssetDownloadUpdateEvent,
                      put = __set_levelDataAssetDownloadUpdateEvent))::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* levelDataAssetDownloadUpdateEvent;

  /// @brief Field _assetIdToDownloadinData, offset 0x18, size 0x8
  __declspec(property(get = __get__assetIdToDownloadinData, put = __set__assetIdToDownloadinData))::System::Collections::Generic::Dictionary_2<
      uint64_t, ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>* _assetIdToDownloadinData;

  /// @brief Field _downloadedAssetBundleFiles, offset 0x20, size 0x8
  __declspec(property(get = __get__downloadedAssetBundleFiles, put = __set__downloadedAssetBundleFiles))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _downloadedAssetBundleFiles;

  /// @brief Field _lastAssetFileDownloadUpdateForAssetIds, offset 0x28, size 0x8
  __declspec(property(get = __get__lastAssetFileDownloadUpdateForAssetIds, put = __set__lastAssetFileDownloadUpdateForAssetIds))::System::Collections::Generic::Dictionary_2<
      uint64_t, ::Oculus::Platform::Models::AssetFileDownloadUpdate*>* _lastAssetFileDownloadUpdateForAssetIds;

  /// @brief Field _lastAssetFileDownloadUpdateTime, offset 0x30, size 0x4
  __declspec(property(get = __get__lastAssetFileDownloadUpdateTime, put = __set__lastAssetFileDownloadUpdateTime)) float_t _lastAssetFileDownloadUpdateTime;

  /// @brief Field _semaphoreSlim, offset 0x38, size 0x8
  __declspec(property(get = __get__semaphoreSlim, put = __set__semaphoreSlim))::System::Threading::SemaphoreSlim* _semaphoreSlim;

  /// @brief Field _assetFileToAssetDetails, offset 0x40, size 0x8
  __declspec(property(get = __get__assetFileToAssetDetails,
                      put = __set__assetFileToAssetDetails))::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>* _assetFileToAssetDetails;

  /// @brief Field _oculusPlatformAdditionalContentModel, offset 0x48, size 0x8
  __declspec(property(get = __get__oculusPlatformAdditionalContentModel,
                      put = __set__oculusPlatformAdditionalContentModel))::GlobalNamespace::OculusPlatformAdditionalContentModel* _oculusPlatformAdditionalContentModel;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapDataAssetFileModel"
  constexpr operator ::GlobalNamespace::IBeatmapDataAssetFileModel*() noexcept;

  constexpr ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*& __get_levelDataAssetDownloadUpdateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>*> const& __get_levelDataAssetDownloadUpdateEvent() const;

  constexpr void __set_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>*& __get__assetIdToDownloadinData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>*> const&
  __get__assetIdToDownloadinData() const;

  constexpr void __set__assetIdToDownloadinData(::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __get__downloadedAssetBundleFiles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __get__downloadedAssetBundleFiles() const;

  constexpr void __set__downloadedAssetBundleFiles(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Models::AssetFileDownloadUpdate*>*& __get__lastAssetFileDownloadUpdateForAssetIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Models::AssetFileDownloadUpdate*>*> const&
  __get__lastAssetFileDownloadUpdateForAssetIds() const;

  constexpr void __set__lastAssetFileDownloadUpdateForAssetIds(::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Models::AssetFileDownloadUpdate*>* value);

  constexpr float_t& __get__lastAssetFileDownloadUpdateTime();

  constexpr float_t const& __get__lastAssetFileDownloadUpdateTime() const;

  constexpr void __set__lastAssetFileDownloadUpdateTime(float_t value);

  constexpr ::System::Threading::SemaphoreSlim*& __get__semaphoreSlim();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& __get__semaphoreSlim() const;

  constexpr void __set__semaphoreSlim(::System::Threading::SemaphoreSlim* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>*& __get__assetFileToAssetDetails();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>*> const& __get__assetFileToAssetDetails() const;

  constexpr void __set__assetFileToAssetDetails(::System::Collections::Generic::Dictionary_2<::StringW, ::Oculus::Platform::Models::AssetDetails*>* value);

  constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel*& __get__oculusPlatformAdditionalContentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformAdditionalContentModel*> const& __get__oculusPlatformAdditionalContentModel() const;

  constexpr void __set__oculusPlatformAdditionalContentModel(::GlobalNamespace::OculusPlatformAdditionalContentModel* value);

  /// @brief Method add_levelDataAssetDownloadUpdateEvent addr 0x2364880 size 0xb0 virtual true final true
  inline void add_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

  /// @brief Method remove_levelDataAssetDownloadUpdateEvent addr 0x2364930 size 0xb0 virtual true final true
  inline void remove_levelDataAssetDownloadUpdateEvent(::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* value);

  static inline ::GlobalNamespace::OculusBeatmapDataAssetFileModel* New_ctor(::GlobalNamespace::OculusPlatformAdditionalContentModel* oculusPlatformAdditionalContentModel);

  /// @brief Method .ctor addr 0x23649e0 size 0x1e4 virtual false final false
  inline void _ctor(::GlobalNamespace::OculusPlatformAdditionalContentModel* oculusPlatformAdditionalContentModel);

  /// @brief Method TryDeleteAssetBundleFileForPreviewLevelAsync addr 0x2364bc4 size 0x110 virtual true final true
  inline ::System::Threading::Tasks::Task_1<bool>* TryDeleteAssetBundleFileForPreviewLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                                                ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetAssetBundleFileForPreviewLevelAsync addr 0x2364cd4 size 0x110 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GetAssetBundleFileForPreviewLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReloadAssetDetailsForAllLevelsAsync addr 0x2364de4 size 0x104 virtual false final false
  inline ::System::Threading::Tasks::Task_1<bool>* ReloadAssetDetailsForAllLevelsAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetDownloadAssetBundleFileAsync addr 0x2364ee8 size 0x10c virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* GetDownloadAssetBundleFileAsync(::StringW levelId, ::Oculus::Platform::Models::AssetDetails* assetDetails,
                                                                                                                          ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetTaskCompletionSourceForDownload addr 0x2364ff4 size 0x110 virtual false final false
  inline ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::GetAssetBundleFileResult>* GetTaskCompletionSourceForDownload(::StringW levelId,
                                                                                                                                             ::Oculus::Platform::Models::AssetDetails* assetDetail);

  /// @brief Method HandleAssetFileDownloadUpdate addr 0x2365198 size 0x460 virtual false final false
  inline void HandleAssetFileDownloadUpdate(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>* msg);

  /// @brief Method <.ctor>b__12_0 addr 0x23655f8 size 0x4 virtual false final false
  inline void __ctor_b__12_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>* msg);

  // Ctor Parameters [CppParam { name: "", ty: "OculusBeatmapDataAssetFileModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusBeatmapDataAssetFileModel(OculusBeatmapDataAssetFileModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusBeatmapDataAssetFileModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusBeatmapDataAssetFileModel(OculusBeatmapDataAssetFileModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusBeatmapDataAssetFileModel();

public:
  /// @brief Field levelDataAssetDownloadUpdateEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::LevelDataAssetDownloadUpdate>* ___levelDataAssetDownloadUpdateEvent;

  /// @brief Field _assetIdToDownloadinData, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OculusBeatmapDataAssetFileModel__LevelDownloadingData*>* ____assetIdToDownloadinData;

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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14, "",
                       "OculusBeatmapDataAssetFileModel/<GetAssetBundleFileForPreviewLevelAsync>d__14");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16, "", "OculusBeatmapDataAssetFileModel/<GetDownloadAssetBundleFileAsync>d__16");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15, "",
                       "OculusBeatmapDataAssetFileModel/<ReloadAssetDetailsForAllLevelsAsync>d__15");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13, "",
                       "OculusBeatmapDataAssetFileModel/<TryDeleteAssetBundleFileForPreviewLevelAsync>d__13");
