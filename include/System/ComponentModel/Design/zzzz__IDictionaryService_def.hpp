#pragma once
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
// Type: System.ComponentModel.Design::IDictionaryService
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel::Design {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8337))
// CS Name: ::System.ComponentModel.Design::IDictionaryService*
class CORDL_TYPE IDictionaryService {
public:
  // Declarations
  /// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* GetValue(::System::Object* key);

  /// @brief Method SetValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SetValue(::System::Object* key, ::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "IDictionaryService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDictionaryService(IDictionaryService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDictionaryService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDictionaryService(IDictionaryService const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel::Design
NEED_NO_BOX(::System::ComponentModel::Design::IDictionaryService);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::IDictionaryService*, "System.ComponentModel.Design", "IDictionaryService");
