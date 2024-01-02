#pragma once
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
// Type: UnityEngine.ProBuilder.Poly2Tri::TriangulationPoint
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15344))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::TriangulationPoint*
class CORDL_TYPE TriangulationPoint : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Edges>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Edges_k__BackingField,
                      put = __set__Edges_k__BackingField))::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* _Edges_k__BackingField;

  /// @brief Field X, offset 0x18, size 0x8
  __declspec(property(get = __get_X, put = __set_X)) double_t X;

  /// @brief Field Y, offset 0x20, size 0x8
  __declspec(property(get = __get_Y, put = __set_Y)) double_t Y;

  /// @brief Field Index, offset 0x28, size 0x4
  __declspec(property(get = __get_Index, put = __set_Index)) int32_t Index;

  __declspec(property(get = get_Edges, put = set_Edges))::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* Edges;

  __declspec(property(get = get_Xf, put = set_Xf)) float_t Xf;

  __declspec(property(get = get_Yf, put = set_Yf)) float_t Yf;

  __declspec(property(get = get_HasEdges)) bool HasEdges;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>*& __get__Edges_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>*> const& __get__Edges_k__BackingField() const;

  constexpr void __set__Edges_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* value);

  constexpr double_t& __get_X();

  constexpr double_t const& __get_X() const;

  constexpr void __set_X(double_t value);

  constexpr double_t& __get_Y();

  constexpr double_t const& __get_Y() const;

  constexpr void __set_Y(double_t value);

  constexpr int32_t& __get_Index();

  constexpr int32_t const& __get_Index() const;

  constexpr void __set_Index(int32_t value);

  /// @brief Method get_Edges, addr 0x2b356d8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* get_Edges();

  /// @brief Method set_Edges, addr 0x2b356e0, size 0x8, virtual false, abstract: false, final false
  inline void set_Edges(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* value);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* New_ctor(double_t x, double_t y, int32_t index);

  /// @brief Method .ctor, addr 0x2b2f1a4, size 0x3c, virtual false, abstract: false, final false
  /// @param index: int32_t (default: static_cast<int32_t>(0xffffffff))
  inline void _ctor(double_t x, double_t y, int32_t index = static_cast<int32_t>(0xffffffff));

  /// @brief Method ToString, addr 0x2b356e8, size 0x1a4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_Xf, addr 0x2b3588c, size 0xc, virtual false, abstract: false, final false
  inline float_t get_Xf();

  /// @brief Method set_Xf, addr 0x2b35898, size 0xc, virtual false, abstract: false, final false
  inline void set_Xf(float_t value);

  /// @brief Method get_Yf, addr 0x2b358a4, size 0xc, virtual false, abstract: false, final false
  inline float_t get_Yf();

  /// @brief Method set_Yf, addr 0x2b358b0, size 0xc, virtual false, abstract: false, final false
  inline void set_Yf(float_t value);

  /// @brief Method AddEdge, addr 0x2b34394, size 0xf0, virtual false, abstract: false, final false
  inline void AddEdge(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* e);

  /// @brief Method get_HasEdges, addr 0x2b315d0, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasEdges();

  // Ctor Parameters [CppParam { name: "", ty: "TriangulationPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TriangulationPoint(TriangulationPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TriangulationPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TriangulationPoint(TriangulationPoint const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TriangulationPoint();

public:
  /// @brief Field <Edges>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* ____Edges_k__BackingField;

  /// @brief Field X, offset: 0x18, size: 0x8, def value: None
  double_t ___X;

  /// @brief Field Y, offset: 0x20, size: 0x8, def value: None
  double_t ___Y;

  /// @brief Field Index, offset: 0x28, size: 0x4, def value: None
  int32_t ___Index;

  /// @brief Field INSERTED_INDEX offset 0xffffffff size 0x4
  static constexpr int32_t INSERTED_INDEX{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field INVALID_INDEX offset 0xffffffff size 0x4
  static constexpr int32_t INVALID_INDEX{ static_cast<int32_t>(0xfffffffe) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint, ____Edges_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint, ___X) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint, ___Y) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint, ___Index) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint");
