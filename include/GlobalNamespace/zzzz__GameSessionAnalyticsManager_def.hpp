#pragma once
// IWYU pragma private; include "GlobalNamespace/GameSessionAnalyticsManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameSessionAnalyticsManager)
namespace BeatSaber::Init {
class IPlatformInit;
}
namespace GlobalNamespace {
struct GameSessionAnalyticsManager__LogSessionEventAfterPlatformInit_d__6;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class GameSessionAnalyticsManager;
}
namespace GlobalNamespace {
struct GameSessionAnalyticsManager__LogSessionEventAfterPlatformInit_d__6;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameSessionAnalyticsManager);
MARK_VAL_T(::GlobalNamespace::GameSessionAnalyticsManager__LogSessionEventAfterPlatformInit_d__6);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameSessionAnalyticsManager/<LogSessionEventAfterPlatformInit>d__6
struct CORDL_TYPE GameSessionAnalyticsManager__LogSessionEventAfterPlatformInit_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3ad9bfc, size 0x2bc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3ad9eb8, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameSessionAnalyticsManager__LogSessionEventAfterPlatformInit_d__6();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::GameSessionAnalyticsManager>",
  // modifiers: "", def_value: None }, CppParam { name: "hasFocus", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr GameSessionAnalyticsManager__LogSessionEventAfterPlatformInit_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                               ::UnityW<::GlobalNamespace::GameSessionAnalyticsManager> __4__this, bool hasFocus,
                                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3981 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameSessionAnalyticsManager> __4__this;

  /// @brief Field hasFocus, offset: 0x28, size: 0x1, def value: None
  bool hasFocus;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameSessionAnalyticsManager__LogSessionEventAfterPlatformInit_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSessionAnalyticsManager__LogSessionEventAfterPlatformInit_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSessionAnalyticsManager__LogSessionEventAfterPlatformInit_d__6, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSessionAnalyticsManager__LogSessionEventAfterPlatformInit_d__6, hasFocus) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSessionAnalyticsManager__LogSessionEventAfterPlatformInit_d__6, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameSessionAnalyticsManager__LogSessionEventAfterPlatformInit_d__6, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameSessionAnalyticsManager
class CORDL_TYPE GameSessionAnalyticsManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _LogSessionEventAfterPlatformInit_d__6 = ::GlobalNamespace::GameSessionAnalyticsManager__LogSessionEventAfterPlatformInit_d__6;

  /// @brief Field _analyticsModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel)) ::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _initializationTask, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__initializationTask, put = __cordl_internal_set__initializationTask)) ::System::Threading::Tasks::Task* _initializationTask;

  /// @brief Field _initialized, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _platformInit, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__platformInit, put = __cordl_internal_set__platformInit)) ::BeatSaber::Init::IPlatformInit* _platformInit;

  /// @brief Field lastSessionStartTime, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_lastSessionStartTime, put = __cordl_internal_set_lastSessionStartTime)) float_t lastSessionStartTime;

  /// @brief Method LogSessionEventAfterPlatformInit, addr 0x3ad998c, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LogSessionEventAfterPlatformInit(bool hasFocus);

  /// @brief Method LogSessionEventOnFocus, addr 0x3ad9980, size 0xc, virtual false, abstract: false, final false
  inline void LogSessionEventOnFocus(bool hasFocus);

  /// @brief Method LogSessionFinish, addr 0x3ad9b1c, size 0xd8, virtual false, abstract: false, final false
  inline void LogSessionFinish();

  /// @brief Method LogSessionStart, addr 0x3ad9a64, size 0xb8, virtual false, abstract: false, final false
  inline void LogSessionStart();

  static inline ::GlobalNamespace::GameSessionAnalyticsManager* New_ctor();

  /// @brief Method OnApplicationFocus, addr 0x3ad9930, size 0x50, virtual false, abstract: false, final false
  inline void OnApplicationFocus(bool hasFocus);

  constexpr ::GlobalNamespace::IAnalyticsModel* const& __cordl_internal_get__analyticsModel() const;

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__initializationTask() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__initializationTask();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::BeatSaber::Init::IPlatformInit* const& __cordl_internal_get__platformInit() const;

  constexpr ::BeatSaber::Init::IPlatformInit*& __cordl_internal_get__platformInit();

  constexpr float_t const& __cordl_internal_get_lastSessionStartTime() const;

  constexpr float_t& __cordl_internal_get_lastSessionStartTime();

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr void __cordl_internal_set__initializationTask(::System::Threading::Tasks::Task* value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__platformInit(::BeatSaber::Init::IPlatformInit* value);

  constexpr void __cordl_internal_set_lastSessionStartTime(float_t value);

  /// @brief Method .ctor, addr 0x3ad9bf4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameSessionAnalyticsManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameSessionAnalyticsManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameSessionAnalyticsManager(GameSessionAnalyticsManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameSessionAnalyticsManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameSessionAnalyticsManager(GameSessionAnalyticsManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3982 };

  /// @brief Field _analyticsModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field _platformInit, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::Init::IPlatformInit* ____platformInit;

  /// @brief Field lastSessionStartTime, offset: 0x30, size: 0x4, def value: None
  float_t ___lastSessionStartTime;

  /// @brief Field _initialized, offset: 0x34, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _initializationTask, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____initializationTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameSessionAnalyticsManager, ____analyticsModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSessionAnalyticsManager, ____platformInit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSessionAnalyticsManager, ___lastSessionStartTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSessionAnalyticsManager, ____initialized) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSessionAnalyticsManager, ____initializationTask) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameSessionAnalyticsManager, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameSessionAnalyticsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameSessionAnalyticsManager*, "", "GameSessionAnalyticsManager");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameSessionAnalyticsManager__LogSessionEventAfterPlatformInit_d__6, "", "GameSessionAnalyticsManager/<LogSessionEventAfterPlatformInit>d__6");
