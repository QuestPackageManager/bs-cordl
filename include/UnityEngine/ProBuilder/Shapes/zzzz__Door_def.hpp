#pragma once
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
struct Quaternion;
}
namespace UnityEngine {
struct Bounds;
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
// Type: UnityEngine.ProBuilder.Shapes::Door
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12233))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12228))
// CS Name: ::UnityEngine.ProBuilder.Shapes::Door*
class CORDL_TYPE Door : public ::UnityEngine::ProBuilder::Shapes::Shape {
public:
  // Declarations
  /// @brief Field m_DoorHeight, offset 0x10, size 0x4
  __declspec(property(get = __get_m_DoorHeight, put = __set_m_DoorHeight)) float_t m_DoorHeight;

  /// @brief Field m_LegWidth, offset 0x14, size 0x4
  __declspec(property(get = __get_m_LegWidth, put = __set_m_LegWidth)) float_t m_LegWidth;

  constexpr float_t& __get_m_DoorHeight();

  constexpr float_t const& __get_m_DoorHeight() const;

  constexpr void __set_m_DoorHeight(float_t value);

  constexpr float_t& __get_m_LegWidth();

  constexpr float_t const& __get_m_LegWidth() const;

  constexpr void __set_m_LegWidth(float_t value);

  /// @brief Method CopyShape, addr 0x2b899f0, size 0xac, virtual true, abstract: false, final false
  inline void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape);

  /// @brief Method RebuildMesh, addr 0x2b89a9c, size 0x1a9c, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);

  static inline ::UnityEngine::ProBuilder::Shapes::Door* New_ctor();

  /// @brief Method .ctor, addr 0x2b8b538, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Door", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Door(Door&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Door", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Door(Door const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Door();

public:
  /// @brief Field m_DoorHeight, offset: 0x10, size: 0x4, def value: None
  float_t ___m_DoorHeight;

  /// @brief Field m_LegWidth, offset: 0x14, size: 0x4, def value: None
  float_t ___m_LegWidth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::Door, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Door, ___m_DoorHeight) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Door, ___m_LegWidth) == 0x14, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Door);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Door*, "UnityEngine.ProBuilder.Shapes", "Door");
