#pragma once
// IWYU pragma private; include "Unity/Mathematics/uint2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(uint2)
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
struct int2;
}
namespace Unity::Mathematics {
class uint2_DebuggerProxy;
}
namespace Unity::Mathematics {
struct uint3;
}
namespace Unity::Mathematics {
struct uint4;
}
// Forward declare root types
namespace Unity::Mathematics {
class uint2_DebuggerProxy;
}
namespace Unity::Mathematics {
struct uint2;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::uint2_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::uint2);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::uint2_DebuggerProxy*, "Unity.Mathematics", "uint2/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::uint2, "Unity.Mathematics", "uint2");
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.uint2/DebuggerProxy
class CORDL_TYPE uint2_DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) uint32_t x;

  /// @brief Field y, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) uint32_t y;

  static inline ::Unity::Mathematics::uint2_DebuggerProxy* New_ctor(::Unity::Mathematics::uint2 v);

  constexpr uint32_t const& __cordl_internal_get_x() const;

  constexpr uint32_t& __cordl_internal_get_x();

  constexpr uint32_t const& __cordl_internal_get_y() const;

  constexpr uint32_t& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_x(uint32_t value);

  constexpr void __cordl_internal_set_y(uint32_t value);

  /// @brief Method .ctor, addr 0x6af4774, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr uint2_DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "uint2_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  uint2_DebuggerProxy(uint2_DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "uint2_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  uint2_DebuggerProxy(uint2_DebuggerProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13448 };

  /// @brief Field x, offset: 0x10, size: 0x4, def value: None
  uint32_t ___x;

  /// @brief Field y, offset: 0x14, size: 0x4, def value: None
  uint32_t ___y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint2_DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2_DebuggerProxy, ___y) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::uint2_DebuggerProxy) == 0x18, "Size mismatch!");

} // namespace Unity::Mathematics
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.uint2::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.uint2
struct CORDL_TYPE uint2 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::uint2_DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) uint32_t Item[];

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xx)) ::Unity::Mathematics::uint2 xx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxx)) ::Unity::Mathematics::uint3 xxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::uint4 xxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::uint4 xxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxy)) ::Unity::Mathematics::uint3 xxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::uint4 xxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::uint4 xxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::uint2 xy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyx)) ::Unity::Mathematics::uint3 xyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::uint4 xyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::uint4 xyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyy)) ::Unity::Mathematics::uint3 xyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::uint4 xyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::uint4 xyyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::uint2 yx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxx)) ::Unity::Mathematics::uint3 yxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::uint4 yxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::uint4 yxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxy)) ::Unity::Mathematics::uint3 yxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::uint4 yxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::uint4 yxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yy)) ::Unity::Mathematics::uint2 yy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyx)) ::Unity::Mathematics::uint3 yyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::uint4 yyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::uint4 yyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyy)) ::Unity::Mathematics::uint3 yyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::uint4 yyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::uint4 yyyy;

  /// @brief Field zero, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::uint2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::uint2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::uint2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x6af4540, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6af4518, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::uint2 rhs);

  /// @brief Method GetHashCode, addr 0x6af45cc, size 0x34, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6af4600, size 0xb4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6af46b4, size 0xc0, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6af3d98, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2 v);

  /// @brief Method .ctor, addr 0x6af3e04, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 v);

  /// @brief Method .ctor, addr 0x6af3dd0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2 v);

  /// @brief Method .ctor, addr 0x6af3db0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2 v);

  /// @brief Method .ctor, addr 0x6af3d8c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x6af3dec, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x6af3db8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x6af3da8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x6af3d84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  /// @brief Method .ctor, addr 0x6af3d74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint32_t x, uint32_t y);

  /// @brief Method .ctor, addr 0x6af3d7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2 xy);

  static inline ::Unity::Mathematics::uint2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x6af4508, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Item(int32_t index);

  /// @brief Method get_xx, addr 0x6af44c8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_xx();

  /// @brief Method get_xxx, addr 0x6af4468, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xxx();

  /// @brief Method get_xxxx, addr 0x6af4354, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x6af4364, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxxy();

  /// @brief Method get_xxy, addr 0x6af4474, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xxy();

  /// @brief Method get_xxyx, addr 0x6af4374, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x6af4384, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xxyy();

  /// @brief Method get_xy, addr 0x6af44d4, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_xy();

  /// @brief Method get_xyx, addr 0x6af4480, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xyx();

  /// @brief Method get_xyxx, addr 0x6af43a0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x6af43b0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyxy();

  /// @brief Method get_xyy, addr 0x6af448c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_xyy();

  /// @brief Method get_xyyx, addr 0x6af43bc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x6af43cc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_xyyy();

  /// @brief Method get_yx, addr 0x6af44e4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_yx();

  /// @brief Method get_yxx, addr 0x6af4498, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yxx();

  /// @brief Method get_yxxx, addr 0x6af43dc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x6af43f0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxxy();

  /// @brief Method get_yxy, addr 0x6af44a4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yxy();

  /// @brief Method get_yxyx, addr 0x6af43fc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x6af440c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yxyy();

  /// @brief Method get_yy, addr 0x6af44fc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_yy();

  /// @brief Method get_yyx, addr 0x6af44b0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yyx();

  /// @brief Method get_yyxx, addr 0x6af441c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x6af4438, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyxy();

  /// @brief Method get_yyy, addr 0x6af44bc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint3 get_yyy();

  /// @brief Method get_yyyx, addr 0x6af4448, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x6af4458, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint4 get_yyyy();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::uint2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::uint2>* i___System__IEquatable_1___Unity__Mathematics__uint2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6af3f38, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Addition(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Addition, addr 0x6af3f50, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Addition(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_Addition, addr 0x6af3f64, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Addition(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6af42c4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_BitwiseAnd(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6af42cc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_BitwiseAnd(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6af42e0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_BitwiseAnd(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6af42f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_BitwiseOr(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6af42fc, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_BitwiseOr(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_BitwiseOr, addr 0x6af4310, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_BitwiseOr(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Decrement, addr 0x6af4068, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Decrement(::Unity::Mathematics::uint2 val);

  /// @brief Method op_Division, addr 0x6af3fb8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Division(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Division, addr 0x6af3fd0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Division(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_Division, addr 0x6af3fe4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Division(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Equality, addr 0x6af420c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Equality, addr 0x6af422c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_Equality, addr 0x6af4248, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6af4324, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_ExclusiveOr(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6af432c, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_ExclusiveOr(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6af4340, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_ExclusiveOr(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Explicit, addr 0x6af3e58, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(::Unity::Mathematics::bool2 v);

  /// @brief Method op_Explicit, addr 0x6af3ed0, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(::Unity::Mathematics::double2 v);

  /// @brief Method op_Explicit, addr 0x6af3e90, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(::Unity::Mathematics::float2 v);

  /// @brief Method op_Explicit, addr 0x6af3e74, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(::Unity::Mathematics::int2 v);

  /// @brief Method op_Explicit, addr 0x6af3e40, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(bool v);

  /// @brief Method op_Explicit, addr 0x6af3eb8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(double_t v);

  /// @brief Method op_Explicit, addr 0x6af3e78, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(float_t v);

  /// @brief Method op_Explicit, addr 0x6af3e68, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Explicit___Unity__Mathematics__uint2(int32_t v);

  /// @brief Method op_GreaterThan, addr 0x6af4128, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_GreaterThan, addr 0x6af4144, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThan, addr 0x6af4160, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6af417c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6af4198, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6af41b4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Implicit, addr 0x6af3e34, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Implicit___Unity__Mathematics__uint2(uint32_t v);

  /// @brief Method op_Increment, addr 0x6af4050, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Increment(::Unity::Mathematics::uint2 val);

  /// @brief Method op_Inequality, addr 0x6af4264, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Inequality, addr 0x6af4284, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_Inequality, addr 0x6af42a0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_LeftShift, addr 0x6af41e4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_LeftShift(::Unity::Mathematics::uint2 x, int32_t n);

  /// @brief Method op_LessThan, addr 0x6af4080, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_LessThan, addr 0x6af409c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_LessThan, addr 0x6af40b8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6af40d4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6af40f0, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6af410c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Modulus, addr 0x6af3ff8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Modulus(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Modulus, addr 0x6af4018, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Modulus(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_Modulus, addr 0x6af4034, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Modulus(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Multiply, addr 0x6af3ef8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Multiply(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Multiply, addr 0x6af3f10, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Multiply(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_Multiply, addr 0x6af3f24, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Multiply(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_OnesComplement, addr 0x6af42bc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_OnesComplement(::Unity::Mathematics::uint2 val);

  /// @brief Method op_RightShift, addr 0x6af41f8, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_RightShift(::Unity::Mathematics::uint2 x, int32_t n);

  /// @brief Method op_Subtraction, addr 0x6af3f78, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Subtraction(::Unity::Mathematics::uint2 lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_Subtraction, addr 0x6af3f90, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Subtraction(::Unity::Mathematics::uint2 lhs, uint32_t rhs);

  /// @brief Method op_Subtraction, addr 0x6af3fa4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_Subtraction(uint32_t lhs, ::Unity::Mathematics::uint2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x6af41d0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_UnaryNegation(::Unity::Mathematics::uint2 val);

  /// @brief Method op_UnaryPlus, addr 0x6af41e0, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint2 op_UnaryPlus(::Unity::Mathematics::uint2 val);

  static inline void setStaticF_zero(::Unity::Mathematics::uint2 value);

  /// @brief Method set_Item, addr 0x6af4510, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, uint32_t value);

  /// @brief Method set_xy, addr 0x6af44dc, size 0x8, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::uint2 value);

  /// @brief Method set_yx, addr 0x6af44f0, size 0xc, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::uint2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr uint2();

  // Ctor Parameters [CppParam { name: "x", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
  constexpr uint2(uint32_t x, uint32_t y) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13449 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  uint32_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  uint32_t y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::uint2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::uint2, y) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::uint2) == 0x8, "Size mismatch!");

} // namespace Unity::Mathematics
