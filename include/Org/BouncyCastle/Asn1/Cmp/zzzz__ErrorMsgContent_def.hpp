#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/ErrorMsgContent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(ErrorMsgContent)
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFreeText;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class ErrorMsgContent;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cmp.ErrorMsgContent
class CORDL_TYPE ErrorMsgContent : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_ErrorCode)) ::Org::BouncyCastle::Asn1::DerInteger* ErrorCode;

  __declspec(property(get = get_ErrorDetails)) ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* ErrorDetails;

  __declspec(property(get = get_PkiStatusInfo)) ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* PkiStatusInfo;

  /// @brief Field errorCode, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_errorCode, put = __cordl_internal_set_errorCode)) ::Org::BouncyCastle::Asn1::DerInteger* errorCode;

  /// @brief Field errorDetails, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_errorDetails, put = __cordl_internal_set_errorDetails)) ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* errorDetails;

  /// @brief Field pkiStatusInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pkiStatusInfo, put = __cordl_internal_set_pkiStatusInfo)) ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* pkiStatusInfo;

  /// @brief Method GetInstance, addr 0x22f677c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent* New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* pkiStatusInfo);

  static inline ::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent* New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* pkiStatusInfo, ::Org::BouncyCastle::Asn1::DerInteger* errorCode,
                                                                          ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* errorDetails);

  static inline ::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x22f69a4, size 0x170, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_errorCode() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_errorCode();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* const& __cordl_internal_get_errorDetails() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*& __cordl_internal_get_errorDetails();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* const& __cordl_internal_get_pkiStatusInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*& __cordl_internal_get_pkiStatusInfo();

  constexpr void __cordl_internal_set_errorCode(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_errorDetails(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* value);

  constexpr void __cordl_internal_set_pkiStatusInfo(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* value);

  /// @brief Method .ctor, addr 0x22f68f8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* pkiStatusInfo);

  /// @brief Method .ctor, addr 0x22f6904, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* pkiStatusInfo, ::Org::BouncyCastle::Asn1::DerInteger* errorCode, ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* errorDetails);

  /// @brief Method .ctor, addr 0x22f64e4, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_ErrorCode, addr 0x22f6994, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_ErrorCode();

  /// @brief Method get_ErrorDetails, addr 0x22f699c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* get_ErrorDetails();

  /// @brief Method get_PkiStatusInfo, addr 0x22f698c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* get_PkiStatusInfo();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ErrorMsgContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ErrorMsgContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ErrorMsgContent(ErrorMsgContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ErrorMsgContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ErrorMsgContent(ErrorMsgContent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22 };

  /// @brief Field pkiStatusInfo, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* ___pkiStatusInfo;

  /// @brief Field errorCode, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___errorCode;

  /// @brief Field errorDetails, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* ___errorDetails;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent, ___pkiStatusInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent, ___errorCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent, ___errorDetails) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*, "Org.BouncyCastle.Asn1.Cmp", "ErrorMsgContent");
