#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RayTracingShaderHelpURLAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__HelpURLAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RayTracingShaderHelpURLAttribute)
// Forward declare root types
namespace UnityEngine::Rendering {
class RayTracingShaderHelpURLAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RayTracingShaderHelpURLAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RayTracingShaderHelpURLAttribute*, "UnityEngine.Rendering", "RayTracingShaderHelpURLAttribute");
// [NativeHeader("Runtime/Shaders/RayTracing/RayTracingShader.h")]
// [NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
// [NativeHeader("Runtime/Graphics/RayTracing/RayTracingAccelerationStructure.h")]
// [MovedFrom("UnityEngine.Experimental.Rendering")]
// Dependencies UnityEngine.HelpURLAttribute
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RayTracingShaderHelpURLAttribute
class CORDL_TYPE RayTracingShaderHelpURLAttribute : public ::UnityEngine::HelpURLAttribute {
public:
  // Declarations
  __declspec(property(get = get_URL)) ::StringW URL;

  static inline ::UnityEngine::Rendering::RayTracingShaderHelpURLAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6f8b444, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_URL, addr 0x6f8b498, size 0x11c, virtual true, abstract: false, final false
  inline ::StringW get_URL();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingShaderHelpURLAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RayTracingShaderHelpURLAttribute", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RayTracingShaderHelpURLAttribute(RayTracingShaderHelpURLAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RayTracingShaderHelpURLAttribute", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RayTracingShaderHelpURLAttribute(RayTracingShaderHelpURLAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10500 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RayTracingShaderHelpURLAttribute) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Rendering
