#pragma once
// IWYU pragma private; include "System/Linq/Expressions/MethodCallExpression5.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__IArgumentProvider_def.hpp"
#include "System/Linq/Expressions/zzzz__MethodCallExpression_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MethodCallExpression5)
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
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions {
class MethodCallExpression5;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::MethodCallExpression5);
// Dependencies System.Linq.Expressions.IArgumentProvider, System.Linq.Expressions.MethodCallExpression
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.MethodCallExpression5
class CORDL_TYPE MethodCallExpression5 : public ::System::Linq::Expressions::MethodCallExpression {
public:
  // Declarations
  __declspec(property(get = get_ArgumentCount)) int32_t ArgumentCount;

  /// @brief Field _arg0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__arg0, put = __cordl_internal_set__arg0)) ::System::Object* _arg0;

  /// @brief Field _arg1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__arg1, put = __cordl_internal_set__arg1)) ::System::Linq::Expressions::Expression* _arg1;

  /// @brief Field _arg2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__arg2, put = __cordl_internal_set__arg2)) ::System::Linq::Expressions::Expression* _arg2;

  /// @brief Field _arg3, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__arg3, put = __cordl_internal_set__arg3)) ::System::Linq::Expressions::Expression* _arg3;

  /// @brief Field _arg4, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__arg4, put = __cordl_internal_set__arg4)) ::System::Linq::Expressions::Expression* _arg4;

  /// @brief Convert operator to "::System::Linq::Expressions::IArgumentProvider"
  constexpr operator ::System::Linq::Expressions::IArgumentProvider*() noexcept;

  /// @brief Method GetArgument, addr 0x40c8f78, size 0xe0, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetArgument(int32_t index);

  static inline ::System::Linq::Expressions::MethodCallExpression5* New_ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0,
                                                                             ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2,
                                                                             ::System::Linq::Expressions::Expression* arg3, ::System::Linq::Expressions::Expression* arg4);

  /// @brief Method Rewrite, addr 0x40c9060, size 0x2d8, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* instance,
                                                                    ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args);

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

  /// @brief Method .ctor, addr 0x40c8f2c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1,
                    ::System::Linq::Expressions::Expression* arg2, ::System::Linq::Expressions::Expression* arg3, ::System::Linq::Expressions::Expression* arg4);

  /// @brief Method get_ArgumentCount, addr 0x40c9058, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ArgumentCount();

  /// @brief Convert to "::System::Linq::Expressions::IArgumentProvider"
  constexpr ::System::Linq::Expressions::IArgumentProvider* i___System__Linq__Expressions__IArgumentProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodCallExpression5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MethodCallExpression5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MethodCallExpression5(MethodCallExpression5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MethodCallExpression5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MethodCallExpression5(MethodCallExpression5 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13719 };

  /// @brief Field _arg0, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____arg0;

  /// @brief Field _arg1, offset: 0x20, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____arg1;

  /// @brief Field _arg2, offset: 0x28, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____arg2;

  /// @brief Field _arg3, offset: 0x30, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____arg3;

  /// @brief Field _arg4, offset: 0x38, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____arg4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::MethodCallExpression5, ____arg0) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::MethodCallExpression5, ____arg1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::MethodCallExpression5, ____arg2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::MethodCallExpression5, ____arg3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::MethodCallExpression5, ____arg4) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::MethodCallExpression5, 0x40>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::MethodCallExpression5);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::MethodCallExpression5*, "System.Linq.Expressions", "MethodCallExpression5");
