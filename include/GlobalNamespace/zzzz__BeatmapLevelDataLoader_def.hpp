#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelDataLoader)
namespace GlobalNamespace {
class BeatmapLevelDataLoadRequest;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__2;
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
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelDataLoader;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__2;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelDataLoader);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelDataLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__2);
// Type: ::<CheckBeatmapLevelDataFromAssetBundleExistsAsync>d__2
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapLevelDataLoader::<CheckBeatmapLevelDataFromAssetBundleExistsAsync>d__2
struct CORDL_TYPE __BeatmapLevelDataLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x12c1bb0, size 0x260, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x12c1e88, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__2();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelDataLoader*", modifiers:
  // "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelDataLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                                            ::GlobalNamespace::BeatmapLevelDataLoader* __4__this, ::StringW levelId, ::StringW assetBundlePath,
                                                                                            ::System::Threading::CancellationToken cancellationToken,
                                                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelDataLoader* __4__this;

  /// @brief Field levelId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field assetBundlePath, offset: 0x30, size: 0x8, def value: None
  ::StringW assetBundlePath;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__2, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__2, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__2, levelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__2, assetBundlePath) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__2, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__2, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelDataLoader
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelDataLoader*
class CORDL_TYPE BeatmapLevelDataLoader : public ::System::Object {
public:
  // Declarations
  using _CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__2 = ::GlobalNamespace::__BeatmapLevelDataLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__2;

  /// @brief Field _loadRequests, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__loadRequests,
                      put = __cordl_internal_set__loadRequests))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevelDataLoadRequest*>* _loadRequests;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CheckBeatmapLevelDataFromAssetBundleExistsAsync, addr 0x12c17e0, size 0x118, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* CheckBeatmapLevelDataFromAssetBundleExistsAsync(::StringW levelId, ::StringW assetBundlePath,
                                                                                                   ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Dispose, addr 0x12c18f8, size 0x1b4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method LoadBeatmapLevelDataFromAssetBundleAsync, addr 0x12c1504, size 0x134, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* LoadBeatmapLevelDataFromAssetBundleAsync(::StringW levelId, ::StringW assetBundlePath, ::StringW levelDataAssetName,
                                                                                                                             ::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::BeatmapLevelDataLoader* New_ctor();

  /// @brief Method TryUnload, addr 0x12c1aac, size 0x88, virtual false, abstract: false, final false
  inline bool TryUnload(::StringW beatmapLevelId);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevelDataLoadRequest*>*& __cordl_internal_get__loadRequests();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevelDataLoadRequest*>*> const&
  __cordl_internal_get__loadRequests() const;

  constexpr void __cordl_internal_set__loadRequests(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevelDataLoadRequest*>* value);

  /// @brief Method .ctor, addr 0x12c1b34, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelDataLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelDataLoader(BeatmapLevelDataLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelDataLoader(BeatmapLevelDataLoader const&) = delete;

  /// @brief Field _loadRequests, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevelDataLoadRequest*>* ____loadRequests;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelDataLoader, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataLoader, ____loadRequests) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelDataLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataLoader*, "", "BeatmapLevelDataLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__2, "",
                       "BeatmapLevelDataLoader/<CheckBeatmapLevelDataFromAssetBundleExistsAsync>d__2");
