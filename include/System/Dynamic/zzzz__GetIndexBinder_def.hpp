#pragma once
// IWYU pragma private; include "System/Dynamic/GetIndexBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_def.hpp"
CORDL_MODULE_EXPORT(GetIndexBinder)
namespace System::Dynamic {
class DynamicMetaObject;
}
// Forward declare root types
namespace System::Dynamic {
class GetIndexBinder;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::GetIndexBinder);
// Dependencies System.Dynamic.DynamicMetaObjectBinder
namespace System::Dynamic {
// Is value type: false
// CS Name: System.Dynamic.GetIndexBinder
class CORDL_TYPE GetIndexBinder : public ::System::Dynamic::DynamicMetaObjectBinder {
public:
  // Declarations
  /// @brief Method Bind, addr 0x410234c, size 0xb8, virtual true, abstract: false, final true
  inline ::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target,
                                                    ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> args);

  /// @brief Method FallbackGetIndex, addr 0x4102404, size 0x10, virtual false, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackGetIndex(::System::Dynamic::DynamicMetaObject* target,
                                                                ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> indexes);

  /// @brief Method FallbackGetIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackGetIndex(::System::Dynamic::DynamicMetaObject* target,
                                                                ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> indexes,
                                                                ::System::Dynamic::DynamicMetaObject* errorSuggestion);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetIndexBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetIndexBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetIndexBinder(GetIndexBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetIndexBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetIndexBinder(GetIndexBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14173 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::GetIndexBinder, 0x18>, "Size mismatch!");

} // namespace System::Dynamic
NEED_NO_BOX(::System::Dynamic::GetIndexBinder);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::GetIndexBinder*, "System.Dynamic", "GetIndexBinder");
