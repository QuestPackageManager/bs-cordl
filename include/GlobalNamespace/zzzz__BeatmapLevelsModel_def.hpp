#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsRepository_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelsModel)
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
class BeatmapLevelDataLoader;
}
namespace GlobalNamespace {
class BeatmapLevelLoader;
}
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelsEntitlementModel;
}
namespace GlobalNamespace {
class BeatmapLevelsRepository;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace GlobalNamespace {
class IAdditionalContentEntitlementModel;
}
namespace GlobalNamespace {
class IBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class IBeatmapLevelsModel;
}
namespace GlobalNamespace {
class PackDefinitionSO;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader__LevelDownloadingUpdate;
}
namespace GlobalNamespace {
struct __BeatmapLevelLoader__LoadBeatmapLevelDataResult;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__GetBeatmapLevelDataResult;
}
namespace GlobalNamespace {
class __BeatmapLevelsModel__InitData;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__27;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel___GetBeatmapLevelDataAsync_d__26;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__20;
}
namespace GlobalNamespace {
class __BeatmapLevelsModel___SelectPacks_d__30;
}
namespace GlobalNamespace {
class __BeatmapLevelsModel____c;
}
namespace GlobalNamespace {
struct __PackDefinitionSO__Tags;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
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
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class __BeatmapLevelsModel__InitData;
}
namespace GlobalNamespace {
class __BeatmapLevelsModel___SelectPacks_d__30;
}
namespace GlobalNamespace {
class __BeatmapLevelsModel____c;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__GetBeatmapLevelDataResult;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__27;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel___GetBeatmapLevelDataAsync_d__26;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__20;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelsModel);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelsModel__InitData);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__30);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelsModel____c);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelDataResult);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__27);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelDataAsync_d__26);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__20);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelsModel::InitData*
class CORDL_TYPE __BeatmapLevelsModel__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field maxCachedBeatmapLevels, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_maxCachedBeatmapLevels, put = __cordl_internal_set_maxCachedBeatmapLevels)) int32_t maxCachedBeatmapLevels;

  static inline ::GlobalNamespace::__BeatmapLevelsModel__InitData* New_ctor(int32_t maxCachedBeatmapLevels);

  constexpr int32_t const& __cordl_internal_get_maxCachedBeatmapLevels() const;

  constexpr int32_t& __cordl_internal_get_maxCachedBeatmapLevels();

  constexpr void __cordl_internal_set_maxCachedBeatmapLevels(int32_t value);

  /// @brief Method .ctor, addr 0x12cad68, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxCachedBeatmapLevels);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelsModel__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsModel__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelsModel__InitData(__BeatmapLevelsModel__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsModel__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelsModel__InitData(__BeatmapLevelsModel__InitData const&) = delete;

  /// @brief Field maxCachedBeatmapLevels, offset: 0x10, size: 0x4, def value: None
  int32_t ___maxCachedBeatmapLevels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel__InitData, ___maxCachedBeatmapLevels) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GetBeatmapLevelDataResult
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapLevelsModel::GetBeatmapLevelDataResult
struct CORDL_TYPE __BeatmapLevelsModel__GetBeatmapLevelDataResult {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x12cad90, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool isError, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelsModel__GetBeatmapLevelDataResult();

  // Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "",
  // def_value: None }]
  constexpr __BeatmapLevelsModel__GetBeatmapLevelDataResult(bool isError, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) noexcept;

  /// @brief Field isError, offset: 0x0, size: 0x1, def value: None
  bool isError;

  /// @brief Field beatmapLevelData, offset: 0x8, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelDataResult, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelDataResult, isError) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelDataResult, beatmapLevelData) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ReloadCustomLevelPackCollectionAsync>d__20
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapLevelsModel::<ReloadCustomLevelPackCollectionAsync>d__20
struct CORDL_TYPE __BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x12cada0, size 0x20c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x12cafac, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__20();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelsRepository*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelsRepository*>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__20(int32_t __1__state,
                                                                              ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelsRepository*> __t__builder,
                                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelsRepository*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelsRepository*> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelsRepository*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__20, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__20, __u__1) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetBeatmapLevelDataAsync>d__26
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapLevelsModel::<GetBeatmapLevelDataAsync>d__26
struct CORDL_TYPE __BeatmapLevelsModel___GetBeatmapLevelDataAsync_d__26 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x12cb004, size 0x350, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x12cb354, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelsModel___GetBeatmapLevelDataAsync_d__26();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelDataResult>", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::GlobalNamespace::BeatmapLevelsModel*", modifiers: "", def_value: None }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelsModel___GetBeatmapLevelDataAsync_d__26(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelDataResult> __t__builder,
      ::GlobalNamespace::BeatmapLevelsModel* __4__this, ::StringW levelID, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelDataResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* __4__this;

  /// @brief Field levelID, offset: 0x28, size: 0x8, def value: None
  ::StringW levelID;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelLoader__LoadBeatmapLevelDataResult> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelDataAsync_d__26, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelDataAsync_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelDataAsync_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelDataAsync_d__26, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelDataAsync_d__26, levelID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelDataAsync_d__26, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelDataAsync_d__26, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelDataAsync_d__26, __u__2) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<CheckBeatmapLevelDataExistsAsync>d__27
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapLevelsModel::<CheckBeatmapLevelDataExistsAsync>d__27
struct CORDL_TYPE __BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__27 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x12cb3ac, size 0x340, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x12cb6ec, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__27();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelsModel*", modifiers: "",
  // def_value: None }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam {
  // name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__27(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                          ::GlobalNamespace::BeatmapLevelsModel* __4__this, ::StringW levelID, ::System::Threading::CancellationToken cancellationToken,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* __4__this;

  /// @brief Field levelID, offset: 0x28, size: 0x8, def value: None
  ::StringW levelID;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__27, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__27, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__27, levelID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__27, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__27, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__27, __u__2) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<SelectPacks>d__30
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelsModel::<SelectPacks>d__30*
class CORDL_TYPE __BeatmapLevelsModel___SelectPacks_d__30 : public ::System::Object {
public:
  // Declarations
  __declspec(property(
      get = System_Collections_Generic_IEnumerator_PackDefinitionSO__get_Current))::UnityW<::GlobalNamespace::PackDefinitionSO> System_Collections_Generic_IEnumerator_PackDefinitionSO__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::UnityW<::GlobalNamespace::PackDefinitionSO> __2__current;

  /// @brief Field <>3__exclude, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get___3__exclude, put = __cordl_internal_set___3__exclude))::GlobalNamespace::__PackDefinitionSO__Tags __3__exclude;

  /// @brief Field <>3__include, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get___3__include, put = __cordl_internal_set___3__include))::GlobalNamespace::__PackDefinitionSO__Tags __3__include;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::GlobalNamespace::BeatmapLevelsModel* __4__this;

  /// @brief Field <>7__wrap1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1))::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2)) int32_t __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field exclude, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_exclude, put = __cordl_internal_set_exclude))::GlobalNamespace::__PackDefinitionSO__Tags exclude;

  /// @brief Field include, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_include, put = __cordl_internal_set_include))::GlobalNamespace::__PackDefinitionSO__Tags include;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x12cb748, size 0xd8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__30* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<PackDefinitionSO>.GetEnumerator, addr 0x12cb870, size 0xb4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* System_Collections_Generic_IEnumerable_PackDefinitionSO__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<PackDefinitionSO>.get_Current, addr 0x12cb820, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::PackDefinitionSO> System_Collections_Generic_IEnumerator_PackDefinitionSO__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x12cb924, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x12cb828, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x12cb868, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x12cb744, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::GlobalNamespace::PackDefinitionSO> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::PackDefinitionSO>& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags const& __cordl_internal_get___3__exclude() const;

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags& __cordl_internal_get___3__exclude();

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags const& __cordl_internal_get___3__include() const;

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags& __cordl_internal_get___3__include();

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get___4__this() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___7__wrap2() const;

  constexpr int32_t& __cordl_internal_get___7__wrap2();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags const& __cordl_internal_get_exclude() const;

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags& __cordl_internal_get_exclude();

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags const& __cordl_internal_get_include() const;

  constexpr ::GlobalNamespace::__PackDefinitionSO__Tags& __cordl_internal_get_include();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::GlobalNamespace::PackDefinitionSO> value);

  constexpr void __cordl_internal_set___3__exclude(::GlobalNamespace::__PackDefinitionSO__Tags value);

  constexpr void __cordl_internal_set___3__include(::GlobalNamespace::__PackDefinitionSO__Tags value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set___7__wrap1(::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> value);

  constexpr void __cordl_internal_set___7__wrap2(int32_t value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_exclude(::GlobalNamespace::__PackDefinitionSO__Tags value);

  constexpr void __cordl_internal_set_include(::GlobalNamespace::__PackDefinitionSO__Tags value);

  /// @brief Method .ctor, addr 0x12cab90, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*
  i___System__Collections__Generic__IEnumerable_1___UnityW___GlobalNamespace__PackDefinitionSO__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*
  i___System__Collections__Generic__IEnumerator_1___UnityW___GlobalNamespace__PackDefinitionSO__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelsModel___SelectPacks_d__30();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsModel___SelectPacks_d__30", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelsModel___SelectPacks_d__30(__BeatmapLevelsModel___SelectPacks_d__30&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsModel___SelectPacks_d__30", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelsModel___SelectPacks_d__30(__BeatmapLevelsModel___SelectPacks_d__30 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PackDefinitionSO> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* _____4__this;

  /// @brief Field include, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__PackDefinitionSO__Tags ___include;

  /// @brief Field <>3__include, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::__PackDefinitionSO__Tags _____3__include;

  /// @brief Field exclude, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::__PackDefinitionSO__Tags ___exclude;

  /// @brief Field <>3__exclude, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::__PackDefinitionSO__Tags _____3__exclude;

  /// @brief Field <>7__wrap1, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x48, size: 0x4, def value: None
  int32_t _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__30, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__30, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__30, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__30, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__30, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__30, ___include) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__30, _____3__include) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__30, ___exclude) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__30, _____3__exclude) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__30, _____7__wrap1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__30, _____7__wrap2) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelsModel::<>c*
class CORDL_TYPE __BeatmapLevelsModel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__BeatmapLevelsModel____c* __9;

  /// @brief Field <>9__33_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__33_0, put = setStaticF___9__33_0))::System::Func_2<::UnityW<::GlobalNamespace::BeatmapLevelSO>, ::GlobalNamespace::BeatmapLevel*>* __9__33_0;

  static inline ::GlobalNamespace::__BeatmapLevelsModel____c* New_ctor();

  /// @brief Method <CreateBeatmapLevelPack>b__33_0, addr 0x12cb994, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevel* _CreateBeatmapLevelPack_b__33_0(::GlobalNamespace::BeatmapLevelSO* l);

  /// @brief Method .ctor, addr 0x12cb98c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__BeatmapLevelsModel____c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::BeatmapLevelSO>, ::GlobalNamespace::BeatmapLevel*>* getStaticF___9__33_0();

  static inline void setStaticF___9(::GlobalNamespace::__BeatmapLevelsModel____c* value);

  static inline void setStaticF___9__33_0(::System::Func_2<::UnityW<::GlobalNamespace::BeatmapLevelSO>, ::GlobalNamespace::BeatmapLevel*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelsModel____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsModel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelsModel____c(__BeatmapLevelsModel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsModel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelsModel____c(__BeatmapLevelsModel____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsModel____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelsModel
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelsModel*
class CORDL_TYPE BeatmapLevelsModel : public ::System::Object {
public:
  // Declarations
  using GetBeatmapLevelDataResult = ::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelDataResult;

  using InitData = ::GlobalNamespace::__BeatmapLevelsModel__InitData;

  using _CheckBeatmapLevelDataExistsAsync_d__27 = ::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__27;

  using _GetBeatmapLevelDataAsync_d__26 = ::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelDataAsync_d__26;

  using _ReloadCustomLevelPackCollectionAsync_d__20 = ::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__20;

  using _SelectPacks_d__30 = ::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__30;

  using __c = ::GlobalNamespace::__BeatmapLevelsModel____c;

  /// @brief Field _allLoadedBeatmapLevelWithoutCustomLevelsRepository, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__allLoadedBeatmapLevelWithoutCustomLevelsRepository,
                      put = __cordl_internal_set__allLoadedBeatmapLevelWithoutCustomLevelsRepository))::GlobalNamespace::BeatmapLevelsRepository* _allLoadedBeatmapLevelWithoutCustomLevelsRepository;

  /// @brief Field _allLoadedBeatmapLevelsRepository, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__allLoadedBeatmapLevelsRepository,
                      put = __cordl_internal_set__allLoadedBeatmapLevelsRepository))::GlobalNamespace::BeatmapLevelsRepository* _allLoadedBeatmapLevelsRepository;

  /// @brief Field _beatmapLevelLoader, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelLoader, put = __cordl_internal_set__beatmapLevelLoader))::GlobalNamespace::BeatmapLevelLoader* _beatmapLevelLoader;

  /// @brief Field _beatmapLevelsEntitlementModel, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsEntitlementModel,
                      put = __cordl_internal_set__beatmapLevelsEntitlementModel))::GlobalNamespace::BeatmapLevelsEntitlementModel* _beatmapLevelsEntitlementModel;

  /// @brief Field _loadedBeatmapLevels, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__loadedBeatmapLevels,
                      put = __cordl_internal_set__loadedBeatmapLevels))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevel*>* _loadedBeatmapLevels;

  /// @brief Field _packDefinitions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__packDefinitions,
                      put = __cordl_internal_set__packDefinitions))::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> _packDefinitions;

  /// @brief Field allPacksCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_allPacksCount, put = __cordl_internal_set_allPacksCount)) int32_t allPacksCount;

  /// @brief Field dlcBeatmapLevelsRepository, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_dlcBeatmapLevelsRepository,
                      put = __cordl_internal_set_dlcBeatmapLevelsRepository))::GlobalNamespace::BeatmapLevelsRepository* dlcBeatmapLevelsRepository;

  /// @brief Field levelDownloadingUpdateEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelDownloadingUpdateEvent,
                      put = __cordl_internal_set_levelDownloadingUpdateEvent))::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>* levelDownloadingUpdateEvent;

  /// @brief Field ostAndExtrasPackCollection, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ostAndExtrasPackCollection,
                      put = __cordl_internal_set_ostAndExtrasPackCollection))::GlobalNamespace::BeatmapLevelsRepository* ostAndExtrasPackCollection;

  __declspec(property(get = get_packDefinitions))::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelsModel"
  constexpr operator ::GlobalNamespace::IBeatmapLevelsModel*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method CheckBeatmapLevelDataExistsAsync, addr 0x12ca9c0, size 0x110, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* CheckBeatmapLevelDataExistsAsync(::StringW levelID, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ClearLoadedBeatmapLevelsCaches, addr 0x12ca63c, size 0x50, virtual false, abstract: false, final false
  inline void ClearLoadedBeatmapLevelsCaches();

  /// @brief Method CreateBeatmapLevelPack, addr 0x12ca000, size 0x19c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapLevelPack* CreateBeatmapLevelPack(::GlobalNamespace::PackDefinitionSO* pack);

  /// @brief Method Dispose, addr 0x12ca5a8, size 0x94, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetAllPacks, addr 0x12ca7a0, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* GetAllPacks();

  /// @brief Method GetBeatmapLevelDataAsync, addr 0x12ca8b0, size 0x110, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelDataResult>* GetBeatmapLevelDataAsync(::StringW levelID,
                                                                                                                                          ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetBeatmapLevelForLevelId, addr 0x12ca7bc, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevel* GetBeatmapLevelForLevelId(::StringW levelId);

  /// @brief Method GetLevelEntitlementStatusAsync, addr 0x12caad0, size 0x18, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusAsync(::StringW levelId, ::System::Threading::CancellationToken token);

  /// @brief Method GetLevelPack, addr 0x12ca788, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelPack* GetLevelPack(::StringW levelPackId);

  /// @brief Method GetLevelPackForLevelId, addr 0x12ca770, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelPack* GetLevelPackForLevelId(::StringW levelId);

  /// @brief Method GetPackAndLevelPreviewForLevelId, addr 0x12ca7d4, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapLevel*>> GetPackAndLevelPreviewForLevelId(::StringW levelId);

  /// @brief Method GetPackEntitlementStatusAsync, addr 0x12caae8, size 0x18, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);

  /// @brief Method HandleBeatmapLevelLoaderLevelDownloadingUpdate, addr 0x12cad4c, size 0x1c, virtual false, abstract: false, final false
  inline void HandleBeatmapLevelLoaderLevelDownloadingUpdate(::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate update);

  /// @brief Method Initialize, addr 0x12ca514, size 0x94, virtual true, abstract: false, final true
  inline void Initialize();

  static inline ::GlobalNamespace::BeatmapLevelsModel* New_ctor(::GlobalNamespace::__BeatmapLevelsModel__InitData* initData,
                                                                ::GlobalNamespace::IAdditionalContentEntitlementModel* additionalContentModel,
                                                                ::GlobalNamespace::IBeatmapDataAssetFileModel* beatmapDataAssetFileModel, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader,
                                                                ::GlobalNamespace::BeatmapLevelDataLoader* beatmapLevelDataLoader,
                                                                ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method ReloadCustomLevelPackCollectionAsync, addr 0x12ca68c, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelsRepository*>* ReloadCustomLevelPackCollectionAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SelectPacks, addr 0x12cab00, size 0x90, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* SelectPacks(::GlobalNamespace::__PackDefinitionSO__Tags include,
                                                                                                                   ::GlobalNamespace::__PackDefinitionSO__Tags exclude);

  /// @brief Method UpdateAllLoadedBeatmapLevelPacks, addr 0x12cabc4, size 0x188, virtual false, abstract: false, final false
  inline void UpdateAllLoadedBeatmapLevelPacks();

  /// @brief Method UpdateLoadedPreviewLevels, addr 0x12ca19c, size 0x378, virtual false, abstract: false, final false
  inline void UpdateLoadedPreviewLevels();

  constexpr ::GlobalNamespace::BeatmapLevelsRepository*& __cordl_internal_get__allLoadedBeatmapLevelWithoutCustomLevelsRepository();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsRepository*> const& __cordl_internal_get__allLoadedBeatmapLevelWithoutCustomLevelsRepository() const;

  constexpr ::GlobalNamespace::BeatmapLevelsRepository*& __cordl_internal_get__allLoadedBeatmapLevelsRepository();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsRepository*> const& __cordl_internal_get__allLoadedBeatmapLevelsRepository() const;

  constexpr ::GlobalNamespace::BeatmapLevelLoader*& __cordl_internal_get__beatmapLevelLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelLoader*> const& __cordl_internal_get__beatmapLevelLoader() const;

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& __cordl_internal_get__beatmapLevelsEntitlementModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsEntitlementModel*> const& __cordl_internal_get__beatmapLevelsEntitlementModel() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevel*>*& __cordl_internal_get__loadedBeatmapLevels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevel*>*> const& __cordl_internal_get__loadedBeatmapLevels() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get__packDefinitions() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>& __cordl_internal_get__packDefinitions();

  constexpr int32_t const& __cordl_internal_get_allPacksCount() const;

  constexpr int32_t& __cordl_internal_get_allPacksCount();

  constexpr ::GlobalNamespace::BeatmapLevelsRepository*& __cordl_internal_get_dlcBeatmapLevelsRepository();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsRepository*> const& __cordl_internal_get_dlcBeatmapLevelsRepository() const;

  constexpr ::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>*& __cordl_internal_get_levelDownloadingUpdateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>*> const& __cordl_internal_get_levelDownloadingUpdateEvent() const;

  constexpr ::GlobalNamespace::BeatmapLevelsRepository*& __cordl_internal_get_ostAndExtrasPackCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsRepository*> const& __cordl_internal_get_ostAndExtrasPackCollection() const;

  constexpr void __cordl_internal_set__allLoadedBeatmapLevelWithoutCustomLevelsRepository(::GlobalNamespace::BeatmapLevelsRepository* value);

  constexpr void __cordl_internal_set__allLoadedBeatmapLevelsRepository(::GlobalNamespace::BeatmapLevelsRepository* value);

  constexpr void __cordl_internal_set__beatmapLevelLoader(::GlobalNamespace::BeatmapLevelLoader* value);

  constexpr void __cordl_internal_set__beatmapLevelsEntitlementModel(::GlobalNamespace::BeatmapLevelsEntitlementModel* value);

  constexpr void __cordl_internal_set__loadedBeatmapLevels(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevel*>* value);

  constexpr void __cordl_internal_set__packDefinitions(::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> value);

  constexpr void __cordl_internal_set_allPacksCount(int32_t value);

  constexpr void __cordl_internal_set_dlcBeatmapLevelsRepository(::GlobalNamespace::BeatmapLevelsRepository* value);

  constexpr void __cordl_internal_set_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>* value);

  constexpr void __cordl_internal_set_ostAndExtrasPackCollection(::GlobalNamespace::BeatmapLevelsRepository* value);

  /// @brief Method .ctor, addr 0x12c9c70, size 0x390, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__BeatmapLevelsModel__InitData* initData, ::GlobalNamespace::IAdditionalContentEntitlementModel* additionalContentModel,
                    ::GlobalNamespace::IBeatmapDataAssetFileModel* beatmapDataAssetFileModel, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader,
                    ::GlobalNamespace::BeatmapLevelDataLoader* beatmapLevelDataLoader, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method add_levelDownloadingUpdateEvent, addr 0x12c9b08, size 0xb0, virtual false, abstract: false, final false
  inline void add_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>* value);

  /// @brief Method get_packDefinitions, addr 0x12c9c68, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* get_packDefinitions();

  /// @brief Convert to "::GlobalNamespace::IBeatmapLevelsModel"
  constexpr ::GlobalNamespace::IBeatmapLevelsModel* i___GlobalNamespace__IBeatmapLevelsModel() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

  /// @brief Method remove_levelDownloadingUpdateEvent, addr 0x12c9bb8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_levelDownloadingUpdateEvent(::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelsModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelsModel(BeatmapLevelsModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelsModel(BeatmapLevelsModel const&) = delete;

  /// @brief Field levelDownloadingUpdateEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::__BeatmapLevelLoader__LevelDownloadingUpdate>* ___levelDownloadingUpdateEvent;

  /// @brief Field ostAndExtrasPackCollection, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsRepository* ___ostAndExtrasPackCollection;

  /// @brief Field dlcBeatmapLevelsRepository, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsRepository* ___dlcBeatmapLevelsRepository;

  /// @brief Field allPacksCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___allPacksCount;

  /// @brief Field _packDefinitions, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> ____packDefinitions;

  /// @brief Field _allLoadedBeatmapLevelsRepository, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsRepository* ____allLoadedBeatmapLevelsRepository;

  /// @brief Field _allLoadedBeatmapLevelWithoutCustomLevelsRepository, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsRepository* ____allLoadedBeatmapLevelWithoutCustomLevelsRepository;

  /// @brief Field _beatmapLevelsEntitlementModel, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsEntitlementModel* ____beatmapLevelsEntitlementModel;

  /// @brief Field _loadedBeatmapLevels, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevel*>* ____loadedBeatmapLevels;

  /// @brief Field _beatmapLevelLoader, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelLoader* ____beatmapLevelLoader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelsModel, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ___levelDownloadingUpdateEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ___ostAndExtrasPackCollection) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ___dlcBeatmapLevelsRepository) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ___allPacksCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____packDefinitions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____allLoadedBeatmapLevelsRepository) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____allLoadedBeatmapLevelWithoutCustomLevelsRepository) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____beatmapLevelsEntitlementModel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____loadedBeatmapLevels) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____beatmapLevelLoader) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelsModel*, "", "BeatmapLevelsModel");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelsModel__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel__InitData*, "", "BeatmapLevelsModel/InitData");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__30);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__30*, "", "BeatmapLevelsModel/<SelectPacks>d__30");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelsModel____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel____c*, "", "BeatmapLevelsModel/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelDataResult, "", "BeatmapLevelsModel/GetBeatmapLevelDataResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__27, "", "BeatmapLevelsModel/<CheckBeatmapLevelDataExistsAsync>d__27");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel___GetBeatmapLevelDataAsync_d__26, "", "BeatmapLevelsModel/<GetBeatmapLevelDataAsync>d__26");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__20, "", "BeatmapLevelsModel/<ReloadCustomLevelPackCollectionAsync>d__20");
