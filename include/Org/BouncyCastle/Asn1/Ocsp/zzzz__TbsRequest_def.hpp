#pragma once
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
// Type: Org.BouncyCastle.Asn1.Ocsp::TbsRequest
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(223))
// CS Name: ::Org.BouncyCastle.Asn1.Ocsp::TbsRequest*
class CORDL_TYPE TbsRequest : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Field requestorName, offset 0x18, size 0x8
  __declspec(property(get = __get_requestorName, put = __set_requestorName))::Org::BouncyCastle::Asn1::X509::GeneralName* requestorName;

  /// @brief Field requestList, offset 0x20, size 0x8
  __declspec(property(get = __get_requestList, put = __set_requestList))::Org::BouncyCastle::Asn1::Asn1Sequence* requestList;

  /// @brief Field requestExtensions, offset 0x28, size 0x8
  __declspec(property(get = __get_requestExtensions, put = __set_requestExtensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* requestExtensions;

  /// @brief Field versionSet, offset 0x30, size 0x1
  __declspec(property(get = __get_versionSet, put = __set_versionSet)) bool versionSet;

  /// @brief Field V1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_V1, put = setStaticF_V1))::Org::BouncyCastle::Asn1::DerInteger* V1;

  __declspec(property(get = get_Version))::Org::BouncyCastle::Asn1::DerInteger* Version;

  __declspec(property(get = get_RequestorName))::Org::BouncyCastle::Asn1::X509::GeneralName* RequestorName;

  __declspec(property(get = get_RequestList))::Org::BouncyCastle::Asn1::Asn1Sequence* RequestList;

  __declspec(property(get = get_RequestExtensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* RequestExtensions;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_version() const;

  constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __get_requestorName();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __get_requestorName() const;

  constexpr void __set_requestorName(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_requestList();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_requestList() const;

  constexpr void __set_requestList(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __get_requestExtensions();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> const& __get_requestExtensions() const;

  constexpr void __set_requestExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  constexpr bool& __get_versionSet();

  constexpr bool const& __get_versionSet() const;

  constexpr void __set_versionSet(bool value);

  static inline void setStaticF_V1(::Org::BouncyCastle::Asn1::DerInteger* value);

  static inline ::Org::BouncyCastle::Asn1::DerInteger* getStaticF_V1();

  /// @brief Method GetInstance, addr 0xf84a30, size 0x78, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0xf80dec, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* requestorName, ::Org::BouncyCastle::Asn1::Asn1Sequence* requestList,
                                                                      ::Org::BouncyCastle::Asn1::X509::X509Extensions* requestExtensions);

  /// @brief Method .ctor, addr 0xf84d7c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* requestorName, ::Org::BouncyCastle::Asn1::Asn1Sequence* requestList,
                    ::Org::BouncyCastle::Asn1::X509::X509Extensions* requestExtensions);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xf84aa8, size 0x2d4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Version, addr 0xf84e08, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  /// @brief Method get_RequestorName, addr 0xf84e10, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_RequestorName();

  /// @brief Method get_RequestList, addr 0xf84e18, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_RequestList();

  /// @brief Method get_RequestExtensions, addr 0xf84e20, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_RequestExtensions();

  /// @brief Method ToAsn1Object, addr 0xf84e28, size 0x174, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "TbsRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TbsRequest(TbsRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TbsRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TbsRequest(TbsRequest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TbsRequest();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest, ___requestorName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest, ___requestList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest, ___requestExtensions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest, ___versionSet) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*, "Org.BouncyCastle.Asn1.Ocsp", "TbsRequest");
