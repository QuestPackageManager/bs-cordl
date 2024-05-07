#pragma once
// IWYU pragma private; include "UnityEngine/MeshRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include <cstdint>
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
// CS Name: ::UnityEngine::MeshRenderer*
class CORDL_TYPE MeshRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
  __declspec(property(get = get_additionalVertexStreams, put = set_additionalVertexStreams))::UnityW<::UnityEngine::Mesh> additionalVertexStreams;

  __declspec(property(get = get_enlightenVertexStream, put = set_enlightenVertexStream))::UnityW<::UnityEngine::Mesh> enlightenVertexStream;

  __declspec(property(get = get_subMeshStartIndex)) int32_t subMeshStartIndex;

  /// @brief Method DontStripMeshRenderer, addr 0x33dc76c, size 0x4, virtual false, abstract: false, final false
  inline void DontStripMeshRenderer();

  static inline ::UnityEngine::MeshRenderer* New_ctor();

  /// @brief Method .ctor, addr 0x33dc8ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_additionalVertexStreams, addr 0x33dc770, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_additionalVertexStreams();

  /// @brief Method get_enlightenVertexStream, addr 0x33dc7f0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_enlightenVertexStream();

  /// @brief Method get_subMeshStartIndex, addr 0x33dc870, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_subMeshStartIndex();

  /// @brief Method set_additionalVertexStreams, addr 0x33dc7ac, size 0x44, virtual false, abstract: false, final false
  inline void set_additionalVertexStreams(::UnityEngine::Mesh* value);

  /// @brief Method set_enlightenVertexStream, addr 0x33dc82c, size 0x44, virtual false, abstract: false, final false
  inline void set_enlightenVertexStream(::UnityEngine::Mesh* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshRenderer(MeshRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshRenderer(MeshRenderer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MeshRenderer, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::MeshRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MeshRenderer*, "UnityEngine", "MeshRenderer");
