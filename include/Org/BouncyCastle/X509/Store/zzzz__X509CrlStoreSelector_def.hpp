#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/X509CrlStoreSelector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CrlStoreSelector)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class X509CrlStoreSelector;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector);
// Dependencies Org.BouncyCastle.X509.Store.IX509Selector, System.ICloneable, System.Object
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// CS Name: Org.BouncyCastle.X509.Store.X509CrlStoreSelector
class CORDL_TYPE X509CrlStoreSelector : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttrCertChecking, put = set_AttrCertChecking)) ::Org::BouncyCastle::X509::IX509AttributeCertificate* AttrCertChecking;

  __declspec(property(get = get_CertificateChecking, put = set_CertificateChecking)) ::Org::BouncyCastle::X509::X509Certificate* CertificateChecking;

  __declspec(property(get = get_CompleteCrlEnabled, put = set_CompleteCrlEnabled)) bool CompleteCrlEnabled;

  __declspec(property(get = get_DateAndTime, put = set_DateAndTime)) ::Org::BouncyCastle::Utilities::Date::DateTimeObject* DateAndTime;

  __declspec(property(get = get_DeltaCrlIndicatorEnabled, put = set_DeltaCrlIndicatorEnabled)) bool DeltaCrlIndicatorEnabled;

  __declspec(property(get = get_Issuers, put = set_Issuers)) ::System::Collections::ICollection* Issuers;

  __declspec(property(get = get_IssuingDistributionPoint, put = set_IssuingDistributionPoint)) ::ArrayW<uint8_t, ::Array<uint8_t>*> IssuingDistributionPoint;

  __declspec(property(get = get_IssuingDistributionPointEnabled, put = set_IssuingDistributionPointEnabled)) bool IssuingDistributionPointEnabled;

  __declspec(property(get = get_MaxBaseCrlNumber, put = set_MaxBaseCrlNumber)) ::Org::BouncyCastle::Math::BigInteger* MaxBaseCrlNumber;

  __declspec(property(get = get_MaxCrlNumber, put = set_MaxCrlNumber)) ::Org::BouncyCastle::Math::BigInteger* MaxCrlNumber;

  __declspec(property(get = get_MinCrlNumber, put = set_MinCrlNumber)) ::Org::BouncyCastle::Math::BigInteger* MinCrlNumber;

  /// @brief Field attrCertChecking, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_attrCertChecking, put = __cordl_internal_set_attrCertChecking)) ::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCertChecking;

  /// @brief Field certificateChecking, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certificateChecking, put = __cordl_internal_set_certificateChecking)) ::Org::BouncyCastle::X509::X509Certificate* certificateChecking;

  /// @brief Field completeCrlEnabled, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_completeCrlEnabled, put = __cordl_internal_set_completeCrlEnabled)) bool completeCrlEnabled;

  /// @brief Field dateAndTime, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_dateAndTime, put = __cordl_internal_set_dateAndTime)) ::Org::BouncyCastle::Utilities::Date::DateTimeObject* dateAndTime;

  /// @brief Field deltaCrlIndicatorEnabled, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_deltaCrlIndicatorEnabled, put = __cordl_internal_set_deltaCrlIndicatorEnabled)) bool deltaCrlIndicatorEnabled;

  /// @brief Field issuers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_issuers, put = __cordl_internal_set_issuers)) ::System::Collections::ICollection* issuers;

  /// @brief Field issuingDistributionPoint, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_issuingDistributionPoint, put = __cordl_internal_set_issuingDistributionPoint)) ::ArrayW<uint8_t, ::Array<uint8_t>*> issuingDistributionPoint;

  /// @brief Field issuingDistributionPointEnabled, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_issuingDistributionPointEnabled, put = __cordl_internal_set_issuingDistributionPointEnabled)) bool issuingDistributionPointEnabled;

  /// @brief Field maxBaseCrlNumber, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_maxBaseCrlNumber, put = __cordl_internal_set_maxBaseCrlNumber)) ::Org::BouncyCastle::Math::BigInteger* maxBaseCrlNumber;

  /// @brief Field maxCrlNumber, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_maxCrlNumber, put = __cordl_internal_set_maxCrlNumber)) ::Org::BouncyCastle::Math::BigInteger* maxCrlNumber;

  /// @brief Field minCrlNumber, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_minCrlNumber, put = __cordl_internal_set_minCrlNumber)) ::Org::BouncyCastle::Math::BigInteger* minCrlNumber;

  /// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509Selector"
  constexpr operator ::Org::BouncyCastle::X509::Store::IX509Selector*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x25ec644, size 0x58, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method Match, addr 0x25ec808, size 0x710, virtual true, abstract: false, final false
  inline bool Match(::System::Object* obj);

  static inline ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* New_ctor();

  static inline ::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* New_ctor(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* o);

  constexpr ::Org::BouncyCastle::X509::IX509AttributeCertificate* const& __cordl_internal_get_attrCertChecking() const;

  constexpr ::Org::BouncyCastle::X509::IX509AttributeCertificate*& __cordl_internal_get_attrCertChecking();

  constexpr ::Org::BouncyCastle::X509::X509Certificate* const& __cordl_internal_get_certificateChecking() const;

  constexpr ::Org::BouncyCastle::X509::X509Certificate*& __cordl_internal_get_certificateChecking();

  constexpr bool const& __cordl_internal_get_completeCrlEnabled() const;

  constexpr bool& __cordl_internal_get_completeCrlEnabled();

  constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject* const& __cordl_internal_get_dateAndTime() const;

  constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject*& __cordl_internal_get_dateAndTime();

  constexpr bool const& __cordl_internal_get_deltaCrlIndicatorEnabled() const;

  constexpr bool& __cordl_internal_get_deltaCrlIndicatorEnabled();

  constexpr ::System::Collections::ICollection* const& __cordl_internal_get_issuers() const;

  constexpr ::System::Collections::ICollection*& __cordl_internal_get_issuers();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_issuingDistributionPoint() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_issuingDistributionPoint();

  constexpr bool const& __cordl_internal_get_issuingDistributionPointEnabled() const;

  constexpr bool& __cordl_internal_get_issuingDistributionPointEnabled();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_maxBaseCrlNumber() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_maxBaseCrlNumber();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_maxCrlNumber() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_maxCrlNumber();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_minCrlNumber() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_minCrlNumber();

  constexpr void __cordl_internal_set_attrCertChecking(::Org::BouncyCastle::X509::IX509AttributeCertificate* value);

  constexpr void __cordl_internal_set_certificateChecking(::Org::BouncyCastle::X509::X509Certificate* value);

  constexpr void __cordl_internal_set_completeCrlEnabled(bool value);

  constexpr void __cordl_internal_set_dateAndTime(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);

  constexpr void __cordl_internal_set_deltaCrlIndicatorEnabled(bool value);

  constexpr void __cordl_internal_set_issuers(::System::Collections::ICollection* value);

  constexpr void __cordl_internal_set_issuingDistributionPoint(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_issuingDistributionPointEnabled(bool value);

  constexpr void __cordl_internal_set_maxBaseCrlNumber(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_maxCrlNumber(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_minCrlNumber(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x25ec508, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x25ec510, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* o);

  /// @brief Method get_AttrCertChecking, addr 0x25ec744, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* get_AttrCertChecking();

  /// @brief Method get_CertificateChecking, addr 0x25ec69c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Certificate* get_CertificateChecking();

  /// @brief Method get_CompleteCrlEnabled, addr 0x25ec754, size 0x8, virtual false, abstract: false, final false
  inline bool get_CompleteCrlEnabled();

  /// @brief Method get_DateAndTime, addr 0x25ec6ac, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_DateAndTime();

  /// @brief Method get_DeltaCrlIndicatorEnabled, addr 0x25ec768, size 0x8, virtual false, abstract: false, final false
  inline bool get_DeltaCrlIndicatorEnabled();

  /// @brief Method get_Issuers, addr 0x25ec594, size 0x58, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* get_Issuers();

  /// @brief Method get_IssuingDistributionPoint, addr 0x25ec5ec, size 0x58, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_IssuingDistributionPoint();

  /// @brief Method get_IssuingDistributionPointEnabled, addr 0x25ec7e4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IssuingDistributionPointEnabled();

  /// @brief Method get_MaxBaseCrlNumber, addr 0x25ec7f8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_MaxBaseCrlNumber();

  /// @brief Method get_MaxCrlNumber, addr 0x25ec724, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_MaxCrlNumber();

  /// @brief Method get_MinCrlNumber, addr 0x25ec734, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_MinCrlNumber();

  /// @brief Convert to "::Org::BouncyCastle::X509::Store::IX509Selector"
  constexpr ::Org::BouncyCastle::X509::Store::IX509Selector* i___Org__BouncyCastle__X509__Store__IX509Selector() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_AttrCertChecking, addr 0x25ec74c, size 0x8, virtual false, abstract: false, final false
  inline void set_AttrCertChecking(::Org::BouncyCastle::X509::IX509AttributeCertificate* value);

  /// @brief Method set_CertificateChecking, addr 0x25ec6a4, size 0x8, virtual false, abstract: false, final false
  inline void set_CertificateChecking(::Org::BouncyCastle::X509::X509Certificate* value);

  /// @brief Method set_CompleteCrlEnabled, addr 0x25ec75c, size 0xc, virtual false, abstract: false, final false
  inline void set_CompleteCrlEnabled(bool value);

  /// @brief Method set_DateAndTime, addr 0x25ec6b4, size 0x8, virtual false, abstract: false, final false
  inline void set_DateAndTime(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);

  /// @brief Method set_DeltaCrlIndicatorEnabled, addr 0x25ec770, size 0xc, virtual false, abstract: false, final false
  inline void set_DeltaCrlIndicatorEnabled(bool value);

  /// @brief Method set_Issuers, addr 0x25ec6bc, size 0x68, virtual false, abstract: false, final false
  inline void set_Issuers(::System::Collections::ICollection* value);

  /// @brief Method set_IssuingDistributionPoint, addr 0x25ec77c, size 0x68, virtual false, abstract: false, final false
  inline void set_IssuingDistributionPoint(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_IssuingDistributionPointEnabled, addr 0x25ec7ec, size 0xc, virtual false, abstract: false, final false
  inline void set_IssuingDistributionPointEnabled(bool value);

  /// @brief Method set_MaxBaseCrlNumber, addr 0x25ec800, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxBaseCrlNumber(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method set_MaxCrlNumber, addr 0x25ec72c, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxCrlNumber(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method set_MinCrlNumber, addr 0x25ec73c, size 0x8, virtual false, abstract: false, final false
  inline void set_MinCrlNumber(::Org::BouncyCastle::Math::BigInteger* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CrlStoreSelector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509CrlStoreSelector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CrlStoreSelector(X509CrlStoreSelector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CrlStoreSelector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CrlStoreSelector(X509CrlStoreSelector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1850 };

  /// @brief Field certificateChecking, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::X509Certificate* ___certificateChecking;

  /// @brief Field dateAndTime, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Date::DateTimeObject* ___dateAndTime;

  /// @brief Field issuers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ICollection* ___issuers;

  /// @brief Field maxCrlNumber, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___maxCrlNumber;

  /// @brief Field minCrlNumber, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___minCrlNumber;

  /// @brief Field attrCertChecking, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::IX509AttributeCertificate* ___attrCertChecking;

  /// @brief Field completeCrlEnabled, offset: 0x40, size: 0x1, def value: None
  bool ___completeCrlEnabled;

  /// @brief Field deltaCrlIndicatorEnabled, offset: 0x41, size: 0x1, def value: None
  bool ___deltaCrlIndicatorEnabled;

  /// @brief Field issuingDistributionPoint, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___issuingDistributionPoint;

  /// @brief Field issuingDistributionPointEnabled, offset: 0x50, size: 0x1, def value: None
  bool ___issuingDistributionPointEnabled;

  /// @brief Field maxBaseCrlNumber, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___maxBaseCrlNumber;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector, ___certificateChecking) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector, ___dateAndTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector, ___issuers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector, ___maxCrlNumber) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector, ___minCrlNumber) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector, ___attrCertChecking) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector, ___completeCrlEnabled) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector, ___deltaCrlIndicatorEnabled) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector, ___issuingDistributionPoint) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector, ___issuingDistributionPointEnabled) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector, ___maxBaseCrlNumber) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509::Store
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*, "Org.BouncyCastle.X509.Store", "X509CrlStoreSelector");
