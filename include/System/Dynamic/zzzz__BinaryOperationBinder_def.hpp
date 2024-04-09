#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(BinaryOperationBinder)
namespace System::Dynamic {
class DynamicMetaObject;
}
namespace System::Linq::Expressions {
struct ExpressionType;
}
// Forward declare root types
namespace System::Dynamic {
class BinaryOperationBinder;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::BinaryOperationBinder);
// Type: System.Dynamic::BinaryOperationBinder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::System.Dynamic::BinaryOperationBinder*
class CORDL_TYPE BinaryOperationBinder : public ::System::Dynamic::DynamicMetaObjectBinder {
public:
  // Declarations
  __declspec(property(get = get_Operation))::System::Linq::Expressions::ExpressionType Operation;

  /// @brief Field <Operation>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__Operation_k__BackingField,
                      put = __cordl_internal_set__Operation_k__BackingField))::System::Linq::Expressions::ExpressionType _Operation_k__BackingField;

  /// @brief Method Bind, addr 0x2b4d7f0, size 0xe8, virtual true, abstract: false, final true
  inline ::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target,
                                                    ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> args);

  /// @brief Method FallbackBinaryOperation, addr 0x2b4d7e0, size 0x10, virtual false, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackBinaryOperation(::System::Dynamic::DynamicMetaObject* target, ::System::Dynamic::DynamicMetaObject* arg);

  /// @brief Method FallbackBinaryOperation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackBinaryOperation(::System::Dynamic::DynamicMetaObject* target, ::System::Dynamic::DynamicMetaObject* arg,
                                                                       ::System::Dynamic::DynamicMetaObject* errorSuggestion);

  constexpr ::System::Linq::Expressions::ExpressionType const& __cordl_internal_get__Operation_k__BackingField() const;

  constexpr ::System::Linq::Expressions::ExpressionType& __cordl_internal_get__Operation_k__BackingField();

  constexpr void __cordl_internal_set__Operation_k__BackingField(::System::Linq::Expressions::ExpressionType value);

  /// @brief Method get_Operation, addr 0x2b4d7d8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::ExpressionType get_Operation();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryOperationBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryOperationBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryOperationBinder(BinaryOperationBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryOperationBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryOperationBinder(BinaryOperationBinder const&) = delete;

  /// @brief Field <Operation>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::System::Linq::Expressions::ExpressionType ____Operation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::BinaryOperationBinder, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Dynamic::BinaryOperationBinder, ____Operation_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::Dynamic
NEED_NO_BOX(::System::Dynamic::BinaryOperationBinder);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::BinaryOperationBinder*, "System.Dynamic", "BinaryOperationBinder");
