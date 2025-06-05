#pragma once
// IWYU pragma private; include "UnityEngine/Rect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Rect)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct Rect;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rect);
// Dependencies System.IEquatable`1<T>, System.IFormattable
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Rect
struct CORDL_TYPE Rect {
public:
  // Declarations
  __declspec(property(get = get_center)) ::UnityEngine::Vector2 center;

  __declspec(property(get = get_height, put = set_height)) float_t height;

  __declspec(property(get = get_max, put = set_max)) ::UnityEngine::Vector2 max;

  __declspec(property(get = get_min, put = set_min)) ::UnityEngine::Vector2 min;

  __declspec(property(get = get_position, put = set_position)) ::UnityEngine::Vector2 position;

  __declspec(property(get = get_size, put = set_size)) ::UnityEngine::Vector2 size;

  __declspec(property(get = get_width, put = set_width)) float_t width;

  __declspec(property(get = get_x, put = set_x)) float_t x;

  __declspec(property(get = get_xMax, put = set_xMax)) float_t xMax;

  __declspec(property(get = get_xMin, put = set_xMin)) float_t xMin;

  __declspec(property(get = get_y, put = set_y)) float_t y;

  __declspec(property(get = get_yMax, put = set_yMax)) float_t yMax;

  __declspec(property(get = get_yMin, put = set_yMin)) float_t yMin;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rect>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rect>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Contains, addr 0x4872b40, size 0x44, virtual false, abstract: false, final false
  inline bool Contains(::UnityEngine::Vector2 point);

  /// @brief Method Contains, addr 0x4872b84, size 0x44, virtual false, abstract: false, final false
  inline bool Contains(::UnityEngine::Vector3 point);

  /// @brief Method Equals, addr 0x4872dc4, size 0xec, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x4872eb0, size 0xa0, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rect other);

  /// @brief Method GetHashCode, addr 0x4872d3c, size 0x88, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method MinMaxRect, addr 0x48729ec, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect MinMaxRect(float_t xmin, float_t ymin, float_t xmax, float_t ymax);

  /// @brief Method OrderMinMax, addr 0x4872bc8, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect OrderMinMax(::UnityEngine::Rect rect);

  /// @brief Method Overlaps, addr 0x4872bf4, size 0x4c, virtual false, abstract: false, final false
  inline bool Overlaps(::UnityEngine::Rect other);

  /// @brief Method Overlaps, addr 0x4872c40, size 0x94, virtual false, abstract: false, final false
  inline bool Overlaps(::UnityEngine::Rect other, bool allowInverse);

  /// @brief Method ToString, addr 0x4872f50, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x4872f5c, size 0x234, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x48729c0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector2 position, ::UnityEngine::Vector2 size);

  /// @brief Method .ctor, addr 0x48729cc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rect source);

  /// @brief Method .ctor, addr 0x48729b4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y, float_t width, float_t height);

  /// @brief Method get_center, addr 0x4872a28, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_center();

  /// @brief Method get_height, addr 0x4872a98, size 0x8, virtual false, abstract: false, final false
  inline float_t get_height();

  /// @brief Method get_max, addr 0x4872a64, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_max();

  /// @brief Method get_min, addr 0x4872a40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_min();

  /// @brief Method get_position, addr 0x4872a18, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_position();

  /// @brief Method get_size, addr 0x4872aa8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_size();

  /// @brief Method get_width, addr 0x4872a88, size 0x8, virtual false, abstract: false, final false
  inline float_t get_width();

  /// @brief Method get_x, addr 0x48729f8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_x();

  /// @brief Method get_xMax, addr 0x4872b00, size 0x10, virtual false, abstract: false, final false
  inline float_t get_xMax();

  /// @brief Method get_xMin, addr 0x4872ab8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_xMin();

  /// @brief Method get_y, addr 0x4872a08, size 0x8, virtual false, abstract: false, final false
  inline float_t get_y();

  /// @brief Method get_yMax, addr 0x4872b20, size 0x10, virtual false, abstract: false, final false
  inline float_t get_yMax();

  /// @brief Method get_yMin, addr 0x4872adc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_yMin();

  /// @brief Method get_zero, addr 0x48729d8, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect get_zero();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rect>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rect>* i___System__IEquatable_1___UnityEngine__Rect_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Equality, addr 0x4872d08, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rect lhs, ::UnityEngine::Rect rhs);

  /// @brief Method op_Inequality, addr 0x4872cd4, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Rect lhs, ::UnityEngine::Rect rhs);

  /// @brief Method set_height, addr 0x4872aa0, size 0x8, virtual false, abstract: false, final false
  inline void set_height(float_t value);

  /// @brief Method set_max, addr 0x4872a74, size 0x14, virtual false, abstract: false, final false
  inline void set_max(::UnityEngine::Vector2 value);

  /// @brief Method set_min, addr 0x4872a48, size 0x1c, virtual false, abstract: false, final false
  inline void set_min(::UnityEngine::Vector2 value);

  /// @brief Method set_position, addr 0x4872a20, size 0x8, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector2 value);

  /// @brief Method set_size, addr 0x4872ab0, size 0x8, virtual false, abstract: false, final false
  inline void set_size(::UnityEngine::Vector2 value);

  /// @brief Method set_width, addr 0x4872a90, size 0x8, virtual false, abstract: false, final false
  inline void set_width(float_t value);

  /// @brief Method set_x, addr 0x4872a00, size 0x8, virtual false, abstract: false, final false
  inline void set_x(float_t value);

  /// @brief Method set_xMax, addr 0x4872b10, size 0x10, virtual false, abstract: false, final false
  inline void set_xMax(float_t value);

  /// @brief Method set_xMin, addr 0x4872ac0, size 0x1c, virtual false, abstract: false, final false
  inline void set_xMin(float_t value);

  /// @brief Method set_y, addr 0x4872a10, size 0x8, virtual false, abstract: false, final false
  inline void set_y(float_t value);

  /// @brief Method set_yMax, addr 0x4872b30, size 0x10, virtual false, abstract: false, final false
  inline void set_yMax(float_t value);

  /// @brief Method set_yMin, addr 0x4872ae4, size 0x1c, virtual false, abstract: false, final false
  inline void set_yMin(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Rect();

  // Ctor Parameters [CppParam { name: "m_XMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_YMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Width", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Height", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Rect(float_t m_XMin, float_t m_YMin, float_t m_Width, float_t m_Height) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10707 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_XMin, offset: 0x0, size: 0x4, def value: None
  float_t m_XMin;

  /// @brief Field m_YMin, offset: 0x4, size: 0x4, def value: None
  float_t m_YMin;

  /// @brief Field m_Width, offset: 0x8, size: 0x4, def value: None
  float_t m_Width;

  /// @brief Field m_Height, offset: 0xc, size: 0x4, def value: None
  float_t m_Height;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rect, m_XMin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rect, m_YMin) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rect, m_Width) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rect, m_Height) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rect, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rect, "UnityEngine", "Rect");
