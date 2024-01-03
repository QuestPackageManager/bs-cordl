#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(EncryptedValue)
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
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
// Type: Org.BouncyCastle.Asn1.Crmf::EncryptedValue
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(113))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::EncryptedValue*
class CORDL_TYPE EncryptedValue : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field intendedAlg, offset 0x10, size 0x8
  __declspec(property(get = __get_intendedAlg, put = __set_intendedAlg))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* intendedAlg;

  /// @brief Field symmAlg, offset 0x18, size 0x8
  __declspec(property(get = __get_symmAlg, put = __set_symmAlg))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* symmAlg;

  /// @brief Field encSymmKey, offset 0x20, size 0x8
  __declspec(property(get = __get_encSymmKey, put = __set_encSymmKey))::Org::BouncyCastle::Asn1::DerBitString* encSymmKey;

  /// @brief Field keyAlg, offset 0x28, size 0x8
  __declspec(property(get = __get_keyAlg, put = __set_keyAlg))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyAlg;

  /// @brief Field valueHint, offset 0x30, size 0x8
  __declspec(property(get = __get_valueHint, put = __set_valueHint))::Org::BouncyCastle::Asn1::Asn1OctetString* valueHint;

  /// @brief Field encValue, offset 0x38, size 0x8
  __declspec(property(get = __get_encValue, put = __set_encValue))::Org::BouncyCastle::Asn1::DerBitString* encValue;

  __declspec(property(get = get_IntendedAlg))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* IntendedAlg;

  __declspec(property(get = get_SymmAlg))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* SymmAlg;

  __declspec(property(get = get_EncSymmKey))::Org::BouncyCastle::Asn1::DerBitString* EncSymmKey;

  __declspec(property(get = get_KeyAlg))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* KeyAlg;

  __declspec(property(get = get_ValueHint))::Org::BouncyCastle::Asn1::Asn1OctetString* ValueHint;

  __declspec(property(get = get_EncValue))::Org::BouncyCastle::Asn1::DerBitString* EncValue;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_intendedAlg();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_intendedAlg() const;

  constexpr void __set_intendedAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_symmAlg();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_symmAlg() const;

  constexpr void __set_symmAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_encSymmKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_encSymmKey() const;

  constexpr void __set_encSymmKey(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_keyAlg();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_keyAlg() const;

  constexpr void __set_keyAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_valueHint();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_valueHint() const;

  constexpr void __set_valueHint(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_encValue();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_encValue() const;

  constexpr void __set_encValue(::Org::BouncyCastle::Asn1::DerBitString* value);

  static inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe86298, size 0x1f8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance, addr 0xe8613c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* intendedAlg,
                                                                          ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* symmAlg, ::Org::BouncyCastle::Asn1::DerBitString* encSymmKey,
                                                                          ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyAlg, ::Org::BouncyCastle::Asn1::Asn1OctetString* valueHint,
                                                                          ::Org::BouncyCastle::Asn1::DerBitString* encValue);

  /// @brief Method .ctor, addr 0xe86490, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* intendedAlg, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* symmAlg,
                    ::Org::BouncyCastle::Asn1::DerBitString* encSymmKey, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyAlg, ::Org::BouncyCastle::Asn1::Asn1OctetString* valueHint,
                    ::Org::BouncyCastle::Asn1::DerBitString* encValue);

  /// @brief Method get_IntendedAlg, addr 0xe86534, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_IntendedAlg();

  /// @brief Method get_SymmAlg, addr 0xe8653c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SymmAlg();

  /// @brief Method get_EncSymmKey, addr 0xe86544, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_EncSymmKey();

  /// @brief Method get_KeyAlg, addr 0xe8654c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_KeyAlg();

  /// @brief Method get_ValueHint, addr 0xe86554, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_ValueHint();

  /// @brief Method get_EncValue, addr 0xe8655c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_EncValue();

  /// @brief Method ToAsn1Object, addr 0xe86564, size 0x118, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "EncryptedValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptedValue(EncryptedValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptedValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptedValue(EncryptedValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptedValue();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue, ___intendedAlg) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue, ___symmAlg) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue, ___encSymmKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue, ___keyAlg) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue, ___valueHint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue, ___encValue) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*, "Org.BouncyCastle.Asn1.Crmf", "EncryptedValue");
