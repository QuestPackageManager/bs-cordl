#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SmimeCapability)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Smime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(295))
// CS Name: ::Org.BouncyCastle.Asn1.Smime::SmimeCapability*
class CORDL_TYPE SmimeCapability : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field capabilityID, offset 0x10, size 0x8
  __declspec(property(get = __get_capabilityID, put = __set_capabilityID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* capabilityID;

  /// @brief Field parameters, offset 0x18, size 0x8
  __declspec(property(get = __get_parameters, put = __set_parameters))::Org::BouncyCastle::Asn1::Asn1Object* parameters;

  /// @brief Field PreferSignedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PreferSignedData, put = setStaticF_PreferSignedData))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PreferSignedData;

  /// @brief Field CannotDecryptAny, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CannotDecryptAny, put = setStaticF_CannotDecryptAny))::Org::BouncyCastle::Asn1::DerObjectIdentifier* CannotDecryptAny;

  /// @brief Field SmimeCapabilitiesVersions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SmimeCapabilitiesVersions, put = setStaticF_SmimeCapabilitiesVersions))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SmimeCapabilitiesVersions;

  /// @brief Field DesCbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DesCbc, put = setStaticF_DesCbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DesCbc;

  /// @brief Field DesEde3Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DesEde3Cbc, put = setStaticF_DesEde3Cbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DesEde3Cbc;

  /// @brief Field RC2Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RC2Cbc, put = setStaticF_RC2Cbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* RC2Cbc;

  __declspec(property(get = get_CapabilityID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* CapabilityID;

  __declspec(property(get = get_Parameters))::Org::BouncyCastle::Asn1::Asn1Object* Parameters;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_capabilityID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_capabilityID() const;

  constexpr void __set_capabilityID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& __get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Object*> const& __get_parameters() const;

  constexpr void __set_parameters(::Org::BouncyCastle::Asn1::Asn1Object* value);

  static inline void setStaticF_PreferSignedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PreferSignedData();

  static inline void setStaticF_CannotDecryptAny(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CannotDecryptAny();

  static inline void setStaticF_SmimeCapabilitiesVersions(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SmimeCapabilitiesVersions();

  static inline void setStaticF_DesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesCbc();

  static inline void setStaticF_DesEde3Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesEde3Cbc();

  static inline void setStaticF_RC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RC2Cbc();

  static inline ::Org::BouncyCastle::Asn1::Smime::SmimeCapability* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x10746ec, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Smime::SmimeCapability* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* capabilityID, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  /// @brief Method .ctor, addr 0x1074808, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* capabilityID, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters);

  /// @brief Method GetInstance, addr 0x1073cf4, size 0x148, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Smime::SmimeCapability* GetInstance(::System::Object* obj);

  /// @brief Method get_CapabilityID, addr 0x107489c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_CapabilityID();

  /// @brief Method get_Parameters, addr 0x10748a4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_Parameters();

  /// @brief Method ToAsn1Object, addr 0x10748ac, size 0x148, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "SmimeCapability", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmimeCapability(SmimeCapability&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmimeCapability", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmimeCapability(SmimeCapability const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmimeCapability();

public:
  /// @brief Field capabilityID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___capabilityID;

  /// @brief Field parameters, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Object* ___parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Smime::SmimeCapability, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Smime::SmimeCapability, ___capabilityID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Smime::SmimeCapability, ___parameters) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Smime
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Smime::SmimeCapability);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Smime::SmimeCapability*, "Org.BouncyCastle.Asn1.Smime", "SmimeCapability");
