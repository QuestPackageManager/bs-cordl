#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
CORDL_MODULE_EXPORT(MeshRenderer)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine {
class MeshRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::MeshRenderer);
// Type: UnityEngine::MeshRenderer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9992))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9995))
// CS Name: ::UnityEngine::MeshRenderer*
class CORDL_TYPE MeshRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
  __declspec(property(get = get_additionalVertexStreams))::UnityEngine::Mesh* additionalVertexStreams;

  /// @brief Method DontStripMeshRenderer addr 0x2b3f360 size 0x4 virtual false final false
  inline void DontStripMeshRenderer();

  /// @brief Method get_additionalVertexStreams addr 0x2b3f364 size 0x3c virtual false final false
  inline ::UnityEngine::Mesh* get_additionalVertexStreams();

  static inline ::UnityEngine::MeshRenderer* New_ctor();

  /// @brief Method .ctor addr 0x2b3f3a0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MeshRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshRenderer(MeshRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshRenderer(MeshRenderer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshRenderer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MeshRenderer, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::MeshRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MeshRenderer*, "UnityEngine", "MeshRenderer");
