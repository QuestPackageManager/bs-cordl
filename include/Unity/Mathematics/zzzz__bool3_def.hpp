#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(bool3)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool2;
}
namespace Unity::Mathematics {
class bool3_DebuggerProxy;
}
namespace Unity::Mathematics {
struct bool4;
}
// Forward declare root types
namespace Unity::Mathematics {
class bool3_DebuggerProxy;
}
namespace Unity::Mathematics {
struct bool3;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::bool3_DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::bool3);
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.bool3/DebuggerProxy
class CORDL_TYPE bool3_DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) bool x;

  /// @brief Field y, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) bool y;

  /// @brief Field z, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) bool z;

  static inline ::Unity::Mathematics::bool3_DebuggerProxy* New_ctor(::Unity::Mathematics::bool3 v);

  constexpr bool const& __cordl_internal_get_x() const;

  constexpr bool& __cordl_internal_get_x();

  constexpr bool const& __cordl_internal_get_y() const;

  constexpr bool& __cordl_internal_get_y();

  constexpr bool const& __cordl_internal_get_z() const;

  constexpr bool& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_x(bool value);

  constexpr void __cordl_internal_set_y(bool value);

  constexpr void __cordl_internal_set_z(bool value);

  /// @brief Method .ctor, addr 0x644cdd0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr bool3_DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "bool3_DebuggerProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  bool3_DebuggerProxy(bool3_DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "bool3_DebuggerProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  bool3_DebuggerProxy(bool3_DebuggerProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13106 };

  /// @brief Field x, offset: 0x10, size: 0x1, def value: None
  bool ___x;

  /// @brief Field y, offset: 0x11, size: 0x1, def value: None
  bool ___y;

  /// @brief Field z, offset: 0x12, size: 0x1, def value: None
  bool ___z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::bool3_DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3_DebuggerProxy, ___y) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3_DebuggerProxy, ___z) == 0x12, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::bool3_DebuggerProxy, 0x18>, "Size mismatch!");

} // namespace Unity::Mathematics
// Dependencies
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.bool3
struct CORDL_TYPE bool3 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::bool3_DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) bool Item[];

  __declspec(property(get = get_xx)) ::Unity::Mathematics::bool2 xx;

  __declspec(property(get = get_xxx)) ::Unity::Mathematics::bool3 xxx;

  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::bool4 xxxx;

  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::bool4 xxxy;

  __declspec(property(get = get_xxxz)) ::Unity::Mathematics::bool4 xxxz;

  __declspec(property(get = get_xxy)) ::Unity::Mathematics::bool3 xxy;

  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::bool4 xxyx;

  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::bool4 xxyy;

  __declspec(property(get = get_xxyz)) ::Unity::Mathematics::bool4 xxyz;

  __declspec(property(get = get_xxz)) ::Unity::Mathematics::bool3 xxz;

  __declspec(property(get = get_xxzx)) ::Unity::Mathematics::bool4 xxzx;

  __declspec(property(get = get_xxzy)) ::Unity::Mathematics::bool4 xxzy;

  __declspec(property(get = get_xxzz)) ::Unity::Mathematics::bool4 xxzz;

  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::bool2 xy;

  __declspec(property(get = get_xyx)) ::Unity::Mathematics::bool3 xyx;

  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::bool4 xyxx;

  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::bool4 xyxy;

  __declspec(property(get = get_xyxz)) ::Unity::Mathematics::bool4 xyxz;

  __declspec(property(get = get_xyy)) ::Unity::Mathematics::bool3 xyy;

  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::bool4 xyyx;

  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::bool4 xyyy;

  __declspec(property(get = get_xyyz)) ::Unity::Mathematics::bool4 xyyz;

  __declspec(property(get = get_xyz, put = set_xyz)) ::Unity::Mathematics::bool3 xyz;

  __declspec(property(get = get_xyzx)) ::Unity::Mathematics::bool4 xyzx;

  __declspec(property(get = get_xyzy)) ::Unity::Mathematics::bool4 xyzy;

  __declspec(property(get = get_xyzz)) ::Unity::Mathematics::bool4 xyzz;

  __declspec(property(get = get_xz, put = set_xz)) ::Unity::Mathematics::bool2 xz;

  __declspec(property(get = get_xzx)) ::Unity::Mathematics::bool3 xzx;

  __declspec(property(get = get_xzxx)) ::Unity::Mathematics::bool4 xzxx;

  __declspec(property(get = get_xzxy)) ::Unity::Mathematics::bool4 xzxy;

  __declspec(property(get = get_xzxz)) ::Unity::Mathematics::bool4 xzxz;

  __declspec(property(get = get_xzy, put = set_xzy)) ::Unity::Mathematics::bool3 xzy;

  __declspec(property(get = get_xzyx)) ::Unity::Mathematics::bool4 xzyx;

  __declspec(property(get = get_xzyy)) ::Unity::Mathematics::bool4 xzyy;

  __declspec(property(get = get_xzyz)) ::Unity::Mathematics::bool4 xzyz;

  __declspec(property(get = get_xzz)) ::Unity::Mathematics::bool3 xzz;

  __declspec(property(get = get_xzzx)) ::Unity::Mathematics::bool4 xzzx;

  __declspec(property(get = get_xzzy)) ::Unity::Mathematics::bool4 xzzy;

  __declspec(property(get = get_xzzz)) ::Unity::Mathematics::bool4 xzzz;

  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::bool2 yx;

  __declspec(property(get = get_yxx)) ::Unity::Mathematics::bool3 yxx;

  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::bool4 yxxx;

  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::bool4 yxxy;

  __declspec(property(get = get_yxxz)) ::Unity::Mathematics::bool4 yxxz;

  __declspec(property(get = get_yxy)) ::Unity::Mathematics::bool3 yxy;

  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::bool4 yxyx;

  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::bool4 yxyy;

  __declspec(property(get = get_yxyz)) ::Unity::Mathematics::bool4 yxyz;

  __declspec(property(get = get_yxz, put = set_yxz)) ::Unity::Mathematics::bool3 yxz;

  __declspec(property(get = get_yxzx)) ::Unity::Mathematics::bool4 yxzx;

  __declspec(property(get = get_yxzy)) ::Unity::Mathematics::bool4 yxzy;

  __declspec(property(get = get_yxzz)) ::Unity::Mathematics::bool4 yxzz;

  __declspec(property(get = get_yy)) ::Unity::Mathematics::bool2 yy;

  __declspec(property(get = get_yyx)) ::Unity::Mathematics::bool3 yyx;

  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::bool4 yyxx;

  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::bool4 yyxy;

  __declspec(property(get = get_yyxz)) ::Unity::Mathematics::bool4 yyxz;

  __declspec(property(get = get_yyy)) ::Unity::Mathematics::bool3 yyy;

  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::bool4 yyyx;

  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::bool4 yyyy;

  __declspec(property(get = get_yyyz)) ::Unity::Mathematics::bool4 yyyz;

  __declspec(property(get = get_yyz)) ::Unity::Mathematics::bool3 yyz;

  __declspec(property(get = get_yyzx)) ::Unity::Mathematics::bool4 yyzx;

  __declspec(property(get = get_yyzy)) ::Unity::Mathematics::bool4 yyzy;

  __declspec(property(get = get_yyzz)) ::Unity::Mathematics::bool4 yyzz;

  __declspec(property(get = get_yz, put = set_yz)) ::Unity::Mathematics::bool2 yz;

  __declspec(property(get = get_yzx, put = set_yzx)) ::Unity::Mathematics::bool3 yzx;

  __declspec(property(get = get_yzxx)) ::Unity::Mathematics::bool4 yzxx;

  __declspec(property(get = get_yzxy)) ::Unity::Mathematics::bool4 yzxy;

  __declspec(property(get = get_yzxz)) ::Unity::Mathematics::bool4 yzxz;

  __declspec(property(get = get_yzy)) ::Unity::Mathematics::bool3 yzy;

  __declspec(property(get = get_yzyx)) ::Unity::Mathematics::bool4 yzyx;

  __declspec(property(get = get_yzyy)) ::Unity::Mathematics::bool4 yzyy;

  __declspec(property(get = get_yzyz)) ::Unity::Mathematics::bool4 yzyz;

  __declspec(property(get = get_yzz)) ::Unity::Mathematics::bool3 yzz;

  __declspec(property(get = get_yzzx)) ::Unity::Mathematics::bool4 yzzx;

  __declspec(property(get = get_yzzy)) ::Unity::Mathematics::bool4 yzzy;

  __declspec(property(get = get_yzzz)) ::Unity::Mathematics::bool4 yzzz;

  __declspec(property(get = get_zx, put = set_zx)) ::Unity::Mathematics::bool2 zx;

  __declspec(property(get = get_zxx)) ::Unity::Mathematics::bool3 zxx;

  __declspec(property(get = get_zxxx)) ::Unity::Mathematics::bool4 zxxx;

  __declspec(property(get = get_zxxy)) ::Unity::Mathematics::bool4 zxxy;

  __declspec(property(get = get_zxxz)) ::Unity::Mathematics::bool4 zxxz;

  __declspec(property(get = get_zxy, put = set_zxy)) ::Unity::Mathematics::bool3 zxy;

  __declspec(property(get = get_zxyx)) ::Unity::Mathematics::bool4 zxyx;

  __declspec(property(get = get_zxyy)) ::Unity::Mathematics::bool4 zxyy;

  __declspec(property(get = get_zxyz)) ::Unity::Mathematics::bool4 zxyz;

  __declspec(property(get = get_zxz)) ::Unity::Mathematics::bool3 zxz;

  __declspec(property(get = get_zxzx)) ::Unity::Mathematics::bool4 zxzx;

  __declspec(property(get = get_zxzy)) ::Unity::Mathematics::bool4 zxzy;

  __declspec(property(get = get_zxzz)) ::Unity::Mathematics::bool4 zxzz;

  __declspec(property(get = get_zy, put = set_zy)) ::Unity::Mathematics::bool2 zy;

  __declspec(property(get = get_zyx, put = set_zyx)) ::Unity::Mathematics::bool3 zyx;

  __declspec(property(get = get_zyxx)) ::Unity::Mathematics::bool4 zyxx;

  __declspec(property(get = get_zyxy)) ::Unity::Mathematics::bool4 zyxy;

  __declspec(property(get = get_zyxz)) ::Unity::Mathematics::bool4 zyxz;

  __declspec(property(get = get_zyy)) ::Unity::Mathematics::bool3 zyy;

  __declspec(property(get = get_zyyx)) ::Unity::Mathematics::bool4 zyyx;

  __declspec(property(get = get_zyyy)) ::Unity::Mathematics::bool4 zyyy;

  __declspec(property(get = get_zyyz)) ::Unity::Mathematics::bool4 zyyz;

  __declspec(property(get = get_zyz)) ::Unity::Mathematics::bool3 zyz;

  __declspec(property(get = get_zyzx)) ::Unity::Mathematics::bool4 zyzx;

  __declspec(property(get = get_zyzy)) ::Unity::Mathematics::bool4 zyzy;

  __declspec(property(get = get_zyzz)) ::Unity::Mathematics::bool4 zyzz;

  __declspec(property(get = get_zz)) ::Unity::Mathematics::bool2 zz;

  __declspec(property(get = get_zzx)) ::Unity::Mathematics::bool3 zzx;

  __declspec(property(get = get_zzxx)) ::Unity::Mathematics::bool4 zzxx;

  __declspec(property(get = get_zzxy)) ::Unity::Mathematics::bool4 zzxy;

  __declspec(property(get = get_zzxz)) ::Unity::Mathematics::bool4 zzxz;

  __declspec(property(get = get_zzy)) ::Unity::Mathematics::bool3 zzy;

  __declspec(property(get = get_zzyx)) ::Unity::Mathematics::bool4 zzyx;

  __declspec(property(get = get_zzyy)) ::Unity::Mathematics::bool4 zzyy;

  __declspec(property(get = get_zzyz)) ::Unity::Mathematics::bool4 zzyz;

  __declspec(property(get = get_zzz)) ::Unity::Mathematics::bool3 zzz;

  __declspec(property(get = get_zzzx)) ::Unity::Mathematics::bool4 zzzx;

  __declspec(property(get = get_zzzy)) ::Unity::Mathematics::bool4 zzzy;

  __declspec(property(get = get_zzzz)) ::Unity::Mathematics::bool4 zzzz;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::bool3>*();

  /// @brief Method Equals, addr 0x644cbf0, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x644cbb4, size 0x3c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::bool3 rhs);

  /// @brief Method GetHashCode, addr 0x644cc98, size 0x60, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x644ccf8, size 0xd8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x644bc28, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x644bbcc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool x, bool y, bool z);

  /// @brief Method .ctor, addr 0x644bbdc, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool x, ::Unity::Mathematics::bool2 yz);

  /// @brief Method .ctor, addr 0x644bbf4, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2 xy, bool z);

  /// @brief Method .ctor, addr 0x644bc0c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3 xyz);

  /// @brief Method get_Item, addr 0x644cb9c, size 0x10, virtual false, abstract: false, final false
  inline bool get_Item(int32_t index);

  /// @brief Method get_xx, addr 0x644cab0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_xx();

  /// @brief Method get_xxx, addr 0x644c7bc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xxx();

  /// @brief Method get_xxxx, addr 0x644bed4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x644beec, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxxy();

  /// @brief Method get_xxxz, addr 0x644bf08, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxxz();

  /// @brief Method get_xxy, addr 0x644c7d0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xxy();

  /// @brief Method get_xxyx, addr 0x644bf24, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x644bf40, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxyy();

  /// @brief Method get_xxyz, addr 0x644bf5c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxyz();

  /// @brief Method get_xxz, addr 0x644c7e8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xxz();

  /// @brief Method get_xxzx, addr 0x644bf7c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxzx();

  /// @brief Method get_xxzy, addr 0x644bf98, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxzy();

  /// @brief Method get_xxzz, addr 0x644bfb8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxzz();

  /// @brief Method get_xy, addr 0x644cabc, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_xy();

  /// @brief Method get_xyx, addr 0x644c800, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xyx();

  /// @brief Method get_xyxx, addr 0x644bfd4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x644bff0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyxy();

  /// @brief Method get_xyxz, addr 0x644c00c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyxz();

  /// @brief Method get_xyy, addr 0x644c818, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xyy();

  /// @brief Method get_xyyx, addr 0x644c02c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x644c048, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyyy();

  /// @brief Method get_xyyz, addr 0x644c060, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyyz();

  /// @brief Method get_xyz, addr 0x644c82c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xyz();

  /// @brief Method get_xyzx, addr 0x644c07c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyzx();

  /// @brief Method get_xyzy, addr 0x644c09c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyzy();

  /// @brief Method get_xyzz, addr 0x644c0b8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyzz();

  /// @brief Method get_xz, addr 0x644cad8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_xz();

  /// @brief Method get_xzx, addr 0x644c858, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xzx();

  /// @brief Method get_xzxx, addr 0x644c0cc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzxx();

  /// @brief Method get_xzxy, addr 0x644c0e8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzxy();

  /// @brief Method get_xzxz, addr 0x644c108, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzxz();

  /// @brief Method get_xzy, addr 0x644c870, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xzy();

  /// @brief Method get_xzyx, addr 0x644c124, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzyx();

  /// @brief Method get_xzyy, addr 0x644c144, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzyy();

  /// @brief Method get_xzyz, addr 0x644c160, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzyz();

  /// @brief Method get_xzz, addr 0x644c8a4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xzz();

  /// @brief Method get_xzzx, addr 0x644c17c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzzx();

  /// @brief Method get_xzzy, addr 0x644c198, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzzy();

  /// @brief Method get_xzzz, addr 0x644c1b4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzzz();

  /// @brief Method get_yx, addr 0x644cafc, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_yx();

  /// @brief Method get_yxx, addr 0x644c8b8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yxx();

  /// @brief Method get_yxxx, addr 0x644c1cc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x644c1e4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxxy();

  /// @brief Method get_yxxz, addr 0x644c200, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxxz();

  /// @brief Method get_yxy, addr 0x644c8cc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yxy();

  /// @brief Method get_yxyx, addr 0x644c21c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x644c238, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxyy();

  /// @brief Method get_yxyz, addr 0x644c254, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxyz();

  /// @brief Method get_yxz, addr 0x644c8e4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yxz();

  /// @brief Method get_yxzx, addr 0x644c274, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxzx();

  /// @brief Method get_yxzy, addr 0x644c290, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxzy();

  /// @brief Method get_yxzz, addr 0x644c2b0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxzz();

  /// @brief Method get_yy, addr 0x644cb20, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_yy();

  /// @brief Method get_yyx, addr 0x644c914, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yyx();

  /// @brief Method get_yyxx, addr 0x644c2c8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x644c2e4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyxy();

  /// @brief Method get_yyxz, addr 0x644c300, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyxz();

  /// @brief Method get_yyy, addr 0x644c92c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yyy();

  /// @brief Method get_yyyx, addr 0x644c320, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x644c33c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyyy();

  /// @brief Method get_yyyz, addr 0x644c354, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyyz();

  /// @brief Method get_yyz, addr 0x644c940, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yyz();

  /// @brief Method get_yyzx, addr 0x644c370, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyzx();

  /// @brief Method get_yyzy, addr 0x644c390, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyzy();

  /// @brief Method get_yyzz, addr 0x644c3ac, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyzz();

  /// @brief Method get_yz, addr 0x644cb2c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_yz();

  /// @brief Method get_yzx, addr 0x644c958, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yzx();

  /// @brief Method get_yzxx, addr 0x644c3c8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzxx();

  /// @brief Method get_yzxy, addr 0x644c3dc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzxy();

  /// @brief Method get_yzxz, addr 0x644c3fc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzxz();

  /// @brief Method get_yzy, addr 0x644c984, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yzy();

  /// @brief Method get_yzyx, addr 0x644c418, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzyx();

  /// @brief Method get_yzyy, addr 0x644c438, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzyy();

  /// @brief Method get_yzyz, addr 0x644c454, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzyz();

  /// @brief Method get_yzz, addr 0x644c99c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yzz();

  /// @brief Method get_yzzx, addr 0x644c470, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzzx();

  /// @brief Method get_yzzy, addr 0x644c48c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzzy();

  /// @brief Method get_yzzz, addr 0x644c4a8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzzz();

  /// @brief Method get_zx, addr 0x644cb48, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_zx();

  /// @brief Method get_zxx, addr 0x644c9b0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zxx();

  /// @brief Method get_zxxx, addr 0x644c4c0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxxx();

  /// @brief Method get_zxxy, addr 0x644c4d8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxxy();

  /// @brief Method get_zxxz, addr 0x644c4f4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxxz();

  /// @brief Method get_zxy, addr 0x644c9c4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zxy();

  /// @brief Method get_zxyx, addr 0x644c510, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxyx();

  /// @brief Method get_zxyy, addr 0x644c52c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxyy();

  /// @brief Method get_zxyz, addr 0x644c548, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxyz();

  /// @brief Method get_zxz, addr 0x644c9f8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zxz();

  /// @brief Method get_zxzx, addr 0x644c568, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxzx();

  /// @brief Method get_zxzy, addr 0x644c584, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxzy();

  /// @brief Method get_zxzz, addr 0x644c5a4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxzz();

  /// @brief Method get_zy, addr 0x644cb6c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_zy();

  /// @brief Method get_zyx, addr 0x644ca10, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zyx();

  /// @brief Method get_zyxx, addr 0x644c5c0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyxx();

  /// @brief Method get_zyxy, addr 0x644c5d8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyxy();

  /// @brief Method get_zyxz, addr 0x644c5f4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyxz();

  /// @brief Method get_zyy, addr 0x644ca40, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zyy();

  /// @brief Method get_zyyx, addr 0x644c614, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyyx();

  /// @brief Method get_zyyy, addr 0x644c630, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyyy();

  /// @brief Method get_zyyz, addr 0x644c648, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyyz();

  /// @brief Method get_zyz, addr 0x644ca54, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zyz();

  /// @brief Method get_zyzx, addr 0x644c664, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyzx();

  /// @brief Method get_zyzy, addr 0x644c684, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyzy();

  /// @brief Method get_zyzz, addr 0x644c6a0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyzz();

  /// @brief Method get_zz, addr 0x644cb90, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_zz();

  /// @brief Method get_zzx, addr 0x644ca6c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zzx();

  /// @brief Method get_zzxx, addr 0x644c6bc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzxx();

  /// @brief Method get_zzxy, addr 0x644c6d8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzxy();

  /// @brief Method get_zzxz, addr 0x644c6f8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzxz();

  /// @brief Method get_zzy, addr 0x644ca84, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zzy();

  /// @brief Method get_zzyx, addr 0x644c714, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzyx();

  /// @brief Method get_zzyy, addr 0x644c734, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzyy();

  /// @brief Method get_zzyz, addr 0x644c750, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzyz();

  /// @brief Method get_zzz, addr 0x644ca9c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zzz();

  /// @brief Method get_zzzx, addr 0x644c76c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzzx();

  /// @brief Method get_zzzy, addr 0x644c788, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzzy();

  /// @brief Method get_zzzz, addr 0x644c7a4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzzz();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::bool3>* i___System__IEquatable_1___Unity__Mathematics__bool3_();

  /// @brief Method op_BitwiseAnd, addr 0x644bda0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_BitwiseAnd(::Unity::Mathematics::bool3 lhs, ::Unity::Mathematics::bool3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x644bdb4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_BitwiseAnd(::Unity::Mathematics::bool3 lhs, bool rhs);

  /// @brief Method op_BitwiseAnd, addr 0x644bdd4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_BitwiseAnd(bool lhs, ::Unity::Mathematics::bool3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x644bdf4, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_BitwiseOr(::Unity::Mathematics::bool3 lhs, ::Unity::Mathematics::bool3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x644be08, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_BitwiseOr(::Unity::Mathematics::bool3 lhs, bool rhs);

  /// @brief Method op_BitwiseOr, addr 0x644be2c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_BitwiseOr(bool lhs, ::Unity::Mathematics::bool3 rhs);

  /// @brief Method op_Equality, addr 0x644bc50, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::bool3 lhs, ::Unity::Mathematics::bool3 rhs);

  /// @brief Method op_Equality, addr 0x644bc70, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::bool3 lhs, bool rhs);

  /// @brief Method op_Equality, addr 0x644bcb8, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(bool lhs, ::Unity::Mathematics::bool3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x644be50, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_ExclusiveOr(::Unity::Mathematics::bool3 lhs, ::Unity::Mathematics::bool3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x644be64, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_ExclusiveOr(::Unity::Mathematics::bool3 lhs, bool rhs);

  /// @brief Method op_ExclusiveOr, addr 0x644be9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_ExclusiveOr(bool lhs, ::Unity::Mathematics::bool3 rhs);

  /// @brief Method op_Implicit, addr 0x644bc38, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Implicit___Unity__Mathematics__bool3(bool v);

  /// @brief Method op_Inequality, addr 0x644bd00, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::bool3 lhs, ::Unity::Mathematics::bool3 rhs);

  /// @brief Method op_Inequality, addr 0x644bd14, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::bool3 lhs, bool rhs);

  /// @brief Method op_Inequality, addr 0x644bd4c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(bool lhs, ::Unity::Mathematics::bool3 rhs);

  /// @brief Method op_LogicalNot, addr 0x644bd84, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LogicalNot(::Unity::Mathematics::bool3 val);

  /// @brief Method set_Item, addr 0x644cbac, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, bool value);

  /// @brief Method set_xy, addr 0x644cac4, size 0x14, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::bool2 value);

  /// @brief Method set_xyz, addr 0x644c83c, size 0x1c, virtual false, abstract: false, final false
  inline void set_xyz(::Unity::Mathematics::bool3 value);

  /// @brief Method set_xz, addr 0x644cae8, size 0x14, virtual false, abstract: false, final false
  inline void set_xz(::Unity::Mathematics::bool2 value);

  /// @brief Method set_xzy, addr 0x644c888, size 0x1c, virtual false, abstract: false, final false
  inline void set_xzy(::Unity::Mathematics::bool3 value);

  /// @brief Method set_yx, addr 0x644cb0c, size 0x14, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::bool2 value);

  /// @brief Method set_yxz, addr 0x644c8f8, size 0x1c, virtual false, abstract: false, final false
  inline void set_yxz(::Unity::Mathematics::bool3 value);

  /// @brief Method set_yz, addr 0x644cb34, size 0x14, virtual false, abstract: false, final false
  inline void set_yz(::Unity::Mathematics::bool2 value);

  /// @brief Method set_yzx, addr 0x644c968, size 0x1c, virtual false, abstract: false, final false
  inline void set_yzx(::Unity::Mathematics::bool3 value);

  /// @brief Method set_zx, addr 0x644cb58, size 0x14, virtual false, abstract: false, final false
  inline void set_zx(::Unity::Mathematics::bool2 value);

  /// @brief Method set_zxy, addr 0x644c9dc, size 0x1c, virtual false, abstract: false, final false
  inline void set_zxy(::Unity::Mathematics::bool3 value);

  /// @brief Method set_zy, addr 0x644cb7c, size 0x14, virtual false, abstract: false, final false
  inline void set_zy(::Unity::Mathematics::bool2 value);

  /// @brief Method set_zyx, addr 0x644ca24, size 0x1c, virtual false, abstract: false, final false
  inline void set_zyx(::Unity::Mathematics::bool3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr bool3();

  // Ctor Parameters [CppParam { name: "x", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "y", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "z", ty: "bool",
  // modifiers: "", def_value: None }]
  constexpr bool3(bool x, bool y, bool z) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13107 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x3 };

  /// @brief Field x, offset: 0x0, size: 0x1, def value: None
  bool x;

  /// @brief Field y, offset: 0x1, size: 0x1, def value: None
  bool y;

  /// @brief Field z, offset: 0x2, size: 0x1, def value: None
  bool z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::bool3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3, y) == 0x1, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::bool3, z) == 0x2, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::bool3, 0x3>, "Size mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::bool3_DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::bool3_DebuggerProxy*, "Unity.Mathematics", "bool3/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::bool3, "Unity.Mathematics", "bool3");
