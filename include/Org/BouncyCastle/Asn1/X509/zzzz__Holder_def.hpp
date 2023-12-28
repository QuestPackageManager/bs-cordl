#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Holder)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
namespace Org::BouncyCastle::Asn1::X509 {
class ObjectDigestInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class Holder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Holder);
// Type: Org.BouncyCastle.Asn1.X509::Holder
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(364))
// CS Name: ::Org.BouncyCastle.Asn1.X509::Holder*
class CORDL_TYPE Holder : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field baseCertificateID, offset 0x10, size 0x8
  __declspec(property(get = __get_baseCertificateID, put = __set_baseCertificateID))::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID;

  /// @brief Field entityName, offset 0x18, size 0x8
  __declspec(property(get = __get_entityName, put = __set_entityName))::Org::BouncyCastle::Asn1::X509::GeneralNames* entityName;

  /// @brief Field objectDigestInfo, offset 0x20, size 0x8
  __declspec(property(get = __get_objectDigestInfo, put = __set_objectDigestInfo))::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* objectDigestInfo;

  /// @brief Field version, offset 0x28, size 0x4
  __declspec(property(get = __get_version, put = __set_version)) int32_t version;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_BaseCertificateID))::Org::BouncyCastle::Asn1::X509::IssuerSerial* BaseCertificateID;

  __declspec(property(get = get_EntityName))::Org::BouncyCastle::Asn1::X509::GeneralNames* EntityName;

  __declspec(property(get = get_ObjectDigestInfo))::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* ObjectDigestInfo;

  constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial*& __get_baseCertificateID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::IssuerSerial*> const& __get_baseCertificateID() const;

  constexpr void __set_baseCertificateID(::Org::BouncyCastle::Asn1::X509::IssuerSerial* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames*& __get_entityName();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralNames*> const& __get_entityName() const;

  constexpr void __set_entityName(::Org::BouncyCastle::Asn1::X509::GeneralNames* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*& __get_objectDigestInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*> const& __get_objectDigestInfo() const;

  constexpr void __set_objectDigestInfo(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* value);

  constexpr int32_t& __get_version();

  constexpr int32_t const& __get_version() const;

  constexpr void __set_version(int32_t value);

  /// @brief Method GetInstance addr 0x118fd2c size 0x204 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::Holder* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::Holder* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagObj);

  /// @brief Method .ctor addr 0x1190120 size 0xe0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagObj);

  static inline ::Org::BouncyCastle::Asn1::X509::Holder* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x118ff30 size 0x1f0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::Holder* New_ctor(::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID);

  /// @brief Method .ctor addr 0x1190230 size 0x30 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID);

  static inline ::Org::BouncyCastle::Asn1::X509::Holder* New_ctor(::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID, int32_t version);

  /// @brief Method .ctor addr 0x1190260 size 0x30 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID, int32_t version);

  /// @brief Method get_Version addr 0x1190290 size 0x8 virtual false final false
  inline int32_t get_Version();

  static inline ::Org::BouncyCastle::Asn1::X509::Holder* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* entityName);

  /// @brief Method .ctor addr 0x1190298 size 0x30 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* entityName);

  static inline ::Org::BouncyCastle::Asn1::X509::Holder* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* entityName, int32_t version);

  /// @brief Method .ctor addr 0x11902c8 size 0x30 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* entityName, int32_t version);

  static inline ::Org::BouncyCastle::Asn1::X509::Holder* New_ctor(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* objectDigestInfo);

  /// @brief Method .ctor addr 0x11902f8 size 0x30 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* objectDigestInfo);

  /// @brief Method get_BaseCertificateID addr 0x1190328 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* get_BaseCertificateID();

  /// @brief Method get_EntityName addr 0x1190330 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* get_EntityName();

  /// @brief Method get_ObjectDigestInfo addr 0x1190338 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* get_ObjectDigestInfo();

  /// @brief Method ToAsn1Object addr 0x1190340 size 0x148 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "Holder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Holder(Holder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Holder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Holder(Holder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Holder();

public:
  /// @brief Field baseCertificateID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::IssuerSerial* ___baseCertificateID;

  /// @brief Field entityName, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralNames* ___entityName;

  /// @brief Field objectDigestInfo, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* ___objectDigestInfo;

  /// @brief Field version, offset: 0x28, size: 0x4, def value: None
  int32_t ___version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Holder, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Holder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Holder*, "Org.BouncyCastle.Asn1.X509", "Holder");
