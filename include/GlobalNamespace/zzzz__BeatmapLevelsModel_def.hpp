#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPackCollection_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelsModel)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
class BeatmapLevelDataLoaderSO;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__GetBeatmapLevelResult;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class __BeatmapLevelsModel____c;
}
namespace GlobalNamespace {
class BeatmapLevelPackCollectionContainerSO;
}
namespace GlobalNamespace {
class BeatmapLevelPackCollectionSO;
}
namespace GlobalNamespace {
class AdditionalContentModel;
}
namespace GlobalNamespace {
class IBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel___GetBeatmapLevelAsync_d__38;
}
namespace GlobalNamespace {
template <typename K, typename V> class HMCache_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class IBeatmapLevelPackCollection;
}
namespace GlobalNamespace {
class BeatmapLevelLoader;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate;
}
namespace GlobalNamespace {
class __BeatmapLevelsModel____c__DisplayClass35_0;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__LevelDownloadingUpdate;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__32;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__EntitlementStatus;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader__LoadBeatmapLevelResult;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
struct __BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class __BeatmapLevelsModel____c;
}
namespace GlobalNamespace {
class __BeatmapLevelsModel____c__DisplayClass35_0;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__GetBeatmapLevelResult;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__LevelDownloadingUpdate;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel___GetBeatmapLevelAsync_d__38;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__32;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelsModel);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelsModel____c);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass35_0);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__38);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__32);
// Type: ::GetBeatmapLevelResult
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4380))
// CS Name: ::BeatmapLevelsModel::GetBeatmapLevelResult
struct CORDL_TYPE __BeatmapLevelsModel__GetBeatmapLevelResult {
public:
  // Declarations
  /// @brief Method .ctor addr 0x21f99fc size 0x10 virtual false final false
  inline void _ctor(bool isError, ::GlobalNamespace::IBeatmapLevel* beatmapLevel);

  // Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::IBeatmapLevel*", modifiers: "", def_value: None
  // }]
  constexpr __BeatmapLevelsModel__GetBeatmapLevelResult(bool isError, ::GlobalNamespace::IBeatmapLevel* beatmapLevel) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelsModel__GetBeatmapLevelResult();

  /// @brief Field isError, offset: 0x0, size: 0x1, def value: None
  bool isError;

  /// @brief Field beatmapLevel, offset: 0x8, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevel* beatmapLevel;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult, isError) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult, beatmapLevel) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DownloadingState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4381))
// CS Name: ::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState
struct CORDL_TYPE __BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState_Unwrapped
  enum struct ____BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState_Unwrapped : int32_t {
    __E_PreparingToDownload = static_cast<int32_t>(0x0),
    __E_Downloading = static_cast<int32_t>(0x1),
    __E_Completed = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState_Unwrapped() const noexcept {
    return static_cast<____BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field PreparingToDownload value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState const PreparingToDownload;

  /// @brief Field Downloading value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState const Downloading;

  /// @brief Field Completed value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState const Completed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelDownloadingUpdate
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4381))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4382))
// CS Name: ::BeatmapLevelsModel::LevelDownloadingUpdate
struct CORDL_TYPE __BeatmapLevelsModel__LevelDownloadingUpdate {
public:
  // Declarations
  using DownloadingState = ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState;

  /// @brief Method .ctor addr 0x21f97d8 size 0x10 virtual false final false
  inline void _ctor(::StringW levelID, uint32_t bytesTotal, uint32_t bytesTransferred, ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState downloadingState);

  // Ctor Parameters [CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "bytesTotal", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "bytesTransferred", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "downloadingState", ty: "::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState",
  // modifiers: "", def_value: None }]
  constexpr __BeatmapLevelsModel__LevelDownloadingUpdate(::StringW levelID, uint32_t bytesTotal, uint32_t bytesTransferred,
                                                         ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState downloadingState) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelsModel__LevelDownloadingUpdate();

  /// @brief Field levelID, offset: 0x0, size: 0x8, def value: None
  ::StringW levelID;

  /// @brief Field bytesTotal, offset: 0x8, size: 0x4, def value: None
  uint32_t bytesTotal;

  /// @brief Field bytesTransferred, offset: 0xc, size: 0x4, def value: None
  uint32_t bytesTransferred;

  /// @brief Field downloadingState, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState downloadingState;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate, levelID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate, bytesTotal) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate, bytesTransferred) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate, downloadingState) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ReloadCustomLevelPackCollectionAsync>d__32
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 872 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 872 }), TypeDefinitionIndex(TypeDefinitionIndex(4375))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4383)) CS Name: ::BeatmapLevelsModel::<ReloadCustomLevelPackCollectionAsync>d__32
struct CORDL_TYPE __BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__32 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21f9a0c size 0x20c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21f9c18 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelPackCollection*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__32(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelPackCollection*> __t__builder,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__32();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelPackCollection*> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__32, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__32, __u__1) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass35_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4384))
// CS Name: ::BeatmapLevelsModel::<>c__DisplayClass35_0*
class CORDL_TYPE __BeatmapLevelsModel____c__DisplayClass35_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field levelId, offset 0x10, size 0x8
  __declspec(property(get = __get_levelId, put = __set_levelId))::StringW levelId;

  constexpr ::StringW& __get_levelId();

  constexpr ::StringW const& __get_levelId() const;

  constexpr void __set_levelId(::StringW value);

  static inline ::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass35_0* New_ctor();

  /// @brief Method .ctor addr 0x21f9480 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetLevelPreviewForLevelId>b__1 addr 0x21f9c70 size 0xac virtual false final false
  inline bool _GetLevelPreviewForLevelId_b__1(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsModel____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelsModel____c__DisplayClass35_0(__BeatmapLevelsModel____c__DisplayClass35_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsModel____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelsModel____c__DisplayClass35_0(__BeatmapLevelsModel____c__DisplayClass35_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelsModel____c__DisplayClass35_0();

public:
  /// @brief Field levelId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___levelId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass35_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass35_0, ___levelId) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4385))
// CS Name: ::BeatmapLevelsModel::<>c*
class CORDL_TYPE __BeatmapLevelsModel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__BeatmapLevelsModel____c* __9;

  /// @brief Field <>9__35_0, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF___9__35_0,
               put = setStaticF___9__35_0))::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>* __9__35_0;

  static inline void setStaticF___9(::GlobalNamespace::__BeatmapLevelsModel____c* value);

  static inline ::GlobalNamespace::__BeatmapLevelsModel____c* getStaticF___9();

  static inline void setStaticF___9__35_0(::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>* value);

  static inline ::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>* getStaticF___9__35_0();

  static inline ::GlobalNamespace::__BeatmapLevelsModel____c* New_ctor();

  /// @brief Method .ctor addr 0x21f9d80 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetLevelPreviewForLevelId>b__35_0 addr 0x21f9d88 size 0x114 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IPreviewBeatmapLevel*>* _GetLevelPreviewForLevelId_b__35_0(::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsModel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelsModel____c(__BeatmapLevelsModel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsModel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelsModel____c(__BeatmapLevelsModel____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelsModel____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetBeatmapLevelAsync>d__38
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 883 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 280 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 889 }), TypeDefinitionIndex(TypeDefinitionIndex(4358)), TypeDefinitionIndex(TypeDefinitionIndex(3389)),
// TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(4380)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 887 }),
// TypeDefinitionIndex(TypeDefinitionIndex(15614)), TypeDefinitionIndex(TypeDefinitionIndex(4122)), TypeDefinitionIndex(TypeDefinitionIndex(2675))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4386))
// CS Name: ::BeatmapLevelsModel::<GetBeatmapLevelAsync>d__38
struct CORDL_TYPE __BeatmapLevelsModel___GetBeatmapLevelAsync_d__38 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21f9e9c size 0x6b0 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21fa54c size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this",
  // ty: "::GlobalNamespace::BeatmapLevelsModel*", modifiers: "", def_value: None }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "_beatmapLevel_5__2", ty:
  // "::GlobalNamespace::IBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "_loadLevelResult_5__3", ty: "::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult", modifiers:
  // "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>", modifiers: "", def_value: None }, CppParam { name: "__u__3",
  // ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelsModel___GetBeatmapLevelAsync_d__38(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> __t__builder,
      ::GlobalNamespace::BeatmapLevelsModel* __4__this, ::StringW levelID, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __u__1, ::GlobalNamespace::IBeatmapLevel* _beatmapLevel_5__2,
      ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult _loadLevelResult_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*> __u__2,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult> __u__3) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelsModel___GetBeatmapLevelAsync_d__38();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* __4__this;

  /// @brief Field levelID, offset: 0x28, size: 0x8, def value: None
  ::StringW levelID;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __u__1;

  /// @brief Field <beatmapLevel>5__2, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevel* _beatmapLevel_5__2;

  /// @brief Field <loadLevelResult>5__3, offset: 0x48, size: 0x10, def value: None
  ::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult _loadLevelResult_5__3;

  /// @brief Field <>u__2, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*> __u__2;

  /// @brief Field <>u__3, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelResult> __u__3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__38, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__38, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__38, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__38, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__38, levelID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__38, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__38, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__38, _beatmapLevel_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__38, _loadLevelResult_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__38, __u__2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__38, __u__3) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelsModel
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4387))
// CS Name: ::BeatmapLevelsModel*
class CORDL_TYPE BeatmapLevelsModel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _GetBeatmapLevelAsync_d__38 = ::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__38;

  using __c = ::GlobalNamespace::__BeatmapLevelsModel____c;

  using __c__DisplayClass35_0 = ::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass35_0;

  using _ReloadCustomLevelPackCollectionAsync_d__32 = ::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__32;

  using LevelDownloadingUpdate = ::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate;

  using GetBeatmapLevelResult = ::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult;

  /// @brief Field _dlcLevelPackCollectionContainer, offset 0x18, size 0x8
  __declspec(property(get = __get__dlcLevelPackCollectionContainer,
                      put = __set__dlcLevelPackCollectionContainer))::GlobalNamespace::BeatmapLevelPackCollectionContainerSO* _dlcLevelPackCollectionContainer;

  /// @brief Field _ostAndExtrasPackCollection, offset 0x20, size 0x8
  __declspec(property(get = __get__ostAndExtrasPackCollection, put = __set__ostAndExtrasPackCollection))::GlobalNamespace::BeatmapLevelPackCollectionSO* _ostAndExtrasPackCollection;

  /// @brief Field _beatmapLevelDataLoader, offset 0x28, size 0x8
  __declspec(property(get = __get__beatmapLevelDataLoader, put = __set__beatmapLevelDataLoader))::GlobalNamespace::BeatmapLevelDataLoaderSO* _beatmapLevelDataLoader;

  /// @brief Field _maxCachedBeatmapLevels, offset 0x30, size 0x4
  __declspec(property(get = __get__maxCachedBeatmapLevels, put = __set__maxCachedBeatmapLevels)) int32_t _maxCachedBeatmapLevels;

  /// @brief Field _additionalContentModel, offset 0x38, size 0x8
  __declspec(property(get = __get__additionalContentModel, put = __set__additionalContentModel))::GlobalNamespace::AdditionalContentModel* _additionalContentModel;

  /// @brief Field _beatmapDataAssetFileModel, offset 0x40, size 0x8
  __declspec(property(get = __get__beatmapDataAssetFileModel, put = __set__beatmapDataAssetFileModel))::GlobalNamespace::IBeatmapDataAssetFileModel* _beatmapDataAssetFileModel;

  /// @brief Field _audioClipAsyncLoader, offset 0x48, size 0x8
  __declspec(property(get = __get__audioClipAsyncLoader, put = __set__audioClipAsyncLoader))::GlobalNamespace::AudioClipAsyncLoader* _audioClipAsyncLoader;

  /// @brief Field levelDownloadingUpdateEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_levelDownloadingUpdateEvent,
                      put = __set_levelDownloadingUpdateEvent))::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>* levelDownloadingUpdateEvent;

  /// @brief Field _allLoadedBeatmapLevelPackCollection, offset 0x58, size 0x8
  __declspec(property(get = __get__allLoadedBeatmapLevelPackCollection,
                      put = __set__allLoadedBeatmapLevelPackCollection))::GlobalNamespace::IBeatmapLevelPackCollection* _allLoadedBeatmapLevelPackCollection;

  /// @brief Field _allLoadedBeatmapLevelWithoutCustomLevelPackCollection, offset 0x60, size 0x8
  __declspec(property(get = __get__allLoadedBeatmapLevelWithoutCustomLevelPackCollection,
                      put = __set__allLoadedBeatmapLevelWithoutCustomLevelPackCollection))::GlobalNamespace::IBeatmapLevelPackCollection* _allLoadedBeatmapLevelWithoutCustomLevelPackCollection;

  /// @brief Field _customLevelPackCollection, offset 0x68, size 0x8
  __declspec(property(get = __get__customLevelPackCollection, put = __set__customLevelPackCollection))::GlobalNamespace::IBeatmapLevelPackCollection* _customLevelPackCollection;

  /// @brief Field _loadedBeatmapLevels, offset 0x70, size 0x8
  __declspec(property(get = __get__loadedBeatmapLevels, put = __set__loadedBeatmapLevels))::GlobalNamespace::HMCache_2<::StringW, ::GlobalNamespace::IBeatmapLevel*>* _loadedBeatmapLevels;

  /// @brief Field _loadedPreviewBeatmapLevels, offset 0x78, size 0x8
  __declspec(property(get = __get__loadedPreviewBeatmapLevels,
                      put = __set__loadedPreviewBeatmapLevels))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IPreviewBeatmapLevel*>* _loadedPreviewBeatmapLevels;

  /// @brief Field _beatmapLevelLoader, offset 0x80, size 0x8
  __declspec(property(get = __get__beatmapLevelLoader, put = __set__beatmapLevelLoader))::GlobalNamespace::BeatmapLevelLoader* _beatmapLevelLoader;

  __declspec(property(get = get_ostAndExtrasPackCollection))::GlobalNamespace::BeatmapLevelPackCollectionSO* ostAndExtrasPackCollection;

  __declspec(property(get = get_dlcBeatmapLevelPackCollection))::GlobalNamespace::IBeatmapLevelPackCollection* dlcBeatmapLevelPackCollection;

  __declspec(property(get = get_allLoadedBeatmapLevelPackCollection))::GlobalNamespace::IBeatmapLevelPackCollection* allLoadedBeatmapLevelPackCollection;

  __declspec(property(get = get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection))::GlobalNamespace::IBeatmapLevelPackCollection* allLoadedBeatmapLevelWithoutCustomLevelPackCollection;

  __declspec(property(get = get_customLevelPackCollection))::GlobalNamespace::IBeatmapLevelPackCollection* customLevelPackCollection;

  constexpr ::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*& __get__dlcLevelPackCollectionContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*> const& __get__dlcLevelPackCollectionContainer() const;

  constexpr void __set__dlcLevelPackCollectionContainer(::GlobalNamespace::BeatmapLevelPackCollectionContainerSO* value);

  constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO*& __get__ostAndExtrasPackCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> const& __get__ostAndExtrasPackCollection() const;

  constexpr void __set__ostAndExtrasPackCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO* value);

  constexpr ::GlobalNamespace::BeatmapLevelDataLoaderSO*& __get__beatmapLevelDataLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelDataLoaderSO*> const& __get__beatmapLevelDataLoader() const;

  constexpr void __set__beatmapLevelDataLoader(::GlobalNamespace::BeatmapLevelDataLoaderSO* value);

  constexpr int32_t& __get__maxCachedBeatmapLevels();

  constexpr int32_t const& __get__maxCachedBeatmapLevels() const;

  constexpr void __set__maxCachedBeatmapLevels(int32_t value);

  constexpr ::GlobalNamespace::AdditionalContentModel*& __get__additionalContentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AdditionalContentModel*> const& __get__additionalContentModel() const;

  constexpr void __set__additionalContentModel(::GlobalNamespace::AdditionalContentModel* value);

  constexpr ::GlobalNamespace::IBeatmapDataAssetFileModel*& __get__beatmapDataAssetFileModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapDataAssetFileModel*> const& __get__beatmapDataAssetFileModel() const;

  constexpr void __set__beatmapDataAssetFileModel(::GlobalNamespace::IBeatmapDataAssetFileModel* value);

  constexpr ::GlobalNamespace::AudioClipAsyncLoader*& __get__audioClipAsyncLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipAsyncLoader*> const& __get__audioClipAsyncLoader() const;

  constexpr void __set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value);

  constexpr ::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>*& __get_levelDownloadingUpdateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>*> const& __get_levelDownloadingUpdateEvent() const;

  constexpr void __set_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>* value);

  constexpr ::GlobalNamespace::IBeatmapLevelPackCollection*& __get__allLoadedBeatmapLevelPackCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPackCollection*> const& __get__allLoadedBeatmapLevelPackCollection() const;

  constexpr void __set__allLoadedBeatmapLevelPackCollection(::GlobalNamespace::IBeatmapLevelPackCollection* value);

  constexpr ::GlobalNamespace::IBeatmapLevelPackCollection*& __get__allLoadedBeatmapLevelWithoutCustomLevelPackCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPackCollection*> const& __get__allLoadedBeatmapLevelWithoutCustomLevelPackCollection() const;

  constexpr void __set__allLoadedBeatmapLevelWithoutCustomLevelPackCollection(::GlobalNamespace::IBeatmapLevelPackCollection* value);

  constexpr ::GlobalNamespace::IBeatmapLevelPackCollection*& __get__customLevelPackCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPackCollection*> const& __get__customLevelPackCollection() const;

  constexpr void __set__customLevelPackCollection(::GlobalNamespace::IBeatmapLevelPackCollection* value);

  constexpr ::GlobalNamespace::HMCache_2<::StringW, ::GlobalNamespace::IBeatmapLevel*>*& __get__loadedBeatmapLevels();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HMCache_2<::StringW, ::GlobalNamespace::IBeatmapLevel*>*> const& __get__loadedBeatmapLevels() const;

  constexpr void __set__loadedBeatmapLevels(::GlobalNamespace::HMCache_2<::StringW, ::GlobalNamespace::IBeatmapLevel*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IPreviewBeatmapLevel*>*& __get__loadedPreviewBeatmapLevels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IPreviewBeatmapLevel*>*> const& __get__loadedPreviewBeatmapLevels() const;

  constexpr void __set__loadedPreviewBeatmapLevels(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IPreviewBeatmapLevel*>* value);

  constexpr ::GlobalNamespace::BeatmapLevelLoader*& __get__beatmapLevelLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelLoader*> const& __get__beatmapLevelLoader() const;

  constexpr void __set__beatmapLevelLoader(::GlobalNamespace::BeatmapLevelLoader* value);

  /// @brief Method add_levelDownloadingUpdateEvent addr 0x21f81fc size 0xb0 virtual false final false
  inline void add_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>* value);

  /// @brief Method remove_levelDownloadingUpdateEvent addr 0x21f82ac size 0xb0 virtual false final false
  inline void remove_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>* value);

  /// @brief Method get_ostAndExtrasPackCollection addr 0x21f835c size 0x8 virtual false final false
  inline ::GlobalNamespace::BeatmapLevelPackCollectionSO* get_ostAndExtrasPackCollection();

  /// @brief Method get_dlcBeatmapLevelPackCollection addr 0x21f8364 size 0x1c virtual false final false
  inline ::GlobalNamespace::IBeatmapLevelPackCollection* get_dlcBeatmapLevelPackCollection();

  /// @brief Method get_allLoadedBeatmapLevelPackCollection addr 0x21f8380 size 0x8 virtual false final false
  inline ::GlobalNamespace::IBeatmapLevelPackCollection* get_allLoadedBeatmapLevelPackCollection();

  /// @brief Method get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection addr 0x21f8388 size 0x8 virtual false final false
  inline ::GlobalNamespace::IBeatmapLevelPackCollection* get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection();

  /// @brief Method get_customLevelPackCollection addr 0x21f8390 size 0x8 virtual false final false
  inline ::GlobalNamespace::IBeatmapLevelPackCollection* get_customLevelPackCollection();

  /// @brief Method Init addr 0x21f8398 size 0x130 virtual false final false
  inline void Init();

  /// @brief Method Start addr 0x21f8a2c size 0xec virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x21f8b18 size 0x16c virtual false final false
  inline void OnDestroy();

  /// @brief Method ClearLoadedBeatmapLevelsCaches addr 0x21f8c84 size 0x50 virtual false final false
  inline void ClearLoadedBeatmapLevelsCaches();

  /// @brief Method ReloadCustomLevelPackCollectionAsync addr 0x21f8cd4 size 0xe4 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelPackCollection*>* ReloadCustomLevelPackCollectionAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetLevelPackForLevelId addr 0x21f8db8 size 0x554 virtual false final false
  inline ::GlobalNamespace::IBeatmapLevelPack* GetLevelPackForLevelId(::StringW levelId);

  /// @brief Method GetLevelPack addr 0x21f930c size 0x174 virtual false final false
  inline ::GlobalNamespace::IBeatmapLevelPack* GetLevelPack(::StringW levePacklId);

  /// @brief Method GetLevelPreviewForLevelId addr 0x21f5570 size 0x220 virtual false final false
  inline ::GlobalNamespace::IPreviewBeatmapLevel* GetLevelPreviewForLevelId(::StringW levelId);

  /// @brief Method IsBeatmapLevelLoaded addr 0x21f9488 size 0xdc virtual false final false
  inline bool IsBeatmapLevelLoaded(::StringW levelId);

  /// @brief Method GetBeatmapLevelIfLoaded addr 0x21f9564 size 0x110 virtual false final false
  inline ::GlobalNamespace::IBeatmapLevel* GetBeatmapLevelIfLoaded(::StringW levelId);

  /// @brief Method GetBeatmapLevelAsync addr 0x21f9674 size 0x114 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>* GetBeatmapLevelAsync(::StringW levelID,
                                                                                                                                  ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method HandleLevelDataAssetDownloadUpdate addr 0x21f9788 size 0x50 virtual false final false
  inline void HandleLevelDataAssetDownloadUpdate(::GlobalNamespace::LevelDataAssetDownloadUpdate update);

  /// @brief Method HandleItemWillBeRemovedFromCache addr 0x21f97e8 size 0x1c virtual false final false
  inline void HandleItemWillBeRemovedFromCache(::GlobalNamespace::IBeatmapLevel* beatmapLevel);

  /// @brief Method UpdateLoadedPreviewLevels addr 0x21f84c8 size 0x564 virtual false final false
  inline void UpdateLoadedPreviewLevels();

  /// @brief Method UpdateAllLoadedBeatmapLevelPacks addr 0x21f9804 size 0x174 virtual false final false
  inline void UpdateAllLoadedBeatmapLevelPacks();

  static inline ::GlobalNamespace::BeatmapLevelsModel* New_ctor();

  /// @brief Method .ctor addr 0x21f9978 size 0x84 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelsModel(BeatmapLevelsModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelsModel(BeatmapLevelsModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelsModel();

public:
  /// @brief Field _dlcLevelPackCollectionContainer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPackCollectionContainerSO* ____dlcLevelPackCollectionContainer;

  /// @brief Field _ostAndExtrasPackCollection, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPackCollectionSO* ____ostAndExtrasPackCollection;

  /// @brief Field _beatmapLevelDataLoader, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelDataLoaderSO* ____beatmapLevelDataLoader;

  /// @brief Field _maxCachedBeatmapLevels, offset: 0x30, size: 0x4, def value: None
  int32_t ____maxCachedBeatmapLevels;

  /// @brief Field _additionalContentModel, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::AdditionalContentModel* ____additionalContentModel;

  /// @brief Field _beatmapDataAssetFileModel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapDataAssetFileModel* ____beatmapDataAssetFileModel;

  /// @brief Field _audioClipAsyncLoader, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* ____audioClipAsyncLoader;

  /// @brief Field levelDownloadingUpdateEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate>* ___levelDownloadingUpdateEvent;

  /// @brief Field _allLoadedBeatmapLevelPackCollection, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelPackCollection* ____allLoadedBeatmapLevelPackCollection;

  /// @brief Field _allLoadedBeatmapLevelWithoutCustomLevelPackCollection, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelPackCollection* ____allLoadedBeatmapLevelWithoutCustomLevelPackCollection;

  /// @brief Field _customLevelPackCollection, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelPackCollection* ____customLevelPackCollection;

  /// @brief Field _loadedBeatmapLevels, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::HMCache_2<::StringW, ::GlobalNamespace::IBeatmapLevel*>* ____loadedBeatmapLevels;

  /// @brief Field _loadedPreviewBeatmapLevels, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::IPreviewBeatmapLevel*>* ____loadedPreviewBeatmapLevels;

  /// @brief Field _beatmapLevelLoader, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelLoader* ____beatmapLevelLoader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelsModel, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____dlcLevelPackCollectionContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____ostAndExtrasPackCollection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____beatmapLevelDataLoader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____maxCachedBeatmapLevels) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____additionalContentModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____beatmapDataAssetFileModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____audioClipAsyncLoader) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ___levelDownloadingUpdateEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____allLoadedBeatmapLevelPackCollection) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____allLoadedBeatmapLevelWithoutCustomLevelPackCollection) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____customLevelPackCollection) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____loadedBeatmapLevels) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____loadedPreviewBeatmapLevels) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____beatmapLevelLoader) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState, "", "BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelsModel*, "", "BeatmapLevelsModel");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelsModel____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel____c*, "", "BeatmapLevelsModel/<>c");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel____c__DisplayClass35_0*, "", "BeatmapLevelsModel/<>c__DisplayClass35_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult, "", "BeatmapLevelsModel/GetBeatmapLevelResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel__LevelDownloadingUpdate, "", "BeatmapLevelsModel/LevelDownloadingUpdate");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelAsync_d__38, "", "BeatmapLevelsModel/<GetBeatmapLevelAsync>d__38");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__32, "", "BeatmapLevelsModel/<ReloadCustomLevelPackCollectionAsync>d__32");
