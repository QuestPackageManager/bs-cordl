#pragma once
// IWYU pragma private; include "UnityEngine/Rect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Rect)
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
DEFINE_IL2CPP_CLASS(::UnityEngine::Rect, "UnityEngine", "Rect");
// [NativeHeader("Runtime/Math/Rect.h")]
// [NativeClass("Rectf", "template<typename T> class RectT; typedef RectT<float> Rectf;")]
// [RequiredByNativeCode(Optional = true, GenerateProxy = true)]
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Rect
struct CORDL_TYPE Rect {
public:
  // Declarations
  __declspec(property(get = get_center)) ::UnityEngine::Vector2 center;

  __declspec(property(get = get_height, put = set_height)) float_t height;

  /// @brief Field kZero, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_kZero, put = setStaticF_kZero)) ::UnityEngine::Rect kZero;

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

  /// [IsReadOnly]
  /// @brief Method Contains, addr 0x6ed4324, size 0xbc, virtual false, abstract: false, final false
  inline bool Contains(::UnityEngine::Vector2 point);

  /// [IsReadOnly]
  /// @brief Method Contains, addr 0x6ed43e0, size 0xbc, virtual false, abstract: false, final false
  inline bool Contains(::UnityEngine::Vector3 point);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6ed4b24, size 0x178, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6ed4c9c, size 0xf4, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rect other);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6ed4d90, size 0x104, virtual false, abstract: false, final false
  inline bool Equals(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rect const> other);

  /// [IsReadOnly]
  /// @brief Method GetHashCode, addr 0x6ed4aa8, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method MinMaxRect, addr 0x6ed3f70, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect MinMaxRect(float_t xmin, float_t ymin, float_t xmax, float_t ymax);

  /// @brief Method OrderMinMax, addr 0x6ed449c, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect OrderMinMax(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rect const> rect);

  /// [IsReadOnly]
  /// @brief Method Overlaps, addr 0x6ed4520, size 0xf4, virtual false, abstract: false, final false
  inline bool Overlaps(::UnityEngine::Rect other);

  /// [IsReadOnly]
  /// @brief Method Overlaps, addr 0x6ed470c, size 0x2c0, virtual false, abstract: false, final false
  inline bool Overlaps(::UnityEngine::Rect other, bool allowInverse);

  /// [IsReadOnly]
  /// @brief Method Overlaps, addr 0x6ed4614, size 0xf8, virtual false, abstract: false, final false
  inline bool Overlaps(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rect const> other);

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6ed4e94, size 0x64, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6ed4ef8, size 0x218, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6ed3ef8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector2 position, ::UnityEngine::Vector2 size);

  /// @brief Method .ctor, addr 0x6ed3f04, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rect source);

  /// @brief Method .ctor, addr 0x6ed3eec, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y, float_t width, float_t height);

  static inline ::UnityEngine::Rect getStaticF_kZero();

  /// [IsReadOnly]
  /// @brief Method get_center, addr 0x6ed3fac, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_center();

  /// [IsReadOnly]
  /// @brief Method get_height, addr 0x6ed41c4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_height();

  /// [IsReadOnly]
  /// @brief Method get_max, addr 0x6ed40d8, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_max();

  /// [IsReadOnly]
  /// @brief Method get_min, addr 0x6ed3fc4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_min();

  /// [IsReadOnly]
  /// @brief Method get_position, addr 0x6ed3f9c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_position();

  /// [IsReadOnly]
  /// @brief Method get_size, addr 0x6ed41d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_size();

  /// [IsReadOnly]
  /// @brief Method get_width, addr 0x6ed41b4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_width();

  /// [IsReadOnly]
  /// @brief Method get_x, addr 0x6ed3f7c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_x();

  /// [IsReadOnly]
  /// @brief Method get_xMax, addr 0x6ed42e4, size 0x10, virtual false, abstract: false, final false
  inline float_t get_xMax();

  /// [IsReadOnly]
  /// @brief Method get_xMin, addr 0x6ed41e4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_xMin();

  /// [IsReadOnly]
  /// @brief Method get_y, addr 0x6ed3f8c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_y();

  /// [IsReadOnly]
  /// @brief Method get_yMax, addr 0x6ed4304, size 0x10, virtual false, abstract: false, final false
  inline float_t get_yMax();

  /// [IsReadOnly]
  /// @brief Method get_yMin, addr 0x6ed4264, size 0x8, virtual false, abstract: false, final false
  inline float_t get_yMin();

  /// @brief Method get_zero, addr 0x6ed3f10, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect get_zero();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rect>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rect>* i___System__IEquatable_1___UnityEngine__Rect_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Equality, addr 0x6ed4a80, size 0x28, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rect lhs, ::UnityEngine::Rect rhs);

  /// @brief Method op_Inequality, addr 0x6ed49cc, size 0xb4, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Rect lhs, ::UnityEngine::Rect rhs);

  static inline void setStaticF_kZero(::UnityEngine::Rect value);

  /// @brief Method set_height, addr 0x6ed41cc, size 0x8, virtual false, abstract: false, final false
  inline void set_height(float_t value);

  /// @brief Method set_max, addr 0x6ed4138, size 0x7c, virtual false, abstract: false, final false
  inline void set_max(::UnityEngine::Vector2 value);

  /// @brief Method set_min, addr 0x6ed3fcc, size 0x10c, virtual false, abstract: false, final false
  inline void set_min(::UnityEngine::Vector2 value);

  /// @brief Method set_position, addr 0x6ed3fa4, size 0x8, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector2 value);

  /// @brief Method set_size, addr 0x6ed41dc, size 0x8, virtual false, abstract: false, final false
  inline void set_size(::UnityEngine::Vector2 value);

  /// @brief Method set_width, addr 0x6ed41bc, size 0x8, virtual false, abstract: false, final false
  inline void set_width(float_t value);

  /// @brief Method set_x, addr 0x6ed3f84, size 0x8, virtual false, abstract: false, final false
  inline void set_x(float_t value);

  /// @brief Method set_xMax, addr 0x6ed42f4, size 0x10, virtual false, abstract: false, final false
  inline void set_xMax(float_t value);

  /// @brief Method set_xMin, addr 0x6ed41ec, size 0x78, virtual false, abstract: false, final false
  inline void set_xMin(float_t value);

  /// @brief Method set_y, addr 0x6ed3f94, size 0x8, virtual false, abstract: false, final false
  inline void set_y(float_t value);

  /// @brief Method set_yMax, addr 0x6ed4314, size 0x10, virtual false, abstract: false, final false
  inline void set_yMax(float_t value);

  /// @brief Method set_yMin, addr 0x6ed426c, size 0x78, virtual false, abstract: false, final false
  inline void set_yMin(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Rect();

  // Ctor Parameters [CppParam { name: "m_XMin", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_YMin", ty: "float_t", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "m_Width", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Height", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr Rect(float_t m_XMin, float_t m_YMin, float_t m_Width, float_t m_Height) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9691 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// [NativeName("x")]
  /// @brief Field m_XMin, offset: 0x0, size: 0x4, def value: None
  float_t m_XMin;

  /// [NativeName("y")]
  /// @brief Field m_YMin, offset: 0x4, size: 0x4, def value: None
  float_t m_YMin;

  /// [NativeName("width")]
  /// @brief Field m_Width, offset: 0x8, size: 0x4, def value: None
  float_t m_Width;

  /// [NativeName("height")]
  /// @brief Field m_Height, offset: 0xc, size: 0x4, def value: None
  float_t m_Height;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rect, m_XMin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rect, m_YMin) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rect, m_Width) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rect, m_Height) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rect) == 0x10, "Size mismatch!");

} // namespace UnityEngine
