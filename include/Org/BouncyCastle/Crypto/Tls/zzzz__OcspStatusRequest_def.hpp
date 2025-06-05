#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/OcspStatusRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OcspStatusRequest)
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class OcspStatusRequest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.OcspStatusRequest
class CORDL_TYPE OcspStatusRequest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_RequestExtensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* RequestExtensions;

  __declspec(property(get = get_ResponderIDList)) ::System::Collections::IList* ResponderIDList;

  /// @brief Field mRequestExtensions, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mRequestExtensions, put = __cordl_internal_set_mRequestExtensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* mRequestExtensions;

  /// @brief Field mResponderIDList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mResponderIDList, put = __cordl_internal_set_mResponderIDList)) ::System::Collections::IList* mResponderIDList;

  /// @brief Method Encode, addr 0x2417804, size 0x3c0, virtual true, abstract: false, final false
  inline void Encode(::System::IO::Stream* output);

  static inline ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest* New_ctor(::System::Collections::IList* responderIDList, ::Org::BouncyCastle::Asn1::X509::X509Extensions* requestExtensions);

  /// @brief Method Parse, addr 0x2417bc4, size 0x2a8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest* Parse(::System::IO::Stream* input);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& __cordl_internal_get_mRequestExtensions() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __cordl_internal_get_mRequestExtensions();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_mResponderIDList() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_mResponderIDList();

  constexpr void __cordl_internal_set_mRequestExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  constexpr void __cordl_internal_set_mResponderIDList(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x24177c8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* responderIDList, ::Org::BouncyCastle::Asn1::X509::X509Extensions* requestExtensions);

  /// @brief Method get_RequestExtensions, addr 0x24177fc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_RequestExtensions();

  /// @brief Method get_ResponderIDList, addr 0x24177f4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::IList* get_ResponderIDList();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcspStatusRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcspStatusRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcspStatusRequest(OcspStatusRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcspStatusRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcspStatusRequest(OcspStatusRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1258 };

  /// @brief Field mResponderIDList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___mResponderIDList;

  /// @brief Field mRequestExtensions, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___mRequestExtensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest, ___mResponderIDList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest, ___mRequestExtensions) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest*, "Org.BouncyCastle.Crypto.Tls", "OcspStatusRequest");
