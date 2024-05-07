#pragma once
// IWYU pragma private; include "System/Linq/Expressions/InstanceMethodCallExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__MethodCallExpression_def.hpp"
CORDL_MODULE_EXPORT(InstanceMethodCallExpression)
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class IArgumentProvider;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace System::Linq::Expressions {
class InstanceMethodCallExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::InstanceMethodCallExpression);
// Type: System.Linq.Expressions::InstanceMethodCallExpression
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::InstanceMethodCallExpression*
class CORDL_TYPE InstanceMethodCallExpression : public ::System::Linq::Expressions::MethodCallExpression {
public:
  // Declarations
  /// @brief Field _instance, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__instance, put = __cordl_internal_set__instance))::System::Linq::Expressions::Expression* _instance;

  /// @brief Convert operator to "::System::Linq::Expressions::IArgumentProvider"
  constexpr operator ::System::Linq::Expressions::IArgumentProvider*() noexcept;

  /// @brief Method GetInstance, addr 0x2c0a1d0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetInstance();

  static inline ::System::Linq::Expressions::InstanceMethodCallExpression* New_ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* instance);

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__instance();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& __cordl_internal_get__instance() const;

  constexpr void __cordl_internal_set__instance(::System::Linq::Expressions::Expression* value);

  /// @brief Method .ctor, addr 0x2c0a1ac, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* instance);

  /// @brief Convert to "::System::Linq::Expressions::IArgumentProvider"
  constexpr ::System::Linq::Expressions::IArgumentProvider* i___System__Linq__Expressions__IArgumentProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceMethodCallExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceMethodCallExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceMethodCallExpression(InstanceMethodCallExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceMethodCallExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceMethodCallExpression(InstanceMethodCallExpression const&) = delete;

  /// @brief Field _instance, offset: 0x18, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____instance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::InstanceMethodCallExpression, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::InstanceMethodCallExpression, ____instance) == 0x18, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::InstanceMethodCallExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::InstanceMethodCallExpression*, "System.Linq.Expressions", "InstanceMethodCallExpression");
