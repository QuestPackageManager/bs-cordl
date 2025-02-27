#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_SessionPDG.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_SessionPDG)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_SessionPDG;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_SessionPDG);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_SessionPDG
class CORDL_TYPE HEU_SessionPDG : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_SessionPDG();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionPDG", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_SessionPDG(HEU_SessionPDG&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionPDG", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_SessionPDG(HEU_SessionPDG const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11775 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_SessionPDG, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_SessionPDG);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_SessionPDG*, "HoudiniEngineUnity", "HEU_SessionPDG");
