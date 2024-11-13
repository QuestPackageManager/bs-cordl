#pragma once
// IWYU pragma private; include "TMPro/TMP_ColorGradient.hpp"
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
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMPro::TMP_ColorGradient*
class CORDL_TYPE TMP_ColorGradient : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field bottomLeft, offset 0x3c, size 0x10
  __declspec(property(get = __cordl_internal_get_bottomLeft, put = __cordl_internal_set_bottomLeft)) ::UnityEngine::Color bottomLeft;

  /// @brief Field bottomRight, offset 0x4c, size 0x10
  __declspec(property(get = __cordl_internal_get_bottomRight, put = __cordl_internal_set_bottomRight)) ::UnityEngine::Color bottomRight;

  /// @brief Field colorMode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_colorMode, put = __cordl_internal_set_colorMode)) ::TMPro::ColorMode colorMode;

  /// @brief Field k_DefaultColor, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_k_DefaultColor, put = setStaticF_k_DefaultColor)) ::UnityEngine::Color k_DefaultColor;

  /// @brief Field topLeft, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get_topLeft, put = __cordl_internal_set_topLeft)) ::UnityEngine::Color topLeft;

  /// @brief Field topRight, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get_topRight, put = __cordl_internal_set_topRight)) ::UnityEngine::Color topRight;

  static inline ::TMPro::TMP_ColorGradient* New_ctor();

  static inline ::TMPro::TMP_ColorGradient* New_ctor(::UnityEngine::Color color);

  static inline ::TMPro::TMP_ColorGradient* New_ctor(::UnityEngine::Color color0, ::UnityEngine::Color color1, ::UnityEngine::Color color2, ::UnityEngine::Color color3);

  constexpr ::UnityEngine::Color const& __cordl_internal_get_bottomLeft() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_bottomLeft();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_bottomRight() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_bottomRight();

  constexpr ::TMPro::ColorMode const& __cordl_internal_get_colorMode() const;

  constexpr ::TMPro::ColorMode& __cordl_internal_get_colorMode();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_topLeft() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_topLeft();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_topRight() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_topRight();

  constexpr void __cordl_internal_set_bottomLeft(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_bottomRight(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_colorMode(::TMPro::ColorMode value);

  constexpr void __cordl_internal_set_topLeft(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_topRight(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x4763a84, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4763b20, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color color);

  /// @brief Method .ctor, addr 0x4763b8c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color color0, ::UnityEngine::Color color1, ::UnityEngine::Color color2, ::UnityEngine::Color color3);

  static inline ::UnityEngine::Color getStaticF_k_DefaultColor();

  static inline void setStaticF_k_DefaultColor(::UnityEngine::Color value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_ColorGradient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_ColorGradient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_ColorGradient(TMP_ColorGradient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_ColorGradient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_ColorGradient(TMP_ColorGradient const&) = delete;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14417 };

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
