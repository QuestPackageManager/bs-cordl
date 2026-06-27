#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/GameplayEventsDispatcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameplayEventsDispatcher)
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class IBeatmapAttemptEventSender;
}
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class IBlockLevelGameplayEventSender;
}
namespace BeatSaber::Analytics::Gameplay::EventSenders {
class IHMDSessionEventSender;
}
namespace BeatSaber::Analytics::Gameplay {
struct GameplayEventsDispatcher__InitializeAsync_d__17;
}
namespace BeatSaber::Analytics::Gameplay {
struct GameplayEventsDispatcher__InitializeInternalAsync_d__18;
}
namespace BeatSaber::Analytics::Gameplay {
class IGameplayEventsDispatcher;
}
namespace BeatSaber::FeatureFlags {
class IFeatureFlagService;
}
namespace OSCE::Analytics {
class AnalyticsManager;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay {
class GameplayEventsDispatcher;
}
namespace BeatSaber::Analytics::Gameplay {
struct GameplayEventsDispatcher__InitializeAsync_d__17;
}
namespace BeatSaber::Analytics::Gameplay {
struct GameplayEventsDispatcher__InitializeInternalAsync_d__18;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher);
MARK_VAL_T(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17);
MARK_VAL_T(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace BeatSaber::Analytics::Gameplay {
// Is value type: true
// CS Name: BeatSaber.Analytics.Gameplay.GameplayEventsDispatcher/<InitializeAsync>d__17
struct CORDL_TYPE GameplayEventsDispatcher__InitializeAsync_d__17 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x31cf07c, size 0x1ec, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x31cf268, size 0x6c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr GameplayEventsDispatcher__InitializeAsync_d__17() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GameplayEventsDispatcher__InitializeAsync_d__17(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22086};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17, 0x30>, "Size mismatch!");

} // namespace end def BeatSaber::Analytics::Gameplay
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BeatSaber::Analytics::Gameplay {
// Is value type: true
// CS Name: BeatSaber.Analytics.Gameplay.GameplayEventsDispatcher/<InitializeInternalAsync>d__18
struct CORDL_TYPE GameplayEventsDispatcher__InitializeInternalAsync_d__18 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x31cf2d4, size 0x430, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x31cf7c0, size 0x6c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr GameplayEventsDispatcher__InitializeInternalAsync_d__18() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr GameplayEventsDispatcher__InitializeInternalAsync_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22087};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18, __u__2) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18, 0x38>, "Size mismatch!");

} // namespace end def BeatSaber::Analytics::Gameplay
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.GameplayEventsDispatcher
class CORDL_TYPE GameplayEventsDispatcher : public ::System::Object {
public:
// Declarations
using _InitializeAsync_d__17 = ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17;

using _InitializeInternalAsync_d__18 = ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18;

/// @brief Field _analyticsManager, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__analyticsManager, put=__cordl_internal_set__analyticsManager)) ::UnityW<::OSCE::Analytics::AnalyticsManager>  _analyticsManager;

/// @brief Field <beatmapAttempt>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatmapAttempt_k__BackingField, put=__cordl_internal_set__beatmapAttempt_k__BackingField)) ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*  _beatmapAttempt_k__BackingField;

/// @brief Field <blockLevel>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__blockLevel_k__BackingField, put=__cordl_internal_set__blockLevel_k__BackingField)) ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*  _blockLevel_k__BackingField;

/// @brief Field _featureFlags, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureFlags, put=__cordl_internal_set__featureFlags)) ::BeatSaber::FeatureFlags::IFeatureFlagService*  _featureFlags;

/// @brief Field <hmdSession>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hmdSession_k__BackingField, put=__cordl_internal_set__hmdSession_k__BackingField)) ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*  _hmdSession_k__BackingField;

/// @brief Field _initializationTask, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__initializationTask, put=__cordl_internal_set__initializationTask)) ::System::Threading::Tasks::Task*  _initializationTask;

 __declspec(property(get=get_beatmapAttempt, put=set_beatmapAttempt)) ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*  beatmapAttempt;

 __declspec(property(get=get_blockLevel, put=set_blockLevel)) ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*  blockLevel;

 __declspec(property(get=get_hmdSession, put=set_hmdSession)) ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*  hmdSession;

/// @brief Convert operator to "::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher"
constexpr operator  ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*() noexcept;

/// @brief Convert operator to "::Zenject::IInitializable"
constexpr operator  ::Zenject::IInitializable*() noexcept;

/// @brief Method Initialize, addr 0x31ceef4, size 0x24, virtual true, abstract: false, final true
inline void Initialize() ;

/// @brief Method InitializeAsync, addr 0x31cef18, size 0xb0, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* InitializeAsync() ;

/// @brief Method InitializeInternalAsync, addr 0x31cefc8, size 0xb4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* InitializeInternalAsync() ;

static inline ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher* New_ctor(::BeatSaber::FeatureFlags::IFeatureFlagService*  featureFlags, ::OSCE::Analytics::AnalyticsManager*  analyticsManager, uint64_t  appId) ;

constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& __cordl_internal_get__analyticsManager() const;

constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& __cordl_internal_get__analyticsManager() ;

constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* const& __cordl_internal_get__beatmapAttempt_k__BackingField() const;

constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*& __cordl_internal_get__beatmapAttempt_k__BackingField() ;

constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* const& __cordl_internal_get__blockLevel_k__BackingField() const;

constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*& __cordl_internal_get__blockLevel_k__BackingField() ;

constexpr ::BeatSaber::FeatureFlags::IFeatureFlagService* const& __cordl_internal_get__featureFlags() const;

constexpr ::BeatSaber::FeatureFlags::IFeatureFlagService*& __cordl_internal_get__featureFlags() ;

constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* const& __cordl_internal_get__hmdSession_k__BackingField() const;

constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*& __cordl_internal_get__hmdSession_k__BackingField() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__initializationTask() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__initializationTask() ;

constexpr void __cordl_internal_set__analyticsManager(::UnityW<::OSCE::Analytics::AnalyticsManager>  value) ;

constexpr void __cordl_internal_set__beatmapAttempt_k__BackingField(::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*  value) ;

constexpr void __cordl_internal_set__blockLevel_k__BackingField(::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*  value) ;

constexpr void __cordl_internal_set__featureFlags(::BeatSaber::FeatureFlags::IFeatureFlagService*  value) ;

constexpr void __cordl_internal_set__hmdSession_k__BackingField(::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*  value) ;

constexpr void __cordl_internal_set__initializationTask(::System::Threading::Tasks::Task*  value) ;

/// @brief Method .ctor, addr 0x31cedf0, size 0xf8, virtual false, abstract: false, final false
inline void _ctor(::BeatSaber::FeatureFlags::IFeatureFlagService*  featureFlags, ::OSCE::Analytics::AnalyticsManager*  analyticsManager, uint64_t  appId) ;

/// @brief Method get_beatmapAttempt, addr 0x31cedc0, size 0x8, virtual true, abstract: false, final true
inline ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender* get_beatmapAttempt() ;

/// @brief Method get_blockLevel, addr 0x31cedd0, size 0x8, virtual true, abstract: false, final true
inline ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender* get_blockLevel() ;

/// @brief Method get_hmdSession, addr 0x31cede0, size 0x8, virtual true, abstract: false, final true
inline ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender* get_hmdSession() ;

/// @brief Convert to "::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher"
constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* i___BeatSaber__Analytics__Gameplay__IGameplayEventsDispatcher() noexcept;

/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

/// @brief Method set_beatmapAttempt, addr 0x31cedc8, size 0x8, virtual false, abstract: false, final false
inline void set_beatmapAttempt(::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*  value) ;

/// @brief Method set_blockLevel, addr 0x31cedd8, size 0x8, virtual false, abstract: false, final false
inline void set_blockLevel(::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*  value) ;

/// @brief Method set_hmdSession, addr 0x31cede8, size 0x8, virtual false, abstract: false, final false
inline void set_hmdSession(::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameplayEventsDispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameplayEventsDispatcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameplayEventsDispatcher(GameplayEventsDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameplayEventsDispatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameplayEventsDispatcher(GameplayEventsDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22088};

/// @brief Field <beatmapAttempt>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::BeatSaber::Analytics::Gameplay::EventSenders::IBeatmapAttemptEventSender*  ____beatmapAttempt_k__BackingField;

/// @brief Field <blockLevel>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::BeatSaber::Analytics::Gameplay::EventSenders::IBlockLevelGameplayEventSender*  ____blockLevel_k__BackingField;

/// @brief Field <hmdSession>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::BeatSaber::Analytics::Gameplay::EventSenders::IHMDSessionEventSender*  ____hmdSession_k__BackingField;

/// @brief Field _featureFlags, offset: 0x28, size: 0x8, def value: None
 ::BeatSaber::FeatureFlags::IFeatureFlagService*  ____featureFlags;

/// @brief Field _analyticsManager, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::OSCE::Analytics::AnalyticsManager>  ____analyticsManager;

/// @brief Field _initializationTask, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ____initializationTask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher, ____beatmapAttempt_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher, ____blockLevel_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher, ____hmdSession_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher, ____featureFlags) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher, ____analyticsManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher, ____initializationTask) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher, 0x40>, "Size mismatch!");

} // namespace end def BeatSaber::Analytics::Gameplay
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*, "BeatSaber.Analytics.Gameplay", "GameplayEventsDispatcher");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeAsync_d__17, "BeatSaber.Analytics.Gameplay", "GameplayEventsDispatcher/<InitializeAsync>d__17");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher__InitializeInternalAsync_d__18, "BeatSaber.Analytics.Gameplay", "GameplayEventsDispatcher/<InitializeInternalAsync>d__18");
