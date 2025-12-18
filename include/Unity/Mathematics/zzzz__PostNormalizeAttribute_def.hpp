#pragma once
// IWYU pragma private; include "Unity/Mathematics/PostNormalizeAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(PostNormalizeAttribute)
// Forward declare root types
namespace Unity::Mathematics {
class PostNormalizeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::PostNormalizeAttribute);
// Dependencies UnityEngine.PropertyAttribute
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.PostNormalizeAttribute
class CORDL_TYPE PostNormalizeAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  static inline ::Unity::Mathematics::PostNormalizeAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x64cb8cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostNormalizeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostNormalizeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostNormalizeAttribute(PostNormalizeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostNormalizeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostNormalizeAttribute(PostNormalizeAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13170 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::PostNormalizeAttribute, 0x18>, "Size mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::PostNormalizeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::PostNormalizeAttribute*, "Unity.Mathematics", "PostNormalizeAttribute");
