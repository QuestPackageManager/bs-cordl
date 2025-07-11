#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/BezierShape.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BezierShape)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::ProBuilder {
struct BezierPoint;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class BezierShape;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::BezierShape);
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.BezierShape
class CORDL_TYPE BezierShape : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field closeLoop, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_closeLoop, put = __cordl_internal_set_closeLoop)) bool closeLoop;

  /// @brief Field columns, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_columns, put = __cordl_internal_set_columns)) int32_t columns;

  __declspec(property(get = get_isEditing, put = set_isEditing)) bool isEditing;

  /// @brief Field m_IsEditing, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsEditing, put = __cordl_internal_set_m_IsEditing)) bool m_IsEditing;

  /// @brief Field m_Mesh, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Mesh, put = __cordl_internal_set_m_Mesh)) ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> m_Mesh;

  __declspec(property(get = get_mesh, put = set_mesh)) ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> mesh;

  /// @brief Field points, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_points, put = __cordl_internal_set_points)) ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::BezierPoint>* points;

  /// @brief Field radius, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_radius, put = __cordl_internal_set_radius)) float_t radius;

  /// @brief Field rows, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_rows, put = __cordl_internal_set_rows)) int32_t rows;

  /// @brief Field smooth, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_smooth, put = __cordl_internal_set_smooth)) bool smooth;

  /// @brief Method Init, addr 0x4700bf8, size 0x254, virtual false, abstract: false, final false
  inline void Init();

  static inline ::UnityEngine::ProBuilder::BezierShape* New_ctor();

  /// @brief Method Refresh, addr 0x4700e4c, size 0xbc, virtual false, abstract: false, final false
  inline void Refresh();

  constexpr bool const& __cordl_internal_get_closeLoop() const;

  constexpr bool& __cordl_internal_get_closeLoop();

  constexpr int32_t const& __cordl_internal_get_columns() const;

  constexpr int32_t& __cordl_internal_get_columns();

  constexpr bool const& __cordl_internal_get_m_IsEditing() const;

  constexpr bool& __cordl_internal_get_m_IsEditing();

  constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> const& __cordl_internal_get_m_Mesh() const;

  constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>& __cordl_internal_get_m_Mesh();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::BezierPoint>* const& __cordl_internal_get_points() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::BezierPoint>*& __cordl_internal_get_points();

  constexpr float_t const& __cordl_internal_get_radius() const;

  constexpr float_t& __cordl_internal_get_radius();

  constexpr int32_t const& __cordl_internal_get_rows() const;

  constexpr int32_t& __cordl_internal_get_rows();

  constexpr bool const& __cordl_internal_get_smooth() const;

  constexpr bool& __cordl_internal_get_smooth();

  constexpr void __cordl_internal_set_closeLoop(bool value);

  constexpr void __cordl_internal_set_columns(int32_t value);

  constexpr void __cordl_internal_set_m_IsEditing(bool value);

  constexpr void __cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> value);

  constexpr void __cordl_internal_set_points(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::BezierPoint>* value);

  constexpr void __cordl_internal_set_radius(float_t value);

  constexpr void __cordl_internal_set_rows(int32_t value);

  constexpr void __cordl_internal_set_smooth(bool value);

  /// @brief Method .ctor, addr 0x4700f08, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isEditing, addr 0x4700b48, size 0x8, virtual false, abstract: false, final false
  inline bool get_isEditing();

  /// @brief Method get_mesh, addr 0x4700b5c, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> get_mesh();

  /// @brief Method set_isEditing, addr 0x4700b50, size 0xc, virtual false, abstract: false, final false
  inline void set_isEditing(bool value);

  /// @brief Method set_mesh, addr 0x4700bf0, size 0x8, virtual false, abstract: false, final false
  inline void set_mesh(::UnityEngine::ProBuilder::ProBuilderMesh* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BezierShape();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BezierShape", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BezierShape(BezierShape&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BezierShape", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BezierShape(BezierShape const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14222 };

  /// @brief Field points, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::BezierPoint>* ___points;

  /// @brief Field closeLoop, offset: 0x28, size: 0x1, def value: None
  bool ___closeLoop;

  /// @brief Field radius, offset: 0x2c, size: 0x4, def value: None
  float_t ___radius;

  /// @brief Field rows, offset: 0x30, size: 0x4, def value: None
  int32_t ___rows;

  /// @brief Field columns, offset: 0x34, size: 0x4, def value: None
  int32_t ___columns;

  /// @brief Field smooth, offset: 0x38, size: 0x1, def value: None
  bool ___smooth;

  /// @brief Field m_IsEditing, offset: 0x39, size: 0x1, def value: None
  bool ___m_IsEditing;

  /// @brief Field m_Mesh, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> ___m_Mesh;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::BezierShape, ___points) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::BezierShape, ___closeLoop) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::BezierShape, ___radius) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::BezierShape, ___rows) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::BezierShape, ___columns) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::BezierShape, ___smooth) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::BezierShape, ___m_IsEditing) == 0x39, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::BezierShape, ___m_Mesh) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::BezierShape, 0x48>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::BezierShape);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::BezierShape*, "UnityEngine.ProBuilder", "BezierShape");
