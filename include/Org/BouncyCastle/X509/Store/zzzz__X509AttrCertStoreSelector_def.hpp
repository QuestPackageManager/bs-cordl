#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/X509AttrCertStoreSelector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509AttrCertStoreSelector)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
namespace Org::BouncyCastle::X509 {
class AttributeCertificateHolder;
}
namespace Org::BouncyCastle::X509 {
class AttributeCertificateIssuer;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class X509AttrCertStoreSelector;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector);
// Dependencies Org.BouncyCastle.X509.Store.IX509Selector, System.ICloneable, System.Object
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// CS Name: Org.BouncyCastle.X509.Store.X509AttrCertStoreSelector
class CORDL_TYPE X509AttrCertStoreSelector : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttribueCertificateValid, put = set_AttribueCertificateValid)) ::Org::BouncyCastle::Utilities::Date::DateTimeObject* AttribueCertificateValid;

  __declspec(property(get = get_AttributeCert, put = set_AttributeCert)) ::Org::BouncyCastle::X509::IX509AttributeCertificate* AttributeCert;

  __declspec(property(get = get_AttributeCertificateValid, put = set_AttributeCertificateValid)) ::Org::BouncyCastle::Utilities::Date::DateTimeObject* AttributeCertificateValid;

  __declspec(property(get = get_Holder, put = set_Holder)) ::Org::BouncyCastle::X509::AttributeCertificateHolder* Holder;

  __declspec(property(get = get_Issuer, put = set_Issuer)) ::Org::BouncyCastle::X509::AttributeCertificateIssuer* Issuer;

  __declspec(property(get = get_SerialNumber, put = set_SerialNumber)) ::Org::BouncyCastle::Math::BigInteger* SerialNumber;

  /// @brief Field attributeCert, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeCert, put = __cordl_internal_set_attributeCert)) ::Org::BouncyCastle::X509::IX509AttributeCertificate* attributeCert;

  /// @brief Field attributeCertificateValid, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeCertificateValid,
                      put = __cordl_internal_set_attributeCertificateValid)) ::Org::BouncyCastle::Utilities::Date::DateTimeObject* attributeCertificateValid;

  /// @brief Field holder, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_holder, put = __cordl_internal_set_holder)) ::Org::BouncyCastle::X509::AttributeCertificateHolder* holder;

  /// @brief Field issuer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_issuer, put = __cordl_internal_set_issuer)) ::Org::BouncyCastle::X509::AttributeCertificateIssuer* issuer;

  /// @brief Field serialNumber, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_serialNumber, put = __cordl_internal_set_serialNumber)) ::Org::BouncyCastle::Math::BigInteger* serialNumber;

  /// @brief Field targetGroups, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_targetGroups, put = __cordl_internal_set_targetGroups)) ::Org::BouncyCastle::Utilities::Collections::ISet* targetGroups;

  /// @brief Field targetNames, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_targetNames, put = __cordl_internal_set_targetNames)) ::Org::BouncyCastle::Utilities::Collections::ISet* targetNames;

  /// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509Selector"
  constexpr operator ::Org::BouncyCastle::X509::Store::IX509Selector*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method AddTargetGroup, addr 0x25e9020, size 0xa8, virtual false, abstract: false, final false
  inline void AddTargetGroup(::Org::BouncyCastle::Asn1::X509::GeneralName* group);

  /// @brief Method AddTargetGroup, addr 0x25e90c8, size 0x2c, virtual false, abstract: false, final false
  inline void AddTargetGroup(::ArrayW<uint8_t, ::Array<uint8_t>*> name);

  /// @brief Method AddTargetName, addr 0x25e8aec, size 0x2c, virtual false, abstract: false, final false
  inline void AddTargetName(::ArrayW<uint8_t, ::Array<uint8_t>*> name);

  /// @brief Method AddTargetName, addr 0x25e8a44, size 0xa8, virtual false, abstract: false, final false
  inline void AddTargetName(::Org::BouncyCastle::Asn1::X509::GeneralName* name);

  /// @brief Method Clone, addr 0x25e898c, size 0x58, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method ExtractGeneralNames, addr 0x25e8b30, size 0x490, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* ExtractGeneralNames(::System::Collections::IEnumerable* names);

  /// @brief Method GetTargetGroups, addr 0x25e910c, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetTargetGroups();

  /// @brief Method GetTargetNames, addr 0x25e8fc0, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetTargetNames();

  /// @brief Method Match, addr 0x25e8174, size 0x818, virtual true, abstract: false, final true
  inline bool Match(::System::Object* obj);

  static inline ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector* New_ctor();

  static inline ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector* New_ctor(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector* o);

  /// @brief Method SetTargetGroups, addr 0x25e90f4, size 0x18, virtual false, abstract: false, final false
  inline void SetTargetGroups(::System::Collections::IEnumerable* names);

  /// @brief Method SetTargetNames, addr 0x25e8b18, size 0x18, virtual false, abstract: false, final false
  inline void SetTargetNames(::System::Collections::IEnumerable* names);

  constexpr ::Org::BouncyCastle::X509::IX509AttributeCertificate* const& __cordl_internal_get_attributeCert() const;

  constexpr ::Org::BouncyCastle::X509::IX509AttributeCertificate*& __cordl_internal_get_attributeCert();

  constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject* const& __cordl_internal_get_attributeCertificateValid() const;

  constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject*& __cordl_internal_get_attributeCertificateValid();

  constexpr ::Org::BouncyCastle::X509::AttributeCertificateHolder* const& __cordl_internal_get_holder() const;

  constexpr ::Org::BouncyCastle::X509::AttributeCertificateHolder*& __cordl_internal_get_holder();

  constexpr ::Org::BouncyCastle::X509::AttributeCertificateIssuer* const& __cordl_internal_get_issuer() const;

  constexpr ::Org::BouncyCastle::X509::AttributeCertificateIssuer*& __cordl_internal_get_issuer();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_serialNumber() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_serialNumber();

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& __cordl_internal_get_targetGroups() const;

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_targetGroups();

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& __cordl_internal_get_targetNames() const;

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_targetNames();

  constexpr void __cordl_internal_set_attributeCert(::Org::BouncyCastle::X509::IX509AttributeCertificate* value);

  constexpr void __cordl_internal_set_attributeCertificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);

  constexpr void __cordl_internal_set_holder(::Org::BouncyCastle::X509::AttributeCertificateHolder* value);

  constexpr void __cordl_internal_set_issuer(::Org::BouncyCastle::X509::AttributeCertificateIssuer* value);

  constexpr void __cordl_internal_set_serialNumber(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_targetGroups(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr void __cordl_internal_set_targetNames(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  /// @brief Method .ctor, addr 0x25e8004, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x25e807c, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector* o);

  /// @brief Method get_AttribueCertificateValid, addr 0x25e89f4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_AttribueCertificateValid();

  /// @brief Method get_AttributeCert, addr 0x25e89e4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* get_AttributeCert();

  /// @brief Method get_AttributeCertificateValid, addr 0x25e8a04, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_AttributeCertificateValid();

  /// @brief Method get_Holder, addr 0x25e8a14, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::AttributeCertificateHolder* get_Holder();

  /// @brief Method get_Issuer, addr 0x25e8a24, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::AttributeCertificateIssuer* get_Issuer();

  /// @brief Method get_SerialNumber, addr 0x25e8a34, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_SerialNumber();

  /// @brief Convert to "::Org::BouncyCastle::X509::Store::IX509Selector"
  constexpr ::Org::BouncyCastle::X509::Store::IX509Selector* i___Org__BouncyCastle__X509__Store__IX509Selector() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_AttribueCertificateValid, addr 0x25e89fc, size 0x8, virtual false, abstract: false, final false
  inline void set_AttribueCertificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);

  /// @brief Method set_AttributeCert, addr 0x25e89ec, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributeCert(::Org::BouncyCastle::X509::IX509AttributeCertificate* value);

  /// @brief Method set_AttributeCertificateValid, addr 0x25e8a0c, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributeCertificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);

  /// @brief Method set_Holder, addr 0x25e8a1c, size 0x8, virtual false, abstract: false, final false
  inline void set_Holder(::Org::BouncyCastle::X509::AttributeCertificateHolder* value);

  /// @brief Method set_Issuer, addr 0x25e8a2c, size 0x8, virtual false, abstract: false, final false
  inline void set_Issuer(::Org::BouncyCastle::X509::AttributeCertificateIssuer* value);

  /// @brief Method set_SerialNumber, addr 0x25e8a3c, size 0x8, virtual false, abstract: false, final false
  inline void set_SerialNumber(::Org::BouncyCastle::Math::BigInteger* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509AttrCertStoreSelector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509AttrCertStoreSelector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509AttrCertStoreSelector(X509AttrCertStoreSelector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509AttrCertStoreSelector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509AttrCertStoreSelector(X509AttrCertStoreSelector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1846 };

  /// @brief Field attributeCert, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::IX509AttributeCertificate* ___attributeCert;

  /// @brief Field attributeCertificateValid, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Date::DateTimeObject* ___attributeCertificateValid;

  /// @brief Field holder, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::AttributeCertificateHolder* ___holder;

  /// @brief Field issuer, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::AttributeCertificateIssuer* ___issuer;

  /// @brief Field serialNumber, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___serialNumber;

  /// @brief Field targetNames, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___targetNames;

  /// @brief Field targetGroups, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___targetGroups;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector, ___attributeCert) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector, ___attributeCertificateValid) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector, ___holder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector, ___issuer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector, ___serialNumber) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector, ___targetNames) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector, ___targetGroups) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509::Store
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*, "Org.BouncyCastle.X509.Store", "X509AttrCertStoreSelector");
