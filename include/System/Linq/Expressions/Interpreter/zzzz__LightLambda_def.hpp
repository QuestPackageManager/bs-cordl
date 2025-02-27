#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LightLambda.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightLambda)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Dynamic::Utils {
template <typename TKey, typename TValue> class CacheDict_2;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Linq::Expressions::Interpreter {
class Interpreter;
}
namespace System::Linq::Expressions::Interpreter {
class LightDelegateCreator;
}
namespace System::Linq::Expressions::Interpreter {
class LightLambda_DebugViewPrinter;
}
namespace System::Linq::Expressions::Interpreter {
class LightLambda___c__DisplayClass74_0;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::CompilerServices {
class IStrongBox;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Delegate;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class LightLambda;
}
namespace System::Linq::Expressions::Interpreter {
class LightLambda_DebugViewPrinter;
}
namespace System::Linq::Expressions::Interpreter {
class LightLambda___c__DisplayClass74_0;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::LightLambda);
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::LightLambda_DebugViewPrinter);
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::LightLambda___c__DisplayClass74_0);
// Dependencies System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LightLambda/DebugViewPrinter
class CORDL_TYPE LightLambda_DebugViewPrinter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _handlerEnter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__handlerEnter, put = __cordl_internal_set__handlerEnter)) ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* _handlerEnter;

  /// @brief Field _handlerExit, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__handlerExit, put = __cordl_internal_set__handlerExit)) ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* _handlerExit;

  /// @brief Field _indent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__indent, put = __cordl_internal_set__indent)) ::StringW _indent;

  /// @brief Field _interpreter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__interpreter, put = __cordl_internal_set__interpreter)) ::System::Linq::Expressions::Interpreter::Interpreter* _interpreter;

  /// @brief Field _tryStart, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__tryStart, put = __cordl_internal_set__tryStart)) ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* _tryStart;

  /// @brief Method AddHandlerExit, addr 0x40f61a0, size 0xa4, virtual false, abstract: false, final false
  inline void AddHandlerExit(int32_t index);

  /// @brief Method AddTryStart, addr 0x40f60cc, size 0xd4, virtual false, abstract: false, final false
  inline void AddTryStart(int32_t index);

  /// @brief Method Analyze, addr 0x40f5e40, size 0x28c, virtual false, abstract: false, final false
  inline void Analyze();

  /// @brief Method Dedent, addr 0x40f627c, size 0x38, virtual false, abstract: false, final false
  inline void Dedent();

  /// @brief Method EmitExits, addr 0x40f6790, size 0xd4, virtual false, abstract: false, final false
  inline void EmitExits(::System::Text::StringBuilder* sb, int32_t index);

  /// @brief Method Indent, addr 0x40f6244, size 0x38, virtual false, abstract: false, final false
  inline void Indent();

  static inline ::System::Linq::Expressions::Interpreter::LightLambda_DebugViewPrinter* New_ctor(::System::Linq::Expressions::Interpreter::Interpreter* interpreter);

  /// @brief Method ToString, addr 0x40f62b4, size 0x4dc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* const& __cordl_internal_get__handlerEnter() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*& __cordl_internal_get__handlerEnter();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& __cordl_internal_get__handlerExit() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __cordl_internal_get__handlerExit();

  constexpr ::StringW const& __cordl_internal_get__indent() const;

  constexpr ::StringW& __cordl_internal_get__indent();

  constexpr ::System::Linq::Expressions::Interpreter::Interpreter* const& __cordl_internal_get__interpreter() const;

  constexpr ::System::Linq::Expressions::Interpreter::Interpreter*& __cordl_internal_get__interpreter();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& __cordl_internal_get__tryStart() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& __cordl_internal_get__tryStart();

  constexpr void __cordl_internal_set__handlerEnter(::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* value);

  constexpr void __cordl_internal_set__handlerExit(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  constexpr void __cordl_internal_set__indent(::StringW value);

  constexpr void __cordl_internal_set__interpreter(::System::Linq::Expressions::Interpreter::Interpreter* value);

  constexpr void __cordl_internal_set__tryStart(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value);

  /// @brief Method .ctor, addr 0x40f4074, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Interpreter::Interpreter* interpreter);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightLambda_DebugViewPrinter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightLambda_DebugViewPrinter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightLambda_DebugViewPrinter(LightLambda_DebugViewPrinter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightLambda_DebugViewPrinter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightLambda_DebugViewPrinter(LightLambda_DebugViewPrinter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13958 };

  /// @brief Field _interpreter, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::Interpreter::Interpreter* ____interpreter;

  /// @brief Field _tryStart, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ____tryStart;

  /// @brief Field _handlerEnter, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* ____handlerEnter;

  /// @brief Field _handlerExit, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* ____handlerExit;

  /// @brief Field _indent, offset: 0x30, size: 0x8, def value: None
  ::StringW ____indent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightLambda_DebugViewPrinter, ____interpreter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightLambda_DebugViewPrinter, ____tryStart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightLambda_DebugViewPrinter, ____handlerEnter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightLambda_DebugViewPrinter, ____handlerExit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightLambda_DebugViewPrinter, ____indent) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LightLambda_DebugViewPrinter, 0x38>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
// Dependencies System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LightLambda/<>c__DisplayClass74_0
class CORDL_TYPE LightLambda___c__DisplayClass74_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field delegateType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_delegateType, put = __cordl_internal_set_delegateType)) ::System::Type* delegateType;

  /// @brief Field targetMethod, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_targetMethod, put = __cordl_internal_set_targetMethod)) ::System::Reflection::MethodInfo* targetMethod;

  static inline ::System::Linq::Expressions::Interpreter::LightLambda___c__DisplayClass74_0* New_ctor();

  /// @brief Method <MakeRunDelegateCtor>b__0, addr 0x40f6864, size 0x30, virtual false, abstract: false, final false
  inline ::System::Delegate* _MakeRunDelegateCtor_b__0(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  constexpr ::System::Type* const& __cordl_internal_get_delegateType() const;

  constexpr ::System::Type*& __cordl_internal_get_delegateType();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_targetMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_targetMethod();

  constexpr void __cordl_internal_set_delegateType(::System::Type* value);

  constexpr void __cordl_internal_set_targetMethod(::System::Reflection::MethodInfo* value);

  /// @brief Method .ctor, addr 0x40f4b68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightLambda___c__DisplayClass74_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightLambda___c__DisplayClass74_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightLambda___c__DisplayClass74_0(LightLambda___c__DisplayClass74_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightLambda___c__DisplayClass74_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightLambda___c__DisplayClass74_0(LightLambda___c__DisplayClass74_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13959 };

  /// @brief Field targetMethod, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___targetMethod;

  /// @brief Field delegateType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___delegateType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightLambda___c__DisplayClass74_0, ___targetMethod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightLambda___c__DisplayClass74_0, ___delegateType) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LightLambda___c__DisplayClass74_0, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
// Dependencies System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LightLambda
class CORDL_TYPE LightLambda : public ::System::Object {
public:
  // Declarations
  using DebugViewPrinter = ::System::Linq::Expressions::Interpreter::LightLambda_DebugViewPrinter;

  using __c__DisplayClass74_0 = ::System::Linq::Expressions::Interpreter::LightLambda___c__DisplayClass74_0;

  __declspec(property(get = get_DebugView)) ::StringW DebugView;

  /// @brief Field _closure, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__closure,
                      put = __cordl_internal_set__closure)) ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*>
      _closure;

  /// @brief Field _delegateCreator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__delegateCreator, put = __cordl_internal_set__delegateCreator)) ::System::Linq::Expressions::Interpreter::LightDelegateCreator* _delegateCreator;

  /// @brief Field _interpreter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__interpreter, put = __cordl_internal_set__interpreter)) ::System::Linq::Expressions::Interpreter::Interpreter* _interpreter;

  /// @brief Field _runCache, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF__runCache,
      put = setStaticF__runCache)) ::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>*>* _runCache;

  /// @brief Method CreateCustomDelegate, addr 0x40f51e0, size 0x91c, virtual false, abstract: false, final false
  inline ::System::Delegate* CreateCustomDelegate(::System::Type* delegateType);

  /// @brief Method GetRunDelegateCtor, addr 0x40f4180, size 0x180, virtual false, abstract: false, final false
  static inline ::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>* GetRunDelegateCtor(::System::Type* delegateType);

  /// @brief Method MakeDelegate, addr 0x40f3dc0, size 0x88, virtual false, abstract: false, final false
  inline ::System::Delegate* MakeDelegate(::System::Type* delegateType);

  /// @brief Method MakeFrame, addr 0x40f3f28, size 0x64, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Interpreter::InterpretedFrame* MakeFrame();

  /// @brief Method MakeRun0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TRet> static inline ::System::Delegate* MakeRun0(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRun1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename TRet> static inline ::System::Delegate* MakeRun1(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRun10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename TRet>
  static inline ::System::Delegate* MakeRun10(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRun11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename TRet>
  static inline ::System::Delegate* MakeRun11(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRun12, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename TRet>
  static inline ::System::Delegate* MakeRun12(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRun13, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename TRet>
  static inline ::System::Delegate* MakeRun13(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRun14, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13,
            typename TRet>
  static inline ::System::Delegate* MakeRun14(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRun15, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13,
            typename T14, typename TRet>
  static inline ::System::Delegate* MakeRun15(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRun2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename TRet> static inline ::System::Delegate* MakeRun2(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRun3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename TRet> static inline ::System::Delegate* MakeRun3(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRun4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename TRet> static inline ::System::Delegate* MakeRun4(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRun5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename TRet> static inline ::System::Delegate* MakeRun5(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRun6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename TRet>
  static inline ::System::Delegate* MakeRun6(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRun7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename TRet>
  static inline ::System::Delegate* MakeRun7(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRun8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRet>
  static inline ::System::Delegate* MakeRun8(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRun9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename TRet>
  static inline ::System::Delegate* MakeRun9(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRunDelegateCtor, addr 0x40f4300, size 0x868, virtual false, abstract: false, final false
  static inline ::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>* MakeRunDelegateCtor(::System::Type* delegateType);

  /// @brief Method MakeRunVoid0, addr 0x40f3f8c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Delegate* MakeRunVoid0(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRunVoid1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0> static inline ::System::Delegate* MakeRunVoid1(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRunVoid10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
  static inline ::System::Delegate* MakeRunVoid10(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRunVoid11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
  static inline ::System::Delegate* MakeRunVoid11(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRunVoid12, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
  static inline ::System::Delegate* MakeRunVoid12(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRunVoid13, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
  static inline ::System::Delegate* MakeRunVoid13(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRunVoid14, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
  static inline ::System::Delegate* MakeRunVoid14(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRunVoid15, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13,
            typename T14>
  static inline ::System::Delegate* MakeRunVoid15(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRunVoid2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1> static inline ::System::Delegate* MakeRunVoid2(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRunVoid3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2> static inline ::System::Delegate* MakeRunVoid3(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRunVoid4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3> static inline ::System::Delegate* MakeRunVoid4(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRunVoid5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4> static inline ::System::Delegate* MakeRunVoid5(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRunVoid6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5> static inline ::System::Delegate* MakeRunVoid6(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRunVoid7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
  static inline ::System::Delegate* MakeRunVoid7(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRunVoid8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
  static inline ::System::Delegate* MakeRunVoid8(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  /// @brief Method MakeRunVoid9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
  static inline ::System::Delegate* MakeRunVoid9(::System::Linq::Expressions::Interpreter::LightLambda* lambda);

  static inline ::System::Linq::Expressions::Interpreter::LightLambda*
  New_ctor(::System::Linq::Expressions::Interpreter::LightDelegateCreator* delegateCreator,
           ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> closure);

  /// @brief Method Run, addr 0x40f5afc, size 0x160, virtual false, abstract: false, final false
  inline ::System::Object* Run(::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments);

  /// @brief Method Run0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TRet> inline TRet Run0();

  /// @brief Method Run1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename TRet> inline TRet Run1(T0 arg0);

  /// @brief Method Run10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename TRet>
  inline TRet Run10(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9);

  /// @brief Method Run11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename TRet>
  inline TRet Run11(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10);

  /// @brief Method Run12, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename TRet>
  inline TRet Run12(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11);

  /// @brief Method Run13, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename TRet>
  inline TRet Run13(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12);

  /// @brief Method Run14, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13,
            typename TRet>
  inline TRet Run14(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13);

  /// @brief Method Run15, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13,
            typename T14, typename TRet>
  inline TRet Run15(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14);

  /// @brief Method Run2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename TRet> inline TRet Run2(T0 arg0, T1 arg1);

  /// @brief Method Run3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename TRet> inline TRet Run3(T0 arg0, T1 arg1, T2 arg2);

  /// @brief Method Run4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename TRet> inline TRet Run4(T0 arg0, T1 arg1, T2 arg2, T3 arg3);

  /// @brief Method Run5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename TRet> inline TRet Run5(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4);

  /// @brief Method Run6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename TRet> inline TRet Run6(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5);

  /// @brief Method Run7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename TRet> inline TRet Run7(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6);

  /// @brief Method Run8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TRet>
  inline TRet Run8(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7);

  /// @brief Method Run9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename TRet>
  inline TRet Run9(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8);

  /// @brief Method RunVoid, addr 0x40f5c5c, size 0x154, virtual false, abstract: false, final false
  inline ::System::Object* RunVoid(::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments);

  /// @brief Method RunVoid0, addr 0x40f3e48, size 0xe0, virtual false, abstract: false, final false
  inline void RunVoid0();

  /// @brief Method RunVoid1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0> inline void RunVoid1(T0 arg0);

  /// @brief Method RunVoid10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
  inline void RunVoid10(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9);

  /// @brief Method RunVoid11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
  inline void RunVoid11(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10);

  /// @brief Method RunVoid12, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
  inline void RunVoid12(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11);

  /// @brief Method RunVoid13, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
  inline void RunVoid13(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12);

  /// @brief Method RunVoid14, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
  inline void RunVoid14(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13);

  /// @brief Method RunVoid15, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13,
            typename T14>
  inline void RunVoid15(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14);

  /// @brief Method RunVoid2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1> inline void RunVoid2(T0 arg0, T1 arg1);

  /// @brief Method RunVoid3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2> inline void RunVoid3(T0 arg0, T1 arg1, T2 arg2);

  /// @brief Method RunVoid4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3> inline void RunVoid4(T0 arg0, T1 arg1, T2 arg2, T3 arg3);

  /// @brief Method RunVoid5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4> inline void RunVoid5(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4);

  /// @brief Method RunVoid6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5> inline void RunVoid6(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5);

  /// @brief Method RunVoid7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> inline void RunVoid7(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6);

  /// @brief Method RunVoid8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
  inline void RunVoid8(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7);

  /// @brief Method RunVoid9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
  inline void RunVoid9(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8);

  /// @brief Method RunVoidRef2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1> inline void RunVoidRef2(::ByRef<T0> arg0, ::ByRef<T1> arg1);

  constexpr ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> const& __cordl_internal_get__closure() const;

  constexpr ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*>& __cordl_internal_get__closure();

  constexpr ::System::Linq::Expressions::Interpreter::LightDelegateCreator* const& __cordl_internal_get__delegateCreator() const;

  constexpr ::System::Linq::Expressions::Interpreter::LightDelegateCreator*& __cordl_internal_get__delegateCreator();

  constexpr ::System::Linq::Expressions::Interpreter::Interpreter* const& __cordl_internal_get__interpreter() const;

  constexpr ::System::Linq::Expressions::Interpreter::Interpreter*& __cordl_internal_get__interpreter();

  constexpr void __cordl_internal_set__closure(::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> value);

  constexpr void __cordl_internal_set__delegateCreator(::System::Linq::Expressions::Interpreter::LightDelegateCreator* value);

  constexpr void __cordl_internal_set__interpreter(::System::Linq::Expressions::Interpreter::Interpreter* value);

  /// @brief Method .ctor, addr 0x40f3d80, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Interpreter::LightDelegateCreator* delegateCreator,
                    ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> closure);

  static inline ::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>*>* getStaticF__runCache();

  /// @brief Method get_DebugView, addr 0x40f4008, size 0x6c, virtual false, abstract: false, final false
  inline ::StringW get_DebugView();

  static inline void
  setStaticF__runCache(::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Func_2<::System::Linq::Expressions::Interpreter::LightLambda*, ::System::Delegate*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightLambda();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightLambda", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightLambda(LightLambda&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightLambda", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightLambda(LightLambda const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13960 };

  /// @brief Field _closure, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> ____closure;

  /// @brief Field _interpreter, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Interpreter::Interpreter* ____interpreter;

  /// @brief Field _delegateCreator, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::Expressions::Interpreter::LightDelegateCreator* ____delegateCreator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightLambda, ____closure) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightLambda, ____interpreter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightLambda, ____delegateCreator) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LightLambda, 0x28>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LightLambda);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LightLambda*, "System.Linq.Expressions.Interpreter", "LightLambda");
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LightLambda_DebugViewPrinter);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LightLambda_DebugViewPrinter*, "System.Linq.Expressions.Interpreter", "LightLambda/DebugViewPrinter");
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LightLambda___c__DisplayClass74_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LightLambda___c__DisplayClass74_0*, "System.Linq.Expressions.Interpreter", "LightLambda/<>c__DisplayClass74_0");
