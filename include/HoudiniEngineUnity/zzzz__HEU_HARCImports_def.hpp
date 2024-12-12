#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_HARCImports.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_HARCImports)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_HARCImports;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_HARCImports);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_HARCImports
class CORDL_TYPE HEU_HARCImports : public ::System::Object {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::HEU_HARCImports* New_ctor();

  /// @brief Method .ctor, addr 0x3a491ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_HARCImports();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_HARCImports", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_HARCImports(HEU_HARCImports&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_HARCImports", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_HARCImports(HEU_HARCImports const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11740 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HARCImports, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_HARCImports);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HARCImports*, "HoudiniEngineUnity", "HEU_HARCImports");
