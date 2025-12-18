#pragma once
// IWYU pragma private; include "BGLib/AsyncInitialization/AddressablesLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddressablesLoader)
namespace BGLib::AsyncInitialization {
template <typename TInstantiate, typename TReturn> struct AddressablesLoader__InstantiateFromAddressableToContainer_d__0_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace UnityEngine::AddressableAssets {
class AssetReferenceGameObject;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace BGLib::AsyncInitialization {
class AddressablesLoader;
}
namespace BGLib::AsyncInitialization {
template <typename TInstantiate, typename TReturn> struct AddressablesLoader__InstantiateFromAddressableToContainer_d__0_2;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::AsyncInitialization::AddressablesLoader);
MARK_GEN_VAL_T(::BGLib::AsyncInitialization::AddressablesLoader__InstantiateFromAddressableToContainer_d__0_2);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BGLib::AsyncInitialization {
// cpp template
template <typename TInstantiate, typename TReturn>
// Is value type: true
// CS Name: BGLib.AsyncInitialization.AddressablesLoader/<InstantiateFromAddressableToContainer>d__0`2<TInstantiate,TReturn>
struct CORDL_TYPE AddressablesLoader__InstantiateFromAddressableToContainer_d__0_2 {
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
  constexpr AddressablesLoader__InstantiateFromAddressableToContainer_d__0_2();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn>", modifiers: "", def_value: None }, CppParam { name: "prefab", ty:
  // "::UnityEngine::AddressableAssets::AssetReferenceGameObject*", modifiers: "", def_value: None }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::GameObject>>", modifiers: "", def_value: None }]
  constexpr AddressablesLoader__InstantiateFromAddressableToContainer_d__0_2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn> __t__builder,
                                                                             ::UnityEngine::AddressableAssets::AssetReferenceGameObject* prefab, ::Zenject::DiContainer* container,
                                                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::GameObject>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21401 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn> __t__builder;

  /// @brief Field prefab, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceGameObject* prefab;

  /// @brief Field container, offset: 0x28, size: 0x8, def value: None
  ::Zenject::DiContainer* container;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::GameObject>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace BGLib::AsyncInitialization
// Dependencies System.Object
namespace BGLib::AsyncInitialization {
// Is value type: false
// CS Name: BGLib.AsyncInitialization.AddressablesLoader
class CORDL_TYPE AddressablesLoader : public ::System::Object {
public:
  // Declarations
  template <typename TInstantiate, typename TReturn>
  using _InstantiateFromAddressableToContainer_d__0_2 = ::BGLib::AsyncInitialization::AddressablesLoader__InstantiateFromAddressableToContainer_d__0_2<TInstantiate, TReturn>;

  /// @brief Method InstantiateFromAddressableToContainer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstantiate, typename TReturn>
  static inline ::System::Threading::Tasks::Task_1<TReturn>* InstantiateFromAddressableToContainer(::UnityEngine::AddressableAssets::AssetReferenceGameObject* prefab,
                                                                                                   ::Zenject::DiContainer* container);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddressablesLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AddressablesLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddressablesLoader(AddressablesLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddressablesLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddressablesLoader(AddressablesLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21402 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AsyncInitialization::AddressablesLoader, 0x10>, "Size mismatch!");

} // namespace BGLib::AsyncInitialization
NEED_NO_BOX(::BGLib::AsyncInitialization::AddressablesLoader);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AsyncInitialization::AddressablesLoader*, "BGLib.AsyncInitialization", "AddressablesLoader");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGLib::AsyncInitialization::AddressablesLoader__InstantiateFromAddressableToContainer_d__0_2, "BGLib.AsyncInitialization",
                                      "AddressablesLoader/<InstantiateFromAddressableToContainer>d__0`2");
