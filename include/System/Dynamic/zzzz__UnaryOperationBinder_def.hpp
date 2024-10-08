#pragma once
// IWYU pragma private; include "System/Dynamic/UnaryOperationBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(UnaryOperationBinder)
namespace System::Dynamic {
class DynamicMetaObject;
}
// Forward declare root types
namespace System::Dynamic {
class UnaryOperationBinder;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::UnaryOperationBinder);
// Type: System.Dynamic::UnaryOperationBinder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::System.Dynamic::UnaryOperationBinder*
class CORDL_TYPE UnaryOperationBinder : public ::System::Dynamic::DynamicMetaObjectBinder {
public:
  // Declarations
  /// @brief Method Bind, addr 0x408b6cc, size 0xac, virtual true, abstract: false, final true
  inline ::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target,
                                                    ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> args);

  /// @brief Method FallbackUnaryOperation, addr 0x408b6bc, size 0x10, virtual false, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackUnaryOperation(::System::Dynamic::DynamicMetaObject* target);

  /// @brief Method FallbackUnaryOperation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackUnaryOperation(::System::Dynamic::DynamicMetaObject* target, ::System::Dynamic::DynamicMetaObject* errorSuggestion);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnaryOperationBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnaryOperationBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnaryOperationBinder(UnaryOperationBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnaryOperationBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnaryOperationBinder(UnaryOperationBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14134 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::UnaryOperationBinder, 0x18>, "Size mismatch!");

} // namespace System::Dynamic
NEED_NO_BOX(::System::Dynamic::UnaryOperationBinder);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::UnaryOperationBinder*, "System.Dynamic", "UnaryOperationBinder");
