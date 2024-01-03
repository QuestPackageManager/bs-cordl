#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4935)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4931))
// CS Name: ::LightGroupLinearLayouter*
class CORDL_TYPE LightGroupLinearLayouter : public ::GlobalNamespace::LightGroupSubsystem {
public:
  // Declarations
  /// @brief Field _movementStep, offset 0x20, size 0xc
  __declspec(property(get = __get__movementStep, put = __set__movementStep))::UnityEngine::Vector3 _movementStep;

  /// @brief Field _defaultRotation, offset 0x2c, size 0xc
  __declspec(property(get = __get__defaultRotation, put = __set__defaultRotation))::UnityEngine::Vector3 _defaultRotation;

  /// @brief Field _startFromCenter, offset 0x38, size 0x1
  __declspec(property(get = __get__startFromCenter, put = __set__startFromCenter)) bool _startFromCenter;

  /// @brief Convert operator to "::GlobalNamespace::IEditTimeValidated"
  constexpr operator ::GlobalNamespace::IEditTimeValidated*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IEditTimeValidated"
  constexpr ::GlobalNamespace::IEditTimeValidated* i___GlobalNamespace__IEditTimeValidated() noexcept;

  constexpr ::UnityEngine::Vector3& __get__movementStep();

  constexpr ::UnityEngine::Vector3 const& __get__movementStep() const;

  constexpr void __set__movementStep(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__defaultRotation();

  constexpr ::UnityEngine::Vector3 const& __get__defaultRotation() const;

  constexpr void __set__defaultRotation(::UnityEngine::Vector3 value);

  constexpr bool& __get__startFromCenter();

  constexpr bool const& __get__startFromCenter() const;

  constexpr void __set__startFromCenter(bool value);

  static inline ::GlobalNamespace::LightGroupLinearLayouter* New_ctor();

  /// @brief Method .ctor, addr 0x23a9920, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupLinearLayouter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupLinearLayouter(LightGroupLinearLayouter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupLinearLayouter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupLinearLayouter(LightGroupLinearLayouter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupLinearLayouter();

public:
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
