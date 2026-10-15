#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelDataLoadRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelDataLoadRequest)
namespace GlobalNamespace {
template <typename T> struct BeatmapLevelDataLoadRequest__LoadAssetAsync_d__9_1;
}
namespace GlobalNamespace {
struct BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8;
}
namespace GlobalNamespace {
class BeatmapLevelDataSO;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::IO {
class InvalidDataException;
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
namespace System {
class IDisposable;
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
template <typename T> struct BeatmapLevelDataLoadRequest__LoadAssetAsync_d__9_1;
}
namespace GlobalNamespace {
struct BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatmapLevelDataLoadRequest*);
MARK_GEN_VAL_T(::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadAssetAsync_d__9_1);
MARK_VAL_T(::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapLevelDataLoadRequest*, "", "BeatmapLevelDataLoadRequest");
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadAssetAsync_d__9_1, "", "BeatmapLevelDataLoadRequest/<LoadAssetAsync>d__9`1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8, "", "BeatmapLevelDataLoadRequest/<LoadDataAsyncInternal>d__8");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: BeatmapLevelDataLoadRequest/<LoadAssetAsync>d__9`1<T>
struct CORDL_TYPE BeatmapLevelDataLoadRequest__LoadAssetAsync_d__9_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelDataLoadRequest__LoadAssetAsync_d__9_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "bundle", ty: "::UnityW<::UnityEngine::AssetBundle>",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "assetName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Object>>", modifiers: "", def_value: None, comment: None }]
  constexpr BeatmapLevelDataLoadRequest__LoadAssetAsync_d__9_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder,
                                                               ::UnityW<::UnityEngine::AssetBundle> bundle, ::StringW assetName,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Object>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14398 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// [Nullable(0)]
  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// [Nullable(0)]
  /// @brief Field bundle, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AssetBundle> bundle;

  /// [Nullable(0)]
  /// @brief Field assetName, offset: 0x28, size: 0x8, def value: None
  ::StringW assetName;

  /// [Nullable(0)]
  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Object>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapLevelDataLoadRequest/<LoadDataAsyncInternal>d__8
struct CORDL_TYPE BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x39cb004, size 0x6d8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x39cb6dc, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::BeatmapLevelDataLoadRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AssetBundle>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::BeatmapLevelDataSO>>", modifiers: "", def_value: None, comment: None }]
  constexpr BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8(int32_t __1__state,
                                                                    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*> __t__builder,
                                                                    ::GlobalNamespace::BeatmapLevelDataLoadRequest* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AssetBundle>> __u__2,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::BeatmapLevelDataSO>> __u__3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14399 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// [Nullable(0)]
  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*> __t__builder;

  /// [Nullable(0)]
  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelDataLoadRequest* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// [Nullable(0)]
  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// [Nullable(0)]
  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AssetBundle>> __u__2;

  /// [Nullable(new[] { 0, 2 })]
  /// @brief Field <>u__3, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::BeatmapLevelDataSO>> __u__3;

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

static_assert(sizeof(::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadDataAsyncInternal_d__8) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object, UnityEngine.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelDataLoadRequest
class CORDL_TYPE BeatmapLevelDataLoadRequest : public ::System::Object {
public:
  // Declarations
  template <typename T> using _LoadAssetAsync_d__9_1 = ::GlobalNamespace::BeatmapLevelDataLoadRequest__LoadAssetAsync_d__9_1<T>;

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

  /// @brief Method CreateInvalidBundleContentException, addr 0x39cabcc, size 0xb8, virtual false, abstract: false, final false
  inline ::System::IO::InvalidDataException* CreateInvalidBundleContentException();

  /// @brief Method Dispose, addr 0x39caea8, size 0x74, virtual true, abstract: false, final true
  inline void Dispose();

  /// [AsyncStateMachine(typeof(BeatmapLevelDataLoadRequest::<LoadAssetAsync>d__9`1<T>))]
  /// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
  static inline ::System::Threading::Tasks::Task_1<T>* LoadAssetAsync(::UnityEngine::AssetBundle* bundle, ::StringW assetName);

  /// @brief Method LoadDataAsync, addr 0x39caa08, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* LoadDataAsync(::System::Threading::CancellationToken externalCancellationToken);

  /// [AsyncStateMachine(typeof(BeatmapLevelDataLoadRequest::<LoadDataAsyncInternal>d__8))]
  /// @brief Method LoadDataAsyncInternal, addr 0x39caadc, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* LoadDataAsyncInternal(::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::BeatmapLevelDataLoadRequest* New_ctor(::StringW assetBundlePath, ::StringW levelDataAssetName);

  /// @brief Method ThrowIfExternalCancellationRequested, addr 0x39cac84, size 0x19c, virtual false, abstract: false, final false
  inline void ThrowIfExternalCancellationRequested();

  /// @brief Method UnloadBundle, addr 0x39cae20, size 0x88, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x39ca940, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::StringW assetBundlePath, ::StringW levelDataAssetName);

  /// @brief Method get_HasFailed, addr 0x39caf1c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_HasFailed();

  /// @brief Method get_HasValidResult, addr 0x39caf58, size 0xac, virtual false, abstract: false, final false
  inline bool get_HasValidResult();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelDataLoadRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataLoadRequest", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelDataLoadRequest(BeatmapLevelDataLoadRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataLoadRequest", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelDataLoadRequest(BeatmapLevelDataLoadRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14400 };

  /// [Nullable(2)]
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

  /// [Nullable(2)]
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

static_assert(sizeof(::GlobalNamespace::BeatmapLevelDataLoadRequest) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
