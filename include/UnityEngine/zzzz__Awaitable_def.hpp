#pragma once
// IWYU pragma private; include "UnityEngine/Awaitable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__SpinLock_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Awaitable)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System::Threading {
template <typename T> class ThreadLocal_1;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Pool {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine {
template <typename T> class AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox;
}
namespace UnityEngine {
class AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox;
}
namespace UnityEngine {
template <typename T> class Awaitable_1;
}
namespace UnityEngine {
struct Awaitable_AwaitableAndFrameIndex;
}
namespace UnityEngine {
template <typename T> struct Awaitable_AwaitableAsyncMethodBuilder_1;
}
namespace UnityEngine {
struct Awaitable_AwaitableAsyncMethodBuilder;
}
namespace UnityEngine {
struct Awaitable_AwaitableHandle;
}
namespace UnityEngine {
struct Awaitable_AwaiterCompletionThreadAffinity;
}
namespace UnityEngine {
class Awaitable_DoubleBufferedAwaitableList;
}
namespace UnityEngine {
class Awaitable___c;
}
namespace UnityEngine {
class UnitySynchronizationContext;
}
// Forward declare root types
namespace UnityEngine {
struct Awaitable_AwaiterCompletionThreadAffinity;
}
namespace UnityEngine {
class Awaitable;
}
namespace UnityEngine {
template <typename T> class AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox;
}
namespace UnityEngine {
class AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox;
}
namespace UnityEngine {
class Awaitable_DoubleBufferedAwaitableList;
}
namespace UnityEngine {
class Awaitable___c;
}
namespace UnityEngine {
struct Awaitable_AwaitableAndFrameIndex;
}
namespace UnityEngine {
struct Awaitable_AwaitableAsyncMethodBuilder;
}
namespace UnityEngine {
template <typename T> struct Awaitable_AwaitableAsyncMethodBuilder_1;
}
namespace UnityEngine {
struct Awaitable_AwaitableHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity);
MARK_REF_PTR_T(::UnityEngine::Awaitable);
MARK_GEN_REF_PTR_T(::UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox);
MARK_REF_PTR_T(::UnityEngine::AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox);
MARK_REF_PTR_T(::UnityEngine::Awaitable_DoubleBufferedAwaitableList);
MARK_REF_PTR_T(::UnityEngine::Awaitable___c);
MARK_VAL_T(::UnityEngine::Awaitable_AwaitableAndFrameIndex);
MARK_VAL_T(::UnityEngine::Awaitable_AwaitableAsyncMethodBuilder);
MARK_GEN_VAL_T(::UnityEngine::Awaitable_AwaitableAsyncMethodBuilder_1);
MARK_VAL_T(::UnityEngine::Awaitable_AwaitableHandle);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Awaitable/AwaiterCompletionThreadAffinity
struct CORDL_TYPE Awaitable_AwaiterCompletionThreadAffinity {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Awaitable_AwaiterCompletionThreadAffinity_Unwrapped
  enum struct __Awaitable_AwaiterCompletionThreadAffinity_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_MainThread = static_cast<int32_t>(0x1),
    __E_BackgroundThread = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Awaitable_AwaiterCompletionThreadAffinity_Unwrapped() const noexcept {
    return static_cast<__Awaitable_AwaiterCompletionThreadAffinity_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Awaitable_AwaiterCompletionThreadAffinity();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Awaitable_AwaiterCompletionThreadAffinity(int32_t value__) noexcept;

  /// @brief Field BackgroundThread value: I32(2)
  static ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity const BackgroundThread;

  /// @brief Field MainThread value: I32(1)
  static ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity const MainThread;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10294 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Awaitable/AwaitableAsyncMethodBuilder/IStateMachineBox
class CORDL_TYPE AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox(AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10295 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Awaitable/AwaitableAsyncMethodBuilder
struct CORDL_TYPE Awaitable_AwaitableAsyncMethodBuilder {
public:
  // Declarations
  using IStateMachineBox = ::UnityEngine::AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Awaitable_AwaitableAsyncMethodBuilder();

  // Ctor Parameters [CppParam { name: "_stateMachineBox", ty: "::UnityEngine::AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox*", modifiers: "", def_value: None }, CppParam { name:
  // "_resultingCoroutine", ty: "::UnityEngine::Awaitable*", modifiers: "", def_value: None }]
  constexpr Awaitable_AwaitableAsyncMethodBuilder(::UnityEngine::AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox* _stateMachineBox, ::UnityEngine::Awaitable* _resultingCoroutine) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10296 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _stateMachineBox, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox* _stateMachineBox;

  /// @brief Field _resultingCoroutine, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Awaitable* _resultingCoroutine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Awaitable_AwaitableAsyncMethodBuilder, _stateMachineBox) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Awaitable_AwaitableAsyncMethodBuilder, _resultingCoroutine) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Awaitable_AwaitableAsyncMethodBuilder, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Awaitable/AwaitableAsyncMethodBuilder`1/IStateMachineBox<T>
class CORDL_TYPE AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox(AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10297 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.Awaitable/AwaitableAsyncMethodBuilder`1<T>
struct CORDL_TYPE Awaitable_AwaitableAsyncMethodBuilder_1 {
public:
  // Declarations
  using IStateMachineBox = ::UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox<T>;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Awaitable_AwaitableAsyncMethodBuilder_1();

  // Ctor Parameters [CppParam { name: "_stateMachineBox", ty: "::UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox<T>*", modifiers: "", def_value: None }, CppParam { name:
  // "_resultingCoroutine", ty: "::UnityEngine::Awaitable_1<T>*", modifiers: "", def_value: None }]
  constexpr Awaitable_AwaitableAsyncMethodBuilder_1(::UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox<T>* _stateMachineBox,
                                                    ::UnityEngine::Awaitable_1<T>* _resultingCoroutine) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10298 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _stateMachineBox, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox<T>* _stateMachineBox;

  /// @brief Field _resultingCoroutine, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Awaitable_1<T>* _resultingCoroutine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Awaitable/AwaitableAndFrameIndex
struct CORDL_TYPE Awaitable_AwaitableAndFrameIndex {
public:
  // Declarations
  __declspec(property(get = get_Awaitable)) ::UnityEngine::Awaitable* Awaitable;

  __declspec(property(get = get_FrameIndex)) int32_t FrameIndex;

  /// @brief Method get_Awaitable, addr 0x6911b80, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Awaitable* get_Awaitable();

  /// @brief Method get_FrameIndex, addr 0x6911b88, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_FrameIndex();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Awaitable_AwaitableAndFrameIndex();

  // Ctor Parameters [CppParam { name: "_Awaitable_k__BackingField", ty: "::UnityEngine::Awaitable*", modifiers: "", def_value: None }, CppParam { name: "_FrameIndex_k__BackingField", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr Awaitable_AwaitableAndFrameIndex(::UnityEngine::Awaitable* _Awaitable_k__BackingField, int32_t _FrameIndex_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10299 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field <Awaitable>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Awaitable* _Awaitable_k__BackingField;

  /// @brief Field <FrameIndex>k__BackingField, offset: 0x8, size: 0x4, def value: None
  int32_t _FrameIndex_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Awaitable_AwaitableAndFrameIndex, _Awaitable_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Awaitable_AwaitableAndFrameIndex, _FrameIndex_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Awaitable_AwaitableAndFrameIndex, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Awaitable/DoubleBufferedAwaitableList
class CORDL_TYPE Awaitable_DoubleBufferedAwaitableList : public ::System::Object {
public:
  // Declarations
  /// @brief Field _awaitables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__awaitables,
                      put = __cordl_internal_set__awaitables)) ::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>* _awaitables;

  /// @brief Field _scratch, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__scratch, put = __cordl_internal_set__scratch)) ::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>* _scratch;

  /// @brief Method Clear, addr 0x6910400, size 0x78, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::UnityEngine::Awaitable_DoubleBufferedAwaitableList* New_ctor();

  /// @brief Method SwapAndComplete, addr 0x69104dc, size 0x298, virtual false, abstract: false, final false
  inline void SwapAndComplete();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>* const& __cordl_internal_get__awaitables() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>*& __cordl_internal_get__awaitables();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>* const& __cordl_internal_get__scratch() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>*& __cordl_internal_get__scratch();

  constexpr void __cordl_internal_set__awaitables(::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>* value);

  constexpr void __cordl_internal_set__scratch(::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>* value);

  /// @brief Method .ctor, addr 0x6911aec, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Awaitable_DoubleBufferedAwaitableList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Awaitable_DoubleBufferedAwaitableList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Awaitable_DoubleBufferedAwaitableList(Awaitable_DoubleBufferedAwaitableList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Awaitable_DoubleBufferedAwaitableList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Awaitable_DoubleBufferedAwaitableList(Awaitable_DoubleBufferedAwaitableList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10300 };

  /// @brief Field _awaitables, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>* ____awaitables;

  /// @brief Field _scratch, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Awaitable_AwaitableAndFrameIndex>* ____scratch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Awaitable_DoubleBufferedAwaitableList, ____awaitables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Awaitable_DoubleBufferedAwaitableList, ____scratch) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Awaitable_DoubleBufferedAwaitableList, 0x20>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.IntPtr
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Awaitable/AwaitableHandle
struct CORDL_TYPE Awaitable_AwaitableHandle {
public:
  // Declarations
  __declspec(property(get = get_IsManaged)) bool IsManaged;

  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Field ManagedHandle, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ManagedHandle, put = setStaticF_ManagedHandle)) ::UnityEngine::Awaitable_AwaitableHandle ManagedHandle;

  /// @brief Field NullHandle, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NullHandle, put = setStaticF_NullHandle)) ::UnityEngine::Awaitable_AwaitableHandle NullHandle;

  /// @brief Method .ctor, addr 0x6911bb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr handle);

  static inline ::UnityEngine::Awaitable_AwaitableHandle getStaticF_ManagedHandle();

  static inline ::UnityEngine::Awaitable_AwaitableHandle getStaticF_NullHandle();

  /// @brief Method get_IsManaged, addr 0x6911280, size 0x6c, virtual false, abstract: false, final false
  inline bool get_IsManaged();

  /// @brief Method get_IsNull, addr 0x69112ec, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsNull();

  /// @brief Method op_Implicit, addr 0x6911bc0, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr op_Implicit___System__IntPtr(::UnityEngine::Awaitable_AwaitableHandle handle);

  static inline void setStaticF_ManagedHandle(::UnityEngine::Awaitable_AwaitableHandle value);

  static inline void setStaticF_NullHandle(::UnityEngine::Awaitable_AwaitableHandle value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Awaitable_AwaitableHandle();

  // Ctor Parameters [CppParam { name: "_handle", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr Awaitable_AwaitableHandle(::System::IntPtr _handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10301 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _handle, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr _handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Awaitable_AwaitableHandle, _handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Awaitable_AwaitableHandle, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Awaitable/<>c
class CORDL_TYPE Awaitable___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Awaitable___c* __9;

  /// @brief Field <>9__76_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__76_1, put = setStaticF___9__76_1)) ::System::Func_1<::UnityEngine::Awaitable*>* __9__76_1;

  static inline ::UnityEngine::Awaitable___c* New_ctor();

  /// @brief Method <.cctor>b__76_0, addr 0x6911c70, size 0x140, virtual false, abstract: false, final false
  inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>* __cctor_b__76_0();

  /// @brief Method <.cctor>b__76_1, addr 0x6911db0, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Awaitable* __cctor_b__76_1();

  /// @brief Method .ctor, addr 0x6911c6c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Awaitable___c* getStaticF___9();

  static inline ::System::Func_1<::UnityEngine::Awaitable*>* getStaticF___9__76_1();

  static inline void setStaticF___9(::UnityEngine::Awaitable___c* value);

  static inline void setStaticF___9__76_1(::System::Func_1<::UnityEngine::Awaitable*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Awaitable___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Awaitable___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Awaitable___c(Awaitable___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Awaitable___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Awaitable___c(Awaitable___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10302 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Awaitable___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Nullable`1<T>, System.Object, System.Threading.CancellationTokenRegistration, System.Threading.SpinLock, UnityEngine.Awaitable::AwaitableHandle,
// UnityEngine.Awaitable::AwaiterCompletionThreadAffinity
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Awaitable
class CORDL_TYPE Awaitable : public ::System::Object {
public:
  // Declarations
  using AwaitableAndFrameIndex = ::UnityEngine::Awaitable_AwaitableAndFrameIndex;

  using AwaitableAsyncMethodBuilder = ::UnityEngine::Awaitable_AwaitableAsyncMethodBuilder;

  template <typename T> using AwaitableAsyncMethodBuilder_1 = ::UnityEngine::Awaitable_AwaitableAsyncMethodBuilder_1<T>;

  using AwaitableHandle = ::UnityEngine::Awaitable_AwaitableHandle;

  using AwaiterCompletionThreadAffinity = ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity;

  using DoubleBufferedAwaitableList = ::UnityEngine::Awaitable_DoubleBufferedAwaitableList;

  using __c = ::UnityEngine::Awaitable___c;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  __declspec(property(get = get_IsCompletedNoLock)) bool IsCompletedNoLock;

  __declspec(property(get = get_IsDettachedOrCompleted)) bool IsDettachedOrCompleted;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field _cancelTokenRegistration, offset 0x38, size 0x20
  __declspec(property(get = __cordl_internal_get__cancelTokenRegistration,
                      put = __cordl_internal_set__cancelTokenRegistration)) ::System::Nullable_1<::System::Threading::CancellationTokenRegistration>
      _cancelTokenRegistration;

  /// @brief Field _completionThreadAffinity, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__completionThreadAffinity,
                      put = __cordl_internal_set__completionThreadAffinity)) ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity _completionThreadAffinity;

  /// @brief Field _continuation, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__continuation, put = __cordl_internal_set__continuation)) ::System::Action* _continuation;

  /// @brief Field _endOfFrameAwaitables, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__endOfFrameAwaitables, put = setStaticF__endOfFrameAwaitables)) ::UnityEngine::Awaitable_DoubleBufferedAwaitableList* _endOfFrameAwaitables;

  /// @brief Field _exceptionToRethrow, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__exceptionToRethrow, put = __cordl_internal_set__exceptionToRethrow)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _exceptionToRethrow;

  /// @brief Field _handle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__handle, put = __cordl_internal_set__handle)) ::UnityEngine::Awaitable_AwaitableHandle _handle;

  /// @brief Field _mainThreadId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__mainThreadId, put = setStaticF__mainThreadId)) int32_t _mainThreadId;

  /// @brief Field _managedAwaitableDone, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__managedAwaitableDone, put = __cordl_internal_set__managedAwaitableDone)) bool _managedAwaitableDone;

  /// @brief Field _managedCompletionQueue, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__managedCompletionQueue,
                      put = __cordl_internal_set__managedCompletionQueue)) ::UnityEngine::Awaitable_DoubleBufferedAwaitableList* _managedCompletionQueue;

  /// @brief Field _nextFrameAndEndOfFrameWiredUp, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__nextFrameAndEndOfFrameWiredUp, put = setStaticF__nextFrameAndEndOfFrameWiredUp)) bool _nextFrameAndEndOfFrameWiredUp;

  /// @brief Field _nextFrameAndEndOfFrameWiredUpCTRegistration, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF__nextFrameAndEndOfFrameWiredUpCTRegistration,
                      put = setStaticF__nextFrameAndEndOfFrameWiredUpCTRegistration)) ::System::Threading::CancellationTokenRegistration _nextFrameAndEndOfFrameWiredUpCTRegistration;

  /// @brief Field _nextFrameAwaitables, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__nextFrameAwaitables, put = setStaticF__nextFrameAwaitables)) ::UnityEngine::Awaitable_DoubleBufferedAwaitableList* _nextFrameAwaitables;

  /// @brief Field _pool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__pool, put = setStaticF__pool)) ::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>*>* _pool;

  /// @brief Field _spinLock, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__spinLock, put = __cordl_internal_set__spinLock)) ::System::Threading::SpinLock _spinLock;

  /// @brief Field _synchronizationContext, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__synchronizationContext, put = setStaticF__synchronizationContext)) ::System::Threading::SynchronizationContext* _synchronizationContext;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method CheckPointerValidity, addr 0x691188c, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Awaitable_AwaitableHandle CheckPointerValidity();

  /// @brief Method DoRunContinuationOnSynchonizationContext, addr 0x6910d20, size 0x70, virtual false, abstract: false, final false
  static inline void DoRunContinuationOnSynchonizationContext(::System::Object* continuation);

  /// @brief Method IsNativeAwaitableCompleted, addr 0x6910348, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t IsNativeAwaitableCompleted(::System::IntPtr nativeAwaitable);

  /// @brief Method MatchCompletionThreadAffinity, addr 0x6910940, size 0xe8, virtual false, abstract: false, final false
  static inline bool MatchCompletionThreadAffinity(::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity awaiterCompletionThreadAffinity);

  /// @brief Method NewManagedAwaitable, addr 0x6910850, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Awaitable* NewManagedAwaitable();

  static inline ::UnityEngine::Awaitable* New_ctor();

  /// @brief Method OnDelayedCallManagerCleared, addr 0x6910384, size 0x7c, virtual false, abstract: false, final false
  static inline void OnDelayedCallManagerCleared();

  /// @brief Method OnEndOfFrame, addr 0x6910774, size 0x64, virtual false, abstract: false, final false
  static inline void OnEndOfFrame();

  /// @brief Method OnUpdate, addr 0x6910478, size 0x64, virtual false, abstract: false, final false
  static inline void OnUpdate();

  /// @brief Method PropagateExceptionAndRelease, addr 0x6910edc, size 0x3a4, virtual false, abstract: false, final false
  inline void PropagateExceptionAndRelease();

  /// @brief Method RaiseManagedCompletion, addr 0x6910d90, size 0x14c, virtual false, abstract: false, final false
  inline void RaiseManagedCompletion();

  /// @brief Method RaiseManagedCompletion, addr 0x6910a28, size 0x184, virtual false, abstract: false, final false
  inline void RaiseManagedCompletion(::System::Exception* exception);

  /// @brief Method ReleaseNativeAwaitable, addr 0x691030c, size 0x3c, virtual false, abstract: false, final false
  static inline void ReleaseNativeAwaitable(::System::IntPtr nativeAwaitable);

  /// @brief Method RunContinuation, addr 0x69101d4, size 0x138, virtual false, abstract: false, final false
  inline void RunContinuation();

  /// @brief Method RunOrScheduleContinuation, addr 0x6910bac, size 0x174, virtual false, abstract: false, final false
  inline void RunOrScheduleContinuation(::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity awaiterCompletionThreadAffinity, ::System::Action* continuation);

  /// @brief Method SetExceptionFromNative, addr 0x69100a0, size 0x134, virtual false, abstract: false, final false
  inline void SetExceptionFromNative(::System::Exception* ex);

  /// @brief Method SetSynchronizationContext, addr 0x69107d8, size 0x70, virtual false, abstract: false, final false
  static inline void SetSynchronizationContext(::UnityEngine::UnitySynchronizationContext* synchronizationContext);

  /// @brief Method System.Collections.IEnumerator.MoveNext, addr 0x6911934, size 0x34, virtual true, abstract: false, final true
  inline bool System_Collections_IEnumerator_MoveNext();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x6911968, size 0x4, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x691196c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr ::System::Nullable_1<::System::Threading::CancellationTokenRegistration> const& __cordl_internal_get__cancelTokenRegistration() const;

  constexpr ::System::Nullable_1<::System::Threading::CancellationTokenRegistration>& __cordl_internal_get__cancelTokenRegistration();

  constexpr ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity const& __cordl_internal_get__completionThreadAffinity() const;

  constexpr ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity& __cordl_internal_get__completionThreadAffinity();

  constexpr ::System::Action* const& __cordl_internal_get__continuation() const;

  constexpr ::System::Action*& __cordl_internal_get__continuation();

  constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& __cordl_internal_get__exceptionToRethrow() const;

  constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __cordl_internal_get__exceptionToRethrow();

  constexpr ::UnityEngine::Awaitable_AwaitableHandle const& __cordl_internal_get__handle() const;

  constexpr ::UnityEngine::Awaitable_AwaitableHandle& __cordl_internal_get__handle();

  constexpr bool const& __cordl_internal_get__managedAwaitableDone() const;

  constexpr bool& __cordl_internal_get__managedAwaitableDone();

  constexpr ::UnityEngine::Awaitable_DoubleBufferedAwaitableList* const& __cordl_internal_get__managedCompletionQueue() const;

  constexpr ::UnityEngine::Awaitable_DoubleBufferedAwaitableList*& __cordl_internal_get__managedCompletionQueue();

  constexpr ::System::Threading::SpinLock const& __cordl_internal_get__spinLock() const;

  constexpr ::System::Threading::SpinLock& __cordl_internal_get__spinLock();

  constexpr void __cordl_internal_set__cancelTokenRegistration(::System::Nullable_1<::System::Threading::CancellationTokenRegistration> value);

  constexpr void __cordl_internal_set__completionThreadAffinity(::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity value);

  constexpr void __cordl_internal_set__continuation(::System::Action* value);

  constexpr void __cordl_internal_set__exceptionToRethrow(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* value);

  constexpr void __cordl_internal_set__handle(::UnityEngine::Awaitable_AwaitableHandle value);

  constexpr void __cordl_internal_set__managedAwaitableDone(bool value);

  constexpr void __cordl_internal_set__managedCompletionQueue(::UnityEngine::Awaitable_DoubleBufferedAwaitableList* value);

  constexpr void __cordl_internal_set__spinLock(::System::Threading::SpinLock value);

  /// @brief Method .ctor, addr 0x6910848, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Awaitable_DoubleBufferedAwaitableList* getStaticF__endOfFrameAwaitables();

  static inline int32_t getStaticF__mainThreadId();

  static inline bool getStaticF__nextFrameAndEndOfFrameWiredUp();

  static inline ::System::Threading::CancellationTokenRegistration getStaticF__nextFrameAndEndOfFrameWiredUpCTRegistration();

  static inline ::UnityEngine::Awaitable_DoubleBufferedAwaitableList* getStaticF__nextFrameAwaitables();

  static inline ::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>*>* getStaticF__pool();

  static inline ::System::Threading::SynchronizationContext* getStaticF__synchronizationContext();

  /// @brief Method get_IsCompleted, addr 0x691149c, size 0x12c, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Method get_IsCompletedNoLock, addr 0x69112fc, size 0x1a0, virtual false, abstract: false, final false
  inline bool get_IsCompletedNoLock();

  /// @brief Method get_IsDettachedOrCompleted, addr 0x69115c8, size 0x2c4, virtual false, abstract: false, final false
  inline bool get_IsDettachedOrCompleted();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  static inline void setStaticF__endOfFrameAwaitables(::UnityEngine::Awaitable_DoubleBufferedAwaitableList* value);

  static inline void setStaticF__mainThreadId(int32_t value);

  static inline void setStaticF__nextFrameAndEndOfFrameWiredUp(bool value);

  static inline void setStaticF__nextFrameAndEndOfFrameWiredUpCTRegistration(::System::Threading::CancellationTokenRegistration value);

  static inline void setStaticF__nextFrameAwaitables(::UnityEngine::Awaitable_DoubleBufferedAwaitableList* value);

  static inline void setStaticF__pool(::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>*>* value);

  static inline void setStaticF__synchronizationContext(::System::Threading::SynchronizationContext* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Awaitable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Awaitable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Awaitable(Awaitable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Awaitable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Awaitable(Awaitable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10303 };

  /// @brief Field _spinLock, offset: 0x10, size: 0x4, def value: None
  ::System::Threading::SpinLock ____spinLock;

  /// @brief Field _handle, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Awaitable_AwaitableHandle ____handle;

  /// @brief Field _exceptionToRethrow, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* ____exceptionToRethrow;

  /// @brief Field _managedAwaitableDone, offset: 0x28, size: 0x1, def value: None
  bool ____managedAwaitableDone;

  /// @brief Field _completionThreadAffinity, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity ____completionThreadAffinity;

  /// @brief Field _continuation, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ____continuation;

  /// @brief Field _cancelTokenRegistration, offset: 0x38, size: 0x20, def value: None
  ::System::Nullable_1<::System::Threading::CancellationTokenRegistration> ____cancelTokenRegistration;

  /// @brief Field _managedCompletionQueue, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Awaitable_DoubleBufferedAwaitableList* ____managedCompletionQueue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Awaitable, ____spinLock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Awaitable, ____handle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Awaitable, ____exceptionToRethrow) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Awaitable, ____managedAwaitableDone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Awaitable, ____completionThreadAffinity) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Awaitable, ____continuation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Awaitable, ____cancelTokenRegistration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Awaitable, ____managedCompletionQueue) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Awaitable, 0x60>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Awaitable_AwaiterCompletionThreadAffinity, "UnityEngine", "Awaitable/AwaiterCompletionThreadAffinity");
NEED_NO_BOX(::UnityEngine::Awaitable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Awaitable*, "UnityEngine", "Awaitable");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox, "UnityEngine", "Awaitable/AwaitableAsyncMethodBuilder`1/IStateMachineBox");
NEED_NO_BOX(::UnityEngine::AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox*, "UnityEngine", "Awaitable/AwaitableAsyncMethodBuilder/IStateMachineBox");
NEED_NO_BOX(::UnityEngine::Awaitable_DoubleBufferedAwaitableList);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Awaitable_DoubleBufferedAwaitableList*, "UnityEngine", "Awaitable/DoubleBufferedAwaitableList");
NEED_NO_BOX(::UnityEngine::Awaitable___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Awaitable___c*, "UnityEngine", "Awaitable/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Awaitable_AwaitableAndFrameIndex, "UnityEngine", "Awaitable/AwaitableAndFrameIndex");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Awaitable_AwaitableAsyncMethodBuilder, "UnityEngine", "Awaitable/AwaitableAsyncMethodBuilder");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Awaitable_AwaitableAsyncMethodBuilder_1, "UnityEngine", "Awaitable/AwaitableAsyncMethodBuilder`1");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Awaitable_AwaitableHandle, "UnityEngine", "Awaitable/AwaitableHandle");
