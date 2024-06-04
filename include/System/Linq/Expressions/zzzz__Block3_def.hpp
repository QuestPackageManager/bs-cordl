#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Block3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__BlockExpression_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Block3)
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
class Block3;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Block3);
// Type: System.Linq.Expressions::Block3
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::Block3*
class CORDL_TYPE Block3 : public ::System::Linq::Expressions::BlockExpression {
public:
  // Declarations
  __declspec(property(get = get_ExpressionCount)) int32_t ExpressionCount;

  /// @brief Field _arg0, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__arg0, put = __cordl_internal_set__arg0))::System::Object* _arg0;

  /// @brief Field _arg1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__arg1, put = __cordl_internal_set__arg1))::System::Linq::Expressions::Expression* _arg1;

  /// @brief Field _arg2, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__arg2, put = __cordl_internal_set__arg2))::System::Linq::Expressions::Expression* _arg2;

  /// @brief Method GetExpression, addr 0x2c1d224, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetExpression(int32_t index);

  /// @brief Method GetOrMakeExpressions, addr 0x2c1d2d0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeExpressions();

  static inline ::System::Linq::Expressions::Block3* New_ctor(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1,
                                                              ::System::Linq::Expressions::Expression* arg2);

  /// @brief Method Rewrite, addr 0x2c1d2d8, size 0x94, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::BlockExpression* Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                                               ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> args);

  constexpr ::System::Object*& __cordl_internal_get__arg0();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__arg0() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__arg1();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& __cordl_internal_get__arg1() const;

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__arg2();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& __cordl_internal_get__arg2() const;

  constexpr void __cordl_internal_set__arg0(::System::Object* value);

  constexpr void __cordl_internal_set__arg1(::System::Linq::Expressions::Expression* value);

  constexpr void __cordl_internal_set__arg2(::System::Linq::Expressions::Expression* value);

  /// @brief Method .ctor, addr 0x2c1d1ec, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2);

  /// @brief Method get_ExpressionCount, addr 0x2c1d2c8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ExpressionCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Block3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Block3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Block3(Block3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Block3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Block3(Block3 const&) = delete;

  /// @brief Field _arg0, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____arg0;

  /// @brief Field _arg1, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____arg1;

  /// @brief Field _arg2, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____arg2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Block3, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Block3, ____arg0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Block3, ____arg1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Block3, ____arg2) == 0x20, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::Block3);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Block3*, "System.Linq.Expressions", "Block3");
