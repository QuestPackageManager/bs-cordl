#pragma once
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
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TransformSpectrogram;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TransformSpectrogram);
// Type: ::TransformSpectrogram
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(14733))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5001))
// CS Name: ::TransformSpectrogram*
class CORDL_TYPE TransformSpectrogram : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _transforms, offset 0x18, size 0x8
  __declspec(property(get = __get__transforms, put = __set__transforms))::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> _transforms;

  /// @brief Field _axis, offset 0x20, size 0x4
  __declspec(property(get = __get__axis, put = __set__axis))::GlobalNamespace::LightAxis _axis;

  /// @brief Field _minPosition, offset 0x24, size 0x4
  __declspec(property(get = __get__minPosition, put = __set__minPosition)) float_t _minPosition;

  /// @brief Field _maxPosition, offset 0x28, size 0x4
  __declspec(property(get = __get__maxPosition, put = __set__maxPosition)) float_t _maxPosition;

  /// @brief Field _scaleSamples, offset 0x2c, size 0x1
  __declspec(property(get = __get__scaleSamples, put = __set__scaleSamples)) bool _scaleSamples;

  /// @brief Field _scale, offset 0x30, size 0x4
  __declspec(property(get = __get__scale, put = __set__scale)) float_t _scale;

  /// @brief Field _spectrogramData, offset 0x38, size 0x8
  __declspec(property(get = __get__spectrogramData, put = __set__spectrogramData))::GlobalNamespace::BasicSpectrogramData* _spectrogramData;

  /// @brief Field _direction, offset 0x40, size 0xc
  __declspec(property(get = __get__direction, put = __set__direction))::UnityEngine::Vector3 _direction;

  /// @brief Field _defaultPositions, offset 0x50, size 0x8
  __declspec(property(get = __get__defaultPositions, put = __set__defaultPositions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _defaultPositions;

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& __get__transforms();

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& __get__transforms() const;

  constexpr void __set__transforms(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  constexpr ::GlobalNamespace::LightAxis& __get__axis();

  constexpr ::GlobalNamespace::LightAxis const& __get__axis() const;

  constexpr void __set__axis(::GlobalNamespace::LightAxis value);

  constexpr float_t& __get__minPosition();

  constexpr float_t const& __get__minPosition() const;

  constexpr void __set__minPosition(float_t value);

  constexpr float_t& __get__maxPosition();

  constexpr float_t const& __get__maxPosition() const;

  constexpr void __set__maxPosition(float_t value);

  constexpr bool& __get__scaleSamples();

  constexpr bool const& __get__scaleSamples() const;

  constexpr void __set__scaleSamples(bool value);

  constexpr float_t& __get__scale();

  constexpr float_t const& __get__scale() const;

  constexpr void __set__scale(float_t value);

  constexpr ::GlobalNamespace::BasicSpectrogramData*& __get__spectrogramData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BasicSpectrogramData*> const& __get__spectrogramData() const;

  constexpr void __set__spectrogramData(::GlobalNamespace::BasicSpectrogramData* value);

  constexpr ::UnityEngine::Vector3& __get__direction();

  constexpr ::UnityEngine::Vector3 const& __get__direction() const;

  constexpr void __set__direction(::UnityEngine::Vector3 value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get__defaultPositions();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get__defaultPositions() const;

  constexpr void __set__defaultPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method Awake, addr 0x23b72f0, size 0x188, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Update, addr 0x23b7478, size 0x268, virtual false, abstract: false, final false
  inline void Update();

  static inline ::GlobalNamespace::TransformSpectrogram* New_ctor();

  /// @brief Method .ctor, addr 0x23b76e0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TransformSpectrogram", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransformSpectrogram(TransformSpectrogram&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransformSpectrogram", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransformSpectrogram(TransformSpectrogram const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformSpectrogram();

public:
  /// @brief Field _transforms, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> ____transforms;

  /// @brief Field _axis, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::LightAxis ____axis;

  /// @brief Field _minPosition, offset: 0x24, size: 0x4, def value: None
  float_t ____minPosition;

  /// @brief Field _maxPosition, offset: 0x28, size: 0x4, def value: None
  float_t ____maxPosition;

  /// @brief Field _scaleSamples, offset: 0x2c, size: 0x1, def value: None
  bool ____scaleSamples;

  /// @brief Field _scale, offset: 0x30, size: 0x4, def value: None
  float_t ____scale;

  /// @brief Field _spectrogramData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BasicSpectrogramData* ____spectrogramData;

  /// @brief Field _direction, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____direction;

  /// @brief Field _defaultPositions, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____defaultPositions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TransformSpectrogram, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformSpectrogram, ____transforms) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformSpectrogram, ____axis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformSpectrogram, ____minPosition) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformSpectrogram, ____maxPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformSpectrogram, ____scaleSamples) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformSpectrogram, ____scale) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformSpectrogram, ____spectrogramData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformSpectrogram, ____direction) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformSpectrogram, ____defaultPositions) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TransformSpectrogram);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TransformSpectrogram*, "", "TransformSpectrogram");
