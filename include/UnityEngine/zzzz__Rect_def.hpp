#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Rect)
namespace System {
class IFormatProvider;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
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
// Type: UnityEngine::Rect
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10093))
// CS Name: ::UnityEngine::Rect
struct CORDL_TYPE Rect {
public:
  // Declarations
  __declspec(property(get = get_x, put = set_x)) float_t x;

  __declspec(property(get = get_y, put = set_y)) float_t y;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::Vector2 position;

  __declspec(property(get = get_center))::UnityEngine::Vector2 center;

  __declspec(property(get = get_min, put = set_min))::UnityEngine::Vector2 min;

  __declspec(property(get = get_max, put = set_max))::UnityEngine::Vector2 max;

  __declspec(property(get = get_width, put = set_width)) float_t width;

  __declspec(property(get = get_height, put = set_height)) float_t height;

  __declspec(property(get = get_size, put = set_size))::UnityEngine::Vector2 size;

  __declspec(property(get = get_xMin, put = set_xMin)) float_t xMin;

  __declspec(property(get = get_yMin, put = set_yMin)) float_t yMin;

  __declspec(property(get = get_xMax, put = set_xMax)) float_t xMax;

  __declspec(property(get = get_yMax, put = set_yMax)) float_t yMax;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rect>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rect>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method .ctor addr 0x2b641ec size 0xc virtual false final false
  inline void _ctor(float_t x, float_t y, float_t width, float_t height);

  /// @brief Method .ctor addr 0x2b641f8 size 0xc virtual false final false
  inline void _ctor(::UnityEngine::Vector2 position, ::UnityEngine::Vector2 size);

  /// @brief Method get_zero addr 0x2b64204 size 0x14 virtual false final false
  static inline ::UnityEngine::Rect get_zero();

  /// @brief Method MinMaxRect addr 0x2b64218 size 0xc virtual false final false
  static inline ::UnityEngine::Rect MinMaxRect(float_t xmin, float_t ymin, float_t xmax, float_t ymax);

  /// @brief Method get_x addr 0x2b64224 size 0x8 virtual false final false
  inline float_t get_x();

  /// @brief Method set_x addr 0x2b6422c size 0x8 virtual false final false
  inline void set_x(float_t value);

  /// @brief Method get_y addr 0x2b64234 size 0x8 virtual false final false
  inline float_t get_y();

  /// @brief Method set_y addr 0x2b6423c size 0x8 virtual false final false
  inline void set_y(float_t value);

  /// @brief Method get_position addr 0x2b64244 size 0x8 virtual false final false
  inline ::UnityEngine::Vector2 get_position();

  /// @brief Method set_position addr 0x2b6424c size 0x8 virtual false final false
  inline void set_position(::UnityEngine::Vector2 value);

  /// @brief Method get_center addr 0x2b64254 size 0x18 virtual false final false
  inline ::UnityEngine::Vector2 get_center();

  /// @brief Method get_min addr 0x2b6426c size 0x8 virtual false final false
  inline ::UnityEngine::Vector2 get_min();

  /// @brief Method set_min addr 0x2b64284 size 0x1c virtual false final false
  inline void set_min(::UnityEngine::Vector2 value);

  /// @brief Method get_max addr 0x2b642d8 size 0x10 virtual false final false
  inline ::UnityEngine::Vector2 get_max();

  /// @brief Method set_max addr 0x2b64308 size 0x14 virtual false final false
  inline void set_max(::UnityEngine::Vector2 value);

  /// @brief Method get_width addr 0x2b6433c size 0x8 virtual false final false
  inline float_t get_width();

  /// @brief Method set_width addr 0x2b64344 size 0x8 virtual false final false
  inline void set_width(float_t value);

  /// @brief Method get_height addr 0x2b6434c size 0x8 virtual false final false
  inline float_t get_height();

  /// @brief Method set_height addr 0x2b64354 size 0x8 virtual false final false
  inline void set_height(float_t value);

  /// @brief Method get_size addr 0x2b6435c size 0x8 virtual false final false
  inline ::UnityEngine::Vector2 get_size();

  /// @brief Method set_size addr 0x2b64364 size 0x8 virtual false final false
  inline void set_size(::UnityEngine::Vector2 value);

  /// @brief Method get_xMin addr 0x2b64274 size 0x8 virtual false final false
  inline float_t get_xMin();

  /// @brief Method set_xMin addr 0x2b642a0 size 0x1c virtual false final false
  inline void set_xMin(float_t value);

  /// @brief Method get_yMin addr 0x2b6427c size 0x8 virtual false final false
  inline float_t get_yMin();

  /// @brief Method set_yMin addr 0x2b642bc size 0x1c virtual false final false
  inline void set_yMin(float_t value);

  /// @brief Method get_xMax addr 0x2b642e8 size 0x10 virtual false final false
  inline float_t get_xMax();

  /// @brief Method set_xMax addr 0x2b6431c size 0x10 virtual false final false
  inline void set_xMax(float_t value);

  /// @brief Method get_yMax addr 0x2b642f8 size 0x10 virtual false final false
  inline float_t get_yMax();

  /// @brief Method set_yMax addr 0x2b6432c size 0x10 virtual false final false
  inline void set_yMax(float_t value);

  /// @brief Method Contains addr 0x2b6436c size 0x44 virtual false final false
  inline bool Contains(::UnityEngine::Vector2 point);

  /// @brief Method Contains addr 0x2b643b0 size 0x44 virtual false final false
  inline bool Contains(::UnityEngine::Vector3 point);

  /// @brief Method OrderMinMax addr 0x2b643f4 size 0x2c virtual false final false
  static inline ::UnityEngine::Rect OrderMinMax(::UnityEngine::Rect rect);

  /// @brief Method Overlaps addr 0x2b64420 size 0x4c virtual false final false
  inline bool Overlaps(::UnityEngine::Rect other);

  /// @brief Method Overlaps addr 0x2b6446c size 0x94 virtual false final false
  inline bool Overlaps(::UnityEngine::Rect other, bool allowInverse);

  /// @brief Method op_Inequality addr 0x2b64500 size 0x34 virtual false final false
  static inline bool op_Inequality(::UnityEngine::Rect lhs, ::UnityEngine::Rect rhs);

  /// @brief Method op_Equality addr 0x2b64534 size 0x34 virtual false final false
  static inline bool op_Equality(::UnityEngine::Rect lhs, ::UnityEngine::Rect rhs);

  /// @brief Method GetHashCode addr 0x2b64568 size 0x88 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x2b645f0 size 0x7c virtual true final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals addr 0x2b6466c size 0xa0 virtual true final true
  inline bool Equals(::UnityEngine::Rect other);

  /// @brief Method ToString addr 0x2b6470c size 0xc virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToString addr 0x2b64718 size 0x238 virtual true final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  // Ctor Parameters [CppParam { name: "m_XMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_YMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Width", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Height", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Rect(float_t m_XMin, float_t m_YMin, float_t m_Width, float_t m_Height) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Rect();

  /// @brief Field m_XMin, offset: 0x0, size: 0x4, def value: None
  float_t m_XMin;

  /// @brief Field m_YMin, offset: 0x4, size: 0x4, def value: None
  float_t m_YMin;

  /// @brief Field m_Width, offset: 0x8, size: 0x4, def value: None
  float_t m_Width;

  /// @brief Field m_Height, offset: 0xc, size: 0x4, def value: None
  float_t m_Height;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rect, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rect, m_XMin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rect, m_YMin) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rect, m_Width) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rect, m_Height) == 0xc, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rect, "UnityEngine", "Rect");
