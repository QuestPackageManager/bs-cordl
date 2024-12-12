#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/NoticeReference.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NoticeReference)
namespace Org::BouncyCastle::Asn1::X509 {
class DisplayText;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
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
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class NoticeReference;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::NoticeReference);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.NoticeReference
class CORDL_TYPE NoticeReference : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Organization)) ::Org::BouncyCastle::Asn1::X509::DisplayText* Organization;

  /// @brief Field noticeNumbers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_noticeNumbers, put = __cordl_internal_set_noticeNumbers)) ::Org::BouncyCastle::Asn1::Asn1Sequence* noticeNumbers;

  /// @brief Field organization, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_organization, put = __cordl_internal_set_organization)) ::Org::BouncyCastle::Asn1::X509::DisplayText* organization;

  /// @brief Method ConvertVector, addr 0x2609748, size 0x45c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ConvertVector(::System::Collections::IList* numbers);

  /// @brief Method GetInstance, addr 0x2609dd8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::NoticeReference* GetInstance(::System::Object* obj);

  /// @brief Method GetNoticeNumbers, addr 0x2609e84, size 0x114, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::DerInteger*, ::Array<::Org::BouncyCastle::Asn1::DerInteger*>*> GetNoticeNumbers();

  static inline ::Org::BouncyCastle::Asn1::X509::NoticeReference* New_ctor(::Org::BouncyCastle::Asn1::X509::DisplayText* organization, ::Org::BouncyCastle::Asn1::Asn1EncodableVector* noticeNumbers);

  static inline ::Org::BouncyCastle::Asn1::X509::NoticeReference* New_ctor(::StringW organization, ::Org::BouncyCastle::Asn1::Asn1EncodableVector* noticeNumbers);

  static inline ::Org::BouncyCastle::Asn1::X509::NoticeReference* New_ctor(::StringW organization, ::System::Collections::IList* numbers);

  static inline ::Org::BouncyCastle::Asn1::X509::NoticeReference* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2609f98, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_noticeNumbers() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_noticeNumbers();

  constexpr ::Org::BouncyCastle::Asn1::X509::DisplayText* const& __cordl_internal_get_organization() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::DisplayText*& __cordl_internal_get_organization();

  constexpr void __cordl_internal_set_noticeNumbers(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_organization(::Org::BouncyCastle::Asn1::X509::DisplayText* value);

  /// @brief Method .ctor, addr 0x2609c44, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::DisplayText* organization, ::Org::BouncyCastle::Asn1::Asn1EncodableVector* noticeNumbers);

  /// @brief Method .ctor, addr 0x2609bd4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW organization, ::Org::BouncyCastle::Asn1::Asn1EncodableVector* noticeNumbers);

  /// @brief Method .ctor, addr 0x2609ba4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW organization, ::System::Collections::IList* numbers);

  /// @brief Method .ctor, addr 0x2609cc0, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Organization, addr 0x2609e7c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::DisplayText* get_Organization();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoticeReference();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoticeReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoticeReference(NoticeReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoticeReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoticeReference(NoticeReference const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 371 };

  /// @brief Field organization, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::DisplayText* ___organization;

  /// @brief Field noticeNumbers, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___noticeNumbers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::NoticeReference, ___organization) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::NoticeReference, ___noticeNumbers) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::NoticeReference, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::NoticeReference);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::NoticeReference*, "Org.BouncyCastle.Asn1.X509", "NoticeReference");
