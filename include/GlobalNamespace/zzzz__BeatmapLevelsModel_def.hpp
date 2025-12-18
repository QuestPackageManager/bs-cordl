#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelsModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_def.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelsModel)
namespace BGLib::Polyglot {
class LocalizationModel;
}
namespace GlobalNamespace {
struct BeatmapLevelDataVersion;
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
struct BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28;
}
namespace GlobalNamespace {
struct BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27;
}
namespace GlobalNamespace {
class BeatmapLevelsModel__SelectPacks_d__29;
}
namespace GlobalNamespace {
class BeatmapLevelsModel___c__DisplayClass33_0;
}
namespace GlobalNamespace {
class BeatmapLevelsRepository;
}
namespace GlobalNamespace {
class IBeatmapLevelLoader;
}
namespace GlobalNamespace {
class IEntitlementModel;
}
namespace GlobalNamespace {
class IPlayerDataModel;
}
namespace GlobalNamespace {
struct LoadBeatmapLevelDataResult;
}
namespace GlobalNamespace {
struct PackDefinitionSO_Tags;
}
namespace GlobalNamespace {
class PackDefinitionSO;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
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
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel__SelectPacks_d__29;
}
namespace GlobalNamespace {
class BeatmapLevelsModel___c__DisplayClass33_0;
}
namespace GlobalNamespace {
struct BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28;
}
namespace GlobalNamespace {
struct BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelsModel);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0);
MARK_VAL_T(::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28);
MARK_VAL_T(::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27);
// Dependencies PlayerSensitivityFlag, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelsModel/<>c__DisplayClass33_0
class CORDL_TYPE BeatmapLevelsModel___c__DisplayClass33_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::BeatmapLevelsModel* __4__this;

  /// @brief Field censoredLocalizedSongName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_censoredLocalizedSongName, put = __cordl_internal_set_censoredLocalizedSongName)) ::StringW censoredLocalizedSongName;

  /// @brief Field desiredSensitivityFlag, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_desiredSensitivityFlag, put = __cordl_internal_set_desiredSensitivityFlag)) ::GlobalNamespace::PlayerSensitivityFlag desiredSensitivityFlag;

  /// @brief Field pack, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_pack, put = __cordl_internal_set_pack)) ::UnityW<::GlobalNamespace::PackDefinitionSO> pack;

  static inline ::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0* New_ctor();

  /// @brief Method <CreateBeatmapLevelPack>g__ShouldBeKeptIntact|1, addr 0x362a330, size 0x98, virtual false, abstract: false, final false
  inline bool _CreateBeatmapLevelPack_g__ShouldBeKeptIntact_1(::GlobalNamespace::BeatmapLevel* level);

  /// @brief Method <CreateBeatmapLevelPack>g__ToRuntime|0, addr 0x362a25c, size 0xd4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevel* _CreateBeatmapLevelPack_g__ToRuntime_0(::GlobalNamespace::BeatmapLevelSO* level);

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_censoredLocalizedSongName() const;

  constexpr ::StringW& __cordl_internal_get_censoredLocalizedSongName();

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __cordl_internal_get_desiredSensitivityFlag() const;

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __cordl_internal_get_desiredSensitivityFlag();

  constexpr ::UnityW<::GlobalNamespace::PackDefinitionSO> const& __cordl_internal_get_pack() const;

  constexpr ::UnityW<::GlobalNamespace::PackDefinitionSO>& __cordl_internal_get_pack();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set_censoredLocalizedSongName(::StringW value);

  constexpr void __cordl_internal_set_desiredSensitivityFlag(::GlobalNamespace::PlayerSensitivityFlag value);

  constexpr void __cordl_internal_set_pack(::UnityW<::GlobalNamespace::PackDefinitionSO> value);

  /// @brief Method .ctor, addr 0x362a244, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelsModel___c__DisplayClass33_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsModel___c__DisplayClass33_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelsModel___c__DisplayClass33_0(BeatmapLevelsModel___c__DisplayClass33_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsModel___c__DisplayClass33_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelsModel___c__DisplayClass33_0(BeatmapLevelsModel___c__DisplayClass33_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14947 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* _____4__this;

  /// @brief Field desiredSensitivityFlag, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ___desiredSensitivityFlag;

  /// @brief Field pack, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PackDefinitionSO> ___pack;

  /// @brief Field censoredLocalizedSongName, offset: 0x28, size: 0x8, def value: None
  ::StringW ___censoredLocalizedSongName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0, ___desiredSensitivityFlag) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0, ___pack) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0, ___censoredLocalizedSongName) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapLevelDataVersion, EntitlementStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>,
// System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapLevelsModel/<CheckBeatmapLevelDataExistsAsync>d__28
struct CORDL_TYPE BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x362a3c8, size 0x474, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x362a83c, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelsModel*", modifiers: "",
  // def_value: None }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
  // "", def_value: None }, CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "", def_value: None }, CppParam { name: "_beatmapLevel_5__2", ty:
  // "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                                       ::GlobalNamespace::BeatmapLevelsModel* __4__this, ::StringW levelID, ::System::Threading::CancellationToken cancellationToken,
                                                                       ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__2,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14948 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

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

  /// @brief Field beatmapLevelDataVersion, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion;

  /// @brief Field <beatmapLevel>5__2, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28, levelID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28, beatmapLevelDataVersion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28, _beatmapLevel_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28, __u__2) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapLevelDataVersion, EntitlementStatus, LoadBeatmapLevelDataResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapLevelsModel/<LoadBeatmapLevelDataAsync>d__27
struct CORDL_TYPE BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x362a8bc, size 0x49c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x362ad58, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::BeatmapLevelsModel*", modifiers: "", def_value: None }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken",
  // ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelDataVersion", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "",
  // def_value: None }, CppParam { name: "_beatmapLevel_5__2", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: None }]
  constexpr BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27(int32_t __1__state,
                                                                ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __t__builder,
                                                                ::GlobalNamespace::BeatmapLevelsModel* __4__this, ::StringW levelID, ::System::Threading::CancellationToken cancellationToken,
                                                                ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__2,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14949 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* __4__this;

  /// @brief Field levelID, offset: 0x28, size: 0x8, def value: None
  ::StringW levelID;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field beatmapLevelDataVersion, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion;

  /// @brief Field <beatmapLevel>5__2, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27, levelID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27, beatmapLevelDataVersion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27, _beatmapLevel_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27, __u__2) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PackDefinitionSO::Tags, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelsModel/<SelectPacks>d__29
class CORDL_TYPE BeatmapLevelsModel__SelectPacks_d__29 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_PackDefinitionSO__get_Current)) ::UnityW<::GlobalNamespace::PackDefinitionSO>
      System_Collections_Generic_IEnumerator_PackDefinitionSO__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityW<::GlobalNamespace::PackDefinitionSO> __2__current;

  /// @brief Field <>3__exclude, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get___3__exclude, put = __cordl_internal_set___3__exclude)) ::GlobalNamespace::PackDefinitionSO_Tags __3__exclude;

  /// @brief Field <>3__include, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get___3__include, put = __cordl_internal_set___3__include)) ::GlobalNamespace::PackDefinitionSO_Tags __3__include;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::BeatmapLevelsModel* __4__this;

  /// @brief Field <>7__wrap1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>
      __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2)) int32_t __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field exclude, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_exclude, put = __cordl_internal_set_exclude)) ::GlobalNamespace::PackDefinitionSO_Tags exclude;

  /// @brief Field include, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_include, put = __cordl_internal_set_include)) ::GlobalNamespace::PackDefinitionSO_Tags include;

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

  /// @brief Method MoveNext, addr 0x362addc, size 0xd4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<PackDefinitionSO>.GetEnumerator, addr 0x362aef8, size 0xa8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* System_Collections_Generic_IEnumerable_PackDefinitionSO__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<PackDefinitionSO>.get_Current, addr 0x362aeb0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::GlobalNamespace::PackDefinitionSO> System_Collections_Generic_IEnumerator_PackDefinitionSO__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x362afa0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x362aeb8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x362aef0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x362add8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::GlobalNamespace::PackDefinitionSO> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::PackDefinitionSO>& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::PackDefinitionSO_Tags const& __cordl_internal_get___3__exclude() const;

  constexpr ::GlobalNamespace::PackDefinitionSO_Tags& __cordl_internal_get___3__exclude();

  constexpr ::GlobalNamespace::PackDefinitionSO_Tags const& __cordl_internal_get___3__include() const;

  constexpr ::GlobalNamespace::PackDefinitionSO_Tags& __cordl_internal_get___3__include();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get___4__this();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___7__wrap2() const;

  constexpr int32_t& __cordl_internal_get___7__wrap2();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::GlobalNamespace::PackDefinitionSO_Tags const& __cordl_internal_get_exclude() const;

  constexpr ::GlobalNamespace::PackDefinitionSO_Tags& __cordl_internal_get_exclude();

  constexpr ::GlobalNamespace::PackDefinitionSO_Tags const& __cordl_internal_get_include() const;

  constexpr ::GlobalNamespace::PackDefinitionSO_Tags& __cordl_internal_get_include();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::GlobalNamespace::PackDefinitionSO> value);

  constexpr void __cordl_internal_set___3__exclude(::GlobalNamespace::PackDefinitionSO_Tags value);

  constexpr void __cordl_internal_set___3__include(::GlobalNamespace::PackDefinitionSO_Tags value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set___7__wrap1(::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> value);

  constexpr void __cordl_internal_set___7__wrap2(int32_t value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_exclude(::GlobalNamespace::PackDefinitionSO_Tags value);

  constexpr void __cordl_internal_set_include(::GlobalNamespace::PackDefinitionSO_Tags value);

  /// @brief Method .ctor, addr 0x3629e8c, size 0x20, virtual false, abstract: false, final false
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
  constexpr BeatmapLevelsModel__SelectPacks_d__29();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsModel__SelectPacks_d__29", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelsModel__SelectPacks_d__29(BeatmapLevelsModel__SelectPacks_d__29&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsModel__SelectPacks_d__29", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelsModel__SelectPacks_d__29(BeatmapLevelsModel__SelectPacks_d__29 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14950 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PackDefinitionSO> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* _____4__this;

  /// @brief Field include, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::PackDefinitionSO_Tags ___include;

  /// @brief Field <>3__include, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::PackDefinitionSO_Tags _____3__include;

  /// @brief Field exclude, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::PackDefinitionSO_Tags ___exclude;

  /// @brief Field <>3__exclude, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::PackDefinitionSO_Tags _____3__exclude;

  /// @brief Field <>7__wrap1, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x48, size: 0x4, def value: None
  int32_t _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29, ___include) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29, _____3__include) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29, ___exclude) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29, _____3__exclude) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29, _____7__wrap1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29, _____7__wrap2) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelsModel
class CORDL_TYPE BeatmapLevelsModel : public ::System::Object {
public:
  // Declarations
  using _CheckBeatmapLevelDataExistsAsync_d__28 = ::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28;

  using _LoadBeatmapLevelDataAsync_d__27 = ::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27;

  using _SelectPacks_d__29 = ::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29;

  using __c__DisplayClass33_0 = ::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0;

  /// @brief Field _allExistingBeatmapLevelsRepository, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__allExistingBeatmapLevelsRepository,
                      put = __cordl_internal_set__allExistingBeatmapLevelsRepository)) ::GlobalNamespace::BeatmapLevelsRepository* _allExistingBeatmapLevelsRepository;

  /// @brief Field _allLoadedBeatmapLevelsRepository, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__allLoadedBeatmapLevelsRepository,
                      put = __cordl_internal_set__allLoadedBeatmapLevelsRepository)) ::GlobalNamespace::BeatmapLevelsRepository* _allLoadedBeatmapLevelsRepository;

  /// @brief Field _entitlements, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlements, put = __cordl_internal_set__entitlements)) ::GlobalNamespace::BeatmapLevelsEntitlementModel* _entitlements;

  /// @brief Field _excludedLevelIds, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__excludedLevelIds, put = __cordl_internal_set__excludedLevelIds)) ::System::Collections::Generic::List_1<::StringW>* _excludedLevelIds;

  /// @brief Field _localizationModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__localizationModel, put = __cordl_internal_set__localizationModel)) ::BGLib::Polyglot::LocalizationModel* _localizationModel;

  /// @brief Field _packDefinitions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__packDefinitions,
                      put = __cordl_internal_set__packDefinitions)) ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>
      _packDefinitions;

  /// @brief Field _playerDataModel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::GlobalNamespace::IPlayerDataModel* _playerDataModel;

  /// @brief Field allPacksCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_allPacksCount, put = __cordl_internal_set_allPacksCount)) int32_t allPacksCount;

  /// @brief Field dlcBeatmapLevelsRepository, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_dlcBeatmapLevelsRepository,
                      put = __cordl_internal_set_dlcBeatmapLevelsRepository)) ::GlobalNamespace::BeatmapLevelsRepository* dlcBeatmapLevelsRepository;

  __declspec(property(get = get_entitlements)) ::GlobalNamespace::IEntitlementModel* entitlements;

  /// @brief Field levelLoader, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_levelLoader, put = __cordl_internal_set_levelLoader)) ::GlobalNamespace::IBeatmapLevelLoader* levelLoader;

  /// @brief Field newPackWasCreatedFromDefinitionEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_newPackWasCreatedFromDefinitionEvent,
                      put = __cordl_internal_set_newPackWasCreatedFromDefinitionEvent)) ::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* newPackWasCreatedFromDefinitionEvent;

  /// @brief Field ostAndExtrasBeatmapLevelsRepository, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ostAndExtrasBeatmapLevelsRepository,
                      put = __cordl_internal_set_ostAndExtrasBeatmapLevelsRepository)) ::GlobalNamespace::BeatmapLevelsRepository* ostAndExtrasBeatmapLevelsRepository;

  __declspec(property(get = get_packDefinitions)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CheckBeatmapLevelDataExistsAsync, addr 0x3629d00, size 0x108, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* CheckBeatmapLevelDataExistsAsync(::StringW levelID, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion,
                                                                                    ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ClearLoadedBeatmapLevelsCaches, addr 0x3629a84, size 0xa8, virtual false, abstract: false, final false
  inline void ClearLoadedBeatmapLevelsCaches();

  /// @brief Method CreateBeatmapLevelPack, addr 0x3629f6c, size 0x2d8, virtual false, abstract: false, final false
  inline ::System::ValueTuple_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapLevelPack*>
  CreateBeatmapLevelPack(::GlobalNamespace::PackDefinitionSO* pack, ::GlobalNamespace::PlayerSensitivityFlag desiredSensitivityFlag, ::StringW censoredLocalizedSongName);

  /// @brief Method Dispose, addr 0x36299e0, size 0xa4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetAllPacks, addr 0x3629bc8, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>* GetAllPacks();

  /// @brief Method GetBeatmapLevel, addr 0x3629be0, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevel* GetBeatmapLevel(::StringW levelId, bool ignoreCase);

  /// @brief Method GetLevelPack, addr 0x3629bb0, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelPack* GetLevelPack(::StringW levelPackId, bool ignoreCase);

  /// @brief Method GetLevelPackForLevelId, addr 0x3629b9c, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelPack* GetLevelPackForLevelId(::StringW levelId);

  /// @brief Method LoadAllBeatmapLevelPacks, addr 0x362951c, size 0x4c4, virtual false, abstract: false, final false
  inline void LoadAllBeatmapLevelPacks();

  /// @brief Method LoadBeatmapLevelDataAsync, addr 0x3629bf8, size 0x108, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>*
  LoadBeatmapLevelDataAsync(::StringW levelID, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::BeatmapLevelsModel* New_ctor(::GlobalNamespace::BeatmapLevelsEntitlementModel* entitlementChecker, ::GlobalNamespace::IBeatmapLevelLoader* beatmapLevelLoader,
                                                                ::GlobalNamespace::IPlayerDataModel* playerDataModel, ::BGLib::Polyglot::LocalizationModel* localizationModel,
                                                                ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method ReloadAllBeatmapLevelPacks, addr 0x3629eac, size 0x4, virtual false, abstract: false, final false
  inline void ReloadAllBeatmapLevelPacks();

  /// @brief Method ReloadCustomLevelPackCollectionAsync, addr 0x3629b2c, size 0x70, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelsRepository*>* ReloadCustomLevelPackCollectionAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SelectPacks, addr 0x3629e08, size 0x84, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* SelectPacks(::GlobalNamespace::PackDefinitionSO_Tags include,
                                                                                                                   ::GlobalNamespace::PackDefinitionSO_Tags exclude);

  /// @brief Method SetExcludedLevelIdsAndReload, addr 0x3629eb0, size 0xbc, virtual false, abstract: false, final false
  inline void SetExcludedLevelIdsAndReload(::System::Collections::Generic::IEnumerable_1<::StringW>* excludedLevelIds);

  /// @brief Method <CreateBeatmapLevelPack>g__IsSensitivitySafe|33_2, addr 0x362a248, size 0x14, virtual false, abstract: false, final false
  static inline bool _CreateBeatmapLevelPack_g__IsSensitivitySafe_33_2(::GlobalNamespace::PlayerSensitivityFlag desiredSensitivityFlag, ::GlobalNamespace::PlayerSensitivityFlag contentRating);

  constexpr ::GlobalNamespace::BeatmapLevelsRepository* const& __cordl_internal_get__allExistingBeatmapLevelsRepository() const;

  constexpr ::GlobalNamespace::BeatmapLevelsRepository*& __cordl_internal_get__allExistingBeatmapLevelsRepository();

  constexpr ::GlobalNamespace::BeatmapLevelsRepository* const& __cordl_internal_get__allLoadedBeatmapLevelsRepository() const;

  constexpr ::GlobalNamespace::BeatmapLevelsRepository*& __cordl_internal_get__allLoadedBeatmapLevelsRepository();

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel* const& __cordl_internal_get__entitlements() const;

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& __cordl_internal_get__entitlements();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__excludedLevelIds() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__excludedLevelIds();

  constexpr ::BGLib::Polyglot::LocalizationModel* const& __cordl_internal_get__localizationModel() const;

  constexpr ::BGLib::Polyglot::LocalizationModel*& __cordl_internal_get__localizationModel();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const& __cordl_internal_get__packDefinitions() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>& __cordl_internal_get__packDefinitions();

  constexpr ::GlobalNamespace::IPlayerDataModel* const& __cordl_internal_get__playerDataModel() const;

  constexpr ::GlobalNamespace::IPlayerDataModel*& __cordl_internal_get__playerDataModel();

  constexpr int32_t const& __cordl_internal_get_allPacksCount() const;

  constexpr int32_t& __cordl_internal_get_allPacksCount();

  constexpr ::GlobalNamespace::BeatmapLevelsRepository* const& __cordl_internal_get_dlcBeatmapLevelsRepository() const;

  constexpr ::GlobalNamespace::BeatmapLevelsRepository*& __cordl_internal_get_dlcBeatmapLevelsRepository();

  constexpr ::GlobalNamespace::IBeatmapLevelLoader* const& __cordl_internal_get_levelLoader() const;

  constexpr ::GlobalNamespace::IBeatmapLevelLoader*& __cordl_internal_get_levelLoader();

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* const& __cordl_internal_get_newPackWasCreatedFromDefinitionEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>*& __cordl_internal_get_newPackWasCreatedFromDefinitionEvent();

  constexpr ::GlobalNamespace::BeatmapLevelsRepository* const& __cordl_internal_get_ostAndExtrasBeatmapLevelsRepository() const;

  constexpr ::GlobalNamespace::BeatmapLevelsRepository*& __cordl_internal_get_ostAndExtrasBeatmapLevelsRepository();

  constexpr void __cordl_internal_set__allExistingBeatmapLevelsRepository(::GlobalNamespace::BeatmapLevelsRepository* value);

  constexpr void __cordl_internal_set__allLoadedBeatmapLevelsRepository(::GlobalNamespace::BeatmapLevelsRepository* value);

  constexpr void __cordl_internal_set__entitlements(::GlobalNamespace::BeatmapLevelsEntitlementModel* value);

  constexpr void __cordl_internal_set__excludedLevelIds(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__localizationModel(::BGLib::Polyglot::LocalizationModel* value);

  constexpr void __cordl_internal_set__packDefinitions(::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> value);

  constexpr void __cordl_internal_set__playerDataModel(::GlobalNamespace::IPlayerDataModel* value);

  constexpr void __cordl_internal_set_allPacksCount(int32_t value);

  constexpr void __cordl_internal_set_dlcBeatmapLevelsRepository(::GlobalNamespace::BeatmapLevelsRepository* value);

  constexpr void __cordl_internal_set_levelLoader(::GlobalNamespace::IBeatmapLevelLoader* value);

  constexpr void __cordl_internal_set_newPackWasCreatedFromDefinitionEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* value);

  constexpr void __cordl_internal_set_ostAndExtrasBeatmapLevelsRepository(::GlobalNamespace::BeatmapLevelsRepository* value);

  /// @brief Method .ctor, addr 0x36291c4, size 0x358, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelsEntitlementModel* entitlementChecker, ::GlobalNamespace::IBeatmapLevelLoader* beatmapLevelLoader,
                    ::GlobalNamespace::IPlayerDataModel* playerDataModel, ::BGLib::Polyglot::LocalizationModel* localizationModel,
                    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions);

  /// @brief Method add_newPackWasCreatedFromDefinitionEvent, addr 0x3629044, size 0xc0, virtual false, abstract: false, final false
  inline void add_newPackWasCreatedFromDefinitionEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* value);

  /// @brief Method get_entitlements, addr 0x362903c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IEntitlementModel* get_entitlements();

  /// @brief Method get_packDefinitions, addr 0x3629034, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* get_packDefinitions();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_newPackWasCreatedFromDefinitionEvent, addr 0x3629104, size 0xc0, virtual false, abstract: false, final false
  inline void remove_newPackWasCreatedFromDefinitionEvent(::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14951 };

  /// @brief Field kExplicitSongLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kExplicitSongLocalizationKey{ u"EXPLICIT_SONG" };

  /// @brief Field ostAndExtrasBeatmapLevelsRepository, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsRepository* ___ostAndExtrasBeatmapLevelsRepository;

  /// @brief Field dlcBeatmapLevelsRepository, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsRepository* ___dlcBeatmapLevelsRepository;

  /// @brief Field allPacksCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___allPacksCount;

  /// @brief Field levelLoader, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelLoader* ___levelLoader;

  /// @brief Field _packDefinitions, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> ____packDefinitions;

  /// @brief Field _playerDataModel, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IPlayerDataModel* ____playerDataModel;

  /// @brief Field _localizationModel, offset: 0x40, size: 0x8, def value: None
  ::BGLib::Polyglot::LocalizationModel* ____localizationModel;

  /// @brief Field _entitlements, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsEntitlementModel* ____entitlements;

  /// @brief Field _excludedLevelIds, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____excludedLevelIds;

  /// @brief Field _allLoadedBeatmapLevelsRepository, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsRepository* ____allLoadedBeatmapLevelsRepository;

  /// @brief Field _allExistingBeatmapLevelsRepository, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsRepository* ____allExistingBeatmapLevelsRepository;

  /// @brief Field newPackWasCreatedFromDefinitionEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::BeatmapLevelPack*>* ___newPackWasCreatedFromDefinitionEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ___ostAndExtrasBeatmapLevelsRepository) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ___dlcBeatmapLevelsRepository) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ___allPacksCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ___levelLoader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____packDefinitions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____playerDataModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____localizationModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____entitlements) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____excludedLevelIds) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____allLoadedBeatmapLevelsRepository) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ____allExistingBeatmapLevelsRepository) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsModel, ___newPackWasCreatedFromDefinitionEvent) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelsModel, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelsModel*, "", "BeatmapLevelsModel");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelsModel__SelectPacks_d__29*, "", "BeatmapLevelsModel/<SelectPacks>d__29");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelsModel___c__DisplayClass33_0*, "", "BeatmapLevelsModel/<>c__DisplayClass33_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelsModel__CheckBeatmapLevelDataExistsAsync_d__28, "", "BeatmapLevelsModel/<CheckBeatmapLevelDataExistsAsync>d__28");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelsModel__LoadBeatmapLevelDataAsync_d__27, "", "BeatmapLevelsModel/<LoadBeatmapLevelDataAsync>d__27");
