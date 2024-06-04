#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(bool2)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
class __bool2__DebuggerProxy;
}
namespace Unity::Mathematics {
struct bool3;
}
namespace Unity::Mathematics {
struct bool4;
}
// Forward declare root types
namespace Unity::Mathematics {
class __bool2__DebuggerProxy;
}
namespace Unity::Mathematics {
struct bool2;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::__bool2__DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::bool2);
// Type: ::DebuggerProxy
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 18, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: false
// CS Name: ::bool2::DebuggerProxy*
class CORDL_TYPE __bool2__DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) bool x;

  /// @brief Field y, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) bool y;

  static inline ::Unity::Mathematics::__bool2__DebuggerProxy* New_ctor(::Unity::Mathematics::bool2 v);

  constexpr bool const& __cordl_internal_get_x() const;

  constexpr bool& __cordl_internal_get_x();

  constexpr bool const& __cordl_internal_get_y() const;

  constexpr bool& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_x(bool value);

  constexpr void __cordl_internal_set_y(bool value);

  /// @brief Method .ctor, addr 0x31e780c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __bool2__DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__bool2__DebuggerProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __bool2__DebuggerProxy(__bool2__DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__bool2__DebuggerProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __bool2__DebuggerProxy(__bool2__DebuggerProxy const&) = delete;

  /// @brief Field x, offset: 0x10, size: 0x1, def value: None
  bool ___x;

  /// @brief Field y, offset: 0x11, size: 0x1, def value: None
  bool ___y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::__bool2__DebuggerProxy, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::__bool2__DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::__bool2__DebuggerProxy, ___y) == 0x11, "Offset mismatch!");

} // namespace Unity::Mathematics
// Type: Unity.Mathematics::bool2
// SizeInfo { instance_size: 2, native_size: 2, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::bool2
struct CORDL_TYPE bool2 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::__bool2__DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) bool Item[];

  __declspec(property(get = get_xx))::Unity::Mathematics::bool2 xx;

  __declspec(property(get = get_xxx))::Unity::Mathematics::bool3 xxx;

  __declspec(property(get = get_xxxx))::Unity::Mathematics::bool4 xxxx;

  __declspec(property(get = get_xxxy))::Unity::Mathematics::bool4 xxxy;

  __declspec(property(get = get_xxy))::Unity::Mathematics::bool3 xxy;

  __declspec(property(get = get_xxyx))::Unity::Mathematics::bool4 xxyx;

  __declspec(property(get = get_xxyy))::Unity::Mathematics::bool4 xxyy;

  __declspec(property(get = get_xy, put = set_xy))::Unity::Mathematics::bool2 xy;

  __declspec(property(get = get_xyx))::Unity::Mathematics::bool3 xyx;

  __declspec(property(get = get_xyxx))::Unity::Mathematics::bool4 xyxx;

  __declspec(property(get = get_xyxy))::Unity::Mathematics::bool4 xyxy;

  __declspec(property(get = get_xyy))::Unity::Mathematics::bool3 xyy;

  __declspec(property(get = get_xyyx))::Unity::Mathematics::bool4 xyyx;

  __declspec(property(get = get_xyyy))::Unity::Mathematics::bool4 xyyy;

  __declspec(property(get = get_yx, put = set_yx))::Unity::Mathematics::bool2 yx;

  __declspec(property(get = get_yxx))::Unity::Mathematics::bool3 yxx;

  __declspec(property(get = get_yxxx))::Unity::Mathematics::bool4 yxxx;

  __declspec(property(get = get_yxxy))::Unity::Mathematics::bool4 yxxy;

  __declspec(property(get = get_yxy))::Unity::Mathematics::bool3 yxy;

  __declspec(property(get = get_yxyx))::Unity::Mathematics::bool4 yxyx;

  __declspec(property(get = get_yxyy))::Unity::Mathematics::bool4 yxyy;

  __declspec(property(get = get_yy))::Unity::Mathematics::bool2 yy;

  __declspec(property(get = get_yyx))::Unity::Mathematics::bool3 yyx;

  __declspec(property(get = get_yyxx))::Unity::Mathematics::bool4 yyxx;

  __declspec(property(get = get_yyxy))::Unity::Mathematics::bool4 yyxy;

  __declspec(property(get = get_yyy))::Unity::Mathematics::bool3 yyy;

  __declspec(property(get = get_yyyx))::Unity::Mathematics::bool4 yyyx;

  __declspec(property(get = get_yyyy))::Unity::Mathematics::bool4 yyyy;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::bool2>*();

  /// @brief Method Equals, addr 0x31e76a4, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x31e7678, size 0x2c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::bool2 rhs);

  /// @brief Method GetHashCode, addr 0x31e7730, size 0x3c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x31e776c, size 0xa0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x31e71ec, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x31e71c4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(bool x, bool y);

  /// @brief Method .ctor, addr 0x31e71d8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2 xy);

  /// @brief Method get_Item, addr 0x31e765c, size 0x10, virtual false, abstract: false, final false
  inline bool get_Item(int32_t index);

  /// @brief Method get_xx, addr 0x31e75f4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_xx();

  /// @brief Method get_xxx, addr 0x31e753c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xxx();

  /// @brief Method get_xxxx, addr 0x31e7384, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x31e739c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxxy();

  /// @brief Method get_xxy, addr 0x31e7550, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xxy();

  /// @brief Method get_xxyx, addr 0x31e73b8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x31e73d4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxyy();

  /// @brief Method get_xy, addr 0x31e7600, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_xy();

  /// @brief Method get_xyx, addr 0x31e7568, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xyx();

  /// @brief Method get_xyxx, addr 0x31e73f0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x31e740c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyxy();

  /// @brief Method get_xyy, addr 0x31e7580, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xyy();

  /// @brief Method get_xyyx, addr 0x31e7428, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x31e7444, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyyy();

  /// @brief Method get_yx, addr 0x31e7628, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_yx();

  /// @brief Method get_yxx, addr 0x31e7598, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yxx();

  /// @brief Method get_yxxx, addr 0x31e7460, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x31e747c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxxy();

  /// @brief Method get_yxy, addr 0x31e75b0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yxy();

  /// @brief Method get_yxyx, addr 0x31e7498, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x31e74b4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxyy();

  /// @brief Method get_yy, addr 0x31e7650, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_yy();

  /// @brief Method get_yyx, addr 0x31e75c8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yyx();

  /// @brief Method get_yyxx, addr 0x31e74d0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x31e74ec, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyxy();

  /// @brief Method get_yyy, addr 0x31e75e0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yyy();

  /// @brief Method get_yyyx, addr 0x31e7508, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x31e7524, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyyy();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::bool2>* i___System__IEquatable_1___Unity__Mathematics__bool2_();

  /// @brief Method op_BitwiseAnd, addr 0x31e72b8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_BitwiseAnd(::Unity::Mathematics::bool2 lhs, ::Unity::Mathematics::bool2 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x31e72c8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_BitwiseAnd(::Unity::Mathematics::bool2 lhs, bool rhs);

  /// @brief Method op_BitwiseAnd, addr 0x31e72d8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_BitwiseAnd(bool lhs, ::Unity::Mathematics::bool2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x31e72e8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_BitwiseOr(::Unity::Mathematics::bool2 lhs, ::Unity::Mathematics::bool2 rhs);

  /// @brief Method op_BitwiseOr, addr 0x31e72f8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_BitwiseOr(::Unity::Mathematics::bool2 lhs, bool rhs);

  /// @brief Method op_BitwiseOr, addr 0x31e7310, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_BitwiseOr(bool lhs, ::Unity::Mathematics::bool2 rhs);

  /// @brief Method op_Equality, addr 0x31e7208, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::bool2 lhs, ::Unity::Mathematics::bool2 rhs);

  /// @brief Method op_Equality, addr 0x31e7218, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::bool2 lhs, bool rhs);

  /// @brief Method op_Equality, addr 0x31e723c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(bool lhs, ::Unity::Mathematics::bool2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x31e732c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_ExclusiveOr(::Unity::Mathematics::bool2 lhs, ::Unity::Mathematics::bool2 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x31e733c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_ExclusiveOr(::Unity::Mathematics::bool2 lhs, bool rhs);

  /// @brief Method op_ExclusiveOr, addr 0x31e7360, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_ExclusiveOr(bool lhs, ::Unity::Mathematics::bool2 rhs);

  /// @brief Method op_Implicit, addr 0x31e71fc, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Implicit___Unity__Mathematics__bool2(bool v);

  /// @brief Method op_Inequality, addr 0x31e7260, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::bool2 lhs, ::Unity::Mathematics::bool2 rhs);

  /// @brief Method op_Inequality, addr 0x31e7270, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::bool2 lhs, bool rhs);

  /// @brief Method op_Inequality, addr 0x31e728c, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(bool lhs, ::Unity::Mathematics::bool2 rhs);

  /// @brief Method op_LogicalNot, addr 0x31e72a8, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LogicalNot(::Unity::Mathematics::bool2 val);

  /// @brief Method set_Item, addr 0x31e766c, size 0xc, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, bool value);

  /// @brief Method set_xy, addr 0x31e7614, size 0x14, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::bool2 value);

  /// @brief Method set_yx, addr 0x31e763c, size 0x14, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::bool2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr bool2();

  // Ctor Parameters [CppParam { name: "x", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "y", ty: "bool", modifiers: "", def_value: None }]
  constexpr bool2(bool x, bool y) noexcept;

  /// @brief Field x, offset: 0x0, size: 0x1, def value: None
  bool x;

  /// @brief Field y, offset: 0x1, size: 0x1, def value: None
  bool y;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::bool2, 0x2>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool2, y) == 0x1, "Offset mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::__bool2__DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::__bool2__DebuggerProxy*, "Unity.Mathematics", "bool2/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::bool2, "Unity.Mathematics", "bool2");
