#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
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
struct LevelDataAssetDownloadUpdate;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader__LevelDownloadingUpdate;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader__LoadBeatmapLevelDataResult;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17;
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
// Forward declare root types
namespace GlobalNamespace {
struct __BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState;
}
namespace GlobalNamespace {
class BeatmapLevelLoader;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader__LevelDownloadingUpdate;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader__LoadBeatmapLevelDataResult;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelLoader);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17);
// Type: ::LoadBeatmapLevelDataResult
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10760))
// CS Name: ::BeatmapLevelLoader::LoadBeatmapLevelDataResult
struct CORDL_TYPE __BeatmapLevelLoader__LoadBeatmapLevelDataResult {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x12803cc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool isError, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData);

  // Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "",
  // def_value: None }]
  constexpr __BeatmapLevelLoader__LoadBeatmapLevelDataResult(bool isError, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelLoader__LoadBeatmapLevelDataResult();

  /// @brief Field isError, offset: 0x0, size: 0x1, def value: None
  bool isError;

  /// @brief Field beatmapLevelData, offset: 0x8, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult, isError) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult, beatmapLevelData) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DownloadingState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10761))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field PreparingToDownload value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState const PreparingToDownload;

  /// @brief Field Downloading value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState const Downloading;

  /// @brief Field Completed value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState const Completed;

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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10761))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10762))
// CS Name: ::BeatmapLevelLoader::LevelDownloadingUpdate
struct CORDL_TYPE __BeatmapLevelLoader__LevelDownloadingUpdate {
public:
  // Declarations
  using DownloadingState = ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState;

  /// @brief Method .ctor, addr 0x12801bc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelID, float_t progress, ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState downloadingState);

  // Ctor Parameters [CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "progress", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "downloadingState", ty: "::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelLoader__LevelDownloadingUpdate(::StringW levelID, float_t progress,
                                                         ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState downloadingState) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelLoader__LevelDownloadingUpdate();

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
// Type: ::<LoadBeatmapLevelDataAsync>d__12
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3390)), TypeDefinitionIndex(TypeDefinitionIndex(3398)),
// TypeDefinitionIndex(TypeDefinitionIndex(10760)), TypeDefinitionIndex(TypeDefinitionIndex(10805)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3390), inst: 890 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 907 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(10763)) CS Name:
// ::BeatmapLevelLoader::<LoadBeatmapLevelDataAsync>d__12
struct CORDL_TYPE __BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x12803dc, size 0x2a4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1280680, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::GlobalNamespace::BeatmapLevelLoader*", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult> __t__builder,
      ::GlobalNamespace::BeatmapLevelLoader* __4__this, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult> __t__builder;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12, beatmapLevel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<CheckBeatmapLevelDataExistsAsync>d__13
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3390)), TypeDefinitionIndex(TypeDefinitionIndex(3398)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3390), inst: 77 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 77 })] Self:
// TypeDefinitionIndex(TypeDefinitionIndex(10764)) CS Name: ::BeatmapLevelLoader::<CheckBeatmapLevelDataExistsAsync>d__13
struct CORDL_TYPE __BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x12806d8, size 0x234, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x128090c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelLoader*", modifiers: "",
  // def_value: None }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value:
  // None }]
  constexpr __BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                          ::GlobalNamespace::BeatmapLevelLoader* __4__this, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                          ::System::Threading::CancellationToken cancellationToken,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13();

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13, beatmapLevel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<CheckBeatmapLevelDataFromAssetBundleExistsAsync>d__15
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3390)), TypeDefinitionIndex(TypeDefinitionIndex(3398)),
// TypeDefinitionIndex(TypeDefinitionIndex(10836)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3390), inst: 77 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3390), inst: 886 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 77 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(10765)) CS Name:
// ::BeatmapLevelLoader::<CheckBeatmapLevelDataFromAssetBundleExistsAsync>d__15
struct CORDL_TYPE __BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x1280964, size 0x440, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1280da4, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelLoader*", modifiers: "", def_value: None }, CppParam { name: "token", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value:
  // None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
      ::GlobalNamespace::BeatmapLevelLoader* __4__this, ::System::Threading::CancellationToken token, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15();

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15, beatmapLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15, token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15, __u__2) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadBeatmapLevelDataFromAssetBundle>d__17
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3390)), TypeDefinitionIndex(TypeDefinitionIndex(3398)),
// TypeDefinitionIndex(TypeDefinitionIndex(10805)), TypeDefinitionIndex(TypeDefinitionIndex(10836)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3390), inst: 77 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3390), inst: 886 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3390), inst: 890 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 890 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(10766)) CS Name:
// ::BeatmapLevelLoader::<LoadBeatmapLevelDataFromAssetBundle>d__17
struct CORDL_TYPE __BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x1280dfc, size 0x71c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1281518, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*>", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty:
  // "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelLoader*", modifiers: "", def_value: None }, CppParam {
  // name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_levelDataAssetName_5__2", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "_storeProvidedBeatmapLevelData_5__3", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelData*> __t__builder, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
      ::GlobalNamespace::BeatmapLevelLoader* __4__this, ::System::Threading::CancellationToken token, ::StringW _levelDataAssetName_5__2,
      ::GlobalNamespace::IBeatmapLevelData* _storeProvidedBeatmapLevelData_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelData*> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__3) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17();

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17, beatmapLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17, token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17, _levelDataAssetName_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17, _storeProvidedBeatmapLevelData_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17, __u__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17, __u__3) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<DownloadAssetBundleAndGetPath>d__18
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3390)), TypeDefinitionIndex(TypeDefinitionIndex(3398)),
// TypeDefinitionIndex(TypeDefinitionIndex(10836)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3390), inst: 886 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3398), inst: 886 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(10767)) CS Name: ::BeatmapLevelLoader::<DownloadAssetBundleAndGetPath>d__18
struct CORDL_TYPE __BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x1281570, size 0x278, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x12817e8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::BeatmapLevelLoader*", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam {
  // name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18(int32_t __1__state,
                                                                       ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::GetAssetBundleFileResult> __t__builder,
                                                                       ::GlobalNamespace::BeatmapLevelLoader* __4__this, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                       ::System::Threading::CancellationToken token,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::GetAssetBundleFileResult> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18();

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18, beatmapLevel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18, token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelLoader
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10768))
// CS Name: ::BeatmapLevelLoader*
class CORDL_TYPE BeatmapLevelLoader : public ::System::Object {
public:
  // Declarations
  using _DownloadAssetBundleAndGetPath_d__18 = ::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18;

  using _LoadBeatmapLevelDataFromAssetBundle_d__17 = ::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17;

  using _CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15 = ::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15;

  using _CheckBeatmapLevelDataExistsAsync_d__13 = ::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13;

  using _LoadBeatmapLevelDataAsync_d__12 = ::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12;

  using LevelDownloadingUpdate = ::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate;

  using LoadBeatmapLevelDataResult = ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult;

  /// @brief Field levelDownloadingUpdateEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelDownloadingUpdateEvent,
                      put = __cordl_internal_set_levelDownloadingUpdateEvent))::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>* levelDownloadingUpdateEvent;

  /// @brief Field _loadedBeatmapLevels, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__loadedBeatmapLevels,
                      put = __cordl_internal_set__loadedBeatmapLevels))::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::GlobalNamespace::IBeatmapLevelData*>* _loadedBeatmapLevels;

  /// @brief Field _beatmapLevelDataLoader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelDataLoader, put = __cordl_internal_set__beatmapLevelDataLoader))::GlobalNamespace::BeatmapLevelDataLoader* _beatmapLevelDataLoader;

  /// @brief Field _beatmapDataAssetFileModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataAssetFileModel,
                      put = __cordl_internal_set__beatmapDataAssetFileModel))::GlobalNamespace::IBeatmapDataAssetFileModel* _beatmapDataAssetFileModel;

  /// @brief Field _audioClipAsyncLoader, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipAsyncLoader, put = __cordl_internal_set__audioClipAsyncLoader))::GlobalNamespace::AudioClipAsyncLoader* _audioClipAsyncLoader;

  constexpr ::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>*& __cordl_internal_get_levelDownloadingUpdateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>*> const& __cordl_internal_get_levelDownloadingUpdateEvent() const;

  constexpr void __cordl_internal_set_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>* value);

  constexpr ::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::GlobalNamespace::IBeatmapLevelData*>*& __cordl_internal_get__loadedBeatmapLevels();

  constexpr ::cordl_internals::to_const_pointer<::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::GlobalNamespace::IBeatmapLevelData*>*> const&
  __cordl_internal_get__loadedBeatmapLevels() const;

  constexpr void __cordl_internal_set__loadedBeatmapLevels(::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::GlobalNamespace::IBeatmapLevelData*>* value);

  constexpr ::GlobalNamespace::BeatmapLevelDataLoader*& __cordl_internal_get__beatmapLevelDataLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelDataLoader*> const& __cordl_internal_get__beatmapLevelDataLoader() const;

  constexpr void __cordl_internal_set__beatmapLevelDataLoader(::GlobalNamespace::BeatmapLevelDataLoader* value);

  constexpr ::GlobalNamespace::IBeatmapDataAssetFileModel*& __cordl_internal_get__beatmapDataAssetFileModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapDataAssetFileModel*> const& __cordl_internal_get__beatmapDataAssetFileModel() const;

  constexpr void __cordl_internal_set__beatmapDataAssetFileModel(::GlobalNamespace::IBeatmapDataAssetFileModel* value);

  constexpr ::GlobalNamespace::AudioClipAsyncLoader*& __cordl_internal_get__audioClipAsyncLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipAsyncLoader*> const& __cordl_internal_get__audioClipAsyncLoader() const;

  constexpr void __cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value);

  /// @brief Method add_levelDownloadingUpdateEvent, addr 0x127f71c, size 0xb0, virtual false, abstract: false, final false
  inline void add_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>* value);

  /// @brief Method remove_levelDownloadingUpdateEvent, addr 0x127f7cc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>* value);

  static inline ::GlobalNamespace::BeatmapLevelLoader* New_ctor(::GlobalNamespace::BeatmapLevelDataLoader* beatmapLevelDataLoader,
                                                                ::GlobalNamespace::IBeatmapDataAssetFileModel* beatmapDataAssetFileModel, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader,
                                                                int32_t maxCachedBeatmapLevels);

  /// @brief Method .ctor, addr 0x127f87c, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelDataLoader* beatmapLevelDataLoader, ::GlobalNamespace::IBeatmapDataAssetFileModel* beatmapDataAssetFileModel,
                    ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, int32_t maxCachedBeatmapLevels);

  /// @brief Method Initialize, addr 0x127f928, size 0x168, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method Dispose, addr 0x127fa90, size 0x16c, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method LoadBeatmapLevelDataAsync, addr 0x127fbfc, size 0x10c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult>* LoadBeatmapLevelDataAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                                                            ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method CheckBeatmapLevelDataExistsAsync, addr 0x127fd08, size 0x10c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* CheckBeatmapLevelDataExistsAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method CheckBeatmapLevelDataFromCustomLevels, addr 0x127fe14, size 0x8, virtual false, abstract: false, final false
  inline bool CheckBeatmapLevelDataFromCustomLevels(::GlobalNamespace::BeatmapLevel* beatmapLevel);

  /// @brief Method CheckBeatmapLevelDataFromAssetBundleExistsAsync, addr 0x127fe1c, size 0x110, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* CheckBeatmapLevelDataFromAssetBundleExistsAsync(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::System::Threading::CancellationToken token);

  /// @brief Method LoadBeatmapLevelDataFromCustomLevels, addr 0x127ff2c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IBeatmapLevelData* LoadBeatmapLevelDataFromCustomLevels(::GlobalNamespace::BeatmapLevel* beatmapLevel);

  /// @brief Method LoadBeatmapLevelDataFromAssetBundle, addr 0x127ff34, size 0x108, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelData*>* LoadBeatmapLevelDataFromAssetBundle(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                                        ::System::Threading::CancellationToken token);

  /// @brief Method DownloadAssetBundleAndGetPath, addr 0x128003c, size 0x10c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::GetAssetBundleFileResult>* DownloadAssetBundleAndGetPath(::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                                                                        ::System::Threading::CancellationToken token);

  /// @brief Method HandleLevelDataAssetDownloadUpdate, addr 0x1280148, size 0x74, virtual false, abstract: false, final false
  inline void HandleLevelDataAssetDownloadUpdate(::GlobalNamespace::LevelDataAssetDownloadUpdate update);

  /// @brief Method HandleItemWillBeRemovedFromCache, addr 0x12801cc, size 0x38, virtual false, abstract: false, final false
  inline void HandleItemWillBeRemovedFromCache(::StringW beatmapLevelId, ::GlobalNamespace::IBeatmapLevelData* beatmapLevel);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelLoader(BeatmapLevelLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelLoader(BeatmapLevelLoader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelLoader();

public:
  /// @brief Field levelDownloadingUpdateEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>* ___levelDownloadingUpdateEvent;

  /// @brief Field _loadedBeatmapLevels, offset: 0x18, size: 0x8, def value: None
  ::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::GlobalNamespace::IBeatmapLevelData*>* ____loadedBeatmapLevels;

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

static_assert(offsetof(::GlobalNamespace::BeatmapLevelLoader, ____loadedBeatmapLevels) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelLoader, ____beatmapLevelDataLoader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelLoader, ____beatmapDataAssetFileModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelLoader, ____audioClipAsyncLoader) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate__DownloadingState, "", "BeatmapLevelLoader/LevelDownloadingUpdate/DownloadingState");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelLoader*, "", "BeatmapLevelLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate, "", "BeatmapLevelLoader/LevelDownloadingUpdate");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult, "", "BeatmapLevelLoader/LoadBeatmapLevelDataResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataExistsAsync_d__13, "", "BeatmapLevelLoader/<CheckBeatmapLevelDataExistsAsync>d__13");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelLoader___CheckBeatmapLevelDataFromAssetBundleExistsAsync_d__15, "",
                       "BeatmapLevelLoader/<CheckBeatmapLevelDataFromAssetBundleExistsAsync>d__15");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelLoader___DownloadAssetBundleAndGetPath_d__18, "", "BeatmapLevelLoader/<DownloadAssetBundleAndGetPath>d__18");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataAsync_d__12, "", "BeatmapLevelLoader/<LoadBeatmapLevelDataAsync>d__12");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelLoader___LoadBeatmapLevelDataFromAssetBundle_d__17, "", "BeatmapLevelLoader/<LoadBeatmapLevelDataFromAssetBundle>d__17");
