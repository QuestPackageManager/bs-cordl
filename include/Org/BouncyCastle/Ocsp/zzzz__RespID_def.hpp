#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/RespID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RespID)
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponderID;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class RespID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::RespID);
// Dependencies System.Object
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Ocsp.RespID
class CORDL_TYPE RespID : public ::System::Object {
public:
  // Declarations
  /// @brief Field id, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id)) ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* id;

  /// @brief Method Equals, addr 0x2524c38, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2524ce8, size 0x1c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::Ocsp::RespID* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponderID* id);

  static inline ::Org::BouncyCastle::Ocsp::RespID* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* name);

  static inline ::Org::BouncyCastle::Ocsp::RespID* New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method ToAsn1Object, addr 0x2524c30, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* const& __cordl_internal_get_id() const;

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponderID*& __cordl_internal_get_id();

  constexpr void __cordl_internal_set_id(::Org::BouncyCastle::Asn1::Ocsp::ResponderID* value);

  /// @brief Method .ctor, addr 0x251bf30, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponderID* id);

  /// @brief Method .ctor, addr 0x2524bbc, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name* name);

  /// @brief Method .ctor, addr 0x251d210, size 0x1f0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RespID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RespID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RespID(RespID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RespID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RespID(RespID const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1623 };

  /// @brief Field id, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* ___id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Ocsp::RespID, ___id) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::RespID, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::RespID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::RespID*, "Org.BouncyCastle.Ocsp", "RespID");
