#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Smime/SmimeCapability.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SmimeCapability)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Smime {
class SmimeCapability;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Smime::SmimeCapability);
// Type: Org.BouncyCastle.Asn1.Smime::SmimeCapability
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Smime {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Smime::SmimeCapability*
class CORDL_TYPE SmimeCapability : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field CannotDecryptAny, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CannotDecryptAny, put = setStaticF_CannotDecryptAny)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* CannotDecryptAny;

  __declspec(property(get = get_CapabilityID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* CapabilityID;

  /// @brief Field DesCbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DesCbc, put = setStaticF_DesCbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* DesCbc;

  /// @brief Field DesEde3Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DesEde3Cbc, put = setStaticF_DesEde3Cbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* DesEde3Cbc;

  __declspec(property(get = get_Parameters)) ::Org::BouncyCastle::Asn1::Asn1Object* Parameters;

  /// @brief Field PreferSignedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PreferSignedData, put = setStaticF_PreferSignedData)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* PreferSignedData;

  /// @brief Field RC2Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RC2Cbc, put = setStaticF_RC2Cbc)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* RC2Cbc;

  /// @brief Field SmimeCapabilitiesVersions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SmimeCapabilitiesVersions, put = setStaticF_SmimeCapabilitiesVersions)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* SmimeCapabilitiesVersions;

  /// @brief Field capabilityID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_capabilityID, put = __cordl_internal_set_capabilityID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* capabilityID;

  /// @brief Field parameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters, put = __cordl_internal_set_parameters)) ::Org::BouncyCastle::Asn1::Asn1Object* parameters;

  /// @brief Method GetInstance, addr 0x24c0004, size 0x13c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Smime::SmimeCapability* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Smime::SmimeCapability* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* capabilityID, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  static inline ::Org::BouncyCastle::Asn1::Smime::SmimeCapability* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x24c0b80, size 0x144, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_capabilityID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_capabilityID() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& __cordl_internal_get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Object*> const& __cordl_internal_get_parameters() const;

  constexpr void __cordl_internal_set_capabilityID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_parameters(::Org::BouncyCastle::Asn1::Asn1Object* value);

  /// @brief Method .ctor, addr 0x24c0ae0, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* capabilityID, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  /// @brief Method .ctor, addr 0x24c09c4, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CannotDecryptAny();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesCbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesEde3Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PreferSignedData();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RC2Cbc();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SmimeCapabilitiesVersions();

  /// @brief Method get_CapabilityID, addr 0x24c0b70, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_CapabilityID();

  /// @brief Method get_Parameters, addr 0x24c0b78, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_Parameters();

  static inline void setStaticF_CannotDecryptAny(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_DesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_DesEde3Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_PreferSignedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_RC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_SmimeCapabilitiesVersions(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmimeCapability();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SmimeCapability", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmimeCapability(SmimeCapability&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmimeCapability", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmimeCapability(SmimeCapability const&) = delete;

  /// @brief Field capabilityID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___capabilityID;

  /// @brief Field parameters, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Object* ___parameters;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 295 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Smime::SmimeCapability, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Smime::SmimeCapability, ___capabilityID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Smime::SmimeCapability, ___parameters) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Smime
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Smime::SmimeCapability);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Smime::SmimeCapability*, "Org.BouncyCastle.Asn1.Smime", "SmimeCapability");
