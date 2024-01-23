#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Pipe)
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
class Pipe;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::Pipe);
// Type: UnityEngine.ProBuilder.Shapes::Pipe
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12233))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12229))
// CS Name: ::UnityEngine.ProBuilder.Shapes::Pipe*
class CORDL_TYPE Pipe : public ::UnityEngine::ProBuilder::Shapes::Shape {
public:
  // Declarations
  /// @brief Field m_Thickness, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Thickness, put = __cordl_internal_set_m_Thickness)) float_t m_Thickness;

  /// @brief Field m_NumberOfSides, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NumberOfSides, put = __cordl_internal_set_m_NumberOfSides)) int32_t m_NumberOfSides;

  /// @brief Field m_HeightCuts, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HeightCuts, put = __cordl_internal_set_m_HeightCuts)) int32_t m_HeightCuts;

  /// @brief Field m_Smooth, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Smooth, put = __cordl_internal_set_m_Smooth)) bool m_Smooth;

  constexpr float_t& __cordl_internal_get_m_Thickness();

  constexpr float_t const& __cordl_internal_get_m_Thickness() const;

  constexpr void __cordl_internal_set_m_Thickness(float_t value);

  constexpr int32_t& __cordl_internal_get_m_NumberOfSides();

  constexpr int32_t const& __cordl_internal_get_m_NumberOfSides() const;

  constexpr void __cordl_internal_set_m_NumberOfSides(int32_t value);

  constexpr int32_t& __cordl_internal_get_m_HeightCuts();

  constexpr int32_t const& __cordl_internal_get_m_HeightCuts() const;

  constexpr void __cordl_internal_set_m_HeightCuts(int32_t value);

  constexpr bool& __cordl_internal_get_m_Smooth();

  constexpr bool const& __cordl_internal_get_m_Smooth() const;

  constexpr void __cordl_internal_set_m_Smooth(bool value);

  /// @brief Method CopyShape, addr 0x2b8b54c, size 0x8c, virtual true, abstract: false, final false
  inline void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape);

  /// @brief Method UpdateBounds, addr 0x2b8b5d8, size 0x38, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation, ::UnityEngine::Bounds bounds);

  /// @brief Method RebuildMesh, addr 0x2b8b610, size 0xa70, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);

  static inline ::UnityEngine::ProBuilder::Shapes::Pipe* New_ctor();

  /// @brief Method .ctor, addr 0x2b8c080, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Pipe", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pipe(Pipe&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pipe", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pipe(Pipe const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pipe();

public:
  /// @brief Field m_Thickness, offset: 0x10, size: 0x4, def value: None
  float_t ___m_Thickness;

  /// @brief Field m_NumberOfSides, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_NumberOfSides;

  /// @brief Field m_HeightCuts, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_HeightCuts;

  /// @brief Field m_Smooth, offset: 0x1c, size: 0x1, def value: None
  bool ___m_Smooth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::Pipe, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Pipe, ___m_Thickness) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Pipe, ___m_NumberOfSides) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Pipe, ___m_HeightCuts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Pipe, ___m_Smooth) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Pipe);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Pipe*, "UnityEngine.ProBuilder.Shapes", "Pipe");
