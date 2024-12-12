#pragma once
// IWYU pragma private; include "GlobalNamespace/FlyingGameHUDRotation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlyingGameHUDRotation)
namespace GlobalNamespace {
class BeatLineManager;
}
namespace GlobalNamespace {
class EnvironmentSpawnRotation;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingGameHUDRotation;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlyingGameHUDRotation);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlyingGameHUDRotation
class CORDL_TYPE FlyingGameHUDRotation : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatLineManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatLineManager, put = __cordl_internal_set__beatLineManager)) ::UnityW<::GlobalNamespace::BeatLineManager> _beatLineManager;

  /// @brief Field _environmentSpawnRotation, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentSpawnRotation, put = __cordl_internal_set__environmentSpawnRotation)) ::UnityW<::GlobalNamespace::EnvironmentSpawnRotation>
      _environmentSpawnRotation;

  /// @brief Field _prevYAngle, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__prevYAngle, put = __cordl_internal_set__prevYAngle)) float_t _prevYAngle;

  /// @brief Field _smooth, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__smooth, put = __cordl_internal_set__smooth)) float_t _smooth;

  /// @brief Field _yAngle, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__yAngle, put = __cordl_internal_set__yAngle)) float_t _yAngle;

  /// @brief Method FixedUpdate, addr 0x3b985fc, size 0x178, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method LateUpdate, addr 0x3b98774, size 0x88, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::FlyingGameHUDRotation* New_ctor();

  /// @brief Method Start, addr 0x3b98520, size 0xdc, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::BeatLineManager> const& __cordl_internal_get__beatLineManager() const;

  constexpr ::UnityW<::GlobalNamespace::BeatLineManager>& __cordl_internal_get__beatLineManager();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentSpawnRotation> const& __cordl_internal_get__environmentSpawnRotation() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentSpawnRotation>& __cordl_internal_get__environmentSpawnRotation();

  constexpr float_t const& __cordl_internal_get__prevYAngle() const;

  constexpr float_t& __cordl_internal_get__prevYAngle();

  constexpr float_t const& __cordl_internal_get__smooth() const;

  constexpr float_t& __cordl_internal_get__smooth();

  constexpr float_t const& __cordl_internal_get__yAngle() const;

  constexpr float_t& __cordl_internal_get__yAngle();

  constexpr void __cordl_internal_set__beatLineManager(::UnityW<::GlobalNamespace::BeatLineManager> value);

  constexpr void __cordl_internal_set__environmentSpawnRotation(::UnityW<::GlobalNamespace::EnvironmentSpawnRotation> value);

  constexpr void __cordl_internal_set__prevYAngle(float_t value);

  constexpr void __cordl_internal_set__smooth(float_t value);

  constexpr void __cordl_internal_set__yAngle(float_t value);

  /// @brief Method .ctor, addr 0x3b987fc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlyingGameHUDRotation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlyingGameHUDRotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlyingGameHUDRotation(FlyingGameHUDRotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlyingGameHUDRotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlyingGameHUDRotation(FlyingGameHUDRotation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4358 };

  /// @brief Field _smooth, offset: 0x20, size: 0x4, def value: None
  float_t ____smooth;

  /// @brief Field _beatLineManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatLineManager> ____beatLineManager;

  /// @brief Field _environmentSpawnRotation, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentSpawnRotation> ____environmentSpawnRotation;

  /// @brief Field _prevYAngle, offset: 0x38, size: 0x4, def value: None
  float_t ____prevYAngle;

  /// @brief Field _yAngle, offset: 0x3c, size: 0x4, def value: None
  float_t ____yAngle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlyingGameHUDRotation, ____smooth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingGameHUDRotation, ____beatLineManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingGameHUDRotation, ____environmentSpawnRotation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingGameHUDRotation, ____prevYAngle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingGameHUDRotation, ____yAngle) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingGameHUDRotation, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlyingGameHUDRotation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingGameHUDRotation*, "", "FlyingGameHUDRotation");
