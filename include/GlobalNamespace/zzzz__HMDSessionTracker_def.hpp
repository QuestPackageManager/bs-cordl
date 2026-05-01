#pragma once
// IWYU pragma private; include "GlobalNamespace/HMDSessionTracker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HMDSessionTracker)
namespace BeatSaber::Analytics::Gameplay {
class IGameplayEventsDispatcher;
}
namespace GlobalNamespace {
struct HMDSessionTracker__InitializeAsync_d__4;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace GlobalNamespace {
class HMDSessionTracker;
}
namespace GlobalNamespace {
struct HMDSessionTracker__InitializeAsync_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HMDSessionTracker);
MARK_VAL_T(::GlobalNamespace::HMDSessionTracker__InitializeAsync_d__4);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: HMDSessionTracker/<InitializeAsync>d__4
struct CORDL_TYPE HMDSessionTracker__InitializeAsync_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5774b4c, size 0x6d4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5775220, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HMDSessionTracker__InitializeAsync_d__4();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::HMDSessionTracker*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr HMDSessionTracker__InitializeAsync_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::HMDSessionTracker* __4__this,
                                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5543 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::HMDSessionTracker* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HMDSessionTracker__InitializeAsync_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HMDSessionTracker__InitializeAsync_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HMDSessionTracker__InitializeAsync_d__4, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HMDSessionTracker__InitializeAsync_d__4, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HMDSessionTracker__InitializeAsync_d__4, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HMDSessionTracker
class CORDL_TYPE HMDSessionTracker : public ::System::Object {
public:
  // Declarations
  using _InitializeAsync_d__4 = ::GlobalNamespace::HMDSessionTracker__InitializeAsync_d__4;

  /// @brief Field _gameplayEventsDispatcher, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayEventsDispatcher,
                      put = __cordl_internal_set__gameplayEventsDispatcher)) ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* _gameplayEventsDispatcher;

  /// @brief Field _vrPlatformHelper, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method Dispose, addr 0x5774588, size 0x254, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleApplicationQuitting, addr 0x5774a20, size 0x12c, virtual false, abstract: false, final false
  inline bool HandleApplicationQuitting();

  /// @brief Method HandleHMDMounted, addr 0x57747dc, size 0x120, virtual false, abstract: false, final false
  inline void HandleHMDMounted();

  /// @brief Method HandleHMDUnmounted, addr 0x57748fc, size 0x124, virtual false, abstract: false, final false
  inline void HandleHMDUnmounted();

  /// @brief Method Initialize, addr 0x5774458, size 0x80, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method InitializeAsync, addr 0x57744d8, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeAsync();

  static inline ::GlobalNamespace::HMDSessionTracker* New_ctor(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* gameplayEventsDispatcher,
                                                               ::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper);

  constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* const& __cordl_internal_get__gameplayEventsDispatcher() const;

  constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*& __cordl_internal_get__gameplayEventsDispatcher();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr void __cordl_internal_set__gameplayEventsDispatcher(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method .ctor, addr 0x5774450, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* gameplayEventsDispatcher, ::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HMDSessionTracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HMDSessionTracker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HMDSessionTracker(HMDSessionTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HMDSessionTracker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HMDSessionTracker(HMDSessionTracker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5544 };

  /// @brief Field _gameplayEventsDispatcher, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* ____gameplayEventsDispatcher;

  /// @brief Field _vrPlatformHelper, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HMDSessionTracker, ____gameplayEventsDispatcher) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HMDSessionTracker, ____vrPlatformHelper) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HMDSessionTracker, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HMDSessionTracker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HMDSessionTracker*, "", "HMDSessionTracker");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HMDSessionTracker__InitializeAsync_d__4, "", "HMDSessionTracker/<InitializeAsync>d__4");
