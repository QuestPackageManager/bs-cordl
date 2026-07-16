#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/InitialDestinationController.hpp"
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
struct InitialDestinationController__InitializeInternalAsync_d__13;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace BeatSaber::Destinations {
class InitialDestinationController;
}
namespace BeatSaber::Destinations {
struct InitialDestinationController__InitializeInternalAsync_d__13;
}
// Write type traits
MARK_REF_T(::BeatSaber::Destinations::InitialDestinationController*);
MARK_VAL_T(::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13);
DEFINE_IL2CPP_CLASS(::BeatSaber::Destinations::InitialDestinationController*, "BeatSaber.Destinations", "InitialDestinationController");
DEFINE_IL2CPP_CLASS(::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13, "BeatSaber.Destinations", "InitialDestinationController/<InitializeInternalAsync>d__13");
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace BeatSaber::Destinations {
// Is value type: true
// CS Name: BeatSaber.Destinations.InitialDestinationController/<InitializeInternalAsync>d__13
struct CORDL_TYPE InitialDestinationController__InitializeInternalAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3280710, size 0x2c8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x32809d8, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationController__InitializeInternalAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::Destinations::InitialDestinationController*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr InitialDestinationController__InitializeInternalAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                        ::BeatSaber::Destinations::InitialDestinationController* __4__this,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23068 };

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
static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13) == 0x30, "Size mismatch!");

} // namespace BeatSaber::Destinations
// Dependencies BeatSaber.Destinations.DestinationFlags, System.Object
namespace BeatSaber::Destinations {
// Is value type: false
// CS Name: BeatSaber.Destinations.InitialDestinationController
class CORDL_TYPE InitialDestinationController : public ::System::Object {
public:
  // Declarations
  using _InitializeInternalAsync_d__13 = ::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13;

  /// @brief Field _initialDestinationOverride, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__initialDestinationOverride,
                      put = __cordl_internal_set__initialDestinationOverride)) ::BeatSaber::Destinations::Destination* _initialDestinationOverride;

  /// @brief Field _initialDestinationResolver, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__initialDestinationResolver,
                      put = __cordl_internal_set__initialDestinationResolver)) ::BeatSaber::Destinations::IInitialDestinationResolver* _initialDestinationResolver;

  /// @brief Field _initializationTask, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__initializationTask, put = __cordl_internal_set__initializationTask)) ::System::Threading::Tasks::Task* _initializationTask;

  __declspec(property(get = get_hasCustomDestination)) bool hasCustomDestination;

  __declspec(property(get = get_initialDestination)) ::BeatSaber::Destinations::Destination* initialDestination;

  /// @brief Field kDefaultInitialDestination, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kDefaultInitialDestination, put = setStaticF_kDefaultInitialDestination)) ::BeatSaber::Destinations::Destination* kDefaultInitialDestination;

  /// @brief Method InitializeInternalAsync, addr 0x328050c, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeInternalAsync();

  /// @brief Method InitializeScenesAsync, addr 0x32804a4, size 0x68, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeScenesAsync();

  static inline ::BeatSaber::Destinations::InitialDestinationController* New_ctor();

  /// @brief Method Reset, addr 0x3280674, size 0xc, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetDestinationResolver, addr 0x3280618, size 0x5c, virtual false, abstract: false, final false
  inline void SetDestinationResolver(::BeatSaber::Destinations::IInitialDestinationResolver* initialDestinationResolver);

  /// @brief Method SetTargetDestination, addr 0x32805bc, size 0x5c, virtual false, abstract: false, final false
  inline void SetTargetDestination(::BeatSaber::Destinations::Destination* targetDestination);

  constexpr ::BeatSaber::Destinations::Destination* const& __cordl_internal_get__initialDestinationOverride() const;

  constexpr ::BeatSaber::Destinations::Destination*& __cordl_internal_get__initialDestinationOverride();

  constexpr ::BeatSaber::Destinations::IInitialDestinationResolver* const& __cordl_internal_get__initialDestinationResolver() const;

  constexpr ::BeatSaber::Destinations::IInitialDestinationResolver*& __cordl_internal_get__initialDestinationResolver();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__initializationTask() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__initializationTask();

  constexpr void __cordl_internal_set__initialDestinationOverride(::BeatSaber::Destinations::Destination* value);

  constexpr void __cordl_internal_set__initialDestinationResolver(::BeatSaber::Destinations::IInitialDestinationResolver* value);

  constexpr void __cordl_internal_set__initializationTask(::System::Threading::Tasks::Task* value);

  /// @brief Method .ctor, addr 0x3280680, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BeatSaber::Destinations::Destination* getStaticF_kDefaultInitialDestination();

  /// @brief Method get_hasCustomDestination, addr 0x3280494, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasCustomDestination();

  /// @brief Method get_initialDestination, addr 0x328042c, size 0x68, virtual false, abstract: false, final false
  inline ::BeatSaber::Destinations::Destination* get_initialDestination();

  static inline void setStaticF_kDefaultInitialDestination(::BeatSaber::Destinations::Destination* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23069 };

  /// @brief Field kDefaultInitialDestinationFlags value: I32(2)
  static ::BeatSaber::Destinations::DestinationFlags const kDefaultInitialDestinationFlags;

  /// @brief Field _initialDestinationOverride, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::Destinations::Destination* ____initialDestinationOverride;

  /// @brief Field _initialDestinationResolver, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::Destinations::IInitialDestinationResolver* ____initialDestinationResolver;

  /// @brief Field _initializationTask, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____initializationTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController, ____initialDestinationOverride) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController, ____initialDestinationResolver) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController, ____initializationTask) == 0x20, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Destinations::InitialDestinationController) == 0x28, "Size mismatch!");

} // namespace BeatSaber::Destinations
