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
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class __SpawnRotationChevron__Pool;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(14542))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4995))
// CS Name: ::SpawnRotationChevron*
class CORDL_TYPE SpawnRotationChevron : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__SpawnRotationChevron__Pool;

  /// @brief Field _lights, offset 0x30, size 0x8
  __declspec(property(get = __get__lights, put = __set__lights))::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> _lights;

  /// @brief Field _color, offset 0x38, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  /// @brief Field _lightAmount, offset 0x48, size 0x4
  __declspec(property(get = __get__lightAmount, put = __set__lightAmount)) float_t _lightAmount;

  constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>& __get__lights();

  constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> const& __get__lights() const;

  constexpr void __set__lights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> value);

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  constexpr float_t& __get__lightAmount();

  constexpr float_t const& __get__lightAmount() const;

  constexpr void __set__lightAmount(float_t value);

  /// @brief Method ColorWasSet addr 0x23b5650 size 0xc virtual true final false
  inline void ColorWasSet(::UnityEngine::Color color);

  /// @brief Method SetLightAmount addr 0x23b56cc size 0x8 virtual false final false
  inline void SetLightAmount(float_t amount);

  /// @brief Method UpdateLights addr 0x23b565c size 0x70 virtual false final false
  inline void UpdateLights();

  static inline ::GlobalNamespace::SpawnRotationChevron* New_ctor();

  /// @brief Method .ctor addr 0x23b56d4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SpawnRotationChevron", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpawnRotationChevron(SpawnRotationChevron&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpawnRotationChevron", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpawnRotationChevron(SpawnRotationChevron const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpawnRotationChevron();

public:
  /// @brief Field _lights, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> ____lights;

  /// @brief Field _color, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _lightAmount, offset: 0x48, size: 0x4, def value: None
  float_t ____lightAmount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpawnRotationChevron, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11050)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 2827 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4995))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4994)) CS Name: ::SpawnRotationChevron::Pool*
class CORDL_TYPE __SpawnRotationChevron__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::SpawnRotationChevron*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__SpawnRotationChevron__Pool* New_ctor();

  /// @brief Method .ctor addr 0x23b56dc size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SpawnRotationChevron__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SpawnRotationChevron__Pool(__SpawnRotationChevron__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SpawnRotationChevron__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SpawnRotationChevron__Pool(__SpawnRotationChevron__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SpawnRotationChevron__Pool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SpawnRotationChevron__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpawnRotationChevron);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnRotationChevron*, "", "SpawnRotationChevron");
NEED_NO_BOX(::GlobalNamespace::__SpawnRotationChevron__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SpawnRotationChevron__Pool*, "", "SpawnRotationChevron/Pool");
