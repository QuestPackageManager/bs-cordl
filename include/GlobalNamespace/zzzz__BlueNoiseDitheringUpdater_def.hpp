#pragma once
// IWYU pragma private; include "GlobalNamespace/BlueNoiseDitheringUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BlueNoiseDitheringUpdater)
namespace GlobalNamespace {
class BlueNoiseDithering;
}
namespace GlobalNamespace {
class RandomValueToShader;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class BlueNoiseDitheringUpdater;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BlueNoiseDitheringUpdater);
// Type: ::BlueNoiseDitheringUpdater
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BlueNoiseDitheringUpdater*
class CORDL_TYPE BlueNoiseDitheringUpdater : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _blueNoiseDithering, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__blueNoiseDithering, put = __cordl_internal_set__blueNoiseDithering))::UnityW<::GlobalNamespace::BlueNoiseDithering> _blueNoiseDithering;

  /// @brief Field _randomValueToShader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__randomValueToShader, put = __cordl_internal_set__randomValueToShader))::UnityW<::GlobalNamespace::RandomValueToShader> _randomValueToShader;

  /// @brief Method HandleCameraPreRender, addr 0x251c018, size 0x60, virtual false, abstract: false, final false
  inline void HandleCameraPreRender(::UnityEngine::Camera* camera);

  static inline ::GlobalNamespace::BlueNoiseDitheringUpdater* New_ctor();

  /// @brief Method OnDisable, addr 0x251bf2c, size 0xec, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x251bdc8, size 0x164, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr ::UnityW<::GlobalNamespace::BlueNoiseDithering> const& __cordl_internal_get__blueNoiseDithering() const;

  constexpr ::UnityW<::GlobalNamespace::BlueNoiseDithering>& __cordl_internal_get__blueNoiseDithering();

  constexpr ::UnityW<::GlobalNamespace::RandomValueToShader> const& __cordl_internal_get__randomValueToShader() const;

  constexpr ::UnityW<::GlobalNamespace::RandomValueToShader>& __cordl_internal_get__randomValueToShader();

  constexpr void __cordl_internal_set__blueNoiseDithering(::UnityW<::GlobalNamespace::BlueNoiseDithering> value);

  constexpr void __cordl_internal_set__randomValueToShader(::UnityW<::GlobalNamespace::RandomValueToShader> value);

  /// @brief Method .ctor, addr 0x251c104, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlueNoiseDitheringUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BlueNoiseDitheringUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlueNoiseDitheringUpdater(BlueNoiseDitheringUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlueNoiseDitheringUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlueNoiseDitheringUpdater(BlueNoiseDitheringUpdater const&) = delete;

  /// @brief Field _blueNoiseDithering, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BlueNoiseDithering> ____blueNoiseDithering;

  /// @brief Field _randomValueToShader, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RandomValueToShader> ____randomValueToShader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BlueNoiseDitheringUpdater, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BlueNoiseDitheringUpdater, ____blueNoiseDithering) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlueNoiseDitheringUpdater, ____randomValueToShader) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BlueNoiseDitheringUpdater);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BlueNoiseDitheringUpdater*, "", "BlueNoiseDitheringUpdater");
