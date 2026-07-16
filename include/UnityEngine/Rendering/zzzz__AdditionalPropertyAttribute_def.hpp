#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AdditionalPropertyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AdditionalPropertyAttribute)
// Forward declare root types
namespace UnityEngine::Rendering {
class AdditionalPropertyAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::AdditionalPropertyAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::AdditionalPropertyAttribute*, "UnityEngine.Rendering", "AdditionalPropertyAttribute");
// Dependencies System.Attribute
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.AdditionalPropertyAttribute
class CORDL_TYPE AdditionalPropertyAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::AdditionalPropertyAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6750e64, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdditionalPropertyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AdditionalPropertyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdditionalPropertyAttribute(AdditionalPropertyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdditionalPropertyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdditionalPropertyAttribute(AdditionalPropertyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11865 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::AdditionalPropertyAttribute) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
