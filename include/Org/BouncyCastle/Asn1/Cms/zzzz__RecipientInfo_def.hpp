#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(RecipientInfo)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::Cms {
class KekRecipientInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class PasswordRecipientInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1::Cms {
class KeyAgreeRecipientInfo;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Cms {
class KeyTransRecipientInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OtherRecipientInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::RecipientInfo);
// Type: Org.BouncyCastle.Asn1.Cms::RecipientInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(90))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::RecipientInfo*
class CORDL_TYPE RecipientInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field info, offset 0x10, size 0x8
  __declspec(property(get = __get_info, put = __set_info))::Org::BouncyCastle::Asn1::Asn1Encodable* info;

  __declspec(property(get = get_Version))::Org::BouncyCastle::Asn1::DerInteger* Version;

  __declspec(property(get = get_IsTagged)) bool IsTagged;

  __declspec(property(get = get_Info))::Org::BouncyCastle::Asn1::Asn1Encodable* Info;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __get_info();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __get_info() const;

  constexpr void __set_info(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo* info);

  /// @brief Method .ctor addr 0xe078f4 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo* info);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* info);

  /// @brief Method .ctor addr 0xe0791c size 0x84 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* info);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* info);

  /// @brief Method .ctor addr 0xe079a0 size 0x84 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* info);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* info);

  /// @brief Method .ctor addr 0xe07a24 size 0x84 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo* info);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo* info);

  /// @brief Method .ctor addr 0xe07aa8 size 0x84 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo* info);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Object* info);

  /// @brief Method .ctor addr 0xe07b2c size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Object* info);

  /// @brief Method GetInstance addr 0xe0244c size 0x1b4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* GetInstance(::System::Object* o);

  /// @brief Method get_Version addr 0xe02600 size 0x16c virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  /// @brief Method get_IsTagged addr 0xe07b78 size 0x7c virtual false final false
  inline bool get_IsTagged();

  /// @brief Method get_Info addr 0xe07bf4 size 0x140 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Info();

  /// @brief Method GetKekInfo addr 0xe07b54 size 0x24 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* GetKekInfo(::Org::BouncyCastle::Asn1::Asn1TaggedObject* o);

  /// @brief Method ToAsn1Object addr 0xe07d34 size 0x20 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "RecipientInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecipientInfo(RecipientInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecipientInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecipientInfo(RecipientInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecipientInfo();

public:
  /// @brief Field info, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___info;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::RecipientInfo, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::RecipientInfo, ___info) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::RecipientInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::RecipientInfo*, "Org.BouncyCastle.Asn1.Cms", "RecipientInfo");
