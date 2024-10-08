#pragma once
// IWYU pragma private; include "UnityEngine/AssemblyIsEditorAssembly.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AssemblyIsEditorAssembly)
// Forward declare root types
namespace UnityEngine {
class AssemblyIsEditorAssembly;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AssemblyIsEditorAssembly);
// Type: UnityEngine::AssemblyIsEditorAssembly
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::AssemblyIsEditorAssembly*
class CORDL_TYPE AssemblyIsEditorAssembly : public ::System::Attribute {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyIsEditorAssembly();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssemblyIsEditorAssembly", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyIsEditorAssembly(AssemblyIsEditorAssembly&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyIsEditorAssembly", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyIsEditorAssembly(AssemblyIsEditorAssembly const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10827 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssemblyIsEditorAssembly, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AssemblyIsEditorAssembly);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssemblyIsEditorAssembly*, "UnityEngine", "AssemblyIsEditorAssembly");
