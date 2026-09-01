#pragma once
// IWYU pragma private; include "BGLib\AppFlow\Initialization\AsyncLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncLoader)
namespace BGLib::AppFlow::Initialization {
struct AsyncLoader_SynchronizationStep;
}
namespace BGLib::AppFlow::Initialization {
class IInstallerRegistry;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
struct AsyncLoader_SynchronizationStep;
}
namespace BGLib::AppFlow::Initialization {
class AsyncLoader;
}
// Write type traits
MARK_VAL_T(::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep);
MARK_REF_T(::BGLib::AppFlow::Initialization::AsyncLoader*);
DEFINE_IL2CPP_CLASS(::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep, "BGLib.AppFlow.Initialization", "AsyncLoader/SynchronizationStep");
DEFINE_IL2CPP_CLASS(::BGLib::AppFlow::Initialization::AsyncLoader*, "BGLib.AppFlow.Initialization", "AsyncLoader");
// Dependencies
namespace BGLib::AppFlow::Initialization {
// Is value type: true
// CS Name: BGLib.AppFlow.Initialization.AsyncLoader/SynchronizationStep
struct CORDL_TYPE AsyncLoader_SynchronizationStep {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AsyncLoader_SynchronizationStep_Unwrapped
  enum struct __AsyncLoader_SynchronizationStep_Unwrapped : int32_t {
    __E_PreloadStep1 = static_cast<int32_t>(0x0),
    __E_PreloadStep2 = static_cast<int32_t>(0x1),
    __E_AfterAsyncInstallers = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AsyncLoader_SynchronizationStep_Unwrapped() const noexcept {
    return static_cast<__AsyncLoader_SynchronizationStep_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncLoader_SynchronizationStep();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AsyncLoader_SynchronizationStep(int32_t value__) noexcept;

  /// @brief Field AfterAsyncInstallers value: I32(2)
  static ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep const AfterAsyncInstallers;

  /// @brief Field PreloadStep1 value: I32(0)
  static ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep const PreloadStep1;

  /// @brief Field PreloadStep2 value: I32(1)
  static ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep const PreloadStep2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21551 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep) == 0x4, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Dependencies UnityEngine.MonoBehaviour
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.AsyncLoader
class CORDL_TYPE AsyncLoader : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using SynchronizationStep = ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep;

  /// @brief Field _cancellationTokenSource, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _initializationTask, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__initializationTask, put = __cordl_internal_set__initializationTask)) ::System::Threading::Tasks::Task* _initializationTask;

  __declspec(property(get = get_synchronizationStep)) ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep synchronizationStep;

  /// @brief Method LoadAsync, addr 0x33089cc, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadAsync(::BGLib::AppFlow::Initialization::IInstallerRegistry* registry, ::Zenject::DiContainer* container);

  /// @brief Method LoadInternalAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadInternalAsync(::BGLib::AppFlow::Initialization::IInstallerRegistry* registry, ::Zenject::DiContainer* container,
                                                             ::System::Threading::CancellationToken cancellationToken);

  static inline ::BGLib::AppFlow::Initialization::AsyncLoader* New_ctor();

  /// @brief Method OnDisable, addr 0x33089c8, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3308974, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method TryCancelTaskIfItRunning, addr 0x3308978, size 0x50, virtual false, abstract: false, final false
  inline bool TryCancelTaskIfItRunning();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__initializationTask() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__initializationTask();

  constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__initializationTask(::System::Threading::Tasks::Task* value);

  /// @brief Method .ctor, addr 0x3308570, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_synchronizationStep, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep get_synchronizationStep();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncLoader(AsyncLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncLoader(AsyncLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21552 };

  /// @brief Field _initializationTask, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____initializationTask;

  /// @brief Field _cancellationTokenSource, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncLoader, ____initializationTask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncLoader, ____cancellationTokenSource) == 0x28, "Offset mismatch!");

static_assert(sizeof(::BGLib::AppFlow::Initialization::AsyncLoader) == 0x30, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
