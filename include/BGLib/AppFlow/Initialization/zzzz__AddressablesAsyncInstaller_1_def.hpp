#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/AddressablesAsyncInstaller_1.hpp"
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
CORDL_MODULE_EXPORT(AddressablesAsyncInstaller_1)
namespace BGLib::AppFlow::Initialization {
template <typename T> struct AddressablesAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__2;
}
namespace BGLib::AppFlow::Initialization {
class AsyncInstaller_IInstallerRegistry;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
template <typename T> class AddressablesAsyncInstaller_1;
}
namespace BGLib::AppFlow::Initialization {
template <typename T> struct AddressablesAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1);
MARK_GEN_VAL_T(::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__2);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BGLib::AppFlow::Initialization {
// cpp template
template <typename T>
// Is value type: true
// CS Name: BGLib.AppFlow.Initialization.AddressablesAsyncInstaller`1/<LoadResourcesBeforeInstallAsync>d__2<T>
struct CORDL_TYPE AddressablesAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__2 {
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
  constexpr AddressablesAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__2();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<T>", modifiers: "", def_value: None }, CppParam {
  // name: "registry", ty: "::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*>", modifiers: "", def_value: None }]
  constexpr AddressablesAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__2(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<T> __4__this,
      ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17647 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<T> __4__this;

  /// @brief Field registry, offset: 0x28, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace BGLib::AppFlow::Initialization
// Dependencies BGLib.AppFlow.Initialization.AsyncInstaller, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace BGLib::AppFlow::Initialization {
// cpp template
template <typename T>
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.AddressablesAsyncInstaller`1<T>
class CORDL_TYPE AddressablesAsyncInstaller_1 : public ::BGLib::AppFlow::Initialization::AsyncInstaller {
public:
  // Declarations
  using _LoadResourcesBeforeInstallAsync_d__2 = ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__2<T>;

  /// @brief Field _handle, offset 0x28, size 0x20
  __declspec(property(get = __cordl_internal_get__handle,
                      put = __cordl_internal_set__handle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>
      _handle;

  __declspec(property(get = get_assetLabelRuntimeKey)) ::StringW assetLabelRuntimeKey;

  /// @brief Method GetLocations, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* GetLocations(::StringW runtimeKey);

  /// @brief Method LoadAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>> LoadAsync(::StringW runtimeKey);

  /// @brief Method LoadResourcesBeforeInstall, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<T>* assets, ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry);

  /// @brief Method LoadResourcesBeforeInstall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry, ::Zenject::DiContainer* _);

  /// @brief Method LoadResourcesBeforeInstallAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry, ::Zenject::DiContainer* _);

  static inline ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>* New_ctor();

  /// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*> const& __cordl_internal_get__handle() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>& __cordl_internal_get__handle();

  constexpr void __cordl_internal_set__handle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_assetLabelRuntimeKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_assetLabelRuntimeKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddressablesAsyncInstaller_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AddressablesAsyncInstaller_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddressablesAsyncInstaller_1(AddressablesAsyncInstaller_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddressablesAsyncInstaller_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddressablesAsyncInstaller_1(AddressablesAsyncInstaller_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17648 };

  /// @brief Field _handle, offset: 0x28, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*> ____handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::AppFlow::Initialization
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1, "BGLib.AppFlow.Initialization", "AddressablesAsyncInstaller`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__2, "BGLib.AppFlow.Initialization",
                                      "AddressablesAsyncInstaller`1/<LoadResourcesBeforeInstallAsync>d__2");
