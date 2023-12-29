#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(PopoSigningKey)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoSigningKeyInput;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoSigningKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey);
// Type: Org.BouncyCastle.Asn1.Crmf::PopoSigningKey
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(119))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::PopoSigningKey*
class CORDL_TYPE PopoSigningKey : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field poposkInput, offset 0x10, size 0x8
  __declspec(property(get = __get_poposkInput, put = __set_poposkInput))::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* poposkInput;

  /// @brief Field algorithmIdentifier, offset 0x18, size 0x8
  __declspec(property(get = __get_algorithmIdentifier, put = __set_algorithmIdentifier))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithmIdentifier;

  /// @brief Field signature, offset 0x20, size 0x8
  __declspec(property(get = __get_signature, put = __set_signature))::Org::BouncyCastle::Asn1::DerBitString* signature;

  __declspec(property(get = get_PoposkInput))::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* PoposkInput;

  __declspec(property(get = get_AlgorithmIdentifier))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* AlgorithmIdentifier;

  __declspec(property(get = get_Signature))::Org::BouncyCastle::Asn1::DerBitString* Signature;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*& __get_poposkInput();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*> const& __get_poposkInput() const;

  constexpr void __set_poposkInput(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_algorithmIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_algorithmIdentifier() const;

  constexpr void __set_algorithmIdentifier(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_signature();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_signature() const;

  constexpr void __set_signature(::Org::BouncyCastle::Asn1::DerBitString* value);

  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe12ba8 size 0x208 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance addr 0xe12f38 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance addr 0xe130c0 size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey* New_ctor(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* poposkIn, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* aid,
                                                                          ::Org::BouncyCastle::Asn1::DerBitString* signature);

  /// @brief Method .ctor addr 0xe130d8 size 0x3c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* poposkIn, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* aid, ::Org::BouncyCastle::Asn1::DerBitString* signature);

  /// @brief Method get_PoposkInput addr 0xe13114 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* get_PoposkInput();

  /// @brief Method get_AlgorithmIdentifier addr 0xe1311c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_AlgorithmIdentifier();

  /// @brief Method get_Signature addr 0xe13124 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_Signature();

  /// @brief Method ToAsn1Object addr 0xe1312c size 0xc8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "PopoSigningKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PopoSigningKey(PopoSigningKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PopoSigningKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PopoSigningKey(PopoSigningKey const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PopoSigningKey();

public:
  /// @brief Field poposkInput, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* ___poposkInput;

  /// @brief Field algorithmIdentifier, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___algorithmIdentifier;

  /// @brief Field signature, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___signature;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey, ___poposkInput) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey, ___algorithmIdentifier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey, ___signature) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey*, "Org.BouncyCastle.Asn1.Crmf", "PopoSigningKey");
