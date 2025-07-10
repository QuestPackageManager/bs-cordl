#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelDataLoadRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelDataLoadRequest)
namespace GlobalNamespace {
struct BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelDataLoadRequest;
}
namespace GlobalNamespace {
struct BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelDataLoadRequest);
MARK_VAL_T(::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>,
// System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapLevelDataLoadRequest/<LoadDataAsyncInternal>d__8
struct CORDL_TYPE BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26c1804, size 0x70c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26c1f10, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::BeatmapLevelDataLoadRequest*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AssetBundle>>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Object>>", modifiers: "", def_value: None }]
  constexpr BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8(int32_t __1__state,
                                                                    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*> __t__builder,
                                                                    ::GlobalNamespace::BeatmapLevelDataLoadRequest* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AssetBundle>> __u__2,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Object>> __u__3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12925 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelDataLoadRequest* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AssetBundle>> __u__2;

  /// @brief Field <>u__3, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Object>> __u__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8, __u__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8, __u__3) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelDataLoadRequest
class CORDL_TYPE BeatmapLevelDataLoadRequest : public ::System::Object {
public:
  // Declarations
  using _LoadDataAsyncInternal_d__8 = ::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8;

  __declspec(property(get = get_HasFailed)) bool HasFailed;

  __declspec(property(get = get_HasValidResult)) bool HasValidResult;

  /// @brief Field _assetBundlePath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__assetBundlePath, put = __cordl_internal_set__assetBundlePath)) ::StringW _assetBundlePath;

  /// @brief Field _externalCancellationTokens, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__externalCancellationTokens,
                      put = __cordl_internal_set__externalCancellationTokens)) ::System::Collections::Generic::List_1<::System::Threading::CancellationToken>* _externalCancellationTokens;

  /// @brief Field _internalCancellationSource, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__internalCancellationSource,
                      put = __cordl_internal_set__internalCancellationSource)) ::System::Threading::CancellationTokenSource* _internalCancellationSource;

  /// @brief Field _levelDataAssetName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelDataAssetName, put = __cordl_internal_set__levelDataAssetName)) ::StringW _levelDataAssetName;

  /// @brief Field _task, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__task, put = __cordl_internal_set__task)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* _task;

  /// @brief Field assetBundle, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_assetBundle, put = __cordl_internal_set_assetBundle)) ::UnityW<::UnityEngine::AssetBundle> assetBundle;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x26c0b30, size 0x60, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method LoadDataAsync, addr 0x26c0b90, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* LoadDataAsync(::System::Threading::CancellationToken externalCancellationToken);

  /// @brief Method LoadDataAsyncInternal, addr 0x26c149c, size 0xec, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* LoadDataAsyncInternal(::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::BeatmapLevelDataLoadRequest* New_ctor(::StringW assetBundlePath, ::StringW levelDataAssetName);

  /// @brief Method ThrowIfExternalCancellationRequested, addr 0x26c1588, size 0x1f8, virtual false, abstract: false, final false
  inline void ThrowIfExternalCancellationRequested();

  /// @brief Method UnloadBundle, addr 0x26c1780, size 0x84, virtual false, abstract: false, final false
  inline void UnloadBundle();

  constexpr ::StringW const& __cordl_internal_get__assetBundlePath() const;

  constexpr ::StringW& __cordl_internal_get__assetBundlePath();

  constexpr ::System::Collections::Generic::List_1<::System::Threading::CancellationToken>* const& __cordl_internal_get__externalCancellationTokens() const;

  constexpr ::System::Collections::Generic::List_1<::System::Threading::CancellationToken>*& __cordl_internal_get__externalCancellationTokens();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__internalCancellationSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__internalCancellationSource();

  constexpr ::StringW const& __cordl_internal_get__levelDataAssetName() const;

  constexpr ::StringW& __cordl_internal_get__levelDataAssetName();

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* const& __cordl_internal_get__task() const;

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>*& __cordl_internal_get__task();

  constexpr ::UnityW<::UnityEngine::AssetBundle> const& __cordl_internal_get_assetBundle() const;

  constexpr ::UnityW<::UnityEngine::AssetBundle>& __cordl_internal_get_assetBundle();

  constexpr void __cordl_internal_set__assetBundlePath(::StringW value);

  constexpr void __cordl_internal_set__externalCancellationTokens(::System::Collections::Generic::List_1<::System::Threading::CancellationToken>* value);

  constexpr void __cordl_internal_set__internalCancellationSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__levelDataAssetName(::StringW value);

  constexpr void __cordl_internal_set__task(::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* value);

  constexpr void __cordl_internal_set_assetBundle(::UnityW<::UnityEngine::AssetBundle> value);

  /// @brief Method .ctor, addr 0x26c0c58, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::StringW assetBundlePath, ::StringW levelDataAssetName);

  /// @brief Method get_HasFailed, addr 0x26c0af4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_HasFailed();

  /// @brief Method get_HasValidResult, addr 0x26c13a8, size 0x78, virtual false, abstract: false, final false
  inline bool get_HasValidResult();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelDataLoadRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataLoadRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelDataLoadRequest(BeatmapLevelDataLoadRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataLoadRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelDataLoadRequest(BeatmapLevelDataLoadRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12926 };

  /// @brief Field _task, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* ____task;

  /// @brief Field _assetBundlePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ____assetBundlePath;

  /// @brief Field _levelDataAssetName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____levelDataAssetName;

  /// @brief Field _internalCancellationSource, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____internalCancellationSource;

  /// @brief Field _externalCancellationTokens, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Threading::CancellationToken>* ____externalCancellationTokens;

  /// @brief Field assetBundle, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AssetBundle> ___assetBundle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataLoadRequest, ____task) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataLoadRequest, ____assetBundlePath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataLoadRequest, ____levelDataAssetName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataLoadRequest, ____internalCancellationSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataLoadRequest, ____externalCancellationTokens) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataLoadRequest, ___assetBundle) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelDataLoadRequest, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelDataLoadRequest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataLoadRequest*, "", "BeatmapLevelDataLoadRequest");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8, "", "BeatmapLevelDataLoadRequest/<LoadDataAsyncInternal>d__8");
