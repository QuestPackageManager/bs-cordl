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
struct EntitlementStatus;
}
namespace GlobalNamespace {
struct EntitlementsStatus;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
class IEntitlementModel;
}
namespace GlobalNamespace {
class IMenuRpcManager;
}
namespace GlobalNamespace {
struct __NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__7;
}
namespace GlobalNamespace {
struct __NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__6;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
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
// Forward declare root types
namespace GlobalNamespace {
class NetworkPlayerEntitlementChecker;
}
namespace GlobalNamespace {
struct __NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__7;
}
namespace GlobalNamespace {
struct __NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__6;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NetworkPlayerEntitlementChecker);
MARK_VAL_T(::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__7);
MARK_VAL_T(::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__6);
// Type: ::<HandleGetIsEntitledToLevel>d__6
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::NetworkPlayerEntitlementChecker::<HandleGetIsEntitledToLevel>d__6
struct CORDL_TYPE __NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x28bdd04, size 0x260, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x28bdf64, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__6();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker>",
  // modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus>", modifiers: "", def_value: None }]
  constexpr __NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> __4__this, ::StringW levelId,
                                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> __4__this;

  /// @brief Field levelId, offset: 0x30, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__6, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__6, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__6, levelId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__6, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetEntitlementStatus>d__7
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::NetworkPlayerEntitlementChecker::<GetEntitlementStatus>d__7
struct CORDL_TYPE __NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x28bdf70, size 0x278, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x28be1e8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker>", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__7(int32_t __1__state,
                                                                          ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus> __t__builder,
                                                                          ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> __4__this, ::StringW levelId,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> __4__this;

  /// @brief Field levelId, offset: 0x28, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__7, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__7, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__7, levelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__7, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NetworkPlayerEntitlementChecker
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NetworkPlayerEntitlementChecker*
class CORDL_TYPE NetworkPlayerEntitlementChecker : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _GetEntitlementStatus_d__7 = ::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__7;

  using _HandleGetIsEntitledToLevel_d__6 = ::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__6;

  /// @brief Field _additionalContentModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalContentModel, put = __cordl_internal_set__additionalContentModel))::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _entitlementModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlementModel, put = __cordl_internal_set__entitlementModel))::GlobalNamespace::IEntitlementModel* _entitlementModel;

  /// @brief Field _rpcManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rpcManager, put = __cordl_internal_set__rpcManager))::GlobalNamespace::IMenuRpcManager* _rpcManager;

  /// @brief Method GetEntitlementStatus, addr 0x28bdc00, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementsStatus>* GetEntitlementStatus(::StringW levelId);

  /// @brief Method HandleDataInvalidated, addr 0x28bdac0, size 0xa4, virtual false, abstract: false, final false
  inline void HandleDataInvalidated();

  /// @brief Method HandleGetIsEntitledToLevel, addr 0x28bdb64, size 0x9c, virtual false, abstract: false, final false
  inline void HandleGetIsEntitledToLevel(::StringW userId, ::StringW levelId);

  static inline ::GlobalNamespace::NetworkPlayerEntitlementChecker* New_ctor();

  /// @brief Method OnDestroy, addr 0x28bd8f4, size 0x1cc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x28bd804, size 0xf0, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __cordl_internal_get__additionalContentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> const& __cordl_internal_get__additionalContentModel() const;

  constexpr ::GlobalNamespace::IEntitlementModel*& __cordl_internal_get__entitlementModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IEntitlementModel*> const& __cordl_internal_get__entitlementModel() const;

  constexpr ::GlobalNamespace::IMenuRpcManager*& __cordl_internal_get__rpcManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMenuRpcManager*> const& __cordl_internal_get__rpcManager() const;

  constexpr void __cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr void __cordl_internal_set__entitlementModel(::GlobalNamespace::IEntitlementModel* value);

  constexpr void __cordl_internal_set__rpcManager(::GlobalNamespace::IMenuRpcManager* value);

  /// @brief Method .ctor, addr 0x28bdcfc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPlayerEntitlementChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerEntitlementChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPlayerEntitlementChecker(NetworkPlayerEntitlementChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerEntitlementChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPlayerEntitlementChecker(NetworkPlayerEntitlementChecker const&) = delete;

  /// @brief Field _rpcManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IMenuRpcManager* ____rpcManager;

  /// @brief Field _additionalContentModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  /// @brief Field _entitlementModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IEntitlementModel* ____entitlementModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkPlayerEntitlementChecker, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerEntitlementChecker, ____rpcManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerEntitlementChecker, ____additionalContentModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayerEntitlementChecker, ____entitlementModel) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NetworkPlayerEntitlementChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkPlayerEntitlementChecker*, "", "NetworkPlayerEntitlementChecker");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__7, "", "NetworkPlayerEntitlementChecker/<GetEntitlementStatus>d__7");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__6, "", "NetworkPlayerEntitlementChecker/<HandleGetIsEntitledToLevel>d__6");
