#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BezierShape)
namespace UnityEngine::ProBuilder {
struct BezierPoint;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
// Type: UnityEngine.ProBuilder::BezierShape
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12104))
// CS Name: ::UnityEngine.ProBuilder::BezierShape*
class CORDL_TYPE BezierShape : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field points, offset 0x18, size 0x8
  __declspec(property(get = __get_points, put = __set_points))::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::BezierPoint>* points;

  /// @brief Field closeLoop, offset 0x20, size 0x1
  __declspec(property(get = __get_closeLoop, put = __set_closeLoop)) bool closeLoop;

  /// @brief Field radius, offset 0x24, size 0x4
  __declspec(property(get = __get_radius, put = __set_radius)) float_t radius;

  /// @brief Field rows, offset 0x28, size 0x4
  __declspec(property(get = __get_rows, put = __set_rows)) int32_t rows;

  /// @brief Field columns, offset 0x2c, size 0x4
  __declspec(property(get = __get_columns, put = __set_columns)) int32_t columns;

  /// @brief Field smooth, offset 0x30, size 0x1
  __declspec(property(get = __get_smooth, put = __set_smooth)) bool smooth;

  /// @brief Field m_IsEditing, offset 0x31, size 0x1
  __declspec(property(get = __get_m_IsEditing, put = __set_m_IsEditing)) bool m_IsEditing;

  /// @brief Field m_Mesh, offset 0x38, size 0x8
  __declspec(property(get = __get_m_Mesh, put = __set_m_Mesh))::UnityEngine::ProBuilder::ProBuilderMesh* m_Mesh;

  __declspec(property(get = get_isEditing, put = set_isEditing)) bool isEditing;

  __declspec(property(get = get_mesh, put = set_mesh))::UnityEngine::ProBuilder::ProBuilderMesh* mesh;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::BezierPoint>*& __get_points();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::BezierPoint>*> const& __get_points() const;

  constexpr void __set_points(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::BezierPoint>* value);

  constexpr bool& __get_closeLoop();

  constexpr bool const& __get_closeLoop() const;

  constexpr void __set_closeLoop(bool value);

  constexpr float_t& __get_radius();

  constexpr float_t const& __get_radius() const;

  constexpr void __set_radius(float_t value);

  constexpr int32_t& __get_rows();

  constexpr int32_t const& __get_rows() const;

  constexpr void __set_rows(int32_t value);

  constexpr int32_t& __get_columns();

  constexpr int32_t const& __get_columns() const;

  constexpr void __set_columns(int32_t value);

  constexpr bool& __get_smooth();

  constexpr bool const& __get_smooth() const;

  constexpr void __set_smooth(bool value);

  constexpr bool& __get_m_IsEditing();

  constexpr bool const& __get_m_IsEditing() const;

  constexpr void __set_m_IsEditing(bool value);

  constexpr ::UnityEngine::ProBuilder::ProBuilderMesh*& __get_m_Mesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::ProBuilderMesh*> const& __get_m_Mesh() const;

  constexpr void __set_m_Mesh(::UnityEngine::ProBuilder::ProBuilderMesh* value);

  /// @brief Method get_isEditing, addr 0x2b3812c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isEditing();

  /// @brief Method set_isEditing, addr 0x2b38134, size 0xc, virtual false, abstract: false, final false
  inline void set_isEditing(bool value);

  /// @brief Method get_mesh, addr 0x2b38140, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::ProBuilderMesh* get_mesh();

  /// @brief Method set_mesh, addr 0x2b381d4, size 0x8, virtual false, abstract: false, final false
  inline void set_mesh(::UnityEngine::ProBuilder::ProBuilderMesh* value);

  /// @brief Method Init, addr 0x2b381dc, size 0x260, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method Refresh, addr 0x2b3843c, size 0xc0, virtual false, abstract: false, final false
  inline void Refresh();

  static inline ::UnityEngine::ProBuilder::BezierShape* New_ctor();

  /// @brief Method .ctor, addr 0x2b384fc, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BezierShape", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BezierShape(BezierShape&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BezierShape", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BezierShape(BezierShape const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BezierShape();

public:
  /// @brief Field points, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::BezierPoint>* ___points;

  /// @brief Field closeLoop, offset: 0x20, size: 0x1, def value: None
  bool ___closeLoop;

  /// @brief Field radius, offset: 0x24, size: 0x4, def value: None
  float_t ___radius;

  /// @brief Field rows, offset: 0x28, size: 0x4, def value: None
  int32_t ___rows;

  /// @brief Field columns, offset: 0x2c, size: 0x4, def value: None
  int32_t ___columns;

  /// @brief Field smooth, offset: 0x30, size: 0x1, def value: None
  bool ___smooth;

  /// @brief Field m_IsEditing, offset: 0x31, size: 0x1, def value: None
  bool ___m_IsEditing;

  /// @brief Field m_Mesh, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::ProBuilderMesh* ___m_Mesh;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::BezierShape, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::BezierShape, ___points) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::BezierShape, ___closeLoop) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::BezierShape, ___radius) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::BezierShape, ___rows) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::BezierShape, ___columns) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::BezierShape, ___smooth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::BezierShape, ___m_IsEditing) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::BezierShape, ___m_Mesh) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::BezierShape);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::BezierShape*, "UnityEngine.ProBuilder", "BezierShape");
