#pragma once
// IWYU pragma private; include "UnityEngine/UI/IMeshModifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMeshModifier)
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::UI {
class IMeshModifier;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::IMeshModifier);
// Type: UnityEngine.UI::IMeshModifier
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::IMeshModifier*
class CORDL_TYPE IMeshModifier {
public:
  // Declarations
  /// @brief Method ModifyMesh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ModifyMesh(::UnityEngine::Mesh* mesh);

  /// @brief Method ModifyMesh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ModifyMesh(::UnityEngine::UI::VertexHelper* verts);

  // Ctor Parameters [CppParam { name: "", ty: "IMeshModifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMeshModifier(IMeshModifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMeshModifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMeshModifier(IMeshModifier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15121 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::IMeshModifier);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::IMeshModifier*, "UnityEngine.UI", "IMeshModifier");
