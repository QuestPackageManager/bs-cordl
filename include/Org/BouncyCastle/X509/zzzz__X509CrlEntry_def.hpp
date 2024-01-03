#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CrlEntry)
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CrlEntry;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509CrlEntry;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509CrlEntry);
// Type: Org.BouncyCastle.X509::X509CrlEntry
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1606))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1865))
// CS Name: ::Org.BouncyCastle.X509::X509CrlEntry*
class CORDL_TYPE X509CrlEntry : public ::Org::BouncyCastle::X509::X509ExtensionBase {
public:
  // Declarations
  /// @brief Field c, offset 0x10, size 0x8
  __declspec(property(get = __get_c, put = __set_c))::Org::BouncyCastle::Asn1::X509::CrlEntry* c;

  /// @brief Field isIndirect, offset 0x18, size 0x1
  __declspec(property(get = __get_isIndirect, put = __set_isIndirect)) bool isIndirect;

  /// @brief Field previousCertificateIssuer, offset 0x20, size 0x8
  __declspec(property(get = __get_previousCertificateIssuer, put = __set_previousCertificateIssuer))::Org::BouncyCastle::Asn1::X509::X509Name* previousCertificateIssuer;

  /// @brief Field certificateIssuer, offset 0x28, size 0x8
  __declspec(property(get = __get_certificateIssuer, put = __set_certificateIssuer))::Org::BouncyCastle::Asn1::X509::X509Name* certificateIssuer;

  /// @brief Field hashValueSet, offset 0x30, size 0x1
  __declspec(property(get = __get_hashValueSet, put = __set_hashValueSet)) bool hashValueSet;

  /// @brief Field hashValue, offset 0x34, size 0x4
  __declspec(property(get = __get_hashValue, put = __set_hashValue)) int32_t hashValue;

  __declspec(property(get = get_SerialNumber))::Org::BouncyCastle::Math::BigInteger* SerialNumber;

  __declspec(property(get = get_RevocationDate))::System::DateTime RevocationDate;

  __declspec(property(get = get_HasExtensions)) bool HasExtensions;

  constexpr ::Org::BouncyCastle::Asn1::X509::CrlEntry*& __get_c();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::CrlEntry*> const& __get_c() const;

  constexpr void __set_c(::Org::BouncyCastle::Asn1::X509::CrlEntry* value);

  constexpr bool& __get_isIndirect();

  constexpr bool const& __get_isIndirect() const;

  constexpr void __set_isIndirect(bool value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __get_previousCertificateIssuer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& __get_previousCertificateIssuer() const;

  constexpr void __set_previousCertificateIssuer(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __get_certificateIssuer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& __get_certificateIssuer() const;

  constexpr void __set_certificateIssuer(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr bool& __get_hashValueSet();

  constexpr bool const& __get_hashValueSet() const;

  constexpr void __set_hashValueSet(bool value);

  constexpr int32_t& __get_hashValue();

  constexpr int32_t const& __get_hashValue() const;

  constexpr void __set_hashValue(int32_t value);

  static inline ::Org::BouncyCastle::X509::X509CrlEntry* New_ctor(::Org::BouncyCastle::Asn1::X509::CrlEntry* c);

  /// @brief Method .ctor, addr 0x117d838, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::CrlEntry* c);

  static inline ::Org::BouncyCastle::X509::X509CrlEntry* New_ctor(::Org::BouncyCastle::Asn1::X509::CrlEntry* c, bool isIndirect, ::Org::BouncyCastle::Asn1::X509::X509Name* previousCertificateIssuer);

  /// @brief Method .ctor, addr 0x117bdc4, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::CrlEntry* c, bool isIndirect, ::Org::BouncyCastle::Asn1::X509::X509Name* previousCertificateIssuer);

  /// @brief Method loadCertificateIssuer, addr 0x117d86c, size 0x1a4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* loadCertificateIssuer();

  /// @brief Method GetCertificateIssuer, addr 0x117da10, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* GetCertificateIssuer();

  /// @brief Method GetX509Extensions, addr 0x117da18, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();

  /// @brief Method GetEncoded, addr 0x117da34, size 0xf8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method get_SerialNumber, addr 0x117db2c, size 0x24, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_SerialNumber();

  /// @brief Method get_RevocationDate, addr 0x117db50, size 0x24, virtual false, abstract: false, final false
  inline ::System::DateTime get_RevocationDate();

  /// @brief Method get_HasExtensions, addr 0x117db74, size 0x28, virtual false, abstract: false, final false
  inline bool get_HasExtensions();

  /// @brief Method Equals, addr 0x117db9c, size 0xf4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetHashCode, addr 0x117dc90, size 0x5c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x117dcec, size 0x7f8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "X509CrlEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CrlEntry(X509CrlEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CrlEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CrlEntry(X509CrlEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CrlEntry();

public:
  /// @brief Field c, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::CrlEntry* ___c;

  /// @brief Field isIndirect, offset: 0x18, size: 0x1, def value: None
  bool ___isIndirect;

  /// @brief Field previousCertificateIssuer, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Name* ___previousCertificateIssuer;

  /// @brief Field certificateIssuer, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Name* ___certificateIssuer;

  /// @brief Field hashValueSet, offset: 0x30, size: 0x1, def value: None
  bool ___hashValueSet;

  /// @brief Field hashValue, offset: 0x34, size: 0x4, def value: None
  int32_t ___hashValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509CrlEntry, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CrlEntry, ___c) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CrlEntry, ___isIndirect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CrlEntry, ___previousCertificateIssuer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CrlEntry, ___certificateIssuer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CrlEntry, ___hashValueSet) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CrlEntry, ___hashValue) == 0x34, "Offset mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509CrlEntry);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509CrlEntry*, "Org.BouncyCastle.X509", "X509CrlEntry");
