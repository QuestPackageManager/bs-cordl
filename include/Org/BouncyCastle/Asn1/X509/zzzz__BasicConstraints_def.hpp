#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BasicConstraints)
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerBoolean;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class BasicConstraints;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::BasicConstraints);
// Type: Org.BouncyCastle.Asn1.X509::BasicConstraints
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(346))
// CS Name: ::Org.BouncyCastle.Asn1.X509::BasicConstraints*
class CORDL_TYPE BasicConstraints : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field cA, offset 0x10, size 0x8
  __declspec(property(get = __get_cA, put = __set_cA))::Org::BouncyCastle::Asn1::DerBoolean* cA;

  /// @brief Field pathLenConstraint, offset 0x18, size 0x8
  __declspec(property(get = __get_pathLenConstraint, put = __set_pathLenConstraint))::Org::BouncyCastle::Asn1::DerInteger* pathLenConstraint;

  __declspec(property(get = get_PathLenConstraint))::Org::BouncyCastle::Math::BigInteger* PathLenConstraint;

  constexpr ::Org::BouncyCastle::Asn1::DerBoolean*& __get_cA();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBoolean*> const& __get_cA() const;

  constexpr void __set_cA(::Org::BouncyCastle::Asn1::DerBoolean* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_pathLenConstraint();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_pathLenConstraint() const;

  constexpr void __set_pathLenConstraint(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method GetInstance addr 0x1086524 size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::BasicConstraints* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance addr 0x108653c size 0xf0 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::BasicConstraints* GetInstance(::System::Object* obj);

  /// @brief Method FromExtensions addr 0x10867e8 size 0x68 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::BasicConstraints* FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  static inline ::Org::BouncyCastle::Asn1::X509::BasicConstraints* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x108662c size 0x1bc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::BasicConstraints* New_ctor(bool cA);

  /// @brief Method .ctor addr 0x1086850 size 0x74 virtual false final false
  inline void _ctor(bool cA);

  static inline ::Org::BouncyCastle::Asn1::X509::BasicConstraints* New_ctor(int32_t pathLenConstraint);

  /// @brief Method .ctor addr 0x10868c4 size 0xb0 virtual false final false
  inline void _ctor(int32_t pathLenConstraint);

  /// @brief Method IsCA addr 0x1086974 size 0x14 virtual false final false
  inline bool IsCA();

  /// @brief Method get_PathLenConstraint addr 0x1086988 size 0x14 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_PathLenConstraint();

  /// @brief Method ToAsn1Object addr 0x108699c size 0x138 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToString addr 0x1086ad4 size 0x204 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "BasicConstraints", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicConstraints(BasicConstraints&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicConstraints", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicConstraints(BasicConstraints const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicConstraints();

public:
  /// @brief Field cA, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBoolean* ___cA;

  /// @brief Field pathLenConstraint, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___pathLenConstraint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::BasicConstraints, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::BasicConstraints);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::BasicConstraints*, "Org.BouncyCastle.Asn1.X509", "BasicConstraints");
