#pragma once
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
// Type: Org.BouncyCastle.Asn1.X509::UserNotice
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(395))
// CS Name: ::Org.BouncyCastle.Asn1.X509::UserNotice*
class CORDL_TYPE UserNotice : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field noticeRef, offset 0x10, size 0x8
  __declspec(property(get = __get_noticeRef, put = __set_noticeRef))::Org::BouncyCastle::Asn1::X509::NoticeReference* noticeRef;

  /// @brief Field explicitText, offset 0x18, size 0x8
  __declspec(property(get = __get_explicitText, put = __set_explicitText))::Org::BouncyCastle::Asn1::X509::DisplayText* explicitText;

  __declspec(property(get = get_NoticeRef))::Org::BouncyCastle::Asn1::X509::NoticeReference* NoticeRef;

  __declspec(property(get = get_ExplicitText))::Org::BouncyCastle::Asn1::X509::DisplayText* ExplicitText;

  constexpr ::Org::BouncyCastle::Asn1::X509::NoticeReference*& __get_noticeRef();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::NoticeReference*> const& __get_noticeRef() const;

  constexpr void __set_noticeRef(::Org::BouncyCastle::Asn1::X509::NoticeReference* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::DisplayText*& __get_explicitText();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::DisplayText*> const& __get_explicitText() const;

  constexpr void __set_explicitText(::Org::BouncyCastle::Asn1::X509::DisplayText* value);

  static inline ::Org::BouncyCastle::Asn1::X509::UserNotice* New_ctor(::Org::BouncyCastle::Asn1::X509::NoticeReference* noticeRef, ::Org::BouncyCastle::Asn1::X509::DisplayText* explicitText);

  /// @brief Method .ctor, addr 0x119a46c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::NoticeReference* noticeRef, ::Org::BouncyCastle::Asn1::X509::DisplayText* explicitText);

  static inline ::Org::BouncyCastle::Asn1::X509::UserNotice* New_ctor(::Org::BouncyCastle::Asn1::X509::NoticeReference* noticeRef, ::StringW str);

  /// @brief Method .ctor, addr 0x119a498, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::NoticeReference* noticeRef, ::StringW str);

  static inline ::Org::BouncyCastle::Asn1::X509::UserNotice* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x119a514, size 0x208, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance, addr 0x119a71c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::UserNotice* GetInstance(::System::Object* obj);

  /// @brief Method get_NoticeRef, addr 0x119a7c0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::NoticeReference* get_NoticeRef();

  /// @brief Method get_ExplicitText, addr 0x119a7c8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::DisplayText* get_ExplicitText();

  /// @brief Method ToAsn1Object, addr 0x119a7d0, size 0x134, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "UserNotice", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserNotice(UserNotice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserNotice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserNotice(UserNotice const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserNotice();

public:
  /// @brief Field noticeRef, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::NoticeReference* ___noticeRef;

  /// @brief Field explicitText, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::DisplayText* ___explicitText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::UserNotice, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::UserNotice, ___noticeRef) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::UserNotice, ___explicitText) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::UserNotice);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::UserNotice*, "Org.BouncyCastle.Asn1.X509", "UserNotice");
