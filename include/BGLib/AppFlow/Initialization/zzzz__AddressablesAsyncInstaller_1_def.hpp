#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddressablesAsyncInstaller_1)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine::AddressableAssets {
class AssetLabelReference;
}
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
}
namespace System::Threading::Tasks {
class Task;
}
namespace BGLib::AppFlow::Initialization {
template <typename T> struct __AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
template <typename T> class AddressablesAsyncInstaller_1;
}
namespace BGLib::AppFlow::Initialization {
template <typename T> struct __AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1);
MARK_GEN_VAL_T(::BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2);
// Type: ::<LoadResourcesBeforeInstallAsync>d__2
// SizeInfo { instance_size: 56, native_size: 72, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3835)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3835), inst: 87 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 5057 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(15419)) CS Name: ::AddressablesAsyncInstaller`1::<LoadResourcesBeforeInstallAsync>d__2<T>
struct CORDL_TYPE __AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*", modifiers: "", def_value: None }, CppParam { name: "registry", ty:
  // "::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*>", modifiers: "", def_value: None }]
  constexpr __AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                  ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>* __4__this,
                                                                                  ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry,
                                                                                  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>* __4__this;

  /// @brief Field registry, offset: 0x28, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace BGLib::AppFlow::Initialization
// Type: BGLib.AppFlow.Initialization::AddressablesAsyncInstaller`1
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14033), inst: 852 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3835), inst: 86 }),
// TypeDefinitionIndex(TypeDefinitionIndex(14033)), TypeDefinitionIndex(TypeDefinitionIndex(15422)), TypeDefinitionIndex(TypeDefinitionIndex(3835))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(15420)) CS Name: ::BGLib.AppFlow.Initialization::AddressablesAsyncInstaller`1<T>*
class CORDL_TYPE AddressablesAsyncInstaller_1 : public ::BGLib::AppFlow::Initialization::AsyncInstaller {
public:
  // Declarations
  using _LoadResourcesBeforeInstallAsync_d__2 = ::BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>;

  /// @brief Field _handle, offset 0x20, size 0x20
  __declspec(property(get = __get__handle, put = __set__handle))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*> _handle;

  __declspec(property(get = get_assetLabel))::UnityEngine::AddressableAssets::AssetLabelReference* assetLabel;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>& __get__handle();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*> const& __get__handle() const;

  constexpr void __set__handle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*> value);

  /// @brief Method LoadResourcesBeforeInstall addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry);

  /// @brief Method LoadResourcesBeforeInstallAsync addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Threading::Tasks::Task* LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry);

  /// @brief Method get_assetLabel addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::AddressableAssets::AssetLabelReference* get_assetLabel();

  /// @brief Method LoadResourcesBeforeInstall addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<T>* assets, ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry);

  /// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void OnDestroy();

  static inline ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AddressablesAsyncInstaller_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddressablesAsyncInstaller_1(AddressablesAsyncInstaller_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddressablesAsyncInstaller_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddressablesAsyncInstaller_1(AddressablesAsyncInstaller_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddressablesAsyncInstaller_1();

public:
  /// @brief Field _handle, offset: 0x20, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*> ____handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::AppFlow::Initialization
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1, "BGLib.AppFlow.Initialization", "AddressablesAsyncInstaller`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2, "BGLib.AppFlow.Initialization",
                                      "AddressablesAsyncInstaller`1/<LoadResourcesBeforeInstallAsync>d__2");
