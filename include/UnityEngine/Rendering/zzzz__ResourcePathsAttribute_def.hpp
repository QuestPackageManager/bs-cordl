#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ResourcePathsAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ResourcePathsBaseAttribute_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ResourcePathsAttribute)
namespace UnityEngine::Rendering {
struct SearchType;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ResourcePathsAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ResourcePathsAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ResourcePathsAttribute*, "UnityEngine.Rendering", "ResourcePathsAttribute");
// Dependencies UnityEngine.Rendering.ResourcePathsBaseAttribute
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ResourcePathsAttribute
class CORDL_TYPE ResourcePathsAttribute : public ::UnityEngine::Rendering::ResourcePathsBaseAttribute {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::ResourcePathsAttribute* New_ctor(::ArrayW<::StringW> paths, ::UnityEngine::Rendering::SearchType location);

  /// @brief Method .ctor, addr 0x6f66b48, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW> paths, ::UnityEngine::Rendering::SearchType location);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourcePathsAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourcePathsAttribute", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourcePathsAttribute(ResourcePathsAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourcePathsAttribute", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourcePathsAttribute(ResourcePathsAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10367 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::ResourcePathsAttribute) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
