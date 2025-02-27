#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/IReferenceService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IReferenceService)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class IReferenceService;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Design::IReferenceService);
// Dependencies
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: System.ComponentModel.Design.IReferenceService
class CORDL_TYPE IReferenceService {
public:
  // Declarations
  /// @brief Method GetName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetName(::System::Object* reference);

  /// @brief Method GetReference, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* GetReference(::StringW name);

  /// @brief Method GetReferences, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetReferences(::System::Type* baseType);

  // Ctor Parameters [CppParam { name: "", ty: "IReferenceService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReferenceService(IReferenceService const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9475 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel::Design
NEED_NO_BOX(::System::ComponentModel::Design::IReferenceService);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::IReferenceService*, "System.ComponentModel.Design", "IReferenceService");
