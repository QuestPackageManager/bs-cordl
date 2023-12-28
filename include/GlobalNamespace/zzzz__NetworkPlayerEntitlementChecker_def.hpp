#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementsStatus_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkPlayerEntitlementChecker)
namespace GlobalNamespace {
class IMenuRpcManager;
}
namespace GlobalNamespace {
struct __NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
struct EntitlementsStatus;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
struct __NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkPlayerEntitlementChecker;
}
namespace GlobalNamespace {
struct __NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6;
}
namespace GlobalNamespace {
struct __NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NetworkPlayerEntitlementChecker);
MARK_VAL_T(::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6);
MARK_VAL_T(::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5);
// Type: ::<HandleGetIsEntitledToLevel>d__5
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12727)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3400)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 881 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(14963)) CS Name:
// ::NetworkPlayerEntitlementChecker::<HandleGetIsEntitledToLevel>d__5
struct CORDL_TYPE __NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x26376ec size 0x260 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x263794c size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::NetworkPlayerEntitlementChecker*",
  // modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus>", modifiers: "", def_value: None }]
  constexpr __NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                ::GlobalNamespace::NetworkPlayerEntitlementChecker* __4__this, ::StringW levelId,
                                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::NetworkPlayerEntitlementChecker* __4__this;

  /// @brief Field levelId, offset: 0x30, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetEntitlementStatus>d__6
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 880 }),
// TypeDefinitionIndex(TypeDefinitionIndex(16270)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(12727)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3402), inst: 881 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(14964)) CS Name: ::NetworkPlayerEntitlementChecker::<GetEntitlementStatus>d__6
struct CORDL_TYPE __NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2637958 size 0x27c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2637bd4 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::NetworkPlayerEntitlementChecker*", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1",
  // ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6(int32_t __1__state,
                                                                          ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus> __t__builder,
                                                                          ::GlobalNamespace::NetworkPlayerEntitlementChecker* __4__this, ::StringW levelId,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::NetworkPlayerEntitlementChecker* __4__this;

  /// @brief Field levelId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NetworkPlayerEntitlementChecker
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14965))
// CS Name: ::NetworkPlayerEntitlementChecker*
class CORDL_TYPE NetworkPlayerEntitlementChecker : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _GetEntitlementStatus_d__6 = ::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6;

  using _HandleGetIsEntitledToLevel_d__5 = ::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5;

  /// @brief Field _rpcManager, offset 0x18, size 0x8
  __declspec(property(get = __get__rpcManager, put = __set__rpcManager))::GlobalNamespace::IMenuRpcManager* _rpcManager;

  /// @brief Field _additionalContentModel, offset 0x20, size 0x8
  __declspec(property(get = __get__additionalContentModel, put = __set__additionalContentModel))::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  constexpr ::GlobalNamespace::IMenuRpcManager*& __get__rpcManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMenuRpcManager*> const& __get__rpcManager() const;

  constexpr void __set__rpcManager(::GlobalNamespace::IMenuRpcManager* value);

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __get__additionalContentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> const& __get__additionalContentModel() const;

  constexpr void __set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  /// @brief Method Start addr 0x26371ec size 0xf0 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x26372dc size 0x1cc virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleDataInvalidated addr 0x26374a8 size 0xa4 virtual false final false
  inline void HandleDataInvalidated();

  /// @brief Method HandleGetIsEntitledToLevel addr 0x263754c size 0x9c virtual false final false
  inline void HandleGetIsEntitledToLevel(::StringW userId, ::StringW levelId);

  /// @brief Method GetEntitlementStatus addr 0x26375e8 size 0xfc virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementsStatus>* GetEntitlementStatus(::StringW levelId);

  static inline ::GlobalNamespace::NetworkPlayerEntitlementChecker* New_ctor();

  /// @brief Method .ctor addr 0x26376e4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerEntitlementChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPlayerEntitlementChecker(NetworkPlayerEntitlementChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerEntitlementChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPlayerEntitlementChecker(NetworkPlayerEntitlementChecker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPlayerEntitlementChecker();

public:
  /// @brief Field _rpcManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IMenuRpcManager* ____rpcManager;

  /// @brief Field _additionalContentModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkPlayerEntitlementChecker, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NetworkPlayerEntitlementChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkPlayerEntitlementChecker*, "", "NetworkPlayerEntitlementChecker");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6, "", "NetworkPlayerEntitlementChecker/<GetEntitlementStatus>d__6");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5, "", "NetworkPlayerEntitlementChecker/<HandleGetIsEntitledToLevel>d__5");
