#pragma once
// IWYU pragma private; include "BeatSaber\Destinations\InitialDestinationController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Destinations/zzzz__DestinationFlags_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InitialDestinationController)
namespace BeatSaber::Destinations {
class Destination;
}
namespace BeatSaber::Destinations {
class IInitialDestinationResolver;
}
namespace BeatSaber::Destinations {
struct InitialDestinationController_State;
}
namespace BeatSaber::Destinations {
struct InitialDestinationController__InitializeInternalAsync_d__18;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace BeatSaber::Destinations {
struct InitialDestinationController_State;
}
namespace BeatSaber::Destinations {
class InitialDestinationController;
}
namespace BeatSaber::Destinations {
struct InitialDestinationController__InitializeInternalAsync_d__18;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Destinations::InitialDestinationController_State);
MARK_REF_T(::BeatSaber::Destinations::InitialDestinationController*);
MARK_VAL_T(::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__18);
DEFINE_IL2CPP_CLASS(::BeatSaber::Destinations::InitialDestinationController_State, "BeatSaber.Destinations", "InitialDestinationController/State");
DEFINE_IL2CPP_CLASS(::BeatSaber::Destinations::InitialDestinationController*, "BeatSaber.Destinations", "InitialDestinationController");
DEFINE_IL2CPP_CLASS(::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__18, "BeatSaber.Destinations", "InitialDestinationController/<InitializeInternalAsync>d__18");
// Dependencies
namespace BeatSaber::Destinations {
// Is value type: true
// CS Name: BeatSaber.Destinations.InitialDestinationController/State
struct CORDL_TYPE InitialDestinationController_State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InitialDestinationController_State_Unwrapped
  enum struct __InitialDestinationController_State_Unwrapped : int32_t {
    __E_NotInitialized = static_cast<int32_t>(0x0),
    __E_Initializing = static_cast<int32_t>(0x1),
    __E_FinishedInitialization = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InitialDestinationController_State_Unwrapped() const noexcept {
    return static_cast<__InitialDestinationController_State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationController_State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InitialDestinationController_State(int32_t value__) noexcept;

  /// @brief Field FinishedInitialization value: I32(2)
  static ::BeatSaber::Destinations::InitialDestinationController_State const FinishedInitialization;

  /// @brief Field Initializing value: I32(1)
  static ::BeatSaber::Destinations::InitialDestinationController_State const Initializing;

  /// @brief Field NotInitialized value: I32(0)
  static ::BeatSaber::Destinations::InitialDestinationController_State const NotInitialized;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23071 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Destinations::InitialDestinationController_State) == 0x4, "Size mismatch!");

} // namespace BeatSaber::Destinations
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace BeatSaber::Destinations {
// Is value type: true
// CS Name: BeatSaber.Destinations.InitialDestinationController/<InitializeInternalAsync>d__18
struct CORDL_TYPE InitialDestinationController__InitializeInternalAsync_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x328177c, size 0x2d8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3281a54, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationController__InitializeInternalAsync_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::Destinations::InitialDestinationController*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr InitialDestinationController__InitializeInternalAsync_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                        ::BeatSaber::Destinations::InitialDestinationController* __4__this,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23072 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::Destinations::InitialDestinationController* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__18, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__18, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__18) == 0x30, "Size mismatch!");

} // namespace BeatSaber::Destinations
// Dependencies BeatSaber.Destinations.DestinationFlags, BeatSaber.Destinations.InitialDestinationController::State, System.Object
namespace BeatSaber::Destinations {
// Is value type: false
// CS Name: BeatSaber.Destinations.InitialDestinationController
class CORDL_TYPE InitialDestinationController : public ::System::Object {
public:
  // Declarations
  using State = ::BeatSaber::Destinations::InitialDestinationController_State;

  using _InitializeInternalAsync_d__18 = ::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__18;

  /// @brief Field <currentState>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__currentState_k__BackingField,
                      put = __cordl_internal_set__currentState_k__BackingField)) ::BeatSaber::Destinations::InitialDestinationController_State _currentState_k__BackingField;

  /// @brief Field _initialDestinationOverride, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__initialDestinationOverride,
                      put = __cordl_internal_set__initialDestinationOverride)) ::BeatSaber::Destinations::Destination* _initialDestinationOverride;

  /// @brief Field _initialDestinationResolver, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__initialDestinationResolver,
                      put = __cordl_internal_set__initialDestinationResolver)) ::BeatSaber::Destinations::IInitialDestinationResolver* _initialDestinationResolver;

  /// @brief Field _initializationTask, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__initializationTask, put = __cordl_internal_set__initializationTask)) ::System::Threading::Tasks::Task* _initializationTask;

  __declspec(property(get = get_currentState, put = set_currentState)) ::BeatSaber::Destinations::InitialDestinationController_State currentState;

  __declspec(property(get = get_hasCustomDestination)) bool hasCustomDestination;

  __declspec(property(get = get_initialDestination)) ::BeatSaber::Destinations::Destination* initialDestination;

  /// @brief Field kDefaultInitialDestination, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kDefaultInitialDestination, put = setStaticF_kDefaultInitialDestination)) ::BeatSaber::Destinations::Destination* kDefaultInitialDestination;

  /// @brief Method InitializeInternalAsync, addr 0x3281578, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeInternalAsync();

  /// @brief Method InitializeScenesAsync, addr 0x3281510, size 0x68, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeScenesAsync();

  static inline ::BeatSaber::Destinations::InitialDestinationController* New_ctor();

  /// @brief Method Reset, addr 0x32816e0, size 0xc, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetDestinationResolver, addr 0x3281684, size 0x5c, virtual false, abstract: false, final false
  inline void SetDestinationResolver(::BeatSaber::Destinations::IInitialDestinationResolver* initialDestinationResolver);

  /// @brief Method SetTargetDestination, addr 0x3281628, size 0x5c, virtual false, abstract: false, final false
  inline void SetTargetDestination(::BeatSaber::Destinations::Destination* targetDestination);

  constexpr ::BeatSaber::Destinations::InitialDestinationController_State const& __cordl_internal_get__currentState_k__BackingField() const;

  constexpr ::BeatSaber::Destinations::InitialDestinationController_State& __cordl_internal_get__currentState_k__BackingField();

  constexpr ::BeatSaber::Destinations::Destination* const& __cordl_internal_get__initialDestinationOverride() const;

  constexpr ::BeatSaber::Destinations::Destination*& __cordl_internal_get__initialDestinationOverride();

  constexpr ::BeatSaber::Destinations::IInitialDestinationResolver* const& __cordl_internal_get__initialDestinationResolver() const;

  constexpr ::BeatSaber::Destinations::IInitialDestinationResolver*& __cordl_internal_get__initialDestinationResolver();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__initializationTask() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__initializationTask();

  constexpr void __cordl_internal_set__currentState_k__BackingField(::BeatSaber::Destinations::InitialDestinationController_State value);

  constexpr void __cordl_internal_set__initialDestinationOverride(::BeatSaber::Destinations::Destination* value);

  constexpr void __cordl_internal_set__initialDestinationResolver(::BeatSaber::Destinations::IInitialDestinationResolver* value);

  constexpr void __cordl_internal_set__initializationTask(::System::Threading::Tasks::Task* value);

  /// @brief Method .ctor, addr 0x32816ec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BeatSaber::Destinations::Destination* getStaticF_kDefaultInitialDestination();

  /// @brief Method get_currentState, addr 0x3281500, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Destinations::InitialDestinationController_State get_currentState();

  /// @brief Method get_hasCustomDestination, addr 0x32814f0, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasCustomDestination();

  /// @brief Method get_initialDestination, addr 0x3281488, size 0x68, virtual false, abstract: false, final false
  inline ::BeatSaber::Destinations::Destination* get_initialDestination();

  static inline void setStaticF_kDefaultInitialDestination(::BeatSaber::Destinations::Destination* value);

  /// @brief Method set_currentState, addr 0x3281508, size 0x8, virtual false, abstract: false, final false
  inline void set_currentState(::BeatSaber::Destinations::InitialDestinationController_State value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InitialDestinationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitialDestinationController(InitialDestinationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitialDestinationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitialDestinationController(InitialDestinationController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23073 };

  /// @brief Field kDefaultInitialDestinationFlags value: I32(2)
  static ::BeatSaber::Destinations::DestinationFlags const kDefaultInitialDestinationFlags;

  /// @brief Field _initialDestinationOverride, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Destinations::Destination* ____initialDestinationOverride;

  /// @brief Field _initialDestinationResolver, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::Destinations::IInitialDestinationResolver* ____initialDestinationResolver;

  /// @brief Field _initializationTask, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____initializationTask;

  /// @brief Field <currentState>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::BeatSaber::Destinations::InitialDestinationController_State ____currentState_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController, ____initialDestinationOverride) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController, ____initialDestinationResolver) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController, ____initializationTask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController, ____currentState_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Destinations::InitialDestinationController) == 0x30, "Size mismatch!");

} // namespace BeatSaber::Destinations
