#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
CORDL_MODULE_EXPORT(VFXRenderer)
// Forward declare root types
namespace UnityEngine::VFX {
class VFXRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::VFXRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VFXRenderer*, "UnityEngine.VFX", "VFXRenderer");
// [RejectDragAndDropMaterial]
// [NativeType(Header = "Modules/VFX/Public/VFXRenderer.h")]
// [RequiredByNativeCode]
// Dependencies UnityEngine.Renderer
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VFXRenderer
class CORDL_TYPE VFXRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
  static inline ::UnityEngine::VFX::VFXRenderer* New_ctor();

  /// @brief Method .ctor, addr 0x72cb3c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXRenderer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXRenderer(VFXRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXRenderer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXRenderer(VFXRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22922 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::VFXRenderer) == 0x18, "Size mismatch!");

} // namespace UnityEngine::VFX
