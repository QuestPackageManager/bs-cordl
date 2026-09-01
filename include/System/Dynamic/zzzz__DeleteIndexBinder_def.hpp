#pragma once
// IWYU pragma private; include "System\Dynamic\DeleteIndexBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(DeleteIndexBinder)
namespace System::Dynamic {
class DynamicMetaObject;
}
// Forward declare root types
namespace System::Dynamic {
class DeleteIndexBinder;
}
// Write type traits
MARK_REF_T(::System::Dynamic::DeleteIndexBinder*);
DEFINE_IL2CPP_CLASS(::System::Dynamic::DeleteIndexBinder*, "System.Dynamic", "DeleteIndexBinder");
// Dependencies System.Dynamic.DynamicMetaObjectBinder
namespace System::Dynamic {
// Is value type: false
// CS Name: System.Dynamic.DeleteIndexBinder
class CORDL_TYPE DeleteIndexBinder : public ::System::Dynamic::DynamicMetaObjectBinder {
public:
  // Declarations
  /// @brief Method Bind, addr 0x5fc2cdc, size 0xc0, virtual true, abstract: false, final true
  inline ::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args);

  /// @brief Method FallbackDeleteIndex, addr 0x5fc2d9c, size 0x10, virtual false, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackDeleteIndex(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> indexes);

  /// @brief Method FallbackDeleteIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackDeleteIndex(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> indexes,
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16649 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Dynamic::DeleteIndexBinder) == 0x18, "Size mismatch!");

} // namespace System::Dynamic
