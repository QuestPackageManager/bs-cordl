#pragma once
// IWYU pragma private; include "UnityEngine/SpaceAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpaceAttribute)
// Forward declare root types
namespace UnityEngine {
class SpaceAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SpaceAttribute);
// Dependencies UnityEngine.PropertyAttribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SpaceAttribute
class CORDL_TYPE SpaceAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field height, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_height, put = __cordl_internal_set_height)) float_t height;

  static inline ::UnityEngine::SpaceAttribute* New_ctor();

  static inline ::UnityEngine::SpaceAttribute* New_ctor(float_t height);

  constexpr float_t const& __cordl_internal_get_height() const;

  constexpr float_t& __cordl_internal_get_height();

  constexpr void __cordl_internal_set_height(float_t value);

  /// @brief Method .ctor, addr 0x48a4570, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x48a4590, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t height);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpaceAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpaceAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpaceAttribute(SpaceAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpaceAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpaceAttribute(SpaceAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10836 };

  /// @brief Field height, offset: 0x10, size: 0x4, def value: None
  float_t ___height;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SpaceAttribute, ___height) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::SpaceAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SpaceAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpaceAttribute*, "UnityEngine", "SpaceAttribute");
