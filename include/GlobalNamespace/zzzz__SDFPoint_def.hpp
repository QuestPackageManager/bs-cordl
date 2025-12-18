#pragma once
// IWYU pragma private; include "GlobalNamespace/SDFPoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SDFPoint)
// Forward declare root types
namespace GlobalNamespace {
class SDFPoint;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SDFPoint);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SDFPoint
class CORDL_TYPE SDFPoint : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _radius, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__radius, put = __cordl_internal_set__radius)) float_t _radius;

  /// @brief Field _sqrtRadius, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__sqrtRadius, put = __cordl_internal_set__sqrtRadius)) float_t _sqrtRadius;

  __declspec(property(get = get_sqrtRadius, put = set_sqrtRadius)) float_t sqrtRadius;

  static inline ::GlobalNamespace::SDFPoint* New_ctor();

  constexpr float_t const& __cordl_internal_get__radius() const;

  constexpr float_t& __cordl_internal_get__radius();

  constexpr float_t const& __cordl_internal_get__sqrtRadius() const;

  constexpr float_t& __cordl_internal_get__sqrtRadius();

  constexpr void __cordl_internal_set__radius(float_t value);

  constexpr void __cordl_internal_set__sqrtRadius(float_t value);

  /// @brief Method .ctor, addr 0x56bf428, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_sqrtRadius, addr 0x56bf418, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sqrtRadius();

  /// @brief Method set_sqrtRadius, addr 0x56bf420, size 0x8, virtual false, abstract: false, final false
  inline void set_sqrtRadius(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SDFPoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SDFPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SDFPoint(SDFPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SDFPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SDFPoint(SDFPoint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19776 };

  /// @brief Field _radius, offset: 0x20, size: 0x4, def value: None
  float_t ____radius;

  /// @brief Field _sqrtRadius, offset: 0x24, size: 0x4, def value: None
  float_t ____sqrtRadius;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SDFPoint, ____radius) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SDFPoint, ____sqrtRadius) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SDFPoint, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SDFPoint);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SDFPoint*, "", "SDFPoint");
