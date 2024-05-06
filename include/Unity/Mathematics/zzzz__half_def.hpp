#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(half)
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
namespace Unity::Mathematics {
struct half;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::half);
// Type: Unity.Mathematics::half
// SizeInfo { instance_size: 2, native_size: 2, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::half
struct CORDL_TYPE half {
public:
  // Declarations
  /// @brief Field zero, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::Unity::Mathematics::half zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::half>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::half>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x320aa5c, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x320aa4c, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::half rhs);

  /// @brief Method GetHashCode, addr 0x320aad4, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x320aadc, size 0x74, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x320ab50, size 0x74, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x320a740, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x320a680, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x320a678, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half x);

  static inline ::Unity::Mathematics::half getStaticF_zero();

  /// @brief Method get_MaxValue, addr 0x320a5d0, size 0xc, virtual false, abstract: false, final false
  static inline float_t get_MaxValue();

  /// @brief Method get_MaxValueAsHalf, addr 0x320a5e8, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half get_MaxValueAsHalf();

  /// @brief Method get_MinValue, addr 0x320a5dc, size 0xc, virtual false, abstract: false, final false
  static inline float_t get_MinValue();

  /// @brief Method get_MinValueAsHalf, addr 0x320a630, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half get_MinValueAsHalf();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::half>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::half>* i___System__IEquatable_1___Unity__Mathematics__half_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Equality, addr 0x320aa2c, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Equality(::Unity::Mathematics::half lhs, ::Unity::Mathematics::half rhs);

  /// @brief Method op_Explicit, addr 0x320a8b8, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half op_Explicit___Unity__Mathematics__half(double_t v);

  /// @brief Method op_Explicit, addr 0x320a804, size 0xb4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half op_Explicit___Unity__Mathematics__half(float_t v);

  /// @brief Method op_Implicit, addr 0x320a9cc, size 0x60, virtual false, abstract: false, final false
  static inline double_t op_Implicit_double_t(::Unity::Mathematics::half d);

  /// @brief Method op_Implicit, addr 0x320a970, size 0x5c, virtual false, abstract: false, final false
  static inline float_t op_Implicit_float_t(::Unity::Mathematics::half d);

  /// @brief Method op_Inequality, addr 0x320aa3c, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Inequality(::Unity::Mathematics::half lhs, ::Unity::Mathematics::half rhs);

  static inline void setStaticF_zero(::Unity::Mathematics::half value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr half();

  // Ctor Parameters [CppParam { name: "value", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr half(uint16_t value) noexcept;

  /// @brief Field value, offset: 0x0, size: 0x2, def value: None
  uint16_t value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::half, 0x2>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::half, value) == 0x0, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::half, "Unity.Mathematics", "half");
