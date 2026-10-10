#pragma once
// IWYU pragma private; include "UnityEngine/RectInt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
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
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct RectInt;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RectInt);
DEFINE_IL2CPP_CLASS(::UnityEngine::RectInt, "UnityEngine", "RectInt");
// [UsedByNativeCode]
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RectInt
struct CORDL_TYPE RectInt {
public:
  // Declarations
  __declspec(property(get = get_height, put = set_height)) int32_t height;

  /// @brief Field kZero, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_kZero, put = setStaticF_kZero)) ::UnityEngine::RectInt kZero;

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

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6ed5720, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6ed57d0, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::RectInt other);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6ed5814, size 0x4c, virtual false, abstract: false, final false
  inline bool Equals(/* [IsReadOnly] */ ::by_ref<::UnityEngine::RectInt const> other);

  /// [IsReadOnly]
  /// @brief Method GetHashCode, addr 0x6ed56fc, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// [IsReadOnly]
  /// @brief Method Overlaps, addr 0x6ed5264, size 0x13c, virtual false, abstract: false, final false
  inline bool Overlaps(::UnityEngine::RectInt other);

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6ed53a0, size 0x64, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6ed5404, size 0x23c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6ed51fc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t xMin, int32_t yMin, int32_t width, int32_t height);

  static inline ::UnityEngine::RectInt getStaticF_kZero();

  /// [IsReadOnly]
  /// @brief Method get_height, addr 0x6ed518c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_height();

  /// [IsReadOnly]
  /// @brief Method get_width, addr 0x6ed517c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_width();

  /// [IsReadOnly]
  /// @brief Method get_x, addr 0x6ed515c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_x();

  /// [IsReadOnly]
  /// @brief Method get_xMax, addr 0x6ed51cc, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_xMax();

  /// [IsReadOnly]
  /// @brief Method get_xMin, addr 0x6ed519c, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_xMin();

  /// [IsReadOnly]
  /// @brief Method get_y, addr 0x6ed516c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_y();

  /// [IsReadOnly]
  /// @brief Method get_yMax, addr 0x6ed51e4, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_yMax();

  /// [IsReadOnly]
  /// @brief Method get_yMin, addr 0x6ed51b4, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_yMin();

  /// @brief Method get_zero, addr 0x6ed5208, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::RectInt get_zero();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::RectInt>"
  constexpr ::System::IEquatable_1<::UnityEngine::RectInt>* i___System__IEquatable_1___UnityEngine__RectInt_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Equality, addr 0x6ed56d4, size 0x28, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::RectInt lhs, ::UnityEngine::RectInt rhs);

  /// @brief Method op_Inequality, addr 0x6ed5640, size 0x94, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::RectInt lhs, ::UnityEngine::RectInt rhs);

  static inline void setStaticF_kZero(::UnityEngine::RectInt value);

  /// @brief Method set_height, addr 0x6ed5194, size 0x8, virtual false, abstract: false, final false
  inline void set_height(int32_t value);

  /// @brief Method set_width, addr 0x6ed5184, size 0x8, virtual false, abstract: false, final false
  inline void set_width(int32_t value);

  /// @brief Method set_x, addr 0x6ed5164, size 0x8, virtual false, abstract: false, final false
  inline void set_x(int32_t value);

  /// @brief Method set_y, addr 0x6ed5174, size 0x8, virtual false, abstract: false, final false
  inline void set_y(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RectInt();

  // Ctor Parameters [CppParam { name: "m_XMin", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_YMin", ty: "int32_t", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "m_Width", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Height", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr RectInt(int32_t m_XMin, int32_t m_YMin, int32_t m_Width, int32_t m_Height) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9692 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_XMin, offset: 0x0, size: 0x4, def value: None
  int32_t m_XMin;

  /// @brief Field m_YMin, offset: 0x4, size: 0x4, def value: None
  int32_t m_YMin;

  /// @brief Field m_Width, offset: 0x8, size: 0x4, def value: None
  int32_t m_Width;

  /// @brief Field m_Height, offset: 0xc, size: 0x4, def value: None
  int32_t m_Height;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RectInt, m_XMin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RectInt, m_YMin) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RectInt, m_Width) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RectInt, m_Height) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::RectInt) == 0x10, "Size mismatch!");

} // namespace UnityEngine
