#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RectangleFakeGlow)
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
class RectangleFakeGlow;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RectangleFakeGlow);
// Type: ::RectangleFakeGlow
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4990))
// CS Name: ::RectangleFakeGlow*
class CORDL_TYPE RectangleFakeGlow : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _size, offset 0x18, size 0x8
  __declspec(property(get = __get__size, put = __set__size))::UnityEngine::Vector2 _size;

  /// @brief Field _edgeSize, offset 0x20, size 0x4
  __declspec(property(get = __get__edgeSize, put = __set__edgeSize)) float_t _edgeSize;

  /// @brief Field _color, offset 0x24, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  /// @brief Field _materialPropertyBlockController, offset 0x38, size 0x8
  __declspec(property(get = __get__materialPropertyBlockController, put = __set__materialPropertyBlockController))::GlobalNamespace::MaterialPropertyBlockController* _materialPropertyBlockController;

  /// @brief Field _colorID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__colorID, put = setStaticF__colorID)) int32_t _colorID;

  /// @brief Field _sizeParamsID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__sizeParamsID, put = setStaticF__sizeParamsID)) int32_t _sizeParamsID;

  __declspec(property(get = get_color, put = set_color))::UnityEngine::Color color;

  constexpr ::UnityEngine::Vector2& __get__size();

  constexpr ::UnityEngine::Vector2 const& __get__size() const;

  constexpr void __set__size(::UnityEngine::Vector2 value);

  constexpr float_t& __get__edgeSize();

  constexpr float_t const& __get__edgeSize() const;

  constexpr void __set__edgeSize(float_t value);

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  constexpr ::GlobalNamespace::MaterialPropertyBlockController*& __get__materialPropertyBlockController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> const& __get__materialPropertyBlockController() const;

  constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value);

  static inline void setStaticF__colorID(int32_t value);

  static inline int32_t getStaticF__colorID();

  static inline void setStaticF__sizeParamsID(int32_t value);

  static inline int32_t getStaticF__sizeParamsID();

  /// @brief Method set_color, addr 0x23b4e30, size 0xc4, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method get_color, addr 0x23b4ef4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method Awake, addr 0x23b4f00, size 0x6c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnEnable, addr 0x23b4f6c, size 0x74, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x23b50f4, size 0x6c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method Refresh, addr 0x23b4fe0, size 0x114, virtual false, abstract: false, final false
  inline void Refresh();

  static inline ::GlobalNamespace::RectangleFakeGlow* New_ctor();

  /// @brief Method .ctor, addr 0x23b5160, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RectangleFakeGlow", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectangleFakeGlow(RectangleFakeGlow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectangleFakeGlow", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectangleFakeGlow(RectangleFakeGlow const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectangleFakeGlow();

public:
  /// @brief Field _size, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____size;

  /// @brief Field _edgeSize, offset: 0x20, size: 0x4, def value: None
  float_t ____edgeSize;

  /// @brief Field _color, offset: 0x24, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _materialPropertyBlockController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MaterialPropertyBlockController* ____materialPropertyBlockController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RectangleFakeGlow, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RectangleFakeGlow, ____size) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RectangleFakeGlow, ____edgeSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RectangleFakeGlow, ____color) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RectangleFakeGlow, ____materialPropertyBlockController) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RectangleFakeGlow);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RectangleFakeGlow*, "", "RectangleFakeGlow");
