#pragma once
// IWYU pragma private; include "Unity/IntegerTime/DiscreteTime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DiscreteTime)
namespace System {
template <typename T> class IComparable_1;
}
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
namespace Unity::IntegerTime {
struct DiscreteTime;
}
// Write type traits
MARK_VAL_T(::Unity::IntegerTime::DiscreteTime);
// Dependencies
namespace Unity::IntegerTime {
// Is value type: true
// CS Name: Unity.IntegerTime.DiscreteTime
struct CORDL_TYPE DiscreteTime {
public:
  // Declarations
  /// @brief Field MaxValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MaxValue, put = setStaticF_MaxValue)) ::Unity::IntegerTime::DiscreteTime MaxValue;

  /// @brief Field MinValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MinValue, put = setStaticF_MinValue)) ::Unity::IntegerTime::DiscreteTime MinValue;

  /// @brief Field NonPow2TpsBits, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_NonPow2TpsBits, put = setStaticF_NonPow2TpsBits)) int32_t NonPow2TpsBits;

  /// @brief Field TicksPerSecondBits, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_TicksPerSecondBits, put = setStaticF_TicksPerSecondBits)) int32_t TicksPerSecondBits;

  /// @brief Field Zero, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero)) ::Unity::IntegerTime::DiscreteTime Zero;

  /// @brief Convert operator to "::System::IComparable_1<::Unity::IntegerTime::DiscreteTime>"
  constexpr operator ::System::IComparable_1<::Unity::IntegerTime::DiscreteTime>*();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::IntegerTime::DiscreteTime>"
  constexpr operator ::System::IEquatable_1<::Unity::IntegerTime::DiscreteTime>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method CompareTo, addr 0x688fddc, size 0x14, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::IntegerTime::DiscreteTime other);

  /// @brief Method Equals, addr 0x688fc1c, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x688fc0c, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::Unity::IntegerTime::DiscreteTime rhs);

  /// @brief Method FromTicks, addr 0x688faf0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::IntegerTime::DiscreteTime FromTicks(int64_t v);

  /// @brief Method GetHashCode, addr 0x688fcb8, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x688fcc4, size 0x80, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x688fd44, size 0x98, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x688f9f8, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x688f904, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x688fae8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int64_t v, int32_t _);

  static inline ::Unity::IntegerTime::DiscreteTime getStaticF_MaxValue();

  static inline ::Unity::IntegerTime::DiscreteTime getStaticF_MinValue();

  static inline int32_t getStaticF_NonPow2TpsBits();

  static inline int32_t getStaticF_TicksPerSecondBits();

  static inline ::Unity::IntegerTime::DiscreteTime getStaticF_Zero();

  /// @brief Convert to "::System::IComparable_1<::Unity::IntegerTime::DiscreteTime>"
  constexpr ::System::IComparable_1<::Unity::IntegerTime::DiscreteTime>* i___System__IComparable_1___Unity__IntegerTime__DiscreteTime_();

  /// @brief Convert to "::System::IEquatable_1<::Unity::IntegerTime::DiscreteTime>"
  constexpr ::System::IEquatable_1<::Unity::IntegerTime::DiscreteTime>* i___System__IEquatable_1___Unity__IntegerTime__DiscreteTime_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x688fb44, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::IntegerTime::DiscreteTime op_Addition(::Unity::IntegerTime::DiscreteTime lhs, ::Unity::IntegerTime::DiscreteTime rhs);

  /// @brief Method op_Explicit, addr 0x688fb0c, size 0x14, virtual false, abstract: false, final false
  static inline double_t op_Explicit_double_t(::Unity::IntegerTime::DiscreteTime d);

  /// @brief Method op_Explicit, addr 0x688faf4, size 0x18, virtual false, abstract: false, final false
  static inline float_t op_Explicit_float_t(::Unity::IntegerTime::DiscreteTime d);

  /// @brief Method op_GreaterThan, addr 0x688fb2c, size 0xc, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::Unity::IntegerTime::DiscreteTime lhs, ::Unity::IntegerTime::DiscreteTime rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x688fb38, size 0xc, virtual false, abstract: false, final false
  static inline bool op_GreaterThanOrEqual(::Unity::IntegerTime::DiscreteTime lhs, ::Unity::IntegerTime::DiscreteTime rhs);

  /// @brief Method op_Inequality, addr 0x688fb20, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::Unity::IntegerTime::DiscreteTime lhs, ::Unity::IntegerTime::DiscreteTime rhs);

  /// @brief Method op_Subtraction, addr 0x688fba8, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::IntegerTime::DiscreteTime op_Subtraction(::Unity::IntegerTime::DiscreteTime lhs, ::Unity::IntegerTime::DiscreteTime rhs);

  static inline void setStaticF_MaxValue(::Unity::IntegerTime::DiscreteTime value);

  static inline void setStaticF_MinValue(::Unity::IntegerTime::DiscreteTime value);

  static inline void setStaticF_NonPow2TpsBits(int32_t value);

  static inline void setStaticF_TicksPerSecondBits(int32_t value);

  static inline void setStaticF_Zero(::Unity::IntegerTime::DiscreteTime value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DiscreteTime();

  // Ctor Parameters [CppParam { name: "Value", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr DiscreteTime(int64_t Value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9914 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field Value, offset: 0x0, size: 0x8, def value: None
  int64_t Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::IntegerTime::DiscreteTime, Value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::IntegerTime::DiscreteTime, 0x8>, "Size mismatch!");

} // namespace Unity::IntegerTime
DEFINE_IL2CPP_ARG_TYPE(::Unity::IntegerTime::DiscreteTime, "Unity.IntegerTime", "DiscreteTime");
