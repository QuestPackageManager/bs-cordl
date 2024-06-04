#pragma once
// IWYU pragma private; include "Unity/Mathematics/half2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__half_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(half2)
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
class __half2__DebuggerProxy;
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
struct half3;
}
namespace Unity::Mathematics {
struct half4;
}
namespace Unity::Mathematics {
struct half;
}
// Forward declare root types
namespace Unity::Mathematics {
class __half2__DebuggerProxy;
}
namespace Unity::Mathematics {
struct half2;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::__half2__DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::half2);
// Type: ::DebuggerProxy
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 2, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: false
// CS Name: ::half2::DebuggerProxy*
class CORDL_TYPE __half2__DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x))::Unity::Mathematics::half x;

  /// @brief Field y, offset 0x12, size 0x2
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y))::Unity::Mathematics::half y;

  static inline ::Unity::Mathematics::__half2__DebuggerProxy* New_ctor(::Unity::Mathematics::half2 v);

  constexpr ::Unity::Mathematics::half const& __cordl_internal_get_x() const;

  constexpr ::Unity::Mathematics::half& __cordl_internal_get_x();

  constexpr ::Unity::Mathematics::half const& __cordl_internal_get_y() const;

  constexpr ::Unity::Mathematics::half& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_x(::Unity::Mathematics::half value);

  constexpr void __cordl_internal_set_y(::Unity::Mathematics::half value);

  /// @brief Method .ctor, addr 0x3232f60, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half2 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __half2__DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__half2__DebuggerProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __half2__DebuggerProxy(__half2__DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__half2__DebuggerProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __half2__DebuggerProxy(__half2__DebuggerProxy const&) = delete;

  /// @brief Field x, offset: 0x10, size: 0x2, def value: None
  ::Unity::Mathematics::half ___x;

  /// @brief Field y, offset: 0x12, size: 0x2, def value: None
  ::Unity::Mathematics::half ___y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__half2__DebuggerProxy, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::__half2__DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__half2__DebuggerProxy, ___y) == 0x12, "Offset mismatch!");

} // namespace Unity::Mathematics
// Type: Unity.Mathematics::half2
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::half2
struct CORDL_TYPE half2 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::__half2__DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item))::Unity::Mathematics::half Item[];

  __declspec(property(get = get_xx))::Unity::Mathematics::half2 xx;

  __declspec(property(get = get_xxx))::Unity::Mathematics::half3 xxx;

  __declspec(property(get = get_xxxx))::Unity::Mathematics::half4 xxxx;

  __declspec(property(get = get_xxxy))::Unity::Mathematics::half4 xxxy;

  __declspec(property(get = get_xxy))::Unity::Mathematics::half3 xxy;

  __declspec(property(get = get_xxyx))::Unity::Mathematics::half4 xxyx;

  __declspec(property(get = get_xxyy))::Unity::Mathematics::half4 xxyy;

  __declspec(property(get = get_xy, put = set_xy))::Unity::Mathematics::half2 xy;

  __declspec(property(get = get_xyx))::Unity::Mathematics::half3 xyx;

  __declspec(property(get = get_xyxx))::Unity::Mathematics::half4 xyxx;

  __declspec(property(get = get_xyxy))::Unity::Mathematics::half4 xyxy;

  __declspec(property(get = get_xyy))::Unity::Mathematics::half3 xyy;

  __declspec(property(get = get_xyyx))::Unity::Mathematics::half4 xyyx;

  __declspec(property(get = get_xyyy))::Unity::Mathematics::half4 xyyy;

  __declspec(property(get = get_yx, put = set_yx))::Unity::Mathematics::half2 yx;

  __declspec(property(get = get_yxx))::Unity::Mathematics::half3 yxx;

  __declspec(property(get = get_yxxx))::Unity::Mathematics::half4 yxxx;

  __declspec(property(get = get_yxxy))::Unity::Mathematics::half4 yxxy;

  __declspec(property(get = get_yxy))::Unity::Mathematics::half3 yxy;

  __declspec(property(get = get_yxyx))::Unity::Mathematics::half4 yxyx;

  __declspec(property(get = get_yxyy))::Unity::Mathematics::half4 yxyy;

  __declspec(property(get = get_yy))::Unity::Mathematics::half2 yy;

  __declspec(property(get = get_yyx))::Unity::Mathematics::half3 yyx;

  __declspec(property(get = get_yyxx))::Unity::Mathematics::half4 yyxx;

  __declspec(property(get = get_yyxy))::Unity::Mathematics::half4 yyxy;

  __declspec(property(get = get_yyy))::Unity::Mathematics::half3 yyy;

  __declspec(property(get = get_yyyx))::Unity::Mathematics::half4 yyyx;

  __declspec(property(get = get_yyyy))::Unity::Mathematics::half4 yyyy;

  /// @brief Field zero, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::Unity::Mathematics::half2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::half2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::half2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x3232ca0, size 0x84, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x3232c7c, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::half2 rhs);

  /// @brief Method GetHashCode, addr 0x3232d24, size 0x3c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x3232d60, size 0xa8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x3232e08, size 0x158, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x32322a8, size 0x168, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 v);

  /// @brief Method .ctor, addr 0x3232044, size 0x160, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2 v);

  /// @brief Method .ctor, addr 0x3231f38, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half v);

  /// @brief Method .ctor, addr 0x32321a4, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x3231f44, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x3231f1c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half x, ::Unity::Mathematics::half y);

  /// @brief Method .ctor, addr 0x3231f28, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half2 xy);

  static inline ::Unity::Mathematics::half2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x3232c6c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half get_Item(int32_t index);

  /// @brief Method get_xx, addr 0x3232c0c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_xx();

  /// @brief Method get_xxx, addr 0x3232b54, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xxx();

  /// @brief Method get_xxxx, addr 0x323299c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x32329b4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxxy();

  /// @brief Method get_xxy, addr 0x3232b68, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xxy();

  /// @brief Method get_xxyx, addr 0x32329d0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x32329ec, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xxyy();

  /// @brief Method get_xy, addr 0x3232c18, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_xy();

  /// @brief Method get_xyx, addr 0x3232b80, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xyx();

  /// @brief Method get_xyxx, addr 0x3232a08, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x3232a24, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyxy();

  /// @brief Method get_xyy, addr 0x3232b98, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_xyy();

  /// @brief Method get_xyyx, addr 0x3232a40, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x3232a5c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_xyyy();

  /// @brief Method get_yx, addr 0x3232c3c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_yx();

  /// @brief Method get_yxx, addr 0x3232bb0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yxx();

  /// @brief Method get_yxxx, addr 0x3232a78, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x3232a94, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxxy();

  /// @brief Method get_yxy, addr 0x3232bc8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yxy();

  /// @brief Method get_yxyx, addr 0x3232ab0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x3232acc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yxyy();

  /// @brief Method get_yy, addr 0x3232c60, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half2 get_yy();

  /// @brief Method get_yyx, addr 0x3232be0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yyx();

  /// @brief Method get_yyxx, addr 0x3232ae8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x3232b04, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyxy();

  /// @brief Method get_yyy, addr 0x3232bf8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half3 get_yyy();

  /// @brief Method get_yyyx, addr 0x3232b20, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x3232b3c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::half4 get_yyyy();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::half2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::half2>* i___System__IEquatable_1___Unity__Mathematics__half2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Equality, addr 0x3232920, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::half lhs, ::Unity::Mathematics::half2 rhs);

  /// @brief Method op_Equality, addr 0x3232900, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::half2 lhs, ::Unity::Mathematics::half rhs);

  /// @brief Method op_Equality, addr 0x32328e4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::half2 lhs, ::Unity::Mathematics::half2 rhs);

  /// @brief Method op_Explicit, addr 0x323277c, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 op_Explicit___Unity__Mathematics__half2(::Unity::Mathematics::double2 v);

  /// @brief Method op_Explicit, addr 0x323251c, size 0x160, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 op_Explicit___Unity__Mathematics__half2(::Unity::Mathematics::float2 v);

  /// @brief Method op_Explicit, addr 0x323267c, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 op_Explicit___Unity__Mathematics__half2(double_t v);

  /// @brief Method op_Explicit, addr 0x3232420, size 0xfc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 op_Explicit___Unity__Mathematics__half2(float_t v);

  /// @brief Method op_Implicit, addr 0x3232410, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::half2 op_Implicit___Unity__Mathematics__half2(::Unity::Mathematics::half v);

  /// @brief Method op_Inequality, addr 0x323297c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::half lhs, ::Unity::Mathematics::half2 rhs);

  /// @brief Method op_Inequality, addr 0x323295c, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::half2 lhs, ::Unity::Mathematics::half rhs);

  /// @brief Method op_Inequality, addr 0x3232940, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::half2 lhs, ::Unity::Mathematics::half2 rhs);

  static inline void setStaticF_zero(::Unity::Mathematics::half2 value);

  /// @brief Method set_Item, addr 0x3232c74, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, ::Unity::Mathematics::half value);

  /// @brief Method set_xy, addr 0x3232c2c, size 0x10, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::half2 value);

  /// @brief Method set_yx, addr 0x3232c50, size 0x10, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::half2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr half2();

  // Ctor Parameters [CppParam { name: "x", ty: "::Unity::Mathematics::half", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::Unity::Mathematics::half", modifiers: "", def_value: None
  // }]
  constexpr half2(::Unity::Mathematics::half x, ::Unity::Mathematics::half y) noexcept;

  /// @brief Field x, offset: 0x0, size: 0x2, def value: None
  ::Unity::Mathematics::half x;

  /// @brief Field y, offset: 0x2, size: 0x2, def value: None
  ::Unity::Mathematics::half y;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::half2, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::half2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::half2, y) == 0x2, "Offset mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::__half2__DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__half2__DebuggerProxy*, "Unity.Mathematics", "half2/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::half2, "Unity.Mathematics", "half2");
