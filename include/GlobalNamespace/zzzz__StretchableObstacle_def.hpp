#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Forward declare root types
namespace GlobalNamespace {
class StretchableObstacle;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StretchableObstacle);
// Type: ::StretchableObstacle
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StretchableObstacle*
class CORDL_TYPE StretchableObstacle : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _addColorID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__addColorID, put = setStaticF__addColorID)) int32_t _addColorID;

  /// @brief Field _addColorMultiplier, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__addColorMultiplier, put = __cordl_internal_set__addColorMultiplier)) float_t _addColorMultiplier;

  /// @brief Field _bounds, offset 0x58, size 0x18
  __declspec(property(get = __cordl_internal_get__bounds, put = __cordl_internal_set__bounds))::UnityEngine::Bounds _bounds;

  /// @brief Field _coreOffset, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__coreOffset, put = __cordl_internal_set__coreOffset)) float_t _coreOffset;

  /// @brief Field _edgeSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__edgeSize, put = __cordl_internal_set__edgeSize)) float_t _edgeSize;

  /// @brief Field _fakeGlowOffset, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get__fakeGlowOffset, put = __cordl_internal_set__fakeGlowOffset))::UnityEngine::Vector3 _fakeGlowOffset;

  /// @brief Field _mainColorID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__mainColorID, put = setStaticF__mainColorID)) int32_t _mainColorID;

  /// @brief Field _materialPropertyBlockControllers, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockControllers,
                      put = __cordl_internal_set__materialPropertyBlockControllers))::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>,
                                                                                             ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> _materialPropertyBlockControllers;

  /// @brief Field _obstacleCore, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleCore, put = __cordl_internal_set__obstacleCore))::UnityW<::UnityEngine::Transform> _obstacleCore;

  /// @brief Field _obstacleCoreLerpToWhiteFactor, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__obstacleCoreLerpToWhiteFactor, put = __cordl_internal_set__obstacleCoreLerpToWhiteFactor)) float_t _obstacleCoreLerpToWhiteFactor;

  /// @brief Field _obstacleFakeGlow, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleFakeGlow, put = __cordl_internal_set__obstacleFakeGlow))::UnityW<::GlobalNamespace::ParametricBoxFakeGlowController> _obstacleFakeGlow;

  /// @brief Field _obstacleFrame, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleFrame, put = __cordl_internal_set__obstacleFrame))::UnityW<::GlobalNamespace::ParametricBoxFrameController> _obstacleFrame;

  /// @brief Field _tintColorID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__tintColorID, put = setStaticF__tintColorID)) int32_t _tintColorID;

  /// @brief Field _uvScaleID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__uvScaleID, put = setStaticF__uvScaleID)) int32_t _uvScaleID;

  __declspec(property(get = get_bounds))::UnityEngine::Bounds bounds;

  static inline ::GlobalNamespace::StretchableObstacle* New_ctor();

  /// @brief Method OnValidate, addr 0x241d35c, size 0x6c, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method SetSizeAndColor, addr 0x241cf50, size 0x40c, virtual false, abstract: false, final false
  inline void SetSizeAndColor(float_t width, float_t height, float_t length, ::UnityEngine::Color color);

  constexpr float_t const& __cordl_internal_get__addColorMultiplier() const;

  constexpr float_t& __cordl_internal_get__addColorMultiplier();

  constexpr ::UnityEngine::Bounds const& __cordl_internal_get__bounds() const;

  constexpr ::UnityEngine::Bounds& __cordl_internal_get__bounds();

  constexpr float_t const& __cordl_internal_get__coreOffset() const;

  constexpr float_t& __cordl_internal_get__coreOffset();

  constexpr float_t const& __cordl_internal_get__edgeSize() const;

  constexpr float_t& __cordl_internal_get__edgeSize();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__fakeGlowOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__fakeGlowOffset();

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

  constexpr void __cordl_internal_set__coreOffset(float_t value);

  constexpr void __cordl_internal_set__edgeSize(float_t value);

  constexpr void __cordl_internal_set__fakeGlowOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__materialPropertyBlockControllers(
      ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> value);

  constexpr void __cordl_internal_set__obstacleCore(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__obstacleCoreLerpToWhiteFactor(float_t value);

  constexpr void __cordl_internal_set__obstacleFakeGlow(::UnityW<::GlobalNamespace::ParametricBoxFakeGlowController> value);

  constexpr void __cordl_internal_set__obstacleFrame(::UnityW<::GlobalNamespace::ParametricBoxFrameController> value);

  /// @brief Method .ctor, addr 0x241d3c8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__addColorID();

  static inline int32_t getStaticF__mainColorID();

  static inline int32_t getStaticF__tintColorID();

  static inline int32_t getStaticF__uvScaleID();

  /// @brief Method get_bounds, addr 0x241cf3c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  static inline void setStaticF__addColorID(int32_t value);

  static inline void setStaticF__mainColorID(int32_t value);

  static inline void setStaticF__tintColorID(int32_t value);

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

  /// @brief Field _edgeSize, offset: 0x18, size: 0x4, def value: None
  float_t ____edgeSize;

  /// @brief Field _coreOffset, offset: 0x1c, size: 0x4, def value: None
  float_t ____coreOffset;

  /// @brief Field _addColorMultiplier, offset: 0x20, size: 0x4, def value: None
  float_t ____addColorMultiplier;

  /// @brief Field _obstacleCoreLerpToWhiteFactor, offset: 0x24, size: 0x4, def value: None
  float_t ____obstacleCoreLerpToWhiteFactor;

  /// @brief Field _fakeGlowOffset, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____fakeGlowOffset;

  /// @brief Field _obstacleCore, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____obstacleCore;

  /// @brief Field _materialPropertyBlockControllers, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> ____materialPropertyBlockControllers;

  /// @brief Field _obstacleFrame, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ParametricBoxFrameController> ____obstacleFrame;

  /// @brief Field _obstacleFakeGlow, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ParametricBoxFakeGlowController> ____obstacleFakeGlow;

  /// @brief Field _bounds, offset: 0x58, size: 0x18, def value: None
  ::UnityEngine::Bounds ____bounds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StretchableObstacle, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StretchableObstacle, ____edgeSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StretchableObstacle, ____coreOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StretchableObstacle, ____addColorMultiplier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StretchableObstacle, ____obstacleCoreLerpToWhiteFactor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StretchableObstacle, ____fakeGlowOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StretchableObstacle, ____obstacleCore) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StretchableObstacle, ____materialPropertyBlockControllers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StretchableObstacle, ____obstacleFrame) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StretchableObstacle, ____obstacleFakeGlow) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StretchableObstacle, ____bounds) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StretchableObstacle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StretchableObstacle*, "", "StretchableObstacle");
