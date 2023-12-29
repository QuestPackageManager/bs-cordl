#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
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
struct __NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6;
}
namespace GlobalNamespace {
struct __NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5;
}
namespace GlobalNamespace {
struct EntitlementsStatus;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
class AdditionalContentModel;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__EntitlementStatus;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3395)), TypeDefinitionIndex(TypeDefinitionIndex(12655)), TypeDefinitionIndex(TypeDefinitionIndex(3389)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 864 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4576)) CS Name:
// ::NetworkPlayerEntitlementChecker::<HandleGetIsEntitledToLevel>d__5
struct CORDL_TYPE __NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x221ce84 size 0x260 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x221d0e4 size 0xc virtual true final true
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

static_assert(offsetof(::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetEntitlementStatus>d__6
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 883 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 864 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(4122)), TypeDefinitionIndex(TypeDefinitionIndex(12655))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4577))
// CS Name: ::NetworkPlayerEntitlementChecker::<GetEntitlementStatus>d__6
struct CORDL_TYPE __NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x221d0f0 size 0x204 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x221d2f4 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::NetworkPlayerEntitlementChecker*", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1",
  // ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus> __t__builder,
      ::GlobalNamespace::NetworkPlayerEntitlementChecker* __4__this, ::StringW levelId,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __u__1) noexcept;

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
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6, levelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NetworkPlayerEntitlementChecker
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4578))
// CS Name: ::NetworkPlayerEntitlementChecker*
class CORDL_TYPE NetworkPlayerEntitlementChecker : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _GetEntitlementStatus_d__6 = ::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6;

  using _HandleGetIsEntitledToLevel_d__5 = ::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5;

  /// @brief Field _rpcManager, offset 0x18, size 0x8
  __declspec(property(get = __get__rpcManager, put = __set__rpcManager))::GlobalNamespace::IMenuRpcManager* _rpcManager;

  /// @brief Field _additionalContentModel, offset 0x20, size 0x8
  __declspec(property(get = __get__additionalContentModel, put = __set__additionalContentModel))::GlobalNamespace::AdditionalContentModel* _additionalContentModel;

  constexpr ::GlobalNamespace::IMenuRpcManager*& __get__rpcManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMenuRpcManager*> const& __get__rpcManager() const;

  constexpr void __set__rpcManager(::GlobalNamespace::IMenuRpcManager* value);

  constexpr ::GlobalNamespace::AdditionalContentModel*& __get__additionalContentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AdditionalContentModel*> const& __get__additionalContentModel() const;

  constexpr void __set__additionalContentModel(::GlobalNamespace::AdditionalContentModel* value);

  /// @brief Method Start addr 0x221c9ac size 0xf0 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x221ca9c size 0x1a4 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleDataInvalidated addr 0x221cc40 size 0xa4 virtual false final false
  inline void HandleDataInvalidated();

  /// @brief Method HandleGetIsEntitledToLevel addr 0x221cce4 size 0x9c virtual false final false
  inline void HandleGetIsEntitledToLevel(::StringW userId, ::StringW levelId);

  /// @brief Method GetEntitlementStatus addr 0x221cd80 size 0xfc virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementsStatus>* GetEntitlementStatus(::StringW levelId);

  static inline ::GlobalNamespace::NetworkPlayerEntitlementChecker* New_ctor();

  /// @brief Method .ctor addr 0x221ce7c size 0x8 virtual false final false
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
  ::GlobalNamespace::AdditionalContentModel* ____additionalContentModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkPlayerEntitlementChecker, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerEntitlementChecker, ____rpcManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerEntitlementChecker, ____additionalContentModel) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NetworkPlayerEntitlementChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkPlayerEntitlementChecker*, "", "NetworkPlayerEntitlementChecker");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6, "", "NetworkPlayerEntitlementChecker/<GetEntitlementStatus>d__6");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5, "", "NetworkPlayerEntitlementChecker/<HandleGetIsEntitledToLevel>d__5");
