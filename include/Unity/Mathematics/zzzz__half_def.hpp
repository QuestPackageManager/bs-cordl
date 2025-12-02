#pragma once
// IWYU pragma private; include "Unity/Mathematics/half.hpp"
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
// Dependencies
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

  /// @brief Method Equals, addr 0x6435b94, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6435b84, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::half rhs);

  /// @brief Method GetHashCode, addr 0x6435c10, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6435c18, size 0x74, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6435c8c, size 0x74, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6435988, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x6435928, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x6435920, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half x);

  static inline ::Unity::Mathematics::half getStaticF_zero();

  /// @brief Method get_MaxValue, addr 0x64358f8, size 0xc, virtual false, abstract: false, final false
  static inline float_t get_MaxValue();

  /// @brief Method get_MaxValueAsHalf, addr 0x6435910, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half get_MaxValueAsHalf();

  /// @brief Method get_MinValue, addr 0x6435904, size 0xc, virtual false, abstract: false, final false
  static inline float_t get_MinValue();

  /// @brief Method get_MinValueAsHalf, addr 0x6435918, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half get_MinValueAsHalf();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::half>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::half>* i___System__IEquatable_1___Unity__Mathematics__half_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Equality, addr 0x6435b64, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Equality(::Unity::Mathematics::half lhs, ::Unity::Mathematics::half rhs);

  /// @brief Method op_Explicit, addr 0x6435a48, size 0x60, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half op_Explicit___Unity__Mathematics__half(double_t v);

  /// @brief Method op_Explicit, addr 0x64359ec, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half op_Explicit___Unity__Mathematics__half(float_t v);

  /// @brief Method op_Implicit, addr 0x6435b04, size 0x60, virtual false, abstract: false, final false
  static inline double_t op_Implicit_double_t(::Unity::Mathematics::half d);

  /// @brief Method op_Implicit, addr 0x6435aa8, size 0x5c, virtual false, abstract: false, final false
  static inline float_t op_Implicit_float_t(::Unity::Mathematics::half d);

  /// @brief Method op_Inequality, addr 0x6435b74, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Inequality(::Unity::Mathematics::half lhs, ::Unity::Mathematics::half rhs);

  static inline void setStaticF_zero(::Unity::Mathematics::half value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr half();

  // Ctor Parameters [CppParam { name: "value", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr half(uint16_t value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13142 };

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
