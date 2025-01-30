#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatLine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatLine)
namespace GlobalNamespace {
class BeatLine_Pool;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace GlobalNamespace {
class VariableMovementDataProvider;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatLine;
}
namespace GlobalNamespace {
class BeatLine_Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatLine);
MARK_REF_PTR_T(::GlobalNamespace::BeatLine_Pool);
// Dependencies Zenject.MonoMemoryPool`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatLine/Pool
class CORDL_TYPE BeatLine_Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::BeatLine>> {
public:
  // Declarations
  static inline ::GlobalNamespace::BeatLine_Pool* New_ctor();

  /// @brief Method .ctor, addr 0x3adade4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatLine_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatLine_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatLine_Pool(BeatLine_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatLine_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatLine_Pool(BeatLine_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4051 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatLine_Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LightWithIdMonoBehaviour, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatLine
class CORDL_TYPE BeatLine : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  using Pool = ::GlobalNamespace::BeatLine_Pool;

  /// @brief Field _alphaMul, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__alphaMul, put = __cordl_internal_set__alphaMul)) float_t _alphaMul;

  /// @brief Field _arriveFadeCurve, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__arriveFadeCurve, put = __cordl_internal_set__arriveFadeCurve)) ::UnityEngine::AnimationCurve* _arriveFadeCurve;

  /// @brief Field _color, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _highlightTimes, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightTimes, put = __cordl_internal_set__highlightTimes)) ::System::Collections::Generic::List_1<float_t>* _highlightTimes;

  /// @brief Field _jumpFadeCurve, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__jumpFadeCurve, put = __cordl_internal_set__jumpFadeCurve)) ::UnityEngine::AnimationCurve* _jumpFadeCurve;

  /// @brief Field _maxAlpha, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__maxAlpha, put = __cordl_internal_set__maxAlpha)) float_t _maxAlpha;

  /// @brief Field _rotation, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__rotation, put = __cordl_internal_set__rotation)) float_t _rotation;

  /// @brief Field _tubeBloomPrePassLight, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__tubeBloomPrePassLight, put = __cordl_internal_set__tubeBloomPrePassLight)) ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> _tubeBloomPrePassLight;

  /// @brief Field _variableMovementDataProvider, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__variableMovementDataProvider,
                      put = __cordl_internal_set__variableMovementDataProvider)) ::GlobalNamespace::VariableMovementDataProvider* _variableMovementDataProvider;

  __declspec(property(get = get_isFinished)) bool isFinished;

  __declspec(property(get = get_rotation)) float_t rotation;

  /// @brief Method AddHighlight, addr 0x3adaa98, size 0xb0, virtual false, abstract: false, final false
  inline void AddHighlight(float_t noteTime);

  /// @brief Method ColorWasSet, addr 0x3adaa8c, size 0xc, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  /// @brief Method Init, addr 0x3ada9c0, size 0xcc, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::Vector3 position, float_t rotation);

  /// @brief Method ManualUpdate, addr 0x3adab48, size 0x1dc, virtual false, abstract: false, final false
  inline void ManualUpdate(float_t songTime);

  static inline ::GlobalNamespace::BeatLine* New_ctor();

  constexpr float_t const& __cordl_internal_get__alphaMul() const;

  constexpr float_t& __cordl_internal_get__alphaMul();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__arriveFadeCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__arriveFadeCurve();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get__highlightTimes() const;

  constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get__highlightTimes();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__jumpFadeCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__jumpFadeCurve();

  constexpr float_t const& __cordl_internal_get__maxAlpha() const;

  constexpr float_t& __cordl_internal_get__maxAlpha();

  constexpr float_t const& __cordl_internal_get__rotation() const;

  constexpr float_t& __cordl_internal_get__rotation();

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& __cordl_internal_get__tubeBloomPrePassLight() const;

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& __cordl_internal_get__tubeBloomPrePassLight();

  constexpr ::GlobalNamespace::VariableMovementDataProvider* const& __cordl_internal_get__variableMovementDataProvider() const;

  constexpr ::GlobalNamespace::VariableMovementDataProvider*& __cordl_internal_get__variableMovementDataProvider();

  constexpr void __cordl_internal_set__alphaMul(float_t value);

  constexpr void __cordl_internal_set__arriveFadeCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__highlightTimes(::System::Collections::Generic::List_1<float_t>* value);

  constexpr void __cordl_internal_set__jumpFadeCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__maxAlpha(float_t value);

  constexpr void __cordl_internal_set__rotation(float_t value);

  constexpr void __cordl_internal_set__tubeBloomPrePassLight(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value);

  constexpr void __cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::VariableMovementDataProvider* value);

  /// @brief Method .ctor, addr 0x3adad24, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isFinished, addr 0x3ada968, size 0x50, virtual false, abstract: false, final false
  inline bool get_isFinished();

  /// @brief Method get_rotation, addr 0x3ada9b8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_rotation();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatLine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatLine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatLine(BeatLine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatLine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatLine(BeatLine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4052 };

  /// @brief Field _tubeBloomPrePassLight, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> ____tubeBloomPrePassLight;

  /// @brief Field _arriveFadeCurve, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____arriveFadeCurve;

  /// @brief Field _jumpFadeCurve, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____jumpFadeCurve;

  /// @brief Field _alphaMul, offset: 0x50, size: 0x4, def value: None
  float_t ____alphaMul;

  /// @brief Field _maxAlpha, offset: 0x54, size: 0x4, def value: None
  float_t ____maxAlpha;

  /// @brief Field _variableMovementDataProvider, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::VariableMovementDataProvider* ____variableMovementDataProvider;

  /// @brief Field _highlightTimes, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<float_t>* ____highlightTimes;

  /// @brief Field _color, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _rotation, offset: 0x78, size: 0x4, def value: None
  float_t ____rotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatLine, ____tubeBloomPrePassLight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLine, ____arriveFadeCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLine, ____jumpFadeCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLine, ____alphaMul) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLine, ____maxAlpha) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLine, ____variableMovementDataProvider) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLine, ____highlightTimes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLine, ____color) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLine, ____rotation) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatLine, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatLine);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatLine*, "", "BeatLine");
NEED_NO_BOX(::GlobalNamespace::BeatLine_Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatLine_Pool*, "", "BeatLine/Pool");
