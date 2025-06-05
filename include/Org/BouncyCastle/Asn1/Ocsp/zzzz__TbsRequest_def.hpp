#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ocsp/TbsRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(TbsRequest)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
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
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class TbsRequest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Ocsp.TbsRequest
class CORDL_TYPE TbsRequest : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_RequestExtensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* RequestExtensions;

  __declspec(property(get = get_RequestList)) ::Org::BouncyCastle::Asn1::Asn1Sequence* RequestList;

  __declspec(property(get = get_RequestorName)) ::Org::BouncyCastle::Asn1::X509::GeneralName* RequestorName;

  /// @brief Field V1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_V1, put = setStaticF_V1)) ::Org::BouncyCastle::Asn1::DerInteger* V1;

  __declspec(property(get = get_Version)) ::Org::BouncyCastle::Asn1::DerInteger* Version;

  /// @brief Field requestExtensions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_requestExtensions, put = __cordl_internal_set_requestExtensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* requestExtensions;

  /// @brief Field requestList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_requestList, put = __cordl_internal_set_requestList)) ::Org::BouncyCastle::Asn1::Asn1Sequence* requestList;

  /// @brief Field requestorName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_requestorName, put = __cordl_internal_set_requestorName)) ::Org::BouncyCastle::Asn1::X509::GeneralName* requestorName;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Field versionSet, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_versionSet, put = __cordl_internal_set_versionSet)) bool versionSet;

  /// @brief Method GetInstance, addr 0x240a5b0, size 0x78, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x2406aa0, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* requestorName, ::Org::BouncyCastle::Asn1::Asn1Sequence* requestList,
                                                                      ::Org::BouncyCastle::Asn1::X509::X509Extensions* requestExtensions);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x240a9a4, size 0x170, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& __cordl_internal_get_requestExtensions() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __cordl_internal_get_requestExtensions();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_requestList() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_requestList();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& __cordl_internal_get_requestorName() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __cordl_internal_get_requestorName();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_version() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr bool const& __cordl_internal_get_versionSet() const;

  constexpr bool& __cordl_internal_get_versionSet();

  constexpr void __cordl_internal_set_requestExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  constexpr void __cordl_internal_set_requestList(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_requestorName(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_versionSet(bool value);

  /// @brief Method .ctor, addr 0x240a8f8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* requestorName, ::Org::BouncyCastle::Asn1::Asn1Sequence* requestList,
                    ::Org::BouncyCastle::Asn1::X509::X509Extensions* requestExtensions);

  /// @brief Method .ctor, addr 0x240a628, size 0x2d0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::DerInteger* getStaticF_V1();

  /// @brief Method get_RequestExtensions, addr 0x240a99c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_RequestExtensions();

  /// @brief Method get_RequestList, addr 0x240a994, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_RequestList();

  /// @brief Method get_RequestorName, addr 0x240a98c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_RequestorName();

  /// @brief Method get_Version, addr 0x240a984, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  static inline void setStaticF_V1(::Org::BouncyCastle::Asn1::DerInteger* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TbsRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TbsRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TbsRequest(TbsRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TbsRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TbsRequest(TbsRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 223 };

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field requestorName, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___requestorName;

  /// @brief Field requestList, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___requestList;

  /// @brief Field requestExtensions, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___requestExtensions;

  /// @brief Field versionSet, offset: 0x30, size: 0x1, def value: None
  bool ___versionSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest, ___requestorName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest, ___requestList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest, ___requestExtensions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest, ___versionSet) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*, "Org.BouncyCastle.Asn1.Ocsp", "TbsRequest");
