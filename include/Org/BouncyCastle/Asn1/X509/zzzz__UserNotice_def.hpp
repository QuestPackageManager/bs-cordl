#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/UserNotice.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UserNotice)
namespace Org::BouncyCastle::Asn1::X509 {
class DisplayText;
}
namespace Org::BouncyCastle::Asn1::X509 {
class NoticeReference;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class UserNotice;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::UserNotice);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.UserNotice
class CORDL_TYPE UserNotice : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_ExplicitText)) ::Org::BouncyCastle::Asn1::X509::DisplayText* ExplicitText;

  __declspec(property(get = get_NoticeRef)) ::Org::BouncyCastle::Asn1::X509::NoticeReference* NoticeRef;

  /// @brief Field explicitText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_explicitText, put = __cordl_internal_set_explicitText)) ::Org::BouncyCastle::Asn1::X509::DisplayText* explicitText;

  /// @brief Field noticeRef, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_noticeRef, put = __cordl_internal_set_noticeRef)) ::Org::BouncyCastle::Asn1::X509::NoticeReference* noticeRef;

  /// @brief Method GetInstance, addr 0x2610d80, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::UserNotice* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::UserNotice* New_ctor(::Org::BouncyCastle::Asn1::X509::NoticeReference* noticeRef, ::Org::BouncyCastle::Asn1::X509::DisplayText* explicitText);

  static inline ::Org::BouncyCastle::Asn1::X509::UserNotice* New_ctor(::Org::BouncyCastle::Asn1::X509::NoticeReference* noticeRef, ::StringW str);

  static inline ::Org::BouncyCastle::Asn1::X509::UserNotice* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2610e34, size 0x130, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::DisplayText* const& __cordl_internal_get_explicitText() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::DisplayText*& __cordl_internal_get_explicitText();

  constexpr ::Org::BouncyCastle::Asn1::X509::NoticeReference* const& __cordl_internal_get_noticeRef() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::NoticeReference*& __cordl_internal_get_noticeRef();

  constexpr void __cordl_internal_set_explicitText(::Org::BouncyCastle::Asn1::X509::DisplayText* value);

  constexpr void __cordl_internal_set_noticeRef(::Org::BouncyCastle::Asn1::X509::NoticeReference* value);

  /// @brief Method .ctor, addr 0x2610ae4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::NoticeReference* noticeRef, ::Org::BouncyCastle::Asn1::X509::DisplayText* explicitText);

  /// @brief Method .ctor, addr 0x2610b10, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::NoticeReference* noticeRef, ::StringW str);

  /// @brief Method .ctor, addr 0x2610b84, size 0x1fc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_ExplicitText, addr 0x2610e2c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::DisplayText* get_ExplicitText();

  /// @brief Method get_NoticeRef, addr 0x2610e24, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::NoticeReference* get_NoticeRef();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserNotice();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UserNotice", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserNotice(UserNotice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserNotice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserNotice(UserNotice const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 395 };

  /// @brief Field noticeRef, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::NoticeReference* ___noticeRef;

  /// @brief Field explicitText, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::DisplayText* ___explicitText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::UserNotice, ___noticeRef) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::UserNotice, ___explicitText) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::UserNotice, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::UserNotice);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::UserNotice*, "Org.BouncyCastle.Asn1.X509", "UserNotice");
