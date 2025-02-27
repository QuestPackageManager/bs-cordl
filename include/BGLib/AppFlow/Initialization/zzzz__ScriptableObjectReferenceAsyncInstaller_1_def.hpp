#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/ScriptableObjectReferenceAsyncInstaller_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableObjectReferenceAsyncInstaller_1)
namespace BGLib::AppFlow::Initialization {
class AsyncInstaller_IInstallerRegistry;
}
namespace BGLib::AppFlow::Initialization {
template <typename T> struct ScriptableObjectReferenceAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__4;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
template <typename T> class ScriptableObjectReferenceAsyncInstaller_1;
}
namespace BGLib::AppFlow::Initialization {
template <typename T> struct ScriptableObjectReferenceAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__4;
}
// Write type traits
MARK_GEN_REF_PTR_T(::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1);
MARK_GEN_VAL_T(::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__4);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BGLib::AppFlow::Initialization {
// cpp template
template <typename T>
// Is value type: true
// CS Name: BGLib.AppFlow.Initialization.ScriptableObjectReferenceAsyncInstaller`1/<LoadResourcesBeforeInstallAsync>d__4<T>
struct CORDL_TYPE ScriptableObjectReferenceAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableObjectReferenceAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__4();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<T>", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: None }]
  constexpr ScriptableObjectReferenceAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                            ::UnityW<T> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17662 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<T> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace BGLib::AppFlow::Initialization
// Dependencies BGLib.AppFlow.Initialization.AsyncInstaller, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace BGLib::AppFlow::Initialization {
// cpp template
template <typename T>
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.ScriptableObjectReferenceAsyncInstaller`1<T>
class CORDL_TYPE ScriptableObjectReferenceAsyncInstaller_1 : public ::BGLib::AppFlow::Initialization::AsyncInstaller {
public:
  // Declarations
  using _LoadResourcesBeforeInstallAsync_d__4 = ::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__4<T>;

  /// @brief Field _operationHandle, offset 0x28, size 0x20
  __declspec(property(get = __cordl_internal_get__operationHandle, put = __cordl_internal_set__operationHandle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>
      _operationHandle;

  __declspec(property(get = get_assetRuntimeKey)) ::StringW assetRuntimeKey;

  /// @brief Method InstallBindings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> LoadAsync(::StringW runtimeKey);

  /// @brief Method LoadResourcesBeforeInstall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry, ::Zenject::DiContainer* _);

  /// @brief Method LoadResourcesBeforeInstallAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry, ::Zenject::DiContainer* _);

  static inline ::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>* New_ctor();

  /// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> const& __cordl_internal_get__operationHandle() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>& __cordl_internal_get__operationHandle();

  constexpr void __cordl_internal_set__operationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_assetRuntimeKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_assetRuntimeKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableObjectReferenceAsyncInstaller_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectReferenceAsyncInstaller_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableObjectReferenceAsyncInstaller_1(ScriptableObjectReferenceAsyncInstaller_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectReferenceAsyncInstaller_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableObjectReferenceAsyncInstaller_1(ScriptableObjectReferenceAsyncInstaller_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17663 };

  /// @brief Field _operationHandle, offset: 0x28, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> ____operationHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::AppFlow::Initialization
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1, "BGLib.AppFlow.Initialization", "ScriptableObjectReferenceAsyncInstaller`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__4, "BGLib.AppFlow.Initialization",
                                      "ScriptableObjectReferenceAsyncInstaller`1/<LoadResourcesBeforeInstallAsync>d__4");
