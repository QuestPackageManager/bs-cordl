#pragma once
// IWYU pragma private; include "GlobalNamespace/ParametricBoxFakeGlowController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ParametricBoxFakeGlowController)
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ParametricBoxFakeGlowController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ParametricBoxFakeGlowController);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParametricBoxFakeGlowController
class CORDL_TYPE ParametricBoxFakeGlowController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _colorID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__colorID, put = setStaticF__colorID)) int32_t _colorID;

  /// @brief Field _materialPropertyBlockController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController)) ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>
      _materialPropertyBlockController;

  /// @brief Field _meshRenderer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__meshRenderer, put = __cordl_internal_set__meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer> _meshRenderer;

  /// @brief Field _sizeParamsID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__sizeParamsID, put = setStaticF__sizeParamsID)) int32_t _sizeParamsID;

  /// @brief Field color, offset 0x34, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color)) ::UnityEngine::Color color;

  /// @brief Field edgeSize, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_edgeSize, put = __cordl_internal_set_edgeSize)) float_t edgeSize;

  /// @brief Field edgeSizeMultiplier, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_edgeSizeMultiplier, put = __cordl_internal_set_edgeSizeMultiplier)) float_t edgeSizeMultiplier;

  /// @brief Field height, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_height, put = __cordl_internal_set_height)) float_t height;

  /// @brief Field length, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) float_t length;

  __declspec(property(put = set_localPosition)) ::UnityEngine::Vector3 localPosition;

  /// @brief Field width, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_width, put = __cordl_internal_set_width)) float_t width;

  /// @brief Method Awake, addr 0x39db444, size 0x20, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::ParametricBoxFakeGlowController* New_ctor();

  /// @brief Method OnDisable, addr 0x39db5b0, size 0x20, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x39db464, size 0x28, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Refresh, addr 0x39db48c, size 0x124, virtual false, abstract: false, final false
  inline void Refresh();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__meshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__meshRenderer();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr float_t const& __cordl_internal_get_edgeSize() const;

  constexpr float_t& __cordl_internal_get_edgeSize();

  constexpr float_t const& __cordl_internal_get_edgeSizeMultiplier() const;

  constexpr float_t& __cordl_internal_get_edgeSizeMultiplier();

  constexpr float_t const& __cordl_internal_get_height() const;

  constexpr float_t& __cordl_internal_get_height();

  constexpr float_t const& __cordl_internal_get_length() const;

  constexpr float_t& __cordl_internal_get_length();

  constexpr float_t const& __cordl_internal_get_width() const;

  constexpr float_t& __cordl_internal_get_width();

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr void __cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_edgeSize(float_t value);

  constexpr void __cordl_internal_set_edgeSizeMultiplier(float_t value);

  constexpr void __cordl_internal_set_height(float_t value);

  constexpr void __cordl_internal_set_length(float_t value);

  constexpr void __cordl_internal_set_width(float_t value);

  /// @brief Method .ctor, addr 0x39db5d0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__colorID();

  static inline int32_t getStaticF__sizeParamsID();

  static inline void setStaticF__colorID(int32_t value);

  static inline void setStaticF__sizeParamsID(int32_t value);

  /// @brief Method set_localPosition, addr 0x39db3fc, size 0x48, virtual false, abstract: false, final false
  inline void set_localPosition(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParametricBoxFakeGlowController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParametricBoxFakeGlowController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParametricBoxFakeGlowController(ParametricBoxFakeGlowController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParametricBoxFakeGlowController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParametricBoxFakeGlowController(ParametricBoxFakeGlowController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16275 };

  /// @brief Field width, offset: 0x20, size: 0x4, def value: None
  float_t ___width;

  /// @brief Field height, offset: 0x24, size: 0x4, def value: None
  float_t ___height;

  /// @brief Field length, offset: 0x28, size: 0x4, def value: None
  float_t ___length;

  /// @brief Field edgeSize, offset: 0x2c, size: 0x4, def value: None
  float_t ___edgeSize;

  /// @brief Field edgeSizeMultiplier, offset: 0x30, size: 0x4, def value: None
  float_t ___edgeSizeMultiplier;

  /// @brief Field color, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  /// @brief Field _meshRenderer, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ____meshRenderer;

  /// @brief Field _materialPropertyBlockController, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParametricBoxFakeGlowController, ___width) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxFakeGlowController, ___height) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxFakeGlowController, ___length) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxFakeGlowController, ___edgeSize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxFakeGlowController, ___edgeSizeMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxFakeGlowController, ___color) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxFakeGlowController, ____meshRenderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParametricBoxFakeGlowController, ____materialPropertyBlockController) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParametricBoxFakeGlowController, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ParametricBoxFakeGlowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParametricBoxFakeGlowController*, "", "ParametricBoxFakeGlowController");
