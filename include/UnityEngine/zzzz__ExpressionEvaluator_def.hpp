#pragma once
// IWYU pragma private; include "UnityEngine/ExpressionEvaluator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ExpressionEvaluator_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
struct __ExpressionEvaluator__Associativity;
}
namespace UnityEngine {
class __ExpressionEvaluator__Expression;
}
namespace UnityEngine {
struct __ExpressionEvaluator__Op;
}
namespace UnityEngine {
class __ExpressionEvaluator__Operator;
}
namespace UnityEngine {
struct __ExpressionEvaluator__PcgRandom;
}
namespace UnityEngine {
class __ExpressionEvaluator____c;
}
// Forward declare root types
namespace UnityEngine {
struct __ExpressionEvaluator__Associativity;
}
namespace UnityEngine {
struct __ExpressionEvaluator__Op;
}
namespace UnityEngine {
class ExpressionEvaluator;
}
namespace UnityEngine {
class __ExpressionEvaluator__Expression;
}
namespace UnityEngine {
class __ExpressionEvaluator__Operator;
}
namespace UnityEngine {
class __ExpressionEvaluator____c;
}
namespace UnityEngine {
struct __ExpressionEvaluator__PcgRandom;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__ExpressionEvaluator__Associativity);
MARK_VAL_T(::UnityEngine::__ExpressionEvaluator__Op);
MARK_REF_PTR_T(::UnityEngine::ExpressionEvaluator);
MARK_REF_PTR_T(::UnityEngine::__ExpressionEvaluator__Expression);
MARK_REF_PTR_T(::UnityEngine::__ExpressionEvaluator__Operator);
MARK_REF_PTR_T(::UnityEngine::__ExpressionEvaluator____c);
MARK_VAL_T(::UnityEngine::__ExpressionEvaluator__PcgRandom);
// Type: ::Expression
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::ExpressionEvaluator::Expression*
class CORDL_TYPE __ExpressionEvaluator__Expression : public ::System::Object {
public:
  // Declarations
  /// @brief Field hasVariables, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_hasVariables, put = __cordl_internal_set_hasVariables)) bool hasVariables;

  /// @brief Field rpnTokens, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_rpnTokens, put = __cordl_internal_set_rpnTokens)) ::ArrayW<::StringW, ::Array<::StringW>*> rpnTokens;

  /// @brief Method Evaluate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool Evaluate(ByRef<T> value, int32_t index, int32_t count);

  static inline ::UnityEngine::__ExpressionEvaluator__Expression* New_ctor(::StringW expression);

  constexpr bool const& __cordl_internal_get_hasVariables() const;

  constexpr bool& __cordl_internal_get_hasVariables();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_rpnTokens() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_rpnTokens();

  constexpr void __cordl_internal_set_hasVariables(bool value);

  constexpr void __cordl_internal_set_rpnTokens(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x480bce0, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::StringW expression);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExpressionEvaluator__Expression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ExpressionEvaluator__Expression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ExpressionEvaluator__Expression(__ExpressionEvaluator__Expression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ExpressionEvaluator__Expression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ExpressionEvaluator__Expression(__ExpressionEvaluator__Expression const&) = delete;

  /// @brief Field rpnTokens, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___rpnTokens;

  /// @brief Field hasVariables, offset: 0x18, size: 0x1, def value: None
  bool ___hasVariables;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10655 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ExpressionEvaluator__Expression, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ExpressionEvaluator__Expression, ___rpnTokens) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ExpressionEvaluator__Expression, ___hasVariables) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::PcgRandom
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ExpressionEvaluator::PcgRandom
struct CORDL_TYPE __ExpressionEvaluator__PcgRandom {
public:
  // Declarations
  /// @brief Method GetUInt, addr 0x480b6d0, size 0x38, virtual false, abstract: false, final false
  inline uint32_t GetUInt();

  /// @brief Method RotateRight, addr 0x480bd9c, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t RotateRight(uint32_t v, int32_t rot);

  /// @brief Method Step, addr 0x480bd64, size 0x20, virtual false, abstract: false, final false
  inline void Step();

  /// @brief Method XshRr, addr 0x480bd84, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t XshRr(uint64_t s);

  /// @brief Method .ctor, addr 0x480bc78, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(uint64_t state, uint64_t sequence);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExpressionEvaluator__PcgRandom();

  // Ctor Parameters [CppParam { name: "increment", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "state", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr __ExpressionEvaluator__PcgRandom(uint64_t increment, uint64_t state) noexcept;

  /// @brief Field increment, offset: 0x0, size: 0x8, def value: None
  uint64_t increment;

  /// @brief Field state, offset: 0x8, size: 0x8, def value: None
  uint64_t state;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10656 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ExpressionEvaluator__PcgRandom, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ExpressionEvaluator__PcgRandom, increment) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ExpressionEvaluator__PcgRandom, state) == 0x8, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::Op
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ExpressionEvaluator::Op
struct CORDL_TYPE __ExpressionEvaluator__Op {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ExpressionEvaluator__Op_Unwrapped
  enum struct ____ExpressionEvaluator__Op_Unwrapped : int32_t {
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
  constexpr operator ____ExpressionEvaluator__Op_Unwrapped() const noexcept {
    return static_cast<____ExpressionEvaluator__Op_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExpressionEvaluator__Op();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ExpressionEvaluator__Op(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Add value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__ExpressionEvaluator__Op const Add;

  /// @brief Field Ceil value: static_cast<int32_t>(0xc)
  static ::UnityEngine::__ExpressionEvaluator__Op const Ceil;

  /// @brief Field Cos value: static_cast<int32_t>(0x9)
  static ::UnityEngine::__ExpressionEvaluator__Op const Cos;

  /// @brief Field Div value: static_cast<int32_t>(0x3)
  static ::UnityEngine::__ExpressionEvaluator__Op const Div;

  /// @brief Field Floor value: static_cast<int32_t>(0xb)
  static ::UnityEngine::__ExpressionEvaluator__Op const Floor;

  /// @brief Field Linear value: static_cast<int32_t>(0xf)
  static ::UnityEngine::__ExpressionEvaluator__Op const Linear;

  /// @brief Field Mod value: static_cast<int32_t>(0x4)
  static ::UnityEngine::__ExpressionEvaluator__Op const Mod;

  /// @brief Field Mul value: static_cast<int32_t>(0x2)
  static ::UnityEngine::__ExpressionEvaluator__Op const Mul;

  /// @brief Field Neg value: static_cast<int32_t>(0x5)
  static ::UnityEngine::__ExpressionEvaluator__Op const Neg;

  /// @brief Field Pow value: static_cast<int32_t>(0x6)
  static ::UnityEngine::__ExpressionEvaluator__Op const Pow;

  /// @brief Field Rand value: static_cast<int32_t>(0xe)
  static ::UnityEngine::__ExpressionEvaluator__Op const Rand;

  /// @brief Field Round value: static_cast<int32_t>(0xd)
  static ::UnityEngine::__ExpressionEvaluator__Op const Round;

  /// @brief Field Sin value: static_cast<int32_t>(0x8)
  static ::UnityEngine::__ExpressionEvaluator__Op const Sin;

  /// @brief Field Sqrt value: static_cast<int32_t>(0x7)
  static ::UnityEngine::__ExpressionEvaluator__Op const Sqrt;

  /// @brief Field Sub value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__ExpressionEvaluator__Op const Sub;

  /// @brief Field Tan value: static_cast<int32_t>(0xa)
  static ::UnityEngine::__ExpressionEvaluator__Op const Tan;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10657 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ExpressionEvaluator__Op, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ExpressionEvaluator__Op, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::Associativity
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ExpressionEvaluator::Associativity
struct CORDL_TYPE __ExpressionEvaluator__Associativity {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ExpressionEvaluator__Associativity_Unwrapped
  enum struct ____ExpressionEvaluator__Associativity_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ExpressionEvaluator__Associativity_Unwrapped() const noexcept {
    return static_cast<____ExpressionEvaluator__Associativity_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExpressionEvaluator__Associativity();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ExpressionEvaluator__Associativity(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Left value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__ExpressionEvaluator__Associativity const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__ExpressionEvaluator__Associativity const Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10658 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ExpressionEvaluator__Associativity, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ExpressionEvaluator__Associativity, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::Operator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::ExpressionEvaluator::Operator*
class CORDL_TYPE __ExpressionEvaluator__Operator : public ::System::Object {
public:
  // Declarations
  /// @brief Field associativity, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_associativity, put = __cordl_internal_set_associativity)) ::UnityEngine::__ExpressionEvaluator__Associativity associativity;

  /// @brief Field inputs, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_inputs, put = __cordl_internal_set_inputs)) int32_t inputs;

  /// @brief Field op, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_op, put = __cordl_internal_set_op)) ::UnityEngine::__ExpressionEvaluator__Op op;

  /// @brief Field precedence, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_precedence, put = __cordl_internal_set_precedence)) int32_t precedence;

  static inline ::UnityEngine::__ExpressionEvaluator__Operator* New_ctor(::UnityEngine::__ExpressionEvaluator__Op op, int32_t precedence, int32_t inputs,
                                                                         ::UnityEngine::__ExpressionEvaluator__Associativity associativity);

  constexpr ::UnityEngine::__ExpressionEvaluator__Associativity const& __cordl_internal_get_associativity() const;

  constexpr ::UnityEngine::__ExpressionEvaluator__Associativity& __cordl_internal_get_associativity();

  constexpr int32_t const& __cordl_internal_get_inputs() const;

  constexpr int32_t& __cordl_internal_get_inputs();

  constexpr ::UnityEngine::__ExpressionEvaluator__Op const& __cordl_internal_get_op() const;

  constexpr ::UnityEngine::__ExpressionEvaluator__Op& __cordl_internal_get_op();

  constexpr int32_t const& __cordl_internal_get_precedence() const;

  constexpr int32_t& __cordl_internal_get_precedence();

  constexpr void __cordl_internal_set_associativity(::UnityEngine::__ExpressionEvaluator__Associativity value);

  constexpr void __cordl_internal_set_inputs(int32_t value);

  constexpr void __cordl_internal_set_op(::UnityEngine::__ExpressionEvaluator__Op value);

  constexpr void __cordl_internal_set_precedence(int32_t value);

  /// @brief Method .ctor, addr 0x480bca0, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::__ExpressionEvaluator__Op op, int32_t precedence, int32_t inputs, ::UnityEngine::__ExpressionEvaluator__Associativity associativity);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExpressionEvaluator__Operator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ExpressionEvaluator__Operator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ExpressionEvaluator__Operator(__ExpressionEvaluator__Operator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ExpressionEvaluator__Operator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ExpressionEvaluator__Operator(__ExpressionEvaluator__Operator const&) = delete;

  /// @brief Field op, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::__ExpressionEvaluator__Op ___op;

  /// @brief Field precedence, offset: 0x14, size: 0x4, def value: None
  int32_t ___precedence;

  /// @brief Field associativity, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::__ExpressionEvaluator__Associativity ___associativity;

  /// @brief Field inputs, offset: 0x1c, size: 0x4, def value: None
  int32_t ___inputs;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10659 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ExpressionEvaluator__Operator, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ExpressionEvaluator__Operator, ___op) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ExpressionEvaluator__Operator, ___precedence) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ExpressionEvaluator__Operator, ___associativity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__ExpressionEvaluator__Operator, ___inputs) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::ExpressionEvaluator::<>c*
class CORDL_TYPE __ExpressionEvaluator____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::__ExpressionEvaluator____c* __9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0)) ::System::Func_2<::StringW, bool>* __9__14_0;

  static inline ::UnityEngine::__ExpressionEvaluator____c* New_ctor();

  /// @brief Method <ExpressionToTokens>b__14_0, addr 0x480be08, size 0x80, virtual false, abstract: false, final false
  inline bool _ExpressionToTokens_b__14_0(::StringW f);

  /// @brief Method .ctor, addr 0x480be00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::__ExpressionEvaluator____c* getStaticF___9();

  static inline ::System::Func_2<::StringW, bool>* getStaticF___9__14_0();

  static inline void setStaticF___9(::UnityEngine::__ExpressionEvaluator____c* value);

  static inline void setStaticF___9__14_0(::System::Func_2<::StringW, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExpressionEvaluator____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ExpressionEvaluator____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ExpressionEvaluator____c(__ExpressionEvaluator____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ExpressionEvaluator____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ExpressionEvaluator____c(__ExpressionEvaluator____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10660 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ExpressionEvaluator____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::ExpressionEvaluator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ExpressionEvaluator*
class CORDL_TYPE ExpressionEvaluator : public ::System::Object {
public:
  // Declarations
  using Associativity = ::UnityEngine::__ExpressionEvaluator__Associativity;

  using Expression = ::UnityEngine::__ExpressionEvaluator__Expression;

  using Op = ::UnityEngine::__ExpressionEvaluator__Op;

  using Operator = ::UnityEngine::__ExpressionEvaluator__Operator;

  using PcgRandom = ::UnityEngine::__ExpressionEvaluator__PcgRandom;

  using __c = ::UnityEngine::__ExpressionEvaluator____c;

  /// @brief Field s_Operators, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Operators,
                             put = setStaticF_s_Operators)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::__ExpressionEvaluator__Operator*>* s_Operators;

  /// @brief Field s_Random, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_Random, put = setStaticF_s_Random)) ::UnityEngine::__ExpressionEvaluator__PcgRandom s_Random;

  /// @brief Method Evaluate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool Evaluate(::StringW expression, ByRef<T> value, ByRef<::UnityEngine::__ExpressionEvaluator__Expression*> delayed);

  /// @brief Method EvaluateDouble, addr 0x4809f7c, size 0x4d0, virtual false, abstract: false, final false
  static inline bool EvaluateDouble(::ArrayW<::StringW, ::Array<::StringW>*> tokens, ByRef<double_t> value, int32_t index, int32_t count);

  /// @brief Method EvaluateOp, addr 0x480a618, size 0x354, virtual false, abstract: false, final false
  static inline double_t EvaluateOp(::ArrayW<double_t, ::Array<double_t>*> values, ::UnityEngine::__ExpressionEvaluator__Op op, int32_t index, int32_t count);

  /// @brief Method EvaluateTokens, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool EvaluateTokens(::ArrayW<::StringW, ::Array<::StringW>*> tokens, ByRef<T> value, int32_t index, int32_t count);

  /// @brief Method ExpressionToTokens, addr 0x480af28, size 0x43c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> ExpressionToTokens(::StringW expression, ByRef<bool> hasVariables);

  /// @brief Method FixUnaryOperators, addr 0x480b554, size 0x17c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> FixUnaryOperators(::ArrayW<::StringW, ::Array<::StringW>*> tokens);

  /// @brief Method InfixToRPN, addr 0x480a9d4, size 0x400, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> InfixToRPN(::ArrayW<::StringW, ::Array<::StringW>*> tokens);

  /// @brief Method IsCommand, addr 0x480a56c, size 0xac, virtual false, abstract: false, final false
  static inline bool IsCommand(::StringW token);

  /// @brief Method IsDelayedFunction, addr 0x480add4, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsDelayedFunction(::StringW token);

  /// @brief Method IsOperator, addr 0x480a44c, size 0x80, virtual false, abstract: false, final false
  static inline bool IsOperator(::StringW token);

  /// @brief Method IsVariable, addr 0x480a96c, size 0x68, virtual false, abstract: false, final false
  static inline bool IsVariable(::StringW token);

  /// @brief Method NeedToPop, addr 0x480ae40, size 0xe8, virtual false, abstract: false, final false
  static inline bool NeedToPop(::System::Collections::Generic::Stack_1<::StringW>* operatorStack, ::UnityEngine::__ExpressionEvaluator__Operator* newOperator);

  /// @brief Method PreFormatExpression, addr 0x480b364, size 0x1f0, virtual false, abstract: false, final false
  static inline ::StringW PreFormatExpression(::StringW expression);

  /// @brief Method TokenToOperator, addr 0x480a4cc, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::__ExpressionEvaluator__Operator* TokenToOperator(::StringW token);

  /// @brief Method TryParse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool TryParse(::StringW expression, ByRef<T> result);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::__ExpressionEvaluator__Operator*>* getStaticF_s_Operators();

  static inline ::UnityEngine::__ExpressionEvaluator__PcgRandom getStaticF_s_Random();

  static inline void setStaticF_s_Operators(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::__ExpressionEvaluator__Operator*>* value);

  static inline void setStaticF_s_Random(::UnityEngine::__ExpressionEvaluator__PcgRandom value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10661 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ExpressionEvaluator, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ExpressionEvaluator__Associativity, "UnityEngine", "ExpressionEvaluator/Associativity");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ExpressionEvaluator__Op, "UnityEngine", "ExpressionEvaluator/Op");
NEED_NO_BOX(::UnityEngine::ExpressionEvaluator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExpressionEvaluator*, "UnityEngine", "ExpressionEvaluator");
NEED_NO_BOX(::UnityEngine::__ExpressionEvaluator__Expression);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ExpressionEvaluator__Expression*, "UnityEngine", "ExpressionEvaluator/Expression");
NEED_NO_BOX(::UnityEngine::__ExpressionEvaluator__Operator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ExpressionEvaluator__Operator*, "UnityEngine", "ExpressionEvaluator/Operator");
NEED_NO_BOX(::UnityEngine::__ExpressionEvaluator____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ExpressionEvaluator____c*, "UnityEngine", "ExpressionEvaluator/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ExpressionEvaluator__PcgRandom, "UnityEngine", "ExpressionEvaluator/PcgRandom");
