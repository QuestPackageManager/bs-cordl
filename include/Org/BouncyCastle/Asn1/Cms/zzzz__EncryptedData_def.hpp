#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/EncryptedData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(EncryptedData)
namespace Org::BouncyCastle::Asn1::Cms {
class EncryptedContentInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class EncryptedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::EncryptedData);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cms.EncryptedData
class CORDL_TYPE EncryptedData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_EncryptedContentInfo)) ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* EncryptedContentInfo;

  __declspec(property(get = get_UnprotectedAttrs)) ::Org::BouncyCastle::Asn1::Asn1Set* UnprotectedAttrs;

  __declspec(property(get = get_Version)) ::Org::BouncyCastle::Asn1::DerInteger* Version;

  /// @brief Field encryptedContentInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptedContentInfo, put = __cordl_internal_set_encryptedContentInfo)) ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encryptedContentInfo;

  /// @brief Field unprotectedAttrs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_unprotectedAttrs, put = __cordl_internal_set_unprotectedAttrs)) ::Org::BouncyCastle::Asn1::Asn1Set* unprotectedAttrs;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Method GetInstance, addr 0x3232b64, size 0x170, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::EncryptedData* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::EncryptedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encInfo);

  static inline ::Org::BouncyCastle::Asn1::Cms::EncryptedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encInfo, ::Org::BouncyCastle::Asn1::Asn1Set* unprotectedAttrs);

  static inline ::Org::BouncyCastle::Asn1::Cms::EncryptedData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x3232fe4, size 0x17c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* const& __cordl_internal_get_encryptedContentInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*& __cordl_internal_get_encryptedContentInfo();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& __cordl_internal_get_unprotectedAttrs() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_unprotectedAttrs();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_version() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_encryptedContentInfo(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* value);

  constexpr void __cordl_internal_set_unprotectedAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x3232ef0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encInfo);

  /// @brief Method .ctor, addr 0x3232ef8, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encInfo, ::Org::BouncyCastle::Asn1::Asn1Set* unprotectedAttrs);

  /// @brief Method .ctor, addr 0x3232cd4, size 0x21c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_EncryptedContentInfo, addr 0x3232fd4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* get_EncryptedContentInfo();

  /// @brief Method get_UnprotectedAttrs, addr 0x3232fdc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_UnprotectedAttrs();

  /// @brief Method get_Version, addr 0x3232fcc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncryptedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptedData(EncryptedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptedData(EncryptedData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 70 };

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field encryptedContentInfo, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* ___encryptedContentInfo;

  /// @brief Field unprotectedAttrs, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___unprotectedAttrs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::EncryptedData, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::EncryptedData, ___encryptedContentInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::EncryptedData, ___unprotectedAttrs) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::EncryptedData, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::EncryptedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::EncryptedData*, "Org.BouncyCastle.Asn1.Cms", "EncryptedData");
