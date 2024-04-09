#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LambdaExpression)
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class IParameterProvider;
}
namespace System::Linq::Expressions {
class ParameterExpression;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class LambdaExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::LambdaExpression);
// Type: System.Linq.Expressions::LambdaExpression
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::LambdaExpression*
class CORDL_TYPE LambdaExpression : public ::System::Linq::Expressions::Expression {
public:
  // Declarations
  __declspec(property(get = get_Body))::System::Linq::Expressions::Expression* Body;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_NameCore))::StringW NameCore;

  __declspec(property(get = get_NodeType))::System::Linq::Expressions::ExpressionType NodeType;

  __declspec(property(get = get_ParameterCount)) int32_t ParameterCount;

  __declspec(property(get = get_PublicType))::System::Type* PublicType;

  __declspec(property(get = get_ReturnType))::System::Type* ReturnType;

  __declspec(property(get = System_Linq_Expressions_IParameterProvider_get_ParameterCount)) int32_t System_Linq_Expressions_IParameterProvider_ParameterCount;

  __declspec(property(get = get_TailCall)) bool TailCall;

  __declspec(property(get = get_TailCallCore)) bool TailCallCore;

  __declspec(property(get = get_Type))::System::Type* Type;

  __declspec(property(get = get_TypeCore))::System::Type* TypeCore;

  /// @brief Field _body, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__body, put = __cordl_internal_set__body))::System::Linq::Expressions::Expression* _body;

  /// @brief Convert operator to "::System::Linq::Expressions::IParameterProvider"
  constexpr operator ::System::Linq::Expressions::IParameterProvider*() noexcept;

  /// @brief Method GetParameter, addr 0x2b0b318, size 0x28, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::ParameterExpression* GetParameter(int32_t index);

  static inline ::System::Linq::Expressions::LambdaExpression* New_ctor(::System::Linq::Expressions::Expression* body);

  /// @brief Method System.Linq.Expressions.IParameterProvider.GetParameter, addr 0x2b0b308, size 0x10, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::ParameterExpression* System_Linq_Expressions_IParameterProvider_GetParameter(int32_t index);

  /// @brief Method System.Linq.Expressions.IParameterProvider.get_ParameterCount, addr 0x2b0b340, size 0x10, virtual true, abstract: false, final true
  inline int32_t System_Linq_Expressions_IParameterProvider_get_ParameterCount();

  constexpr ::System::Linq::Expressions::Expression*& __cordl_internal_get__body();

  constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& __cordl_internal_get__body() const;

  constexpr void __cordl_internal_set__body(::System::Linq::Expressions::Expression* value);

  /// @brief Method .ctor, addr 0x2b0b1c8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* body);

  /// @brief Method get_Body, addr 0x2b0b260, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* get_Body();

  /// @brief Method get_Name, addr 0x2b0b248, size 0x10, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameCore, addr 0x2b0b258, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_NameCore();

  /// @brief Method get_NodeType, addr 0x2b0b240, size 0x8, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

  /// @brief Method get_ParameterCount, addr 0x2b0b350, size 0x28, virtual true, abstract: false, final false
  inline int32_t get_ParameterCount();

  /// @brief Method get_PublicType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_PublicType();

  /// @brief Method get_ReturnType, addr 0x2b0b268, size 0x88, virtual false, abstract: false, final false
  inline ::System::Type* get_ReturnType();

  /// @brief Method get_TailCall, addr 0x2b0b2f0, size 0x10, virtual false, abstract: false, final false
  inline bool get_TailCall();

  /// @brief Method get_TailCallCore, addr 0x2b0b300, size 0x8, virtual true, abstract: false, final false
  inline bool get_TailCallCore();

  /// @brief Method get_Type, addr 0x2b0b234, size 0xc, virtual true, abstract: false, final true
  inline ::System::Type* get_Type();

  /// @brief Method get_TypeCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_TypeCore();

  /// @brief Convert to "::System::Linq::Expressions::IParameterProvider"
  constexpr ::System::Linq::Expressions::IParameterProvider* i___System__Linq__Expressions__IParameterProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LambdaExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LambdaExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LambdaExpression(LambdaExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LambdaExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LambdaExpression(LambdaExpression const&) = delete;

  /// @brief Field _body, offset: 0x10, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* ____body;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::LambdaExpression, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::LambdaExpression, ____body) == 0x10, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::LambdaExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::LambdaExpression*, "System.Linq.Expressions", "LambdaExpression");
