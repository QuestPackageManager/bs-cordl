#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupRotationSpreadLayouter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightGroupSubsystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(LightGroupRotationSpreadLayouter)
// Forward declare root types
namespace GlobalNamespace {
class LightGroupRotationSpreadLayouter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightGroupRotationSpreadLayouter);
// Dependencies LightGroupSubsystem, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightGroupRotationSpreadLayouter
class CORDL_TYPE LightGroupRotationSpreadLayouter : public ::GlobalNamespace::LightGroupSubsystem {
public:
  // Declarations
  /// @brief Field _rotationStep, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get__rotationStep, put = __cordl_internal_set__rotationStep)) ::UnityEngine::Vector3 _rotationStep;

  /// @brief Field _startFromCenter, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__startFromCenter, put = __cordl_internal_set__startFromCenter)) bool _startFromCenter;

  static inline ::GlobalNamespace::LightGroupRotationSpreadLayouter* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rotationStep() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__rotationStep();

  constexpr bool const& __cordl_internal_get__startFromCenter() const;

  constexpr bool& __cordl_internal_get__startFromCenter();

  constexpr void __cordl_internal_set__rotationStep(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__startFromCenter(bool value);

  /// @brief Method .ctor, addr 0x3b9f044, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupRotationSpreadLayouter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightGroupRotationSpreadLayouter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupRotationSpreadLayouter(LightGroupRotationSpreadLayouter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupRotationSpreadLayouter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupRotationSpreadLayouter(LightGroupRotationSpreadLayouter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4299 };

  /// @brief Field _rotationStep, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____rotationStep;

  /// @brief Field _startFromCenter, offset: 0x34, size: 0x1, def value: None
  bool ____startFromCenter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightGroupRotationSpreadLayouter, ____rotationStep) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupRotationSpreadLayouter, ____startFromCenter) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroupRotationSpreadLayouter, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightGroupRotationSpreadLayouter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupRotationSpreadLayouter*, "", "LightGroupRotationSpreadLayouter");
