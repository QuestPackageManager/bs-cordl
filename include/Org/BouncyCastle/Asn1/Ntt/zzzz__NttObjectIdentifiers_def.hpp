#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ntt/NttObjectIdentifiers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NttObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ntt {
class NttObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ntt::NttObjectIdentifiers);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::Ntt {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Ntt.NttObjectIdentifiers
class CORDL_TYPE NttObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field IdCamellia128Cbc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdCamellia128Cbc, put = setStaticF_IdCamellia128Cbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdCamellia128Cbc;

  /// @brief Field IdCamellia128Wrap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdCamellia128Wrap, put = setStaticF_IdCamellia128Wrap)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdCamellia128Wrap;

  /// @brief Field IdCamellia192Cbc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdCamellia192Cbc, put = setStaticF_IdCamellia192Cbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdCamellia192Cbc;

  /// @brief Field IdCamellia192Wrap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdCamellia192Wrap, put = setStaticF_IdCamellia192Wrap)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdCamellia192Wrap;

  /// @brief Field IdCamellia256Cbc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdCamellia256Cbc, put = setStaticF_IdCamellia256Cbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdCamellia256Cbc;

  /// @brief Field IdCamellia256Wrap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdCamellia256Wrap, put = setStaticF_IdCamellia256Wrap)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdCamellia256Wrap;

  static inline ::Org::BouncyCastle::Asn1::Ntt::NttObjectIdentifiers* New_ctor();

  /// @brief Method .ctor, addr 0x2402d88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCamellia128Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCamellia128Wrap();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCamellia192Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCamellia192Wrap();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCamellia256Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdCamellia256Wrap();

  static inline void setStaticF_IdCamellia128Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdCamellia128Wrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdCamellia192Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdCamellia192Wrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdCamellia256Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdCamellia256Wrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NttObjectIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NttObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NttObjectIdentifiers(NttObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NttObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NttObjectIdentifiers(NttObjectIdentifiers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 205 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ntt::NttObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ntt
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ntt::NttObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ntt::NttObjectIdentifiers*, "Org.BouncyCastle.Asn1.Ntt", "NttObjectIdentifiers");
