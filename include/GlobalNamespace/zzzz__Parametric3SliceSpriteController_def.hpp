#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Parametric3SliceSpriteController)
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class Parametric3SliceSpriteController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Parametric3SliceSpriteController);
// Type: ::Parametric3SliceSpriteController
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 97, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Parametric3SliceSpriteController*
class CORDL_TYPE Parametric3SliceSpriteController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _alphaEndID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__alphaEndID, put = setStaticF__alphaEndID)) int32_t _alphaEndID;

  /// @brief Field _alphaStartID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__alphaStartID, put = setStaticF__alphaStartID)) int32_t _alphaStartID;

  /// @brief Field _colorID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__colorID, put = setStaticF__colorID)) int32_t _colorID;

  /// @brief Field _instanceCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__instanceCount, put = setStaticF__instanceCount)) int32_t _instanceCount;

  /// @brief Field _isInitialized, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _materialPropertyBlock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__materialPropertyBlock, put = setStaticF__materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  /// @brief Field _mesh, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__mesh, put = setStaticF__mesh))::UnityW<::UnityEngine::Mesh> _mesh;

  /// @brief Field _meshFilter, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__meshFilter, put = __cordl_internal_set__meshFilter))::UnityW<::UnityEngine::MeshFilter> _meshFilter;

  /// @brief Field _meshRenderer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__meshRenderer, put = __cordl_internal_set__meshRenderer))::UnityW<::UnityEngine::MeshRenderer> _meshRenderer;

  /// @brief Field _sizeParamsID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__sizeParamsID, put = setStaticF__sizeParamsID)) int32_t _sizeParamsID;

  /// @brief Field _widthEndID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__widthEndID, put = setStaticF__widthEndID)) int32_t _widthEndID;

  /// @brief Field _widthMultiplier, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__widthMultiplier, put = __cordl_internal_set__widthMultiplier)) float_t _widthMultiplier;

  /// @brief Field _widthStartID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__widthStartID, put = setStaticF__widthStartID)) int32_t _widthStartID;

  /// @brief Field alphaEnd, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_alphaEnd, put = __cordl_internal_set_alphaEnd)) float_t alphaEnd;

  /// @brief Field alphaMultiplier, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_alphaMultiplier, put = __cordl_internal_set_alphaMultiplier)) float_t alphaMultiplier;

  /// @brief Field alphaStart, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_alphaStart, put = __cordl_internal_set_alphaStart)) float_t alphaStart;

  /// @brief Field center, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_center, put = __cordl_internal_set_center)) float_t center;

  /// @brief Field color, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color))::UnityEngine::Color color;

  /// @brief Field length, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) float_t length;

  /// @brief Field minAlpha, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_minAlpha, put = __cordl_internal_set_minAlpha)) float_t minAlpha;

  /// @brief Field width, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_width, put = __cordl_internal_set_width)) float_t width;

  /// @brief Field widthEnd, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_widthEnd, put = __cordl_internal_set_widthEnd)) float_t widthEnd;

  /// @brief Field widthStart, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_widthStart, put = __cordl_internal_set_widthStart)) float_t widthStart;

  /// @brief Method Awake, addr 0x226b34c, size 0x164, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CreateMesh, addr 0x226b534, size 0x2e8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> CreateMesh();

  /// @brief Method Init, addr 0x226b4b0, size 0x84, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::Parametric3SliceSpriteController* New_ctor();

  /// @brief Method OnDestroy, addr 0x226bafc, size 0xc4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x226badc, size 0x20, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x226b88c, size 0x2c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Refresh, addr 0x226b8b8, size 0x224, virtual false, abstract: false, final false
  inline void Refresh();

  /// @brief Method Start, addr 0x226b81c, size 0x70, virtual false, abstract: false, final false
  inline void Start();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__meshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__meshFilter();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__meshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__meshRenderer();

  constexpr float_t const& __cordl_internal_get__widthMultiplier() const;

  constexpr float_t& __cordl_internal_get__widthMultiplier();

  constexpr float_t const& __cordl_internal_get_alphaEnd() const;

  constexpr float_t& __cordl_internal_get_alphaEnd();

  constexpr float_t const& __cordl_internal_get_alphaMultiplier() const;

  constexpr float_t& __cordl_internal_get_alphaMultiplier();

  constexpr float_t const& __cordl_internal_get_alphaStart() const;

  constexpr float_t& __cordl_internal_get_alphaStart();

  constexpr float_t const& __cordl_internal_get_center() const;

  constexpr float_t& __cordl_internal_get_center();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

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

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set__widthMultiplier(float_t value);

  constexpr void __cordl_internal_set_alphaEnd(float_t value);

  constexpr void __cordl_internal_set_alphaMultiplier(float_t value);

  constexpr void __cordl_internal_set_alphaStart(float_t value);

  constexpr void __cordl_internal_set_center(float_t value);

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_length(float_t value);

  constexpr void __cordl_internal_set_minAlpha(float_t value);

  constexpr void __cordl_internal_set_width(float_t value);

  constexpr void __cordl_internal_set_widthEnd(float_t value);

  constexpr void __cordl_internal_set_widthStart(float_t value);

  /// @brief Method .ctor, addr 0x226bbc0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__alphaEndID();

  static inline int32_t getStaticF__alphaStartID();

  static inline int32_t getStaticF__colorID();

  static inline int32_t getStaticF__instanceCount();

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock();

  static inline ::UnityW<::UnityEngine::Mesh> getStaticF__mesh();

  static inline int32_t getStaticF__sizeParamsID();

  static inline int32_t getStaticF__widthEndID();

  static inline int32_t getStaticF__widthStartID();

  static inline void setStaticF__alphaEndID(int32_t value);

  static inline void setStaticF__alphaStartID(int32_t value);

  static inline void setStaticF__colorID(int32_t value);

  static inline void setStaticF__instanceCount(int32_t value);

  static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  static inline void setStaticF__mesh(::UnityW<::UnityEngine::Mesh> value);

  static inline void setStaticF__sizeParamsID(int32_t value);

  static inline void setStaticF__widthEndID(int32_t value);

  static inline void setStaticF__widthStartID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Parametric3SliceSpriteController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Parametric3SliceSpriteController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Parametric3SliceSpriteController(Parametric3SliceSpriteController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Parametric3SliceSpriteController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Parametric3SliceSpriteController(Parametric3SliceSpriteController const&) = delete;

  /// @brief Field _widthMultiplier, offset: 0x18, size: 0x4, def value: None
  float_t ____widthMultiplier;

  /// @brief Field width, offset: 0x1c, size: 0x4, def value: None
  float_t ___width;

  /// @brief Field length, offset: 0x20, size: 0x4, def value: None
  float_t ___length;

  /// @brief Field center, offset: 0x24, size: 0x4, def value: None
  float_t ___center;

  /// @brief Field color, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  /// @brief Field alphaMultiplier, offset: 0x38, size: 0x4, def value: None
  float_t ___alphaMultiplier;

  /// @brief Field minAlpha, offset: 0x3c, size: 0x4, def value: None
  float_t ___minAlpha;

  /// @brief Field alphaStart, offset: 0x40, size: 0x4, def value: None
  float_t ___alphaStart;

  /// @brief Field alphaEnd, offset: 0x44, size: 0x4, def value: None
  float_t ___alphaEnd;

  /// @brief Field widthStart, offset: 0x48, size: 0x4, def value: None
  float_t ___widthStart;

  /// @brief Field widthEnd, offset: 0x4c, size: 0x4, def value: None
  float_t ___widthEnd;

  /// @brief Field _meshRenderer, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ____meshRenderer;

  /// @brief Field _meshFilter, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ____meshFilter;

  /// @brief Field _isInitialized, offset: 0x60, size: 0x1, def value: None
  bool ____isInitialized;

  /// @brief Field kMaxLength offset 0xffffffff size 0x4
  static constexpr float_t kMaxLength{ 2500.0 };

  /// @brief Field kMaxWidth offset 0xffffffff size 0x4
  static constexpr float_t kMaxWidth{ 10.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Parametric3SliceSpriteController, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Parametric3SliceSpriteController, ____widthMultiplier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Parametric3SliceSpriteController, ___width) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Parametric3SliceSpriteController, ___length) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Parametric3SliceSpriteController, ___center) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Parametric3SliceSpriteController, ___color) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Parametric3SliceSpriteController, ___alphaMultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Parametric3SliceSpriteController, ___minAlpha) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Parametric3SliceSpriteController, ___alphaStart) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Parametric3SliceSpriteController, ___alphaEnd) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Parametric3SliceSpriteController, ___widthStart) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Parametric3SliceSpriteController, ___widthEnd) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Parametric3SliceSpriteController, ____meshRenderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Parametric3SliceSpriteController, ____meshFilter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Parametric3SliceSpriteController, ____isInitialized) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Parametric3SliceSpriteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Parametric3SliceSpriteController*, "", "Parametric3SliceSpriteController");
