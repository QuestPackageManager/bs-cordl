#pragma once
// IWYU pragma private; include "GlobalNamespace/ParametricBoxController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ParametricBoxController)
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ParametricBoxController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ParametricBoxController);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParametricBoxController
class CORDL_TYPE ParametricBoxController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _alphaEndID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__alphaEndID, put = setStaticF__alphaEndID)) int32_t _alphaEndID;

  /// @brief Field _alphaStartID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__alphaStartID, put = setStaticF__alphaStartID)) int32_t _alphaStartID;

  /// @brief Field <collisionHeight>k__BackingField, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__collisionHeight_k__BackingField, put = __cordl_internal_set__collisionHeight_k__BackingField)) float_t _collisionHeight_k__BackingField;

  /// @brief Field _colorID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__colorID, put = setStaticF__colorID)) int32_t _colorID;

  /// @brief Field _isInitialized, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _materialPropertyBlock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__materialPropertyBlock, put = setStaticF__materialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  /// @brief Field _meshRenderer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__meshRenderer, put = __cordl_internal_set__meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer> _meshRenderer;

  /// @brief Field _transform, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Field <useCollision>k__BackingField, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__useCollision_k__BackingField, put = __cordl_internal_set__useCollision_k__BackingField)) bool _useCollision_k__BackingField;

  /// @brief Field _widthEndID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__widthEndID, put = setStaticF__widthEndID)) int32_t _widthEndID;

  /// @brief Field _widthStartID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__widthStartID, put = setStaticF__widthStartID)) int32_t _widthStartID;

  /// @brief Field alphaEnd, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_alphaEnd, put = __cordl_internal_set_alphaEnd)) float_t alphaEnd;

  /// @brief Field alphaMultiplier, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_alphaMultiplier, put = __cordl_internal_set_alphaMultiplier)) float_t alphaMultiplier;

  /// @brief Field alphaStart, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_alphaStart, put = __cordl_internal_set_alphaStart)) float_t alphaStart;

  __declspec(property(get = get_collisionHeight, put = set_collisionHeight)) float_t collisionHeight;

  /// @brief Field color, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color)) ::UnityEngine::Color color;

  /// @brief Field height, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_height, put = __cordl_internal_set_height)) float_t height;

  /// @brief Field heightCenter, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_heightCenter, put = __cordl_internal_set_heightCenter)) float_t heightCenter;

  /// @brief Field length, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) float_t length;

  /// @brief Field minAlpha, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_minAlpha, put = __cordl_internal_set_minAlpha)) float_t minAlpha;

  __declspec(property(get = get_useCollision, put = set_useCollision)) bool useCollision;

  /// @brief Field width, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_width, put = __cordl_internal_set_width)) float_t width;

  /// @brief Field widthEnd, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_widthEnd, put = __cordl_internal_set_widthEnd)) float_t widthEnd;

  /// @brief Field widthStart, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_widthStart, put = __cordl_internal_set_widthStart)) float_t widthStart;

  /// @brief Method Awake, addr 0x39daf5c, size 0x28, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method InitIfNeeded, addr 0x39daf84, size 0xc4, virtual false, abstract: false, final false
  inline void InitIfNeeded();

  static inline ::GlobalNamespace::ParametricBoxController* New_ctor();

  /// @brief Method OnDisable, addr 0x39db068, size 0x20, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x39db048, size 0x20, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Refresh, addr 0x39db088, size 0x220, virtual false, abstract: false, final false
  inline void Refresh();

  constexpr float_t const& __cordl_internal_get__collisionHeight_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__collisionHeight_k__BackingField();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__meshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__meshRenderer();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr bool const& __cordl_internal_get__useCollision_k__BackingField() const;

  constexpr bool& __cordl_internal_get__useCollision_k__BackingField();

  constexpr float_t const& __cordl_internal_get_alphaEnd() const;

  constexpr float_t& __cordl_internal_get_alphaEnd();

  constexpr float_t const& __cordl_internal_get_alphaMultiplier() const;

  constexpr float_t& __cordl_internal_get_alphaMultiplier();

  constexpr float_t const& __cordl_internal_get_alphaStart() const;

  constexpr float_t& __cordl_internal_get_alphaStart();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr float_t const& __cordl_internal_get_height() const;

  constexpr float_t& __cordl_internal_get_height();

  constexpr float_t const& __cordl_internal_get_heightCenter() const;

  constexpr float_t& __cordl_internal_get_heightCenter();

  constexpr float_t const& __cordl_internal_get_length() const;

  constexpr float_t& __cordl_internal_get_length();

  constexpr float_t const& __cordl_internal_get_minAlpha() const;

  constexpr float_t& __cordl_internal_get_minAlpha();

  constexpr float_t const& __cordl_internal_get_width() const;

  constexpr float_t& __cordl_internal_get_width();

  constexpr float_t const& __cordl_internal_get_widthEnd() const;

  constexpr float_t& __cordl_internal_get_widthEnd();

  constexpr float_t const& __cordl_internal_get_widthStart() const;

  constexpr float_t& __cordl_internal_get_widthStart();

  constexpr void __cordl_internal_set__collisionHeight_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__useCollision_k__BackingField(bool value);

  constexpr void __cordl_internal_set_alphaEnd(float_t value);

  constexpr void __cordl_internal_set_alphaMultiplier(float_t value);

  constexpr void __cordl_internal_set_alphaStart(float_t value);

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_height(float_t value);

  constexpr void __cordl_internal_set_heightCenter(float_t value);

  constexpr void __cordl_internal_set_length(float_t value);

  constexpr void __cordl_internal_set_minAlpha(float_t value);

  constexpr void __cordl_internal_set_width(float_t value);

  constexpr void __cordl_internal_set_widthEnd(float_t value);

  constexpr void __cordl_internal_set_widthStart(float_t value);

  /// @brief Method .ctor, addr 0x39db2a8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__alphaEndID();

  static inline int32_t getStaticF__alphaStartID();

  static inline int32_t getStaticF__colorID();

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock();

  static inline int32_t getStaticF__widthEndID();

  static inline int32_t getStaticF__widthStartID();

  /// @brief Method get_collisionHeight, addr 0x39daf4c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_collisionHeight();

  /// @brief Method get_useCollision, addr 0x39daf38, size 0x8, virtual false, abstract: false, final false
  inline bool get_useCollision();

  static inline void setStaticF__alphaEndID(int32_t value);

  static inline void setStaticF__alphaStartID(int32_t value);

  static inline void setStaticF__colorID(int32_t value);

  static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  static inline void setStaticF__widthEndID(int32_t value);

  static inline void setStaticF__widthStartID(int32_t value);

  /// @brief Method set_collisionHeight, addr 0x39daf54, size 0x8, virtual false, abstract: false, final false
  inline void set_collisionHeight(float_t value);

  /// @brief Method set_useCollision, addr 0x39daf40, size 0xc, virtual false, abstract: false, final false
  inline void set_useCollision(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParametricBoxController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParametricBoxController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParametricBoxController(ParametricBoxController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParametricBoxController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParametricBoxController(ParametricBoxController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16274 };

  /// @brief Field width, offset: 0x20, size: 0x4, def value: None
  float_t ___width;

  /// @brief Field height, offset: 0x24, size: 0x4, def value: None
  float_t ___height;

  /// @brief Field length, offset: 0x28, size: 0x4, def value: None
  float_t ___length;

  /// @brief Field heightCenter, offset: 0x2c, size: 0x4, def value: None
  float_t ___heightCenter;

  /// @brief Field color, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  /// @brief Field alphaMultiplier, offset: 0x40, size: 0x4, def value: None
  float_t ___alphaMultiplier;

  /// @brief Field minAlpha, offset: 0x44, size: 0x4, def value: None
  float_t ___minAlpha;

  /// @brief Field alphaStart, offset: 0x48, size: 0x4, def value: None
  float_t ___alphaStart;

  /// @brief Field alphaEnd, offset: 0x4c, size: 0x4, def value: None
  float_t ___alphaEnd;

  /// @brief Field widthStart, offset: 0x50, size: 0x4, def value: None
  float_t ___widthStart;

  /// @brief Field widthEnd, offset: 0x54, size: 0x4, def value: None
  float_t ___widthEnd;

  /// @brief Field <useCollision>k__BackingField, offset: 0x58, size: 0x1, def value: None
  bool ____useCollision_k__BackingField;

  /// @brief Field <collisionHeight>k__BackingField, offset: 0x5c, size: 0x4, def value: None
  float_t ____collisionHeight_k__BackingField;

  /// @brief Field _meshRenderer, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ____meshRenderer;

  /// @brief Field _transform, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// @brief Field _isInitialized, offset: 0x70, size: 0x1, def value: None
  bool ____isInitialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___width) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___height) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___length) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___heightCenter) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___color) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___alphaMultiplier) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___minAlpha) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___alphaStart) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___alphaEnd) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___widthStart) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___widthEnd) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ____useCollision_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ____collisionHeight_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ____meshRenderer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ____transform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ____isInitialized) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParametricBoxController, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ParametricBoxController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParametricBoxController*, "", "ParametricBoxController");
