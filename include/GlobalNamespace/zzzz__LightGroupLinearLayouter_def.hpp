#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupLinearLayouter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightGroupSubsystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(LightGroupLinearLayouter)
namespace GlobalNamespace {
class IEditTimeValidated;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroupLinearLayouter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightGroupLinearLayouter);
// Type: ::LightGroupLinearLayouter
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightGroupLinearLayouter*
class CORDL_TYPE LightGroupLinearLayouter : public ::GlobalNamespace::LightGroupSubsystem {
public:
  // Declarations
  /// @brief Field _defaultRotation, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get__defaultRotation, put = __cordl_internal_set__defaultRotation))::UnityEngine::Vector3 _defaultRotation;

  /// @brief Field _movementStep, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get__movementStep, put = __cordl_internal_set__movementStep))::UnityEngine::Vector3 _movementStep;

  /// @brief Field _startFromCenter, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__startFromCenter, put = __cordl_internal_set__startFromCenter)) bool _startFromCenter;

  /// @brief Convert operator to "::GlobalNamespace::IEditTimeValidated"
  constexpr operator ::GlobalNamespace::IEditTimeValidated*() noexcept;

  static inline ::GlobalNamespace::LightGroupLinearLayouter* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__defaultRotation() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__defaultRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__movementStep() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__movementStep();

  constexpr bool const& __cordl_internal_get__startFromCenter() const;

  constexpr bool& __cordl_internal_get__startFromCenter();

  constexpr void __cordl_internal_set__defaultRotation(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__movementStep(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__startFromCenter(bool value);

  /// @brief Method .ctor, addr 0x26e0d9c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IEditTimeValidated"
  constexpr ::GlobalNamespace::IEditTimeValidated* i___GlobalNamespace__IEditTimeValidated() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupLinearLayouter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightGroupLinearLayouter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupLinearLayouter(LightGroupLinearLayouter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupLinearLayouter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupLinearLayouter(LightGroupLinearLayouter const&) = delete;

  /// @brief Field _movementStep, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____movementStep;

  /// @brief Field _defaultRotation, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____defaultRotation;

  /// @brief Field _startFromCenter, offset: 0x38, size: 0x1, def value: None
  bool ____startFromCenter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroupLinearLayouter, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupLinearLayouter, ____movementStep) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupLinearLayouter, ____defaultRotation) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupLinearLayouter, ____startFromCenter) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightGroupLinearLayouter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupLinearLayouter*, "", "LightGroupLinearLayouter");
