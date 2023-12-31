#pragma once
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
// Type: UnityEngine::SpaceAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10174))
// CS Name: ::UnityEngine::SpaceAttribute*
class CORDL_TYPE SpaceAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field height, offset 0x10, size 0x4
  __declspec(property(get = __get_height, put = __set_height)) float_t height;

  constexpr float_t& __get_height();

  constexpr float_t const& __get_height() const;

  constexpr void __set_height(float_t value);

  static inline ::UnityEngine::SpaceAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2ccc148, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::SpaceAttribute* New_ctor(float_t height);

  /// @brief Method .ctor, addr 0x2ccc168, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t height);

  // Ctor Parameters [CppParam { name: "", ty: "SpaceAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpaceAttribute(SpaceAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpaceAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpaceAttribute(SpaceAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpaceAttribute();

public:
  /// @brief Field height, offset: 0x10, size: 0x4, def value: None
  float_t ___height;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpaceAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::SpaceAttribute, ___height) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SpaceAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpaceAttribute*, "UnityEngine", "SpaceAttribute");
