#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NoticeReference)
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class DisplayText;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class NoticeReference;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::NoticeReference);
// Type: Org.BouncyCastle.Asn1.X509::NoticeReference
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(371))
// CS Name: ::Org.BouncyCastle.Asn1.X509::NoticeReference*
class CORDL_TYPE NoticeReference : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field organization, offset 0x10, size 0x8
  __declspec(property(get = __get_organization, put = __set_organization))::Org::BouncyCastle::Asn1::X509::DisplayText* organization;

  /// @brief Field noticeNumbers, offset 0x18, size 0x8
  __declspec(property(get = __get_noticeNumbers, put = __set_noticeNumbers))::Org::BouncyCastle::Asn1::Asn1Sequence* noticeNumbers;

  __declspec(property(get = get_Organization))::Org::BouncyCastle::Asn1::X509::DisplayText* Organization;

  constexpr ::Org::BouncyCastle::Asn1::X509::DisplayText*& __get_organization();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::DisplayText*> const& __get_organization() const;

  constexpr void __set_organization(::Org::BouncyCastle::Asn1::X509::DisplayText* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_noticeNumbers();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_noticeNumbers() const;

  constexpr void __set_noticeNumbers(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method ConvertVector addr 0x1192e8c size 0x47c virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ConvertVector(::System::Collections::IList* numbers);

  static inline ::Org::BouncyCastle::Asn1::X509::NoticeReference* New_ctor(::StringW organization, ::System::Collections::IList* numbers);

  /// @brief Method .ctor addr 0x1193308 size 0x30 virtual false final false
  inline void _ctor(::StringW organization, ::System::Collections::IList* numbers);

  static inline ::Org::BouncyCastle::Asn1::X509::NoticeReference* New_ctor(::StringW organization, ::Org::BouncyCastle::Asn1::Asn1EncodableVector* noticeNumbers);

  /// @brief Method .ctor addr 0x1193338 size 0x78 virtual false final false
  inline void _ctor(::StringW organization, ::Org::BouncyCastle::Asn1::Asn1EncodableVector* noticeNumbers);

  static inline ::Org::BouncyCastle::Asn1::X509::NoticeReference* New_ctor(::Org::BouncyCastle::Asn1::X509::DisplayText* organization, ::Org::BouncyCastle::Asn1::Asn1EncodableVector* noticeNumbers);

  /// @brief Method .ctor addr 0x11933b0 size 0x84 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::DisplayText* organization, ::Org::BouncyCastle::Asn1::Asn1EncodableVector* noticeNumbers);

  static inline ::Org::BouncyCastle::Asn1::X509::NoticeReference* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x1193434 size 0x11c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance addr 0x1193550 size 0xa4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::NoticeReference* GetInstance(::System::Object* obj);

  /// @brief Method get_Organization addr 0x11935f4 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::DisplayText* get_Organization();

  /// @brief Method GetNoticeNumbers addr 0x11935fc size 0x114 virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::DerInteger*, ::Array<::Org::BouncyCastle::Asn1::DerInteger*>*> GetNoticeNumbers();

  /// @brief Method ToAsn1Object addr 0x1193710 size 0xf0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "NoticeReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoticeReference(NoticeReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoticeReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoticeReference(NoticeReference const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoticeReference();

public:
  /// @brief Field organization, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::DisplayText* ___organization;

  /// @brief Field noticeNumbers, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___noticeNumbers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::NoticeReference, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::NoticeReference);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::NoticeReference*, "Org.BouncyCastle.Asn1.X509", "NoticeReference");
