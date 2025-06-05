#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/PolyShape.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PolyShape)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace UnityEngine::ProBuilder {
struct PolyShape_PolyEditMode;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct PolyShape_PolyEditMode;
}
namespace UnityEngine::ProBuilder {
class PolyShape;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::PolyShape_PolyEditMode);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::PolyShape);
// Dependencies
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.PolyShape/PolyEditMode
struct CORDL_TYPE PolyShape_PolyEditMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PolyShape_PolyEditMode_Unwrapped
  enum struct __PolyShape_PolyEditMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Path = static_cast<int32_t>(0x1),
    __E_Height = static_cast<int32_t>(0x2),
    __E_Edit = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PolyShape_PolyEditMode_Unwrapped() const noexcept {
    return static_cast<__PolyShape_PolyEditMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PolyShape_PolyEditMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PolyShape_PolyEditMode(int32_t value__) noexcept;

  /// @brief Field Edit value: I32(3)
  static ::UnityEngine::ProBuilder::PolyShape_PolyEditMode const Edit;

  /// @brief Field Height value: I32(2)
  static ::UnityEngine::ProBuilder::PolyShape_PolyEditMode const Height;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::ProBuilder::PolyShape_PolyEditMode const None;

  /// @brief Field Path value: I32(1)
  static ::UnityEngine::ProBuilder::PolyShape_PolyEditMode const Path;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14267 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::PolyShape_PolyEditMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::PolyShape_PolyEditMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.ProBuilder.PolyShape::PolyEditMode
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.PolyShape
class CORDL_TYPE PolyShape : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using PolyEditMode = ::UnityEngine::ProBuilder::PolyShape_PolyEditMode;

  __declspec(property(get = get_controlPoints)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector3>* controlPoints;

  __declspec(property(get = get_extrude, put = set_extrude)) float_t extrude;

  __declspec(property(get = get_flipNormals, put = set_flipNormals)) bool flipNormals;

  /// @brief Field isOnGrid, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_isOnGrid, put = __cordl_internal_set_isOnGrid)) bool isOnGrid;

  /// @brief Field m_EditMode, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_EditMode, put = __cordl_internal_set_m_EditMode)) ::UnityEngine::ProBuilder::PolyShape_PolyEditMode m_EditMode;

  /// @brief Field m_Extrude, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Extrude, put = __cordl_internal_set_m_Extrude)) float_t m_Extrude;

  /// @brief Field m_FlipNormals, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_FlipNormals, put = __cordl_internal_set_m_FlipNormals)) bool m_FlipNormals;

  /// @brief Field m_Mesh, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Mesh, put = __cordl_internal_set_m_Mesh)) ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> m_Mesh;

  /// @brief Field m_Points, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Points, put = __cordl_internal_set_m_Points)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* m_Points;

  __declspec(property(get = get_mesh, put = set_mesh)) ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> mesh;

  __declspec(property(get = get_polyEditMode, put = set_polyEditMode)) ::UnityEngine::ProBuilder::PolyShape_PolyEditMode polyEditMode;

  /// @brief Method IsSnapEnabled, addr 0x471d594, size 0x8, virtual false, abstract: false, final false
  inline bool IsSnapEnabled();

  static inline ::UnityEngine::ProBuilder::PolyShape* New_ctor();

  /// @brief Method SetControlPoints, addr 0x471d468, size 0x5c, virtual false, abstract: false, final false
  inline void SetControlPoints(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points);

  constexpr bool const& __cordl_internal_get_isOnGrid() const;

  constexpr bool& __cordl_internal_get_isOnGrid();

  constexpr ::UnityEngine::ProBuilder::PolyShape_PolyEditMode const& __cordl_internal_get_m_EditMode() const;

  constexpr ::UnityEngine::ProBuilder::PolyShape_PolyEditMode& __cordl_internal_get_m_EditMode();

  constexpr float_t const& __cordl_internal_get_m_Extrude() const;

  constexpr float_t& __cordl_internal_get_m_Extrude();

  constexpr bool const& __cordl_internal_get_m_FlipNormals() const;

  constexpr bool& __cordl_internal_get_m_FlipNormals();

  constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> const& __cordl_internal_get_m_Mesh() const;

  constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>& __cordl_internal_get_m_Mesh();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_m_Points() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_m_Points();

  constexpr void __cordl_internal_set_isOnGrid(bool value);

  constexpr void __cordl_internal_set_m_EditMode(::UnityEngine::ProBuilder::PolyShape_PolyEditMode value);

  constexpr void __cordl_internal_set_m_Extrude(float_t value);

  constexpr void __cordl_internal_set_m_FlipNormals(bool value);

  constexpr void __cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> value);

  constexpr void __cordl_internal_set_m_Points(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  /// @brief Method .ctor, addr 0x471d59c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_controlPoints, addr 0x471d3ec, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector3>* get_controlPoints();

  /// @brief Method get_extrude, addr 0x471d4c4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_extrude();

  /// @brief Method get_flipNormals, addr 0x471d4e4, size 0x8, virtual false, abstract: false, final false
  inline bool get_flipNormals();

  /// @brief Method get_mesh, addr 0x471d4f8, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> get_mesh();

  /// @brief Method get_polyEditMode, addr 0x471d4d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::PolyShape_PolyEditMode get_polyEditMode();

  /// @brief Method set_extrude, addr 0x471d4cc, size 0x8, virtual false, abstract: false, final false
  inline void set_extrude(float_t value);

  /// @brief Method set_flipNormals, addr 0x471d4ec, size 0xc, virtual false, abstract: false, final false
  inline void set_flipNormals(bool value);

  /// @brief Method set_mesh, addr 0x471d58c, size 0x8, virtual false, abstract: false, final false
  inline void set_mesh(::UnityEngine::ProBuilder::ProBuilderMesh* value);

  /// @brief Method set_polyEditMode, addr 0x471d4dc, size 0x8, virtual false, abstract: false, final false
  inline void set_polyEditMode(::UnityEngine::ProBuilder::PolyShape_PolyEditMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PolyShape();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PolyShape", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PolyShape(PolyShape&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PolyShape", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PolyShape(PolyShape const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14268 };

  /// @brief Field m_Mesh, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> ___m_Mesh;

  /// @brief Field m_Points, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ___m_Points;

  /// @brief Field m_Extrude, offset: 0x30, size: 0x4, def value: None
  float_t ___m_Extrude;

  /// @brief Field m_EditMode, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::ProBuilder::PolyShape_PolyEditMode ___m_EditMode;

  /// @brief Field m_FlipNormals, offset: 0x38, size: 0x1, def value: None
  bool ___m_FlipNormals;

  /// @brief Field isOnGrid, offset: 0x39, size: 0x1, def value: None
  bool ___isOnGrid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::PolyShape, ___m_Mesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PolyShape, ___m_Points) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PolyShape, ___m_Extrude) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PolyShape, ___m_EditMode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PolyShape, ___m_FlipNormals) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PolyShape, ___isOnGrid) == 0x39, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::PolyShape, 0x40>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::PolyShape_PolyEditMode, "UnityEngine.ProBuilder", "PolyShape/PolyEditMode");
NEED_NO_BOX(::UnityEngine::ProBuilder::PolyShape);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::PolyShape*, "UnityEngine.ProBuilder", "PolyShape");
