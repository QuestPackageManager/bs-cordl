#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DiscreteTime)
namespace System {
class IComparable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct DiscreteTime;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::DiscreteTime);
// Type: UnityEngine.Timeline::DiscreteTime
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13829))
// CS Name: ::UnityEngine.Timeline::DiscreteTime
struct CORDL_TYPE DiscreteTime {
public:
  // Declarations
  /// @brief Field kMaxTime, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kMaxTime, put = setStaticF_kMaxTime))::UnityEngine::Timeline::DiscreteTime kMaxTime;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  static inline void setStaticF_kMaxTime(::UnityEngine::Timeline::DiscreteTime value);

  static inline ::UnityEngine::Timeline::DiscreteTime getStaticF_kMaxTime();

  /// @brief Method get_tickValue, addr 0x2c64adc, size 0xc, virtual false, abstract: false, final false
  static inline double_t get_tickValue();

  /// @brief Method .ctor, addr 0x2c64ae8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Timeline::DiscreteTime time);

  /// @brief Method .ctor, addr 0x2c64af0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int64_t time);

  /// @brief Method .ctor, addr 0x2c64af8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(double_t time);

  /// @brief Method .ctor, addr 0x2c64c04, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(float_t time);

  /// @brief Method .ctor, addr 0x2c56ee4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(int32_t time);

  /// @brief Method .ctor, addr 0x2c64d64, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(int32_t frame, double_t fps);

  /// @brief Method OneTickBefore, addr 0x2c55144, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::DiscreteTime OneTickBefore();

  /// @brief Method OneTickAfter, addr 0x2c63034, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::DiscreteTime OneTickAfter();

  /// @brief Method GetTick, addr 0x2c64ddc, size 0x8, virtual false, abstract: false, final false
  inline int64_t GetTick();

  /// @brief Method FromTicks, addr 0x2c64de4, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::DiscreteTime FromTicks(int64_t ticks);

  /// @brief Method CompareTo, addr 0x2c64de8, size 0x8c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  /// @brief Method Equals, addr 0x2c64e74, size 0x10, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::Timeline::DiscreteTime other);

  /// @brief Method Equals, addr 0x2c64e84, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method DoubleToDiscreteTime, addr 0x2c64b60, size 0xa4, virtual false, abstract: false, final false
  static inline int64_t DoubleToDiscreteTime(double_t time);

  /// @brief Method FloatToDiscreteTime, addr 0x2c64c6c, size 0xa4, virtual false, abstract: false, final false
  static inline int64_t FloatToDiscreteTime(float_t time);

  /// @brief Method IntToDiscreteTime, addr 0x2c64d10, size 0x54, virtual false, abstract: false, final false
  static inline int64_t IntToDiscreteTime(int32_t time);

  /// @brief Method ToDouble, addr 0x2c64efc, size 0x14, virtual false, abstract: false, final false
  static inline double_t ToDouble(int64_t time);

  /// @brief Method ToFloat, addr 0x2c64f10, size 0x64, virtual false, abstract: false, final false
  static inline float_t ToFloat(int64_t time);

  /// @brief Method op_Explicit, addr 0x2c55150, size 0x60, virtual false, abstract: false, final false
  static inline double_t op_Explicit_double_t(::UnityEngine::Timeline::DiscreteTime b);

  /// @brief Method op_Explicit, addr 0x2c64f74, size 0x54, virtual false, abstract: false, final false
  static inline float_t op_Explicit_float_t(::UnityEngine::Timeline::DiscreteTime b);

  /// @brief Method op_Explicit, addr 0x2c64fc8, size 0x4, virtual false, abstract: false, final false
  static inline int64_t op_Explicit_int64_t(::UnityEngine::Timeline::DiscreteTime b);

  /// @brief Method op_Explicit, addr 0x2c55268, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::DiscreteTime op_Explicit___UnityEngine__Timeline__DiscreteTime(double_t time);

  /// @brief Method op_Explicit, addr 0x2c64fcc, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::DiscreteTime op_Explicit___UnityEngine__Timeline__DiscreteTime(float_t time);

  /// @brief Method op_Implicit, addr 0x2c55118, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::DiscreteTime op_Implicit___UnityEngine__Timeline__DiscreteTime(int32_t time);

  /// @brief Method op_Explicit, addr 0x2c64fe8, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::DiscreteTime op_Explicit___UnityEngine__Timeline__DiscreteTime(int64_t time);

  /// @brief Method op_Equality, addr 0x2c64fec, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs);

  /// @brief Method op_Inequality, addr 0x2c64ff8, size 0x64, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs);

  /// @brief Method op_GreaterThan, addr 0x2c6505c, size 0xc, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs);

  /// @brief Method op_LessThan, addr 0x2c65068, size 0xc, virtual false, abstract: false, final false
  static inline bool op_LessThan(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x2c55138, size 0xc, virtual false, abstract: false, final false
  static inline bool op_LessThanOrEqual(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x2c65074, size 0xc, virtual false, abstract: false, final false
  static inline bool op_GreaterThanOrEqual(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs);

  /// @brief Method op_Addition, addr 0x2c65080, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::DiscreteTime op_Addition(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs);

  /// @brief Method op_Subtraction, addr 0x2c599f4, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::DiscreteTime op_Subtraction(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs);

  /// @brief Method ToString, addr 0x2c65088, size 0x20, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method GetHashCode, addr 0x2c650a8, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Min, addr 0x2c650c8, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::DiscreteTime Min(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs);

  /// @brief Method Max, addr 0x2c56fac, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::DiscreteTime Max(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs);

  /// @brief Method SnapToNearestTick, addr 0x2c65130, size 0x70, virtual false, abstract: false, final false
  static inline double_t SnapToNearestTick(double_t time);

  /// @brief Method SnapToNearestTick, addr 0x2c651a0, size 0x60, virtual false, abstract: false, final false
  static inline float_t SnapToNearestTick(float_t time);

  /// @brief Method GetNearestTick, addr 0x2c65200, size 0x5c, virtual false, abstract: false, final false
  static inline int64_t GetNearestTick(double_t time);

  // Ctor Parameters [CppParam { name: "m_DiscreteTime", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr DiscreteTime(int64_t m_DiscreteTime) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DiscreteTime();

  /// @brief Field m_DiscreteTime, offset: 0x0, size: 0x8, def value: None
  int64_t m_DiscreteTime;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field k_Tick offset 0xffffffff size 0x8
  static constexpr double_t k_Tick{ 0.000000000001 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::DiscreteTime, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::DiscreteTime, m_DiscreteTime) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::DiscreteTime, "UnityEngine.Timeline", "DiscreteTime");
