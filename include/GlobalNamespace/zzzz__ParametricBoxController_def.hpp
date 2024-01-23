#pragma once
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
// Forward declare root types
namespace GlobalNamespace {
class ParametricBoxController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ParametricBoxController);
// Type: ::ParametricBoxController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10251))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14486))
// CS Name: ::ParametricBoxController*
class CORDL_TYPE ParametricBoxController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field width, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_width, put = __cordl_internal_set_width)) float_t width;

  /// @brief Field height, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_height, put = __cordl_internal_set_height)) float_t height;

  /// @brief Field length, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) float_t length;

  /// @brief Field heightCenter, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_heightCenter, put = __cordl_internal_set_heightCenter)) float_t heightCenter;

  /// @brief Field color, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color))::UnityEngine::Color color;

  /// @brief Field alphaMultiplier, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_alphaMultiplier, put = __cordl_internal_set_alphaMultiplier)) float_t alphaMultiplier;

  /// @brief Field minAlpha, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_minAlpha, put = __cordl_internal_set_minAlpha)) float_t minAlpha;

  /// @brief Field alphaStart, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_alphaStart, put = __cordl_internal_set_alphaStart)) float_t alphaStart;

  /// @brief Field alphaEnd, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_alphaEnd, put = __cordl_internal_set_alphaEnd)) float_t alphaEnd;

  /// @brief Field widthStart, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_widthStart, put = __cordl_internal_set_widthStart)) float_t widthStart;

  /// @brief Field widthEnd, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_widthEnd, put = __cordl_internal_set_widthEnd)) float_t widthEnd;

  /// @brief Field _meshRenderer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__meshRenderer, put = __cordl_internal_set__meshRenderer))::UnityW<::UnityEngine::MeshRenderer> _meshRenderer;

  /// @brief Field _materialPropertyBlock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__materialPropertyBlock, put = setStaticF__materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  /// @brief Field _colorID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__colorID, put = setStaticF__colorID)) int32_t _colorID;

  /// @brief Field _alphaStartID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__alphaStartID, put = setStaticF__alphaStartID)) int32_t _alphaStartID;

  /// @brief Field _alphaEndID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__alphaEndID, put = setStaticF__alphaEndID)) int32_t _alphaEndID;

  /// @brief Field _widthStartID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__widthStartID, put = setStaticF__widthStartID)) int32_t _widthStartID;

  /// @brief Field _widthEndID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__widthEndID, put = setStaticF__widthEndID)) int32_t _widthEndID;

  constexpr float_t& __cordl_internal_get_width();

  constexpr float_t const& __cordl_internal_get_width() const;

  constexpr void __cordl_internal_set_width(float_t value);

  constexpr float_t& __cordl_internal_get_height();

  constexpr float_t const& __cordl_internal_get_height() const;

  constexpr void __cordl_internal_set_height(float_t value);

  constexpr float_t& __cordl_internal_get_length();

  constexpr float_t const& __cordl_internal_get_length() const;

  constexpr void __cordl_internal_set_length(float_t value);

  constexpr float_t& __cordl_internal_get_heightCenter();

  constexpr float_t const& __cordl_internal_get_heightCenter() const;

  constexpr void __cordl_internal_set_heightCenter(float_t value);

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr float_t& __cordl_internal_get_alphaMultiplier();

  constexpr float_t const& __cordl_internal_get_alphaMultiplier() const;

  constexpr void __cordl_internal_set_alphaMultiplier(float_t value);

  constexpr float_t& __cordl_internal_get_minAlpha();

  constexpr float_t const& __cordl_internal_get_minAlpha() const;

  constexpr void __cordl_internal_set_minAlpha(float_t value);

  constexpr float_t& __cordl_internal_get_alphaStart();

  constexpr float_t const& __cordl_internal_get_alphaStart() const;

  constexpr void __cordl_internal_set_alphaStart(float_t value);

  constexpr float_t& __cordl_internal_get_alphaEnd();

  constexpr float_t const& __cordl_internal_get_alphaEnd() const;

  constexpr void __cordl_internal_set_alphaEnd(float_t value);

  constexpr float_t& __cordl_internal_get_widthStart();

  constexpr float_t const& __cordl_internal_get_widthStart() const;

  constexpr void __cordl_internal_set_widthStart(float_t value);

  constexpr float_t& __cordl_internal_get_widthEnd();

  constexpr float_t const& __cordl_internal_get_widthEnd() const;

  constexpr void __cordl_internal_set_widthEnd(float_t value);

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__meshRenderer();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__meshRenderer() const;

  constexpr void __cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock();

  static inline void setStaticF__colorID(int32_t value);

  static inline int32_t getStaticF__colorID();

  static inline void setStaticF__alphaStartID(int32_t value);

  static inline int32_t getStaticF__alphaStartID();

  static inline void setStaticF__alphaEndID(int32_t value);

  static inline int32_t getStaticF__alphaEndID();

  static inline void setStaticF__widthStartID(int32_t value);

  static inline int32_t getStaticF__widthStartID();

  static inline void setStaticF__widthEndID(int32_t value);

  static inline int32_t getStaticF__widthEndID();

  /// @brief Method Awake, addr 0x2108f34, size 0x20, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnEnable, addr 0x2108f54, size 0x28, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x21091d4, size 0x20, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method Refresh, addr 0x2108f7c, size 0x258, virtual false, abstract: false, final false
  inline void Refresh();

  static inline ::GlobalNamespace::ParametricBoxController* New_ctor();

  /// @brief Method .ctor, addr 0x21091f4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ParametricBoxController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParametricBoxController(ParametricBoxController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParametricBoxController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParametricBoxController(ParametricBoxController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParametricBoxController();

public:
  /// @brief Field width, offset: 0x18, size: 0x4, def value: None
  float_t ___width;

  /// @brief Field height, offset: 0x1c, size: 0x4, def value: None
  float_t ___height;

  /// @brief Field length, offset: 0x20, size: 0x4, def value: None
  float_t ___length;

  /// @brief Field heightCenter, offset: 0x24, size: 0x4, def value: None
  float_t ___heightCenter;

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParametricBoxController, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___width) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___height) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___length) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___heightCenter) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___color) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___alphaMultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___minAlpha) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___alphaStart) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___alphaEnd) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___widthStart) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ___widthEnd) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxController, ____meshRenderer) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ParametricBoxController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParametricBoxController*, "", "ParametricBoxController");
