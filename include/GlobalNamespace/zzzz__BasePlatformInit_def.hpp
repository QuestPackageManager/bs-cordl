#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BasePlatformInit)
namespace GlobalNamespace {
class IPlatformInit;
}
namespace GlobalNamespace {
struct __BasePlatformInit___Initialize_d__5;
}
namespace Zenject {
class IInitializable;
}
namespace GlobalNamespace {
struct __BasePlatformInit___InitializeAsync_d__7;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class BasePlatformInit;
}
namespace GlobalNamespace {
struct __BasePlatformInit___InitializeAsync_d__7;
}
namespace GlobalNamespace {
struct __BasePlatformInit___Initialize_d__5;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BasePlatformInit);
MARK_VAL_T(::GlobalNamespace::__BasePlatformInit___InitializeAsync_d__7);
MARK_VAL_T(::GlobalNamespace::__BasePlatformInit___Initialize_d__5);
// Type: ::<Initialize>d__5
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3400))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15976)) CS Name: ::BasePlatformInit::<Initialize>d__5
struct CORDL_TYPE __BasePlatformInit___Initialize_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x27fd860, size 0x284, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x27fdae4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BasePlatformInit*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __BasePlatformInit___Initialize_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::BasePlatformInit* __4__this,
                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BasePlatformInit___Initialize_d__5();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BasePlatformInit* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BasePlatformInit___Initialize_d__5, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BasePlatformInit___Initialize_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BasePlatformInit___Initialize_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BasePlatformInit___Initialize_d__5, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BasePlatformInit___Initialize_d__5, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<InitializeAsync>d__7
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 105
// }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(15977)) CS Name:
// ::BasePlatformInit::<InitializeAsync>d__7
struct CORDL_TYPE __BasePlatformInit___InitializeAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x27fdaf0, size 0x220, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x27fdd10, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BasePlatformInit*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __BasePlatformInit___InitializeAsync_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                      ::GlobalNamespace::BasePlatformInit* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BasePlatformInit___InitializeAsync_d__7();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BasePlatformInit* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BasePlatformInit___InitializeAsync_d__7, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BasePlatformInit___InitializeAsync_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BasePlatformInit___InitializeAsync_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BasePlatformInit___InitializeAsync_d__7, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BasePlatformInit___InitializeAsync_d__7, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BasePlatformInit
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15978))
// CS Name: ::BasePlatformInit*
class CORDL_TYPE BasePlatformInit : public ::System::Object {
public:
  // Declarations
  using _InitializeAsync_d__7 = ::GlobalNamespace::__BasePlatformInit___InitializeAsync_d__7;

  using _Initialize_d__5 = ::GlobalNamespace::__BasePlatformInit___Initialize_d__5;

  /// @brief Field <IsInitialized>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__IsInitialized_k__BackingField, put = __set__IsInitialized_k__BackingField)) bool _IsInitialized_k__BackingField;

  /// @brief Field _initializationTask, offset 0x18, size 0x8
  __declspec(property(get = __get__initializationTask, put = __set__initializationTask))::System::Threading::Tasks::Task_1<bool>* _initializationTask;

  __declspec(property(get = get_IsInitialized, put = set_IsInitialized)) bool IsInitialized;

  /// @brief Convert operator to "::GlobalNamespace::IPlatformInit"
  constexpr operator ::GlobalNamespace::IPlatformInit*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  constexpr bool& __get__IsInitialized_k__BackingField();

  constexpr bool const& __get__IsInitialized_k__BackingField() const;

  constexpr void __set__IsInitialized_k__BackingField(bool value);

  constexpr ::System::Threading::Tasks::Task_1<bool>*& __get__initializationTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<bool>*> const& __get__initializationTask() const;

  constexpr void __set__initializationTask(::System::Threading::Tasks::Task_1<bool>* value);

  /// @brief Method get_IsInitialized, addr 0x27fd6b8, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsInitialized();

  /// @brief Method set_IsInitialized, addr 0x27fd6c0, size 0xc, virtual false, abstract: false, final false
  inline void set_IsInitialized(bool value);

  /// @brief Method Initialize, addr 0x27fd6cc, size 0x94, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method InitializeInternalAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<bool>* InitializeInternalAsync();

  /// @brief Method InitializeAsync, addr 0x27fd760, size 0xf8, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* InitializeAsync();

  static inline ::GlobalNamespace::BasePlatformInit* New_ctor();

  /// @brief Method .ctor, addr 0x27fd858, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BasePlatformInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasePlatformInit(BasePlatformInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasePlatformInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasePlatformInit(BasePlatformInit const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasePlatformInit();

public:
  /// @brief Field <IsInitialized>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____IsInitialized_k__BackingField;

  /// @brief Field _initializationTask, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<bool>* ____initializationTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasePlatformInit, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BasePlatformInit, ____IsInitialized_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasePlatformInit, ____initializationTask) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BasePlatformInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasePlatformInit*, "", "BasePlatformInit");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BasePlatformInit___InitializeAsync_d__7, "", "BasePlatformInit/<InitializeAsync>d__7");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BasePlatformInit___Initialize_d__5, "", "BasePlatformInit/<Initialize>d__5");
