#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationMode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TriangulationContext)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepDebugContext;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DelaunayTriangle;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class Triangulatable;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationAlgorithm;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationConstraint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationDebugContext;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationMode;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationContext;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext);
// Type: UnityEngine.ProBuilder.Poly2Tri::TriangulationContext
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 61, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15343)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15341))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::TriangulationContext*
class CORDL_TYPE TriangulationContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field <DebugContext>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__DebugContext_k__BackingField,
                      put = __set__DebugContext_k__BackingField))::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext* _DebugContext_k__BackingField;

  /// @brief Field Triangles, offset 0x18, size 0x8
  __declspec(property(get = __get_Triangles, put = __set_Triangles))::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* Triangles;

  /// @brief Field Points, offset 0x20, size 0x8
  __declspec(property(get = __get_Points, put = __set_Points))::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* Points;

  /// @brief Field <TriangulationMode>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __get__TriangulationMode_k__BackingField,
                      put = __set__TriangulationMode_k__BackingField))::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode _TriangulationMode_k__BackingField;

  /// @brief Field <Triangulatable>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __get__Triangulatable_k__BackingField, put = __set__Triangulatable_k__BackingField))::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* _Triangulatable_k__BackingField;

  /// @brief Field <StepCount>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __get__StepCount_k__BackingField, put = __set__StepCount_k__BackingField)) int32_t _StepCount_k__BackingField;

  /// @brief Field <IsDebugEnabled>k__BackingField, offset 0x3c, size 0x1
  __declspec(property(get = __get__IsDebugEnabled_k__BackingField, put = __set__IsDebugEnabled_k__BackingField)) bool _IsDebugEnabled_k__BackingField;

  __declspec(property(get = get_DebugContext, put = set_DebugContext))::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext* DebugContext;

  __declspec(property(get = get_TriangulationMode, put = set_TriangulationMode))::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode TriangulationMode;

  __declspec(property(get = get_Triangulatable, put = set_Triangulatable))::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* Triangulatable;

  __declspec(property(get = get_StepCount, put = set_StepCount)) int32_t StepCount;

  __declspec(property(get = get_Algorithm))::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm Algorithm;

  __declspec(property(get = get_IsDebugEnabled, put = set_IsDebugEnabled)) bool IsDebugEnabled;

  __declspec(property(get = get_DTDebugContext))::UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext* DTDebugContext;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext*& __get__DebugContext_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext*> const& __get__DebugContext_k__BackingField() const;

  constexpr void __set__DebugContext_k__BackingField(::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*& __get_Triangles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*> const& __get_Triangles() const;

  constexpr void __set_Triangles(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*& __get_Points();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*> const& __get_Points() const;

  constexpr void __set_Points(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode& __get__TriangulationMode_k__BackingField();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode const& __get__TriangulationMode_k__BackingField() const;

  constexpr void __set__TriangulationMode_k__BackingField(::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*& __get__Triangulatable_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*> const& __get__Triangulatable_k__BackingField() const;

  constexpr void __set__Triangulatable_k__BackingField(::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* value);

  constexpr int32_t& __get__StepCount_k__BackingField();

  constexpr int32_t const& __get__StepCount_k__BackingField() const;

  constexpr void __set__StepCount_k__BackingField(int32_t value);

  constexpr bool& __get__IsDebugEnabled_k__BackingField();

  constexpr bool const& __get__IsDebugEnabled_k__BackingField() const;

  constexpr void __set__IsDebugEnabled_k__BackingField(bool value);

  /// @brief Method get_DebugContext, addr 0x2b35684, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext* get_DebugContext();

  /// @brief Method set_DebugContext, addr 0x2b3568c, size 0x8, virtual false, abstract: false, final false
  inline void set_DebugContext(::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext* value);

  /// @brief Method get_TriangulationMode, addr 0x2b35694, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode();

  /// @brief Method set_TriangulationMode, addr 0x2b3569c, size 0x8, virtual false, abstract: false, final false
  inline void set_TriangulationMode(::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode value);

  /// @brief Method get_Triangulatable, addr 0x2b356a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* get_Triangulatable();

  /// @brief Method set_Triangulatable, addr 0x2b356ac, size 0x8, virtual false, abstract: false, final false
  inline void set_Triangulatable(::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* value);

  /// @brief Method get_StepCount, addr 0x2b356b4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_StepCount();

  /// @brief Method set_StepCount, addr 0x2b356bc, size 0x8, virtual false, abstract: false, final false
  inline void set_StepCount(int32_t value);

  /// @brief Method Done, addr 0x2b314b4, size 0x10, virtual false, abstract: false, final false
  inline void Done();

  /// @brief Method get_Algorithm, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm get_Algorithm();

  /// @brief Method PrepareTriangulation, addr 0x2b34ae0, size 0x108, virtual true, abstract: false, final false
  inline void PrepareTriangulation(::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* t);

  /// @brief Method NewConstraint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint* NewConstraint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a,
                                                                                     ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* b);

  /// @brief Method Update, addr 0x2b3182c, size 0x4, virtual false, abstract: false, final false
  inline void Update(::StringW message);

  /// @brief Method Clear, addr 0x2b347bc, size 0x80, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method get_IsDebugEnabled, addr 0x2b356c4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsDebugEnabled();

  /// @brief Method set_IsDebugEnabled, addr 0x2b356cc, size 0xc, virtual true, abstract: false, final false
  inline void set_IsDebugEnabled(bool value);

  /// @brief Method get_DTDebugContext, addr 0x2b315e0, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext* get_DTDebugContext();

  static inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* New_ctor();

  /// @brief Method .ctor, addr 0x2b344b4, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TriangulationContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TriangulationContext(TriangulationContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TriangulationContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TriangulationContext(TriangulationContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TriangulationContext();

public:
  /// @brief Field <DebugContext>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext* ____DebugContext_k__BackingField;

  /// @brief Field Triangles, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* ___Triangles;

  /// @brief Field Points, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* ___Points;

  /// @brief Field <TriangulationMode>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode ____TriangulationMode_k__BackingField;

  /// @brief Field <Triangulatable>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* ____Triangulatable_k__BackingField;

  /// @brief Field <StepCount>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t ____StepCount_k__BackingField;

  /// @brief Field <IsDebugEnabled>k__BackingField, offset: 0x3c, size: 0x1, def value: None
  bool ____IsDebugEnabled_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext, ____DebugContext_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext, ___Triangles) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext, ___Points) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext, ____TriangulationMode_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext, ____Triangulatable_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext, ____StepCount_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext, ____IsDebugEnabled_k__BackingField) == 0x3c, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationContext");
