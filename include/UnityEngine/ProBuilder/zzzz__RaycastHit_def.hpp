#pragma once
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
// Type: UnityEngine.ProBuilder::RaycastHit
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10176)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12109))
// CS Name: ::UnityEngine.ProBuilder::RaycastHit*
class CORDL_TYPE RaycastHit : public ::System::Object {
public:
  // Declarations
  /// @brief Field distance, offset 0x10, size 0x4
  __declspec(property(get = __get_distance, put = __set_distance)) float_t distance;

  /// @brief Field point, offset 0x14, size 0xc
  __declspec(property(get = __get_point, put = __set_point))::UnityEngine::Vector3 point;

  /// @brief Field normal, offset 0x20, size 0xc
  __declspec(property(get = __get_normal, put = __set_normal))::UnityEngine::Vector3 normal;

  /// @brief Field face, offset 0x2c, size 0x4
  __declspec(property(get = __get_face, put = __set_face)) int32_t face;

  constexpr float_t& __get_distance();

  constexpr float_t const& __get_distance() const;

  constexpr void __set_distance(float_t value);

  constexpr ::UnityEngine::Vector3& __get_point();

  constexpr ::UnityEngine::Vector3 const& __get_point() const;

  constexpr void __set_point(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_normal();

  constexpr ::UnityEngine::Vector3 const& __get_normal() const;

  constexpr void __set_normal(::UnityEngine::Vector3 value);

  constexpr int32_t& __get_face();

  constexpr int32_t const& __get_face() const;

  constexpr void __set_face(int32_t value);

  static inline ::UnityEngine::ProBuilder::RaycastHit* New_ctor(float_t distance, ::UnityEngine::Vector3 point, ::UnityEngine::Vector3 normal, int32_t face);

  /// @brief Method .ctor addr 0x29e1c80 size 0x74 virtual false final false
  inline void _ctor(float_t distance, ::UnityEngine::Vector3 point, ::UnityEngine::Vector3 normal, int32_t face);

  // Ctor Parameters [CppParam { name: "", ty: "RaycastHit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RaycastHit(RaycastHit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RaycastHit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RaycastHit(RaycastHit const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RaycastHit();

public:
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::RaycastHit, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::RaycastHit, ___distance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::RaycastHit, ___point) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::RaycastHit, ___normal) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::RaycastHit, ___face) == 0x2c, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::RaycastHit);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::RaycastHit*, "UnityEngine.ProBuilder", "RaycastHit");
