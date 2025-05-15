#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Operators/CmsContentEncryptorBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsContentEncryptorBuilder)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Cms {
class EnvelopedDataHelper;
}
namespace Org::BouncyCastle::Crypto {
class ICipherBuilderWithKey;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Operators {
class CmsContentEncryptorBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder);
// Dependencies System.Object
namespace Org::BouncyCastle::Operators {
// Is value type: false
// CS Name: Org.BouncyCastle.Operators.CmsContentEncryptorBuilder
class CORDL_TYPE CmsContentEncryptorBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field KeySizes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_KeySizes, put = setStaticF_KeySizes)) ::System::Collections::IDictionary* KeySizes;

  /// @brief Field encryptionOID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptionOID, put = __cordl_internal_set_encryptionOID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID;

  /// @brief Field helper, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_helper, put = __cordl_internal_set_helper)) ::Org::BouncyCastle::Cms::EnvelopedDataHelper* helper;

  /// @brief Field keySize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_keySize, put = __cordl_internal_set_keySize)) int32_t keySize;

  /// @brief Method Build, addr 0x23b6764, size 0x60, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* Build();

  /// @brief Method GetKeySize, addr 0x23b64d4, size 0x1a4, virtual false, abstract: false, final false
  static inline int32_t GetKeySize(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  static inline ::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID);

  static inline ::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID, int32_t keySize);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_encryptionOID() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_encryptionOID();

  constexpr ::Org::BouncyCastle::Cms::EnvelopedDataHelper* const& __cordl_internal_get_helper() const;

  constexpr ::Org::BouncyCastle::Cms::EnvelopedDataHelper*& __cordl_internal_get_helper();

  constexpr int32_t const& __cordl_internal_get_keySize() const;

  constexpr int32_t& __cordl_internal_get_keySize();

  constexpr void __cordl_internal_set_encryptionOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_helper(::Org::BouncyCastle::Cms::EnvelopedDataHelper* value);

  constexpr void __cordl_internal_set_keySize(int32_t value);

  /// @brief Method .ctor, addr 0x23b6678, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID);

  /// @brief Method .ctor, addr 0x23b66e8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID, int32_t keySize);

  static inline ::System::Collections::IDictionary* getStaticF_KeySizes();

  static inline void setStaticF_KeySizes(::System::Collections::IDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsContentEncryptorBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsContentEncryptorBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsContentEncryptorBuilder(CmsContentEncryptorBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsContentEncryptorBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsContentEncryptorBuilder(CmsContentEncryptorBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 997 };

  /// @brief Field encryptionOID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___encryptionOID;

  /// @brief Field keySize, offset: 0x18, size: 0x4, def value: None
  int32_t ___keySize;

  /// @brief Field helper, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::EnvelopedDataHelper* ___helper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder, ___encryptionOID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder, ___keySize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder, ___helper) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Operators
NEED_NO_BOX(::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*, "Org.BouncyCastle.Operators", "CmsContentEncryptorBuilder");
