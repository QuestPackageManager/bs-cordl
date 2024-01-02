#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VertexDisplacementFloatFxGroupEffectTarget)
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class VertexDisplacementFloatFxGroupEffectTarget;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget);
// Type: ::VertexDisplacementFloatFxGroupEffectTarget
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4909)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10164))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4917))
// CS Name: ::VertexDisplacementFloatFxGroupEffectTarget*
class CORDL_TYPE VertexDisplacementFloatFxGroupEffectTarget : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
  // Declarations
  /// @brief Field _displacementRanges, offset 0x18, size 0xc
  __declspec(property(get = __get__displacementRanges, put = __set__displacementRanges))::UnityEngine::Vector3 _displacementRanges;

  /// @brief Field _xAnimationCurve, offset 0x28, size 0x8
  __declspec(property(get = __get__xAnimationCurve, put = __set__xAnimationCurve))::UnityEngine::AnimationCurve* _xAnimationCurve;

  /// @brief Field _yAnimationCurve, offset 0x30, size 0x8
  __declspec(property(get = __get__yAnimationCurve, put = __set__yAnimationCurve))::UnityEngine::AnimationCurve* _yAnimationCurve;

  /// @brief Field _zAnimationCurve, offset 0x38, size 0x8
  __declspec(property(get = __get__zAnimationCurve, put = __set__zAnimationCurve))::UnityEngine::AnimationCurve* _zAnimationCurve;

  /// @brief Field _displacementController, offset 0x40, size 0x8
  __declspec(property(get = __get__displacementController, put = __set__displacementController))::GlobalNamespace::MaterialPropertyBlockController* _displacementController;

  /// @brief Field _renderer, offset 0x48, size 0x8
  __declspec(property(get = __get__renderer, put = __set__renderer))::UnityEngine::Renderer* _renderer;

  /// @brief Field _useTestValue, offset 0x50, size 0x1
  __declspec(property(get = __get__useTestValue, put = __set__useTestValue)) bool _useTestValue;

  /// @brief Field _testFloatValue, offset 0x54, size 0x4
  __declspec(property(get = __get__testFloatValue, put = __set__testFloatValue)) float_t _testFloatValue;

  /// @brief Field _bounds, offset 0x58, size 0x18
  __declspec(property(get = __get__bounds, put = __set__bounds))::UnityEngine::Bounds _bounds;

  /// @brief Field _vertexDisplacementRangeVectorPropertyID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__vertexDisplacementRangeVectorPropertyID, put = setStaticF__vertexDisplacementRangeVectorPropertyID)) int32_t _vertexDisplacementRangeVectorPropertyID;

  constexpr ::UnityEngine::Vector3& __get__displacementRanges();

  constexpr ::UnityEngine::Vector3 const& __get__displacementRanges() const;

  constexpr void __set__displacementRanges(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::AnimationCurve*& __get__xAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__xAnimationCurve() const;

  constexpr void __set__xAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __get__yAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__yAnimationCurve() const;

  constexpr void __set__yAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __get__zAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__zAnimationCurve() const;

  constexpr void __set__zAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::GlobalNamespace::MaterialPropertyBlockController*& __get__displacementController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> const& __get__displacementController() const;

  constexpr void __set__displacementController(::GlobalNamespace::MaterialPropertyBlockController* value);

  constexpr ::UnityEngine::Renderer*& __get__renderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> const& __get__renderer() const;

  constexpr void __set__renderer(::UnityEngine::Renderer* value);

  constexpr bool& __get__useTestValue();

  constexpr bool const& __get__useTestValue() const;

  constexpr void __set__useTestValue(bool value);

  constexpr float_t& __get__testFloatValue();

  constexpr float_t const& __get__testFloatValue() const;

  constexpr void __set__testFloatValue(float_t value);

  constexpr ::UnityEngine::Bounds& __get__bounds();

  constexpr ::UnityEngine::Bounds const& __get__bounds() const;

  constexpr void __set__bounds(::UnityEngine::Bounds value);

  static inline void setStaticF__vertexDisplacementRangeVectorPropertyID(int32_t value);

  static inline int32_t getStaticF__vertexDisplacementRangeVectorPropertyID();

  /// @brief Method OnEnable, addr 0x23a7254, size 0xd4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x23a73b0, size 0x1c, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method CalculateDisplacementVector, addr 0x23a7328, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 CalculateDisplacementVector(float_t value);

  /// @brief Method SetValue, addr 0x23a73cc, size 0xd4, virtual true, abstract: false, final false
  inline void SetValue(float_t value);

  /// @brief Method TriggerValue, addr 0x23a74a0, size 0xd4, virtual true, abstract: false, final false
  inline void TriggerValue(float_t value);

  static inline ::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget* New_ctor();

  /// @brief Method .ctor, addr 0x23a7574, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VertexDisplacementFloatFxGroupEffectTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VertexDisplacementFloatFxGroupEffectTarget(VertexDisplacementFloatFxGroupEffectTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VertexDisplacementFloatFxGroupEffectTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VertexDisplacementFloatFxGroupEffectTarget(VertexDisplacementFloatFxGroupEffectTarget const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VertexDisplacementFloatFxGroupEffectTarget();

public:
  /// @brief Field _displacementRanges, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____displacementRanges;

  /// @brief Field _xAnimationCurve, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____xAnimationCurve;

  /// @brief Field _yAnimationCurve, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____yAnimationCurve;

  /// @brief Field _zAnimationCurve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____zAnimationCurve;

  /// @brief Field _displacementController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::MaterialPropertyBlockController* ____displacementController;

  /// @brief Field _renderer, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Renderer* ____renderer;

  /// @brief Field _useTestValue, offset: 0x50, size: 0x1, def value: None
  bool ____useTestValue;

  /// @brief Field _testFloatValue, offset: 0x54, size: 0x4, def value: None
  float_t ____testFloatValue;

  /// @brief Field _bounds, offset: 0x58, size: 0x18, def value: None
  ::UnityEngine::Bounds ____bounds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget, ____displacementRanges) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget, ____xAnimationCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget, ____yAnimationCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget, ____zAnimationCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget, ____displacementController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget, ____renderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget, ____useTestValue) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget, ____testFloatValue) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget, ____bounds) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget*, "", "VertexDisplacementFloatFxGroupEffectTarget");
