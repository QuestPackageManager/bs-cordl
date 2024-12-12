#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InterpretedFrame.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrameInfo_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InterpretedFrame)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Linq::Expressions::Interpreter {
class DebugInfo;
}
namespace System::Linq::Expressions::Interpreter {
struct InterpretedFrameInfo;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame__GetStackTraceDebugInfo_d__29;
}
namespace System::Linq::Expressions::Interpreter {
class Interpreter;
}
namespace System::Runtime::CompilerServices {
class IStrongBox;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame__GetStackTraceDebugInfo_d__29;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::InterpretedFrame);
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::InterpretedFrame__GetStackTraceDebugInfo_d__29);
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Linq.Expressions.Interpreter.InterpretedFrameInfo, System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.InterpretedFrame/<GetStackTraceDebugInfo>d__29
class CORDL_TYPE InterpretedFrame__GetStackTraceDebugInfo_d__29 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get =
                          System_Collections_Generic_IEnumerator_System_Linq_Expressions_Interpreter_InterpretedFrameInfo__get_Current)) ::System::Linq::Expressions::Interpreter::InterpretedFrameInfo
      System_Collections_Generic_IEnumerator_System_Linq_Expressions_Interpreter_InterpretedFrameInfo__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Linq::Expressions::Interpreter::InterpretedFrameInfo __2__current;

  /// @brief Field <>4__this, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::System::Linq::Expressions::Interpreter::InterpretedFrame* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <frame>5__2, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__frame_5__2, put = __cordl_internal_set__frame_5__2)) ::System::Linq::Expressions::Interpreter::InterpretedFrame* _frame_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x40d31bc, size 0x88, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Linq::Expressions::Interpreter::InterpretedFrame__GetStackTraceDebugInfo_d__29* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Linq.Expressions.Interpreter.InterpretedFrameInfo>.GetEnumerator, addr 0x40d32ec, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>*
  System_Collections_Generic_IEnumerable_System_Linq_Expressions_Interpreter_InterpretedFrameInfo__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Linq.Expressions.Interpreter.InterpretedFrameInfo>.get_Current, addr 0x40d324c, size 0xc, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::Interpreter::InterpretedFrameInfo System_Collections_Generic_IEnumerator_System_Linq_Expressions_Interpreter_InterpretedFrameInfo__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x40d3388, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x40d3258, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x40d3290, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x40d31b8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Linq::Expressions::Interpreter::InterpretedFrameInfo const& __cordl_internal_get___2__current() const;

  constexpr ::System::Linq::Expressions::Interpreter::InterpretedFrameInfo& __cordl_internal_get___2__current();

  constexpr ::System::Linq::Expressions::Interpreter::InterpretedFrame* const& __cordl_internal_get___4__this() const;

  constexpr ::System::Linq::Expressions::Interpreter::InterpretedFrame*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Linq::Expressions::Interpreter::InterpretedFrame* const& __cordl_internal_get__frame_5__2() const;

  constexpr ::System::Linq::Expressions::Interpreter::InterpretedFrame*& __cordl_internal_get__frame_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Linq::Expressions::Interpreter::InterpretedFrameInfo value);

  constexpr void __cordl_internal_set___4__this(::System::Linq::Expressions::Interpreter::InterpretedFrame* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__frame_5__2(::System::Linq::Expressions::Interpreter::InterpretedFrame* value);

  /// @brief Method .ctor, addr 0x40d29e0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>*
  i___System__Collections__Generic__IEnumerable_1___System__Linq__Expressions__Interpreter__InterpretedFrameInfo_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>*
  i___System__Collections__Generic__IEnumerator_1___System__Linq__Expressions__Interpreter__InterpretedFrameInfo_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InterpretedFrame__GetStackTraceDebugInfo_d__29();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InterpretedFrame__GetStackTraceDebugInfo_d__29", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InterpretedFrame__GetStackTraceDebugInfo_d__29(InterpretedFrame__GetStackTraceDebugInfo_d__29&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InterpretedFrame__GetStackTraceDebugInfo_d__29", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InterpretedFrame__GetStackTraceDebugInfo_d__29(InterpretedFrame__GetStackTraceDebugInfo_d__29 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13895 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::System::Linq::Expressions::Interpreter::InterpretedFrameInfo _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::System::Linq::Expressions::Interpreter::InterpretedFrame* _____4__this;

  /// @brief Field <frame>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Linq::Expressions::Interpreter::InterpretedFrame* ____frame_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::InterpretedFrame__GetStackTraceDebugInfo_d__29, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InterpretedFrame__GetStackTraceDebugInfo_d__29, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InterpretedFrame__GetStackTraceDebugInfo_d__29, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InterpretedFrame__GetStackTraceDebugInfo_d__29, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InterpretedFrame__GetStackTraceDebugInfo_d__29, ____frame_5__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::InterpretedFrame__GetStackTraceDebugInfo_d__29, 0x40>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
// Dependencies System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.InterpretedFrame
class CORDL_TYPE InterpretedFrame : public ::System::Object {
public:
  // Declarations
  using _GetStackTraceDebugInfo_d__29 = ::System::Linq::Expressions::Interpreter::InterpretedFrame__GetStackTraceDebugInfo_d__29;

  /// @brief Field Closure, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Closure,
                      put = __cordl_internal_set_Closure)) ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*>
      Closure;

  /// @brief Field Data, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Data, put = __cordl_internal_set_Data)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> Data;

  /// @brief Field InstructionIndex, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_InstructionIndex, put = __cordl_internal_set_InstructionIndex)) int32_t InstructionIndex;

  /// @brief Field Interpreter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Interpreter, put = __cordl_internal_set_Interpreter)) ::System::Linq::Expressions::Interpreter::Interpreter* Interpreter;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_Parent)) ::System::Linq::Expressions::Interpreter::InterpretedFrame* Parent;

  /// @brief Field StackIndex, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_StackIndex, put = __cordl_internal_set_StackIndex)) int32_t StackIndex;

  /// @brief Field _continuationIndex, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__continuationIndex, put = __cordl_internal_set__continuationIndex)) int32_t _continuationIndex;

  /// @brief Field _continuations, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__continuations, put = __cordl_internal_set__continuations)) ::ArrayW<int32_t, ::Array<int32_t>*> _continuations;

  /// @brief Field _parent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__parent, put = __cordl_internal_set__parent)) ::System::Linq::Expressions::Interpreter::InterpretedFrame* _parent;

  /// @brief Field _pendingContinuation, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__pendingContinuation, put = __cordl_internal_set__pendingContinuation)) int32_t _pendingContinuation;

  /// @brief Field _pendingValue, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__pendingValue, put = __cordl_internal_set__pendingValue)) ::System::Object* _pendingValue;

  /// @brief Field s_currentFrame, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_currentFrame, put = setStaticF_s_currentFrame)) ::System::Linq::Expressions::Interpreter::InterpretedFrame* s_currentFrame;

  /// @brief Method Dup, addr 0x40d28dc, size 0x8c, virtual false, abstract: false, final false
  inline void Dup();

  /// @brief Method Enter, addr 0x40d2c64, size 0x68, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Interpreter::InterpretedFrame* Enter();

  /// @brief Method GetDebugInfo, addr 0x40d2658, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Interpreter::DebugInfo* GetDebugInfo(int32_t instructionIndex);

  /// @brief Method GetStackTraceDebugInfo, addr 0x40d2970, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Interpreter::InterpretedFrameInfo>* GetStackTraceDebugInfo();

  /// @brief Method Goto, addr 0x40d3084, size 0x134, virtual false, abstract: false, final false
  inline int32_t Goto(int32_t labelIndex, ::System::Object* value, bool gotoExceptionHandler);

  /// @brief Method IsJumpHappened, addr 0x40d2d1c, size 0x10, virtual false, abstract: false, final false
  inline bool IsJumpHappened();

  /// @brief Method Leave, addr 0x40d2ccc, size 0x50, virtual false, abstract: false, final false
  inline void Leave(::System::Linq::Expressions::Interpreter::InterpretedFrame* prevFrame);

  static inline ::System::Linq::Expressions::Interpreter::InterpretedFrame*
  New_ctor(::System::Linq::Expressions::Interpreter::Interpreter* interpreter,
           ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> closure);

  /// @brief Method Peek, addr 0x40d28a4, size 0x38, virtual false, abstract: false, final false
  inline ::System::Object* Peek();

  /// @brief Method Pop, addr 0x40c8640, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Object* Pop();

  /// @brief Method PopPendingContinuation, addr 0x40d3000, size 0x84, virtual false, abstract: false, final false
  inline void PopPendingContinuation();

  /// @brief Method Push, addr 0x40c867c, size 0x6c, virtual false, abstract: false, final false
  inline void Push(::System::Object* value);

  /// @brief Method Push, addr 0x40c8c34, size 0xc8, virtual false, abstract: false, final false
  inline void Push(bool value);

  /// @brief Method Push, addr 0x40cbfa4, size 0xbc, virtual false, abstract: false, final false
  inline void Push(int16_t value);

  /// @brief Method Push, addr 0x40cc0f8, size 0x78, virtual false, abstract: false, final false
  inline void Push(int32_t value);

  /// @brief Method Push, addr 0x40d27c4, size 0xbc, virtual false, abstract: false, final false
  inline void Push(int8_t value);

  /// @brief Method Push, addr 0x40c8890, size 0xbc, virtual false, abstract: false, final false
  inline void Push(uint16_t value);

  /// @brief Method Push, addr 0x40c86e8, size 0xbc, virtual false, abstract: false, final false
  inline void Push(uint8_t value);

  /// @brief Method PushContinuation, addr 0x40d2d3c, size 0x3c, virtual false, abstract: false, final false
  inline void PushContinuation(int32_t continuation);

  /// @brief Method PushPendingContinuation, addr 0x40d2f80, size 0x80, virtual false, abstract: false, final false
  inline void PushPendingContinuation();

  /// @brief Method RemoveContinuation, addr 0x40d2d2c, size 0x10, virtual false, abstract: false, final false
  inline void RemoveContinuation();

  /// @brief Method SaveTraceToException, addr 0x40d2a14, size 0x250, virtual false, abstract: false, final false
  inline void SaveTraceToException(::System::Exception* exception);

  /// @brief Method SetStackDepth, addr 0x40d2880, size 0x24, virtual false, abstract: false, final false
  inline void SetStackDepth(int32_t depth);

  /// @brief Method YieldToCurrentContinuation, addr 0x40d2d78, size 0x78, virtual false, abstract: false, final false
  inline int32_t YieldToCurrentContinuation();

  /// @brief Method YieldToPendingContinuation, addr 0x40d2df0, size 0x190, virtual false, abstract: false, final false
  inline int32_t YieldToPendingContinuation();

  constexpr ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> const& __cordl_internal_get_Closure() const;

  constexpr ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*>& __cordl_internal_get_Closure();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_Data() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_Data();

  constexpr int32_t const& __cordl_internal_get_InstructionIndex() const;

  constexpr int32_t& __cordl_internal_get_InstructionIndex();

  constexpr ::System::Linq::Expressions::Interpreter::Interpreter* const& __cordl_internal_get_Interpreter() const;

  constexpr ::System::Linq::Expressions::Interpreter::Interpreter*& __cordl_internal_get_Interpreter();

  constexpr int32_t const& __cordl_internal_get_StackIndex() const;

  constexpr int32_t& __cordl_internal_get_StackIndex();

  constexpr int32_t const& __cordl_internal_get__continuationIndex() const;

  constexpr int32_t& __cordl_internal_get__continuationIndex();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__continuations() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__continuations();

  constexpr ::System::Linq::Expressions::Interpreter::InterpretedFrame* const& __cordl_internal_get__parent() const;

  constexpr ::System::Linq::Expressions::Interpreter::InterpretedFrame*& __cordl_internal_get__parent();

  constexpr int32_t const& __cordl_internal_get__pendingContinuation() const;

  constexpr int32_t& __cordl_internal_get__pendingContinuation();

  constexpr ::System::Object* const& __cordl_internal_get__pendingValue() const;

  constexpr ::System::Object*& __cordl_internal_get__pendingValue();

  constexpr void __cordl_internal_set_Closure(::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> value);

  constexpr void __cordl_internal_set_Data(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set_InstructionIndex(int32_t value);

  constexpr void __cordl_internal_set_Interpreter(::System::Linq::Expressions::Interpreter::Interpreter* value);

  constexpr void __cordl_internal_set_StackIndex(int32_t value);

  constexpr void __cordl_internal_set__continuationIndex(int32_t value);

  constexpr void __cordl_internal_set__continuations(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__parent(::System::Linq::Expressions::Interpreter::InterpretedFrame* value);

  constexpr void __cordl_internal_set__pendingContinuation(int32_t value);

  constexpr void __cordl_internal_set__pendingValue(::System::Object* value);

  /// @brief Method .ctor, addr 0x40d2568, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Interpreter::Interpreter* interpreter,
                    ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> closure);

  static inline ::System::Linq::Expressions::Interpreter::InterpretedFrame* getStaticF_s_currentFrame();

  /// @brief Method get_Name, addr 0x40d27a8, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Parent, addr 0x40d2968, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Interpreter::InterpretedFrame* get_Parent();

  static inline void setStaticF_s_currentFrame(::System::Linq::Expressions::Interpreter::InterpretedFrame* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InterpretedFrame();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InterpretedFrame", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InterpretedFrame(InterpretedFrame&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InterpretedFrame", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InterpretedFrame(InterpretedFrame const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13896 };

  /// @brief Field Interpreter, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::Interpreter::Interpreter* ___Interpreter;

  /// @brief Field _parent, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Interpreter::InterpretedFrame* ____parent;

  /// @brief Field _continuations, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____continuations;

  /// @brief Field _continuationIndex, offset: 0x28, size: 0x4, def value: None
  int32_t ____continuationIndex;

  /// @brief Field _pendingContinuation, offset: 0x2c, size: 0x4, def value: None
  int32_t ____pendingContinuation;

  /// @brief Field _pendingValue, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ____pendingValue;

  /// @brief Field Data, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___Data;

  /// @brief Field Closure, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> ___Closure;

  /// @brief Field StackIndex, offset: 0x48, size: 0x4, def value: None
  int32_t ___StackIndex;

  /// @brief Field InstructionIndex, offset: 0x4c, size: 0x4, def value: None
  int32_t ___InstructionIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::InterpretedFrame, ___Interpreter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InterpretedFrame, ____parent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InterpretedFrame, ____continuations) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InterpretedFrame, ____continuationIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InterpretedFrame, ____pendingContinuation) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InterpretedFrame, ____pendingValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InterpretedFrame, ___Data) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InterpretedFrame, ___Closure) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InterpretedFrame, ___StackIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InterpretedFrame, ___InstructionIndex) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::InterpretedFrame, 0x50>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::InterpretedFrame);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::InterpretedFrame*, "System.Linq.Expressions.Interpreter", "InterpretedFrame");
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::InterpretedFrame__GetStackTraceDebugInfo_d__29);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::InterpretedFrame__GetStackTraceDebugInfo_d__29*, "System.Linq.Expressions.Interpreter",
                       "InterpretedFrame/<GetStackTraceDebugInfo>d__29");
