#pragma once
// IWYU pragma private; include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Color)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
struct Color;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Color);
DEFINE_IL2CPP_CLASS(::UnityEngine::Color, "UnityEngine", "Color");
// [NativeClass("ColorRGBAf")]
// [DefaultMember("Item")]
// [NativeHeader("Runtime/Math/Color.h")]
// [RequiredByNativeCode(Optional = true, GenerateProxy = true)]
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Color
struct CORDL_TYPE Color {
public:
  // Declarations
  __declspec(property(get = get_Item)) float_t Item[];

  __declspec(property(get = get_gamma)) ::UnityEngine::Color gamma;

  __declspec(property(get = get_grayscale)) float_t grayscale;

  __declspec(property(get = get_linear)) ::UnityEngine::Color linear;

  __declspec(property(get = get_maxColorComponent)) float_t maxColorComponent;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Color>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Color>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6f230d8, size 0x160, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6f23238, size 0xf4, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Color other);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6f2332c, size 0x104, virtual false, abstract: false, final false
  inline bool Equals(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Color> other);

  /// [IsReadOnly]
  /// @brief Method GetHashCode, addr 0x6f2306c, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method HSVToRGB, addr 0x6f23a04, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color HSVToRGB(float_t H, float_t S, float_t V);

  /// @brief Method HSVToRGB, addr 0x6f23a0c, size 0x1f8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color HSVToRGB(float_t H, float_t S, float_t V, bool hdr);

  /// @brief Method Lerp, addr 0x6f2352c, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color Lerp(::UnityEngine::Color a, ::UnityEngine::Color b, float_t t);

  /// @brief Method LerpUnclamped, addr 0x6f2357c, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color LerpUnclamped(::UnityEngine::Color a, ::UnityEngine::Color b, float_t t);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// [IsReadOnly]
  /// @brief Method RGBMultiplied, addr 0x6f235b4, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color RGBMultiplied(float_t multiplier);

  /// @brief Method RGBToHSV, addr 0x6f23854, size 0x140, virtual false, abstract: false, final false
  static inline void RGBToHSV(::UnityEngine::Color rgbColor, ::by_ref<float_t> H, ::by_ref<float_t> S, ::by_ref<float_t> V);

  /// @brief Method RGBToHSVHelper, addr 0x6f23994, size 0x70, virtual false, abstract: false, final false
  static inline void RGBToHSVHelper(float_t offset, float_t dominantcolor, float_t colorone, float_t colortwo, ::by_ref<float_t> H, ::by_ref<float_t> S, ::by_ref<float_t> V);

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6f22e38, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6f22e48, size 0xc, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6f22e54, size 0x218, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6f22e24, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t r, float_t g, float_t b);

  /// @brief Method .ctor, addr 0x6f22e18, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t r, float_t g, float_t b, float_t a);

  /// [IsReadOnly]
  /// @brief Method get_Item, addr 0x6f23784, size 0xd0, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t index);

  /// @brief Method get_black, addr 0x6f23c04, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_black();

  /// @brief Method get_blue, addr 0x6f23c18, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_blue();

  /// @brief Method get_clear, addr 0x6f23c2c, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_clear();

  /// @brief Method get_cyan, addr 0x6f23c40, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_cyan();

  /// [IsReadOnly]
  /// @brief Method get_gamma, addr 0x6f236b0, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_gamma();

  /// @brief Method get_gray, addr 0x6f23c54, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_gray();

  /// @brief Method get_gray5, addr 0x6f23c7c, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_gray5();

  /// [IsReadOnly]
  /// @brief Method get_grayscale, addr 0x6f235d0, size 0x30, virtual false, abstract: false, final false
  inline float_t get_grayscale();

  /// @brief Method get_green, addr 0x6f23c90, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_green();

  /// @brief Method get_grey, addr 0x6f23c68, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_grey();

  /// [IsReadOnly]
  /// @brief Method get_linear, addr 0x6f23600, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_linear();

  /// @brief Method get_magenta, addr 0x6f23ca4, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_magenta();

  /// [IsReadOnly]
  /// @brief Method get_maxColorComponent, addr 0x6f23760, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_maxColorComponent();

  /// @brief Method get_red, addr 0x6f23cb8, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_red();

  /// @brief Method get_white, addr 0x6f23ccc, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_white();

  /// @brief Method get_yellow, addr 0x6f23ce0, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_yellow();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Color>"
  constexpr ::System::IEquatable_1<::UnityEngine::Color>* i___System__IEquatable_1___UnityEngine__Color_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6f23430, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color op_Addition(::UnityEngine::Color a, ::UnityEngine::Color b);

  /// @brief Method op_Division, addr 0x6f23498, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color op_Division(::UnityEngine::Color a, float_t b);

  /// @brief Method op_Equality, addr 0x6f234ac, size 0x40, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Color lhs, ::UnityEngine::Color rhs);

  /// @brief Method op_Implicit, addr 0x6f23780, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color op_Implicit___UnityEngine__Color(::UnityEngine::Vector4 v);

  /// @brief Method op_Implicit, addr 0x6f2377c, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::UnityEngine::Color c);

  /// @brief Method op_Inequality, addr 0x6f234ec, size 0x40, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Color lhs, ::UnityEngine::Color rhs);

  /// @brief Method op_Multiply, addr 0x6f23458, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color op_Multiply(::UnityEngine::Color a, ::UnityEngine::Color b);

  /// @brief Method op_Multiply, addr 0x6f2346c, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color op_Multiply(::UnityEngine::Color a, float_t b);

  /// @brief Method op_Multiply, addr 0x6f23480, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color op_Multiply(float_t b, ::UnityEngine::Color a);

  /// @brief Method op_Subtraction, addr 0x6f23444, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color op_Subtraction(::UnityEngine::Color a, ::UnityEngine::Color b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Color();

  // Ctor Parameters [CppParam { name: "r", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "g", ty: "float_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "b", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "a", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr Color(float_t r, float_t g, float_t b, float_t a) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9832 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field r, offset: 0x0, size: 0x4, def value: None
  float_t r;

  /// @brief Field g, offset: 0x4, size: 0x4, def value: None
  float_t g;

  /// @brief Field b, offset: 0x8, size: 0x4, def value: None
  float_t b;

  /// @brief Field a, offset: 0xc, size: 0x4, def value: None
  float_t a;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Color, r) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Color, g) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Color, b) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Color, a) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Color) == 0x10, "Size mismatch!");

} // namespace UnityEngine
