#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeRotationSpreadLayout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CompositeLayoutBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CompositeRotationSpreadLayout)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CompositeRotationSpreadLayout;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CompositeRotationSpreadLayout*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeRotationSpreadLayout*, "", "CompositeRotationSpreadLayout");
// Dependencies CompositeLayoutBase, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompositeRotationSpreadLayout
class CORDL_TYPE CompositeRotationSpreadLayout : public ::GlobalNamespace::CompositeLayoutBase {
public:
  // Declarations
  /// @brief Field _rotationStep, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get__rotationStep, put = __cordl_internal_set__rotationStep)) ::UnityEngine::Vector3 _rotationStep;

  /// @brief Field _startFromCenter, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__startFromCenter, put = __cordl_internal_set__startFromCenter)) bool _startFromCenter;

  /// @brief Method Apply, addr 0x5993388, size 0x4, virtual true, abstract: false, final false
  inline void Apply(::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::Transform>>* childTransforms, int32_t numberOfElements, int32_t sameIdElements);

  static inline ::GlobalNamespace::CompositeRotationSpreadLayout* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rotationStep() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__rotationStep();

  constexpr bool const& __cordl_internal_get__startFromCenter() const;

  constexpr bool& __cordl_internal_get__startFromCenter();

  constexpr void __cordl_internal_set__rotationStep(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__startFromCenter(bool value);

  /// @brief Method .ctor, addr 0x599338c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeRotationSpreadLayout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeRotationSpreadLayout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeRotationSpreadLayout(CompositeRotationSpreadLayout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeRotationSpreadLayout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeRotationSpreadLayout(CompositeRotationSpreadLayout const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5833 };

  /// @brief Field _rotationStep, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____rotationStep;

  /// @brief Field _startFromCenter, offset: 0x30, size: 0x1, def value: None
  bool ____startFromCenter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CompositeRotationSpreadLayout, ____rotationStep) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeRotationSpreadLayout, ____startFromCenter) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CompositeRotationSpreadLayout) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
