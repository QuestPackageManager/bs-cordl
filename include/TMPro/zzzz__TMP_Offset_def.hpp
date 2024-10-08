#pragma once
// IWYU pragma private; include "TMPro/TMP_Offset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_Offset)
namespace System {
class Object;
}
// Forward declare root types
namespace TMPro {
struct TMP_Offset;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_Offset);
// Type: TMPro::TMP_Offset
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// CS Name: ::TMPro::TMP_Offset
struct CORDL_TYPE TMP_Offset {
public:
  // Declarations
  __declspec(property(get = get_bottom, put = set_bottom)) float_t bottom;

  __declspec(property(get = get_horizontal, put = set_horizontal)) float_t horizontal;

  /// @brief Field k_ZeroOffset, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_k_ZeroOffset, put = setStaticF_k_ZeroOffset)) ::TMPro::TMP_Offset k_ZeroOffset;

  __declspec(property(get = get_left, put = set_left)) float_t left;

  __declspec(property(get = get_right, put = set_right)) float_t right;

  __declspec(property(get = get_top, put = set_top)) float_t top;

  __declspec(property(get = get_vertical, put = set_vertical)) float_t vertical;

  /// @brief Method Equals, addr 0x474ef50, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x474efc8, size 0xa8, virtual false, abstract: false, final false
  inline bool Equals(::TMPro::TMP_Offset other);

  /// @brief Method GetHashCode, addr 0x474eeec, size 0x64, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x474edf4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t horizontal, float_t vertical);

  /// @brief Method .ctor, addr 0x474ede8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t left, float_t right, float_t top, float_t bottom);

  static inline ::TMPro::TMP_Offset getStaticF_k_ZeroOffset();

  /// @brief Method get_bottom, addr 0x474ed5c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_bottom();

  /// @brief Method get_horizontal, addr 0x474ed6c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_horizontal();

  /// @brief Method get_left, addr 0x474ed2c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_left();

  /// @brief Method get_right, addr 0x474ed3c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_right();

  /// @brief Method get_top, addr 0x474ed4c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_top();

  /// @brief Method get_vertical, addr 0x474ed7c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_vertical();

  /// @brief Method get_zero, addr 0x474ed8c, size 0x5c, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_Offset get_zero();

  /// @brief Method op_Equality, addr 0x474ee00, size 0x28, virtual false, abstract: false, final false
  static inline bool op_Equality(::TMPro::TMP_Offset lhs, ::TMPro::TMP_Offset rhs);

  /// @brief Method op_Inequality, addr 0x474ee28, size 0xb0, virtual false, abstract: false, final false
  static inline bool op_Inequality(::TMPro::TMP_Offset lhs, ::TMPro::TMP_Offset rhs);

  /// @brief Method op_Multiply, addr 0x474eed8, size 0x14, virtual false, abstract: false, final false
  static inline ::TMPro::TMP_Offset op_Multiply(::TMPro::TMP_Offset a, float_t b);

  static inline void setStaticF_k_ZeroOffset(::TMPro::TMP_Offset value);

  /// @brief Method set_bottom, addr 0x474ed64, size 0x8, virtual false, abstract: false, final false
  inline void set_bottom(float_t value);

  /// @brief Method set_horizontal, addr 0x474ed74, size 0x8, virtual false, abstract: false, final false
  inline void set_horizontal(float_t value);

  /// @brief Method set_left, addr 0x474ed34, size 0x8, virtual false, abstract: false, final false
  inline void set_left(float_t value);

  /// @brief Method set_right, addr 0x474ed44, size 0x8, virtual false, abstract: false, final false
  inline void set_right(float_t value);

  /// @brief Method set_top, addr 0x474ed54, size 0x8, virtual false, abstract: false, final false
  inline void set_top(float_t value);

  /// @brief Method set_vertical, addr 0x474ed84, size 0x8, virtual false, abstract: false, final false
  inline void set_vertical(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Offset();

  // Ctor Parameters [CppParam { name: "m_Left", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Right", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Top",
  // ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Bottom", ty: "float_t", modifiers: "", def_value: None }]
  constexpr TMP_Offset(float_t m_Left, float_t m_Right, float_t m_Top, float_t m_Bottom) noexcept;

  /// @brief Field m_Left, offset: 0x0, size: 0x4, def value: None
  float_t m_Left;

  /// @brief Field m_Right, offset: 0x4, size: 0x4, def value: None
  float_t m_Right;

  /// @brief Field m_Top, offset: 0x8, size: 0x4, def value: None
  float_t m_Top;

  /// @brief Field m_Bottom, offset: 0xc, size: 0x4, def value: None
  float_t m_Bottom;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14406 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Offset, 0x10>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_Offset, m_Left) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Offset, m_Right) == 0x4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Offset, m_Top) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Offset, m_Bottom) == 0xc, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Offset, "TMPro", "TMP_Offset");
