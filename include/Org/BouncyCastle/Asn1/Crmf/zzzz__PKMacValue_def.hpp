#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Crmf/PKMacValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(PKMacValue)
namespace Org::BouncyCastle::Asn1::Cmp {
class PbmParameter;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class PKMacValue;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::PKMacValue);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Crmf.PKMacValue
class CORDL_TYPE PKMacValue : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_AlgID)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* AlgID;

  __declspec(property(get = get_MacValue)) ::Org::BouncyCastle::Asn1::DerBitString* MacValue;

  /// @brief Field algID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_algID, put = __cordl_internal_set_algID)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID;

  /// @brief Field macValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_macValue, put = __cordl_internal_set_macValue)) ::Org::BouncyCastle::Asn1::DerBitString* macValue;

  /// @brief Method GetInstance, addr 0x2315518, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x231539c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID, ::Org::BouncyCastle::Asn1::DerBitString* macValue);

  static inline ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* New_ctor(::Org::BouncyCastle::Asn1::Cmp::PbmParameter* pbmParams, ::Org::BouncyCastle::Asn1::DerBitString* macValue);

  static inline ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2315618, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_algID() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_algID();

  constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& __cordl_internal_get_macValue() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_macValue();

  constexpr void __cordl_internal_set_algID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_macValue(::Org::BouncyCastle::Asn1::DerBitString* value);

  /// @brief Method .ctor, addr 0x23155dc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID, ::Org::BouncyCastle::Asn1::DerBitString* macValue);

  /// @brief Method .ctor, addr 0x2315530, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::PbmParameter* pbmParams, ::Org::BouncyCastle::Asn1::DerBitString* macValue);

  /// @brief Method .ctor, addr 0x23152e8, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_AlgID, addr 0x2315608, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_AlgID();

  /// @brief Method get_MacValue, addr 0x2315610, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_MacValue();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PKMacValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PKMacValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PKMacValue(PKMacValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PKMacValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PKMacValue(PKMacValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 117 };

  /// @brief Field algID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___algID;

  /// @brief Field macValue, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___macValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::PKMacValue, ___algID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::PKMacValue, ___macValue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::PKMacValue, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::PKMacValue);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::PKMacValue*, "Org.BouncyCastle.Asn1.Crmf", "PKMacValue");
