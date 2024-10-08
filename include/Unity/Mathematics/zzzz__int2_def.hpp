#pragma once
// IWYU pragma private; include "Unity/Mathematics/int2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(int2)
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
namespace Unity::Mathematics {
class __int2__DebuggerProxy;
}
namespace Unity::Mathematics {
struct bool2;
}
namespace Unity::Mathematics {
struct double2;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct int3;
}
namespace Unity::Mathematics {
struct int4;
}
namespace Unity::Mathematics {
struct uint2;
}
// Forward declare root types
namespace Unity::Mathematics {
class __int2__DebuggerProxy;
}
namespace Unity::Mathematics {
struct int2;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::__int2__DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::int2);
// Type: ::DebuggerProxy
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: false
// CS Name: ::int2::DebuggerProxy*
class CORDL_TYPE __int2__DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) int32_t x;

  /// @brief Field y, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) int32_t y;

  static inline ::Unity::Mathematics::__int2__DebuggerProxy* New_ctor(::Unity::Mathematics::int2 v);

  constexpr int32_t const& __cordl_internal_get_x() const;

  constexpr int32_t& __cordl_internal_get_x();

  constexpr int32_t const& __cordl_internal_get_y() const;

  constexpr int32_t& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_x(int32_t value);

  constexpr void __cordl_internal_set_y(int32_t value);

  /// @brief Method .ctor, addr 0x46351e8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __int2__DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__int2__DebuggerProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __int2__DebuggerProxy(__int2__DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__int2__DebuggerProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __int2__DebuggerProxy(__int2__DebuggerProxy const&) = delete;

  /// @brief Field x, offset: 0x10, size: 0x4, def value: None
  int32_t ___x;

  /// @brief Field y, offset: 0x14, size: 0x4, def value: None
  int32_t ___y;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9961 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__int2__DebuggerProxy, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::__int2__DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__int2__DebuggerProxy, ___y) == 0x14, "Offset mismatch!");

} // namespace Unity::Mathematics
// Type: Unity.Mathematics::int2
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::int2
struct CORDL_TYPE int2 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::__int2__DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) int32_t Item[];

  __declspec(property(get = get_xx)) ::Unity::Mathematics::int2 xx;

  __declspec(property(get = get_xxx)) ::Unity::Mathematics::int3 xxx;

  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::int4 xxxx;

  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::int4 xxxy;

  __declspec(property(get = get_xxy)) ::Unity::Mathematics::int3 xxy;

  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::int4 xxyx;

  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::int4 xxyy;

  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::int2 xy;

  __declspec(property(get = get_xyx)) ::Unity::Mathematics::int3 xyx;

  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::int4 xyxx;

  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::int4 xyxy;

  __declspec(property(get = get_xyy)) ::Unity::Mathematics::int3 xyy;

  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::int4 xyyx;

  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::int4 xyyy;

  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::int2 yx;

  __declspec(property(get = get_yxx)) ::Unity::Mathematics::int3 yxx;

  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::int4 yxxx;

  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::int4 yxxy;

  __declspec(property(get = get_yxy)) ::Unity::Mathematics::int3 yxy;

  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::int4 yxyx;

  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::int4 yxyy;

  __declspec(property(get = get_yy)) ::Unity::Mathematics::int2 yy;

  __declspec(property(get = get_yyx)) ::Unity::Mathematics::int3 yyx;

  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::int4 yyxx;

  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::int4 yyxy;

  __declspec(property(get = get_yyy)) ::Unity::Mathematics::int3 yyy;

  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::int4 yyyx;

  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::int4 yyyy;

  /// @brief Field zero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::int2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::int2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x4634ffc, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x4634fd4, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::int2 rhs);

  /// @brief Method GetHashCode, addr 0x4635084, size 0x34, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x46350b8, size 0xa0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x4635158, size 0x90, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x463479c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2 v);

  /// @brief Method .ctor, addr 0x4634828, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 v);

  /// @brief Method .ctor, addr 0x46347dc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2 v);

  /// @brief Method .ctor, addr 0x46347b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2 v);

  /// @brief Method .ctor, addr 0x4634790, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x4634808, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x46347bc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x4634788, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x46347ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  /// @brief Method .ctor, addr 0x4634778, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t x, int32_t y);

  /// @brief Method .ctor, addr 0x4634780, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2 xy);

  static inline ::Unity::Mathematics::int2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x4634fc4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Item(int32_t index);

  /// @brief Method get_xx, addr 0x4634f80, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_xx();

  /// @brief Method get_xxx, addr 0x4634f00, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xxx();

  /// @brief Method get_xxxx, addr 0x4634dcc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x4634ddc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxxy();

  /// @brief Method get_xxy, addr 0x4634f10, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xxy();

  /// @brief Method get_xxyx, addr 0x4634df4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x4634e08, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxyy();

  /// @brief Method get_xy, addr 0x4634f8c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_xy();

  /// @brief Method get_xyx, addr 0x4634f20, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xyx();

  /// @brief Method get_xyxx, addr 0x4634e18, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x4634e30, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyxy();

  /// @brief Method get_xyy, addr 0x4634f30, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xyy();

  /// @brief Method get_xyyx, addr 0x4634e3c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x4634e50, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyyy();

  /// @brief Method get_yx, addr 0x4634f9c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_yx();

  /// @brief Method get_yxx, addr 0x4634f40, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yxx();

  /// @brief Method get_yxxx, addr 0x4634e64, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x4634e78, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxxy();

  /// @brief Method get_yxy, addr 0x4634f50, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yxy();

  /// @brief Method get_yxyx, addr 0x4634e8c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x4634e9c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxyy();

  /// @brief Method get_yy, addr 0x4634fb8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_yy();

  /// @brief Method get_yyx, addr 0x4634f60, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yyx();

  /// @brief Method get_yyxx, addr 0x4634eb4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x4634ec4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyxy();

  /// @brief Method get_yyy, addr 0x4634f70, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yyy();

  /// @brief Method get_yyyx, addr 0x4634ed8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x4634ef0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyyy();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::int2>* i___System__IEquatable_1___Unity__Mathematics__int2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x4634984, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Addition(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Addition, addr 0x463499c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Addition(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_Addition, addr 0x46349b0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Addition(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x4634d30, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_BitwiseAnd(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x4634d38, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_BitwiseAnd(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x4634d4c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x4634d64, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_BitwiseOr(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x4634d6c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_BitwiseOr(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x4634d80, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Decrement, addr 0x4634ac4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Decrement(::Unity::Mathematics::int2 val);

  /// @brief Method op_Division, addr 0x4634a0c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Division(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Division, addr 0x4634a24, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Division(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_Division, addr 0x4634a38, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Division(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Equality, addr 0x4634c78, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Equality, addr 0x4634c98, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_Equality, addr 0x4634cb4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x4634d98, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_ExclusiveOr(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x4634da0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_ExclusiveOr(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x4634db4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Explicit, addr 0x4634878, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Explicit___Unity__Mathematics__int2(::Unity::Mathematics::bool2 v);

  /// @brief Method op_Explicit, addr 0x463490c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Explicit___Unity__Mathematics__int2(::Unity::Mathematics::double2 v);

  /// @brief Method op_Explicit, addr 0x46348b8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Explicit___Unity__Mathematics__int2(::Unity::Mathematics::float2 v);

  /// @brief Method op_Explicit, addr 0x4634894, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Explicit___Unity__Mathematics__int2(::Unity::Mathematics::uint2 v);

  /// @brief Method op_Explicit, addr 0x4634860, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Explicit___Unity__Mathematics__int2(bool v);

  /// @brief Method op_Explicit, addr 0x46348ec, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Explicit___Unity__Mathematics__int2(double_t v);

  /// @brief Method op_Explicit, addr 0x4634898, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Explicit___Unity__Mathematics__int2(float_t v);

  /// @brief Method op_Explicit, addr 0x4634888, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Explicit___Unity__Mathematics__int2(uint32_t v);

  /// @brief Method op_GreaterThan, addr 0x4634b8c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_GreaterThan, addr 0x4634bac, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x4634bc8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4634be4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4634c04, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4634c20, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Implicit, addr 0x4634854, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Implicit___Unity__Mathematics__int2(int32_t v);

  /// @brief Method op_Increment, addr 0x4634aac, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Increment(::Unity::Mathematics::int2 val);

  /// @brief Method op_Inequality, addr 0x4634cd0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Inequality, addr 0x4634cf0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_Inequality, addr 0x4634d0c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_LeftShift, addr 0x4634c50, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_LeftShift(::Unity::Mathematics::int2 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x4634adc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_LessThan, addr 0x4634afc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_LessThan, addr 0x4634b18, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4634b34, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4634b54, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4634b70, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Modulus, addr 0x4634a50, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Modulus(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Modulus, addr 0x4634a70, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Modulus(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_Modulus, addr 0x4634a8c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Modulus(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Multiply, addr 0x4634940, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Multiply(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Multiply, addr 0x4634958, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Multiply(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_Multiply, addr 0x463496c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Multiply(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_OnesComplement, addr 0x4634d28, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_OnesComplement(::Unity::Mathematics::int2 val);

  /// @brief Method op_RightShift, addr 0x4634c64, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_RightShift(::Unity::Mathematics::int2 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x46349c8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Subtraction(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Subtraction, addr 0x46349e0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Subtraction(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_Subtraction, addr 0x46349f4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Subtraction(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x4634c3c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_UnaryNegation(::Unity::Mathematics::int2 val);

  /// @brief Method op_UnaryPlus, addr 0x4634c4c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_UnaryPlus(::Unity::Mathematics::int2 val);

  static inline void setStaticF_zero(::Unity::Mathematics::int2 value);

  /// @brief Method set_Item, addr 0x4634fcc, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, int32_t value);

  /// @brief Method set_xy, addr 0x4634f94, size 0x8, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::int2 value);

  /// @brief Method set_yx, addr 0x4634fac, size 0xc, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::int2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr int2();

  // Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr int2(int32_t x, int32_t y) noexcept;

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  int32_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  int32_t y;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9962 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::int2, 0x8>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::int2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int2, y) == 0x4, "Offset mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::__int2__DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__int2__DebuggerProxy*, "Unity.Mathematics", "int2/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::int2, "Unity.Mathematics", "int2");
