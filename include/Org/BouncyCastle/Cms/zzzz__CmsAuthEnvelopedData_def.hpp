#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsAuthEnvelopedData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsSecureReadable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsAuthEnvelopedData)
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Cms {
class CmsAuthEnvelopedData_AuthEnvelopedSecureReadable;
}
namespace Org::BouncyCastle::Cms {
class CmsReadable;
}
namespace Org::BouncyCastle::Cms {
class RecipientInformationStore;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAuthEnvelopedData;
}
namespace Org::BouncyCastle::Cms {
class CmsAuthEnvelopedData_AuthEnvelopedSecureReadable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData);
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable);
// Dependencies Org.BouncyCastle.Cms.CmsSecureReadable, System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsAuthEnvelopedData/AuthEnvelopedSecureReadable
class CORDL_TYPE CmsAuthEnvelopedData_AuthEnvelopedSecureReadable : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Algorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Algorithm;

  __declspec(property(get = get_CryptoObject)) ::System::Object* CryptoObject;

  /// @brief Field parent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parent, put = __cordl_internal_set_parent)) ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* parent;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsSecureReadable"
  constexpr operator ::Org::BouncyCastle::Cms::CmsSecureReadable*() noexcept;

  /// @brief Method GetReadable, addr 0x2650d34, size 0x48, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Cms::CmsReadable* GetReadable(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key);

  static inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable* New_ctor(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* parent);

  constexpr ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* const& __cordl_internal_get_parent() const;

  constexpr ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*& __cordl_internal_get_parent();

  constexpr void __cordl_internal_set_parent(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* value);

  /// @brief Method .ctor, addr 0x2650ce8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* parent);

  /// @brief Method get_Algorithm, addr 0x2650d10, size 0x1c, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Algorithm();

  /// @brief Method get_CryptoObject, addr 0x2650d2c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_CryptoObject();

  /// @brief Convert to "::Org::BouncyCastle::Cms::CmsSecureReadable"
  constexpr ::Org::BouncyCastle::Cms::CmsSecureReadable* i___Org__BouncyCastle__Cms__CmsSecureReadable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsAuthEnvelopedData_AuthEnvelopedSecureReadable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthEnvelopedData_AuthEnvelopedSecureReadable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsAuthEnvelopedData_AuthEnvelopedSecureReadable(CmsAuthEnvelopedData_AuthEnvelopedSecureReadable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthEnvelopedData_AuthEnvelopedSecureReadable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsAuthEnvelopedData_AuthEnvelopedSecureReadable(CmsAuthEnvelopedData_AuthEnvelopedSecureReadable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 624 };

  /// @brief Field parent, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* ___parent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable, ___parent) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
// Dependencies System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsAuthEnvelopedData
class CORDL_TYPE CmsAuthEnvelopedData : public ::System::Object {
public:
  // Declarations
  using AuthEnvelopedSecureReadable = ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable;

  /// @brief Field authAttrs, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_authAttrs, put = __cordl_internal_set_authAttrs)) ::Org::BouncyCastle::Asn1::Asn1Set* authAttrs;

  /// @brief Field authEncAlg, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_authEncAlg, put = __cordl_internal_set_authEncAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* authEncAlg;

  /// @brief Field contentInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_contentInfo, put = __cordl_internal_set_contentInfo)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo;

  /// @brief Field mac, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mac, put = __cordl_internal_set_mac)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mac;

  /// @brief Field originator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_originator, put = __cordl_internal_set_originator)) ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originator;

  /// @brief Field recipientInfoStore, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_recipientInfoStore, put = __cordl_internal_set_recipientInfoStore)) ::Org::BouncyCastle::Cms::RecipientInformationStore* recipientInfoStore;

  /// @brief Field unauthAttrs, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_unauthAttrs, put = __cordl_internal_set_unauthAttrs)) ::Org::BouncyCastle::Asn1::Asn1Set* unauthAttrs;

  static inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> authEnvData);

  static inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* New_ctor(::System::IO::Stream* authEnvData);

  static inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& __cordl_internal_get_authAttrs() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_authAttrs();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_authEncAlg() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_authEncAlg();

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo* const& __cordl_internal_get_contentInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& __cordl_internal_get_contentInfo();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mac() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mac();

  constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* const& __cordl_internal_get_originator() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*& __cordl_internal_get_originator();

  constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore* const& __cordl_internal_get_recipientInfoStore() const;

  constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore*& __cordl_internal_get_recipientInfoStore();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& __cordl_internal_get_unauthAttrs() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_unauthAttrs();

  constexpr void __cordl_internal_set_authAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_authEncAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value);

  constexpr void __cordl_internal_set_mac(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_originator(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* value);

  constexpr void __cordl_internal_set_recipientInfoStore(::Org::BouncyCastle::Cms::RecipientInformationStore* value);

  constexpr void __cordl_internal_set_unauthAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value);

  /// @brief Method .ctor, addr 0x2650b94, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> authEnvData);

  /// @brief Method .ctor, addr 0x2650cc4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* authEnvData);

  /// @brief Method .ctor, addr 0x2650bb8, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsAuthEnvelopedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthEnvelopedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsAuthEnvelopedData(CmsAuthEnvelopedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthEnvelopedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsAuthEnvelopedData(CmsAuthEnvelopedData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 625 };

  /// @brief Field recipientInfoStore, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::RecipientInformationStore* ___recipientInfoStore;

  /// @brief Field contentInfo, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ___contentInfo;

  /// @brief Field originator, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* ___originator;

  /// @brief Field authEncAlg, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___authEncAlg;

  /// @brief Field authAttrs, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___authAttrs;

  /// @brief Field mac, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mac;

  /// @brief Field unauthAttrs, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___unauthAttrs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData, ___recipientInfoStore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData, ___contentInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData, ___originator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData, ___authEncAlg) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData, ___authAttrs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData, ___mac) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData, ___unauthAttrs) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*, "Org.BouncyCastle.Cms", "CmsAuthEnvelopedData");
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData_AuthEnvelopedSecureReadable*, "Org.BouncyCastle.Cms", "CmsAuthEnvelopedData/AuthEnvelopedSecureReadable");
