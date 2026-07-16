#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderPipelineResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RenderPipelineResources)
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderPipelineResources;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RenderPipelineResources*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderPipelineResources*, "UnityEngine.Rendering", "RenderPipelineResources");
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderPipelineResources
class CORDL_TYPE RenderPipelineResources : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_packagePath)) ::StringW packagePath;

  __declspec(property(get = get_packagePath_Internal)) ::StringW packagePath_Internal;

  static inline ::UnityEngine::Rendering::RenderPipelineResources* New_ctor();

  /// @brief Method .ctor, addr 0x679d718, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_packagePath, addr 0x679d704, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_packagePath();

  /// @brief Method get_packagePath_Internal, addr 0x679d70c, size 0xc, virtual false, abstract: false, final false
  inline ::StringW get_packagePath_Internal();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPipelineResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderPipelineResources(RenderPipelineResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderPipelineResources(RenderPipelineResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12163 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RenderPipelineResources) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering
