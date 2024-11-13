#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatLine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(BeatLine)
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace GlobalNamespace {
struct __BeatLine__HighlightData;
}
namespace GlobalNamespace {
class __BeatLine__Pool;
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
class __BeatLine__Pool;
}
namespace GlobalNamespace {
struct __BeatLine__HighlightData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatLine);
MARK_REF_PTR_T(::GlobalNamespace::__BeatLine__Pool);
MARK_VAL_T(::GlobalNamespace::__BeatLine__HighlightData);
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatLine::Pool*
class CORDL_TYPE __BeatLine__Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::BeatLine>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__BeatLine__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x3a7f810, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatLine__Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatLine__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatLine__Pool(__BeatLine__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatLine__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatLine__Pool(__BeatLine__Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4038 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatLine__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HighlightData
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatLine::HighlightData
struct CORDL_TYPE __BeatLine__HighlightData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatLine__HighlightData();

  // Ctor Parameters [CppParam { name: "startTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "arriveDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "halfJumpDuration", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __BeatLine__HighlightData(float_t startTime, float_t arriveDuration, float_t halfJumpDuration) noexcept;

  /// @brief Field startTime, offset: 0x0, size: 0x4, def value: None
  float_t startTime;

  /// @brief Field arriveDuration, offset: 0x4, size: 0x4, def value: None
  float_t arriveDuration;

  /// @brief Field halfJumpDuration, offset: 0x8, size: 0x4, def value: None
  float_t halfJumpDuration;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4039 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatLine__HighlightData, 0xc>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatLine__HighlightData, startTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatLine__HighlightData, arriveDuration) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatLine__HighlightData, halfJumpDuration) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatLine
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 116, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatLine*
class CORDL_TYPE BeatLine : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  using HighlightData = ::GlobalNamespace::__BeatLine__HighlightData;

  using Pool = ::GlobalNamespace::__BeatLine__Pool;

  /// @brief Field _alphaMul, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__alphaMul, put = __cordl_internal_set__alphaMul)) float_t _alphaMul;

  /// @brief Field _arriveFadeCurve, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__arriveFadeCurve, put = __cordl_internal_set__arriveFadeCurve)) ::UnityEngine::AnimationCurve* _arriveFadeCurve;

  /// @brief Field _color, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _highlights, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__highlights,
                      put = __cordl_internal_set__highlights)) ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatLine__HighlightData>* _highlights;

  /// @brief Field _jumpFadeCurve, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__jumpFadeCurve, put = __cordl_internal_set__jumpFadeCurve)) ::UnityEngine::AnimationCurve* _jumpFadeCurve;

  /// @brief Field _maxAlpha, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__maxAlpha, put = __cordl_internal_set__maxAlpha)) float_t _maxAlpha;

  /// @brief Field _rotation, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__rotation, put = __cordl_internal_set__rotation)) float_t _rotation;

  /// @brief Field _tubeBloomPrePassLight, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__tubeBloomPrePassLight, put = __cordl_internal_set__tubeBloomPrePassLight)) ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> _tubeBloomPrePassLight;

  __declspec(property(get = get_isFinished)) bool isFinished;

  __declspec(property(get = get_rotation)) float_t rotation;

  /// @brief Method AddHighlight, addr 0x3a7f52c, size 0xd8, virtual false, abstract: false, final false
  inline void AddHighlight(float_t startTime, float_t arriveDuration, float_t jumpDuration);

  /// @brief Method ColorWasSet, addr 0x3a7f520, size 0xc, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  /// @brief Method Init, addr 0x3a7f454, size 0xcc, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::Vector3 position, float_t rotation);

  /// @brief Method ManualUpdate, addr 0x3a7f604, size 0x14c, virtual false, abstract: false, final false
  inline void ManualUpdate(float_t songTime);

  static inline ::GlobalNamespace::BeatLine* New_ctor();

  constexpr float_t const& __cordl_internal_get__alphaMul() const;

  constexpr float_t& __cordl_internal_get__alphaMul();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__arriveFadeCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__arriveFadeCurve() const;

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatLine__HighlightData>*& __cordl_internal_get__highlights();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__BeatLine__HighlightData>*> const& __cordl_internal_get__highlights() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__jumpFadeCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__jumpFadeCurve() const;

  constexpr float_t const& __cordl_internal_get__maxAlpha() const;

  constexpr float_t& __cordl_internal_get__maxAlpha();

  constexpr float_t const& __cordl_internal_get__rotation() const;

  constexpr float_t& __cordl_internal_get__rotation();

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& __cordl_internal_get__tubeBloomPrePassLight() const;

  constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& __cordl_internal_get__tubeBloomPrePassLight();

  constexpr void __cordl_internal_set__alphaMul(float_t value);

  constexpr void __cordl_internal_set__arriveFadeCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__highlights(::System::Collections::Generic::List_1<::GlobalNamespace::__BeatLine__HighlightData>* value);

  constexpr void __cordl_internal_set__jumpFadeCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__maxAlpha(float_t value);

  constexpr void __cordl_internal_set__rotation(float_t value);

  constexpr void __cordl_internal_set__tubeBloomPrePassLight(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value);

  /// @brief Method .ctor, addr 0x3a7f750, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isFinished, addr 0x3a7f3fc, size 0x50, virtual false, abstract: false, final false
  inline bool get_isFinished();

  /// @brief Method get_rotation, addr 0x3a7f44c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _highlights, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatLine__HighlightData>* ____highlights;

  /// @brief Field _color, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _rotation, offset: 0x70, size: 0x4, def value: None
  float_t ____rotation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4040 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatLine, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLine, ____tubeBloomPrePassLight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLine, ____arriveFadeCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLine, ____jumpFadeCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLine, ____alphaMul) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLine, ____maxAlpha) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLine, ____highlights) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLine, ____color) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatLine, ____rotation) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatLine);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatLine*, "", "BeatLine");
NEED_NO_BOX(::GlobalNamespace::__BeatLine__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatLine__Pool*, "", "BeatLine/Pool");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatLine__HighlightData, "", "BeatLine/HighlightData");
