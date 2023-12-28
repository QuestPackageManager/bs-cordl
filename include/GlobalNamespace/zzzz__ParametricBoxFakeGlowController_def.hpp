#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ParametricBoxFakeGlowController)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
class ParametricBoxFakeGlowController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ParametricBoxFakeGlowController);
// Type: ::ParametricBoxFakeGlowController
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14487))
// CS Name: ::ParametricBoxFakeGlowController*
class CORDL_TYPE ParametricBoxFakeGlowController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field width, offset 0x18, size 0x4
  __declspec(property(get = __get_width, put = __set_width)) float_t width;

  /// @brief Field height, offset 0x1c, size 0x4
  __declspec(property(get = __get_height, put = __set_height)) float_t height;

  /// @brief Field length, offset 0x20, size 0x4
  __declspec(property(get = __get_length, put = __set_length)) float_t length;

  /// @brief Field edgeSize, offset 0x24, size 0x4
  __declspec(property(get = __get_edgeSize, put = __set_edgeSize)) float_t edgeSize;

  /// @brief Field edgeSizeMultiplier, offset 0x28, size 0x4
  __declspec(property(get = __get_edgeSizeMultiplier, put = __set_edgeSizeMultiplier)) float_t edgeSizeMultiplier;

  /// @brief Field color, offset 0x2c, size 0x10
  __declspec(property(get = __get_color, put = __set_color))::UnityEngine::Color color;

  /// @brief Field _meshRenderer, offset 0x40, size 0x8
  __declspec(property(get = __get__meshRenderer, put = __set__meshRenderer))::UnityEngine::MeshRenderer* _meshRenderer;

  /// @brief Field _materialPropertyBlockController, offset 0x48, size 0x8
  __declspec(property(get = __get__materialPropertyBlockController, put = __set__materialPropertyBlockController))::GlobalNamespace::MaterialPropertyBlockController* _materialPropertyBlockController;

  /// @brief Field _colorID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__colorID, put = setStaticF__colorID)) int32_t _colorID;

  /// @brief Field _sizeParamsID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__sizeParamsID, put = setStaticF__sizeParamsID)) int32_t _sizeParamsID;

  __declspec(property(put = set_localPosition))::UnityEngine::Vector3 localPosition;

  constexpr float_t& __get_width();

  constexpr float_t const& __get_width() const;

  constexpr void __set_width(float_t value);

  constexpr float_t& __get_height();

  constexpr float_t const& __get_height() const;

  constexpr void __set_height(float_t value);

  constexpr float_t& __get_length();

  constexpr float_t const& __get_length() const;

  constexpr void __set_length(float_t value);

  constexpr float_t& __get_edgeSize();

  constexpr float_t const& __get_edgeSize() const;

  constexpr void __set_edgeSize(float_t value);

  constexpr float_t& __get_edgeSizeMultiplier();

  constexpr float_t const& __get_edgeSizeMultiplier() const;

  constexpr void __set_edgeSizeMultiplier(float_t value);

  constexpr ::UnityEngine::Color& __get_color();

  constexpr ::UnityEngine::Color const& __get_color() const;

  constexpr void __set_color(::UnityEngine::Color value);

  constexpr ::UnityEngine::MeshRenderer*& __get__meshRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& __get__meshRenderer() const;

  constexpr void __set__meshRenderer(::UnityEngine::MeshRenderer* value);

  constexpr ::GlobalNamespace::MaterialPropertyBlockController*& __get__materialPropertyBlockController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> const& __get__materialPropertyBlockController() const;

  constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value);

  static inline void setStaticF__colorID(int32_t value);

  static inline int32_t getStaticF__colorID();

  static inline void setStaticF__sizeParamsID(int32_t value);

  static inline int32_t getStaticF__sizeParamsID();

  /// @brief Method set_localPosition addr 0x2109340 size 0x48 virtual false final false
  inline void set_localPosition(::UnityEngine::Vector3 value);

  /// @brief Method Awake addr 0x2109388 size 0x20 virtual false final false
  inline void Awake();

  /// @brief Method OnEnable addr 0x21093a8 size 0x28 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x21094f4 size 0x20 virtual false final false
  inline void OnDisable();

  /// @brief Method Refresh addr 0x21093d0 size 0x124 virtual false final false
  inline void Refresh();

  static inline ::GlobalNamespace::ParametricBoxFakeGlowController* New_ctor();

  /// @brief Method .ctor addr 0x2109514 size 0x1c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ParametricBoxFakeGlowController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParametricBoxFakeGlowController(ParametricBoxFakeGlowController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParametricBoxFakeGlowController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParametricBoxFakeGlowController(ParametricBoxFakeGlowController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParametricBoxFakeGlowController();

public:
  /// @brief Field width, offset: 0x18, size: 0x4, def value: None
  float_t ___width;

  /// @brief Field height, offset: 0x1c, size: 0x4, def value: None
  float_t ___height;

  /// @brief Field length, offset: 0x20, size: 0x4, def value: None
  float_t ___length;

  /// @brief Field edgeSize, offset: 0x24, size: 0x4, def value: None
  float_t ___edgeSize;

  /// @brief Field edgeSizeMultiplier, offset: 0x28, size: 0x4, def value: None
  float_t ___edgeSizeMultiplier;

  /// @brief Field color, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  /// @brief Field _meshRenderer, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::MeshRenderer* ____meshRenderer;

  /// @brief Field _materialPropertyBlockController, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::MaterialPropertyBlockController* ____materialPropertyBlockController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParametricBoxFakeGlowController, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ParametricBoxFakeGlowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParametricBoxFakeGlowController*, "", "ParametricBoxFakeGlowController");
