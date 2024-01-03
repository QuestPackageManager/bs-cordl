#pragma once
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
// Type: Org.BouncyCastle.Crypto.Tls::OcspStatusRequest
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1258))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::OcspStatusRequest*
class CORDL_TYPE OcspStatusRequest : public ::System::Object {
public:
  // Declarations
  /// @brief Field mResponderIDList, offset 0x10, size 0x8
  __declspec(property(get = __get_mResponderIDList, put = __set_mResponderIDList))::System::Collections::IList* mResponderIDList;

  /// @brief Field mRequestExtensions, offset 0x18, size 0x8
  __declspec(property(get = __get_mRequestExtensions, put = __set_mRequestExtensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* mRequestExtensions;

  __declspec(property(get = get_ResponderIDList))::System::Collections::IList* ResponderIDList;

  __declspec(property(get = get_RequestExtensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* RequestExtensions;

  constexpr ::System::Collections::IList*& __get_mResponderIDList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_mResponderIDList() const;

  constexpr void __set_mResponderIDList(::System::Collections::IList* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __get_mRequestExtensions();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> const& __get_mRequestExtensions() const;

  constexpr void __set_mRequestExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest* New_ctor(::System::Collections::IList* responderIDList, ::Org::BouncyCastle::Asn1::X509::X509Extensions* requestExtensions);

  /// @brief Method .ctor, addr 0xf9208c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* responderIDList, ::Org::BouncyCastle::Asn1::X509::X509Extensions* requestExtensions);

  /// @brief Method get_ResponderIDList, addr 0xf920b8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::IList* get_ResponderIDList();

  /// @brief Method get_RequestExtensions, addr 0xf920c0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_RequestExtensions();

  /// @brief Method Encode, addr 0xf920c8, size 0x3c0, virtual true, abstract: false, final false
  inline void Encode(::System::IO::Stream* output);

  /// @brief Method Parse, addr 0xf92488, size 0x2ac, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest* Parse(::System::IO::Stream* input);

  // Ctor Parameters [CppParam { name: "", ty: "OcspStatusRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcspStatusRequest(OcspStatusRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcspStatusRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcspStatusRequest(OcspStatusRequest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcspStatusRequest();

public:
  /// @brief Field mResponderIDList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___mResponderIDList;

  /// @brief Field mRequestExtensions, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___mRequestExtensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest, ___mResponderIDList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest, ___mRequestExtensions) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest*, "Org.BouncyCastle.Crypto.Tls", "OcspStatusRequest");
