#pragma once
// IWYU pragma private; include "System/Dynamic/DeleteIndexBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(DeleteIndexBinder)
namespace System::Dynamic {
class DynamicMetaObject;
}
// Forward declare root types
namespace System::Dynamic {
class DeleteIndexBinder;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::DeleteIndexBinder);
// Type: System.Dynamic::DeleteIndexBinder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::System.Dynamic::DeleteIndexBinder*
class CORDL_TYPE DeleteIndexBinder : public ::System::Dynamic::DynamicMetaObjectBinder {
public:
  // Declarations
  /// @brief Method Bind, addr 0x2c4d4d8, size 0xbc, virtual true, abstract: false, final true
  inline ::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target,
                                                    ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> args);

  /// @brief Method FallbackDeleteIndex, addr 0x2c4d594, size 0x10, virtual false, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackDeleteIndex(::System::Dynamic::DynamicMetaObject* target,
                                                                   ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> indexes);

  /// @brief Method FallbackDeleteIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackDeleteIndex(::System::Dynamic::DynamicMetaObject* target,
                                                                   ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> indexes,
                                                                   ::System::Dynamic::DynamicMetaObject* errorSuggestion);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeleteIndexBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeleteIndexBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeleteIndexBinder(DeleteIndexBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeleteIndexBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeleteIndexBinder(DeleteIndexBinder const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::DeleteIndexBinder, 0x18>, "Size mismatch!");

} // namespace System::Dynamic
NEED_NO_BOX(::System::Dynamic::DeleteIndexBinder);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::DeleteIndexBinder*, "System.Dynamic", "DeleteIndexBinder");
