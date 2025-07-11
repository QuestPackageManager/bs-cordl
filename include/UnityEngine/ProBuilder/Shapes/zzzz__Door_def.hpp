#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Shapes/Door.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Door)
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
class Door;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::Door);
// Dependencies UnityEngine.ProBuilder.Shapes.Shape
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Shapes.Door
class CORDL_TYPE Door : public ::UnityEngine::ProBuilder::Shapes::Shape {
public:
  // Declarations
  /// @brief Field m_DoorHeight, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DoorHeight, put = __cordl_internal_set_m_DoorHeight)) float_t m_DoorHeight;

  /// @brief Field m_LegWidth, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LegWidth, put = __cordl_internal_set_m_LegWidth)) float_t m_LegWidth;

  /// @brief Method CopyShape, addr 0x474f30c, size 0xac, virtual true, abstract: false, final false
  inline void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape);

  static inline ::UnityEngine::ProBuilder::Shapes::Door* New_ctor();

  /// @brief Method RebuildMesh, addr 0x474f3b8, size 0x1a04, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);

  constexpr float_t const& __cordl_internal_get_m_DoorHeight() const;

  constexpr float_t& __cordl_internal_get_m_DoorHeight();

  constexpr float_t const& __cordl_internal_get_m_LegWidth() const;

  constexpr float_t& __cordl_internal_get_m_LegWidth();

  constexpr void __cordl_internal_set_m_DoorHeight(float_t value);

  constexpr void __cordl_internal_set_m_LegWidth(float_t value);

  /// @brief Method .ctor, addr 0x4750dbc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Door();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Door", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Door(Door&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Door", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Door(Door const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14346 };

  /// @brief Field m_DoorHeight, offset: 0x10, size: 0x4, def value: None
  float_t ___m_DoorHeight;

  /// @brief Field m_LegWidth, offset: 0x14, size: 0x4, def value: None
  float_t ___m_LegWidth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Door, ___m_DoorHeight) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Door, ___m_LegWidth) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::Door, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Door);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Door*, "UnityEngine.ProBuilder.Shapes", "Door");
