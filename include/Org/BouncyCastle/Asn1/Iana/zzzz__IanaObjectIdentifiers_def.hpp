#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Iana/IanaObjectIdentifiers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IanaObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Iana {
class IanaObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Iana::IanaObjectIdentifiers);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::Iana {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Iana.IanaObjectIdentifiers
class CORDL_TYPE IanaObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field HmacMD5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HmacMD5, put = setStaticF_HmacMD5)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* HmacMD5;

  /// @brief Field HmacRipeMD160, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HmacRipeMD160, put = setStaticF_HmacRipeMD160)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* HmacRipeMD160;

  /// @brief Field HmacSha1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HmacSha1, put = setStaticF_HmacSha1)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* HmacSha1;

  /// @brief Field HmacTiger, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HmacTiger, put = setStaticF_HmacTiger)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* HmacTiger;

  /// @brief Field IsakmpOakley, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IsakmpOakley, put = setStaticF_IsakmpOakley)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IsakmpOakley;

  static inline ::Org::BouncyCastle::Asn1::Iana::IanaObjectIdentifiers* New_ctor();

  /// @brief Method .ctor, addr 0x232c480, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_HmacMD5();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_HmacRipeMD160();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_HmacSha1();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_HmacTiger();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IsakmpOakley();

  static inline void setStaticF_HmacMD5(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_HmacRipeMD160(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_HmacSha1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_HmacTiger(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IsakmpOakley(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IanaObjectIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IanaObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IanaObjectIdentifiers(IanaObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IanaObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IanaObjectIdentifiers(IanaObjectIdentifiers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 173 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Iana::IanaObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Iana
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Iana::IanaObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Iana::IanaObjectIdentifiers*, "Org.BouncyCastle.Asn1.Iana", "IanaObjectIdentifiers");
