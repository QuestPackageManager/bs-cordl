#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/DiscreteTime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
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
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::DiscreteTime, "UnityEngine.Timeline", "DiscreteTime");
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: UnityEngine.Timeline.DiscreteTime
struct CORDL_TYPE DiscreteTime {
public:
  // Declarations
  /// @brief Field kMaxTime, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kMaxTime, put = setStaticF_kMaxTime)) ::UnityEngine::Timeline::DiscreteTime kMaxTime;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Method CompareTo, addr 0x6e2a770, size 0x80, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  /// @brief Method DoubleToDiscreteTime, addr 0x6e2a4fc, size 0x98, virtual false, abstract: false, final false
  static inline int64_t DoubleToDiscreteTime(double_t time);

  /// @brief Method Equals, addr 0x6e2a800, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6e2a7f0, size 0x10, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::Timeline::DiscreteTime other);

  /// @brief Method FloatToDiscreteTime, addr 0x6e2a600, size 0x90, virtual false, abstract: false, final false
  static inline int64_t FloatToDiscreteTime(float_t time);

  /// @brief Method FromTicks, addr 0x6e2a76c, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::DiscreteTime FromTicks(int64_t ticks);

  /// @brief Method GetHashCode, addr 0x6e2aa60, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetNearestTick, addr 0x6e2abac, size 0x60, virtual false, abstract: false, final false
  static inline int64_t GetNearestTick(double_t time);

  /// @brief Method GetTick, addr 0x6e2a764, size 0x8, virtual false, abstract: false, final false
  inline int64_t GetTick();

  /// @brief Method IntToDiscreteTime, addr 0x6e2a690, size 0x58, virtual false, abstract: false, final false
  static inline int64_t IntToDiscreteTime(int32_t time);

  /// @brief Method Max, addr 0x6e1c7a0, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::DiscreteTime Max(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs);

  /// @brief Method Min, addr 0x6e2aa6c, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::DiscreteTime Min(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs);

  /// @brief Method OneTickAfter, addr 0x6e2892c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::DiscreteTime OneTickAfter();

  /// @brief Method OneTickBefore, addr 0x6e1a858, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Timeline::DiscreteTime OneTickBefore();

  /// @brief Method SnapToNearestTick, addr 0x6e2aad4, size 0x74, virtual false, abstract: false, final false
  static inline double_t SnapToNearestTick(double_t time);

  /// @brief Method SnapToNearestTick, addr 0x6e2ab48, size 0x64, virtual false, abstract: false, final false
  static inline float_t SnapToNearestTick(float_t time);

  /// @brief Method ToDouble, addr 0x6e2a8b0, size 0x14, virtual false, abstract: false, final false
  static inline double_t ToDouble(int64_t time);

  /// @brief Method ToFloat, addr 0x6e2a8c4, size 0x68, virtual false, abstract: false, final false
  static inline float_t ToFloat(int64_t time);

  /// @brief Method ToString, addr 0x6e2aa44, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6e2a6e8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(int32_t frame, double_t fps);

  /// @brief Method .ctor, addr 0x6e2a480, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Timeline::DiscreteTime time);

  /// @brief Method .ctor, addr 0x6e2a490, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(double_t time);

  /// @brief Method .ctor, addr 0x6e2a594, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(float_t time);

  /// @brief Method .ctor, addr 0x6e1c6d0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(int32_t time);

  /// @brief Method .ctor, addr 0x6e2a488, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int64_t time);

  static inline ::UnityEngine::Timeline::DiscreteTime getStaticF_kMaxTime();

  /// @brief Method get_tickValue, addr 0x6e2a474, size 0xc, virtual false, abstract: false, final false
  static inline double_t get_tickValue();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Method op_Addition, addr 0x6e2aa3c, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::DiscreteTime op_Addition(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs);

  /// @brief Method op_Equality, addr 0x6e2a9a4, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs);

  /// @brief Method op_Explicit, addr 0x6e1a980, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::DiscreteTime op_Explicit___UnityEngine__Timeline__DiscreteTime(double_t time);

  /// @brief Method op_Explicit, addr 0x6e2a988, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::DiscreteTime op_Explicit___UnityEngine__Timeline__DiscreteTime(float_t time);

  /// @brief Method op_Explicit, addr 0x6e2a9a0, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::DiscreteTime op_Explicit___UnityEngine__Timeline__DiscreteTime(int64_t time);

  /// @brief Method op_Explicit, addr 0x6e1a864, size 0x64, virtual false, abstract: false, final false
  static inline double_t op_Explicit_double_t(::UnityEngine::Timeline::DiscreteTime b);

  /// @brief Method op_Explicit, addr 0x6e2a92c, size 0x58, virtual false, abstract: false, final false
  static inline float_t op_Explicit_float_t(::UnityEngine::Timeline::DiscreteTime b);

  /// @brief Method op_Explicit, addr 0x6e2a984, size 0x4, virtual false, abstract: false, final false
  static inline int64_t op_Explicit_int64_t(::UnityEngine::Timeline::DiscreteTime b);

  /// @brief Method op_GreaterThan, addr 0x6e2aa18, size 0xc, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6e2aa30, size 0xc, virtual false, abstract: false, final false
  static inline bool op_GreaterThanOrEqual(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs);

  /// @brief Method op_Implicit, addr 0x6e1a830, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::DiscreteTime op_Implicit___UnityEngine__Timeline__DiscreteTime(int32_t time);

  /// @brief Method op_Inequality, addr 0x6e2a9b0, size 0x68, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs);

  /// @brief Method op_LessThan, addr 0x6e2aa24, size 0xc, virtual false, abstract: false, final false
  static inline bool op_LessThan(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6e1a84c, size 0xc, virtual false, abstract: false, final false
  static inline bool op_LessThanOrEqual(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs);

  /// @brief Method op_Subtraction, addr 0x6e1f264, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::DiscreteTime op_Subtraction(::UnityEngine::Timeline::DiscreteTime lhs, ::UnityEngine::Timeline::DiscreteTime rhs);

  static inline void setStaticF_kMaxTime(::UnityEngine::Timeline::DiscreteTime value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DiscreteTime();

  // Ctor Parameters [CppParam { name: "m_DiscreteTime", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
  constexpr DiscreteTime(int64_t m_DiscreteTime) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19349 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field k_Tick offset 0xffffffff size 0x8
  static constexpr double_t k_Tick{ static_cast<double_t>(1e-12) };

  /// @brief Field m_DiscreteTime, offset: 0x0, size: 0x8, def value: None
  int64_t m_DiscreteTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::DiscreteTime, m_DiscreteTime) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Timeline::DiscreteTime) == 0x8, "Size mismatch!");

} // namespace UnityEngine::Timeline
