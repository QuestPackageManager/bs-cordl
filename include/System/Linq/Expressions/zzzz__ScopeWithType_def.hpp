#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__ScopeN_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ScopeWithType)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
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
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class ScopeWithType;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::ScopeWithType);
// Type: System.Linq.Expressions::ScopeWithType
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::ScopeWithType*
class CORDL_TYPE ScopeWithType : public ::System::Linq::Expressions::ScopeN {
public:
  // Declarations
  __declspec(property(get = get_Type))::System::Type* Type;

  /// @brief Field <Type>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField))::System::Type* _Type_k__BackingField;

  static inline ::System::Linq::Expressions::ScopeWithType* New_ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                                                     ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* expressions, ::System::Type* type);

  /// @brief Method Rewrite, addr 0x2afeea8, size 0xf4, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::BlockExpression* Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                                               ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> args);

  constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x2afee68, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                    ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* expressions, ::System::Type* type);

  /// @brief Method get_Type, addr 0x2afeea0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScopeWithType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScopeWithType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScopeWithType(ScopeWithType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScopeWithType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScopeWithType(ScopeWithType const&) = delete;

  /// @brief Field <Type>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ____Type_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::ScopeWithType, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::ScopeWithType, ____Type_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::ScopeWithType);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::ScopeWithType*, "System.Linq.Expressions", "ScopeWithType");
