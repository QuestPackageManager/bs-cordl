#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Cone)
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Cone;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::Cone);
// Type: UnityEngine.ProBuilder.Shapes::Cone
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.Shapes::Cone*
class CORDL_TYPE Cone : public ::UnityEngine::ProBuilder::Shapes::Shape {
public:
  // Declarations
  /// @brief Field m_NumberOfSides, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NumberOfSides, put = __cordl_internal_set_m_NumberOfSides)) int32_t m_NumberOfSides;

  /// @brief Field m_Radius, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Radius, put = __cordl_internal_set_m_Radius)) float_t m_Radius;

  /// @brief Field m_Smooth, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Smooth, put = __cordl_internal_set_m_Smooth)) bool m_Smooth;

  /// @brief Method CopyShape, addr 0x30b8410, size 0x84, virtual true, abstract: false, final false
  inline void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape);

  static inline ::UnityEngine::ProBuilder::Shapes::Cone* New_ctor();

  /// @brief Method RebuildMesh, addr 0x30b8608, size 0xc4c, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);

  /// @brief Method UpdateBounds, addr 0x30b8494, size 0x174, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation, ::UnityEngine::Bounds bounds);

  constexpr int32_t const& __cordl_internal_get_m_NumberOfSides() const;

  constexpr int32_t& __cordl_internal_get_m_NumberOfSides();

  constexpr float_t const& __cordl_internal_get_m_Radius() const;

  constexpr float_t& __cordl_internal_get_m_Radius();

  constexpr bool const& __cordl_internal_get_m_Smooth() const;

  constexpr bool& __cordl_internal_get_m_Smooth();

  constexpr void __cordl_internal_set_m_NumberOfSides(int32_t value);

  constexpr void __cordl_internal_set_m_Radius(float_t value);

  constexpr void __cordl_internal_set_m_Smooth(bool value);

  /// @brief Method .ctor, addr 0x30b9254, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cone();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Cone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cone(Cone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cone(Cone const&) = delete;

  /// @brief Field m_NumberOfSides, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_NumberOfSides;

  /// @brief Field m_Radius, offset: 0x14, size: 0x4, def value: None
  float_t ___m_Radius;

  /// @brief Field m_Smooth, offset: 0x18, size: 0x1, def value: None
  bool ___m_Smooth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::Cone, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Cone, ___m_NumberOfSides) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Cone, ___m_Radius) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Cone, ___m_Smooth) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Cone);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Cone*, "UnityEngine.ProBuilder.Shapes", "Cone");
