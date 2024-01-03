#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__ColorMode_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(TMP_ColorGradient)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace TMPro {
class TMP_ColorGradient;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_ColorGradient);
// Type: TMPro::TMP_ColorGradient
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(12333)), TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12334))
// CS Name: ::TMPro::TMP_ColorGradient*
class CORDL_TYPE TMP_ColorGradient : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field colorMode, offset 0x18, size 0x4
  __declspec(property(get = __get_colorMode, put = __set_colorMode))::TMPro::ColorMode colorMode;

  /// @brief Field topLeft, offset 0x1c, size 0x10
  __declspec(property(get = __get_topLeft, put = __set_topLeft))::UnityEngine::Color topLeft;

  /// @brief Field topRight, offset 0x2c, size 0x10
  __declspec(property(get = __get_topRight, put = __set_topRight))::UnityEngine::Color topRight;

  /// @brief Field bottomLeft, offset 0x3c, size 0x10
  __declspec(property(get = __get_bottomLeft, put = __set_bottomLeft))::UnityEngine::Color bottomLeft;

  /// @brief Field bottomRight, offset 0x4c, size 0x10
  __declspec(property(get = __get_bottomRight, put = __set_bottomRight))::UnityEngine::Color bottomRight;

  /// @brief Field k_DefaultColor, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_k_DefaultColor, put = setStaticF_k_DefaultColor))::UnityEngine::Color k_DefaultColor;

  constexpr ::TMPro::ColorMode& __get_colorMode();

  constexpr ::TMPro::ColorMode const& __get_colorMode() const;

  constexpr void __set_colorMode(::TMPro::ColorMode value);

  constexpr ::UnityEngine::Color& __get_topLeft();

  constexpr ::UnityEngine::Color const& __get_topLeft() const;

  constexpr void __set_topLeft(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_topRight();

  constexpr ::UnityEngine::Color const& __get_topRight() const;

  constexpr void __set_topRight(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_bottomLeft();

  constexpr ::UnityEngine::Color const& __get_bottomLeft() const;

  constexpr void __set_bottomLeft(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_bottomRight();

  constexpr ::UnityEngine::Color const& __get_bottomRight() const;

  constexpr void __set_bottomRight(::UnityEngine::Color value);

  static inline void setStaticF_k_DefaultColor(::UnityEngine::Color value);

  static inline ::UnityEngine::Color getStaticF_k_DefaultColor();

  static inline ::TMPro::TMP_ColorGradient* New_ctor();

  /// @brief Method .ctor, addr 0x2c01eb8, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::TMPro::TMP_ColorGradient* New_ctor(::UnityEngine::Color color);

  /// @brief Method .ctor, addr 0x2c01f54, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color color);

  static inline ::TMPro::TMP_ColorGradient* New_ctor(::UnityEngine::Color color0, ::UnityEngine::Color color1, ::UnityEngine::Color color2, ::UnityEngine::Color color3);

  /// @brief Method .ctor, addr 0x2c01fc0, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color color0, ::UnityEngine::Color color1, ::UnityEngine::Color color2, ::UnityEngine::Color color3);

  // Ctor Parameters [CppParam { name: "", ty: "TMP_ColorGradient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_ColorGradient(TMP_ColorGradient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_ColorGradient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_ColorGradient(TMP_ColorGradient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_ColorGradient();

public:
  /// @brief Field colorMode, offset: 0x18, size: 0x4, def value: None
  ::TMPro::ColorMode ___colorMode;

  /// @brief Field topLeft, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Color ___topLeft;

  /// @brief Field topRight, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Color ___topRight;

  /// @brief Field bottomLeft, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Color ___bottomLeft;

  /// @brief Field bottomRight, offset: 0x4c, size: 0x10, def value: None
  ::UnityEngine::Color ___bottomRight;

  /// @brief Field k_DefaultColorMode value: static_cast<int32_t>(0x3)
  static ::TMPro::ColorMode const k_DefaultColorMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_ColorGradient, 0x60>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_ColorGradient, ___colorMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_ColorGradient, ___topLeft) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_ColorGradient, ___topRight) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_ColorGradient, ___bottomLeft) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_ColorGradient, ___bottomRight) == 0x4c, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_ColorGradient);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_ColorGradient*, "TMPro", "TMP_ColorGradient");
