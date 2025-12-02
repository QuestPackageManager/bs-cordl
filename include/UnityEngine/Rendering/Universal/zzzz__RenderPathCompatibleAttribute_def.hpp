#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderPathCompatibleAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPathCompatibility_def.hpp"
CORDL_MODULE_EXPORT(RenderPathCompatibleAttribute)
namespace UnityEngine::Rendering::Universal {
struct RenderPathCompatibility;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class RenderPathCompatibleAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute);
// Dependencies System.Attribute, UnityEngine.Rendering.Universal.RenderPathCompatibility
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.RenderPathCompatibleAttribute
class CORDL_TYPE RenderPathCompatibleAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field renderPath, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_renderPath, put = __cordl_internal_set_renderPath)) ::UnityEngine::Rendering::Universal::RenderPathCompatibility renderPath;

  static inline ::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute* New_ctor(::UnityEngine::Rendering::Universal::RenderPathCompatibility renderPath);

  constexpr ::UnityEngine::Rendering::Universal::RenderPathCompatibility const& __cordl_internal_get_renderPath() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderPathCompatibility& __cordl_internal_get_renderPath();

  constexpr void __cordl_internal_set_renderPath(::UnityEngine::Rendering::Universal::RenderPathCompatibility value);

  /// @brief Method .ctor, addr 0x66b8454, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPathCompatibility renderPath);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPathCompatibleAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderPathCompatibleAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderPathCompatibleAttribute(RenderPathCompatibleAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderPathCompatibleAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderPathCompatibleAttribute(RenderPathCompatibleAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12981 };

  /// @brief Field renderPath, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderPathCompatibility ___renderPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute, ___renderPath) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute*, "UnityEngine.Rendering.Universal", "RenderPathCompatibleAttribute");
