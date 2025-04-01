#pragma once
// IWYU pragma private; include "Unity/Mathematics/half.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(half)
namespace System {
class IFormatProvider;
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
// Dependencies System.IEquatable`1<T>, System.IFormattable
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.half
struct CORDL_TYPE half {
public:
  // Declarations
  /// @brief Field zero, offset 0xffffffff, size 0x2
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::half zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::half>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::half>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x46a0fb0, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x46a0fa0, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::half rhs);

  /// @brief Method GetHashCode, addr 0x46a1028, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x46a1030, size 0x74, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46a10a4, size 0x74, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x46a0d88, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x46a0d24, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x46a0d1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half x);

  static inline ::Unity::Mathematics::half getStaticF_zero();

  /// @brief Method get_MaxValue, addr 0x46a0cf4, size 0xc, virtual false, abstract: false, final false
  static inline float_t get_MaxValue();

  /// @brief Method get_MaxValueAsHalf, addr 0x46a0d0c, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half get_MaxValueAsHalf();

  /// @brief Method get_MinValue, addr 0x46a0d00, size 0xc, virtual false, abstract: false, final false
  static inline float_t get_MinValue();

  /// @brief Method get_MinValueAsHalf, addr 0x46a0d14, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half get_MinValueAsHalf();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::half>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::half>* i___System__IEquatable_1___Unity__Mathematics__half_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Equality, addr 0x46a0f80, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Equality(::Unity::Mathematics::half lhs, ::Unity::Mathematics::half rhs);

  /// @brief Method op_Explicit, addr 0x46a0e54, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half op_Explicit___Unity__Mathematics__half(double_t v);

  /// @brief Method op_Explicit, addr 0x46a0df0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half op_Explicit___Unity__Mathematics__half(float_t v);

  /// @brief Method op_Implicit, addr 0x46a0f1c, size 0x64, virtual false, abstract: false, final false
  static inline double_t op_Implicit_double_t(::Unity::Mathematics::half d);

  /// @brief Method op_Implicit, addr 0x46a0ebc, size 0x60, virtual false, abstract: false, final false
  static inline float_t op_Implicit_float_t(::Unity::Mathematics::half d);

  /// @brief Method op_Inequality, addr 0x46a0f90, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Inequality(::Unity::Mathematics::half lhs, ::Unity::Mathematics::half rhs);

  static inline void setStaticF_zero(::Unity::Mathematics::half value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr half();

  // Ctor Parameters [CppParam { name: "value", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr half(uint16_t value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9989 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field value, offset: 0x0, size: 0x2, def value: None
  uint16_t value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::half, value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::half, 0x2>, "Size mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::half, "Unity.Mathematics", "half");
