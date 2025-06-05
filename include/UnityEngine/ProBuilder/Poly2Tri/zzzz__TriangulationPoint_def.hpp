#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/TriangulationPoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TriangulationPoint)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepConstraint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint);
// Dependencies System.Object
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint
class CORDL_TYPE TriangulationPoint : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Edges, put = set_Edges)) ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* Edges;

  __declspec(property(get = get_HasEdges)) bool HasEdges;

  /// @brief Field Index, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_Index, put = __cordl_internal_set_Index)) int32_t Index;

  /// @brief Field X, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_X, put = __cordl_internal_set_X)) double_t X;

  __declspec(property(get = get_Xf, put = set_Xf)) float_t Xf;

  /// @brief Field Y, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Y, put = __cordl_internal_set_Y)) double_t Y;

  __declspec(property(get = get_Yf, put = set_Yf)) float_t Yf;

  /// @brief Field <Edges>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Edges_k__BackingField,
                      put = __cordl_internal_set__Edges_k__BackingField)) ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* _Edges_k__BackingField;

  /// @brief Method AddEdge, addr 0x46fd41c, size 0xec, virtual false, abstract: false, final false
  inline void AddEdge(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* e);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* New_ctor(double_t x, double_t y, int32_t index);

  /// @brief Method ToString, addr 0x46fe74c, size 0x108, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get_Index() const;

  constexpr int32_t& __cordl_internal_get_Index();

  constexpr double_t const& __cordl_internal_get_X() const;

  constexpr double_t& __cordl_internal_get_X();

  constexpr double_t const& __cordl_internal_get_Y() const;

  constexpr double_t& __cordl_internal_get_Y();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* const& __cordl_internal_get__Edges_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>*& __cordl_internal_get__Edges_k__BackingField();

  constexpr void __cordl_internal_set_Index(int32_t value);

  constexpr void __cordl_internal_set_X(double_t value);

  constexpr void __cordl_internal_set_Y(double_t value);

  constexpr void __cordl_internal_set__Edges_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* value);

  /// @brief Method .ctor, addr 0x46f8320, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(double_t x, double_t y, int32_t index);

  /// @brief Method get_Edges, addr 0x46fe73c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* get_Edges();

  /// @brief Method get_HasEdges, addr 0x46fa66c, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasEdges();

  /// @brief Method get_Xf, addr 0x46fe854, size 0xc, virtual false, abstract: false, final false
  inline float_t get_Xf();

  /// @brief Method get_Yf, addr 0x46fe86c, size 0xc, virtual false, abstract: false, final false
  inline float_t get_Yf();

  /// @brief Method set_Edges, addr 0x46fe744, size 0x8, virtual false, abstract: false, final false
  inline void set_Edges(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* value);

  /// @brief Method set_Xf, addr 0x46fe860, size 0xc, virtual false, abstract: false, final false
  inline void set_Xf(float_t value);

  /// @brief Method set_Yf, addr 0x46fe878, size 0xc, virtual false, abstract: false, final false
  inline void set_Yf(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TriangulationPoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TriangulationPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TriangulationPoint(TriangulationPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TriangulationPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TriangulationPoint(TriangulationPoint const&) = delete;

  /// @brief Field INSERTED_INDEX offset 0xffffffff size 0x4
  static constexpr int32_t INSERTED_INDEX{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field INVALID_INDEX offset 0xffffffff size 0x4
  static constexpr int32_t INVALID_INDEX{ static_cast<int32_t>(0xfffffffe) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17847 };

  /// @brief Field <Edges>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* ____Edges_k__BackingField;

  /// @brief Field X, offset: 0x18, size: 0x8, def value: None
  double_t ___X;

  /// @brief Field Y, offset: 0x20, size: 0x8, def value: None
  double_t ___Y;

  /// @brief Field Index, offset: 0x28, size: 0x4, def value: None
  int32_t ___Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint, ____Edges_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint, ___X) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint, ___Y) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint, ___Index) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint, 0x30>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint");
