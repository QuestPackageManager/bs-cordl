#pragma once
// IWYU pragma private; include "GlobalNamespace/StretchableObstacle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StretchableObstacle)
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
class ParametricBoxFakeGlowController;
}
namespace GlobalNamespace {
class ParametricBoxFrameController;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class StretchableObstacle;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StretchableObstacle);
// Dependencies UnityEngine.Bounds, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: StretchableObstacle
class CORDL_TYPE StretchableObstacle : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _addColorID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__addColorID, put = setStaticF__addColorID)) int32_t _addColorID;

  /// @brief Field _addColorMultiplier, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__addColorMultiplier, put = __cordl_internal_set__addColorMultiplier)) float_t _addColorMultiplier;

  /// @brief Field _bounds, offset 0x6c, size 0x18
  __declspec(property(get = __cordl_internal_get__bounds, put = __cordl_internal_set__bounds)) ::UnityEngine::Bounds _bounds;

  /// @brief Field _coreOffset, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get__coreOffset, put = __cordl_internal_set__coreOffset)) ::UnityEngine::Vector3 _coreOffset;

  /// @brief Field _edgeSize, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__edgeSize, put = __cordl_internal_set__edgeSize)) float_t _edgeSize;

  /// @brief Field _fakeGlowOffset, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get__fakeGlowOffset, put = __cordl_internal_set__fakeGlowOffset)) ::UnityEngine::Vector3 _fakeGlowOffset;

  /// @brief Field _mainColorID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__mainColorID, put = setStaticF__mainColorID)) int32_t _mainColorID;

  /// @brief Field _manualUVOffsetMultiplier, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__manualUVOffsetMultiplier, put = __cordl_internal_set__manualUVOffsetMultiplier)) float_t _manualUVOffsetMultiplier;

  /// @brief Field _materialPropertyBlockControllers, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockControllers,
                      put = __cordl_internal_set__materialPropertyBlockControllers)) ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>,
                                                                                              ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*>
      _materialPropertyBlockControllers;

  /// @brief Field _obstacleCore, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleCore, put = __cordl_internal_set__obstacleCore)) ::UnityW<::UnityEngine::Transform> _obstacleCore;

  /// @brief Field _obstacleCoreLerpToWhiteFactor, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__obstacleCoreLerpToWhiteFactor, put = __cordl_internal_set__obstacleCoreLerpToWhiteFactor)) float_t _obstacleCoreLerpToWhiteFactor;

  /// @brief Field _obstacleFakeGlow, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleFakeGlow, put = __cordl_internal_set__obstacleFakeGlow)) ::UnityW<::GlobalNamespace::ParametricBoxFakeGlowController> _obstacleFakeGlow;

  /// @brief Field _obstacleFrame, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleFrame, put = __cordl_internal_set__obstacleFrame)) ::UnityW<::GlobalNamespace::ParametricBoxFrameController> _obstacleFrame;

  /// @brief Field _tintColorID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__tintColorID, put = setStaticF__tintColorID)) int32_t _tintColorID;

  /// @brief Field _uvManualOffsetID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__uvManualOffsetID, put = setStaticF__uvManualOffsetID)) int32_t _uvManualOffsetID;

  /// @brief Field _uvScaleID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__uvScaleID, put = setStaticF__uvScaleID)) int32_t _uvScaleID;

  __declspec(property(get = get_bounds)) ::UnityEngine::Bounds bounds;

  /// @brief Method CalculateObstacleTransformProperties, addr 0x3af610c, size 0x40, virtual false, abstract: false, final false
  inline void CalculateObstacleTransformProperties(float_t width, float_t height, float_t length, ::ByRef<::UnityEngine::Vector3> localPosition, ::ByRef<::UnityEngine::Vector3> size,
                                                   ::ByRef<::UnityEngine::Vector3> scale);

  static inline ::GlobalNamespace::StretchableObstacle* New_ctor();

  /// @brief Method OnValidate, addr 0x3af6274, size 0x6c, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method SetAllProperties, addr 0x3af3734, size 0x408, virtual false, abstract: false, final false
  inline void SetAllProperties(float_t width, float_t height, float_t length, ::UnityEngine::Color color, float_t manualUvOffset);

  /// @brief Method SetObstacleCoreTransformProperties, addr 0x3af614c, size 0x128, virtual false, abstract: false, final false
  inline void SetObstacleCoreTransformProperties(::UnityEngine::Vector3 localPosition, ::UnityEngine::Vector3 size, ::UnityEngine::Vector3 scale);

  /// @brief Method SetSizeAndOffset, addr 0x3af3380, size 0x254, virtual false, abstract: false, final false
  inline void SetSizeAndOffset(float_t width, float_t height, float_t length, float_t offset);

  constexpr float_t const& __cordl_internal_get__addColorMultiplier() const;

  constexpr float_t& __cordl_internal_get__addColorMultiplier();

  constexpr ::UnityEngine::Bounds const& __cordl_internal_get__bounds() const;

  constexpr ::UnityEngine::Bounds& __cordl_internal_get__bounds();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__coreOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__coreOffset();

  constexpr float_t const& __cordl_internal_get__edgeSize() const;

  constexpr float_t& __cordl_internal_get__edgeSize();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__fakeGlowOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__fakeGlowOffset();

  constexpr float_t const& __cordl_internal_get__manualUVOffsetMultiplier() const;

  constexpr float_t& __cordl_internal_get__manualUVOffsetMultiplier();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> const&
  __cordl_internal_get__materialPropertyBlockControllers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*>&
  __cordl_internal_get__materialPropertyBlockControllers();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__obstacleCore() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__obstacleCore();

  constexpr float_t const& __cordl_internal_get__obstacleCoreLerpToWhiteFactor() const;

  constexpr float_t& __cordl_internal_get__obstacleCoreLerpToWhiteFactor();

  constexpr ::UnityW<::GlobalNamespace::ParametricBoxFakeGlowController> const& __cordl_internal_get__obstacleFakeGlow() const;

  constexpr ::UnityW<::GlobalNamespace::ParametricBoxFakeGlowController>& __cordl_internal_get__obstacleFakeGlow();

  constexpr ::UnityW<::GlobalNamespace::ParametricBoxFrameController> const& __cordl_internal_get__obstacleFrame() const;

  constexpr ::UnityW<::GlobalNamespace::ParametricBoxFrameController>& __cordl_internal_get__obstacleFrame();

  constexpr void __cordl_internal_set__addColorMultiplier(float_t value);

  constexpr void __cordl_internal_set__bounds(::UnityEngine::Bounds value);

  constexpr void __cordl_internal_set__coreOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__edgeSize(float_t value);

  constexpr void __cordl_internal_set__fakeGlowOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__manualUVOffsetMultiplier(float_t value);

  constexpr void __cordl_internal_set__materialPropertyBlockControllers(
      ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> value);

  constexpr void __cordl_internal_set__obstacleCore(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__obstacleCoreLerpToWhiteFactor(float_t value);

  constexpr void __cordl_internal_set__obstacleFakeGlow(::UnityW<::GlobalNamespace::ParametricBoxFakeGlowController> value);

  constexpr void __cordl_internal_set__obstacleFrame(::UnityW<::GlobalNamespace::ParametricBoxFrameController> value);

  /// @brief Method .ctor, addr 0x3af62e0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__addColorID();

  static inline int32_t getStaticF__mainColorID();

  static inline int32_t getStaticF__tintColorID();

  static inline int32_t getStaticF__uvManualOffsetID();

  static inline int32_t getStaticF__uvScaleID();

  /// @brief Method get_bounds, addr 0x3af60f8, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  static inline void setStaticF__addColorID(int32_t value);

  static inline void setStaticF__mainColorID(int32_t value);

  static inline void setStaticF__tintColorID(int32_t value);

  static inline void setStaticF__uvManualOffsetID(int32_t value);

  static inline void setStaticF__uvScaleID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StretchableObstacle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StretchableObstacle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StretchableObstacle(StretchableObstacle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StretchableObstacle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StretchableObstacle(StretchableObstacle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4152 };

  /// @brief Field _edgeSize, offset: 0x20, size: 0x4, def value: None
  float_t ____edgeSize;

  /// @brief Field _coreOffset, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____coreOffset;

  /// @brief Field _addColorMultiplier, offset: 0x30, size: 0x4, def value: None
  float_t ____addColorMultiplier;

  /// @brief Field _obstacleCoreLerpToWhiteFactor, offset: 0x34, size: 0x4, def value: None
  float_t ____obstacleCoreLerpToWhiteFactor;

  /// @brief Field _fakeGlowOffset, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____fakeGlowOffset;

  /// @brief Field _obstacleCore, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____obstacleCore;

  /// @brief Field _materialPropertyBlockControllers, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> ____materialPropertyBlockControllers;

  /// @brief Field _obstacleFrame, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ParametricBoxFrameController> ____obstacleFrame;

  /// @brief Field _obstacleFakeGlow, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ParametricBoxFakeGlowController> ____obstacleFakeGlow;

  /// @brief Field _manualUVOffsetMultiplier, offset: 0x68, size: 0x4, def value: None
  float_t ____manualUVOffsetMultiplier;

  /// @brief Field _bounds, offset: 0x6c, size: 0x18, def value: None
  ::UnityEngine::Bounds ____bounds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StretchableObstacle, ____edgeSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StretchableObstacle, ____coreOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StretchableObstacle, ____addColorMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StretchableObstacle, ____obstacleCoreLerpToWhiteFactor) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StretchableObstacle, ____fakeGlowOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StretchableObstacle, ____obstacleCore) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StretchableObstacle, ____materialPropertyBlockControllers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StretchableObstacle, ____obstacleFrame) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StretchableObstacle, ____obstacleFakeGlow) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StretchableObstacle, ____manualUVOffsetMultiplier) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StretchableObstacle, ____bounds) == 0x6c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StretchableObstacle, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StretchableObstacle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StretchableObstacle*, "", "StretchableObstacle");
