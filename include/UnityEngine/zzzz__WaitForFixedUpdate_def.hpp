#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
CORDL_MODULE_EXPORT(WaitForFixedUpdate)
// Forward declare root types
namespace UnityEngine {
class WaitForFixedUpdate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::WaitForFixedUpdate);
// Type: UnityEngine::WaitForFixedUpdate
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10119))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10158))
// CS Name: ::UnityEngine::WaitForFixedUpdate*
class CORDL_TYPE WaitForFixedUpdate : public ::UnityEngine::YieldInstruction {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "WaitForFixedUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaitForFixedUpdate(WaitForFixedUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaitForFixedUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaitForFixedUpdate(WaitForFixedUpdate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaitForFixedUpdate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::WaitForFixedUpdate, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::WaitForFixedUpdate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WaitForFixedUpdate*, "UnityEngine", "WaitForFixedUpdate");
