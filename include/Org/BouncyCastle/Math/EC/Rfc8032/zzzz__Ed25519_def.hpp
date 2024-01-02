#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Ed25519)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
struct __Ed25519__Algorithm;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class __Ed25519__PointPrecomp;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class __Ed25519__PointAccum;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class __Ed25519__PointExt;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
struct __Ed25519__Algorithm;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class Ed25519;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class __Ed25519__PointAccum;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class __Ed25519__PointExt;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class __Ed25519__PointPrecomp;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__Algorithm);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp);
// Type: ::Algorithm
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1556))
// CS Name: ::Ed25519::Algorithm
struct CORDL_TYPE __Ed25519__Algorithm {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Ed25519__Algorithm_Unwrapped
  enum struct ____Ed25519__Algorithm_Unwrapped : int32_t {
    __E_Ed25519 = static_cast<int32_t>(0x0),
    __E_Ed25519ctx = static_cast<int32_t>(0x1),
    __E_Ed25519ph = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Ed25519__Algorithm_Unwrapped() const noexcept {
    return static_cast<____Ed25519__Algorithm_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Ed25519__Algorithm(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Ed25519__Algorithm();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Ed25519 value: static_cast<int32_t>(0x0)
  static ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__Algorithm const Ed25519;

  /// @brief Field Ed25519ctx value: static_cast<int32_t>(0x1)
  static ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__Algorithm const Ed25519ctx;

  /// @brief Field Ed25519ph value: static_cast<int32_t>(0x2)
  static ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__Algorithm const Ed25519ph;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__Algorithm, 0x4>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__Algorithm, value__) == 0x0, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Rfc8032
// Type: ::PointAccum
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1557))
// CS Name: ::Ed25519::PointAccum*
class CORDL_TYPE __Ed25519__PointAccum : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __get_x, put = __set_x))::ArrayW<int32_t, ::Array<int32_t>*> x;

  /// @brief Field y, offset 0x18, size 0x8
  __declspec(property(get = __get_y, put = __set_y))::ArrayW<int32_t, ::Array<int32_t>*> y;

  /// @brief Field z, offset 0x20, size 0x8
  __declspec(property(get = __get_z, put = __set_z))::ArrayW<int32_t, ::Array<int32_t>*> z;

  /// @brief Field u, offset 0x28, size 0x8
  __declspec(property(get = __get_u, put = __set_u))::ArrayW<int32_t, ::Array<int32_t>*> u;

  /// @brief Field v, offset 0x30, size 0x8
  __declspec(property(get = __get_v, put = __set_v))::ArrayW<int32_t, ::Array<int32_t>*> v;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_x();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_x() const;

  constexpr void __set_x(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_y();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_y() const;

  constexpr void __set_y(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_z();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_z() const;

  constexpr void __set_z(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_u();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_u() const;

  constexpr void __set_u(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_v();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_v() const;

  constexpr void __set_v(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum* New_ctor();

  /// @brief Method .ctor, addr 0x104505c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Ed25519__PointAccum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Ed25519__PointAccum(__Ed25519__PointAccum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Ed25519__PointAccum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Ed25519__PointAccum(__Ed25519__PointAccum const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Ed25519__PointAccum();

public:
  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___x;

  /// @brief Field y, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___y;

  /// @brief Field z, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___z;

  /// @brief Field u, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___u;

  /// @brief Field v, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___v;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum, ___y) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum, ___z) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum, ___u) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum, ___v) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Rfc8032
// Type: ::PointExt
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1558))
// CS Name: ::Ed25519::PointExt*
class CORDL_TYPE __Ed25519__PointExt : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __get_x, put = __set_x))::ArrayW<int32_t, ::Array<int32_t>*> x;

  /// @brief Field y, offset 0x18, size 0x8
  __declspec(property(get = __get_y, put = __set_y))::ArrayW<int32_t, ::Array<int32_t>*> y;

  /// @brief Field z, offset 0x20, size 0x8
  __declspec(property(get = __get_z, put = __set_z))::ArrayW<int32_t, ::Array<int32_t>*> z;

  /// @brief Field t, offset 0x28, size 0x8
  __declspec(property(get = __get_t, put = __set_t))::ArrayW<int32_t, ::Array<int32_t>*> t;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_x();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_x() const;

  constexpr void __set_x(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_y();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_y() const;

  constexpr void __set_y(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_z();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_z() const;

  constexpr void __set_z(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_t();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_t() const;

  constexpr void __set_t(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* New_ctor();

  /// @brief Method .ctor, addr 0x10450f0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Ed25519__PointExt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Ed25519__PointExt(__Ed25519__PointExt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Ed25519__PointExt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Ed25519__PointExt(__Ed25519__PointExt const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Ed25519__PointExt();

public:
  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___x;

  /// @brief Field y, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___y;

  /// @brief Field z, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___z;

  /// @brief Field t, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___t;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt, ___y) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt, ___z) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt, ___t) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Rfc8032
// Type: ::PointPrecomp
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1559))
// CS Name: ::Ed25519::PointPrecomp*
class CORDL_TYPE __Ed25519__PointPrecomp : public ::System::Object {
public:
  // Declarations
  /// @brief Field ypx_h, offset 0x10, size 0x8
  __declspec(property(get = __get_ypx_h, put = __set_ypx_h))::ArrayW<int32_t, ::Array<int32_t>*> ypx_h;

  /// @brief Field ymx_h, offset 0x18, size 0x8
  __declspec(property(get = __get_ymx_h, put = __set_ymx_h))::ArrayW<int32_t, ::Array<int32_t>*> ymx_h;

  /// @brief Field xyd, offset 0x20, size 0x8
  __declspec(property(get = __get_xyd, put = __set_xyd))::ArrayW<int32_t, ::Array<int32_t>*> xyd;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_ypx_h();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_ypx_h() const;

  constexpr void __set_ypx_h(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_ymx_h();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_ymx_h() const;

  constexpr void __set_ymx_h(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_xyd();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_xyd() const;

  constexpr void __set_xyd(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp* New_ctor();

  /// @brief Method .ctor, addr 0x1045178, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Ed25519__PointPrecomp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Ed25519__PointPrecomp(__Ed25519__PointPrecomp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Ed25519__PointPrecomp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Ed25519__PointPrecomp(__Ed25519__PointPrecomp const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Ed25519__PointPrecomp();

public:
  /// @brief Field ypx_h, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___ypx_h;

  /// @brief Field ymx_h, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___ymx_h;

  /// @brief Field xyd, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___xyd;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp, ___ypx_h) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp, ___ymx_h) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp, ___xyd) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Rfc8032
// Type: Org.BouncyCastle.Math.EC.Rfc8032::Ed25519
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1560))
// CS Name: ::Org.BouncyCastle.Math.EC.Rfc8032::Ed25519*
class CORDL_TYPE Ed25519 : public ::System::Object {
public:
  // Declarations
  using PointPrecomp = ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp;

  using PointExt = ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt;

  using PointAccum = ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum;

  using Algorithm = ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__Algorithm;

  /// @brief Field PrehashSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_PrehashSize, put = setStaticF_PrehashSize)) int32_t PrehashSize;

  /// @brief Field PublicKeySize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_PublicKeySize, put = setStaticF_PublicKeySize)) int32_t PublicKeySize;

  /// @brief Field SecretKeySize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_SecretKeySize, put = setStaticF_SecretKeySize)) int32_t SecretKeySize;

  /// @brief Field SignatureSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_SignatureSize, put = setStaticF_SignatureSize)) int32_t SignatureSize;

  /// @brief Field Dom2Prefix, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Dom2Prefix, put = setStaticF_Dom2Prefix))::ArrayW<uint8_t, ::Array<uint8_t>*> Dom2Prefix;

  /// @brief Field P, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_P, put = setStaticF_P))::ArrayW<uint32_t, ::Array<uint32_t>*> P;

  /// @brief Field L, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_L, put = setStaticF_L))::ArrayW<uint32_t, ::Array<uint32_t>*> L;

  /// @brief Field B_x, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_B_x, put = setStaticF_B_x))::ArrayW<int32_t, ::Array<int32_t>*> B_x;

  /// @brief Field B_y, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_B_y, put = setStaticF_B_y))::ArrayW<int32_t, ::Array<int32_t>*> B_y;

  /// @brief Field C_d, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_C_d, put = setStaticF_C_d))::ArrayW<int32_t, ::Array<int32_t>*> C_d;

  /// @brief Field C_d2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_C_d2, put = setStaticF_C_d2))::ArrayW<int32_t, ::Array<int32_t>*> C_d2;

  /// @brief Field C_d4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_C_d4, put = setStaticF_C_d4))::ArrayW<int32_t, ::Array<int32_t>*> C_d4;

  /// @brief Field precompLock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_precompLock, put = setStaticF_precompLock))::System::Object* precompLock;

  /// @brief Field precompBaseTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_precompBaseTable, put = setStaticF_precompBaseTable))::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*,
                                                                                                            ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>*> precompBaseTable;

  /// @brief Field precompBase, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_precompBase, put = setStaticF_precompBase))::ArrayW<int32_t, ::Array<int32_t>*> precompBase;

  static inline void setStaticF_PrehashSize(int32_t value);

  static inline int32_t getStaticF_PrehashSize();

  static inline void setStaticF_PublicKeySize(int32_t value);

  static inline int32_t getStaticF_PublicKeySize();

  static inline void setStaticF_SecretKeySize(int32_t value);

  static inline int32_t getStaticF_SecretKeySize();

  static inline void setStaticF_SignatureSize(int32_t value);

  static inline int32_t getStaticF_SignatureSize();

  static inline void setStaticF_Dom2Prefix(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_Dom2Prefix();

  static inline void setStaticF_P(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_P();

  static inline void setStaticF_L(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_L();

  static inline void setStaticF_B_x(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_B_x();

  static inline void setStaticF_B_y(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_B_y();

  static inline void setStaticF_C_d(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_C_d();

  static inline void setStaticF_C_d2(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_C_d2();

  static inline void setStaticF_C_d4(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_C_d4();

  static inline void setStaticF_precompLock(::System::Object* value);

  static inline ::System::Object* getStaticF_precompLock();

  static inline void setStaticF_precompBaseTable(::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>*> value);

  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>*> getStaticF_precompBaseTable();

  static inline void setStaticF_precompBase(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_precompBase();

  /// @brief Method CalculateS, addr 0x1040660, size 0x194, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateS(::ArrayW<uint8_t, ::Array<uint8_t>*> r, ::ArrayW<uint8_t, ::Array<uint8_t>*> k, ::ArrayW<uint8_t, ::Array<uint8_t>*> s);

  /// @brief Method CheckContextVar, addr 0x1040d7c, size 0x2c, virtual false, abstract: false, final false
  static inline bool CheckContextVar(::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, uint8_t phflag);

  /// @brief Method CheckPoint, addr 0x1040da8, size 0x114, virtual false, abstract: false, final false
  static inline int32_t CheckPoint(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> y);

  /// @brief Method CheckPoint, addr 0x1040ebc, size 0x158, virtual false, abstract: false, final false
  static inline int32_t CheckPoint(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> y, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method CheckPointVar, addr 0x1041014, size 0xdc, virtual false, abstract: false, final false
  static inline bool CheckPointVar(::ArrayW<uint8_t, ::Array<uint8_t>*> p);

  /// @brief Method CheckScalarVar, addr 0x10411c0, size 0xb0, virtual false, abstract: false, final false
  static inline bool CheckScalarVar(::ArrayW<uint8_t, ::Array<uint8_t>*> s);

  /// @brief Method CreateDigest, addr 0x1041270, size 0x5c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* CreateDigest();

  /// @brief Method CreatePrehash, addr 0x10412cc, size 0x4c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IDigest* CreatePrehash();

  /// @brief Method Decode24, addr 0x1041318, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t Decode24(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method Decode32, addr 0x104136c, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t Decode32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method Decode32, addr 0x10410f0, size 0xd0, virtual false, abstract: false, final false
  static inline void Decode32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> n, int32_t nOff, int32_t nLen);

  /// @brief Method DecodePointVar, addr 0x10413d4, size 0x234, virtual false, abstract: false, final false
  static inline bool DecodePointVar(::ArrayW<uint8_t, ::Array<uint8_t>*> p, int32_t pOff, bool negate, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* r);

  /// @brief Method DecodeScalar, addr 0x10407f4, size 0x74, virtual false, abstract: false, final false
  static inline void DecodeScalar(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> n);

  /// @brief Method Dom2, addr 0x1041674, size 0x244, virtual false, abstract: false, final false
  static inline void Dom2(::Org::BouncyCastle::Crypto::IDigest* d, uint8_t phflag, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx);

  /// @brief Method Encode24, addr 0x10418b8, size 0x64, virtual false, abstract: false, final false
  static inline void Encode24(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method Encode32, addr 0x1040868, size 0x80, virtual false, abstract: false, final false
  static inline void Encode32(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method Encode56, addr 0x104191c, size 0x7c, virtual false, abstract: false, final false
  static inline void Encode56(uint64_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method EncodePoint, addr 0x1041998, size 0x140, virtual false, abstract: false, final false
  static inline int32_t EncodePoint(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum* p, ::ArrayW<uint8_t, ::Array<uint8_t>*> r, int32_t rOff);

  /// @brief Method GeneratePrivateKey, addr 0x1041ad8, size 0x1c, virtual false, abstract: false, final false
  static inline void GeneratePrivateKey(::Org::BouncyCastle::Security::SecureRandom* random, ::ArrayW<uint8_t, ::Array<uint8_t>*> k);

  /// @brief Method GeneratePublicKey, addr 0x1041af4, size 0x220, virtual false, abstract: false, final false
  static inline void GeneratePublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff);

  /// @brief Method GetWnafVar, addr 0x1041e58, size 0x1b8, virtual false, abstract: false, final false
  static inline ::ArrayW<int8_t, ::Array<int8_t>*> GetWnafVar(::ArrayW<uint32_t, ::Array<uint32_t>*> n, int32_t width);

  /// @brief Method ImplSign, addr 0x1042010, size 0x450, virtual false, abstract: false, final false
  static inline void ImplSign(::Org::BouncyCastle::Crypto::IDigest* d, ::ArrayW<uint8_t, ::Array<uint8_t>*> h, ::ArrayW<uint8_t, ::Array<uint8_t>*> s, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk,
                              int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, uint8_t phflag, ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen,
                              ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  /// @brief Method ImplSign, addr 0x1042460, size 0x31c, virtual false, abstract: false, final false
  static inline void ImplSign(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, uint8_t phflag, ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff,
                              int32_t mLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  /// @brief Method ImplSign, addr 0x104277c, size 0x328, virtual false, abstract: false, final false
  static inline void ImplSign(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, uint8_t phflag,
                              ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  /// @brief Method ImplVerify, addr 0x1042aa4, size 0x584, virtual false, abstract: false, final false
  static inline bool ImplVerify(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx,
                                uint8_t phflag, ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen);

  /// @brief Method PointAddVar, addr 0x10431e4, size 0x220, virtual false, abstract: false, final false
  static inline void PointAddVar(bool negate, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* p, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum* r);

  /// @brief Method PointAddVar, addr 0x1043404, size 0x22c, virtual false, abstract: false, final false
  static inline void PointAddVar(bool negate, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* p, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* q,
                                 ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* r);

  /// @brief Method PointAddPrecomp, addr 0x1043630, size 0x154, virtual false, abstract: false, final false
  static inline void PointAddPrecomp(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp* p, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum* r);

  /// @brief Method PointCopy, addr 0x1043784, size 0xe0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* PointCopy(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum* p);

  /// @brief Method PointCopy, addr 0x1043864, size 0xe8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* PointCopy(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* p);

  /// @brief Method PointDouble, addr 0x104394c, size 0x158, virtual false, abstract: false, final false
  static inline void PointDouble(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum* r);

  /// @brief Method PointExtendXY, addr 0x1043aa4, size 0x88, virtual false, abstract: false, final false
  static inline void PointExtendXY(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum* p);

  /// @brief Method PointExtendXY, addr 0x1041608, size 0x6c, virtual false, abstract: false, final false
  static inline void PointExtendXY(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* p);

  /// @brief Method PointLookup, addr 0x1043b2c, size 0x12c, virtual false, abstract: false, final false
  static inline void PointLookup(int32_t block, int32_t index, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp* p);

  /// @brief Method PointPrecompVar, addr 0x1043c58, size 0x1c0, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>*>
  PointPrecompVar(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* p, int32_t count);

  /// @brief Method PointSetNeutral, addr 0x1043e18, size 0x80, virtual false, abstract: false, final false
  static inline void PointSetNeutral(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum* p);

  /// @brief Method PointSetNeutral, addr 0x1043e98, size 0x78, virtual false, abstract: false, final false
  static inline void PointSetNeutral(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* p);

  /// @brief Method Precompute, addr 0x103c35c, size 0x804, virtual false, abstract: false, final false
  static inline void Precompute();

  /// @brief Method PruneScalar, addr 0x1041d14, size 0x58, virtual false, abstract: false, final false
  static inline void PruneScalar(::ArrayW<uint8_t, ::Array<uint8_t>*> n, int32_t nOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> r);

  /// @brief Method ReduceScalar, addr 0x10408e8, size 0x494, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReduceScalar(::ArrayW<uint8_t, ::Array<uint8_t>*> n);

  /// @brief Method ScalarMultBase, addr 0x1043f10, size 0x254, virtual false, abstract: false, final false
  static inline void ScalarMultBase(::ArrayW<uint8_t, ::Array<uint8_t>*> k, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum* r);

  /// @brief Method ScalarMultBaseEncoded, addr 0x1041d6c, size 0xec, virtual false, abstract: false, final false
  static inline void ScalarMultBaseEncoded(::ArrayW<uint8_t, ::Array<uint8_t>*> k, ::ArrayW<uint8_t, ::Array<uint8_t>*> r, int32_t rOff);

  /// @brief Method ScalarMultBaseYZ, addr 0x103ce8c, size 0x178, virtual false, abstract: false, final false
  static inline void ScalarMultBaseYZ(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<int32_t, ::Array<int32_t>*> y, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method ScalarMultStrausVar, addr 0x1043028, size 0x1bc, virtual false, abstract: false, final false
  static inline void ScalarMultStrausVar(::ArrayW<uint32_t, ::Array<uint32_t>*> nb, ::ArrayW<uint32_t, ::Array<uint32_t>*> np, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* p,
                                         ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum* r);

  /// @brief Method Sign, addr 0x1044164, size 0xb0, virtual false, abstract: false, final false
  static inline void Sign(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig,
                          int32_t sigOff);

  /// @brief Method Sign, addr 0x1044214, size 0xc8, virtual false, abstract: false, final false
  static inline void Sign(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff,
                          int32_t mLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  /// @brief Method Sign, addr 0x10442dc, size 0xbc, virtual false, abstract: false, final false
  static inline void Sign(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen,
                          ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  /// @brief Method Sign, addr 0x1044398, size 0xcc, virtual false, abstract: false, final false
  static inline void Sign(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx,
                          ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  /// @brief Method SignPrehash, addr 0x1044464, size 0xb8, virtual false, abstract: false, final false
  static inline void SignPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::ArrayW<uint8_t, ::Array<uint8_t>*> ph, int32_t phOff,
                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  /// @brief Method SignPrehash, addr 0x104451c, size 0xd4, virtual false, abstract: false, final false
  static inline void SignPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx,
                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> ph, int32_t phOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  /// @brief Method SignPrehash, addr 0x10445f0, size 0x1cc, virtual false, abstract: false, final false
  static inline void SignPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::Org::BouncyCastle::Crypto::IDigest* ph,
                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  /// @brief Method SignPrehash, addr 0x10447bc, size 0x1e8, virtual false, abstract: false, final false
  static inline void SignPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx,
                                 ::Org::BouncyCastle::Crypto::IDigest* ph, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  /// @brief Method Verify, addr 0x10449a4, size 0xb4, virtual false, abstract: false, final false
  static inline bool Verify(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff,
                            int32_t mLen);

  /// @brief Method Verify, addr 0x1044a58, size 0xc0, virtual false, abstract: false, final false
  static inline bool Verify(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx,
                            ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen);

  /// @brief Method VerifyPrehash, addr 0x1044b18, size 0xc0, virtual false, abstract: false, final false
  static inline bool VerifyPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx,
                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> ph, int32_t phOff);

  /// @brief Method VerifyPrehash, addr 0x1044bd8, size 0x1d4, virtual false, abstract: false, final false
  static inline bool VerifyPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx,
                                   ::Org::BouncyCastle::Crypto::IDigest* ph);

  static inline ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519* New_ctor();

  /// @brief Method .ctor, addr 0x1045054, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Ed25519", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ed25519(Ed25519&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ed25519", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ed25519(Ed25519 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ed25519();

public:
  /// @brief Field M28L offset 0xffffffff size 0x8
  static constexpr int64_t M28L{ static_cast<int64_t>(0xfffffff) };

  /// @brief Field M32L offset 0xffffffff size 0x8
  static constexpr int64_t M32L{ static_cast<int64_t>(0xffffffff) };

  /// @brief Field PointBytes offset 0xffffffff size 0x4
  static constexpr int32_t PointBytes{ static_cast<int32_t>(0x20) };

  /// @brief Field ScalarUints offset 0xffffffff size 0x4
  static constexpr int32_t ScalarUints{ static_cast<int32_t>(0x8) };

  /// @brief Field ScalarBytes offset 0xffffffff size 0x4
  static constexpr int32_t ScalarBytes{ static_cast<int32_t>(0x20) };

  /// @brief Field L0 offset 0xffffffff size 0x4
  static constexpr int32_t L0{ static_cast<int32_t>(0xfcf5d3ed) };

  /// @brief Field L1 offset 0xffffffff size 0x4
  static constexpr int32_t L1{ static_cast<int32_t>(0x12631a6) };

  /// @brief Field L2 offset 0xffffffff size 0x4
  static constexpr int32_t L2{ static_cast<int32_t>(0x79cd658) };

  /// @brief Field L3 offset 0xffffffff size 0x4
  static constexpr int32_t L3{ static_cast<int32_t>(0xff9dea2f) };

  /// @brief Field L4 offset 0xffffffff size 0x4
  static constexpr int32_t L4{ static_cast<int32_t>(0x14df) };

  /// @brief Field WnafWidthBase offset 0xffffffff size 0x4
  static constexpr int32_t WnafWidthBase{ static_cast<int32_t>(0x7) };

  /// @brief Field PrecompBlocks offset 0xffffffff size 0x4
  static constexpr int32_t PrecompBlocks{ static_cast<int32_t>(0x8) };

  /// @brief Field PrecompTeeth offset 0xffffffff size 0x4
  static constexpr int32_t PrecompTeeth{ static_cast<int32_t>(0x4) };

  /// @brief Field PrecompSpacing offset 0xffffffff size 0x4
  static constexpr int32_t PrecompSpacing{ static_cast<int32_t>(0x8) };

  /// @brief Field PrecompPoints offset 0xffffffff size 0x4
  static constexpr int32_t PrecompPoints{ static_cast<int32_t>(0x8) };

  /// @brief Field PrecompMask offset 0xffffffff size 0x4
  static constexpr int32_t PrecompMask{ static_cast<int32_t>(0x7) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Rfc8032
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__Algorithm, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed25519/Algorithm");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed25519");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed25519/PointAccum");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed25519/PointExt");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp*, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed25519/PointPrecomp");
