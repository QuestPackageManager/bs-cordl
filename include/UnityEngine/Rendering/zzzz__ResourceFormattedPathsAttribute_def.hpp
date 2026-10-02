#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ResourceFormattedPathsAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ResourcePathsBaseAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceFormattedPathsAttribute)
namespace UnityEngine::Rendering {
struct SearchType;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ResourceFormattedPathsAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ResourceFormattedPathsAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ResourceFormattedPathsAttribute*, "UnityEngine.Rendering", "ResourceFormattedPathsAttribute");
// Dependencies UnityEngine.Rendering.ResourcePathsBaseAttribute
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ResourceFormattedPathsAttribute
class CORDL_TYPE ResourceFormattedPathsAttribute : public ::UnityEngine::Rendering::ResourcePathsBaseAttribute {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::ResourceFormattedPathsAttribute* New_ctor(::StringW pathFormat, int32_t rangeMin, int32_t rangeMax, ::UnityEngine::Rendering::SearchType location);

  /// @brief Method .ctor, addr 0x6f66b4c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW pathFormat, int32_t rangeMin, int32_t rangeMax, ::UnityEngine::Rendering::SearchType location);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceFormattedPathsAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceFormattedPathsAttribute", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceFormattedPathsAttribute(ResourceFormattedPathsAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceFormattedPathsAttribute", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceFormattedPathsAttribute(ResourceFormattedPathsAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10368 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::ResourceFormattedPathsAttribute) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
