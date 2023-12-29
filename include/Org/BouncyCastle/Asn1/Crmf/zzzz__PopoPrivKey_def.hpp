#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PopoPrivKey)
namespace Org::BouncyCastle::Asn1::Crmf {
class SubsequentMessage;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoPrivKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey);
// Type: Org.BouncyCastle.Asn1.Crmf::PopoPrivKey
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(118))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::PopoPrivKey*
class CORDL_TYPE PopoPrivKey : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field tagNo, offset 0x10, size 0x4
  __declspec(property(get = __get_tagNo, put = __set_tagNo)) int32_t tagNo;

  /// @brief Field obj, offset 0x18, size 0x8
  __declspec(property(get = __get_obj, put = __set_obj))::Org::BouncyCastle::Asn1::Asn1Encodable* obj;

  __declspec(property(get = get_Type)) int32_t Type;

  __declspec(property(get = get_Value))::Org::BouncyCastle::Asn1::Asn1Encodable* Value;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  constexpr int32_t& __get_tagNo();

  constexpr int32_t const& __get_tagNo() const;

  constexpr void __set_tagNo(int32_t value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __get_obj();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __get_obj() const;

  constexpr void __set_obj(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj);

  /// @brief Method .ctor addr 0xe127e8 size 0x17c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj);

  /// @brief Method GetInstance addr 0xe12a74 size 0x80 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged, bool isExplicit);

  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey* New_ctor(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* msg);

  /// @brief Method .ctor addr 0xe12af4 size 0x30 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* msg);

  /// @brief Method get_Type addr 0xe12b24 size 0x8 virtual true final false
  inline int32_t get_Type();

  /// @brief Method get_Value addr 0xe12b2c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Value();

  /// @brief Method ToAsn1Object addr 0xe12b34 size 0x74 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "PopoPrivKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PopoPrivKey(PopoPrivKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PopoPrivKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PopoPrivKey(PopoPrivKey const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PopoPrivKey();

public:
  /// @brief Field tagNo, offset: 0x10, size: 0x4, def value: None
  int32_t ___tagNo;

  /// @brief Field obj, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___obj;

  /// @brief Field thisMessage offset 0xffffffff size 0x4
  static constexpr int32_t thisMessage{ static_cast<int32_t>(0x0) };

  /// @brief Field subsequentMessage offset 0xffffffff size 0x4
  static constexpr int32_t subsequentMessage{ static_cast<int32_t>(0x1) };

  /// @brief Field dhMAC offset 0xffffffff size 0x4
  static constexpr int32_t dhMAC{ static_cast<int32_t>(0x2) };

  /// @brief Field agreeMAC offset 0xffffffff size 0x4
  static constexpr int32_t agreeMAC{ static_cast<int32_t>(0x3) };

  /// @brief Field encryptedKey offset 0xffffffff size 0x4
  static constexpr int32_t encryptedKey{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey, ___tagNo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey, ___obj) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey*, "Org.BouncyCastle.Asn1.Crmf", "PopoPrivKey");
