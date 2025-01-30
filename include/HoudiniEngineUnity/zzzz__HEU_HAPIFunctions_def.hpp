#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_HAPIFunctions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_HAPIFunctions)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_HAPIFunctions;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_HAPIFunctions);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_HAPIFunctions
class CORDL_TYPE HEU_HAPIFunctions : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_HAPIFunctions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_HAPIFunctions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_HAPIFunctions(HEU_HAPIFunctions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_HAPIFunctions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_HAPIFunctions(HEU_HAPIFunctions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11710 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HAPIFunctions, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_HAPIFunctions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HAPIFunctions*, "HoudiniEngineUnity", "HEU_HAPIFunctions");
