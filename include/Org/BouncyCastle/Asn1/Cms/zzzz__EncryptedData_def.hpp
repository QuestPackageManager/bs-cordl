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
// Type: Org.BouncyCastle.Asn1.Cms::EncryptedData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cms::EncryptedData*
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

  /// @brief Method GetInstance, addr 0x22c5190, size 0x168, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::EncryptedData* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::EncryptedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encInfo);

  static inline ::Org::BouncyCastle::Asn1::Cms::EncryptedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encInfo, ::Org::BouncyCastle::Asn1::Asn1Set* unprotectedAttrs);

  static inline ::Org::BouncyCastle::Asn1::Cms::EncryptedData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x22c5618, size 0x168, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*& __cordl_internal_get_encryptedContentInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*> const& __cordl_internal_get_encryptedContentInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_unprotectedAttrs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __cordl_internal_get_unprotectedAttrs() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_version() const;

  constexpr void __cordl_internal_set_encryptedContentInfo(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* value);

  constexpr void __cordl_internal_set_unprotectedAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x22c551c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encInfo);

  /// @brief Method .ctor, addr 0x22c5524, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encInfo, ::Org::BouncyCastle::Asn1::Asn1Set* unprotectedAttrs);

  /// @brief Method .ctor, addr 0x22c52f8, size 0x224, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_EncryptedContentInfo, addr 0x22c5608, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* get_EncryptedContentInfo();

  /// @brief Method get_UnprotectedAttrs, addr 0x22c5610, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_UnprotectedAttrs();

  /// @brief Method get_Version, addr 0x22c5600, size 0x8, virtual true, abstract: false, final false
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

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field encryptedContentInfo, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* ___encryptedContentInfo;

  /// @brief Field unprotectedAttrs, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___unprotectedAttrs;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 70 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::EncryptedData, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::EncryptedData, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::EncryptedData, ___encryptedContentInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::EncryptedData, ___unprotectedAttrs) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::EncryptedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::EncryptedData*, "Org.BouncyCastle.Asn1.Cms", "EncryptedData");
