#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.ComponentModel.Design::IReferenceService
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel::Design {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8339))
// CS Name: ::System.ComponentModel.Design::IReferenceService*
class CORDL_TYPE IReferenceService {
public:
  // Declarations
  /// @brief Method GetReference addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* GetReference(::StringW name);

  /// @brief Method GetName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW GetName(::System::Object* reference);

  /// @brief Method GetReferences addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetReferences(::System::Type* baseType);

  // Ctor Parameters [CppParam { name: "", ty: "IReferenceService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IReferenceService(IReferenceService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IReferenceService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReferenceService(IReferenceService const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel::Design
NEED_NO_BOX(::System::ComponentModel::Design::IReferenceService);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::IReferenceService*, "System.ComponentModel.Design", "IReferenceService");
