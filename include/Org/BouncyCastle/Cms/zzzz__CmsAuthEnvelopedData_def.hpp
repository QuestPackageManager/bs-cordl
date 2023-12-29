#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsAuthEnvelopedData)
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Cms {
class __CmsAuthEnvelopedData__AuthEnvelopedSecureReadable;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace Org::BouncyCastle::Cms {
class RecipientInformationStore;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsReadable;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Cms {
class CmsSecureReadable;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAuthEnvelopedData;
}
namespace Org::BouncyCastle::Cms {
class __CmsAuthEnvelopedData__AuthEnvelopedSecureReadable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData);
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable);
// Type: ::AuthEnvelopedSecureReadable
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(624))
// CS Name: ::CmsAuthEnvelopedData::AuthEnvelopedSecureReadable*
class CORDL_TYPE __CmsAuthEnvelopedData__AuthEnvelopedSecureReadable : public ::System::Object {
public:
  // Declarations
  /// @brief Field parent, offset 0x10, size 0x8
  __declspec(property(get = __get_parent, put = __set_parent))::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* parent;

  __declspec(property(get = get_Algorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Algorithm;

  __declspec(property(get = get_CryptoObject))::System::Object* CryptoObject;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsSecureReadable"
  constexpr operator ::Org::BouncyCastle::Cms::CmsSecureReadable*() noexcept;

  constexpr ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*& __get_parent();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*> const& __get_parent() const;

  constexpr void __set_parent(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* value);

  static inline ::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable* New_ctor(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* parent);

  /// @brief Method .ctor addr 0x116b260 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* parent);

  /// @brief Method get_Algorithm addr 0x116b288 size 0x1c virtual true final true
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Algorithm();

  /// @brief Method get_CryptoObject addr 0x116b2a4 size 0x8 virtual true final true
  inline ::System::Object* get_CryptoObject();

  /// @brief Method GetReadable addr 0x116b2ac size 0x4c virtual true final true
  inline ::Org::BouncyCastle::Cms::CmsReadable* GetReadable(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key);

  // Ctor Parameters [CppParam { name: "", ty: "__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CmsAuthEnvelopedData__AuthEnvelopedSecureReadable(__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CmsAuthEnvelopedData__AuthEnvelopedSecureReadable(__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CmsAuthEnvelopedData__AuthEnvelopedSecureReadable();

public:
  /// @brief Field parent, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* ___parent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable, ___parent) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
// Type: Org.BouncyCastle.Cms::CmsAuthEnvelopedData
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(625))
// CS Name: ::Org.BouncyCastle.Cms::CmsAuthEnvelopedData*
class CORDL_TYPE CmsAuthEnvelopedData : public ::System::Object {
public:
  // Declarations
  using AuthEnvelopedSecureReadable = ::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable;

  /// @brief Field recipientInfoStore, offset 0x10, size 0x8
  __declspec(property(get = __get_recipientInfoStore, put = __set_recipientInfoStore))::Org::BouncyCastle::Cms::RecipientInformationStore* recipientInfoStore;

  /// @brief Field contentInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_contentInfo, put = __set_contentInfo))::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo;

  /// @brief Field originator, offset 0x20, size 0x8
  __declspec(property(get = __get_originator, put = __set_originator))::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originator;

  /// @brief Field authEncAlg, offset 0x28, size 0x8
  __declspec(property(get = __get_authEncAlg, put = __set_authEncAlg))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* authEncAlg;

  /// @brief Field authAttrs, offset 0x30, size 0x8
  __declspec(property(get = __get_authAttrs, put = __set_authAttrs))::Org::BouncyCastle::Asn1::Asn1Set* authAttrs;

  /// @brief Field mac, offset 0x38, size 0x8
  __declspec(property(get = __get_mac, put = __set_mac))::ArrayW<uint8_t, ::Array<uint8_t>*> mac;

  /// @brief Field unauthAttrs, offset 0x40, size 0x8
  __declspec(property(get = __get_unauthAttrs, put = __set_unauthAttrs))::Org::BouncyCastle::Asn1::Asn1Set* unauthAttrs;

  constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore*& __get_recipientInfoStore();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::RecipientInformationStore*> const& __get_recipientInfoStore() const;

  constexpr void __set_recipientInfoStore(::Org::BouncyCastle::Cms::RecipientInformationStore* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& __get_contentInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfo*> const& __get_contentInfo() const;

  constexpr void __set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*& __get_originator();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*> const& __get_originator() const;

  constexpr void __set_originator(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_authEncAlg();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_authEncAlg() const;

  constexpr void __set_authEncAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_authAttrs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_authAttrs() const;

  constexpr void __set_authAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mac();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mac() const;

  constexpr void __set_mac(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_unauthAttrs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_unauthAttrs() const;

  constexpr void __set_unauthAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value);

  static inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> authEnvData);

  /// @brief Method .ctor addr 0x116b108 size 0x24 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> authEnvData);

  static inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* New_ctor(::System::IO::Stream* authEnvData);

  /// @brief Method .ctor addr 0x116b23c size 0x24 virtual false final false
  inline void _ctor(::System::IO::Stream* authEnvData);

  static inline ::Org::BouncyCastle::Cms::CmsAuthEnvelopedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo);

  /// @brief Method .ctor addr 0x116b12c size 0x110 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo);

  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthEnvelopedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsAuthEnvelopedData(CmsAuthEnvelopedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthEnvelopedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsAuthEnvelopedData(CmsAuthEnvelopedData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsAuthEnvelopedData();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsAuthEnvelopedData, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData, ___recipientInfoStore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData, ___contentInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData, ___originator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData, ___authEncAlg) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData, ___authAttrs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData, ___mac) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData, ___unauthAttrs) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAuthEnvelopedData*, "Org.BouncyCastle.Cms", "CmsAuthEnvelopedData");
NEED_NO_BOX(::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::__CmsAuthEnvelopedData__AuthEnvelopedSecureReadable*, "Org.BouncyCastle.Cms", "CmsAuthEnvelopedData/AuthEnvelopedSecureReadable");
