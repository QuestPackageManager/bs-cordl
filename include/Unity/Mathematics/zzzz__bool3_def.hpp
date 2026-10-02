#pragma once
// IWYU pragma private; include "Unity/Mathematics/bool3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::Unity::Mathematics::bool3_DebuggerProxy*);
MARK_VAL_T(::Unity::Mathematics::bool3);
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::bool3_DebuggerProxy*, "Unity.Mathematics", "bool3/DebuggerProxy");
DEFINE_IL2CPP_CLASS(::Unity::Mathematics::bool3, "Unity.Mathematics", "bool3");
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

  /// @brief Method .ctor, addr 0x6a530f0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr bool3_DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "bool3_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  bool3_DebuggerProxy(bool3_DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "bool3_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  bool3_DebuggerProxy(bool3_DebuggerProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13375 };

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

static_assert(sizeof(::Unity::Mathematics::bool3_DebuggerProxy) == 0x18, "Size mismatch!");

} // namespace Unity::Mathematics
// [DefaultMember("Item")]
// [DebuggerTypeProxy(typeof(Unity.Mathematics.bool3::DebuggerProxy))]
// [Il2CppEagerStaticClassConstruction]
// Dependencies
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.bool3
struct CORDL_TYPE bool3 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::bool3_DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) bool Item[];

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xx)) ::Unity::Mathematics::bool2 xx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxx)) ::Unity::Mathematics::bool3 xxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::bool4 xxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::bool4 xxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxxz)) ::Unity::Mathematics::bool4 xxxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxy)) ::Unity::Mathematics::bool3 xxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::bool4 xxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::bool4 xxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxyz)) ::Unity::Mathematics::bool4 xxyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxz)) ::Unity::Mathematics::bool3 xxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxzx)) ::Unity::Mathematics::bool4 xxzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxzy)) ::Unity::Mathematics::bool4 xxzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xxzz)) ::Unity::Mathematics::bool4 xxzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::bool2 xy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyx)) ::Unity::Mathematics::bool3 xyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::bool4 xyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::bool4 xyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyxz)) ::Unity::Mathematics::bool4 xyxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyy)) ::Unity::Mathematics::bool3 xyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::bool4 xyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::bool4 xyyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyyz)) ::Unity::Mathematics::bool4 xyyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyz, put = set_xyz)) ::Unity::Mathematics::bool3 xyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyzx)) ::Unity::Mathematics::bool4 xyzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyzy)) ::Unity::Mathematics::bool4 xyzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xyzz)) ::Unity::Mathematics::bool4 xyzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xz, put = set_xz)) ::Unity::Mathematics::bool2 xz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzx)) ::Unity::Mathematics::bool3 xzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzxx)) ::Unity::Mathematics::bool4 xzxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzxy)) ::Unity::Mathematics::bool4 xzxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzxz)) ::Unity::Mathematics::bool4 xzxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzy, put = set_xzy)) ::Unity::Mathematics::bool3 xzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzyx)) ::Unity::Mathematics::bool4 xzyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzyy)) ::Unity::Mathematics::bool4 xzyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzyz)) ::Unity::Mathematics::bool4 xzyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzz)) ::Unity::Mathematics::bool3 xzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzzx)) ::Unity::Mathematics::bool4 xzzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzzy)) ::Unity::Mathematics::bool4 xzzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_xzzz)) ::Unity::Mathematics::bool4 xzzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::bool2 yx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxx)) ::Unity::Mathematics::bool3 yxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::bool4 yxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::bool4 yxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxxz)) ::Unity::Mathematics::bool4 yxxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxy)) ::Unity::Mathematics::bool3 yxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::bool4 yxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::bool4 yxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxyz)) ::Unity::Mathematics::bool4 yxyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxz, put = set_yxz)) ::Unity::Mathematics::bool3 yxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxzx)) ::Unity::Mathematics::bool4 yxzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxzy)) ::Unity::Mathematics::bool4 yxzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yxzz)) ::Unity::Mathematics::bool4 yxzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yy)) ::Unity::Mathematics::bool2 yy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyx)) ::Unity::Mathematics::bool3 yyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::bool4 yyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::bool4 yyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyxz)) ::Unity::Mathematics::bool4 yyxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyy)) ::Unity::Mathematics::bool3 yyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::bool4 yyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::bool4 yyyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyyz)) ::Unity::Mathematics::bool4 yyyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyz)) ::Unity::Mathematics::bool3 yyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyzx)) ::Unity::Mathematics::bool4 yyzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyzy)) ::Unity::Mathematics::bool4 yyzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yyzz)) ::Unity::Mathematics::bool4 yyzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yz, put = set_yz)) ::Unity::Mathematics::bool2 yz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzx, put = set_yzx)) ::Unity::Mathematics::bool3 yzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzxx)) ::Unity::Mathematics::bool4 yzxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzxy)) ::Unity::Mathematics::bool4 yzxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzxz)) ::Unity::Mathematics::bool4 yzxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzy)) ::Unity::Mathematics::bool3 yzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzyx)) ::Unity::Mathematics::bool4 yzyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzyy)) ::Unity::Mathematics::bool4 yzyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzyz)) ::Unity::Mathematics::bool4 yzyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzz)) ::Unity::Mathematics::bool3 yzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzzx)) ::Unity::Mathematics::bool4 yzzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzzy)) ::Unity::Mathematics::bool4 yzzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_yzzz)) ::Unity::Mathematics::bool4 yzzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zx, put = set_zx)) ::Unity::Mathematics::bool2 zx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxx)) ::Unity::Mathematics::bool3 zxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxxx)) ::Unity::Mathematics::bool4 zxxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxxy)) ::Unity::Mathematics::bool4 zxxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxxz)) ::Unity::Mathematics::bool4 zxxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxy, put = set_zxy)) ::Unity::Mathematics::bool3 zxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxyx)) ::Unity::Mathematics::bool4 zxyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxyy)) ::Unity::Mathematics::bool4 zxyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxyz)) ::Unity::Mathematics::bool4 zxyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxz)) ::Unity::Mathematics::bool3 zxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxzx)) ::Unity::Mathematics::bool4 zxzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxzy)) ::Unity::Mathematics::bool4 zxzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zxzz)) ::Unity::Mathematics::bool4 zxzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zy, put = set_zy)) ::Unity::Mathematics::bool2 zy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyx, put = set_zyx)) ::Unity::Mathematics::bool3 zyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyxx)) ::Unity::Mathematics::bool4 zyxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyxy)) ::Unity::Mathematics::bool4 zyxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyxz)) ::Unity::Mathematics::bool4 zyxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyy)) ::Unity::Mathematics::bool3 zyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyyx)) ::Unity::Mathematics::bool4 zyyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyyy)) ::Unity::Mathematics::bool4 zyyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyyz)) ::Unity::Mathematics::bool4 zyyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyz)) ::Unity::Mathematics::bool3 zyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyzx)) ::Unity::Mathematics::bool4 zyzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyzy)) ::Unity::Mathematics::bool4 zyzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zyzz)) ::Unity::Mathematics::bool4 zyzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zz)) ::Unity::Mathematics::bool2 zz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzx)) ::Unity::Mathematics::bool3 zzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzxx)) ::Unity::Mathematics::bool4 zzxx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzxy)) ::Unity::Mathematics::bool4 zzxy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzxz)) ::Unity::Mathematics::bool4 zzxz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzy)) ::Unity::Mathematics::bool3 zzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzyx)) ::Unity::Mathematics::bool4 zzyx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzyy)) ::Unity::Mathematics::bool4 zzyy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzyz)) ::Unity::Mathematics::bool4 zzyz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzz)) ::Unity::Mathematics::bool3 zzz;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzzx)) ::Unity::Mathematics::bool4 zzzx;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzzy)) ::Unity::Mathematics::bool4 zzzy;

  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_zzzz)) ::Unity::Mathematics::bool4 zzzz;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::bool3>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::bool3>*();

  /// @brief Method Equals, addr 0x6a52f10, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x6a52ed4, size 0x3c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::bool3 rhs);

  /// @brief Method GetHashCode, addr 0x6a52fb8, size 0x60, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6a53018, size 0xd8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6a51f48, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x6a51eec, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool x, bool y, bool z);

  /// @brief Method .ctor, addr 0x6a51efc, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool x, ::Unity::Mathematics::bool2 yz);

  /// @brief Method .ctor, addr 0x6a51f14, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2 xy, bool z);

  /// @brief Method .ctor, addr 0x6a51f2c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3 xyz);

  /// @brief Method get_Item, addr 0x6a52ebc, size 0x10, virtual false, abstract: false, final false
  inline bool get_Item(int32_t index);

  /// @brief Method get_xx, addr 0x6a52dd0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_xx();

  /// @brief Method get_xxx, addr 0x6a52adc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xxx();

  /// @brief Method get_xxxx, addr 0x6a521f4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x6a5220c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxxy();

  /// @brief Method get_xxxz, addr 0x6a52228, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxxz();

  /// @brief Method get_xxy, addr 0x6a52af0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xxy();

  /// @brief Method get_xxyx, addr 0x6a52244, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x6a52260, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxyy();

  /// @brief Method get_xxyz, addr 0x6a5227c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxyz();

  /// @brief Method get_xxz, addr 0x6a52b08, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xxz();

  /// @brief Method get_xxzx, addr 0x6a5229c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxzx();

  /// @brief Method get_xxzy, addr 0x6a522b8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxzy();

  /// @brief Method get_xxzz, addr 0x6a522d8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xxzz();

  /// @brief Method get_xy, addr 0x6a52ddc, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_xy();

  /// @brief Method get_xyx, addr 0x6a52b20, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xyx();

  /// @brief Method get_xyxx, addr 0x6a522f4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x6a52310, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyxy();

  /// @brief Method get_xyxz, addr 0x6a5232c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyxz();

  /// @brief Method get_xyy, addr 0x6a52b38, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xyy();

  /// @brief Method get_xyyx, addr 0x6a5234c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x6a52368, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyyy();

  /// @brief Method get_xyyz, addr 0x6a52380, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyyz();

  /// @brief Method get_xyz, addr 0x6a52b4c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xyz();

  /// @brief Method get_xyzx, addr 0x6a5239c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyzx();

  /// @brief Method get_xyzy, addr 0x6a523bc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyzy();

  /// @brief Method get_xyzz, addr 0x6a523d8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xyzz();

  /// @brief Method get_xz, addr 0x6a52df8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_xz();

  /// @brief Method get_xzx, addr 0x6a52b78, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xzx();

  /// @brief Method get_xzxx, addr 0x6a523ec, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzxx();

  /// @brief Method get_xzxy, addr 0x6a52408, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzxy();

  /// @brief Method get_xzxz, addr 0x6a52428, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzxz();

  /// @brief Method get_xzy, addr 0x6a52b90, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xzy();

  /// @brief Method get_xzyx, addr 0x6a52444, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzyx();

  /// @brief Method get_xzyy, addr 0x6a52464, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzyy();

  /// @brief Method get_xzyz, addr 0x6a52480, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzyz();

  /// @brief Method get_xzz, addr 0x6a52bc4, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_xzz();

  /// @brief Method get_xzzx, addr 0x6a5249c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzzx();

  /// @brief Method get_xzzy, addr 0x6a524b8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzzy();

  /// @brief Method get_xzzz, addr 0x6a524d4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_xzzz();

  /// @brief Method get_yx, addr 0x6a52e1c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_yx();

  /// @brief Method get_yxx, addr 0x6a52bd8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yxx();

  /// @brief Method get_yxxx, addr 0x6a524ec, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x6a52504, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxxy();

  /// @brief Method get_yxxz, addr 0x6a52520, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxxz();

  /// @brief Method get_yxy, addr 0x6a52bec, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yxy();

  /// @brief Method get_yxyx, addr 0x6a5253c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x6a52558, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxyy();

  /// @brief Method get_yxyz, addr 0x6a52574, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxyz();

  /// @brief Method get_yxz, addr 0x6a52c04, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yxz();

  /// @brief Method get_yxzx, addr 0x6a52594, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxzx();

  /// @brief Method get_yxzy, addr 0x6a525b0, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxzy();

  /// @brief Method get_yxzz, addr 0x6a525d0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yxzz();

  /// @brief Method get_yy, addr 0x6a52e40, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_yy();

  /// @brief Method get_yyx, addr 0x6a52c34, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yyx();

  /// @brief Method get_yyxx, addr 0x6a525e8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x6a52604, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyxy();

  /// @brief Method get_yyxz, addr 0x6a52620, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyxz();

  /// @brief Method get_yyy, addr 0x6a52c4c, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yyy();

  /// @brief Method get_yyyx, addr 0x6a52640, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x6a5265c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyyy();

  /// @brief Method get_yyyz, addr 0x6a52674, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyyz();

  /// @brief Method get_yyz, addr 0x6a52c60, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yyz();

  /// @brief Method get_yyzx, addr 0x6a52690, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyzx();

  /// @brief Method get_yyzy, addr 0x6a526b0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyzy();

  /// @brief Method get_yyzz, addr 0x6a526cc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yyzz();

  /// @brief Method get_yz, addr 0x6a52e4c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_yz();

  /// @brief Method get_yzx, addr 0x6a52c78, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yzx();

  /// @brief Method get_yzxx, addr 0x6a526e8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzxx();

  /// @brief Method get_yzxy, addr 0x6a526fc, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzxy();

  /// @brief Method get_yzxz, addr 0x6a5271c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzxz();

  /// @brief Method get_yzy, addr 0x6a52ca4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yzy();

  /// @brief Method get_yzyx, addr 0x6a52738, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzyx();

  /// @brief Method get_yzyy, addr 0x6a52758, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzyy();

  /// @brief Method get_yzyz, addr 0x6a52774, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzyz();

  /// @brief Method get_yzz, addr 0x6a52cbc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_yzz();

  /// @brief Method get_yzzx, addr 0x6a52790, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzzx();

  /// @brief Method get_yzzy, addr 0x6a527ac, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzzy();

  /// @brief Method get_yzzz, addr 0x6a527c8, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_yzzz();

  /// @brief Method get_zx, addr 0x6a52e68, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_zx();

  /// @brief Method get_zxx, addr 0x6a52cd0, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zxx();

  /// @brief Method get_zxxx, addr 0x6a527e0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxxx();

  /// @brief Method get_zxxy, addr 0x6a527f8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxxy();

  /// @brief Method get_zxxz, addr 0x6a52814, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxxz();

  /// @brief Method get_zxy, addr 0x6a52ce4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zxy();

  /// @brief Method get_zxyx, addr 0x6a52830, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxyx();

  /// @brief Method get_zxyy, addr 0x6a5284c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxyy();

  /// @brief Method get_zxyz, addr 0x6a52868, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxyz();

  /// @brief Method get_zxz, addr 0x6a52d18, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zxz();

  /// @brief Method get_zxzx, addr 0x6a52888, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxzx();

  /// @brief Method get_zxzy, addr 0x6a528a4, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxzy();

  /// @brief Method get_zxzz, addr 0x6a528c4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zxzz();

  /// @brief Method get_zy, addr 0x6a52e8c, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_zy();

  /// @brief Method get_zyx, addr 0x6a52d30, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zyx();

  /// @brief Method get_zyxx, addr 0x6a528e0, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyxx();

  /// @brief Method get_zyxy, addr 0x6a528f8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyxy();

  /// @brief Method get_zyxz, addr 0x6a52914, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyxz();

  /// @brief Method get_zyy, addr 0x6a52d60, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zyy();

  /// @brief Method get_zyyx, addr 0x6a52934, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyyx();

  /// @brief Method get_zyyy, addr 0x6a52950, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyyy();

  /// @brief Method get_zyyz, addr 0x6a52968, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyyz();

  /// @brief Method get_zyz, addr 0x6a52d74, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zyz();

  /// @brief Method get_zyzx, addr 0x6a52984, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyzx();

  /// @brief Method get_zyzy, addr 0x6a529a4, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyzy();

  /// @brief Method get_zyzz, addr 0x6a529c0, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zyzz();

  /// @brief Method get_zz, addr 0x6a52eb0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool2 get_zz();

  /// @brief Method get_zzx, addr 0x6a52d8c, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zzx();

  /// @brief Method get_zzxx, addr 0x6a529dc, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzxx();

  /// @brief Method get_zzxy, addr 0x6a529f8, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzxy();

  /// @brief Method get_zzxz, addr 0x6a52a18, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzxz();

  /// @brief Method get_zzy, addr 0x6a52da4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zzy();

  /// @brief Method get_zzyx, addr 0x6a52a34, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzyx();

  /// @brief Method get_zzyy, addr 0x6a52a54, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzyy();

  /// @brief Method get_zzyz, addr 0x6a52a70, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzyz();

  /// @brief Method get_zzz, addr 0x6a52dbc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool3 get_zzz();

  /// @brief Method get_zzzx, addr 0x6a52a8c, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzzx();

  /// @brief Method get_zzzy, addr 0x6a52aa8, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzzy();

  /// @brief Method get_zzzz, addr 0x6a52ac4, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::bool4 get_zzzz();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::bool3>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::bool3>* i___System__IEquatable_1___Unity__Mathematics__bool3_();

  /// @brief Method op_BitwiseAnd, addr 0x6a520c0, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_BitwiseAnd(::Unity::Mathematics::bool3 lhs, ::Unity::Mathematics::bool3 rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6a520d4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_BitwiseAnd(::Unity::Mathematics::bool3 lhs, bool rhs);

  /// @brief Method op_BitwiseAnd, addr 0x6a520f4, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_BitwiseAnd(bool lhs, ::Unity::Mathematics::bool3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6a52114, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_BitwiseOr(::Unity::Mathematics::bool3 lhs, ::Unity::Mathematics::bool3 rhs);

  /// @brief Method op_BitwiseOr, addr 0x6a52128, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_BitwiseOr(::Unity::Mathematics::bool3 lhs, bool rhs);

  /// @brief Method op_BitwiseOr, addr 0x6a5214c, size 0x24, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_BitwiseOr(bool lhs, ::Unity::Mathematics::bool3 rhs);

  /// @brief Method op_Equality, addr 0x6a51f70, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::bool3 lhs, ::Unity::Mathematics::bool3 rhs);

  /// @brief Method op_Equality, addr 0x6a51f90, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(::Unity::Mathematics::bool3 lhs, bool rhs);

  /// @brief Method op_Equality, addr 0x6a51fd8, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Equality(bool lhs, ::Unity::Mathematics::bool3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6a52170, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_ExclusiveOr(::Unity::Mathematics::bool3 lhs, ::Unity::Mathematics::bool3 rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6a52184, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_ExclusiveOr(::Unity::Mathematics::bool3 lhs, bool rhs);

  /// @brief Method op_ExclusiveOr, addr 0x6a521bc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_ExclusiveOr(bool lhs, ::Unity::Mathematics::bool3 rhs);

  /// @brief Method op_Implicit, addr 0x6a51f58, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Implicit___Unity__Mathematics__bool3(bool v);

  /// @brief Method op_Inequality, addr 0x6a52020, size 0x14, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::bool3 lhs, ::Unity::Mathematics::bool3 rhs);

  /// @brief Method op_Inequality, addr 0x6a52034, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(::Unity::Mathematics::bool3 lhs, bool rhs);

  /// @brief Method op_Inequality, addr 0x6a5206c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_Inequality(bool lhs, ::Unity::Mathematics::bool3 rhs);

  /// @brief Method op_LogicalNot, addr 0x6a520a4, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3 op_LogicalNot(::Unity::Mathematics::bool3 val);

  /// @brief Method set_Item, addr 0x6a52ecc, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, bool value);

  /// @brief Method set_xy, addr 0x6a52de4, size 0x14, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::bool2 value);

  /// @brief Method set_xyz, addr 0x6a52b5c, size 0x1c, virtual false, abstract: false, final false
  inline void set_xyz(::Unity::Mathematics::bool3 value);

  /// @brief Method set_xz, addr 0x6a52e08, size 0x14, virtual false, abstract: false, final false
  inline void set_xz(::Unity::Mathematics::bool2 value);

  /// @brief Method set_xzy, addr 0x6a52ba8, size 0x1c, virtual false, abstract: false, final false
  inline void set_xzy(::Unity::Mathematics::bool3 value);

  /// @brief Method set_yx, addr 0x6a52e2c, size 0x14, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::bool2 value);

  /// @brief Method set_yxz, addr 0x6a52c18, size 0x1c, virtual false, abstract: false, final false
  inline void set_yxz(::Unity::Mathematics::bool3 value);

  /// @brief Method set_yz, addr 0x6a52e54, size 0x14, virtual false, abstract: false, final false
  inline void set_yz(::Unity::Mathematics::bool2 value);

  /// @brief Method set_yzx, addr 0x6a52c88, size 0x1c, virtual false, abstract: false, final false
  inline void set_yzx(::Unity::Mathematics::bool3 value);

  /// @brief Method set_zx, addr 0x6a52e78, size 0x14, virtual false, abstract: false, final false
  inline void set_zx(::Unity::Mathematics::bool2 value);

  /// @brief Method set_zxy, addr 0x6a52cfc, size 0x1c, virtual false, abstract: false, final false
  inline void set_zxy(::Unity::Mathematics::bool3 value);

  /// @brief Method set_zy, addr 0x6a52e9c, size 0x14, virtual false, abstract: false, final false
  inline void set_zy(::Unity::Mathematics::bool2 value);

  /// @brief Method set_zyx, addr 0x6a52d44, size 0x1c, virtual false, abstract: false, final false
  inline void set_zyx(::Unity::Mathematics::bool3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr bool3();

  // Ctor Parameters [CppParam { name: "x", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "z", ty: "bool", modifiers: "", def_value: None, comment: None }]
  constexpr bool3(bool x, bool y, bool z) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13376 };

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

static_assert(sizeof(::Unity::Mathematics::bool3) == 0x3, "Size mismatch!");

} // namespace Unity::Mathematics
