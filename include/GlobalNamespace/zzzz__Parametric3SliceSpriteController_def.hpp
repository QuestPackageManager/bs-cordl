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
class Mesh;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MaterialPropertyBlock;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14485))
// CS Name: ::Parametric3SliceSpriteController*
class CORDL_TYPE Parametric3SliceSpriteController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _widthMultiplier, offset 0x18, size 0x4
  __declspec(property(get = __get__widthMultiplier, put = __set__widthMultiplier)) float_t _widthMultiplier;

  /// @brief Field width, offset 0x1c, size 0x4
  __declspec(property(get = __get_width, put = __set_width)) float_t width;

  /// @brief Field length, offset 0x20, size 0x4
  __declspec(property(get = __get_length, put = __set_length)) float_t length;

  /// @brief Field center, offset 0x24, size 0x4
  __declspec(property(get = __get_center, put = __set_center)) float_t center;

  /// @brief Field color, offset 0x28, size 0x10
  __declspec(property(get = __get_color, put = __set_color))::UnityEngine::Color color;

  /// @brief Field alphaMultiplier, offset 0x38, size 0x4
  __declspec(property(get = __get_alphaMultiplier, put = __set_alphaMultiplier)) float_t alphaMultiplier;

  /// @brief Field minAlpha, offset 0x3c, size 0x4
  __declspec(property(get = __get_minAlpha, put = __set_minAlpha)) float_t minAlpha;

  /// @brief Field alphaStart, offset 0x40, size 0x4
  __declspec(property(get = __get_alphaStart, put = __set_alphaStart)) float_t alphaStart;

  /// @brief Field alphaEnd, offset 0x44, size 0x4
  __declspec(property(get = __get_alphaEnd, put = __set_alphaEnd)) float_t alphaEnd;

  /// @brief Field widthStart, offset 0x48, size 0x4
  __declspec(property(get = __get_widthStart, put = __set_widthStart)) float_t widthStart;

  /// @brief Field widthEnd, offset 0x4c, size 0x4
  __declspec(property(get = __get_widthEnd, put = __set_widthEnd)) float_t widthEnd;

  /// @brief Field _meshRenderer, offset 0x50, size 0x8
  __declspec(property(get = __get__meshRenderer, put = __set__meshRenderer))::UnityEngine::MeshRenderer* _meshRenderer;

  /// @brief Field _meshFilter, offset 0x58, size 0x8
  __declspec(property(get = __get__meshFilter, put = __set__meshFilter))::UnityEngine::MeshFilter* _meshFilter;

  /// @brief Field _isInitialized, offset 0x60, size 0x1
  __declspec(property(get = __get__isInitialized, put = __set__isInitialized)) bool _isInitialized;

  /// @brief Field _colorID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__colorID, put = setStaticF__colorID)) int32_t _colorID;

  /// @brief Field _sizeParamsID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__sizeParamsID, put = setStaticF__sizeParamsID)) int32_t _sizeParamsID;

  /// @brief Field _alphaStartID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__alphaStartID, put = setStaticF__alphaStartID)) int32_t _alphaStartID;

  /// @brief Field _alphaEndID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__alphaEndID, put = setStaticF__alphaEndID)) int32_t _alphaEndID;

  /// @brief Field _widthStartID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__widthStartID, put = setStaticF__widthStartID)) int32_t _widthStartID;

  /// @brief Field _widthEndID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__widthEndID, put = setStaticF__widthEndID)) int32_t _widthEndID;

  /// @brief Field _materialPropertyBlock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__materialPropertyBlock, put = setStaticF__materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  /// @brief Field _mesh, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__mesh, put = setStaticF__mesh))::UnityEngine::Mesh* _mesh;

  /// @brief Field _instanceCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__instanceCount, put = setStaticF__instanceCount)) int32_t _instanceCount;

  constexpr float_t& __get__widthMultiplier();

  constexpr float_t const& __get__widthMultiplier() const;

  constexpr void __set__widthMultiplier(float_t value);

  constexpr float_t& __get_width();

  constexpr float_t const& __get_width() const;

  constexpr void __set_width(float_t value);

  constexpr float_t& __get_length();

  constexpr float_t const& __get_length() const;

  constexpr void __set_length(float_t value);

  constexpr float_t& __get_center();

  constexpr float_t const& __get_center() const;

  constexpr void __set_center(float_t value);

  constexpr ::UnityEngine::Color& __get_color();

  constexpr ::UnityEngine::Color const& __get_color() const;

  constexpr void __set_color(::UnityEngine::Color value);

  constexpr float_t& __get_alphaMultiplier();

  constexpr float_t const& __get_alphaMultiplier() const;

  constexpr void __set_alphaMultiplier(float_t value);

  constexpr float_t& __get_minAlpha();

  constexpr float_t const& __get_minAlpha() const;

  constexpr void __set_minAlpha(float_t value);

  constexpr float_t& __get_alphaStart();

  constexpr float_t const& __get_alphaStart() const;

  constexpr void __set_alphaStart(float_t value);

  constexpr float_t& __get_alphaEnd();

  constexpr float_t const& __get_alphaEnd() const;

  constexpr void __set_alphaEnd(float_t value);

  constexpr float_t& __get_widthStart();

  constexpr float_t const& __get_widthStart() const;

  constexpr void __set_widthStart(float_t value);

  constexpr float_t& __get_widthEnd();

  constexpr float_t const& __get_widthEnd() const;

  constexpr void __set_widthEnd(float_t value);

  constexpr ::UnityEngine::MeshRenderer*& __get__meshRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& __get__meshRenderer() const;

  constexpr void __set__meshRenderer(::UnityEngine::MeshRenderer* value);

  constexpr ::UnityEngine::MeshFilter*& __get__meshFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& __get__meshFilter() const;

  constexpr void __set__meshFilter(::UnityEngine::MeshFilter* value);

  constexpr bool& __get__isInitialized();

  constexpr bool const& __get__isInitialized() const;

  constexpr void __set__isInitialized(bool value);

  static inline void setStaticF__colorID(int32_t value);

  static inline int32_t getStaticF__colorID();

  static inline void setStaticF__sizeParamsID(int32_t value);

  static inline int32_t getStaticF__sizeParamsID();

  static inline void setStaticF__alphaStartID(int32_t value);

  static inline int32_t getStaticF__alphaStartID();

  static inline void setStaticF__alphaEndID(int32_t value);

  static inline int32_t getStaticF__alphaEndID();

  static inline void setStaticF__widthStartID(int32_t value);

  static inline int32_t getStaticF__widthStartID();

  static inline void setStaticF__widthEndID(int32_t value);

  static inline int32_t getStaticF__widthEndID();

  static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock();

  static inline void setStaticF__mesh(::UnityEngine::Mesh* value);

  static inline ::UnityEngine::Mesh* getStaticF__mesh();

  static inline void setStaticF__instanceCount(int32_t value);

  static inline int32_t getStaticF__instanceCount();

  /// @brief Method Awake addr 0x210853c size 0x164 virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x2108a0c size 0x70 virtual false final false
  inline void Start();

  /// @brief Method OnEnable addr 0x2108a7c size 0x2c virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x2108ccc size 0x20 virtual false final false
  inline void OnDisable();

  /// @brief Method OnDestroy addr 0x2108cec size 0xc4 virtual false final false
  inline void OnDestroy();

  /// @brief Method Init addr 0x21086a0 size 0x84 virtual false final false
  inline void Init();

  /// @brief Method CreateMesh addr 0x2108724 size 0x2e8 virtual false final false
  inline ::UnityEngine::Mesh* CreateMesh();

  /// @brief Method Refresh addr 0x2108aa8 size 0x224 virtual false final false
  inline void Refresh();

  static inline ::GlobalNamespace::Parametric3SliceSpriteController* New_ctor();

  /// @brief Method .ctor addr 0x2108db0 size 0x24 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Parametric3SliceSpriteController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Parametric3SliceSpriteController(Parametric3SliceSpriteController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Parametric3SliceSpriteController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Parametric3SliceSpriteController(Parametric3SliceSpriteController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Parametric3SliceSpriteController();

public:
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
  ::UnityEngine::MeshRenderer* ____meshRenderer;

  /// @brief Field _meshFilter, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::MeshFilter* ____meshFilter;

  /// @brief Field _isInitialized, offset: 0x60, size: 0x1, def value: None
  bool ____isInitialized;

  /// @brief Field kMaxWidth offset 0xffffffff size 0x4
  static constexpr float_t kMaxWidth{ 10.0 };

  /// @brief Field kMaxLength offset 0xffffffff size 0x4
  static constexpr float_t kMaxLength{ 2500.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Parametric3SliceSpriteController, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Parametric3SliceSpriteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Parametric3SliceSpriteController*, "", "Parametric3SliceSpriteController");
