#pragma once
// IWYU pragma private; include "UnityEngine/UnityEngineModuleAssembly.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(UnityEngineModuleAssembly)
// Forward declare root types
namespace UnityEngine {
class UnityEngineModuleAssembly;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UnityEngineModuleAssembly);
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.UnityEngineModuleAssembly
class CORDL_TYPE UnityEngineModuleAssembly : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::UnityEngineModuleAssembly* New_ctor();

  /// @brief Method .ctor, addr 0x4918cb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityEngineModuleAssembly();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityEngineModuleAssembly", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityEngineModuleAssembly(UnityEngineModuleAssembly&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityEngineModuleAssembly", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityEngineModuleAssembly(UnityEngineModuleAssembly const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18703 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UnityEngineModuleAssembly, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::UnityEngineModuleAssembly);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UnityEngineModuleAssembly*, "UnityEngine", "UnityEngineModuleAssembly");
