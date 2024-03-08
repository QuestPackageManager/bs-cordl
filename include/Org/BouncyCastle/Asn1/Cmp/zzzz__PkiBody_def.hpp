#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkiBody)
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
class IAsn1Choice;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiBody;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::PkiBody);
// Type: Org.BouncyCastle.Asn1.Cmp::PkiBody
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::PkiBody*
class CORDL_TYPE PkiBody : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Content))::Org::BouncyCastle::Asn1::Asn1Encodable* Content;

  __declspec(property(get = get_Type)) int32_t Type;

  /// @brief Field body, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_body, put = __cordl_internal_set_body))::Org::BouncyCastle::Asn1::Asn1Encodable* body;

  /// @brief Field tagNo, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_tagNo, put = __cordl_internal_set_tagNo)) int32_t tagNo;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetBodyForType, addr 0xefa7e0, size 0x15c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetBodyForType(int32_t type, ::Org::BouncyCastle::Asn1::Asn1Encodable* o);

  /// @brief Method GetInstance, addr 0xefa608, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiBody* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiBody* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiBody* New_ctor(int32_t type, ::Org::BouncyCastle::Asn1::Asn1Encodable* content);

  /// @brief Method ToAsn1Object, addr 0xefb72c, size 0x74, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_body();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __cordl_internal_get_body() const;

  constexpr int32_t const& __cordl_internal_get_tagNo() const;

  constexpr int32_t& __cordl_internal_get_tagNo();

  constexpr void __cordl_internal_set_body(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  constexpr void __cordl_internal_set_tagNo(int32_t value);

  /// @brief Method .ctor, addr 0xefa790, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged);

  /// @brief Method .ctor, addr 0xefa93c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(int32_t type, ::Org::BouncyCastle::Asn1::Asn1Encodable* content);

  /// @brief Method get_Content, addr 0xefb724, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Content();

  /// @brief Method get_Type, addr 0xefb71c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Type();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkiBody();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkiBody", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkiBody(PkiBody&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkiBody", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkiBody(PkiBody const&) = delete;

  /// @brief Field tagNo, offset: 0x10, size: 0x4, def value: None
  int32_t ___tagNo;

  /// @brief Field body, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___body;

  /// @brief Field TYPE_CA_KEY_UPDATE_ANN offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_CA_KEY_UPDATE_ANN{ static_cast<int32_t>(0xf) };

  /// @brief Field TYPE_CERT_ANN offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_CERT_ANN{ static_cast<int32_t>(0x10) };

  /// @brief Field TYPE_CERT_CONFIRM offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_CERT_CONFIRM{ static_cast<int32_t>(0x18) };

  /// @brief Field TYPE_CERT_REP offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_CERT_REP{ static_cast<int32_t>(0x3) };

  /// @brief Field TYPE_CERT_REQ offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_CERT_REQ{ static_cast<int32_t>(0x2) };

  /// @brief Field TYPE_CONFIRM offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_CONFIRM{ static_cast<int32_t>(0x13) };

  /// @brief Field TYPE_CRL_ANN offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_CRL_ANN{ static_cast<int32_t>(0x12) };

  /// @brief Field TYPE_CROSS_CERT_REP offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_CROSS_CERT_REP{ static_cast<int32_t>(0xe) };

  /// @brief Field TYPE_CROSS_CERT_REQ offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_CROSS_CERT_REQ{ static_cast<int32_t>(0xd) };

  /// @brief Field TYPE_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_ERROR{ static_cast<int32_t>(0x17) };

  /// @brief Field TYPE_GEN_MSG offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_GEN_MSG{ static_cast<int32_t>(0x15) };

  /// @brief Field TYPE_GEN_REP offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_GEN_REP{ static_cast<int32_t>(0x16) };

  /// @brief Field TYPE_INIT_REP offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_INIT_REP{ static_cast<int32_t>(0x1) };

  /// @brief Field TYPE_INIT_REQ offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_INIT_REQ{ static_cast<int32_t>(0x0) };

  /// @brief Field TYPE_KEY_RECOVERY_REP offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_KEY_RECOVERY_REP{ static_cast<int32_t>(0xa) };

  /// @brief Field TYPE_KEY_RECOVERY_REQ offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_KEY_RECOVERY_REQ{ static_cast<int32_t>(0x9) };

  /// @brief Field TYPE_KEY_UPDATE_REP offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_KEY_UPDATE_REP{ static_cast<int32_t>(0x8) };

  /// @brief Field TYPE_KEY_UPDATE_REQ offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_KEY_UPDATE_REQ{ static_cast<int32_t>(0x7) };

  /// @brief Field TYPE_NESTED offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_NESTED{ static_cast<int32_t>(0x14) };

  /// @brief Field TYPE_P10_CERT_REQ offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_P10_CERT_REQ{ static_cast<int32_t>(0x4) };

  /// @brief Field TYPE_POLL_REP offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_POLL_REP{ static_cast<int32_t>(0x1a) };

  /// @brief Field TYPE_POLL_REQ offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_POLL_REQ{ static_cast<int32_t>(0x19) };

  /// @brief Field TYPE_POPO_CHALL offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_POPO_CHALL{ static_cast<int32_t>(0x5) };

  /// @brief Field TYPE_POPO_REP offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_POPO_REP{ static_cast<int32_t>(0x6) };

  /// @brief Field TYPE_REVOCATION_ANN offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_REVOCATION_ANN{ static_cast<int32_t>(0x11) };

  /// @brief Field TYPE_REVOCATION_REP offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_REVOCATION_REP{ static_cast<int32_t>(0xc) };

  /// @brief Field TYPE_REVOCATION_REQ offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_REVOCATION_REQ{ static_cast<int32_t>(0xb) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::PkiBody, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiBody, ___tagNo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiBody, ___body) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PkiBody);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PkiBody*, "Org.BouncyCastle.Asn1.Cmp", "PkiBody");
