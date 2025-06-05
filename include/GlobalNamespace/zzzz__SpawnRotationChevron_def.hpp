#pragma once
// IWYU pragma private; include "GlobalNamespace/SpawnRotationChevron.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpawnRotationChevron)
namespace GlobalNamespace {
class SpawnRotationChevron_Pool;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class SpawnRotationChevron;
}
namespace GlobalNamespace {
class SpawnRotationChevron_Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SpawnRotationChevron);
MARK_REF_PTR_T(::GlobalNamespace::SpawnRotationChevron_Pool);
// Dependencies Zenject.MonoMemoryPool`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpawnRotationChevron/Pool
class CORDL_TYPE SpawnRotationChevron_Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::SpawnRotationChevron>> {
public:
  // Declarations
  static inline ::GlobalNamespace::SpawnRotationChevron_Pool* New_ctor();

  /// @brief Method .ctor, addr 0x3b9da24, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpawnRotationChevron_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpawnRotationChevron_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpawnRotationChevron_Pool(SpawnRotationChevron_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpawnRotationChevron_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpawnRotationChevron_Pool(SpawnRotationChevron_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4369 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpawnRotationChevron_Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LightWithIdMonoBehaviour, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpawnRotationChevron
class CORDL_TYPE SpawnRotationChevron : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  using Pool = ::GlobalNamespace::SpawnRotationChevron_Pool;

  /// @brief Field _color, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _lightAmount, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__lightAmount, put = __cordl_internal_set__lightAmount)) float_t _lightAmount;

  /// @brief Field _lights, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__lights,
                      put = __cordl_internal_set__lights)) ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>
      _lights;

  /// @brief Method ColorWasSet, addr 0x3b9d998, size 0xc, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::SpawnRotationChevron* New_ctor();

  /// @brief Method SetLightAmount, addr 0x3b9da14, size 0x8, virtual false, abstract: false, final false
  inline void SetLightAmount(float_t amount);

  /// @brief Method UpdateLights, addr 0x3b9d9a4, size 0x70, virtual false, abstract: false, final false
  inline void UpdateLights();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr float_t const& __cordl_internal_get__lightAmount() const;

  constexpr float_t& __cordl_internal_get__lightAmount();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> const& __cordl_internal_get__lights() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>& __cordl_internal_get__lights();

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__lightAmount(float_t value);

  constexpr void __cordl_internal_set__lights(::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> value);

  /// @brief Method .ctor, addr 0x3b9da1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpawnRotationChevron();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpawnRotationChevron", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpawnRotationChevron(SpawnRotationChevron&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpawnRotationChevron", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpawnRotationChevron(SpawnRotationChevron const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4370 };

  /// @brief Field _lights, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> ____lights;

  /// @brief Field _color, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _lightAmount, offset: 0x50, size: 0x4, def value: None
  float_t ____lightAmount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpawnRotationChevron, ____lights) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevron, ____color) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevron, ____lightAmount) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpawnRotationChevron, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpawnRotationChevron);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnRotationChevron*, "", "SpawnRotationChevron");
NEED_NO_BOX(::GlobalNamespace::SpawnRotationChevron_Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnRotationChevron_Pool*, "", "SpawnRotationChevron/Pool");
