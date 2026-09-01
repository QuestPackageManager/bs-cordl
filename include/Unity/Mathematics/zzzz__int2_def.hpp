#pragma once
// IWYU pragma private; include "Unity\Mathematics\int2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
struct bool2;
}
namespace Unity::Mathematics {
struct double2;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
class int2_DebuggerProxy;
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
class int2_DebuggerProxy;
}
namespace Unity::Mathematics {
struct int2;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::int2_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::int2);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::int2_DebuggerProxy*, "Unity.Mathematics", "int2/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::int2, "Unity.Mathematics", "int2");
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.int2/DebuggerProxy
class CORDL_TYPE int2_DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) int32_t x;

  /// @brief Field y, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) int32_t y;

  static inline ::Unity::Mathematics::int2_DebuggerProxy* New_ctor(::Unity::Mathematics::int2 v);

  constexpr int32_t const& __cordl_internal_get_x() const;

  constexpr int32_t& __cordl_internal_get_x();

  constexpr int32_t const& __cordl_internal_get_y() const;

  constexpr int32_t& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_x(int32_t value);

  constexpr void __cordl_internal_set_y(int32_t value);

  /// @brief Method .ctor, addr 0x665a2d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr int2_DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "int2_DebuggerProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  int2_DebuggerProxy(int2_DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "int2_DebuggerProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  int2_DebuggerProxy(int2_DebuggerProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13180 };

  /// @brief Field x, offset: 0x10, size: 0x4, def value: None
  int32_t ___x;

  /// @brief Field y, offset: 0x14, size: 0x4, def value: None
  int32_t ___y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int2_DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int2_DebuggerProxy, ___y) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::int2_DebuggerProxy) == 0x18, "Size mismatch!");

} // namespace Unity::Mathematics
// Dependencies
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.int2
struct CORDL_TYPE int2 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::int2_DebuggerProxy;

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
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::int2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::int2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::int2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x665a0a4, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x665a07c, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::int2 rhs);

  /// @brief Method GetHashCode, addr 0x665a130, size 0x34, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x665a164, size 0xb4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x665a218, size 0xc0, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x66598b0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2 v);

  /// @brief Method .ctor, addr 0x6659934, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 v);

  /// @brief Method .ctor, addr 0x66598f0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2 v);

  /// @brief Method .ctor, addr 0x66598c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2 v);

  /// @brief Method .ctor, addr 0x66598a4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x6659914, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x66598d0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x665989c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x66598c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  /// @brief Method .ctor, addr 0x665988c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t x, int32_t y);

  /// @brief Method .ctor, addr 0x6659894, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2 xy);

  static inline ::Unity::Mathematics::int2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x665a06c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Item(int32_t index);

  /// @brief Method get_xx, addr 0x665a02c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_xx();

  /// @brief Method get_xxx, addr 0x6659fcc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xxx();

  /// @brief Method get_xxxx, addr 0x6659eb8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x6659ec8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxxy();

  /// @brief Method get_xxy, addr 0x6659fd8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xxy();

  /// @brief Method get_xxyx, addr 0x6659ed8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x6659ee8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xxyy();

  /// @brief Method get_xy, addr 0x665a038, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_xy();

  /// @brief Method get_xyx, addr 0x6659fe4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xyx();

  /// @brief Method get_xyxx, addr 0x6659f04, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x6659f14, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyxy();

  /// @brief Method get_xyy, addr 0x6659ff0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_xyy();

  /// @brief Method get_xyyx, addr 0x6659f20, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x6659f30, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_xyyy();

  /// @brief Method get_yx, addr 0x665a048, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_yx();

  /// @brief Method get_yxx, addr 0x6659ffc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yxx();

  /// @brief Method get_yxxx, addr 0x6659f40, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x6659f54, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxxy();

  /// @brief Method get_yxy, addr 0x665a008, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yxy();

  /// @brief Method get_yxyx, addr 0x6659f60, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x6659f70, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yxyy();

  /// @brief Method get_yy, addr 0x665a060, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int2 get_yy();

  /// @brief Method get_yyx, addr 0x665a014, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yyx();

  /// @brief Method get_yyxx, addr 0x6659f80, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x6659f9c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyxy();

  /// @brief Method get_yyy, addr 0x665a020, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int3 get_yyy();

  /// @brief Method get_yyyx, addr 0x6659fac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x6659fbc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::int4 get_yyyy();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::int2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::int2>* i___System__IEquatable_1___Unity__Mathematics__int2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6659a8c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Addition(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Addition, addr 0x6659aa4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Addition(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_Addition, addr 0x6659ab8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Addition(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6659e28, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_BitwiseAnd(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6659e30, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_BitwiseAnd(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6659e44, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_BitwiseAnd(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6659e58, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_BitwiseOr(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6659e60, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_BitwiseOr(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x6659e74, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_BitwiseOr(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Decrement, addr 0x6659bbc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Decrement(::Unity::Mathematics::int2 val);

  /// @brief Method op_Division, addr 0x6659b0c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Division(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Division, addr 0x6659b24, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Division(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_Division, addr 0x6659b38, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Division(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Equality, addr 0x6659d70, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Equality, addr 0x6659d90, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_Equality, addr 0x6659dac, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6659e88, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_ExclusiveOr(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6659e90, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_ExclusiveOr(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6659ea4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_ExclusiveOr(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Explicit, addr 0x6659984, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Explicit___Unity__Mathematics__int2(::Unity::Mathematics::bool2 v);

  /// @brief Method op_Explicit, addr 0x6659a18, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Explicit___Unity__Mathematics__int2(::Unity::Mathematics::double2 v);

  /// @brief Method op_Explicit, addr 0x66599c4, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Explicit___Unity__Mathematics__int2(::Unity::Mathematics::float2 v);

  /// @brief Method op_Explicit, addr 0x66599a0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Explicit___Unity__Mathematics__int2(::Unity::Mathematics::uint2 v);

  /// @brief Method op_Explicit, addr 0x665996c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Explicit___Unity__Mathematics__int2(bool v);

  /// @brief Method op_Explicit, addr 0x66599f8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Explicit___Unity__Mathematics__int2(double_t v);

  /// @brief Method op_Explicit, addr 0x66599a4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Explicit___Unity__Mathematics__int2(float_t v);

  /// @brief Method op_Explicit, addr 0x6659994, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Explicit___Unity__Mathematics__int2(uint32_t v);

  /// @brief Method op_GreaterThan, addr 0x6659c84, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_GreaterThan, addr 0x6659ca4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x6659cc0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6659cdc, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6659cfc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6659d18, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Implicit, addr 0x6659960, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Implicit___Unity__Mathematics__int2(int32_t v);

  /// @brief Method op_Increment, addr 0x6659ba4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Increment(::Unity::Mathematics::int2 val);

  /// @brief Method op_Inequality, addr 0x6659dc8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Inequality, addr 0x6659de8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_Inequality, addr 0x6659e04, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_LeftShift, addr 0x6659d48, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_LeftShift(::Unity::Mathematics::int2 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x6659bd4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_LessThan, addr 0x6659bf4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_LessThan, addr 0x6659c10, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6659c2c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6659c4c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6659c68, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Modulus, addr 0x6659b4c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Modulus(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Modulus, addr 0x6659b6c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Modulus(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_Modulus, addr 0x6659b88, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Modulus(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Multiply, addr 0x6659a4c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Multiply(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Multiply, addr 0x6659a64, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Multiply(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_Multiply, addr 0x6659a78, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Multiply(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_OnesComplement, addr 0x6659e20, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_OnesComplement(::Unity::Mathematics::int2 val);

  /// @brief Method op_RightShift, addr 0x6659d5c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_RightShift(::Unity::Mathematics::int2 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x6659acc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Subtraction(::Unity::Mathematics::int2 lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_Subtraction, addr 0x6659ae4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Subtraction(::Unity::Mathematics::int2 lhs, int32_t rhs);

  /// @brief Method op_Subtraction, addr 0x6659af8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_Subtraction(int32_t lhs, ::Unity::Mathematics::int2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x6659d34, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_UnaryNegation(::Unity::Mathematics::int2 val);

  /// @brief Method op_UnaryPlus, addr 0x6659d44, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::int2 op_UnaryPlus(::Unity::Mathematics::int2 val);

  static inline void setStaticF_zero(::Unity::Mathematics::int2 value);

  /// @brief Method set_Item, addr 0x665a074, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, int32_t value);

  /// @brief Method set_xy, addr 0x665a040, size 0x8, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::int2 value);

  /// @brief Method set_yx, addr 0x665a054, size 0xc, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::int2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr int2();

  // Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr int2(int32_t x, int32_t y) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13181 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  int32_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  int32_t y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::int2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::int2, y) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::int2) == 0x8, "Size mismatch!");

} // namespace Unity::Mathematics
