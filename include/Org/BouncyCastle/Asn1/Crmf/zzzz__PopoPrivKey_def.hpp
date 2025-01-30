#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Crmf/PopoPrivKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PopoPrivKey)
namespace Org::BouncyCastle::Asn1::Crmf {
class SubsequentMessage;
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
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoPrivKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable, Org.BouncyCastle.Asn1.IAsn1Choice
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Crmf.PopoPrivKey
class CORDL_TYPE PopoPrivKey : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Type)) int32_t Type;

  __declspec(property(get = get_Value)) ::Org::BouncyCastle::Asn1::Asn1Encodable* Value;

  /// @brief Field obj, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_obj, put = __cordl_internal_set_obj)) ::Org::BouncyCastle::Asn1::Asn1Encodable* obj;

  /// @brief Field tagNo, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_tagNo, put = __cordl_internal_set_tagNo)) int32_t tagNo;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetInstance, addr 0x231465c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged, bool isExplicit);

  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey* New_ctor(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* msg);

  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj);

  /// @brief Method ToAsn1Object, addr 0x2314718, size 0x6c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& __cordl_internal_get_obj() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_obj();

  constexpr int32_t const& __cordl_internal_get_tagNo() const;

  constexpr int32_t& __cordl_internal_get_tagNo();

  constexpr void __cordl_internal_set_obj(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  constexpr void __cordl_internal_set_tagNo(int32_t value);

  /// @brief Method .ctor, addr 0x23146d8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* msg);

  /// @brief Method .ctor, addr 0x23143d0, size 0x178, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj);

  /// @brief Method get_Type, addr 0x2314708, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Type();

  /// @brief Method get_Value, addr 0x2314710, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Value();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PopoPrivKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PopoPrivKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PopoPrivKey(PopoPrivKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PopoPrivKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PopoPrivKey(PopoPrivKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 118 };

  /// @brief Field agreeMAC offset 0xffffffff size 0x4
  static constexpr int32_t agreeMAC{ static_cast<int32_t>(0x3) };

  /// @brief Field dhMAC offset 0xffffffff size 0x4
  static constexpr int32_t dhMAC{ static_cast<int32_t>(0x2) };

  /// @brief Field encryptedKey offset 0xffffffff size 0x4
  static constexpr int32_t encryptedKey{ static_cast<int32_t>(0x4) };

  /// @brief Field subsequentMessage offset 0xffffffff size 0x4
  static constexpr int32_t subsequentMessage{ static_cast<int32_t>(0x1) };

  /// @brief Field thisMessage offset 0xffffffff size 0x4
  static constexpr int32_t thisMessage{ static_cast<int32_t>(0x0) };

  /// @brief Field tagNo, offset: 0x10, size: 0x4, def value: None
  int32_t ___tagNo;

  /// @brief Field obj, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___obj;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey, ___tagNo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey, ___obj) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey*, "Org.BouncyCastle.Asn1.Crmf", "PopoPrivKey");
