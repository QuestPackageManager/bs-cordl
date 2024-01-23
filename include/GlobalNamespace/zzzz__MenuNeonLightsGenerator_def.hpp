#pragma once
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
// Type: ::MenuNeonLightsGenerator
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10249))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4693))
// CS Name: ::MenuNeonLightsGenerator*
class CORDL_TYPE MenuNeonLightsGenerator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _generate, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__generate, put = __cordl_internal_set__generate)) bool _generate;

  /// @brief Field _radius, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__radius, put = __cordl_internal_set__radius)) float_t _radius;

  /// @brief Field _angle, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__angle, put = __cordl_internal_set__angle)) float_t _angle;

  /// @brief Field _numberOfElements, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfElements, put = __cordl_internal_set__numberOfElements)) int32_t _numberOfElements;

  /// @brief Field _intensityCurve, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__intensityCurve, put = __cordl_internal_set__intensityCurve))::UnityEngine::AnimationCurve* _intensityCurve;

  /// @brief Field _intensityMultiplier, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__intensityMultiplier, put = __cordl_internal_set__intensityMultiplier)) float_t _intensityMultiplier;

  /// @brief Field _lengthCurve, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__lengthCurve, put = __cordl_internal_set__lengthCurve))::UnityEngine::AnimationCurve* _lengthCurve;

  /// @brief Field _lengthMultiplier, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__lengthMultiplier, put = __cordl_internal_set__lengthMultiplier)) float_t _lengthMultiplier;

  /// @brief Field _widthCurve, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__widthCurve, put = __cordl_internal_set__widthCurve))::UnityEngine::AnimationCurve* _widthCurve;

  /// @brief Field _widthMultiplier, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__widthMultiplier, put = __cordl_internal_set__widthMultiplier)) float_t _widthMultiplier;

  /// @brief Field _neonLightPrefab, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__neonLightPrefab, put = __cordl_internal_set__neonLightPrefab))::UnityW<::GlobalNamespace::TubeBloomPrePassLight> _neonLightPrefab;

  /// @brief Field _afterSpawnRotation, offset 0x60, size 0xc
  __declspec(property(get = __cordl_internal_get__afterSpawnRotation, put = __cordl_internal_set__afterSpawnRotation))::UnityEngine::Vector3 _afterSpawnRotation;

  constexpr bool& __cordl_internal_get__generate();

  constexpr bool const& __cordl_internal_get__generate() const;

  constexpr void __cordl_internal_set__generate(bool value);

  constexpr float_t& __cordl_internal_get__radius();

  constexpr float_t const& __cordl_internal_get__radius() const;

  constexpr void __cordl_internal_set__radius(float_t value);

  constexpr float_t& __cordl_internal_get__angle();

  constexpr float_t const& __cordl_internal_get__angle() const;

  constexpr void __cordl_internal_set__angle(float_t value);

  constexpr int32_t& __cordl_internal_get__numberOfElements();

  constexpr int32_t const& __cordl_internal_get__numberOfElements() const;

  constexpr void __cordl_internal_set__numberOfElements(int32_t value);

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__intensityCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__intensityCurve() const;

  constexpr void __cordl_internal_set__intensityCurve(::UnityEngine::AnimationCurve* value);

  constexpr float_t& __cordl_internal_get__intensityMultiplier();

  constexpr float_t const& __cordl_internal_get__intensityMultiplier() const;

  constexpr void __cordl_internal_set__intensityMultiplier(float_t value);

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__lengthCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__lengthCurve() const;

  constexpr void __cordl_internal_set__lengthCurve(::UnityEngine::AnimationCurve* value);

  constexpr float_t& __cordl_internal_get__lengthMultiplier();

  constexpr float_t const& __cordl_internal_get__lengthMultiplier() const;

  constexpr void __cordl_internal_set__lengthMultiplier(float_t value);

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__widthCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__widthCurve() const;

  constexpr void __cordl_internal_set__widthCurve(::UnityEngine::AnimationCurve* value);

  constexpr float_t& __cordl_internal_get__widthMultiplier();

  constexpr float_t const& __cordl_internal_get__widthMultiplier() const;

  constexpr void __cordl_internal_set__widthMultiplier(float_t value);

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& __cordl_internal_get__neonLightPrefab();

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& __cordl_internal_get__neonLightPrefab() const;

  constexpr void __cordl_internal_set__neonLightPrefab(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__afterSpawnRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__afterSpawnRotation() const;

  constexpr void __cordl_internal_set__afterSpawnRotation(::UnityEngine::Vector3 value);

  static inline ::GlobalNamespace::MenuNeonLightsGenerator* New_ctor();

  /// @brief Method .ctor, addr 0x23765e4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MenuNeonLightsGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuNeonLightsGenerator(MenuNeonLightsGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuNeonLightsGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuNeonLightsGenerator(MenuNeonLightsGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuNeonLightsGenerator();

public:
  /// @brief Field _generate, offset: 0x18, size: 0x1, def value: None
  bool ____generate;

  /// @brief Field _radius, offset: 0x1c, size: 0x4, def value: None
  float_t ____radius;

  /// @brief Field _angle, offset: 0x20, size: 0x4, def value: None
  float_t ____angle;

  /// @brief Field _numberOfElements, offset: 0x24, size: 0x4, def value: None
  int32_t ____numberOfElements;

  /// @brief Field _intensityCurve, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____intensityCurve;

  /// @brief Field _intensityMultiplier, offset: 0x30, size: 0x4, def value: None
  float_t ____intensityMultiplier;

  /// @brief Field _lengthCurve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____lengthCurve;

  /// @brief Field _lengthMultiplier, offset: 0x40, size: 0x4, def value: None
  float_t ____lengthMultiplier;

  /// @brief Field _widthCurve, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____widthCurve;

  /// @brief Field _widthMultiplier, offset: 0x50, size: 0x4, def value: None
  float_t ____widthMultiplier;

  /// @brief Field _neonLightPrefab, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> ____neonLightPrefab;

  /// @brief Field _afterSpawnRotation, offset: 0x60, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____afterSpawnRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuNeonLightsGenerator, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____generate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____radius) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____angle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____numberOfElements) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____intensityCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____intensityMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____lengthCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____lengthMultiplier) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____widthCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____widthMultiplier) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____neonLightPrefab) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuNeonLightsGenerator, ____afterSpawnRotation) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuNeonLightsGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuNeonLightsGenerator*, "", "MenuNeonLightsGenerator");
