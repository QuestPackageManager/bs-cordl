#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Crmf/PopoSigningKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(PopoSigningKey)
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoSigningKeyInput;
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
class PopoSigningKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Crmf.PopoSigningKey
class CORDL_TYPE PopoSigningKey : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmIdentifier)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* AlgorithmIdentifier;

  __declspec(property(get = get_PoposkInput)) ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* PoposkInput;

  __declspec(property(get = get_Signature)) ::Org::BouncyCastle::Asn1::DerBitString* Signature;

  /// @brief Field algorithmIdentifier, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_algorithmIdentifier, put = __cordl_internal_set_algorithmIdentifier)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithmIdentifier;

  /// @brief Field poposkInput, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_poposkInput, put = __cordl_internal_set_poposkInput)) ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* poposkInput;

  /// @brief Field signature, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_signature, put = __cordl_internal_set_signature)) ::Org::BouncyCastle::Asn1::DerBitString* signature;

  /// @brief Method GetInstance, addr 0x2316044, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x2315ec8, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey* New_ctor(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* poposkIn, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* aid,
                                                                          ::Org::BouncyCastle::Asn1::DerBitString* signature);

  static inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x23160b0, size 0xc4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_algorithmIdentifier() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_algorithmIdentifier();

  constexpr ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* const& __cordl_internal_get_poposkInput() const;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*& __cordl_internal_get_poposkInput();

  constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& __cordl_internal_get_signature() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_signature();

  constexpr void __cordl_internal_set_algorithmIdentifier(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_poposkInput(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* value);

  constexpr void __cordl_internal_set_signature(::Org::BouncyCastle::Asn1::DerBitString* value);

  /// @brief Method .ctor, addr 0x231605c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* poposkIn, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* aid, ::Org::BouncyCastle::Asn1::DerBitString* signature);

  /// @brief Method .ctor, addr 0x2315b48, size 0x204, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_AlgorithmIdentifier, addr 0x23160a0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_AlgorithmIdentifier();

  /// @brief Method get_PoposkInput, addr 0x2316098, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* get_PoposkInput();

  /// @brief Method get_Signature, addr 0x23160a8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_Signature();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PopoSigningKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PopoSigningKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PopoSigningKey(PopoSigningKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PopoSigningKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PopoSigningKey(PopoSigningKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 119 };

  /// @brief Field poposkInput, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* ___poposkInput;

  /// @brief Field algorithmIdentifier, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___algorithmIdentifier;

  /// @brief Field signature, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___signature;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey, ___poposkInput) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey, ___algorithmIdentifier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey, ___signature) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey*, "Org.BouncyCastle.Asn1.Crmf", "PopoSigningKey");
