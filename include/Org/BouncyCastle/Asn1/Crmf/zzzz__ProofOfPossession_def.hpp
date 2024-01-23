#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProofOfPossession)
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoPrivKey;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoSigningKey;
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
class IAsn1Choice;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class ProofOfPossession;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession);
// Type: Org.BouncyCastle.Asn1.Crmf::ProofOfPossession
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(121))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::ProofOfPossession*
class CORDL_TYPE ProofOfPossession : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field tagNo, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_tagNo, put = __cordl_internal_set_tagNo)) int32_t tagNo;

  /// @brief Field obj, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_obj, put = __cordl_internal_set_obj))::Org::BouncyCastle::Asn1::Asn1Encodable* obj;

  __declspec(property(get = get_Type)) int32_t Type;

  __declspec(property(get = get_Object))::Org::BouncyCastle::Asn1::Asn1Encodable* Object;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

  constexpr int32_t& __cordl_internal_get_tagNo();

  constexpr int32_t const& __cordl_internal_get_tagNo() const;

  constexpr void __cordl_internal_set_tagNo(int32_t value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_obj();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __cordl_internal_get_obj() const;

  constexpr void __cordl_internal_set_obj(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  static inline ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged);

  /// @brief Method .ctor, addr 0xe886b4, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged);

  /// @brief Method GetInstance, addr 0xe8428c, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* New_ctor();

  /// @brief Method .ctor, addr 0xe88804, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* New_ctor(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey* Poposk);

  /// @brief Method .ctor, addr 0xe88874, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey* Poposk);

  static inline ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* New_ctor(int32_t type, ::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey* privkey);

  /// @brief Method .ctor, addr 0xe888a4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t type, ::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey* privkey);

  /// @brief Method get_Type, addr 0xe888d4, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Type();

  /// @brief Method get_Object, addr 0xe888dc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Object();

  /// @brief Method ToAsn1Object, addr 0xe888e4, size 0x74, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "ProofOfPossession", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProofOfPossession(ProofOfPossession&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProofOfPossession", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProofOfPossession(ProofOfPossession const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProofOfPossession();

public:
  /// @brief Field tagNo, offset: 0x10, size: 0x4, def value: None
  int32_t ___tagNo;

  /// @brief Field obj, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___obj;

  /// @brief Field TYPE_RA_VERIFIED offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_RA_VERIFIED{ static_cast<int32_t>(0x0) };

  /// @brief Field TYPE_SIGNING_KEY offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_SIGNING_KEY{ static_cast<int32_t>(0x1) };

  /// @brief Field TYPE_KEY_ENCIPHERMENT offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_KEY_ENCIPHERMENT{ static_cast<int32_t>(0x2) };

  /// @brief Field TYPE_KEY_AGREEMENT offset 0xffffffff size 0x4
  static constexpr int32_t TYPE_KEY_AGREEMENT{ static_cast<int32_t>(0x3) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession, ___tagNo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession, ___obj) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession*, "Org.BouncyCastle.Asn1.Crmf", "ProofOfPossession");
