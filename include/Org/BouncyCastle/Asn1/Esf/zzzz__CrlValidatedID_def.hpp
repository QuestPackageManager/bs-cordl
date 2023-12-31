#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CrlValidatedID)
namespace Org::BouncyCastle::Asn1::Esf {
class CrlIdentifier;
}
namespace Org::BouncyCastle::Asn1::Esf {
class OtherHash;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class CrlValidatedID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::CrlValidatedID);
// Type: Org.BouncyCastle.Asn1.Esf::CrlValidatedID
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(143))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::CrlValidatedID*
class CORDL_TYPE CrlValidatedID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field crlHash, offset 0x10, size 0x8
  __declspec(property(get = __get_crlHash, put = __set_crlHash))::Org::BouncyCastle::Asn1::Esf::OtherHash* crlHash;

  /// @brief Field crlIdentifier, offset 0x18, size 0x8
  __declspec(property(get = __get_crlIdentifier, put = __set_crlIdentifier))::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* crlIdentifier;

  __declspec(property(get = get_CrlHash))::Org::BouncyCastle::Asn1::Esf::OtherHash* CrlHash;

  __declspec(property(get = get_CrlIdentifier))::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* CrlIdentifier;

  constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHash*& __get_crlHash();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Esf::OtherHash*> const& __get_crlHash() const;

  constexpr void __set_crlHash(::Org::BouncyCastle::Asn1::Esf::OtherHash* value);

  constexpr ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*& __get_crlIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Esf::CrlIdentifier*> const& __get_crlIdentifier() const;

  constexpr void __set_crlIdentifier(::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* value);

  /// @brief Method GetInstance, addr 0xe92008, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::CrlValidatedID* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::CrlValidatedID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe92e64, size 0x1c8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Esf::CrlValidatedID* New_ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* crlHash);

  /// @brief Method .ctor, addr 0xe93154, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* crlHash);

  static inline ::Org::BouncyCastle::Asn1::Esf::CrlValidatedID* New_ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* crlHash, ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* crlIdentifier);

  /// @brief Method .ctor, addr 0xe9315c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* crlHash, ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* crlIdentifier);

  /// @brief Method get_CrlHash, addr 0xe931d8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Esf::OtherHash* get_CrlHash();

  /// @brief Method get_CrlIdentifier, addr 0xe931e0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* get_CrlIdentifier();

  /// @brief Method ToAsn1Object, addr 0xe931e8, size 0x138, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "CrlValidatedID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrlValidatedID(CrlValidatedID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrlValidatedID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrlValidatedID(CrlValidatedID const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrlValidatedID();

public:
  /// @brief Field crlHash, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Esf::OtherHash* ___crlHash;

  /// @brief Field crlIdentifier, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Esf::CrlIdentifier* ___crlIdentifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::CrlValidatedID, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CrlValidatedID, ___crlHash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::CrlValidatedID, ___crlIdentifier) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::CrlValidatedID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::CrlValidatedID*, "Org.BouncyCastle.Asn1.Esf", "CrlValidatedID");
