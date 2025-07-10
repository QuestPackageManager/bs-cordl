#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Block5.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__BlockExpression_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Block5)
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Linq::Expressions {
class BlockExpression;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class ParameterExpression;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions {
class Block5;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Block5);
// Dependencies System.Linq.Expressions.BlockExpression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Block5
class CORDL_TYPE Block5 : public ::System::Linq::Expressions::BlockExpression {
public:
  // Declarations
  __declspec(property(get = get_ExpressionCount)) int32_t ExpressionCount;

  /// @brief Field _arg0, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__arg0, put = __cordl_internal_set__arg0)) ::System::Object* _arg0;

  /// @brief Field _arg1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__arg1, put = __cordl_internal_set__arg1)) ::System::Linq::Expressions::Expression* _arg1;

  /// @brief Field _arg2, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__arg2, put = __cordl_internal_set__arg2)) ::System::Linq::Expressions::Expression* _arg2;

  /// @brief Field _arg3, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__arg3, put = __cordl_internal_set__arg3)) ::System::Linq::Expressions::Expression* _arg3;

  /// @brief Field _arg4, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__arg4, put = __cordl_internal_set__arg4)) ::System::Linq::Expressions::Expression* _arg4;

  /// @brief Method GetExpression, addr 0x40ad858, size 0xc4, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetExpression(int32_t index);

  /// @brief Method GetOrMakeExpressions, addr 0x40ad924, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeExpressions();

  static inline ::System::Linq::Expressions::Block5* New_ctor(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1,
                                                              ::System::Linq::Expressions::Expression* arg2, ::System::Linq::Expressions::Expression* arg3,
                                                              ::System::Linq::Expressions::Expression* arg4);

  /// @brief Method Rewrite, addr 0x40ad92c, size 0xb8, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::BlockExpression* Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                                               ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> args);

  constexpr ::System::Object* const& __cordl_internal_get__arg0() const;

  constexpr ::System::Object*& __cordl_internal_get__arg0();

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__arg1() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__arg1();

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__arg2() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__arg2();

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__arg3() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__arg3();

  constexpr ::System::Linq::Expressions::Expression* const& __cordl_internal_get__arg4() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__arg4();

  constexpr void __cordl_internal_set__arg0(::System::Object* value);

  constexpr void __cordl_internal_set__arg1(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__arg2(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__arg3(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__arg4(::System::Linq::Expressions::Expression* value);

  /// @brief Method .ctor, addr 0x40ad80c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2,
                    ::System::Linq::Expressions::Expression* arg3, ::System::Linq::Expressions::Expression* arg4);

  /// @brief Method get_ExpressionCount, addr 0x40ad91c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ExpressionCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Block5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Block5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Block5(Block5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Block5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Block5(Block5 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13651 };

  /// @brief Field _arg0, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____arg0;

  /// @brief Field _arg1, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____arg1;

  /// @brief Field _arg2, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____arg2;

  /// @brief Field _arg3, offset: 0x28, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____arg3;

  /// @brief Field _arg4, offset: 0x30, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____arg4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Block5, ____arg0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Block5, ____arg1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Block5, ____arg2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Block5, ____arg3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Block5, ____arg4) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Block5, 0x38>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::Block5);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Block5*, "System.Linq.Expressions", "Block5");
