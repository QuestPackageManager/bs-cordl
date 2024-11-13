#pragma once
// IWYU pragma private; include "GlobalNamespace/TransformSpectrogram.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransformSpectrogram)
namespace GlobalNamespace {
class BasicSpectrogramData;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TransformSpectrogram;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TransformSpectrogram);
// Type: ::TransformSpectrogram
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TransformSpectrogram*
class CORDL_TYPE TransformSpectrogram : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _axis, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__axis, put = __cordl_internal_set__axis)) ::GlobalNamespace::LightAxis _axis;

  /// @brief Field _defaultPositions, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultPositions, put = __cordl_internal_set__defaultPositions)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _defaultPositions;

  /// @brief Field _direction, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get__direction, put = __cordl_internal_set__direction)) ::UnityEngine::Vector3 _direction;

  /// @brief Field _maxPosition, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__maxPosition, put = __cordl_internal_set__maxPosition)) float_t _maxPosition;

  /// @brief Field _minPosition, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__minPosition, put = __cordl_internal_set__minPosition)) float_t _minPosition;

  /// @brief Field _scale, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__scale, put = __cordl_internal_set__scale)) float_t _scale;

  /// @brief Field _scaleSamples, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__scaleSamples, put = __cordl_internal_set__scaleSamples)) bool _scaleSamples;

  /// @brief Field _spectrogramData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__spectrogramData, put = __cordl_internal_set__spectrogramData)) ::UnityW<::GlobalNamespace::BasicSpectrogramData> _spectrogramData;

  /// @brief Field _transforms, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__transforms, put = __cordl_internal_set__transforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>
      _transforms;

  /// @brief Method Awake, addr 0x3b39d80, size 0x188, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::TransformSpectrogram* New_ctor();

  /// @brief Method Update, addr 0x3b39f08, size 0x268, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::LightAxis const& __cordl_internal_get__axis() const;

  constexpr ::GlobalNamespace::LightAxis& __cordl_internal_get__axis();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__defaultPositions() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__defaultPositions();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__direction() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__direction();

  constexpr float_t const& __cordl_internal_get__maxPosition() const;

  constexpr float_t& __cordl_internal_get__maxPosition();

  constexpr float_t const& __cordl_internal_get__minPosition() const;

  constexpr float_t& __cordl_internal_get__minPosition();

  constexpr float_t const& __cordl_internal_get__scale() const;

  constexpr float_t& __cordl_internal_get__scale();

  constexpr bool const& __cordl_internal_get__scaleSamples() const;

  constexpr bool& __cordl_internal_get__scaleSamples();

  constexpr ::UnityW<::GlobalNamespace::BasicSpectrogramData> const& __cordl_internal_get__spectrogramData() const;

  constexpr ::UnityW<::GlobalNamespace::BasicSpectrogramData>& __cordl_internal_get__spectrogramData();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get__transforms() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get__transforms();

  constexpr void __cordl_internal_set__axis(::GlobalNamespace::LightAxis value);

  constexpr void __cordl_internal_set__defaultPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set__direction(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__maxPosition(float_t value);

  constexpr void __cordl_internal_set__minPosition(float_t value);

  constexpr void __cordl_internal_set__scale(float_t value);

  constexpr void __cordl_internal_set__scaleSamples(bool value);

  constexpr void __cordl_internal_set__spectrogramData(::UnityW<::GlobalNamespace::BasicSpectrogramData> value);

  constexpr void __cordl_internal_set__transforms(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  /// @brief Method .ctor, addr 0x3b3a170, size 0x194, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformSpectrogram();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransformSpectrogram", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransformSpectrogram(TransformSpectrogram&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransformSpectrogram", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransformSpectrogram(TransformSpectrogram const&) = delete;

  /// @brief Field _transforms, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ____transforms;

  /// @brief Field _axis, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::LightAxis ____axis;

  /// @brief Field _minPosition, offset: 0x2c, size: 0x4, def value: None
  float_t ____minPosition;

  /// @brief Field _maxPosition, offset: 0x30, size: 0x4, def value: None
  float_t ____maxPosition;

  /// @brief Field _scaleSamples, offset: 0x34, size: 0x1, def value: None
  bool ____scaleSamples;

  /// @brief Field _scale, offset: 0x38, size: 0x4, def value: None
  float_t ____scale;

  /// @brief Field _spectrogramData, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BasicSpectrogramData> ____spectrogramData;

  /// @brief Field _direction, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____direction;

  /// @brief Field _defaultPositions, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____defaultPositions;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4362 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TransformSpectrogram, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformSpectrogram, ____transforms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformSpectrogram, ____axis) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformSpectrogram, ____minPosition) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformSpectrogram, ____maxPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformSpectrogram, ____scaleSamples) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformSpectrogram, ____scale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformSpectrogram, ____spectrogramData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformSpectrogram, ____direction) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformSpectrogram, ____defaultPositions) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TransformSpectrogram);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TransformSpectrogram*, "", "TransformSpectrogram");
