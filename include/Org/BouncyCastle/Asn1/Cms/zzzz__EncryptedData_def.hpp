#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(EncryptedData)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1::Cms {
class EncryptedContentInfo;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class EncryptedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::EncryptedData);
// Type: Org.BouncyCastle.Asn1.Cms::EncryptedData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(70))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::EncryptedData*
class CORDL_TYPE EncryptedData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Field encryptedContentInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_encryptedContentInfo, put = __set_encryptedContentInfo))::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encryptedContentInfo;

  /// @brief Field unprotectedAttrs, offset 0x20, size 0x8
  __declspec(property(get = __get_unprotectedAttrs, put = __set_unprotectedAttrs))::Org::BouncyCastle::Asn1::Asn1Set* unprotectedAttrs;

  __declspec(property(get = get_Version))::Org::BouncyCastle::Asn1::DerInteger* Version;

  __declspec(property(get = get_EncryptedContentInfo))::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* EncryptedContentInfo;

  __declspec(property(get = get_UnprotectedAttrs))::Org::BouncyCastle::Asn1::Asn1Set* UnprotectedAttrs;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_version() const;

  constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*& __get_encryptedContentInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo*> const& __get_encryptedContentInfo() const;

  constexpr void __set_encryptedContentInfo(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_unprotectedAttrs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_unprotectedAttrs() const;

  constexpr void __set_unprotectedAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value);

  /// @brief Method GetInstance addr 0xe76728 size 0x178 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::EncryptedData* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::EncryptedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encInfo);

  /// @brief Method .ctor addr 0xe76ad4 size 0x8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encInfo);

  static inline ::Org::BouncyCastle::Asn1::Cms::EncryptedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encInfo, ::Org::BouncyCastle::Asn1::Asn1Set* unprotectedAttrs);

  /// @brief Method .ctor addr 0xe76adc size 0xe0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* encInfo, ::Org::BouncyCastle::Asn1::Asn1Set* unprotectedAttrs);

  static inline ::Org::BouncyCastle::Asn1::Cms::EncryptedData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe768a0 size 0x234 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Version addr 0xe76bbc size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  /// @brief Method get_EncryptedContentInfo addr 0xe76bc4 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* get_EncryptedContentInfo();

  /// @brief Method get_UnprotectedAttrs addr 0xe76bcc size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_UnprotectedAttrs();

  /// @brief Method ToAsn1Object addr 0xe76bd4 size 0x170 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "EncryptedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptedData(EncryptedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptedData(EncryptedData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptedData();

public:
  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field encryptedContentInfo, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo* ___encryptedContentInfo;

  /// @brief Field unprotectedAttrs, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___unprotectedAttrs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::EncryptedData, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::EncryptedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::EncryptedData*, "Org.BouncyCastle.Asn1.Cms", "EncryptedData");
