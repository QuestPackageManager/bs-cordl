#pragma once
// IWYU pragma private; include "UnityEngine/ExpressionEvaluator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExpressionEvaluator)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine {
struct ExpressionEvaluator_Associativity;
}
namespace UnityEngine {
class ExpressionEvaluator_Expression;
}
namespace UnityEngine {
struct ExpressionEvaluator_Op;
}
namespace UnityEngine {
class ExpressionEvaluator_Operator;
}
namespace UnityEngine {
struct ExpressionEvaluator_PcgRandom;
}
namespace UnityEngine {
class ExpressionEvaluator___c;
}
// Forward declare root types
namespace UnityEngine {
struct ExpressionEvaluator_Associativity;
}
namespace UnityEngine {
struct ExpressionEvaluator_Op;
}
namespace UnityEngine {
class ExpressionEvaluator;
}
namespace UnityEngine {
class ExpressionEvaluator_Expression;
}
namespace UnityEngine {
class ExpressionEvaluator_Operator;
}
namespace UnityEngine {
class ExpressionEvaluator___c;
}
namespace UnityEngine {
struct ExpressionEvaluator_PcgRandom;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ExpressionEvaluator_Associativity);
MARK_VAL_T(::UnityEngine::ExpressionEvaluator_Op);
MARK_REF_PTR_T(::UnityEngine::ExpressionEvaluator);
MARK_REF_PTR_T(::UnityEngine::ExpressionEvaluator_Expression);
MARK_REF_PTR_T(::UnityEngine::ExpressionEvaluator_Operator);
MARK_REF_PTR_T(::UnityEngine::ExpressionEvaluator___c);
MARK_VAL_T(::UnityEngine::ExpressionEvaluator_PcgRandom);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ExpressionEvaluator/Expression
class CORDL_TYPE ExpressionEvaluator_Expression : public ::System::Object {
public:
  // Declarations
  /// @brief Field hasVariables, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_hasVariables, put = __cordl_internal_set_hasVariables)) bool hasVariables;

  /// @brief Field rpnTokens, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_rpnTokens, put = __cordl_internal_set_rpnTokens)) ::ArrayW<::StringW, ::Array<::StringW>*> rpnTokens;

  /// @brief Method Evaluate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool Evaluate(::ByRef<T> value, int32_t index, int32_t count);

  static inline ::UnityEngine::ExpressionEvaluator_Expression* New_ctor(::StringW expression);

  constexpr bool const& __cordl_internal_get_hasVariables() const;

  constexpr bool& __cordl_internal_get_hasVariables();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_rpnTokens() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_rpnTokens();

  constexpr void __cordl_internal_set_hasVariables(bool value);

  constexpr void __cordl_internal_set_rpnTokens(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x486ffcc, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::StringW expression);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpressionEvaluator_Expression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpressionEvaluator_Expression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpressionEvaluator_Expression(ExpressionEvaluator_Expression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpressionEvaluator_Expression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpressionEvaluator_Expression(ExpressionEvaluator_Expression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10693 };

  /// @brief Field rpnTokens, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___rpnTokens;

  /// @brief Field hasVariables, offset: 0x18, size: 0x1, def value: None
  bool ___hasVariables;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ExpressionEvaluator_Expression, ___rpnTokens) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ExpressionEvaluator_Expression, ___hasVariables) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ExpressionEvaluator_Expression, 0x20>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ExpressionEvaluator/PcgRandom
struct CORDL_TYPE ExpressionEvaluator_PcgRandom {
public:
  // Declarations
  /// @brief Method GetUInt, addr 0x486f9bc, size 0x38, virtual false, abstract: false, final false
  inline uint32_t GetUInt();

  /// @brief Method RotateRight, addr 0x4870088, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t RotateRight(uint32_t v, int32_t rot);

  /// @brief Method Step, addr 0x4870050, size 0x20, virtual false, abstract: false, final false
  inline void Step();

  /// @brief Method XshRr, addr 0x4870070, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t XshRr(uint64_t s);

  /// @brief Method .ctor, addr 0x486ff64, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(uint64_t state, uint64_t sequence);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpressionEvaluator_PcgRandom();

  // Ctor Parameters [CppParam { name: "increment", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "state", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr ExpressionEvaluator_PcgRandom(uint64_t increment, uint64_t state) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10694 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field increment, offset: 0x0, size: 0x8, def value: None
  uint64_t increment;

  /// @brief Field state, offset: 0x8, size: 0x8, def value: None
  uint64_t state;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ExpressionEvaluator_PcgRandom, increment) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ExpressionEvaluator_PcgRandom, state) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ExpressionEvaluator_PcgRandom, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ExpressionEvaluator/Op
struct CORDL_TYPE ExpressionEvaluator_Op {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ExpressionEvaluator_Op_Unwrapped
  enum struct __ExpressionEvaluator_Op_Unwrapped : int32_t {
    __E_Add = static_cast<int32_t>(0x0),
    __E_Sub = static_cast<int32_t>(0x1),
    __E_Mul = static_cast<int32_t>(0x2),
    __E_Div = static_cast<int32_t>(0x3),
    __E_Mod = static_cast<int32_t>(0x4),
    __E_Neg = static_cast<int32_t>(0x5),
    __E_Pow = static_cast<int32_t>(0x6),
    __E_Sqrt = static_cast<int32_t>(0x7),
    __E_Sin = static_cast<int32_t>(0x8),
    __E_Cos = static_cast<int32_t>(0x9),
    __E_Tan = static_cast<int32_t>(0xa),
    __E_Floor = static_cast<int32_t>(0xb),
    __E_Ceil = static_cast<int32_t>(0xc),
    __E_Round = static_cast<int32_t>(0xd),
    __E_Rand = static_cast<int32_t>(0xe),
    __E_Linear = static_cast<int32_t>(0xf),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ExpressionEvaluator_Op_Unwrapped() const noexcept {
    return static_cast<__ExpressionEvaluator_Op_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpressionEvaluator_Op();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ExpressionEvaluator_Op(int32_t value__) noexcept;

  /// @brief Field Add value: I32(0)
  static ::UnityEngine::ExpressionEvaluator_Op const Add;

  /// @brief Field Ceil value: I32(12)
  static ::UnityEngine::ExpressionEvaluator_Op const Ceil;

  /// @brief Field Cos value: I32(9)
  static ::UnityEngine::ExpressionEvaluator_Op const Cos;

  /// @brief Field Div value: I32(3)
  static ::UnityEngine::ExpressionEvaluator_Op const Div;

  /// @brief Field Floor value: I32(11)
  static ::UnityEngine::ExpressionEvaluator_Op const Floor;

  /// @brief Field Linear value: I32(15)
  static ::UnityEngine::ExpressionEvaluator_Op const Linear;

  /// @brief Field Mod value: I32(4)
  static ::UnityEngine::ExpressionEvaluator_Op const Mod;

  /// @brief Field Mul value: I32(2)
  static ::UnityEngine::ExpressionEvaluator_Op const Mul;

  /// @brief Field Neg value: I32(5)
  static ::UnityEngine::ExpressionEvaluator_Op const Neg;

  /// @brief Field Pow value: I32(6)
  static ::UnityEngine::ExpressionEvaluator_Op const Pow;

  /// @brief Field Rand value: I32(14)
  static ::UnityEngine::ExpressionEvaluator_Op const Rand;

  /// @brief Field Round value: I32(13)
  static ::UnityEngine::ExpressionEvaluator_Op const Round;

  /// @brief Field Sin value: I32(8)
  static ::UnityEngine::ExpressionEvaluator_Op const Sin;

  /// @brief Field Sqrt value: I32(7)
  static ::UnityEngine::ExpressionEvaluator_Op const Sqrt;

  /// @brief Field Sub value: I32(1)
  static ::UnityEngine::ExpressionEvaluator_Op const Sub;

  /// @brief Field Tan value: I32(10)
  static ::UnityEngine::ExpressionEvaluator_Op const Tan;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10695 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ExpressionEvaluator_Op, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ExpressionEvaluator_Op, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ExpressionEvaluator/Associativity
struct CORDL_TYPE ExpressionEvaluator_Associativity {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ExpressionEvaluator_Associativity_Unwrapped
  enum struct __ExpressionEvaluator_Associativity_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ExpressionEvaluator_Associativity_Unwrapped() const noexcept {
    return static_cast<__ExpressionEvaluator_Associativity_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpressionEvaluator_Associativity();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ExpressionEvaluator_Associativity(int32_t value__) noexcept;

  /// @brief Field Left value: I32(0)
  static ::UnityEngine::ExpressionEvaluator_Associativity const Left;

  /// @brief Field Right value: I32(1)
  static ::UnityEngine::ExpressionEvaluator_Associativity const Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10696 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ExpressionEvaluator_Associativity, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ExpressionEvaluator_Associativity, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object, UnityEngine.ExpressionEvaluator::Associativity, UnityEngine.ExpressionEvaluator::Op
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ExpressionEvaluator/Operator
class CORDL_TYPE ExpressionEvaluator_Operator : public ::System::Object {
public:
  // Declarations
  /// @brief Field associativity, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_associativity, put = __cordl_internal_set_associativity)) ::UnityEngine::ExpressionEvaluator_Associativity associativity;

  /// @brief Field inputs, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_inputs, put = __cordl_internal_set_inputs)) int32_t inputs;

  /// @brief Field op, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_op, put = __cordl_internal_set_op)) ::UnityEngine::ExpressionEvaluator_Op op;

  /// @brief Field precedence, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_precedence, put = __cordl_internal_set_precedence)) int32_t precedence;

  static inline ::UnityEngine::ExpressionEvaluator_Operator* New_ctor(::UnityEngine::ExpressionEvaluator_Op op, int32_t precedence, int32_t inputs,
                                                                      ::UnityEngine::ExpressionEvaluator_Associativity associativity);

  constexpr ::UnityEngine::ExpressionEvaluator_Associativity const& __cordl_internal_get_associativity() const;

  constexpr ::UnityEngine::ExpressionEvaluator_Associativity& __cordl_internal_get_associativity();

  constexpr int32_t const& __cordl_internal_get_inputs() const;

  constexpr int32_t& __cordl_internal_get_inputs();

  constexpr ::UnityEngine::ExpressionEvaluator_Op const& __cordl_internal_get_op() const;

  constexpr ::UnityEngine::ExpressionEvaluator_Op& __cordl_internal_get_op();

  constexpr int32_t const& __cordl_internal_get_precedence() const;

  constexpr int32_t& __cordl_internal_get_precedence();

  constexpr void __cordl_internal_set_associativity(::UnityEngine::ExpressionEvaluator_Associativity value);

  constexpr void __cordl_internal_set_inputs(int32_t value);

  constexpr void __cordl_internal_set_op(::UnityEngine::ExpressionEvaluator_Op value);

  constexpr void __cordl_internal_set_precedence(int32_t value);

  /// @brief Method .ctor, addr 0x486ff8c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ExpressionEvaluator_Op op, int32_t precedence, int32_t inputs, ::UnityEngine::ExpressionEvaluator_Associativity associativity);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpressionEvaluator_Operator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpressionEvaluator_Operator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpressionEvaluator_Operator(ExpressionEvaluator_Operator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpressionEvaluator_Operator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpressionEvaluator_Operator(ExpressionEvaluator_Operator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10697 };

  /// @brief Field op, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::ExpressionEvaluator_Op ___op;

  /// @brief Field precedence, offset: 0x14, size: 0x4, def value: None
  int32_t ___precedence;

  /// @brief Field associativity, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::ExpressionEvaluator_Associativity ___associativity;

  /// @brief Field inputs, offset: 0x1c, size: 0x4, def value: None
  int32_t ___inputs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ExpressionEvaluator_Operator, ___op) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ExpressionEvaluator_Operator, ___precedence) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ExpressionEvaluator_Operator, ___associativity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ExpressionEvaluator_Operator, ___inputs) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ExpressionEvaluator_Operator, 0x20>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ExpressionEvaluator/<>c
class CORDL_TYPE ExpressionEvaluator___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ExpressionEvaluator___c* __9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0)) ::System::Func_2<::StringW, bool>* __9__14_0;

  static inline ::UnityEngine::ExpressionEvaluator___c* New_ctor();

  /// @brief Method <ExpressionToTokens>b__14_0, addr 0x48700f4, size 0x80, virtual false, abstract: false, final false
  inline bool _ExpressionToTokens_b__14_0(::StringW f);

  /// @brief Method .ctor, addr 0x48700ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ExpressionEvaluator___c* getStaticF___9();

  static inline ::System::Func_2<::StringW, bool>* getStaticF___9__14_0();

  static inline void setStaticF___9(::UnityEngine::ExpressionEvaluator___c* value);

  static inline void setStaticF___9__14_0(::System::Func_2<::StringW, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpressionEvaluator___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpressionEvaluator___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpressionEvaluator___c(ExpressionEvaluator___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpressionEvaluator___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpressionEvaluator___c(ExpressionEvaluator___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10698 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ExpressionEvaluator___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object, UnityEngine.ExpressionEvaluator::PcgRandom
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ExpressionEvaluator
class CORDL_TYPE ExpressionEvaluator : public ::System::Object {
public:
  // Declarations
  using Associativity = ::UnityEngine::ExpressionEvaluator_Associativity;

  using Expression = ::UnityEngine::ExpressionEvaluator_Expression;

  using Op = ::UnityEngine::ExpressionEvaluator_Op;

  using Operator = ::UnityEngine::ExpressionEvaluator_Operator;

  using PcgRandom = ::UnityEngine::ExpressionEvaluator_PcgRandom;

  using __c = ::UnityEngine::ExpressionEvaluator___c;

  /// @brief Field s_Operators, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Operators, put = setStaticF_s_Operators)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ExpressionEvaluator_Operator*>* s_Operators;

  /// @brief Field s_Random, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_Random, put = setStaticF_s_Random)) ::UnityEngine::ExpressionEvaluator_PcgRandom s_Random;

  /// @brief Method Evaluate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool Evaluate(::StringW expression, ::ByRef<T> value, ::ByRef<::UnityEngine::ExpressionEvaluator_Expression*> delayed);

  /// @brief Method EvaluateDouble, addr 0x486e268, size 0x4d0, virtual false, abstract: false, final false
  static inline bool EvaluateDouble(::ArrayW<::StringW, ::Array<::StringW>*> tokens, ::ByRef<double_t> value, int32_t index, int32_t count);

  /// @brief Method EvaluateOp, addr 0x486e904, size 0x354, virtual false, abstract: false, final false
  static inline double_t EvaluateOp(::ArrayW<double_t, ::Array<double_t>*> values, ::UnityEngine::ExpressionEvaluator_Op op, int32_t index, int32_t count);

  /// @brief Method EvaluateTokens, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool EvaluateTokens(::ArrayW<::StringW, ::Array<::StringW>*> tokens, ::ByRef<T> value, int32_t index, int32_t count);

  /// @brief Method ExpressionToTokens, addr 0x486f214, size 0x43c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> ExpressionToTokens(::StringW expression, ::ByRef<bool> hasVariables);

  /// @brief Method FixUnaryOperators, addr 0x486f840, size 0x17c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> FixUnaryOperators(::ArrayW<::StringW, ::Array<::StringW>*> tokens);

  /// @brief Method InfixToRPN, addr 0x486ecc0, size 0x400, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> InfixToRPN(::ArrayW<::StringW, ::Array<::StringW>*> tokens);

  /// @brief Method IsCommand, addr 0x486e858, size 0xac, virtual false, abstract: false, final false
  static inline bool IsCommand(::StringW token);

  /// @brief Method IsDelayedFunction, addr 0x486f0c0, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsDelayedFunction(::StringW token);

  /// @brief Method IsOperator, addr 0x486e738, size 0x80, virtual false, abstract: false, final false
  static inline bool IsOperator(::StringW token);

  /// @brief Method IsVariable, addr 0x486ec58, size 0x68, virtual false, abstract: false, final false
  static inline bool IsVariable(::StringW token);

  /// @brief Method NeedToPop, addr 0x486f12c, size 0xe8, virtual false, abstract: false, final false
  static inline bool NeedToPop(::System::Collections::Generic::Stack_1<::StringW>* operatorStack, ::UnityEngine::ExpressionEvaluator_Operator* newOperator);

  /// @brief Method PreFormatExpression, addr 0x486f650, size 0x1f0, virtual false, abstract: false, final false
  static inline ::StringW PreFormatExpression(::StringW expression);

  /// @brief Method TokenToOperator, addr 0x486e7b8, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::ExpressionEvaluator_Operator* TokenToOperator(::StringW token);

  /// @brief Method TryParse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool TryParse(::StringW expression, ::ByRef<T> result);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ExpressionEvaluator_Operator*>* getStaticF_s_Operators();

  static inline ::UnityEngine::ExpressionEvaluator_PcgRandom getStaticF_s_Random();

  static inline void setStaticF_s_Operators(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::ExpressionEvaluator_Operator*>* value);

  static inline void setStaticF_s_Random(::UnityEngine::ExpressionEvaluator_PcgRandom value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpressionEvaluator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpressionEvaluator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpressionEvaluator(ExpressionEvaluator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpressionEvaluator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpressionEvaluator(ExpressionEvaluator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10699 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ExpressionEvaluator, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExpressionEvaluator_Associativity, "UnityEngine", "ExpressionEvaluator/Associativity");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExpressionEvaluator_Op, "UnityEngine", "ExpressionEvaluator/Op");
NEED_NO_BOX(::UnityEngine::ExpressionEvaluator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExpressionEvaluator*, "UnityEngine", "ExpressionEvaluator");
NEED_NO_BOX(::UnityEngine::ExpressionEvaluator_Expression);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExpressionEvaluator_Expression*, "UnityEngine", "ExpressionEvaluator/Expression");
NEED_NO_BOX(::UnityEngine::ExpressionEvaluator_Operator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExpressionEvaluator_Operator*, "UnityEngine", "ExpressionEvaluator/Operator");
NEED_NO_BOX(::UnityEngine::ExpressionEvaluator___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExpressionEvaluator___c*, "UnityEngine", "ExpressionEvaluator/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExpressionEvaluator_PcgRandom, "UnityEngine", "ExpressionEvaluator/PcgRandom");
