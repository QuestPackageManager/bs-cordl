#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/IDictionaryService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDictionaryService)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class IDictionaryService;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Design::IDictionaryService);
// Dependencies
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: System.ComponentModel.Design.IDictionaryService
class CORDL_TYPE IDictionaryService {
public:
  // Declarations
  /// @brief Method GetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* key);

  /// @brief Method SetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* key, ::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "IDictionaryService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDictionaryService(IDictionaryService const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9472 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel::Design
NEED_NO_BOX(::System::ComponentModel::Design::IDictionaryService);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::IDictionaryService*, "System.ComponentModel.Design", "IDictionaryService");
