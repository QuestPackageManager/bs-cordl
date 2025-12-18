#pragma once
// IWYU pragma private; include "Unity/IntegerTime/RationalTime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RationalTime)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::IntegerTime {
struct DiscreteTime;
}
namespace Unity::IntegerTime {
struct RationalTime_TicksPerSecond;
}
// Forward declare root types
namespace Unity::IntegerTime {
struct RationalTime;
}
namespace Unity::IntegerTime {
struct RationalTime_TicksPerSecond;
}
// Write type traits
MARK_VAL_T(::Unity::IntegerTime::RationalTime);
MARK_VAL_T(::Unity::IntegerTime::RationalTime_TicksPerSecond);
// Dependencies
namespace Unity::IntegerTime {
// Is value type: true
// CS Name: Unity.IntegerTime.RationalTime/TicksPerSecond
struct CORDL_TYPE RationalTime_TicksPerSecond {
public:
  // Declarations
  /// @brief Field DefaultTicksPerSecond, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DefaultTicksPerSecond, put = setStaticF_DefaultTicksPerSecond)) ::Unity::IntegerTime::RationalTime_TicksPerSecond DefaultTicksPerSecond;

  /// @brief Field DiscreteTimeRate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DiscreteTimeRate, put = setStaticF_DiscreteTimeRate)) ::Unity::IntegerTime::RationalTime_TicksPerSecond DiscreteTimeRate;

  /// @brief Field TicksPerSecond11988, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TicksPerSecond11988, put = setStaticF_TicksPerSecond11988)) ::Unity::IntegerTime::RationalTime_TicksPerSecond TicksPerSecond11988;

  /// @brief Field TicksPerSecond120, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TicksPerSecond120, put = setStaticF_TicksPerSecond120)) ::Unity::IntegerTime::RationalTime_TicksPerSecond TicksPerSecond120;

  /// @brief Field TicksPerSecond2397, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TicksPerSecond2397, put = setStaticF_TicksPerSecond2397)) ::Unity::IntegerTime::RationalTime_TicksPerSecond TicksPerSecond2397;

  /// @brief Field TicksPerSecond24, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TicksPerSecond24, put = setStaticF_TicksPerSecond24)) ::Unity::IntegerTime::RationalTime_TicksPerSecond TicksPerSecond24;

  /// @brief Field TicksPerSecond2425, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TicksPerSecond2425, put = setStaticF_TicksPerSecond2425)) ::Unity::IntegerTime::RationalTime_TicksPerSecond TicksPerSecond2425;

  /// @brief Field TicksPerSecond25, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TicksPerSecond25, put = setStaticF_TicksPerSecond25)) ::Unity::IntegerTime::RationalTime_TicksPerSecond TicksPerSecond25;

  /// @brief Field TicksPerSecond2997, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TicksPerSecond2997, put = setStaticF_TicksPerSecond2997)) ::Unity::IntegerTime::RationalTime_TicksPerSecond TicksPerSecond2997;

  /// @brief Field TicksPerSecond30, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TicksPerSecond30, put = setStaticF_TicksPerSecond30)) ::Unity::IntegerTime::RationalTime_TicksPerSecond TicksPerSecond30;

  /// @brief Field TicksPerSecond50, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TicksPerSecond50, put = setStaticF_TicksPerSecond50)) ::Unity::IntegerTime::RationalTime_TicksPerSecond TicksPerSecond50;

  /// @brief Field TicksPerSecond5994, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TicksPerSecond5994, put = setStaticF_TicksPerSecond5994)) ::Unity::IntegerTime::RationalTime_TicksPerSecond TicksPerSecond5994;

  /// @brief Field TicksPerSecond60, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TicksPerSecond60, put = setStaticF_TicksPerSecond60)) ::Unity::IntegerTime::RationalTime_TicksPerSecond TicksPerSecond60;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::IntegerTime::RationalTime_TicksPerSecond>"
  constexpr operator ::System::IEquatable_1<::Unity::IntegerTime::RationalTime_TicksPerSecond>*();

  /// @brief Method Equals, addr 0x689019c, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* rhs);

  /// @brief Method Equals, addr 0x6890174, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::Unity::IntegerTime::RationalTime_TicksPerSecond rhs);

  /// @brief Method Gcd, addr 0x68902b0, size 0x30, virtual false, abstract: false, final false
  static inline uint32_t Gcd(uint32_t a, uint32_t b);

  /// @brief Method GetHashCode, addr 0x6890234, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Simplify, addr 0x68900c8, size 0xac, virtual false, abstract: false, final false
  static inline void Simplify(::ByRef<uint32_t> num, ::ByRef<uint32_t> den);

  /// @brief Method .ctor, addr 0x6890050, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(uint32_t num, uint32_t den);

  static inline ::Unity::IntegerTime::RationalTime_TicksPerSecond getStaticF_DefaultTicksPerSecond();

  static inline ::Unity::IntegerTime::RationalTime_TicksPerSecond getStaticF_DiscreteTimeRate();

  static inline ::Unity::IntegerTime::RationalTime_TicksPerSecond getStaticF_TicksPerSecond11988();

  static inline ::Unity::IntegerTime::RationalTime_TicksPerSecond getStaticF_TicksPerSecond120();

  static inline ::Unity::IntegerTime::RationalTime_TicksPerSecond getStaticF_TicksPerSecond2397();

  static inline ::Unity::IntegerTime::RationalTime_TicksPerSecond getStaticF_TicksPerSecond24();

  static inline ::Unity::IntegerTime::RationalTime_TicksPerSecond getStaticF_TicksPerSecond2425();

  static inline ::Unity::IntegerTime::RationalTime_TicksPerSecond getStaticF_TicksPerSecond25();

  static inline ::Unity::IntegerTime::RationalTime_TicksPerSecond getStaticF_TicksPerSecond2997();

  static inline ::Unity::IntegerTime::RationalTime_TicksPerSecond getStaticF_TicksPerSecond30();

  static inline ::Unity::IntegerTime::RationalTime_TicksPerSecond getStaticF_TicksPerSecond50();

  static inline ::Unity::IntegerTime::RationalTime_TicksPerSecond getStaticF_TicksPerSecond5994();

  static inline ::Unity::IntegerTime::RationalTime_TicksPerSecond getStaticF_TicksPerSecond60();

  /// @brief Convert to "::System::IEquatable_1<::Unity::IntegerTime::RationalTime_TicksPerSecond>"
  constexpr ::System::IEquatable_1<::Unity::IntegerTime::RationalTime_TicksPerSecond>* i___System__IEquatable_1___Unity__IntegerTime__RationalTime_TicksPerSecond_();

  static inline void setStaticF_DefaultTicksPerSecond(::Unity::IntegerTime::RationalTime_TicksPerSecond value);

  static inline void setStaticF_DiscreteTimeRate(::Unity::IntegerTime::RationalTime_TicksPerSecond value);

  static inline void setStaticF_TicksPerSecond11988(::Unity::IntegerTime::RationalTime_TicksPerSecond value);

  static inline void setStaticF_TicksPerSecond120(::Unity::IntegerTime::RationalTime_TicksPerSecond value);

  static inline void setStaticF_TicksPerSecond2397(::Unity::IntegerTime::RationalTime_TicksPerSecond value);

  static inline void setStaticF_TicksPerSecond24(::Unity::IntegerTime::RationalTime_TicksPerSecond value);

  static inline void setStaticF_TicksPerSecond2425(::Unity::IntegerTime::RationalTime_TicksPerSecond value);

  static inline void setStaticF_TicksPerSecond25(::Unity::IntegerTime::RationalTime_TicksPerSecond value);

  static inline void setStaticF_TicksPerSecond2997(::Unity::IntegerTime::RationalTime_TicksPerSecond value);

  static inline void setStaticF_TicksPerSecond30(::Unity::IntegerTime::RationalTime_TicksPerSecond value);

  static inline void setStaticF_TicksPerSecond50(::Unity::IntegerTime::RationalTime_TicksPerSecond value);

  static inline void setStaticF_TicksPerSecond5994(::Unity::IntegerTime::RationalTime_TicksPerSecond value);

  static inline void setStaticF_TicksPerSecond60(::Unity::IntegerTime::RationalTime_TicksPerSecond value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RationalTime_TicksPerSecond();

  // Ctor Parameters [CppParam { name: "m_Numerator", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Denominator", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr RationalTime_TicksPerSecond(uint32_t m_Numerator, uint32_t m_Denominator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9915 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Numerator, offset: 0x0, size: 0x4, def value: None
  uint32_t m_Numerator;

  /// @brief Field m_Denominator, offset: 0x4, size: 0x4, def value: None
  uint32_t m_Denominator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::IntegerTime::RationalTime_TicksPerSecond, m_Numerator) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::IntegerTime::RationalTime_TicksPerSecond, m_Denominator) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::IntegerTime::RationalTime_TicksPerSecond, 0x8>, "Size mismatch!");

} // namespace Unity::IntegerTime
// Dependencies Unity.IntegerTime.RationalTime::TicksPerSecond
namespace Unity::IntegerTime {
// Is value type: true
// CS Name: Unity.IntegerTime.RationalTime
struct CORDL_TYPE RationalTime {
public:
  // Declarations
  using TicksPerSecond = ::Unity::IntegerTime::RationalTime_TicksPerSecond;

  __declspec(property(get = get_Count)) int64_t Count;

  /// @brief Method get_Count, addr 0x688ff48, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_Count();

  /// @brief Method op_Explicit, addr 0x688ff50, size 0xac, virtual false, abstract: false, final false
  static inline ::Unity::IntegerTime::DiscreteTime op_Explicit___Unity__IntegerTime__DiscreteTime(::Unity::IntegerTime::RationalTime t);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RationalTime();

  // Ctor Parameters [CppParam { name: "m_Count", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_TicksPerSecond", ty: "::Unity::IntegerTime::RationalTime_TicksPerSecond",
  // modifiers: "", def_value: None }]
  constexpr RationalTime(int64_t m_Count, ::Unity::IntegerTime::RationalTime_TicksPerSecond m_TicksPerSecond) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9916 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Count, offset: 0x0, size: 0x8, def value: None
  int64_t m_Count;

  /// @brief Field m_TicksPerSecond, offset: 0x8, size: 0x8, def value: None
  ::Unity::IntegerTime::RationalTime_TicksPerSecond m_TicksPerSecond;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::IntegerTime::RationalTime, m_Count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::IntegerTime::RationalTime, m_TicksPerSecond) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::IntegerTime::RationalTime, 0x10>, "Size mismatch!");

} // namespace Unity::IntegerTime
DEFINE_IL2CPP_ARG_TYPE(::Unity::IntegerTime::RationalTime, "Unity.IntegerTime", "RationalTime");
DEFINE_IL2CPP_ARG_TYPE(::Unity::IntegerTime::RationalTime_TicksPerSecond, "Unity.IntegerTime", "RationalTime/TicksPerSecond");
