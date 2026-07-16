#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ResourcePathAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ResourcePathsBaseAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ResourcePathAttribute)
namespace UnityEngine::Rendering {
struct SearchType;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ResourcePathAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ResourcePathAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ResourcePathAttribute*, "UnityEngine.Rendering", "ResourcePathAttribute");
// Dependencies UnityEngine.Rendering.ResourcePathsBaseAttribute
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ResourcePathAttribute
class CORDL_TYPE ResourcePathAttribute : public ::UnityEngine::Rendering::ResourcePathsBaseAttribute {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::ResourcePathAttribute* New_ctor(::StringW path, ::UnityEngine::Rendering::SearchType location);

  /// @brief Method .ctor, addr 0x6b07ecc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::UnityEngine::Rendering::SearchType location);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourcePathAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourcePathAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourcePathAttribute(ResourcePathAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourcePathAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourcePathAttribute(ResourcePathAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10742 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::ResourcePathAttribute) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
