#pragma once
// IWYU pragma private; include "UnityEngine/MeshRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MeshRenderer)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine {
class MeshRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::MeshRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::MeshRenderer*, "UnityEngine", "MeshRenderer");
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.MeshRenderer
class CORDL_TYPE MeshRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
  __declspec(property(get = get_additionalVertexStreams, put = set_additionalVertexStreams)) ::UnityW<::UnityEngine::Mesh> additionalVertexStreams;

  __declspec(property(get = get_enlightenVertexStream, put = set_enlightenVertexStream)) ::UnityW<::UnityEngine::Mesh> enlightenVertexStream;

  __declspec(property(get = get_subMeshStartIndex)) int32_t subMeshStartIndex;

  /// @brief Method DontStripMeshRenderer, addr 0x6aa311c, size 0x4, virtual false, abstract: false, final false
  inline void DontStripMeshRenderer();

  static inline ::UnityEngine::MeshRenderer* New_ctor();

  /// @brief Method .ctor, addr 0x6aa36fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_additionalVertexStreams, addr 0x6aa3120, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_additionalVertexStreams();

  /// @brief Method get_additionalVertexStreams_Injected, addr 0x6aa3270, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_additionalVertexStreams_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enlightenVertexStream, addr 0x6aa33b0, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_enlightenVertexStream();

  /// @brief Method get_enlightenVertexStream_Injected, addr 0x6aa3500, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_enlightenVertexStream_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_subMeshStartIndex, addr 0x6aa3640, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_subMeshStartIndex();

  /// @brief Method get_subMeshStartIndex_Injected, addr 0x6aa36c0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_subMeshStartIndex_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_additionalVertexStreams, addr 0x6aa32ac, size 0xc0, virtual false, abstract: false, final false
  inline void set_additionalVertexStreams(::UnityEngine::Mesh* value);

  /// @brief Method set_additionalVertexStreams_Injected, addr 0x6aa336c, size 0x44, virtual false, abstract: false, final false
  static inline void set_additionalVertexStreams_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_enlightenVertexStream, addr 0x6aa353c, size 0xc0, virtual false, abstract: false, final false
  inline void set_enlightenVertexStream(::UnityEngine::Mesh* value);

  /// @brief Method set_enlightenVertexStream_Injected, addr 0x6aa35fc, size 0x44, virtual false, abstract: false, final false
  static inline void set_enlightenVertexStream_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10184 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::MeshRenderer) == 0x18, "Size mismatch!");

} // namespace UnityEngine
