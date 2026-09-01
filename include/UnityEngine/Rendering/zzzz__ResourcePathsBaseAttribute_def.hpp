#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ResourcePathsBaseAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ResourcePathsBaseAttribute)
namespace UnityEngine::Rendering {
struct SearchType;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ResourcePathsBaseAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ResourcePathsBaseAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ResourcePathsBaseAttribute*, "UnityEngine.Rendering", "ResourcePathsBaseAttribute");
// Dependencies System.Attribute
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ResourcePathsBaseAttribute
class CORDL_TYPE ResourcePathsBaseAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::ResourcePathsBaseAttribute* New_ctor(::ArrayW<::StringW> paths, bool isField, ::UnityEngine::Rendering::SearchType location);

  /// @brief Method .ctor, addr 0x6b0b2e4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW> paths, bool isField, ::UnityEngine::Rendering::SearchType location);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourcePathsBaseAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourcePathsBaseAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourcePathsBaseAttribute(ResourcePathsBaseAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourcePathsBaseAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourcePathsBaseAttribute(ResourcePathsBaseAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10768 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::ResourcePathsBaseAttribute) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
