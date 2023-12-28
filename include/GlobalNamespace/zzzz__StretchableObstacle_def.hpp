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
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
class ParametricBoxFrameController;
}
namespace GlobalNamespace {
class ParametricBoxFakeGlowController;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10164))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4798))
// CS Name: ::StretchableObstacle*
class CORDL_TYPE StretchableObstacle : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _edgeSize, offset 0x18, size 0x4
  __declspec(property(get = __get__edgeSize, put = __set__edgeSize)) float_t _edgeSize;

  /// @brief Field _coreOffset, offset 0x1c, size 0x4
  __declspec(property(get = __get__coreOffset, put = __set__coreOffset)) float_t _coreOffset;

  /// @brief Field _addColorMultiplier, offset 0x20, size 0x4
  __declspec(property(get = __get__addColorMultiplier, put = __set__addColorMultiplier)) float_t _addColorMultiplier;

  /// @brief Field _obstacleCoreLerpToWhiteFactor, offset 0x24, size 0x4
  __declspec(property(get = __get__obstacleCoreLerpToWhiteFactor, put = __set__obstacleCoreLerpToWhiteFactor)) float_t _obstacleCoreLerpToWhiteFactor;

  /// @brief Field _fakeGlowOffset, offset 0x28, size 0xc
  __declspec(property(get = __get__fakeGlowOffset, put = __set__fakeGlowOffset))::UnityEngine::Vector3 _fakeGlowOffset;

  /// @brief Field _obstacleCore, offset 0x38, size 0x8
  __declspec(property(get = __get__obstacleCore, put = __set__obstacleCore))::UnityEngine::Transform* _obstacleCore;

  /// @brief Field _materialPropertyBlockControllers, offset 0x40, size 0x8
  __declspec(property(get = __get__materialPropertyBlockControllers,
                      put = __set__materialPropertyBlockControllers))::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,
                                                                              ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> _materialPropertyBlockControllers;

  /// @brief Field _obstacleFrame, offset 0x48, size 0x8
  __declspec(property(get = __get__obstacleFrame, put = __set__obstacleFrame))::GlobalNamespace::ParametricBoxFrameController* _obstacleFrame;

  /// @brief Field _obstacleFakeGlow, offset 0x50, size 0x8
  __declspec(property(get = __get__obstacleFakeGlow, put = __set__obstacleFakeGlow))::GlobalNamespace::ParametricBoxFakeGlowController* _obstacleFakeGlow;

  /// @brief Field _bounds, offset 0x58, size 0x18
  __declspec(property(get = __get__bounds, put = __set__bounds))::UnityEngine::Bounds _bounds;

  /// @brief Field _uvScaleID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__uvScaleID, put = setStaticF__uvScaleID)) int32_t _uvScaleID;

  /// @brief Field _tintColorID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__tintColorID, put = setStaticF__tintColorID)) int32_t _tintColorID;

  /// @brief Field _addColorID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__addColorID, put = setStaticF__addColorID)) int32_t _addColorID;

  /// @brief Field _mainColorID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__mainColorID, put = setStaticF__mainColorID)) int32_t _mainColorID;

  __declspec(property(get = get_bounds))::UnityEngine::Bounds bounds;

  constexpr float_t& __get__edgeSize();

  constexpr float_t const& __get__edgeSize() const;

  constexpr void __set__edgeSize(float_t value);

  constexpr float_t& __get__coreOffset();

  constexpr float_t const& __get__coreOffset() const;

  constexpr void __set__coreOffset(float_t value);

  constexpr float_t& __get__addColorMultiplier();

  constexpr float_t const& __get__addColorMultiplier() const;

  constexpr void __set__addColorMultiplier(float_t value);

  constexpr float_t& __get__obstacleCoreLerpToWhiteFactor();

  constexpr float_t const& __get__obstacleCoreLerpToWhiteFactor() const;

  constexpr void __set__obstacleCoreLerpToWhiteFactor(float_t value);

  constexpr ::UnityEngine::Vector3& __get__fakeGlowOffset();

  constexpr ::UnityEngine::Vector3 const& __get__fakeGlowOffset() const;

  constexpr void __set__fakeGlowOffset(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Transform*& __get__obstacleCore();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__obstacleCore() const;

  constexpr void __set__obstacleCore(::UnityEngine::Transform* value);

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>& __get__materialPropertyBlockControllers();

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> const& __get__materialPropertyBlockControllers() const;

  constexpr void __set__materialPropertyBlockControllers(::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> value);

  constexpr ::GlobalNamespace::ParametricBoxFrameController*& __get__obstacleFrame();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ParametricBoxFrameController*> const& __get__obstacleFrame() const;

  constexpr void __set__obstacleFrame(::GlobalNamespace::ParametricBoxFrameController* value);

  constexpr ::GlobalNamespace::ParametricBoxFakeGlowController*& __get__obstacleFakeGlow();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ParametricBoxFakeGlowController*> const& __get__obstacleFakeGlow() const;

  constexpr void __set__obstacleFakeGlow(::GlobalNamespace::ParametricBoxFakeGlowController* value);

  constexpr ::UnityEngine::Bounds& __get__bounds();

  constexpr ::UnityEngine::Bounds const& __get__bounds() const;

  constexpr void __set__bounds(::UnityEngine::Bounds value);

  static inline void setStaticF__uvScaleID(int32_t value);

  static inline int32_t getStaticF__uvScaleID();

  static inline void setStaticF__tintColorID(int32_t value);

  static inline int32_t getStaticF__tintColorID();

  static inline void setStaticF__addColorID(int32_t value);

  static inline int32_t getStaticF__addColorID();

  static inline void setStaticF__mainColorID(int32_t value);

  static inline int32_t getStaticF__mainColorID();

  /// @brief Method get_bounds addr 0x238f8c4 size 0x14 virtual false final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method SetSizeAndColor addr 0x238cbe4 size 0x40c virtual false final false
  inline void SetSizeAndColor(float_t width, float_t height, float_t length, ::UnityEngine::Color color);

  /// @brief Method OnValidate addr 0x238f8d8 size 0x6c virtual false final false
  inline void OnValidate();

  static inline ::GlobalNamespace::StretchableObstacle* New_ctor();

  /// @brief Method .ctor addr 0x238f944 size 0x34 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StretchableObstacle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StretchableObstacle(StretchableObstacle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StretchableObstacle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StretchableObstacle(StretchableObstacle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StretchableObstacle();

public:
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
  ::UnityEngine::Transform* ____obstacleCore;

  /// @brief Field _materialPropertyBlockControllers, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> ____materialPropertyBlockControllers;

  /// @brief Field _obstacleFrame, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ParametricBoxFrameController* ____obstacleFrame;

  /// @brief Field _obstacleFakeGlow, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::ParametricBoxFakeGlowController* ____obstacleFakeGlow;

  /// @brief Field _bounds, offset: 0x58, size: 0x18, def value: None
  ::UnityEngine::Bounds ____bounds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StretchableObstacle, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StretchableObstacle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StretchableObstacle*, "", "StretchableObstacle");
