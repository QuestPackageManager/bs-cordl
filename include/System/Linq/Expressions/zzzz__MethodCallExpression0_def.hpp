#pragma once
// IWYU pragma private; include "System/Linq/Expressions/MethodCallExpression0.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__IArgumentProvider_def.hpp"
#include "System/Linq/Expressions/zzzz__MethodCallExpression_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MethodCallExpression0)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class MethodCallExpression;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace System::Linq::Expressions {
class MethodCallExpression0;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::MethodCallExpression0);
// Dependencies System.Linq.Expressions.IArgumentProvider, System.Linq.Expressions.MethodCallExpression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.MethodCallExpression0
class CORDL_TYPE MethodCallExpression0 : public ::System::Linq::Expressions::MethodCallExpression {
public:
  // Declarations
  __declspec(property(get = get_ArgumentCount)) int32_t ArgumentCount;

  /// @brief Convert operator to "::System::Linq::Expressions::IArgumentProvider"
  constexpr operator ::System::Linq::Expressions::IArgumentProvider*() noexcept;

  /// @brief Method GetArgument, addr 0x40b5fa4, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetArgument(int32_t index);

  static inline ::System::Linq::Expressions::MethodCallExpression0* New_ctor(::System::Reflection::MethodInfo* method);

  /// @brief Method Rewrite, addr 0x40b5ff8, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* instance,
                                                                    ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args);

  /// @brief Method .ctor, addr 0x40b5fa0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MethodInfo* method);

  /// @brief Method get_ArgumentCount, addr 0x40b5ff0, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ArgumentCount();

  /// @brief Convert to "::System::Linq::Expressions::IArgumentProvider"
  constexpr ::System::Linq::Expressions::IArgumentProvider* i___System__Linq__Expressions__IArgumentProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodCallExpression0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MethodCallExpression0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MethodCallExpression0(MethodCallExpression0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MethodCallExpression0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MethodCallExpression0(MethodCallExpression0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13712 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::MethodCallExpression0, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::MethodCallExpression0);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::MethodCallExpression0*, "System.Linq.Expressions", "MethodCallExpression0");
