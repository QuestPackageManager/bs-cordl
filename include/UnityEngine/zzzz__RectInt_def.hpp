#pragma once
// IWYU pragma private; include "UnityEngine/RectInt.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RectInt)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
// Forward declare root types
namespace UnityEngine {
struct RectInt;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RectInt);
// Type: UnityEngine::RectInt
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::RectInt
struct CORDL_TYPE RectInt {
public:
  // Declarations
  __declspec(property(get = get_height, put = set_height)) int32_t height;

  __declspec(property(get = get_width, put = set_width)) int32_t width;

  __declspec(property(get = get_x, put = set_x)) int32_t x;

  __declspec(property(get = get_xMax)) int32_t xMax;

  __declspec(property(get = get_xMin)) int32_t xMin;

  __declspec(property(get = get_y, put = set_y)) int32_t y;

  __declspec(property(get = get_yMax)) int32_t yMax;

  __declspec(property(get = get_yMin)) int32_t yMin;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::RectInt>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::RectInt>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x34079b4, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::RectInt other);

  /// @brief Method Overlaps, addr 0x3407700, size 0x9c, virtual false, abstract: false, final false
  inline bool Overlaps(::UnityEngine::RectInt other);

  /// @brief Method ToString, addr 0x340779c, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x34077a8, size 0x20c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x34076f4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t xMin, int32_t yMin, int32_t width, int32_t height);

  /// @brief Method get_height, addr 0x3407554, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_height();

  /// @brief Method get_width, addr 0x3407544, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_width();

  /// @brief Method get_x, addr 0x3407524, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_x();

  /// @brief Method get_xMax, addr 0x340762c, size 0x64, virtual false, abstract: false, final false
  inline int32_t get_xMax();

  /// @brief Method get_xMin, addr 0x3407564, size 0x64, virtual false, abstract: false, final false
  inline int32_t get_xMin();

  /// @brief Method get_y, addr 0x3407534, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_y();

  /// @brief Method get_yMax, addr 0x3407690, size 0x64, virtual false, abstract: false, final false
  inline int32_t get_yMax();

  /// @brief Method get_yMin, addr 0x34075c8, size 0x64, virtual false, abstract: false, final false
  inline int32_t get_yMin();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::RectInt>"
  constexpr ::System::IEquatable_1<::UnityEngine::RectInt>* i___System__IEquatable_1___UnityEngine__RectInt_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method set_height, addr 0x340755c, size 0x8, virtual false, abstract: false, final false
  inline void set_height(int32_t value);

  /// @brief Method set_width, addr 0x340754c, size 0x8, virtual false, abstract: false, final false
  inline void set_width(int32_t value);

  /// @brief Method set_x, addr 0x340752c, size 0x8, virtual false, abstract: false, final false
  inline void set_x(int32_t value);

  /// @brief Method set_y, addr 0x340753c, size 0x8, virtual false, abstract: false, final false
  inline void set_y(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RectInt();

  // Ctor Parameters [CppParam { name: "m_XMin", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_YMin", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Height", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RectInt(int32_t m_XMin, int32_t m_YMin, int32_t m_Width, int32_t m_Height) noexcept;

  /// @brief Field m_XMin, offset: 0x0, size: 0x4, def value: None
  int32_t m_XMin;

  /// @brief Field m_YMin, offset: 0x4, size: 0x4, def value: None
  int32_t m_YMin;

  /// @brief Field m_Width, offset: 0x8, size: 0x4, def value: None
  int32_t m_Width;

  /// @brief Field m_Height, offset: 0xc, size: 0x4, def value: None
  int32_t m_Height;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RectInt, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::RectInt, m_XMin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RectInt, m_YMin) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RectInt, m_Width) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RectInt, m_Height) == 0xc, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RectInt, "UnityEngine", "RectInt");
