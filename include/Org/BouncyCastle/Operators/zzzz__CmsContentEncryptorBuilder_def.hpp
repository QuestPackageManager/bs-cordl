#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsContentEncryptorBuilder)
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto {
class ICipherBuilderWithKey;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Cms {
class EnvelopedDataHelper;
}
// Forward declare root types
namespace Org::BouncyCastle::Operators {
class CmsContentEncryptorBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder);
// Type: Org.BouncyCastle.Operators::CmsContentEncryptorBuilder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Operators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(997))
// CS Name: ::Org.BouncyCastle.Operators::CmsContentEncryptorBuilder*
class CORDL_TYPE CmsContentEncryptorBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field encryptionOID, offset 0x10, size 0x8
  __declspec(property(get = __get_encryptionOID, put = __set_encryptionOID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID;

  /// @brief Field keySize, offset 0x18, size 0x4
  __declspec(property(get = __get_keySize, put = __set_keySize)) int32_t keySize;

  /// @brief Field helper, offset 0x20, size 0x8
  __declspec(property(get = __get_helper, put = __set_helper))::Org::BouncyCastle::Cms::EnvelopedDataHelper* helper;

  /// @brief Field KeySizes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_KeySizes, put = setStaticF_KeySizes))::System::Collections::IDictionary* KeySizes;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_encryptionOID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_encryptionOID() const;

  constexpr void __set_encryptionOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr int32_t& __get_keySize();

  constexpr int32_t const& __get_keySize() const;

  constexpr void __set_keySize(int32_t value);

  constexpr ::Org::BouncyCastle::Cms::EnvelopedDataHelper*& __get_helper();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::EnvelopedDataHelper*> const& __get_helper() const;

  constexpr void __set_helper(::Org::BouncyCastle::Cms::EnvelopedDataHelper* value);

  static inline void setStaticF_KeySizes(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_KeySizes();

  /// @brief Method GetKeySize, addr 0xf2d628, size 0x1a4, virtual false, abstract: false, final false
  static inline int32_t GetKeySize(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  static inline ::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID);

  /// @brief Method .ctor, addr 0xf2d7cc, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID);

  static inline ::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID, int32_t keySize);

  /// @brief Method .ctor, addr 0xf2d83c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionOID, int32_t keySize);

  /// @brief Method Build, addr 0xf2d8c0, size 0x68, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* Build();

  // Ctor Parameters [CppParam { name: "", ty: "CmsContentEncryptorBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsContentEncryptorBuilder(CmsContentEncryptorBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsContentEncryptorBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsContentEncryptorBuilder(CmsContentEncryptorBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsContentEncryptorBuilder();

public:
  /// @brief Field encryptionOID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___encryptionOID;

  /// @brief Field keySize, offset: 0x18, size: 0x4, def value: None
  int32_t ___keySize;

  /// @brief Field helper, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::EnvelopedDataHelper* ___helper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder, ___encryptionOID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder, ___keySize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder, ___helper) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Operators
NEED_NO_BOX(::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*, "Org.BouncyCastle.Operators", "CmsContentEncryptorBuilder");
