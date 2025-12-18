#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/InitialDestinationController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Destinations/zzzz__DestinationSource_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InitialDestinationController)
namespace BeatSaber::Destinations {
struct DestinationSource;
}
namespace BeatSaber::Destinations {
class Destination;
}
namespace BeatSaber::Destinations {
class IInitialDestinationResolver;
}
namespace BeatSaber::Destinations {
struct InitialDestinationController__InitializeInternalAsync_d__12;
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
struct InitialDestinationController__InitializeInternalAsync_d__12;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Destinations::InitialDestinationController);
MARK_VAL_T(::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace BeatSaber::Destinations {
// Is value type: true
// CS Name: BeatSaber.Destinations.InitialDestinationController/<InitializeInternalAsync>d__12
struct CORDL_TYPE InitialDestinationController__InitializeInternalAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x31b1de0, size 0x2cc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x31b20ac, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationController__InitializeInternalAsync_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::BeatSaber::Destinations::InitialDestinationController>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr InitialDestinationController__InitializeInternalAsync_d__12(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                        ::UnityW<::BeatSaber::Destinations::InitialDestinationController> __4__this,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22750 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::BeatSaber::Destinations::InitialDestinationController> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12, 0x30>, "Size mismatch!");

} // namespace BeatSaber::Destinations
// Dependencies BeatSaber.Destinations.DestinationSource, UnityEngine.MonoBehaviour
namespace BeatSaber::Destinations {
// Is value type: false
// CS Name: BeatSaber.Destinations.InitialDestinationController
class CORDL_TYPE InitialDestinationController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _InitializeInternalAsync_d__12 = ::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12;

  /// @brief Field _initialDestinationOverride, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__initialDestinationOverride,
                      put = __cordl_internal_set__initialDestinationOverride)) ::BeatSaber::Destinations::Destination* _initialDestinationOverride;

  /// @brief Field _initialDestinationOverrideSource, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__initialDestinationOverrideSource,
                      put = __cordl_internal_set__initialDestinationOverrideSource)) ::BeatSaber::Destinations::DestinationSource _initialDestinationOverrideSource;

  /// @brief Field _initialDestinationResolver, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__initialDestinationResolver,
                      put = __cordl_internal_set__initialDestinationResolver)) ::BeatSaber::Destinations::IInitialDestinationResolver* _initialDestinationResolver;

  /// @brief Field _initializationTask, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__initializationTask, put = __cordl_internal_set__initializationTask)) ::System::Threading::Tasks::Task* _initializationTask;

  __declspec(property(get = get_initialDestination)) ::BeatSaber::Destinations::Destination* initialDestination;

  /// @brief Field kDefaultInitialDestination, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kDefaultInitialDestination, put = setStaticF_kDefaultInitialDestination)) ::BeatSaber::Destinations::Destination* kDefaultInitialDestination;

  /// @brief Method GetDestinationSourcePriority, addr 0x31b198c, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetDestinationSourcePriority(::BeatSaber::Destinations::DestinationSource destinationSource);

  /// @brief Method InitializeInternalAsync, addr 0x31b1c38, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeInternalAsync();

  /// @brief Method InitializeScenesAsync, addr 0x31b1bd0, size 0x68, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeScenesAsync();

  static inline ::BeatSaber::Destinations::InitialDestinationController* New_ctor();

  /// @brief Method OverrideDestination, addr 0x31b1990, size 0x240, virtual false, abstract: false, final false
  inline void OverrideDestination(::BeatSaber::Destinations::DestinationSource destinationSource, ::BeatSaber::Destinations::Destination* destination);

  /// @brief Method Reset, addr 0x31b1d44, size 0x10, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetDestinationResolver, addr 0x31b1ce8, size 0x5c, virtual false, abstract: false, final false
  inline void SetDestinationResolver(::BeatSaber::Destinations::IInitialDestinationResolver* initialDestinationResolver);

  constexpr ::BeatSaber::Destinations::Destination* const& __cordl_internal_get__initialDestinationOverride() const;

  constexpr ::BeatSaber::Destinations::Destination*& __cordl_internal_get__initialDestinationOverride();

  constexpr ::BeatSaber::Destinations::DestinationSource const& __cordl_internal_get__initialDestinationOverrideSource() const;

  constexpr ::BeatSaber::Destinations::DestinationSource& __cordl_internal_get__initialDestinationOverrideSource();

  constexpr ::BeatSaber::Destinations::IInitialDestinationResolver* const& __cordl_internal_get__initialDestinationResolver() const;

  constexpr ::BeatSaber::Destinations::IInitialDestinationResolver*& __cordl_internal_get__initialDestinationResolver();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__initializationTask() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__initializationTask();

  constexpr void __cordl_internal_set__initialDestinationOverride(::BeatSaber::Destinations::Destination* value);

  constexpr void __cordl_internal_set__initialDestinationOverrideSource(::BeatSaber::Destinations::DestinationSource value);

  constexpr void __cordl_internal_set__initialDestinationResolver(::BeatSaber::Destinations::IInitialDestinationResolver* value);

  constexpr void __cordl_internal_set__initializationTask(::System::Threading::Tasks::Task* value);

  /// @brief Method .ctor, addr 0x31b1d54, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BeatSaber::Destinations::Destination* getStaticF_kDefaultInitialDestination();

  /// @brief Method get_initialDestination, addr 0x31b1924, size 0x68, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22751 };

  /// @brief Field _initialDestinationOverride, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::Destinations::Destination* ____initialDestinationOverride;

  /// @brief Field _initialDestinationOverrideSource, offset: 0x28, size: 0x4, def value: None
  ::BeatSaber::Destinations::DestinationSource ____initialDestinationOverrideSource;

  /// @brief Field _initialDestinationResolver, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::Destinations::IInitialDestinationResolver* ____initialDestinationResolver;

  /// @brief Field _initializationTask, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____initializationTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController, ____initialDestinationOverride) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController, ____initialDestinationOverrideSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController, ____initialDestinationResolver) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::InitialDestinationController, ____initializationTask) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Destinations::InitialDestinationController, 0x40>, "Size mismatch!");

} // namespace BeatSaber::Destinations
NEED_NO_BOX(::BeatSaber::Destinations::InitialDestinationController);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Destinations::InitialDestinationController*, "BeatSaber.Destinations", "InitialDestinationController");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__12, "BeatSaber.Destinations", "InitialDestinationController/<InitializeInternalAsync>d__12");
