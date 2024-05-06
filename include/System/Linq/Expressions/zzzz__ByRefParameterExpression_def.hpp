#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__TypedParameterExpression_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ByRefParameterExpression)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class ByRefParameterExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::ByRefParameterExpression);
// Type: System.Linq.Expressions::ByRefParameterExpression
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::ByRefParameterExpression*
class CORDL_TYPE ByRefParameterExpression : public ::System::Linq::Expressions::TypedParameterExpression {
public:
  // Declarations
  /// @brief Method GetIsByRef, addr 0x2c0c784, size 0x8, virtual true, abstract: false, final false
  inline bool GetIsByRef();

  static inline ::System::Linq::Expressions::ByRefParameterExpression* New_ctor(::System::Type* type, ::StringW name);

  /// @brief Method .ctor, addr 0x2c0c684, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::StringW name);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ByRefParameterExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ByRefParameterExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ByRefParameterExpression(ByRefParameterExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ByRefParameterExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ByRefParameterExpression(ByRefParameterExpression const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::ByRefParameterExpression, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::ByRefParameterExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::ByRefParameterExpression*, "System.Linq.Expressions", "ByRefParameterExpression");
