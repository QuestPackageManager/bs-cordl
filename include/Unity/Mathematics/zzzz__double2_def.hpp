#pragma once
// IWYU pragma private; include "Unity/Mathematics/double2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double2)
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
class double2_DebuggerProxy;
}
namespace Unity::Mathematics {
struct double3;
}
namespace Unity::Mathematics {
struct double4;
}
namespace Unity::Mathematics {
struct float2;
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
// Forward declare root types
namespace Unity::Mathematics {
class double2_DebuggerProxy;
}
namespace Unity::Mathematics {
struct double2;
}
// Write type traits
MARK_REF_T(::Unity::Mathematics::double2_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::double2);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::double2_DebuggerProxy*, "Unity.Mathematics", "double2/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::double2, "Unity.Mathematics", "double2");
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.double2/DebuggerProxy
class CORDL_TYPE double2_DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) double_t x;

  /// @brief Field y, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) double_t y;

  static inline ::Unity::Mathematics::double2_DebuggerProxy* New_ctor(::Unity::Mathematics::double2 v);

  constexpr double_t const& __cordl_internal_get_x() const;

  constexpr double_t& __cordl_internal_get_x();

  constexpr double_t const& __cordl_internal_get_y() const;

  constexpr double_t& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_x(double_t value);

  constexpr void __cordl_internal_set_y(double_t value);

  /// @brief Method .ctor, addr 0x6a5e0ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr double2_DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "double2_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  double2_DebuggerProxy(double2_DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "double2_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  double2_DebuggerProxy(double2_DebuggerProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13385 };

  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  double_t ___x;

  /// @brief Field y, offset: 0x18, size: 0x8, def value: None
  double_t ___y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double2_DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2_DebuggerProxy, ___y) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::double2_DebuggerProxy) == 0x20, "Size mismatch!");

} // namespace Unity::Mathematics
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.double2::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.double2
struct CORDL_TYPE double2 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::double2_DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) double_t Item[];

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xx)) ::Unity::Mathematics::double2 xx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxx)) ::Unity::Mathematics::double3 xxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::double4 xxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::double4 xxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxy)) ::Unity::Mathematics::double3 xxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::double4 xxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::double4 xxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::double2 xy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyx)) ::Unity::Mathematics::double3 xyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::double4 xyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::double4 xyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyy)) ::Unity::Mathematics::double3 xyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::double4 xyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::double4 xyyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::double2 yx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxx)) ::Unity::Mathematics::double3 yxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::double4 yxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::double4 yxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxy)) ::Unity::Mathematics::double3 yxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::double4 yxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::double4 yxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yy)) ::Unity::Mathematics::double2 yy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyx)) ::Unity::Mathematics::double3 yyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::double4 yyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::double4 yyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyy)) ::Unity::Mathematics::double3 yyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::double4 yyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::double4 yyyy;

  /// @brief Field zero, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::double2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x6a5deac, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6a5de88, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double2 rhs);

  /// @brief Method GetHashCode, addr 0x6a5df38, size 0x40, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6a5df78, size 0xb4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6a5e02c, size 0xc0, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6a5d6ac, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2 v);

  /// @brief Method .ctor, addr 0x6a5d804, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2 v);

  /// @brief Method .ctor, addr 0x6a5d710, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half v);

  /// @brief Method .ctor, addr 0x6a5d774, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half2 v);

  /// @brief Method .ctor, addr 0x6a5d6dc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2 v);

  /// @brief Method .ctor, addr 0x6a5d6fc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2 v);

  /// @brief Method .ctor, addr 0x6a5d694, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x6a5d68c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x6a5d7f8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x6a5d6d0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x6a5d6f0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  /// @brief Method .ctor, addr 0x6a5d67c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(double_t x, double_t y);

  /// @brief Method .ctor, addr 0x6a5d684, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 xy);

  static inline ::Unity::Mathematics::double2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x6a5de78, size 0x8, virtual false, abstract: false, final false
  inline double_t get_Item(int32_t index);

  /// @brief Method get_xx, addr 0x6a5de40, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_xx();

  /// @brief Method get_xxx, addr 0x6a5ddd8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xxx();

  /// @brief Method get_xxxx, addr 0x6a5dcd0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x6a5dce4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxxy();

  /// @brief Method get_xxy, addr 0x6a5dde8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xxy();

  /// @brief Method get_xxyx, addr 0x6a5dcf4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x6a5dd04, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xxyy();

  /// @brief Method get_xy, addr 0x6a5de4c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_xy();

  /// @brief Method get_xyx, addr 0x6a5ddf4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xyx();

  /// @brief Method get_xyxx, addr 0x6a5dd14, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x6a5dd24, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyxy();

  /// @brief Method get_xyy, addr 0x6a5de00, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_xyy();

  /// @brief Method get_xyyx, addr 0x6a5dd34, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x6a5dd44, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_xyyy();

  /// @brief Method get_yx, addr 0x6a5de5c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_yx();

  /// @brief Method get_yxx, addr 0x6a5de0c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yxx();

  /// @brief Method get_yxxx, addr 0x6a5dd54, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x6a5dd64, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxxy();

  /// @brief Method get_yxy, addr 0x6a5de18, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yxy();

  /// @brief Method get_yxyx, addr 0x6a5dd74, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x6a5dd84, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yxyy();

  /// @brief Method get_yy, addr 0x6a5de6c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double2 get_yy();

  /// @brief Method get_yyx, addr 0x6a5de24, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yyx();

  /// @brief Method get_yyxx, addr 0x6a5dd94, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x6a5dda4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyxy();

  /// @brief Method get_yyy, addr 0x6a5de30, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double3 get_yyy();

  /// @brief Method get_yyyx, addr 0x6a5ddb4, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x6a5ddc4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::double4 get_yyyy();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double2>* i___System__IEquatable_1___Unity__Mathematics__double2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6a5d9b0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Addition(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Addition, addr 0x6a5d9bc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Addition(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x6a5d9c8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Addition(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Decrement, addr 0x6a5db00, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Decrement(::Unity::Mathematics::double2 val);

  /// @brief Method op_Division, addr 0x6a5da00, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Division(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Division, addr 0x6a5da0c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Division(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x6a5da18, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Division(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Equality, addr 0x6a5dc40, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Equality, addr 0x6a5dc58, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x6a5dc70, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Explicit, addr 0x6a5d834, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Explicit___Unity__Mathematics__double2(::Unity::Mathematics::bool2 v);

  /// @brief Method op_Explicit, addr 0x6a5d81c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Explicit___Unity__Mathematics__double2(bool v);

  /// @brief Method op_GreaterThan, addr 0x6a5dba0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_GreaterThan, addr 0x6a5dbb8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x6a5dbd0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6a5dbe8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6a5dc00, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x6a5dc18, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Implicit, addr 0x6a5d97c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(::Unity::Mathematics::float2 v);

  /// @brief Method op_Implicit, addr 0x6a5d888, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(::Unity::Mathematics::half v);

  /// @brief Method op_Implicit, addr 0x6a5d8ec, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(::Unity::Mathematics::half2 v);

  /// @brief Method op_Implicit, addr 0x6a5d85c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(::Unity::Mathematics::int2 v);

  /// @brief Method op_Implicit, addr 0x6a5d878, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(::Unity::Mathematics::uint2 v);

  /// @brief Method op_Implicit, addr 0x6a5d814, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(double_t v);

  /// @brief Method op_Implicit, addr 0x6a5d970, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(float_t v);

  /// @brief Method op_Implicit, addr 0x6a5d850, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(int32_t v);

  /// @brief Method op_Implicit, addr 0x6a5d86c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Implicit___Unity__Mathematics__double2(uint32_t v);

  /// @brief Method op_Increment, addr 0x6a5daf0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Increment(::Unity::Mathematics::double2 val);

  /// @brief Method op_Inequality, addr 0x6a5dc88, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Inequality, addr 0x6a5dca0, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x6a5dcb8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_LessThan, addr 0x6a5db10, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_LessThan, addr 0x6a5db28, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x6a5db40, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6a5db58, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6a5db70, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x6a5db88, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Modulus, addr 0x6a5da28, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Modulus(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Modulus, addr 0x6a5da6c, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Modulus(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x6a5dab0, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Modulus(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Multiply, addr 0x6a5d988, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Multiply(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Multiply, addr 0x6a5d994, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Multiply(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x6a5d9a0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Multiply(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Subtraction, addr 0x6a5d9d8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Subtraction(::Unity::Mathematics::double2 lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_Subtraction, addr 0x6a5d9e4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Subtraction(::Unity::Mathematics::double2 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x6a5d9f0, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_Subtraction(double_t lhs, ::Unity::Mathematics::double2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x6a5dc30, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_UnaryNegation(::Unity::Mathematics::double2 val);

  /// @brief Method op_UnaryPlus, addr 0x6a5dc3c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double2 op_UnaryPlus(::Unity::Mathematics::double2 val);

  static inline void setStaticF_zero(::Unity::Mathematics::double2 value);

  /// @brief Method set_Item, addr 0x6a5de80, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, double_t value);

  /// @brief Method set_xy, addr 0x6a5de54, size 0x8, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::double2 value);

  /// @brief Method set_yx, addr 0x6a5de64, size 0x8, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::double2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double2();

  // Ctor Parameters [CppParam { name: "x", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "double_t", modifiers: "", def_value: None, comment: None }]
  constexpr double2(double_t x, double_t y) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13386 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field x, offset: 0x0, size: 0x8, def value: None
  double_t x;

  /// @brief Field y, offset: 0x8, size: 0x8, def value: None
  double_t y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::double2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double2, y) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Mathematics::double2) == 0x10, "Size mismatch!");

} // namespace Unity::Mathematics
