#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddressablesLoader)
namespace BGLib::AsyncInitialization {
template <typename TInstantiate, typename TReturn> struct __AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
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
template <typename TInstantiate, typename TReturn> struct __AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::AsyncInitialization::AddressablesLoader);
MARK_GEN_VAL_T(::BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2);
// Type: ::<InstantiateFromAddressableToContainer>d__0`2
// SizeInfo { instance_size: 56, native_size: 72, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::AsyncInitialization {
// cpp template
template <typename TInstantiate, typename TReturn>
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3390)), TypeDefinitionIndex(TypeDefinitionIndex(3398)), TypeDefinitionIndex(TypeDefinitionIndex(8940)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3390), inst: 313 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3398), inst: 864 })] Self:
// TypeDefinitionIndex(TypeDefinitionIndex(15242)) CS Name: ::AddressablesLoader::<InstantiateFromAddressableToContainer>d__0`2<TInstantiate,TReturn>
struct CORDL_TYPE __AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn>", modifiers: "", def_value: None }, CppParam { name: "prefab", ty:
  // "::UnityEngine::AddressableAssets::AssetReferenceGameObject*", modifiers: "", def_value: None }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::GameObject>>", modifiers: "", def_value: None }]
  constexpr __AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn> __t__builder,
                                                                                ::UnityEngine::AddressableAssets::AssetReferenceGameObject* prefab, ::Zenject::DiContainer* container,
                                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::GameObject>> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace BGLib::AsyncInitialization
// Type: BGLib.AsyncInitialization::AddressablesLoader
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGLib::AsyncInitialization {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15243))
// CS Name: ::BGLib.AsyncInitialization::AddressablesLoader*
class CORDL_TYPE AddressablesLoader : public ::System::Object {
public:
  // Declarations
  template <typename TInstantiate, typename TReturn>
  using _InstantiateFromAddressableToContainer_d__0_2 = ::BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2<TInstantiate, TReturn>;

  /// @brief Method InstantiateFromAddressableToContainer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstantiate, typename TReturn>
  static inline ::System::Threading::Tasks::Task_1<TReturn>* InstantiateFromAddressableToContainer(::UnityEngine::AddressableAssets::AssetReferenceGameObject* prefab,
                                                                                                   ::Zenject::DiContainer* container);

  // Ctor Parameters [CppParam { name: "", ty: "AddressablesLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddressablesLoader(AddressablesLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddressablesLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddressablesLoader(AddressablesLoader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddressablesLoader();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AsyncInitialization::AddressablesLoader, 0x10>, "Size mismatch!");

} // namespace BGLib::AsyncInitialization
NEED_NO_BOX(::BGLib::AsyncInitialization::AddressablesLoader);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AsyncInitialization::AddressablesLoader*, "BGLib.AsyncInitialization", "AddressablesLoader");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGLib::AsyncInitialization::__AddressablesLoader___InstantiateFromAddressableToContainer_d__0_2, "BGLib.AsyncInitialization",
                                      "AddressablesLoader/<InstantiateFromAddressableToContainer>d__0`2");
