#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppInit)
namespace System {
template <typename TResult> class Func_1;
}
namespace GlobalNamespace {
struct __AppInit___InitializeAsync_d__13;
}
namespace GlobalNamespace {
class __AppInit____c__DisplayClass21_0;
}
namespace GlobalNamespace {
class __AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData;
}
namespace GlobalNamespace {
class AppInitSetupData;
}
namespace System::Threading::Tasks {
class Task;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
struct __AppInit___StartGameAsync_d__11;
}
namespace GlobalNamespace {
struct __AppInit__AppStartType;
}
namespace GlobalNamespace {
struct __AppInit___Awake_d__10;
}
namespace GlobalNamespace {
class __AppInit____c;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace BGLib::AppFlow::Initialization {
class AsyncSceneContext;
}
namespace GlobalNamespace {
class __AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
struct __AppInit__AppStartType;
}
namespace GlobalNamespace {
class AppInit;
}
namespace GlobalNamespace {
class __AppInit____c;
}
namespace GlobalNamespace {
class __AppInit____c__DisplayClass21_0;
}
namespace GlobalNamespace {
class __AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d;
}
namespace GlobalNamespace {
struct __AppInit___Awake_d__10;
}
namespace GlobalNamespace {
struct __AppInit___InitializeAsync_d__13;
}
namespace GlobalNamespace {
struct __AppInit___StartGameAsync_d__11;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__AppInit__AppStartType);
MARK_REF_PTR_T(::GlobalNamespace::AppInit);
MARK_REF_PTR_T(::GlobalNamespace::__AppInit____c);
MARK_REF_PTR_T(::GlobalNamespace::__AppInit____c__DisplayClass21_0);
MARK_REF_PTR_T(::GlobalNamespace::__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d);
MARK_VAL_T(::GlobalNamespace::__AppInit___Awake_d__10);
MARK_VAL_T(::GlobalNamespace::__AppInit___InitializeAsync_d__13);
MARK_VAL_T(::GlobalNamespace::__AppInit___StartGameAsync_d__11);
// Type: ::AppStartType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15385))
// CS Name: ::AppInit::AppStartType
struct CORDL_TYPE __AppInit__AppStartType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AppInit__AppStartType_Unwrapped
  enum struct ____AppInit__AppStartType_Unwrapped : int32_t {
    __E_AppStart = static_cast<int32_t>(0x0),
    __E_AppRestart = static_cast<int32_t>(0x1),
    __E_MultiSceneEditor = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AppInit__AppStartType_Unwrapped() const noexcept {
    return static_cast<____AppInit__AppStartType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AppInit__AppStartType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AppInit__AppStartType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field AppStart value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__AppInit__AppStartType const AppStart;

  /// @brief Field AppRestart value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__AppInit__AppStartType const AppRestart;

  /// @brief Field MultiSceneEditor value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__AppInit__AppStartType const MultiSceneEditor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit__AppStartType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit__AppStartType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<Awake>d__10
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3393)), TypeDefinitionIndex(TypeDefinitionIndex(3400))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15386))
// CS Name: ::AppInit::<Awake>d__10
struct CORDL_TYPE __AppInit___Awake_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xe1dcfc, size 0x228, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xe1df24, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AppInit*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __AppInit___Awake_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::AppInit* __4__this,
                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AppInit___Awake_d__10();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::AppInit* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit___Awake_d__10, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___Awake_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___Awake_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___Awake_d__10, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___Awake_d__10, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<StartGameAsync>d__11
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(3393))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15387))
// CS Name: ::AppInit::<StartGameAsync>d__11
struct CORDL_TYPE __AppInit___StartGameAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xe1df30, size 0x2d4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xe1e2cc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AppInit*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __AppInit___StartGameAsync_d__11(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::AppInit* __4__this,
                                             ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AppInit___StartGameAsync_d__11();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AppInit* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit___StartGameAsync_d__11, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___StartGameAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___StartGameAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___StartGameAsync_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___StartGameAsync_d__11, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15388))
// CS Name: ::AppInit::<>c*
class CORDL_TYPE __AppInit____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__AppInit____c* __9;

  /// @brief Field <>9__13_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__13_1, put = setStaticF___9__13_1))::System::Func_1<bool>* __9__13_1;

  static inline void setStaticF___9(::GlobalNamespace::__AppInit____c* value);

  static inline ::GlobalNamespace::__AppInit____c* getStaticF___9();

  static inline void setStaticF___9__13_1(::System::Func_1<bool>* value);

  static inline ::System::Func_1<bool>* getStaticF___9__13_1();

  static inline ::GlobalNamespace::__AppInit____c* New_ctor();

  /// @brief Method .ctor, addr 0xe1e33c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <InitializeAsync>b__13_1, addr 0xe1e344, size 0x8, virtual false, abstract: false, final false
  inline bool _InitializeAsync_b__13_1();

  // Ctor Parameters [CppParam { name: "", ty: "__AppInit____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AppInit____c(__AppInit____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AppInit____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AppInit____c(__AppInit____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AppInit____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<InitializeAsync>d__13
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15385)), TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(3393))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15389))
// CS Name: ::AppInit::<InitializeAsync>d__13
struct CORDL_TYPE __AppInit___InitializeAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xe1e34c, size 0x52c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xe1e96c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AppInit*", modifiers: "", def_value: None },
  // CppParam { name: "_startType_5__2", ty: "::GlobalNamespace::__AppInit__AppStartType", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __AppInit___InitializeAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::AppInit* __4__this,
                                              ::GlobalNamespace::__AppInit__AppStartType _startType_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AppInit___InitializeAsync_d__13();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AppInit* __4__this;

  /// @brief Field <startType>5__2, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__AppInit__AppStartType _startType_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit___InitializeAsync_d__13, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___InitializeAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___InitializeAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___InitializeAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___InitializeAsync_d__13, _startType_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___InitializeAsync_d__13, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<<WaitUntilAsync>g__WaitUntilPredicateTrue|0>d
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15390))
// CS Name: ::AppInit::<>c__DisplayClass21_0::<<WaitUntilAsync>g__WaitUntilPredicateTrue|0>d*
class CORDL_TYPE __AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::__AppInit____c__DisplayClass21_0* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::__AppInit____c__DisplayClass21_0*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AppInit____c__DisplayClass21_0*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::__AppInit____c__DisplayClass21_0* value);

  static inline ::GlobalNamespace::__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0xe1e978, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0xe1e9a0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0xe1e9a4, size 0xcc, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xe1ea70, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0xe1ea78, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0xe1eab8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d(__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d(__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__AppInit____c__DisplayClass21_0* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass21_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15391))
// CS Name: ::AppInit::<>c__DisplayClass21_0*
class CORDL_TYPE __AppInit____c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  using __WaitUntilAsync_g__WaitUntilPredicateTrue_0_d = ::GlobalNamespace::__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d;

  /// @brief Field predicate, offset 0x10, size 0x8
  __declspec(property(get = __get_predicate, put = __set_predicate))::System::Func_1<bool>* predicate;

  /// @brief Field tcs, offset 0x18, size 0x8
  __declspec(property(get = __get_tcs, put = __set_tcs))::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* tcs;

  constexpr ::System::Func_1<bool>*& __get_predicate();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<bool>*> const& __get_predicate() const;

  constexpr void __set_predicate(::System::Func_1<bool>* value);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*& __get_tcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*> const& __get_tcs() const;

  constexpr void __set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* value);

  static inline ::GlobalNamespace::__AppInit____c__DisplayClass21_0* New_ctor();

  /// @brief Method .ctor, addr 0xe1dbd4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <WaitUntilAsync>g__WaitUntilPredicateTrue|0, addr 0xe1dbdc, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* _WaitUntilAsync_g__WaitUntilPredicateTrue_0();

  // Ctor Parameters [CppParam { name: "", ty: "__AppInit____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AppInit____c__DisplayClass21_0(__AppInit____c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AppInit____c__DisplayClass21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AppInit____c__DisplayClass21_0(__AppInit____c__DisplayClass21_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AppInit____c__DisplayClass21_0();

public:
  /// @brief Field predicate, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<bool>* ___predicate;

  /// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* ___tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit____c__DisplayClass21_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit____c__DisplayClass21_0, ___predicate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit____c__DisplayClass21_0, ___tcs) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AppInit
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15392))
// CS Name: ::AppInit*
class CORDL_TYPE AppInit : public ::Zenject::MonoInstaller {
public:
  // Declarations
  using __c__DisplayClass21_0 = ::GlobalNamespace::__AppInit____c__DisplayClass21_0;

  using _InitializeAsync_d__13 = ::GlobalNamespace::__AppInit___InitializeAsync_d__13;

  using __c = ::GlobalNamespace::__AppInit____c;

  using _StartGameAsync_d__11 = ::GlobalNamespace::__AppInit___StartGameAsync_d__11;

  using _Awake_d__10 = ::GlobalNamespace::__AppInit___Awake_d__10;

  using AppStartType = ::GlobalNamespace::__AppInit__AppStartType;

  /// @brief Field _cameraGO, offset 0x20, size 0x8
  __declspec(property(get = __get__cameraGO, put = __set__cameraGO))::UnityEngine::GameObject* _cameraGO;

  /// @brief Field _asyncSceneContext, offset 0x28, size 0x8
  __declspec(property(get = __get__asyncSceneContext, put = __set__asyncSceneContext))::BGLib::AppFlow::Initialization::AsyncSceneContext* _asyncSceneContext;

  /// @brief Field sceneSetupData, offset 0x30, size 0x8
  __declspec(property(get = __get_sceneSetupData, put = __set_sceneSetupData))::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData* sceneSetupData;

  /// @brief Field _setupData, offset 0x38, size 0x8
  __declspec(property(get = __get__setupData, put = __set__setupData))::GlobalNamespace::AppInitSetupData* _setupData;

  /// @brief Field _gameScenesManager, offset 0x40, size 0x8
  __declspec(property(get = __get__gameScenesManager, put = __set__gameScenesManager))::GlobalNamespace::GameScenesManager* _gameScenesManager;

  __declspec(property(get = get_gameScenesManager))::GlobalNamespace::GameScenesManager* gameScenesManager;

  __declspec(property(get = get_isTestContext)) bool isTestContext;

  constexpr ::UnityEngine::GameObject*& __get__cameraGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__cameraGO() const;

  constexpr void __set__cameraGO(::UnityEngine::GameObject* value);

  constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext*& __get__asyncSceneContext();

  constexpr ::cordl_internals::to_const_pointer<::BGLib::AppFlow::Initialization::AsyncSceneContext*> const& __get__asyncSceneContext() const;

  constexpr void __set__asyncSceneContext(::BGLib::AppFlow::Initialization::AsyncSceneContext* value);

  constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*& __get_sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*> const& __get_sceneSetupData() const;

  constexpr void __set_sceneSetupData(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData* value);

  constexpr ::GlobalNamespace::AppInitSetupData*& __get__setupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitSetupData*> const& __get__setupData() const;

  constexpr void __set__setupData(::GlobalNamespace::AppInitSetupData* value);

  constexpr ::GlobalNamespace::GameScenesManager*& __get__gameScenesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get__gameScenesManager() const;

  constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager* value);

  /// @brief Method get_gameScenesManager, addr 0xe1d57c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameScenesManager* get_gameScenesManager();

  /// @brief Method get_isTestContext, addr 0xe1d584, size 0x20, virtual false, abstract: false, final false
  inline bool get_isTestContext();

  /// @brief Method Awake, addr 0xe1d5a4, size 0x94, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method StartGameAsync, addr 0xe1d638, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* StartGameAsync();

  /// @brief Method PreloadAsync, addr 0xe1d700, size 0x88, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PreloadAsync();

  /// @brief Method InitializeAsync, addr 0xe1d788, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeAsync();

  /// @brief Method OnDestroy, addr 0xe1d854, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleBeforeDismissingScenes, addr 0xe1d9c0, size 0x9c, virtual false, abstract: false, final false
  inline void HandleBeforeDismissingScenes();

  /// @brief Method GetAppStartType, addr 0xe1da5c, size 0x94, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__AppInit__AppStartType GetAppStartType();

  /// @brief Method InstallBindings, addr 0xe1daf0, size 0x4, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method AppStartAndMultiSceneEditorSetup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AppStartAndMultiSceneEditorSetup();

  /// @brief Method RepeatableSetupAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* RepeatableSetupAsync();

  /// @brief Method TransitionToNextScene, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void TransitionToNextScene();

  /// @brief Method WaitUntilAsync, addr 0xe1daf4, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WaitUntilAsync(::System::Func_1<bool>* predicate);

  static inline ::GlobalNamespace::AppInit* New_ctor();

  /// @brief Method .ctor, addr 0xe1dc44, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <InitializeAsync>b__13_0, addr 0xe1dcd8, size 0x24, virtual false, abstract: false, final false
  inline bool _InitializeAsync_b__13_0();

  // Ctor Parameters [CppParam { name: "", ty: "AppInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppInit(AppInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppInit(AppInit const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInit();

public:
  /// @brief Field _cameraGO, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____cameraGO;

  /// @brief Field _asyncSceneContext, offset: 0x28, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::AsyncSceneContext* ____asyncSceneContext;

  /// @brief Field sceneSetupData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData* ___sceneSetupData;

  /// @brief Field _setupData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::AppInitSetupData* ____setupData;

  /// @brief Field _gameScenesManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* ____gameScenesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppInit, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit, ____cameraGO) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit, ____asyncSceneContext) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit, ___sceneSetupData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit, ____setupData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit, ____gameScenesManager) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit__AppStartType, "", "AppInit/AppStartType");
NEED_NO_BOX(::GlobalNamespace::AppInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInit*, "", "AppInit");
NEED_NO_BOX(::GlobalNamespace::__AppInit____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit____c*, "", "AppInit/<>c");
NEED_NO_BOX(::GlobalNamespace::__AppInit____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit____c__DisplayClass21_0*, "", "AppInit/<>c__DisplayClass21_0");
NEED_NO_BOX(::GlobalNamespace::__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit____c__DisplayClass21_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d*, "",
                       "AppInit/<>c__DisplayClass21_0/<<WaitUntilAsync>g__WaitUntilPredicateTrue|0>d");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit___Awake_d__10, "", "AppInit/<Awake>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit___InitializeAsync_d__13, "", "AppInit/<InitializeAsync>d__13");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit___StartGameAsync_d__11, "", "AppInit/<StartGameAsync>d__11");
