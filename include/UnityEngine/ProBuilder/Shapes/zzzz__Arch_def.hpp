#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Shapes/Arch.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Arch)
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
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Arch;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::Arch);
// Dependencies UnityEngine.ProBuilder.Shapes.Shape
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Shapes.Arch
class CORDL_TYPE Arch : public ::UnityEngine::ProBuilder::Shapes::Shape {
public:
  // Declarations
  /// @brief Field m_ArchDegrees, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ArchDegrees, put = __cordl_internal_set_m_ArchDegrees)) float_t m_ArchDegrees;

  /// @brief Field m_EndCaps, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EndCaps, put = __cordl_internal_set_m_EndCaps)) bool m_EndCaps;

  /// @brief Field m_NumberOfSides, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NumberOfSides, put = __cordl_internal_set_m_NumberOfSides)) int32_t m_NumberOfSides;

  /// @brief Field m_Smooth, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Smooth, put = __cordl_internal_set_m_Smooth)) bool m_Smooth;

  /// @brief Field m_Thickness, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Thickness, put = __cordl_internal_set_m_Thickness)) float_t m_Thickness;

  /// @brief Method CopyShape, addr 0x4747c38, size 0x9c, virtual true, abstract: false, final false
  inline void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape);

  /// @brief Method GetFace, addr 0x4747cd4, size 0xc4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GetFace(::UnityEngine::Vector2 vertex1, ::UnityEngine::Vector2 vertex2, float_t depth);

  static inline ::UnityEngine::ProBuilder::Shapes::Arch* New_ctor();

  /// @brief Method RebuildMesh, addr 0x4747d98, size 0xb44, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);

  constexpr float_t const& __cordl_internal_get_m_ArchDegrees() const;

  constexpr float_t& __cordl_internal_get_m_ArchDegrees();

  constexpr bool const& __cordl_internal_get_m_EndCaps() const;

  constexpr bool& __cordl_internal_get_m_EndCaps();

  constexpr int32_t const& __cordl_internal_get_m_NumberOfSides() const;

  constexpr int32_t& __cordl_internal_get_m_NumberOfSides();

  constexpr bool const& __cordl_internal_get_m_Smooth() const;

  constexpr bool& __cordl_internal_get_m_Smooth();

  constexpr float_t const& __cordl_internal_get_m_Thickness() const;

  constexpr float_t& __cordl_internal_get_m_Thickness();

  constexpr void __cordl_internal_set_m_ArchDegrees(float_t value);

  constexpr void __cordl_internal_set_m_EndCaps(bool value);

  constexpr void __cordl_internal_set_m_NumberOfSides(int32_t value);

  constexpr void __cordl_internal_set_m_Smooth(bool value);

  constexpr void __cordl_internal_set_m_Thickness(float_t value);

  /// @brief Method .ctor, addr 0x47488dc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Arch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Arch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Arch(Arch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Arch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Arch(Arch const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14340 };

  /// @brief Field m_Thickness, offset: 0x10, size: 0x4, def value: None
  float_t ___m_Thickness;

  /// @brief Field m_NumberOfSides, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_NumberOfSides;

  /// @brief Field m_ArchDegrees, offset: 0x18, size: 0x4, def value: None
  float_t ___m_ArchDegrees;

  /// @brief Field m_EndCaps, offset: 0x1c, size: 0x1, def value: None
  bool ___m_EndCaps;

  /// @brief Field m_Smooth, offset: 0x1d, size: 0x1, def value: None
  bool ___m_Smooth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Arch, ___m_Thickness) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Arch, ___m_NumberOfSides) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Arch, ___m_ArchDegrees) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Arch, ___m_EndCaps) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Arch, ___m_Smooth) == 0x1d, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::Arch, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Arch);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Arch*, "UnityEngine.ProBuilder.Shapes", "Arch");
