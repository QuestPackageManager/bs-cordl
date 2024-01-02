#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DynamicBoneColliderBase_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DynamicBoneCollider)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class DynamicBoneCollider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DynamicBoneCollider);
// Type: ::DynamicBoneCollider
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16049))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16046))
// CS Name: ::DynamicBoneCollider*
class CORDL_TYPE DynamicBoneCollider : public ::GlobalNamespace::DynamicBoneColliderBase {
public:
  // Declarations
  /// @brief Field m_Radius, offset 0x2c, size 0x4
  __declspec(property(get = __get_m_Radius, put = __set_m_Radius)) float_t m_Radius;

  /// @brief Field m_Height, offset 0x30, size 0x4
  __declspec(property(get = __get_m_Height, put = __set_m_Height)) float_t m_Height;

  constexpr float_t& __get_m_Radius();

  constexpr float_t const& __get_m_Radius() const;

  constexpr void __set_m_Radius(float_t value);

  constexpr float_t& __get_m_Height();

  constexpr float_t const& __get_m_Height() const;

  constexpr void __set_m_Height(float_t value);

  /// @brief Method OnValidate, addr 0x1230144, size 0x18, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method Collide, addr 0x123015c, size 0x1f4, virtual true, abstract: false, final false
  inline void Collide(ByRef<::UnityEngine::Vector3> particlePosition, float_t particleRadius);

  /// @brief Method OutsideSphere, addr 0x1230350, size 0x60, virtual false, abstract: false, final false
  static inline void OutsideSphere(ByRef<::UnityEngine::Vector3> particlePosition, float_t particleRadius, ::UnityEngine::Vector3 sphereCenter, float_t sphereRadius);

  /// @brief Method InsideSphere, addr 0x12303b0, size 0x58, virtual false, abstract: false, final false
  static inline void InsideSphere(ByRef<::UnityEngine::Vector3> particlePosition, float_t particleRadius, ::UnityEngine::Vector3 sphereCenter, float_t sphereRadius);

  /// @brief Method OutsideCapsule, addr 0x1230408, size 0x174, virtual false, abstract: false, final false
  static inline void OutsideCapsule(ByRef<::UnityEngine::Vector3> particlePosition, float_t particleRadius, ::UnityEngine::Vector3 capsuleP0, ::UnityEngine::Vector3 capsuleP1, float_t capsuleRadius);

  /// @brief Method InsideCapsule, addr 0x123057c, size 0x15c, virtual false, abstract: false, final false
  static inline void InsideCapsule(ByRef<::UnityEngine::Vector3> particlePosition, float_t particleRadius, ::UnityEngine::Vector3 capsuleP0, ::UnityEngine::Vector3 capsuleP1, float_t capsuleRadius);

  /// @brief Method OnDrawGizmosSelected, addr 0x12306d8, size 0x19c, virtual false, abstract: false, final false
  inline void OnDrawGizmosSelected();

  static inline ::GlobalNamespace::DynamicBoneCollider* New_ctor();

  /// @brief Method .ctor, addr 0x1230874, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DynamicBoneCollider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicBoneCollider(DynamicBoneCollider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicBoneCollider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicBoneCollider(DynamicBoneCollider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicBoneCollider();

public:
  /// @brief Field m_Radius, offset: 0x2c, size: 0x4, def value: None
  float_t ___m_Radius;

  /// @brief Field m_Height, offset: 0x30, size: 0x4, def value: None
  float_t ___m_Height;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DynamicBoneCollider, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBoneCollider, ___m_Radius) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicBoneCollider, ___m_Height) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DynamicBoneCollider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DynamicBoneCollider*, "", "DynamicBoneCollider");
