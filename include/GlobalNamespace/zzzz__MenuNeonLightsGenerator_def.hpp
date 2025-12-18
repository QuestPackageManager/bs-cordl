#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuNeonLightsGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MenuNeonLightsGenerator)
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuNeonLightsGenerator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MenuNeonLightsGenerator);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuNeonLightsGenerator
class CORDL_TYPE MenuNeonLightsGenerator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _afterSpawnRotation, offset 0x68, size 0xc
  __declspec(property(get = __cordl_internal_get__afterSpawnRotation, put = __cordl_internal_set__afterSpawnRotation)) ::UnityEngine::Vector3 _afterSpawnRotation;

  /// @brief Field _angle, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__angle, put = __cordl_internal_set__angle)) float_t _angle;

  /// @brief Field _generate, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__generate, put = __cordl_internal_set__generate)) bool _generate;

  /// @brief Field _intensityCurve, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__intensityCurve, put = __cordl_internal_set__intensityCurve)) ::UnityEngine::AnimationCurve* _intensityCurve;

  /// @brief Field _intensityMultiplier, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__intensityMultiplier, put = __cordl_internal_set__intensityMultiplier)) float_t _intensityMultiplier;

  /// @brief Field _lengthCurve, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__lengthCurve, put = __cordl_internal_set__lengthCurve)) ::UnityEngine::AnimationCurve* _lengthCurve;

  /// @brief Field _lengthMultiplier, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__lengthMultiplier, put = __cordl_internal_set__lengthMultiplier)) float_t _lengthMultiplier;

  /// @brief Field _neonLightPrefab, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__neonLightPrefab, put = __cordl_internal_set__neonLightPrefab)) ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> _neonLightPrefab;

  /// @brief Field _numberOfElements, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfElements, put = __cordl_internal_set__numberOfElements)) int32_t _numberOfElements;

  /// @brief Field _radius, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__radius, put = __cordl_internal_set__radius)) float_t _radius;

  /// @brief Field _widthCurve, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__widthCurve, put = __cordl_internal_set__widthCurve)) ::UnityEngine::AnimationCurve* _widthCurve;

  /// @brief Field _widthMultiplier, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__widthMultiplier, put = __cordl_internal_set__widthMultiplier)) float_t _widthMultiplier;

  static inline ::GlobalNamespace::MenuNeonLightsGenerator* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__afterSpawnRotation() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__afterSpawnRotation();

  constexpr float_t const& __cordl_internal_get__angle() const;

  constexpr float_t& __cordl_internal_get__angle();

  constexpr bool const& __cordl_internal_get__generate() const;

  constexpr bool& __cordl_internal_get__generate();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__intensityCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__intensityCurve();

  constexpr float_t const& __cordl_internal_get__intensityMultiplier() const;

  constexpr float_t& __cordl_internal_get__intensityMultiplier();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__lengthCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__lengthCurve();

  constexpr float_t const& __cordl_internal_get__lengthMultiplier() const;

  constexpr float_t& __cordl_internal_get__lengthMultiplier();

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& __cordl_internal_get__neonLightPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& __cordl_internal_get__neonLightPrefab();

  constexpr int32_t const& __cordl_internal_get__numberOfElements() const;

  constexpr int32_t& __cordl_internal_get__numberOfElements();

  constexpr float_t const& __cordl_internal_get__radius() const;

  constexpr float_t& __cordl_internal_get__radius();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__widthCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__widthCurve();

  constexpr float_t const& __cordl_internal_get__widthMultiplier() const;

  constexpr float_t& __cordl_internal_get__widthMultiplier();

  constexpr void __cordl_internal_set__afterSpawnRotation(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__angle(float_t value);

  constexpr void __cordl_internal_set__generate(bool value);

  constexpr void __cordl_internal_set__intensityCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__intensityMultiplier(float_t value);

  constexpr void __cordl_internal_set__lengthCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__lengthMultiplier(float_t value);

  constexpr void __cordl_internal_set__neonLightPrefab(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value);

  constexpr void __cordl_internal_set__numberOfElements(int32_t value);

  constexpr void __cordl_internal_set__radius(float_t value);

  constexpr void __cordl_internal_set__widthCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__widthMultiplier(float_t value);

  /// @brief Method .ctor, addr 0x57143fc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuNeonLightsGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuNeonLightsGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuNeonLightsGenerator(MenuNeonLightsGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuNeonLightsGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuNeonLightsGenerator(MenuNeonLightsGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5613 };

  /// @brief Field _generate, offset: 0x20, size: 0x1, def value: None
  bool ____generate;

  /// @brief Field _radius, offset: 0x24, size: 0x4, def value: None
  float_t ____radius;

  /// @brief Field _angle, offset: 0x28, size: 0x4, def value: None
  float_t ____angle;

  /// @brief Field _numberOfElements, offset: 0x2c, size: 0x4, def value: None
  int32_t ____numberOfElements;

  /// @brief Field _intensityCurve, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____intensityCurve;

  /// @brief Field _intensityMultiplier, offset: 0x38, size: 0x4, def value: None
  float_t ____intensityMultiplier;

  /// @brief Field _lengthCurve, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____lengthCurve;

  /// @brief Field _lengthMultiplier, offset: 0x48, size: 0x4, def value: None
  float_t ____lengthMultiplier;

  /// @brief Field _widthCurve, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____widthCurve;

  /// @brief Field _widthMultiplier, offset: 0x58, size: 0x4, def value: None
  float_t ____widthMultiplier;

  /// @brief Field _neonLightPrefab, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> ____neonLightPrefab;

  /// @brief Field _afterSpawnRotation, offset: 0x68, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____afterSpawnRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____generate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____radius) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____angle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____numberOfElements) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____intensityCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____intensityMultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____lengthCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____lengthMultiplier) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____widthCurve) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____widthMultiplier) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____neonLightPrefab) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____afterSpawnRotation) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuNeonLightsGenerator, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuNeonLightsGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuNeonLightsGenerator*, "", "MenuNeonLightsGenerator");
