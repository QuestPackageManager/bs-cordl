#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelLoader)
namespace BGLib::DotnetExtension::Collections {
template <typename TKey, typename TValue> class LRUCache_2;
}
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
class BeatmapLevelDataLoader;
}
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
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class IBeatmapLevelLoader;
}
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate;
}
namespace GlobalNamespace {
struct LoadBeatmapLevelDataResult;
}
namespace GlobalNamespace {
class __BeatmapLevelLoader__InitData;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader__LevelDownloadingUpdate;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__14;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__19;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__13;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__18;
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
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct __BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState;
}
namespace GlobalNamespace {
class BeatmapLevelLoader;
}
namespace GlobalNamespace {
class __BeatmapLevelLoader__InitData;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader__LevelDownloadingUpdate;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__14;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__19;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__13;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__18;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelLoader);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelLoader__InitData);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__14);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__19);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__13);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__18);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelLoader::InitData*
class CORDL_TYPE __BeatmapLevelLoader__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field maxCachedBeatmapLevels, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_maxCachedBeatmapLevels, put = __cordl_internal_set_maxCachedBeatmapLevels)) int32_t maxCachedBeatmapLevels;

  static inline ::GlobalNamespace::__BeatmapLevelLoader__InitData* New_ctor(int32_t maxCachedBeatmapLevels);

  constexpr int32_t const& __cordl_internal_get_maxCachedBeatmapLevels() const;

  constexpr int32_t& __cordl_internal_get_maxCachedBeatmapLevels();

  constexpr void __cordl_internal_set_maxCachedBeatmapLevels(int32_t value);

  /// @brief Method .ctor, addr 0x14b7eb4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxCachedBeatmapLevels);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelLoader__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelLoader__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelLoader__InitData(__BeatmapLevelLoader__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelLoader__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelLoader__InitData(__BeatmapLevelLoader__InitData const&) = delete;

  /// @brief Field maxCachedBeatmapLevels, offset: 0x10, size: 0x4, def value: None
  int32_t ___maxCachedBeatmapLevels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelLoader__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader__InitData, ___maxCachedBeatmapLevels) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DownloadingState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapLevelLoader::LevelDownloadingUpdate::DownloadingState
struct CORDL_TYPE __BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState_Unwrapped
  enum struct ____BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState_Unwrapped : int32_t {
    __E_PreparingToDownload = static_cast<int32_t>(0x0),
    __E_Downloading = static_cast<int32_t>(0x1),
    __E_Completed = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState_Unwrapped() const noexcept {
    return static_cast<____BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Completed value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState const Completed;

  /// @brief Field Downloading value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState const Downloading;

  /// @brief Field PreparingToDownload value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState const PreparingToDownload;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelDownloadingUpdate
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapLevelLoader::LevelDownloadingUpdate
struct CORDL_TYPE __BeatmapLevelLoader__LevelDownloadingUpdate {
public:
  // Declarations
  using DownloadingState = ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState;

  /// @brief Method .ctor, addr 0x14b7c54, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelID, float_t progress, ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState downloadingState);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelLoader__LevelDownloadingUpdate();

  // Ctor Parameters [CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "progress", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "downloadingState", ty: "::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelLoader__LevelDownloadingUpdate(::StringW levelID, float_t progress,
                                                         ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState downloadingState) noexcept;

  /// @brief Field levelID, offset: 0x0, size: 0x8, def value: None
  ::StringW levelID;

  /// @brief Field progress, offset: 0x8, size: 0x4, def value: None
  float_t progress;

  /// @brief Field downloadingState, offset: 0xc, size: 0x4, def value: None
  ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState downloadingState;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate, levelID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate, progress) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate, downloadingState) == 0xc, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadBeatmapLevelDataAsync>d__13
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapLevelLoader::<LoadBeatmapLevelDataAsync>d__13
struct CORDL_TYPE __BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14b7edc, size 0x30c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14b81e8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::BeatmapLevelLoader*", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam {
  // name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__13(int32_t __1__state,
                                                                   ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __t__builder,
                                                                   ::GlobalNamespace::BeatmapLevelLoader* __4__this, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                   ::System::Threading::CancellationToken cancellationToken,
                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelLoader* __4__this;

  /// @brief Field beatmapLevel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__13, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__13, beatmapLevel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__13, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__13, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<CheckBeatmapLevelDataExistsAsync>d__14
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapLevelLoader::<CheckBeatmapLevelDataExistsAsync>d__14
struct CORDL_TYPE __BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14b8240, size 0x234, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14b8474, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelLoader*", modifiers: "",
  // def_value: None }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value:
  // None }]
  constexpr __BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__14(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                          ::GlobalNamespace::BeatmapLevelLoader* __4__this, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                          ::System::Threading::CancellationToken cancellationToken,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelLoader* __4__this;

  /// @brief Field beatmapLevel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__14, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__14, beatmapLevel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__14, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__14, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<CheckBeatmapLevelDataFromAssetBundleExistsAsync>d__16
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapLevelLoader::<CheckBeatmapLevelDataFromAssetBundleExistsAsync>d__16
struct CORDL_TYPE __BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14b84cc, size 0x440, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14b890c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelLoader*", modifiers: "", def_value: None }, CppParam { name: "token", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value:
  // None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
      ::GlobalNamespace::BeatmapLevelLoader* __4__this, ::System::Threading::CancellationToken token, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field beatmapLevel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelLoader* __4__this;

  /// @brief Field token, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16, beatmapLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16, token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16, __u__2) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadBeatmapLevelDataFromAssetBundle>d__18
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapLevelLoader::<LoadBeatmapLevelDataFromAssetBundle>d__18
struct CORDL_TYPE __BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14b8964, size 0x71c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14b9080, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*>", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty:
  // "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelLoader*", modifiers: "", def_value: None }, CppParam {
  // name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_levelDataAssetName_5__2", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "_storeProvidedBeatmapLevelData_5__3", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__18(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*> __t__builder, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
      ::GlobalNamespace::BeatmapLevelLoader* __4__this, ::System::Threading::CancellationToken token, ::StringW _levelDataAssetName_5__2,
      ::GlobalNamespace::IBeatmapLevelData* _storeProvidedBeatmapLevelData_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__3) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*> __t__builder;

  /// @brief Field beatmapLevel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelLoader* __4__this;

  /// @brief Field token, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <levelDataAssetName>5__2, offset: 0x38, size: 0x8, def value: None
  ::StringW _levelDataAssetName_5__2;

  /// @brief Field <storeProvidedBeatmapLevelData>5__3, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* _storeProvidedBeatmapLevelData_5__3;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*> __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__2;

  /// @brief Field <>u__3, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__18, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__18, beatmapLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__18, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__18, token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__18, _levelDataAssetName_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__18, _storeProvidedBeatmapLevelData_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__18, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__18, __u__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__18, __u__3) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<DownloadAssetBundleAndGetPath>d__19
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapLevelLoader::<DownloadAssetBundleAndGetPath>d__19
struct CORDL_TYPE __BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14b90d8, size 0x278, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14b9350, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__19();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::BeatmapLevelLoader*", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam {
  // name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__19(int32_t __1__state,
                                                                       ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder,
                                                                       ::GlobalNamespace::BeatmapLevelLoader* __4__this, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                       ::System::Threading::CancellationToken token,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelLoader* __4__this;

  /// @brief Field beatmapLevel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field token, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken token;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__19, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__19, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__19, beatmapLevel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__19, token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__19, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelLoader
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelLoader*
class CORDL_TYPE BeatmapLevelLoader : public ::System::Object {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__BeatmapLevelLoader__InitData;

  using LevelDownloadingUpdate = ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate;

  using _CheckBeatmapLevelDataExistsAsync_d__14 = ::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__14;

  using _CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16 = ::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16;

  using _DownloadAssetBundleAndGetPath_d__19 = ::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__19;

  using _LoadBeatmapLevelDataAsync_d__13 = ::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__13;

  using _LoadBeatmapLevelDataFromAssetBundle_d__18 = ::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__18;

  /// @brief Field _audioClipAsyncLoader, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipAsyncLoader, put = __cordl_internal_set__audioClipAsyncLoader))::GlobalNamespace::AudioClipAsyncLoader* _audioClipAsyncLoader;

  /// @brief Field _beatmapDataAssetFileModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataAssetFileModel,
                      put = __cordl_internal_set__beatmapDataAssetFileModel))::GlobalNamespace::IBeatmapDataAssetFileModel* _beatmapDataAssetFileModel;

  /// @brief Field _beatmapLevelDataLoader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelDataLoader, put = __cordl_internal_set__beatmapLevelDataLoader))::GlobalNamespace::BeatmapLevelDataLoader* _beatmapLevelDataLoader;

  /// @brief Field _loadedBeatmapLevelDataCache, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__loadedBeatmapLevelDataCache,
      put = __cordl_internal_set__loadedBeatmapLevelDataCache))::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::GlobalNamespace::IBeatmapLevelData*>* _loadedBeatmapLevelDataCache;

  __declspec(property(get = get_cachedLoadRequestCount)) int32_t cachedLoadRequestCount;

  /// @brief Field levelDownloadingUpdateEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelDownloadingUpdateEvent,
                      put = __cordl_internal_set_levelDownloadingUpdateEvent))::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>* levelDownloadingUpdateEvent;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelLoader"
  constexpr operator ::GlobalNamespace::IBeatmapLevelLoader*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CheckBeatmapLevelDataExistsAsync, addr 0x14b77a0, size 0x10c, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* CheckBeatmapLevelDataExistsAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method CheckBeatmapLevelDataFromAssetBundleExistsAsync, addr 0x14b78b4, size 0x110, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* CheckBeatmapLevelDataFromAssetBundleExistsAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::System::Threading::CancellationToken token);

  /// @brief Method CheckBeatmapLevelDataFromCustomLevels, addr 0x14b78ac, size 0x8, virtual false, abstract: false, final false
  inline bool CheckBeatmapLevelDataFromCustomLevels(::GlobalNamespace::BeatmapLevel* beatmapLevel);

  /// @brief Method ClearCache, addr 0x14b7e64, size 0x50, virtual true, abstract: false, final true
  inline void ClearCache();

  /// @brief Method Dispose, addr 0x14b751c, size 0x178, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DownloadAssetBundleAndGetPath, addr 0x14b7ad4, size 0x10c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* DownloadAssetBundleAndGetPath(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                                        ::System::Threading::CancellationToken token);

  /// @brief Method HandleItemWillBeRemovedFromCache, addr 0x14b7c64, size 0x38, virtual false, abstract: false, final false
  inline void HandleItemWillBeRemovedFromCache(::StringW beatmapLevelId, ::GlobalNamespace::IBeatmapLevelData* beatmapLevel);

  /// @brief Method HandleLevelDataAssetDownloadUpdate, addr 0x14b7be0, size 0x74, virtual false, abstract: false, final false
  inline void HandleLevelDataAssetDownloadUpdate(::GlobalNamespace::LevelDataAssetDownloadUpdate update);

  /// @brief Method LoadBeatmapLevelDataAsync, addr 0x14b7694, size 0x10c, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>* LoadBeatmapLevelDataAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                                      ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadBeatmapLevelDataFromAssetBundle, addr 0x14b79cc, size 0x108, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* LoadBeatmapLevelDataFromAssetBundle(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                                        ::System::Threading::CancellationToken token);

  /// @brief Method LoadBeatmapLevelDataFromCustomLevels, addr 0x14b79c4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IBeatmapLevelData* LoadBeatmapLevelDataFromCustomLevels(::GlobalNamespace::BeatmapLevel* beatmapLevel);

  static inline ::GlobalNamespace::BeatmapLevelLoader* New_ctor(::GlobalNamespace::BeatmapLevelDataLoader* beatmapLevelDataLoader,
                                                                ::GlobalNamespace::IBeatmapDataAssetFileModel* beatmapDataAssetFileModel, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader,
                                                                ::GlobalNamespace::__BeatmapLevelLoader__InitData* initData);

  constexpr ::GlobalNamespace::AudioClipAsyncLoader*& __cordl_internal_get__audioClipAsyncLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipAsyncLoader*> const& __cordl_internal_get__audioClipAsyncLoader() const;

  constexpr ::GlobalNamespace::IBeatmapDataAssetFileModel*& __cordl_internal_get__beatmapDataAssetFileModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapDataAssetFileModel*> const& __cordl_internal_get__beatmapDataAssetFileModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelDataLoader*& __cordl_internal_get__beatmapLevelDataLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelDataLoader*> const& __cordl_internal_get__beatmapLevelDataLoader() const;

  constexpr ::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::GlobalNamespace::IBeatmapLevelData*>*& __cordl_internal_get__loadedBeatmapLevelDataCache();

  constexpr ::cordl_internals::to_const_pointer<::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::GlobalNamespace::IBeatmapLevelData*>*> const&
  __cordl_internal_get__loadedBeatmapLevelDataCache() const;

  constexpr ::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>*& __cordl_internal_get_levelDownloadingUpdateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>*> const& __cordl_internal_get_levelDownloadingUpdateEvent() const;

  constexpr void __cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value);

  constexpr void __cordl_internal_set__beatmapDataAssetFileModel(::GlobalNamespace::IBeatmapDataAssetFileModel* value);

  constexpr void __cordl_internal_set__beatmapLevelDataLoader(::GlobalNamespace::BeatmapLevelDataLoader* value);

  constexpr void __cordl_internal_set__loadedBeatmapLevelDataCache(::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::GlobalNamespace::IBeatmapLevelData*>* value);

  constexpr void __cordl_internal_set_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>* value);

  /// @brief Method .ctor, addr 0x14b7338, size 0x1e4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelDataLoader* beatmapLevelDataLoader, ::GlobalNamespace::IBeatmapDataAssetFileModel* beatmapDataAssetFileModel,
                    ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::__BeatmapLevelLoader__InitData* initData);

  /// @brief Method add_levelDownloadingUpdateEvent, addr 0x14b71c0, size 0xb0, virtual true, abstract: false, final true
  inline void add_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>* value);

  /// @brief Method get_cachedLoadRequestCount, addr 0x14b7320, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_cachedLoadRequestCount();

  /// @brief Convert to "::GlobalNamespace::IBeatmapLevelLoader"
  constexpr ::GlobalNamespace::IBeatmapLevelLoader* i___GlobalNamespace__IBeatmapLevelLoader() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_levelDownloadingUpdateEvent, addr 0x14b7270, size 0xb0, virtual true, abstract: false, final true
  inline void remove_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelLoader(BeatmapLevelLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelLoader(BeatmapLevelLoader const&) = delete;

  /// @brief Field levelDownloadingUpdateEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>* ___levelDownloadingUpdateEvent;

  /// @brief Field _loadedBeatmapLevelDataCache, offset: 0x18, size: 0x8, def value: None
  ::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::GlobalNamespace::IBeatmapLevelData*>* ____loadedBeatmapLevelDataCache;

  /// @brief Field _beatmapLevelDataLoader, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelDataLoader* ____beatmapLevelDataLoader;

  /// @brief Field _beatmapDataAssetFileModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapDataAssetFileModel* ____beatmapDataAssetFileModel;

  /// @brief Field _audioClipAsyncLoader, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* ____audioClipAsyncLoader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelLoader, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelLoader, ___levelDownloadingUpdateEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelLoader, ____loadedBeatmapLevelDataCache) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelLoader, ____beatmapLevelDataLoader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelLoader, ____beatmapDataAssetFileModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelLoader, ____audioClipAsyncLoader) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState, "", "BeatmapLevelLoader/LevelDownloadingUpdate/DownloadingState");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelLoader*, "", "BeatmapLevelLoader");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelLoader__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelLoader__InitData*, "", "BeatmapLevelLoader/InitData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate, "", "BeatmapLevelLoader/LevelDownloadingUpdate");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__14, "", "BeatmapLevelLoader/<CheckBeatmapLevelDataExistsAsync>d__14");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__16, "",
                       "BeatmapLevelLoader/<CheckBeatmapLevelDataFromAssetBundleExistsAsync>d__16");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__19, "", "BeatmapLevelLoader/<DownloadAssetBundleAndGetPath>d__19");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__13, "", "BeatmapLevelLoader/<LoadBeatmapLevelDataAsync>d__13");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__18, "", "BeatmapLevelLoader/<LoadBeatmapLevelDataFromAssetBundle>d__18");
