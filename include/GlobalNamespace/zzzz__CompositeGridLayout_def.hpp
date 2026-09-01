#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeGridLayout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CompositeLayoutBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CompositeGridLayout)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CompositeGridLayout;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CompositeGridLayout*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeGridLayout*, "", "CompositeGridLayout");
// Dependencies CompositeLayoutBase, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompositeGridLayout
class CORDL_TYPE CompositeGridLayout : public ::GlobalNamespace::CompositeLayoutBase {
public:
  // Declarations
  /// @brief Field _alternateOrder, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get__alternateOrder, put = __cordl_internal_set__alternateOrder)) bool _alternateOrder;

  /// @brief Field _columnStep, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get__columnStep, put = __cordl_internal_set__columnStep)) ::UnityEngine::Vector3 _columnStep;

  /// @brief Field _columns, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__columns, put = __cordl_internal_set__columns)) int32_t _columns;

  /// @brief Field _columnsFromCenter, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__columnsFromCenter, put = __cordl_internal_set__columnsFromCenter)) bool _columnsFromCenter;

  /// @brief Field _defaultRotation, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get__defaultRotation, put = __cordl_internal_set__defaultRotation)) ::UnityEngine::Vector3 _defaultRotation;

  /// @brief Field _rowStep, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get__rowStep, put = __cordl_internal_set__rowStep)) ::UnityEngine::Vector3 _rowStep;

  /// @brief Field _rowsFromCenter, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__rowsFromCenter, put = __cordl_internal_set__rowsFromCenter)) bool _rowsFromCenter;

  /// @brief Method Apply, addr 0x598db04, size 0x4, virtual true, abstract: false, final false
  inline void Apply(::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::Transform>>* childTransforms, int32_t numberOfElements, int32_t sameIdElements);

  static inline ::GlobalNamespace::CompositeGridLayout* New_ctor();

  constexpr bool const& __cordl_internal_get__alternateOrder() const;

  constexpr bool& __cordl_internal_get__alternateOrder();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__columnStep() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__columnStep();

  constexpr int32_t const& __cordl_internal_get__columns() const;

  constexpr int32_t& __cordl_internal_get__columns();

  constexpr bool const& __cordl_internal_get__columnsFromCenter() const;

  constexpr bool& __cordl_internal_get__columnsFromCenter();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__defaultRotation() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__defaultRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rowStep() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__rowStep();

  constexpr bool const& __cordl_internal_get__rowsFromCenter() const;

  constexpr bool& __cordl_internal_get__rowsFromCenter();

  constexpr void __cordl_internal_set__alternateOrder(bool value);

  constexpr void __cordl_internal_set__columnStep(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__columns(int32_t value);

  constexpr void __cordl_internal_set__columnsFromCenter(bool value);

  constexpr void __cordl_internal_set__defaultRotation(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__rowStep(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__rowsFromCenter(bool value);

  /// @brief Method .ctor, addr 0x598db08, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeGridLayout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeGridLayout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeGridLayout(CompositeGridLayout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeGridLayout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeGridLayout(CompositeGridLayout const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5821 };

  /// @brief Field _columns, offset: 0x24, size: 0x4, def value: None
  int32_t ____columns;

  /// @brief Field _columnStep, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____columnStep;

  /// @brief Field _columnsFromCenter, offset: 0x34, size: 0x1, def value: None
  bool ____columnsFromCenter;

  /// @brief Field _rowStep, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____rowStep;

  /// @brief Field _rowsFromCenter, offset: 0x44, size: 0x1, def value: None
  bool ____rowsFromCenter;

  /// @brief Field _alternateOrder, offset: 0x45, size: 0x1, def value: None
  bool ____alternateOrder;

  /// @brief Field _defaultRotation, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____defaultRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CompositeGridLayout, ____columns) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeGridLayout, ____columnStep) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeGridLayout, ____columnsFromCenter) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeGridLayout, ____rowStep) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeGridLayout, ____rowsFromCenter) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeGridLayout, ____alternateOrder) == 0x45, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeGridLayout, ____defaultRotation) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CompositeGridLayout) == 0x58, "Size mismatch!");

} // namespace GlobalNamespace
