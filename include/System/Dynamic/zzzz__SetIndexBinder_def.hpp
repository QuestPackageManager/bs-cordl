#pragma once
// IWYU pragma private; include "System/Dynamic/SetIndexBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_def.hpp"
CORDL_MODULE_EXPORT(SetIndexBinder)
namespace System::Dynamic {
class DynamicMetaObject;
}
// Forward declare root types
namespace System::Dynamic {
class SetIndexBinder;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::SetIndexBinder);
// Dependencies System.Dynamic.DynamicMetaObjectBinder
namespace System::Dynamic {
// Is value type: false
// CS Name: System.Dynamic.SetIndexBinder
class CORDL_TYPE SetIndexBinder : public ::System::Dynamic::DynamicMetaObjectBinder {
public:
  // Declarations
  /// @brief Method Bind, addr 0x4106c8c, size 0x12c, virtual true, abstract: false, final true
  inline ::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target,
                                                    ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> args);

  /// @brief Method FallbackSetIndex, addr 0x4106db8, size 0x10, virtual false, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackSetIndex(::System::Dynamic::DynamicMetaObject* target,
                                                                ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> indexes,
                                                                ::System::Dynamic::DynamicMetaObject* value);

  /// @brief Method FallbackSetIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackSetIndex(::System::Dynamic::DynamicMetaObject* target,
                                                                ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> indexes,
                                                                ::System::Dynamic::DynamicMetaObject* value, ::System::Dynamic::DynamicMetaObject* errorSuggestion);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetIndexBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetIndexBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetIndexBinder(SetIndexBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetIndexBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetIndexBinder(SetIndexBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14177 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::SetIndexBinder, 0x18>, "Size mismatch!");

} // namespace System::Dynamic
NEED_NO_BOX(::System::Dynamic::SetIndexBinder);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::SetIndexBinder*, "System.Dynamic", "SetIndexBinder");
