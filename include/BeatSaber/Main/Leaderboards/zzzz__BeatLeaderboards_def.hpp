#pragma once
// IWYU pragma private; include "BeatSaber/Main/Leaderboards/BeatLeaderboards.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Main/Leaderboards/zzzz__BeatLeaderboardsState_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatLeaderboards)
namespace BeatSaber::Main::GraphQL::Models {
class BSLeaderboardAroundMeModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BSLeaderboardFriendsModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BSLeaderboardHealthModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BSLeaderboardTopNModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BSUpsertLeaderboardEntryModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class BSUpsertUserModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel;
}
namespace BeatSaber::Main::GraphQL::Models {
class LeaderboardEntryWithRankModel;
}
namespace BeatSaber::Main::Leaderboards {
struct BeatLeaderboardsState;
}
namespace BeatSaber::Main::Leaderboards {
class BeatLeaderboards_FetchLeaderboardTypeFunction;
}
namespace BeatSaber::Main::Leaderboards {
struct BeatLeaderboards__GetLeaderboardAsync_d__17;
}
namespace BeatSaber::Main::Leaderboards {
struct BeatLeaderboards__InitializeAsync_d__11;
}
namespace BeatSaber::Main::Leaderboards {
struct BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12;
}
namespace BeatSaber::Main::Leaderboards {
class BeatLeaderboards___c__DisplayClass13_0;
}
namespace BeatSaber::Main::Leaderboards {
class BeatLeaderboards___c__DisplayClass13_1;
}
namespace BeatSaber::Main::Leaderboards {
class BeatLeaderboards___c__DisplayClass14_0;
}
namespace BeatSaber::Main::Leaderboards {
class BeatLeaderboards___c__DisplayClass14_1;
}
namespace BeatSaber::Main::Leaderboards {
class BeatLeaderboards___c__DisplayClass15_0;
}
namespace BeatSaber::Main::Leaderboards {
class BeatLeaderboards___c__DisplayClass15_1;
}
namespace BeatSaber::Main::Leaderboards {
struct __c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d;
}
namespace BeatSaber::Main::Leaderboards {
struct __c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d;
}
namespace BeatSaber::Main::Leaderboards {
struct __c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
struct GameplayModifierMask;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLClient;
}
namespace OculusStudios::Platform::Core {
class IPlatform;
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
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Zenject {
class IInitializable;
}
namespace Zenject {
class ITickable;
}
// Forward declare root types
namespace BeatSaber::Main::Leaderboards {
class BeatLeaderboards;
}
namespace BeatSaber::Main::Leaderboards {
class BeatLeaderboards_FetchLeaderboardTypeFunction;
}
namespace BeatSaber::Main::Leaderboards {
class BeatLeaderboards___c__DisplayClass13_0;
}
namespace BeatSaber::Main::Leaderboards {
class BeatLeaderboards___c__DisplayClass13_1;
}
namespace BeatSaber::Main::Leaderboards {
class BeatLeaderboards___c__DisplayClass14_0;
}
namespace BeatSaber::Main::Leaderboards {
class BeatLeaderboards___c__DisplayClass14_1;
}
namespace BeatSaber::Main::Leaderboards {
class BeatLeaderboards___c__DisplayClass15_0;
}
namespace BeatSaber::Main::Leaderboards {
class BeatLeaderboards___c__DisplayClass15_1;
}
namespace BeatSaber::Main::Leaderboards {
struct BeatLeaderboards__GetLeaderboardAsync_d__17;
}
namespace BeatSaber::Main::Leaderboards {
struct BeatLeaderboards__InitializeAsync_d__11;
}
namespace BeatSaber::Main::Leaderboards {
struct BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12;
}
namespace BeatSaber::Main::Leaderboards {
struct __c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d;
}
namespace BeatSaber::Main::Leaderboards {
struct __c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d;
}
namespace BeatSaber::Main::Leaderboards {
struct __c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Main::Leaderboards::BeatLeaderboards);
MARK_REF_PTR_T(::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction);
MARK_REF_PTR_T(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0);
MARK_REF_PTR_T(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1);
MARK_REF_PTR_T(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0);
MARK_REF_PTR_T(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1);
MARK_REF_PTR_T(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0);
MARK_REF_PTR_T(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1);
MARK_VAL_T(::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17);
MARK_VAL_T(::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11);
MARK_VAL_T(::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12);
MARK_VAL_T(::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d);
MARK_VAL_T(::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d);
MARK_VAL_T(::BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d);
// Dependencies System.MulticastDelegate
namespace BeatSaber::Main::Leaderboards {
// Is value type: false
// CS Name: BeatSaber.Main.Leaderboards.BeatLeaderboards/FetchLeaderboardTypeFunction
class CORDL_TYPE BeatLeaderboards_FetchLeaderboardTypeFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x31cd388, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x31cd3a4, size 0xc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>* EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x31cd374, size 0x14, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>* Invoke();

  static inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x31cd00c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatLeaderboards_FetchLeaderboardTypeFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatLeaderboards_FetchLeaderboardTypeFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatLeaderboards_FetchLeaderboardTypeFunction(BeatLeaderboards_FetchLeaderboardTypeFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatLeaderboards_FetchLeaderboardTypeFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatLeaderboards_FetchLeaderboardTypeFunction(BeatLeaderboards_FetchLeaderboardTypeFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20954 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction, 0x80>, "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BeatSaber::Main::Leaderboards {
// Is value type: true
// CS Name: BeatSaber.Main.Leaderboards.BeatLeaderboards/<>c__DisplayClass13_0/<<GetLeaderboardAroundMeAsync>g__GetLeaderboardAroundMeInternal|0>d
struct CORDL_TYPE __c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x31cd490, size 0x4b4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x31cda00, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel*>", modifiers: "", def_value: None }]
  constexpr __c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*> __t__builder,
      ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0* __4__this, ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1* __8__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20955 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0* __4__this;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1* __8__1;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardAroundMeModel*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d, __1__state) == 0x0,
              "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d, __t__builder) == 0x8,
              "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d, __4__this) == 0x20,
              "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d, __8__1) == 0x28,
              "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d, __u__1) == 0x30,
              "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d, 0x38>,
              "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
// Dependencies BeatmapKey, GameplayModifierMask, System.Object
namespace BeatSaber::Main::Leaderboards {
// Is value type: false
// CS Name: BeatSaber.Main.Leaderboards.BeatLeaderboards/<>c__DisplayClass13_0
class CORDL_TYPE BeatLeaderboards___c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  using __GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d =
      ::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d;

  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::BeatSaber::Main::Leaderboards::BeatLeaderboards* __4__this;

  /// @brief Field key, offset 0x18, size 0x20
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::GlobalNamespace::BeatmapKey key;

  /// @brief Field modifiers, offset 0x38, size 0x2
  __declspec(property(get = __cordl_internal_get_modifiers, put = __cordl_internal_set_modifiers)) ::GlobalNamespace::GameplayModifierMask modifiers;

  static inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0* New_ctor();

  /// @brief Method <GetLeaderboardAroundMeAsync>g__GetLeaderboardAroundMeInternal|0, addr 0x31cd3b0, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
  _GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0();

  constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards* const& __cordl_internal_get___4__this() const;

  constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards*& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get_key() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get_key();

  constexpr ::GlobalNamespace::GameplayModifierMask const& __cordl_internal_get_modifiers() const;

  constexpr ::GlobalNamespace::GameplayModifierMask& __cordl_internal_get_modifiers();

  constexpr void __cordl_internal_set___4__this(::BeatSaber::Main::Leaderboards::BeatLeaderboards* value);

  constexpr void __cordl_internal_set_key(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set_modifiers(::GlobalNamespace::GameplayModifierMask value);

  /// @brief Method .ctor, addr 0x31cd008, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatLeaderboards___c__DisplayClass13_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatLeaderboards___c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatLeaderboards___c__DisplayClass13_0(BeatLeaderboards___c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatLeaderboards___c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatLeaderboards___c__DisplayClass13_0(BeatLeaderboards___c__DisplayClass13_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20956 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::Leaderboards::BeatLeaderboards* _____4__this;

  /// @brief Field key, offset: 0x18, size: 0x20, def value: None
  ::GlobalNamespace::BeatmapKey ___key;

  /// @brief Field modifiers, offset: 0x38, size: 0x2, def value: None
  ::GlobalNamespace::GameplayModifierMask ___modifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0, ___key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0, ___modifiers) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0, 0x40>, "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
// Dependencies System.Object
namespace BeatSaber::Main::Leaderboards {
// Is value type: false
// CS Name: BeatSaber.Main.Leaderboards.BeatLeaderboards/<>c__DisplayClass13_1
class CORDL_TYPE BeatLeaderboards___c__DisplayClass13_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field result, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_result,
                      put = __cordl_internal_set_result)) ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>* result;

  static inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1* New_ctor();

  /// @brief Method <GetLeaderboardAroundMeAsync>b__1, addr 0x31cda80, size 0x114, virtual false, abstract: false, final false
  inline void _GetLeaderboardAroundMeAsync_b__1(
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesAroundPlayerPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardAroundMeModel_NodesModel* node);

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>* const& __cordl_internal_get_result() const;

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*& __cordl_internal_get_result();

  constexpr void __cordl_internal_set_result(::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>* value);

  /// @brief Method .ctor, addr 0x31cd944, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatLeaderboards___c__DisplayClass13_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatLeaderboards___c__DisplayClass13_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatLeaderboards___c__DisplayClass13_1(BeatLeaderboards___c__DisplayClass13_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatLeaderboards___c__DisplayClass13_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatLeaderboards___c__DisplayClass13_1(BeatLeaderboards___c__DisplayClass13_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20957 };

  /// @brief Field result, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>* ___result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1, ___result) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BeatSaber::Main::Leaderboards {
// Is value type: true
// CS Name: BeatSaber.Main.Leaderboards.BeatLeaderboards/<>c__DisplayClass14_0/<<GetLeaderboardFriendsAsync>g__GetLeaderboardFriendsInternal|0>d
struct CORDL_TYPE __c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x31cdc74, size 0x4b4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x31ce1e4, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel*>", modifiers: "", def_value: None }]
  constexpr __c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*> __t__builder,
      ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0* __4__this, ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1* __8__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20958 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0* __4__this;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1* __8__1;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardFriendsModel*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d, __1__state) == 0x0,
              "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d, __t__builder) == 0x8,
              "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d, __4__this) == 0x20,
              "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d, 0x38>,
              "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
// Dependencies BeatmapKey, GameplayModifierMask, System.Object
namespace BeatSaber::Main::Leaderboards {
// Is value type: false
// CS Name: BeatSaber.Main.Leaderboards.BeatLeaderboards/<>c__DisplayClass14_0
class CORDL_TYPE BeatLeaderboards___c__DisplayClass14_0 : public ::System::Object {
public:
  // Declarations
  using __GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d =
      ::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d;

  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::BeatSaber::Main::Leaderboards::BeatLeaderboards* __4__this;

  /// @brief Field key, offset 0x18, size 0x20
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::GlobalNamespace::BeatmapKey key;

  /// @brief Field modifiers, offset 0x38, size 0x2
  __declspec(property(get = __cordl_internal_get_modifiers, put = __cordl_internal_set_modifiers)) ::GlobalNamespace::GameplayModifierMask modifiers;

  static inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0* New_ctor();

  /// @brief Method <GetLeaderboardFriendsAsync>g__GetLeaderboardFriendsInternal|0, addr 0x31cdb94, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
  _GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0();

  constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards* const& __cordl_internal_get___4__this() const;

  constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards*& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get_key() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get_key();

  constexpr ::GlobalNamespace::GameplayModifierMask const& __cordl_internal_get_modifiers() const;

  constexpr ::GlobalNamespace::GameplayModifierMask& __cordl_internal_get_modifiers();

  constexpr void __cordl_internal_set___4__this(::BeatSaber::Main::Leaderboards::BeatLeaderboards* value);

  constexpr void __cordl_internal_set_key(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set_modifiers(::GlobalNamespace::GameplayModifierMask value);

  /// @brief Method .ctor, addr 0x31cd264, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatLeaderboards___c__DisplayClass14_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatLeaderboards___c__DisplayClass14_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatLeaderboards___c__DisplayClass14_0(BeatLeaderboards___c__DisplayClass14_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatLeaderboards___c__DisplayClass14_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatLeaderboards___c__DisplayClass14_0(BeatLeaderboards___c__DisplayClass14_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20959 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Main::Leaderboards::BeatLeaderboards* _____4__this;

  /// @brief Field key, offset: 0x18, size: 0x20, def value: None
  ::GlobalNamespace::BeatmapKey ___key;

  /// @brief Field modifiers, offset: 0x38, size: 0x2, def value: None
  ::GlobalNamespace::GameplayModifierMask ___modifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0, ___key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0, ___modifiers) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0, 0x40>, "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
// Dependencies System.Object
namespace BeatSaber::Main::Leaderboards {
// Is value type: false
// CS Name: BeatSaber.Main.Leaderboards.BeatLeaderboards/<>c__DisplayClass14_1
class CORDL_TYPE BeatLeaderboards___c__DisplayClass14_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field result, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_result,
                      put = __cordl_internal_set_result)) ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>* result;

  static inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1* New_ctor();

  /// @brief Method <GetLeaderboardFriendsAsync>b__1, addr 0x31ce264, size 0x114, virtual false, abstract: false, final false
  inline void _GetLeaderboardFriendsAsync_b__1(
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesForUserFriendsModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardFriendsModel_NodesModel* node);

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>* const& __cordl_internal_get_result() const;

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*& __cordl_internal_get_result();

  constexpr void __cordl_internal_set_result(::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>* value);

  /// @brief Method .ctor, addr 0x31ce128, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatLeaderboards___c__DisplayClass14_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatLeaderboards___c__DisplayClass14_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatLeaderboards___c__DisplayClass14_1(BeatLeaderboards___c__DisplayClass14_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatLeaderboards___c__DisplayClass14_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatLeaderboards___c__DisplayClass14_1(BeatLeaderboards___c__DisplayClass14_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20960 };

  /// @brief Field result, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>* ___result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1, ___result) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BeatSaber::Main::Leaderboards {
// Is value type: true
// CS Name: BeatSaber.Main.Leaderboards.BeatLeaderboards/<>c__DisplayClass15_0/<<GetLeaderboardTopNAsync>g__GetLeaderboardTopNInternal|0>d
struct CORDL_TYPE __c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x31ce458, size 0x498, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x31ce99c, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel*>", modifiers: "", def_value: None }]
  constexpr __c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*> __t__builder,
      ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0* __4__this, ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1* __8__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20961 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0* __4__this;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1* __8__1;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardTopNModel*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d, 0x38>,
              "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
// Dependencies BeatmapKey, GameplayModifierMask, System.Object
namespace BeatSaber::Main::Leaderboards {
// Is value type: false
// CS Name: BeatSaber.Main.Leaderboards.BeatLeaderboards/<>c__DisplayClass15_0
class CORDL_TYPE BeatLeaderboards___c__DisplayClass15_0 : public ::System::Object {
public:
  // Declarations
  using __GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d =
      ::BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d;

  /// @brief Field <>4__this, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::BeatSaber::Main::Leaderboards::BeatLeaderboards* __4__this;

  /// @brief Field key, offset 0x10, size 0x20
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::GlobalNamespace::BeatmapKey key;

  /// @brief Field modifiers, offset 0x30, size 0x2
  __declspec(property(get = __cordl_internal_get_modifiers, put = __cordl_internal_set_modifiers)) ::GlobalNamespace::GameplayModifierMask modifiers;

  static inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0* New_ctor();

  /// @brief Method <GetLeaderboardTopNAsync>g__GetLeaderboardTopNInternal|0, addr 0x31ce378, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
  _GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0();

  constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards* const& __cordl_internal_get___4__this() const;

  constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards*& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get_key() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get_key();

  constexpr ::GlobalNamespace::GameplayModifierMask const& __cordl_internal_get_modifiers() const;

  constexpr ::GlobalNamespace::GameplayModifierMask& __cordl_internal_get_modifiers();

  constexpr void __cordl_internal_set___4__this(::BeatSaber::Main::Leaderboards::BeatLeaderboards* value);

  constexpr void __cordl_internal_set_key(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set_modifiers(::GlobalNamespace::GameplayModifierMask value);

  /// @brief Method .ctor, addr 0x31cd36c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatLeaderboards___c__DisplayClass15_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatLeaderboards___c__DisplayClass15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatLeaderboards___c__DisplayClass15_0(BeatLeaderboards___c__DisplayClass15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatLeaderboards___c__DisplayClass15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatLeaderboards___c__DisplayClass15_0(BeatLeaderboards___c__DisplayClass15_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20962 };

  /// @brief Field key, offset: 0x10, size: 0x20, def value: None
  ::GlobalNamespace::BeatmapKey ___key;

  /// @brief Field modifiers, offset: 0x30, size: 0x2, def value: None
  ::GlobalNamespace::GameplayModifierMask ___modifiers;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::Main::Leaderboards::BeatLeaderboards* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0, ___modifiers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0, _____4__this) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0, 0x40>, "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
// Dependencies System.Object
namespace BeatSaber::Main::Leaderboards {
// Is value type: false
// CS Name: BeatSaber.Main.Leaderboards.BeatLeaderboards/<>c__DisplayClass15_1
class CORDL_TYPE BeatLeaderboards___c__DisplayClass15_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field result, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_result,
                      put = __cordl_internal_set_result)) ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>* result;

  static inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1* New_ctor();

  /// @brief Method <GetLeaderboardTopNAsync>b__1, addr 0x31cea1c, size 0x114, virtual false, abstract: false, final false
  inline void _GetLeaderboardTopNAsync_b__1(
      ::BeatSaber::Main::GraphQL::Models::LeaderboardEntriesPageModel_BeatmapModel_ActiveDataEnvironmentModel_XocBeatGamesCurrentUserModel_BSLeaderboardTopNModel_NodesModel* node);

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>* const& __cordl_internal_get_result() const;

  constexpr ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*& __cordl_internal_get_result();

  constexpr void __cordl_internal_set_result(::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>* value);

  /// @brief Method .ctor, addr 0x31ce8f0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatLeaderboards___c__DisplayClass15_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatLeaderboards___c__DisplayClass15_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatLeaderboards___c__DisplayClass15_1(BeatLeaderboards___c__DisplayClass15_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatLeaderboards___c__DisplayClass15_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatLeaderboards___c__DisplayClass15_1(BeatLeaderboards___c__DisplayClass15_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20963 };

  /// @brief Field result, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>* ___result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1, ___result) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1, 0x18>, "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BeatSaber::Main::Leaderboards {
// Is value type: true
// CS Name: BeatSaber.Main.Leaderboards.BeatLeaderboards/<GetLeaderboardAsync>d__17
struct CORDL_TYPE BeatLeaderboards__GetLeaderboardAsync_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x31ceb30, size 0x5c0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x31cf104, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatLeaderboards__GetLeaderboardAsync_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards*", modifiers: "", def_value: None }, CppParam { name: "fetchLeaderboard", ty:
  // "::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>", modifiers: "", def_value: None
  // }]
  constexpr BeatLeaderboards__GetLeaderboardAsync_d__17(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*> __t__builder,
      ::BeatSaber::Main::Leaderboards::BeatLeaderboards* __4__this, ::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction* fetchLeaderboard,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20964 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::Main::Leaderboards::BeatLeaderboards* __4__this;

  /// @brief Field fetchLeaderboard, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction* fetchLeaderboard;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17, fetchLeaderboard) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17, __u__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17, 0x40>, "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BeatSaber::Main::Leaderboards {
// Is value type: true
// CS Name: BeatSaber.Main.Leaderboards.BeatLeaderboards/<InitializeAsync>d__11
struct CORDL_TYPE BeatLeaderboards__InitializeAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x31cf184, size 0xea8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x31d016c, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatLeaderboards__InitializeAsync_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards*", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel*>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel*>", modifiers: "", def_value: None }]
  constexpr BeatLeaderboards__InitializeAsync_d__11(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                    ::BeatSaber::Main::Leaderboards::BeatLeaderboards* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1,
                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel*> __u__2,
                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel*> __u__3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20965 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::Main::Leaderboards::BeatLeaderboards* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  /// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel*> __u__2;

  /// @brief Field <>u__3, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel*> __u__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11, __u__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11, __u__3) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11, 0x40>, "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
// Dependencies BeatmapKey, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BeatSaber::Main::Leaderboards {
// Is value type: true
// CS Name: BeatSaber.Main.Leaderboards.BeatLeaderboards/<SubmitLeaderboardEntryAsync>d__12
struct CORDL_TYPE BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x31d01d8, size 0x688, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x31d091c, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::Main::Leaderboards::BeatLeaderboards*", modifiers:
  // "", def_value: None }, CppParam { name: "results", ty: "::GlobalNamespace::LevelCompletionResults*", modifiers: "", def_value: None }, CppParam { name: "beatmapKey", ty:
  // "::GlobalNamespace::BeatmapKey", modifiers: "", def_value: None }, CppParam { name: "modifiers", ty: "::GlobalNamespace::GameplayModifiers*", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel*>", modifiers: "", def_value: None }]
  constexpr BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                ::BeatSaber::Main::Leaderboards::BeatLeaderboards* __4__this, ::GlobalNamespace::LevelCompletionResults* results,
                                                                ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::GameplayModifiers* modifiers,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20966 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::Main::Leaderboards::BeatLeaderboards* __4__this;

  /// @brief Field results, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::LevelCompletionResults* results;

  /// @brief Field beatmapKey, offset: 0x30, size: 0x20, def value: None
  ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field modifiers, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* modifiers;

  /// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12, results) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12, beatmapKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12, modifiers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12, __u__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12, __u__2) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12, 0x68>, "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
// Dependencies BeatSaber.Main.Leaderboards.BeatLeaderboardsState, System.Object
namespace BeatSaber::Main::Leaderboards {
// Is value type: false
// CS Name: BeatSaber.Main.Leaderboards.BeatLeaderboards
class CORDL_TYPE BeatLeaderboards : public ::System::Object {
public:
  // Declarations
  using FetchLeaderboardTypeFunction = ::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction;

  using _GetLeaderboardAsync_d__17 = ::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17;

  using _InitializeAsync_d__11 = ::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11;

  using _SubmitLeaderboardEntryAsync_d__12 = ::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12;

  using __c__DisplayClass13_0 = ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0;

  using __c__DisplayClass13_1 = ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1;

  using __c__DisplayClass14_0 = ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0;

  using __c__DisplayClass14_1 = ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1;

  using __c__DisplayClass15_0 = ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0;

  using __c__DisplayClass15_1 = ::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1;

  /// @brief Field _graphQLClient, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__graphQLClient, put = __cordl_internal_set__graphQLClient)) ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* _graphQLClient;

  /// @brief Field _initializationTask, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__initializationTask, put = __cordl_internal_set__initializationTask)) ::System::Threading::Tasks::Task* _initializationTask;

  /// @brief Field _networkConfig, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig, put = __cordl_internal_set__networkConfig)) ::GlobalNamespace::INetworkConfig* _networkConfig;

  /// @brief Field _platform, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__platform, put = __cordl_internal_set__platform)) ::OculusStudios::Platform::Core::IPlatform* _platform;

  /// @brief Field _settingsManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _state, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) ::BeatSaber::Main::Leaderboards::BeatLeaderboardsState _state;

  /// @brief Field _userId, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__userId, put = __cordl_internal_set__userId)) ::StringW _userId;

  __declspec(property(get = get_state)) ::BeatSaber::Main::Leaderboards::BeatLeaderboardsState state;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  /// @brief Method GetLeaderboardAroundMeAsync, addr 0x31ccf04, size 0x104, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
  GetLeaderboardAroundMeAsync(::GlobalNamespace::BeatmapKey key, ::GlobalNamespace::GameplayModifierMask modifiers);

  /// @brief Method GetLeaderboardAsync, addr 0x31cd074, size 0xec, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
  GetLeaderboardAsync(::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction* fetchLeaderboard);

  /// @brief Method GetLeaderboardFriendsAsync, addr 0x31cd160, size 0x104, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
  GetLeaderboardFriendsAsync(::GlobalNamespace::BeatmapKey key, ::GlobalNamespace::GameplayModifierMask modifiers);

  /// @brief Method GetLeaderboardTopNAsync, addr 0x31cd268, size 0x104, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::BeatSaber::Main::GraphQL::Models::LeaderboardEntryWithRankModel*>*>*
  GetLeaderboardTopNAsync(::GlobalNamespace::BeatmapKey key, ::GlobalNamespace::GameplayModifierMask modifiers);

  /// @brief Method InitializeAsync, addr 0x31ccc8c, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeAsync();

  static inline ::BeatSaber::Main::Leaderboards::BeatLeaderboards* New_ctor();

  /// @brief Method SubmitLeaderboardEntryAsync, addr 0x31cce20, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SubmitLeaderboardEntryAsync(::GlobalNamespace::LevelCompletionResults* results, ::GlobalNamespace::BeatmapKey beatmapKey,
                                                                       ::GlobalNamespace::GameplayModifiers* modifiers);

  /// @brief Method Zenject.IInitializable.Initialize, addr 0x31ccc68, size 0x24, virtual true, abstract: false, final true
  inline void Zenject_IInitializable_Initialize();

  /// @brief Method Zenject.ITickable.Tick, addr 0x31ccd3c, size 0xe4, virtual true, abstract: false, final true
  inline void Zenject_ITickable_Tick();

  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* const& __cordl_internal_get__graphQLClient() const;

  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*& __cordl_internal_get__graphQLClient();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__initializationTask() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__initializationTask();

  constexpr ::GlobalNamespace::INetworkConfig* const& __cordl_internal_get__networkConfig() const;

  constexpr ::GlobalNamespace::INetworkConfig*& __cordl_internal_get__networkConfig();

  constexpr ::OculusStudios::Platform::Core::IPlatform* const& __cordl_internal_get__platform() const;

  constexpr ::OculusStudios::Platform::Core::IPlatform*& __cordl_internal_get__platform();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboardsState const& __cordl_internal_get__state() const;

  constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboardsState& __cordl_internal_get__state();

  constexpr ::StringW const& __cordl_internal_get__userId() const;

  constexpr ::StringW& __cordl_internal_get__userId();

  constexpr void __cordl_internal_set__graphQLClient(::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* value);

  constexpr void __cordl_internal_set__initializationTask(::System::Threading::Tasks::Task* value);

  constexpr void __cordl_internal_set__networkConfig(::GlobalNamespace::INetworkConfig* value);

  constexpr void __cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__state(::BeatSaber::Main::Leaderboards::BeatLeaderboardsState value);

  constexpr void __cordl_internal_set__userId(::StringW value);

  /// @brief Method .ctor, addr 0x31cd370, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_state, addr 0x31ccc60, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Main::Leaderboards::BeatLeaderboardsState get_state();

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

  /// @brief Convert to "::Zenject::ITickable"
  constexpr ::Zenject::ITickable* i___Zenject__ITickable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatLeaderboards();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatLeaderboards", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatLeaderboards(BeatLeaderboards&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatLeaderboards", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatLeaderboards(BeatLeaderboards const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20967 };

  /// @brief Field _platform, offset: 0x10, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IPlatform* ____platform;

  /// @brief Field _settingsManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _networkConfig, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::INetworkConfig* ____networkConfig;

  /// @brief Field _state, offset: 0x28, size: 0x4, def value: None
  ::BeatSaber::Main::Leaderboards::BeatLeaderboardsState ____state;

  /// @brief Field _userId, offset: 0x30, size: 0x8, def value: None
  ::StringW ____userId;

  /// @brief Field _graphQLClient, offset: 0x38, size: 0x8, def value: None
  ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* ____graphQLClient;

  /// @brief Field _initializationTask, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____initializationTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards, ____platform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards, ____settingsManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards, ____networkConfig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards, ____state) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards, ____userId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards, ____graphQLClient) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Main::Leaderboards::BeatLeaderboards, ____initializationTask) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Main::Leaderboards::BeatLeaderboards, 0x48>, "Size mismatch!");

} // namespace BeatSaber::Main::Leaderboards
NEED_NO_BOX(::BeatSaber::Main::Leaderboards::BeatLeaderboards);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::Leaderboards::BeatLeaderboards*, "BeatSaber.Main.Leaderboards", "BeatLeaderboards");
NEED_NO_BOX(::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::Leaderboards::BeatLeaderboards_FetchLeaderboardTypeFunction*, "BeatSaber.Main.Leaderboards", "BeatLeaderboards/FetchLeaderboardTypeFunction");
NEED_NO_BOX(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_0*, "BeatSaber.Main.Leaderboards", "BeatLeaderboards/<>c__DisplayClass13_0");
NEED_NO_BOX(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass13_1*, "BeatSaber.Main.Leaderboards", "BeatLeaderboards/<>c__DisplayClass13_1");
NEED_NO_BOX(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_0*, "BeatSaber.Main.Leaderboards", "BeatLeaderboards/<>c__DisplayClass14_0");
NEED_NO_BOX(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass14_1*, "BeatSaber.Main.Leaderboards", "BeatLeaderboards/<>c__DisplayClass14_1");
NEED_NO_BOX(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_0*, "BeatSaber.Main.Leaderboards", "BeatLeaderboards/<>c__DisplayClass15_0");
NEED_NO_BOX(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::Leaderboards::BeatLeaderboards___c__DisplayClass15_1*, "BeatSaber.Main.Leaderboards", "BeatLeaderboards/<>c__DisplayClass15_1");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::Leaderboards::BeatLeaderboards__GetLeaderboardAsync_d__17, "BeatSaber.Main.Leaderboards", "BeatLeaderboards/<GetLeaderboardAsync>d__17");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::Leaderboards::BeatLeaderboards__InitializeAsync_d__11, "BeatSaber.Main.Leaderboards", "BeatLeaderboards/<InitializeAsync>d__11");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::Leaderboards::BeatLeaderboards__SubmitLeaderboardEntryAsync_d__12, "BeatSaber.Main.Leaderboards", "BeatLeaderboards/<SubmitLeaderboardEntryAsync>d__12");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::Leaderboards::__c__DisplayClass13_0_BeatLeaderboards___GetLeaderboardAroundMeAsync_g__GetLeaderboardAroundMeInternal_0_d, "BeatSaber.Main.Leaderboards",
                       "BeatLeaderboards/<>c__DisplayClass13_0/<<GetLeaderboardAroundMeAsync>g__GetLeaderboardAroundMeInternal|0>d");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::Leaderboards::__c__DisplayClass14_0_BeatLeaderboards___GetLeaderboardFriendsAsync_g__GetLeaderboardFriendsInternal_0_d, "BeatSaber.Main.Leaderboards",
                       "BeatLeaderboards/<>c__DisplayClass14_0/<<GetLeaderboardFriendsAsync>g__GetLeaderboardFriendsInternal|0>d");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Main::Leaderboards::__c__DisplayClass15_0_BeatLeaderboards___GetLeaderboardTopNAsync_g__GetLeaderboardTopNInternal_0_d, "BeatSaber.Main.Leaderboards",
                       "BeatLeaderboards/<>c__DisplayClass15_0/<<GetLeaderboardTopNAsync>g__GetLeaderboardTopNInternal|0>d");
