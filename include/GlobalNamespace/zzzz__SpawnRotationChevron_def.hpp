#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpawnRotationChevron)
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace GlobalNamespace {
class __SpawnRotationChevron__Pool;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class SpawnRotationChevron;
}
namespace GlobalNamespace {
class __SpawnRotationChevron__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SpawnRotationChevron);
MARK_REF_PTR_T(::GlobalNamespace::__SpawnRotationChevron__Pool);
// Type: ::SpawnRotationChevron
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SpawnRotationChevron*
class CORDL_TYPE SpawnRotationChevron : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__SpawnRotationChevron__Pool;

  /// @brief Field _color, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color))::UnityEngine::Color _color;

  /// @brief Field _lightAmount, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__lightAmount, put = __cordl_internal_set__lightAmount)) float_t _lightAmount;

  /// @brief Field _lights, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lights,
                      put = __cordl_internal_set__lights))::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> _lights;

  /// @brief Method ColorWasSet, addr 0x24ab3f0, size 0xc, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::SpawnRotationChevron* New_ctor();

  /// @brief Method SetLightAmount, addr 0x24ab46c, size 0x8, virtual false, abstract: false, final false
  inline void SetLightAmount(float_t amount);

  /// @brief Method UpdateLights, addr 0x24ab3fc, size 0x70, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x24ab474, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _lights, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> ____lights;

  /// @brief Field _color, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _lightAmount, offset: 0x48, size: 0x4, def value: None
  float_t ____lightAmount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpawnRotationChevron, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevron, ____lights) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevron, ____color) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevron, ____lightAmount) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SpawnRotationChevron::Pool*
class CORDL_TYPE __SpawnRotationChevron__Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::SpawnRotationChevron>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__SpawnRotationChevron__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x24ab47c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SpawnRotationChevron__Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SpawnRotationChevron__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SpawnRotationChevron__Pool(__SpawnRotationChevron__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SpawnRotationChevron__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SpawnRotationChevron__Pool(__SpawnRotationChevron__Pool const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SpawnRotationChevron__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpawnRotationChevron);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnRotationChevron*, "", "SpawnRotationChevron");
NEED_NO_BOX(::GlobalNamespace::__SpawnRotationChevron__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SpawnRotationChevron__Pool*, "", "SpawnRotationChevron/Pool");
