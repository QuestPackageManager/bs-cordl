#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/RaycastHit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RaycastHit)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class RaycastHit;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::RaycastHit);
// Dependencies System.Object, UnityEngine.Vector3
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.RaycastHit
class CORDL_TYPE RaycastHit : public ::System::Object {
public:
  // Declarations
  /// @brief Field distance, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_distance, put = __cordl_internal_set_distance)) float_t distance;

  /// @brief Field face, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_face, put = __cordl_internal_set_face)) int32_t face;

  /// @brief Field normal, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_normal, put = __cordl_internal_set_normal)) ::UnityEngine::Vector3 normal;

  /// @brief Field point, offset 0x14, size 0xc
  __declspec(property(get = __cordl_internal_get_point, put = __cordl_internal_set_point)) ::UnityEngine::Vector3 point;

  static inline ::UnityEngine::ProBuilder::RaycastHit* New_ctor(float_t distance, ::UnityEngine::Vector3 point, ::UnityEngine::Vector3 normal, int32_t face);

  constexpr float_t const& __cordl_internal_get_distance() const;

  constexpr float_t& __cordl_internal_get_distance();

  constexpr int32_t const& __cordl_internal_get_face() const;

  constexpr int32_t& __cordl_internal_get_face();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_normal() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_normal();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_point() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_point();

  constexpr void __cordl_internal_set_distance(float_t value);

  constexpr void __cordl_internal_set_face(int32_t value);

  constexpr void __cordl_internal_set_normal(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_point(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x47385f8, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(float_t distance, ::UnityEngine::Vector3 point, ::UnityEngine::Vector3 normal, int32_t face);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RaycastHit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RaycastHit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RaycastHit(RaycastHit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RaycastHit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RaycastHit(RaycastHit const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14299 };

  /// @brief Field distance, offset: 0x10, size: 0x4, def value: None
  float_t ___distance;

  /// @brief Field point, offset: 0x14, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___point;

  /// @brief Field normal, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___normal;

  /// @brief Field face, offset: 0x2c, size: 0x4, def value: None
  int32_t ___face;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::RaycastHit, ___distance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::RaycastHit, ___point) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::RaycastHit, ___normal) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::RaycastHit, ___face) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::RaycastHit, 0x30>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::RaycastHit);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::RaycastHit*, "UnityEngine.ProBuilder", "RaycastHit");
