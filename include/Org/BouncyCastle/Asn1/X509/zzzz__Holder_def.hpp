#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/Holder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Holder)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
namespace Org::BouncyCastle::Asn1::X509 {
class ObjectDigestInfo;
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
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class Holder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Holder);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.Holder
class CORDL_TYPE Holder : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_BaseCertificateID)) ::Org::BouncyCastle::Asn1::X509::IssuerSerial* BaseCertificateID;

  __declspec(property(get = get_EntityName)) ::Org::BouncyCastle::Asn1::X509::GeneralNames* EntityName;

  __declspec(property(get = get_ObjectDigestInfo)) ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* ObjectDigestInfo;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field baseCertificateID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_baseCertificateID, put = __cordl_internal_set_baseCertificateID)) ::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID;

  /// @brief Field entityName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_entityName, put = __cordl_internal_set_entityName)) ::Org::BouncyCastle::Asn1::X509::GeneralNames* entityName;

  /// @brief Field objectDigestInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_objectDigestInfo, put = __cordl_internal_set_objectDigestInfo)) ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* objectDigestInfo;

  /// @brief Field version, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Method GetInstance, addr 0x260761c, size 0x1f4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::Holder* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::Holder* New_ctor(::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID);

  static inline ::Org::BouncyCastle::Asn1::X509::Holder* New_ctor(::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID, int32_t version);

  static inline ::Org::BouncyCastle::Asn1::X509::Holder* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* entityName);

  static inline ::Org::BouncyCastle::Asn1::X509::Holder* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* entityName, int32_t version);

  static inline ::Org::BouncyCastle::Asn1::X509::Holder* New_ctor(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* objectDigestInfo);

  static inline ::Org::BouncyCastle::Asn1::X509::Holder* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::Holder* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagObj);

  /// @brief Method ToAsn1Object, addr 0x2607c10, size 0x144, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial* const& __cordl_internal_get_baseCertificateID() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial*& __cordl_internal_get_baseCertificateID();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames* const& __cordl_internal_get_entityName() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames*& __cordl_internal_get_entityName();

  constexpr ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* const& __cordl_internal_get_objectDigestInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*& __cordl_internal_get_objectDigestInfo();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_baseCertificateID(::Org::BouncyCastle::Asn1::X509::IssuerSerial* value);

  constexpr void __cordl_internal_set_entityName(::Org::BouncyCastle::Asn1::X509::GeneralNames* value);

  constexpr void __cordl_internal_set_objectDigestInfo(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x2607b00, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID);

  /// @brief Method .ctor, addr 0x2607b30, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID, int32_t version);

  /// @brief Method .ctor, addr 0x2607b68, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* entityName);

  /// @brief Method .ctor, addr 0x2607b98, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* entityName, int32_t version);

  /// @brief Method .ctor, addr 0x2607bc8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* objectDigestInfo);

  /// @brief Method .ctor, addr 0x2607810, size 0x1e4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x26079f4, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagObj);

  /// @brief Method get_BaseCertificateID, addr 0x2607bf8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* get_BaseCertificateID();

  /// @brief Method get_EntityName, addr 0x2607c00, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* get_EntityName();

  /// @brief Method get_ObjectDigestInfo, addr 0x2607c08, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* get_ObjectDigestInfo();

  /// @brief Method get_Version, addr 0x2607b60, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Holder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Holder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Holder(Holder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Holder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Holder(Holder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 364 };

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
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Holder, ___baseCertificateID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Holder, ___entityName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Holder, ___objectDigestInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Holder, ___version) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Holder, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Holder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Holder*, "Org.BouncyCastle.Asn1.X509", "Holder");
