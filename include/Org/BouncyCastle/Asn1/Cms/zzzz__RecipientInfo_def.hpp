#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/RecipientInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(RecipientInfo)
namespace Org::BouncyCastle::Asn1::Cms {
class KekRecipientInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class KeyAgreeRecipientInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class KeyTransRecipientInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OtherRecipientInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class PasswordRecipientInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::RecipientInfo);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cms.RecipientInfo
class CORDL_TYPE RecipientInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Info)) ::Org::BouncyCastle::Asn1::Asn1Encodable* Info;

  __declspec(property(get = get_IsTagged)) bool IsTagged;

  __declspec(property(get = get_Version)) ::Org::BouncyCastle::Asn1::DerInteger* Version;

  /// @brief Field info, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_info, put = __cordl_internal_set_info)) ::Org::BouncyCastle::Asn1::Asn1Encodable* info;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetInstance, addr 0x32339ec, size 0x1b0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* GetInstance(::System::Object* o);

  /// @brief Method GetKekInfo, addr 0x3238dcc, size 0x28, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* GetKekInfo(::Org::BouncyCastle::Asn1::Asn1TaggedObject* o);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Object* info);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* info);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* info);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo* info);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo* info);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* info);

  /// @brief Method ToAsn1Object, addr 0x3238fc0, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& __cordl_internal_get_info() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_info();

  constexpr void __cordl_internal_set_info(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method .ctor, addr 0x3238dc4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Object* info);

  /// @brief Method .ctor, addr 0x3238c74, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* info);

  /// @brief Method .ctor, addr 0x3238c04, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* info);

  /// @brief Method .ctor, addr 0x3238bfc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo* info);

  /// @brief Method .ctor, addr 0x3238d54, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo* info);

  /// @brief Method .ctor, addr 0x3238ce4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* info);

  /// @brief Method get_Info, addr 0x3238e74, size 0x14c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Info();

  /// @brief Method get_IsTagged, addr 0x3238df4, size 0x80, virtual false, abstract: false, final false
  inline bool get_IsTagged();

  /// @brief Method get_Version, addr 0x3233b9c, size 0x178, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecipientInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecipientInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecipientInfo(RecipientInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecipientInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecipientInfo(RecipientInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 90 };

  /// @brief Field info, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___info;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::RecipientInfo, ___info) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::RecipientInfo, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::RecipientInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::RecipientInfo*, "Org.BouncyCastle.Asn1.Cms", "RecipientInfo");
