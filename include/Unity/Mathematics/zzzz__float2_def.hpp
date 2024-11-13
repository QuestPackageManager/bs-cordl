#pragma once
// IWYU pragma private; include "Unity/Mathematics/float2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float2)
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
class __float2__DebuggerProxy;
}
namespace Unity::Mathematics {
struct bool2;
}
namespace Unity::Mathematics {
struct double2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct half2;
}
namespace Unity::Mathematics {
struct half;
}
namespace Unity::Mathematics {
struct int2;
}
namespace Unity::Mathematics {
struct uint2;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Unity::Mathematics {
class __float2__DebuggerProxy;
}
namespace Unity::Mathematics {
struct float2;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::__float2__DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::float2);
// Type: ::DebuggerProxy
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: false
// CS Name: ::float2::DebuggerProxy*
class CORDL_TYPE __float2__DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) float_t x;

  /// @brief Field y, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) float_t y;

  static inline ::Unity::Mathematics::__float2__DebuggerProxy* New_ctor(::Unity::Mathematics::float2 v);

  constexpr float_t const& __cordl_internal_get_x() const;

  constexpr float_t& __cordl_internal_get_x();

  constexpr float_t const& __cordl_internal_get_y() const;

  constexpr float_t& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_x(float_t value);

  constexpr void __cordl_internal_set_y(float_t value);

  /// @brief Method .ctor, addr 0x4629690, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __float2__DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__float2__DebuggerProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __float2__DebuggerProxy(__float2__DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__float2__DebuggerProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __float2__DebuggerProxy(__float2__DebuggerProxy const&) = delete;

  /// @brief Field x, offset: 0x10, size: 0x4, def value: None
  float_t ___x;

  /// @brief Field y, offset: 0x14, size: 0x4, def value: None
  float_t ___y;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9944 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__float2__DebuggerProxy, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::__float2__DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__float2__DebuggerProxy, ___y) == 0x14, "Offset mismatch!");

} // namespace Unity::Mathematics
// Type: Unity.Mathematics::float2
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::float2
struct CORDL_TYPE float2 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::__float2__DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  __declspec(property(get = get_xx)) ::Unity::Mathematics::float2 xx;

  __declspec(property(get = get_xxx)) ::Unity::Mathematics::float3 xxx;

  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::float4 xxxx;

  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::float4 xxxy;

  __declspec(property(get = get_xxy)) ::Unity::Mathematics::float3 xxy;

  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::float4 xxyx;

  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::float4 xxyy;

  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::float2 xy;

  __declspec(property(get = get_xyx)) ::Unity::Mathematics::float3 xyx;

  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::float4 xyxx;

  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::float4 xyxy;

  __declspec(property(get = get_xyy)) ::Unity::Mathematics::float3 xyy;

  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::float4 xyyx;

  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::float4 xyyy;

  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::float2 yx;

  __declspec(property(get = get_yxx)) ::Unity::Mathematics::float3 yxx;

  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::float4 yxxx;

  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::float4 yxxy;

  __declspec(property(get = get_yxy)) ::Unity::Mathematics::float3 yxy;

  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::float4 yxyx;

  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::float4 yxyy;

  __declspec(property(get = get_yy)) ::Unity::Mathematics::float2 yy;

  __declspec(property(get = get_yyx)) ::Unity::Mathematics::float3 yyx;

  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::float4 yyxx;

  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::float4 yyxy;

  __declspec(property(get = get_yyy)) ::Unity::Mathematics::float3 yyy;

  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::float4 yyyx;

  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::float4 yyyy;

  /// @brief Field zero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::float2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::float2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x46294a0, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x462947c, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::float2 rhs);

  /// @brief Method GetHashCode, addr 0x4629528, size 0x30, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4629558, size 0xa0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46295f8, size 0x90, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x4628ca8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2 v);

  /// @brief Method .ctor, addr 0x4628df0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 v);

  /// @brief Method .ctor, addr 0x4628d08, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half v);

  /// @brief Method .ctor, addr 0x4628d68, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half2 v);

  /// @brief Method .ctor, addr 0x4628cd4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2 v);

  /// @brief Method .ctor, addr 0x4628cf4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2 v);

  /// @brief Method .ctor, addr 0x4628c90, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x4628de4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x4628c88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x4628cc8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x4628ce8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  /// @brief Method .ctor, addr 0x4628c78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y);

  /// @brief Method .ctor, addr 0x4628c80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2 xy);

  static inline ::Unity::Mathematics::float2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x462946c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t index);

  /// @brief Method get_xx, addr 0x4629434, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_xx();

  /// @brief Method get_xxx, addr 0x46293cc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xxx();

  /// @brief Method get_xxxx, addr 0x46292b4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x46292c8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxxy();

  /// @brief Method get_xxy, addr 0x46293dc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xxy();

  /// @brief Method get_xxyx, addr 0x46292d8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x46292ec, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxyy();

  /// @brief Method get_xy, addr 0x4629440, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_xy();

  /// @brief Method get_xyx, addr 0x46293e8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xyx();

  /// @brief Method get_xyxx, addr 0x4629300, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x4629310, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyxy();

  /// @brief Method get_xyy, addr 0x46293f4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xyy();

  /// @brief Method get_xyyx, addr 0x4629320, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x4629330, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyyy();

  /// @brief Method get_yx, addr 0x4629450, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_yx();

  /// @brief Method get_yxx, addr 0x4629400, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yxx();

  /// @brief Method get_yxxx, addr 0x4629340, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x4629350, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxxy();

  /// @brief Method get_yxy, addr 0x462940c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yxy();

  /// @brief Method get_yxyx, addr 0x4629360, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x4629370, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxyy();

  /// @brief Method get_yy, addr 0x4629460, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_yy();

  /// @brief Method get_yyx, addr 0x4629418, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yyx();

  /// @brief Method get_yyxx, addr 0x4629380, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x4629394, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyxy();

  /// @brief Method get_yyy, addr 0x4629424, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yyy();

  /// @brief Method get_yyyx, addr 0x46293a8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x46293b8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyyy();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::float2>* i___System__IEquatable_1___Unity__Mathematics__float2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x4628f94, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Addition(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Addition, addr 0x4628fa0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Addition(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_Addition, addr 0x4628fac, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Addition(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Decrement, addr 0x46290e4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Decrement(::Unity::Mathematics::float2 val);

  /// @brief Method op_Division, addr 0x4628fe4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Division(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Division, addr 0x4628ff0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Division(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_Division, addr 0x4628ffc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Division(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Equality, addr 0x4629224, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Equality, addr 0x462923c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_Equality, addr 0x4629254, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Explicit, addr 0x4628e20, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Explicit___Unity__Mathematics__float2(::Unity::Mathematics::bool2 v);

  /// @brief Method op_Explicit, addr 0x4628f60, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Explicit___Unity__Mathematics__float2(::Unity::Mathematics::double2 v);

  /// @brief Method op_Explicit, addr 0x4628e08, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Explicit___Unity__Mathematics__float2(bool v);

  /// @brief Method op_Explicit, addr 0x4628f54, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Explicit___Unity__Mathematics__float2(double_t v);

  /// @brief Method op_GreaterThan, addr 0x4629184, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_GreaterThan, addr 0x462919c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_GreaterThan, addr 0x46291b4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46291cc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46291e4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x46291fc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Implicit, addr 0x4629688, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::Unity::Mathematics::float2 v);

  /// @brief Method op_Implicit, addr 0x4628e74, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Implicit___Unity__Mathematics__float2(::Unity::Mathematics::half v);

  /// @brief Method op_Implicit, addr 0x4628ed8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Implicit___Unity__Mathematics__float2(::Unity::Mathematics::half2 v);

  /// @brief Method op_Implicit, addr 0x4628e48, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Implicit___Unity__Mathematics__float2(::Unity::Mathematics::int2 v);

  /// @brief Method op_Implicit, addr 0x4628e64, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Implicit___Unity__Mathematics__float2(::Unity::Mathematics::uint2 v);

  /// @brief Method op_Implicit, addr 0x462968c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Implicit___Unity__Mathematics__float2(::UnityEngine::Vector2 v);

  /// @brief Method op_Implicit, addr 0x4628e00, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Implicit___Unity__Mathematics__float2(float_t v);

  /// @brief Method op_Implicit, addr 0x4628e3c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Implicit___Unity__Mathematics__float2(int32_t v);

  /// @brief Method op_Implicit, addr 0x4628e58, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Implicit___Unity__Mathematics__float2(uint32_t v);

  /// @brief Method op_Increment, addr 0x46290d4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Increment(::Unity::Mathematics::float2 val);

  /// @brief Method op_Inequality, addr 0x462926c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Inequality, addr 0x4629284, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_Inequality, addr 0x462929c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_LessThan, addr 0x46290f4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_LessThan, addr 0x462910c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_LessThan, addr 0x4629124, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x462913c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4629154, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x462916c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Modulus, addr 0x462900c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Modulus(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Modulus, addr 0x4629050, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Modulus(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_Modulus, addr 0x4629094, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Modulus(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Multiply, addr 0x4628f6c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Multiply(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Multiply, addr 0x4628f78, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Multiply(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_Multiply, addr 0x4628f84, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Multiply(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Subtraction, addr 0x4628fbc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Subtraction(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Subtraction, addr 0x4628fc8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Subtraction(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x4628fd4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Subtraction(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x4629214, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_UnaryNegation(::Unity::Mathematics::float2 val);

  /// @brief Method op_UnaryPlus, addr 0x4629220, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_UnaryPlus(::Unity::Mathematics::float2 val);

  static inline void setStaticF_zero(::Unity::Mathematics::float2 value);

  /// @brief Method set_Item, addr 0x4629474, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, float_t value);

  /// @brief Method set_xy, addr 0x4629448, size 0x8, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::float2 value);

  /// @brief Method set_yx, addr 0x4629458, size 0x8, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::float2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr float2();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }]
  constexpr float2(float_t x, float_t y) noexcept;

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9945 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::float2, 0x8>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2, y) == 0x4, "Offset mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::__float2__DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__float2__DebuggerProxy*, "Unity.Mathematics", "float2/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::float2, "Unity.Mathematics", "float2");
