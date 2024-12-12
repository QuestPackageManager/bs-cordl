#pragma once
// IWYU pragma private; include "System/Linq/Expressions/FullExpression_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__ExpressionN_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FullExpression_1)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class ParameterExpression;
}
// Forward declare root types
namespace System::Linq::Expressions {
template <typename TDelegate> class FullExpression_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::Expressions::FullExpression_1);
// Dependencies System.Linq.Expressions.ExpressionN`1<TDelegate>
namespace System::Linq::Expressions {
// cpp template
template <typename TDelegate>
// Is value type: false
// CS Name: System.Linq.Expressions.FullExpression`1<TDelegate>
class CORDL_TYPE FullExpression_1 : public ::System::Linq::Expressions::ExpressionN_1<TDelegate> {
public:
  // Declarations
  __declspec(property(get = get_NameCore)) ::StringW NameCore;

  __declspec(property(get = get_TailCallCore)) bool TailCallCore;

  /// @brief Field <NameCore>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__NameCore_k__BackingField, put = __cordl_internal_set__NameCore_k__BackingField)) ::StringW _NameCore_k__BackingField;

  /// @brief Field <TailCallCore>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__TailCallCore_k__BackingField, put = __cordl_internal_set__TailCallCore_k__BackingField)) bool _TailCallCore_k__BackingField;

  static inline ::System::Linq::Expressions::FullExpression_1<TDelegate>* New_ctor(::System::Linq::Expressions::Expression* body, ::StringW name, bool tailCall,
                                                                                   ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* parameters);

  constexpr ::StringW const& __cordl_internal_get__NameCore_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__NameCore_k__BackingField();

  constexpr bool const& __cordl_internal_get__TailCallCore_k__BackingField() const;

  constexpr bool& __cordl_internal_get__TailCallCore_k__BackingField();

  constexpr void __cordl_internal_set__NameCore_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__TailCallCore_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Linq::Expressions::Expression* body, ::StringW name, bool tailCall,
                    ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* parameters);

  /// @brief Method get_NameCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_NameCore();

  /// @brief Method get_TailCallCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_TailCallCore();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FullExpression_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FullExpression_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FullExpression_1(FullExpression_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FullExpression_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FullExpression_1(FullExpression_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13693 };

  /// @brief Field <NameCore>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____NameCore_k__BackingField;

  /// @brief Field <TailCallCore>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____TailCallCore_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq::Expressions
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Expressions::FullExpression_1, "System.Linq.Expressions", "FullExpression`1");
