#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
// Type: UnityEngine::Color
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10251))
// CS Name: ::UnityEngine::Color
struct CORDL_TYPE Color {
public:
  // Declarations
  __declspec(property(get = get_grayscale)) float_t grayscale;

  __declspec(property(get = get_linear))::UnityEngine::Color linear;

  __declspec(property(get = get_maxColorComponent)) float_t maxColorComponent;

  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Color>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Color>*();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Color>"
  constexpr ::System::IEquatable_1<::UnityEngine::Color>* i___System__IEquatable_1___UnityEngine__Color_();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method .ctor, addr 0x2cda778, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t r, float_t g, float_t b, float_t a);

  /// @brief Method .ctor, addr 0x2cda784, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t r, float_t g, float_t b);

  /// @brief Method ToString, addr 0x2cda798, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x2cda9ac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x2cda7a4, size 0x208, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method GetHashCode, addr 0x2cda9b4, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Equals, addr 0x2cdaa38, size 0xd4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x2cdab0c, size 0x80, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Color other);

  /// @brief Method op_Addition, addr 0x2cdab8c, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color op_Addition(::UnityEngine::Color a, ::UnityEngine::Color b);

  /// @brief Method op_Subtraction, addr 0x2cdaba0, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color op_Subtraction(::UnityEngine::Color a, ::UnityEngine::Color b);

  /// @brief Method op_Multiply, addr 0x2cdabb4, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color op_Multiply(::UnityEngine::Color a, ::UnityEngine::Color b);

  /// @brief Method op_Multiply, addr 0x2cdabc8, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color op_Multiply(::UnityEngine::Color a, float_t b);

  /// @brief Method op_Multiply, addr 0x2cdabdc, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color op_Multiply(float_t b, ::UnityEngine::Color a);

  /// @brief Method op_Division, addr 0x2cdabf4, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color op_Division(::UnityEngine::Color a, float_t b);

  /// @brief Method op_Equality, addr 0x2cdac08, size 0x40, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Color lhs, ::UnityEngine::Color rhs);

  /// @brief Method op_Inequality, addr 0x2cdac48, size 0x40, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Color lhs, ::UnityEngine::Color rhs);

  /// @brief Method Lerp, addr 0x2cdac88, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color Lerp(::UnityEngine::Color a, ::UnityEngine::Color b, float_t t);

  /// @brief Method LerpUnclamped, addr 0x2cdacd4, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color LerpUnclamped(::UnityEngine::Color a, ::UnityEngine::Color b, float_t t);

  /// @brief Method RGBMultiplied, addr 0x2cdad0c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color RGBMultiplied(float_t multiplier);

  /// @brief Method get_red, addr 0x2cdad28, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_red();

  /// @brief Method get_green, addr 0x2cdad3c, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_green();

  /// @brief Method get_blue, addr 0x2cdad50, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_blue();

  /// @brief Method get_white, addr 0x2cdad64, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_white();

  /// @brief Method get_black, addr 0x2cdad78, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_black();

  /// @brief Method get_yellow, addr 0x2cdad8c, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_yellow();

  /// @brief Method get_cyan, addr 0x2cdada8, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_cyan();

  /// @brief Method get_magenta, addr 0x2cdadbc, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_magenta();

  /// @brief Method get_gray, addr 0x2cdadd0, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_gray();

  /// @brief Method get_grey, addr 0x2cdade4, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_grey();

  /// @brief Method get_clear, addr 0x2cdadf8, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_clear();

  /// @brief Method get_grayscale, addr 0x2cdae0c, size 0x38, virtual false, abstract: false, final false
  inline float_t get_grayscale();

  /// @brief Method get_linear, addr 0x2cdae44, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_linear();

  /// @brief Method get_maxColorComponent, addr 0x2cdaf2c, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_maxColorComponent();

  /// @brief Method op_Implicit, addr 0x2cdaf48, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::UnityEngine::Color c);

  /// @brief Method op_Implicit, addr 0x2cdaf4c, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color op_Implicit___UnityEngine__Color(::UnityEngine::Vector4 v);

  /// @brief Method get_Item, addr 0x2cdaf50, size 0xd8, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x2cdb028, size 0xd8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, float_t value);

  /// @brief Method RGBToHSV, addr 0x2cdb100, size 0x114, virtual false, abstract: false, final false
  static inline void RGBToHSV(::UnityEngine::Color rgbColor, ByRef<float_t> H, ByRef<float_t> S, ByRef<float_t> V);

  /// @brief Method RGBToHSVHelper, addr 0x2cdb214, size 0x70, virtual false, abstract: false, final false
  static inline void RGBToHSVHelper(float_t offset, float_t dominantcolor, float_t colorone, float_t colortwo, ByRef<float_t> H, ByRef<float_t> S, ByRef<float_t> V);

  /// @brief Method HSVToRGB, addr 0x2cdb284, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color HSVToRGB(float_t H, float_t S, float_t V);

  /// @brief Method HSVToRGB, addr 0x2cdb28c, size 0x14c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color HSVToRGB(float_t H, float_t S, float_t V, bool hdr);

  // Ctor Parameters [CppParam { name: "r", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "g", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "b", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "a", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Color(float_t r, float_t g, float_t b, float_t a) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Color();

  /// @brief Field r, offset: 0x0, size: 0x4, def value: None
  float_t r;

  /// @brief Field g, offset: 0x4, size: 0x4, def value: None
  float_t g;

  /// @brief Field b, offset: 0x8, size: 0x4, def value: None
  float_t b;

  /// @brief Field a, offset: 0xc, size: 0x4, def value: None
  float_t a;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Color, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Color, r) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Color, g) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Color, b) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Color, a) == 0xc, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Color, "UnityEngine", "Color");
