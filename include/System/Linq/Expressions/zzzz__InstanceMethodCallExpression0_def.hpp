#pragma once
// IWYU pragma private; include "System/Linq/Expressions/InstanceMethodCallExpression0.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__IArgumentProvider_def.hpp"
#include "System/Linq/Expressions/zzzz__InstanceMethodCallExpression_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceMethodCallExpression0)
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
class InstanceMethodCallExpression0;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::InstanceMethodCallExpression0);
// Dependencies System.Linq.Expressions.IArgumentProvider, System.Linq.Expressions.InstanceMethodCallExpression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.InstanceMethodCallExpression0
class CORDL_TYPE InstanceMethodCallExpression0 : public ::System::Linq::Expressions::InstanceMethodCallExpression {
public:
  // Declarations
  __declspec(property(get = get_ArgumentCount)) int32_t ArgumentCount;

  /// @brief Convert operator to "::System::Linq::Expressions::IArgumentProvider"
  constexpr operator ::System::Linq::Expressions::IArgumentProvider*() noexcept;

  /// @brief Method GetArgument, addr 0x40bbab0, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetArgument(int32_t index);

  static inline ::System::Linq::Expressions::InstanceMethodCallExpression0* New_ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* instance);

  /// @brief Method Rewrite, addr 0x40bbb04, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* instance,
                                                                    ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args);

  /// @brief Method .ctor, addr 0x40bba8c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* instance);

  /// @brief Method get_ArgumentCount, addr 0x40bbafc, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ArgumentCount();

  /// @brief Convert to "::System::Linq::Expressions::IArgumentProvider"
  constexpr ::System::Linq::Expressions::IArgumentProvider* i___System__Linq__Expressions__IArgumentProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceMethodCallExpression0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceMethodCallExpression0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceMethodCallExpression0(InstanceMethodCallExpression0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceMethodCallExpression0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceMethodCallExpression0(InstanceMethodCallExpression0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13720 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::InstanceMethodCallExpression0, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::InstanceMethodCallExpression0);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::InstanceMethodCallExpression0*, "System.Linq.Expressions", "InstanceMethodCallExpression0");
