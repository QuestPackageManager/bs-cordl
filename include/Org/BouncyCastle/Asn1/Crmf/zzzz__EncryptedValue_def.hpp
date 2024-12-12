#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Crmf/EncryptedValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(EncryptedValue)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class EncryptedValue;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Crmf.EncryptedValue
class CORDL_TYPE EncryptedValue : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_EncSymmKey)) ::Org::BouncyCastle::Asn1::DerBitString* EncSymmKey;

  __declspec(property(get = get_EncValue)) ::Org::BouncyCastle::Asn1::DerBitString* EncValue;

  __declspec(property(get = get_IntendedAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* IntendedAlg;

  __declspec(property(get = get_KeyAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* KeyAlg;

  __declspec(property(get = get_SymmAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* SymmAlg;

  __declspec(property(get = get_ValueHint)) ::Org::BouncyCastle::Asn1::Asn1OctetString* ValueHint;

  /// @brief Field encSymmKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_encSymmKey, put = __cordl_internal_set_encSymmKey)) ::Org::BouncyCastle::Asn1::DerBitString* encSymmKey;

  /// @brief Field encValue, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_encValue, put = __cordl_internal_set_encValue)) ::Org::BouncyCastle::Asn1::DerBitString* encValue;

  /// @brief Field intendedAlg, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_intendedAlg, put = __cordl_internal_set_intendedAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* intendedAlg;

  /// @brief Field keyAlg, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_keyAlg, put = __cordl_internal_set_keyAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyAlg;

  /// @brief Field symmAlg, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_symmAlg, put = __cordl_internal_set_symmAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* symmAlg;

  /// @brief Field valueHint, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_valueHint, put = __cordl_internal_set_valueHint)) ::Org::BouncyCastle::Asn1::Asn1OctetString* valueHint;

  /// @brief Method GetInstance, addr 0x2311b9c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* intendedAlg,
                                                                          ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* symmAlg, ::Org::BouncyCastle::Asn1::DerBitString* encSymmKey,
                                                                          ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyAlg, ::Org::BouncyCastle::Asn1::Asn1OctetString* valueHint,
                                                                          ::Org::BouncyCastle::Asn1::DerBitString* encValue);

  static inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2311fb8, size 0x114, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& __cordl_internal_get_encSymmKey() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_encSymmKey();

  constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& __cordl_internal_get_encValue() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_encValue();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_intendedAlg() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_intendedAlg();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_keyAlg() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_keyAlg();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_symmAlg() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_symmAlg();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_valueHint() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_valueHint();

  constexpr void __cordl_internal_set_encSymmKey(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr void __cordl_internal_set_encValue(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr void __cordl_internal_set_intendedAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_keyAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_symmAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_valueHint(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method .ctor, addr 0x2311ee8, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* intendedAlg, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* symmAlg,
                    ::Org::BouncyCastle::Asn1::DerBitString* encSymmKey, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyAlg, ::Org::BouncyCastle::Asn1::Asn1OctetString* valueHint,
                    ::Org::BouncyCastle::Asn1::DerBitString* encValue);

  /// @brief Method .ctor, addr 0x2311cf0, size 0x1f8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_EncSymmKey, addr 0x2311f98, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_EncSymmKey();

  /// @brief Method get_EncValue, addr 0x2311fb0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_EncValue();

  /// @brief Method get_IntendedAlg, addr 0x2311f88, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_IntendedAlg();

  /// @brief Method get_KeyAlg, addr 0x2311fa0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_KeyAlg();

  /// @brief Method get_SymmAlg, addr 0x2311f90, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SymmAlg();

  /// @brief Method get_ValueHint, addr 0x2311fa8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_ValueHint();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptedValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncryptedValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptedValue(EncryptedValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptedValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptedValue(EncryptedValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 113 };

  /// @brief Field intendedAlg, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___intendedAlg;

  /// @brief Field symmAlg, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___symmAlg;

  /// @brief Field encSymmKey, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___encSymmKey;

  /// @brief Field keyAlg, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___keyAlg;

  /// @brief Field valueHint, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___valueHint;

  /// @brief Field encValue, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___encValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue, ___intendedAlg) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue, ___symmAlg) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue, ___encSymmKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue, ___keyAlg) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue, ___valueHint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue, ___encValue) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*, "Org.BouncyCastle.Asn1.Crmf", "EncryptedValue");
