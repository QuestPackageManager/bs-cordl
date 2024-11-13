#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/PkixParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkixParameters)
namespace Org::BouncyCastle::Pkix {
class PkixCertPathChecker;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::X509::Store {
class X509CertStoreSelector;
}
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixParameters);
// Type: Org.BouncyCastle.Pkix::PkixParameters
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 141, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Pkix::PkixParameters*
class CORDL_TYPE PkixParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Date, put = set_Date)) ::Org::BouncyCastle::Utilities::Date::DateTimeObject* Date;

  __declspec(property(get = get_IsAdditionalLocationsEnabled)) bool IsAdditionalLocationsEnabled;

  __declspec(property(get = get_IsAnyPolicyInhibited, put = set_IsAnyPolicyInhibited)) bool IsAnyPolicyInhibited;

  __declspec(property(get = get_IsExplicitPolicyRequired, put = set_IsExplicitPolicyRequired)) bool IsExplicitPolicyRequired;

  __declspec(property(get = get_IsPolicyMappingInhibited, put = set_IsPolicyMappingInhibited)) bool IsPolicyMappingInhibited;

  __declspec(property(get = get_IsPolicyQualifiersRejected, put = set_IsPolicyQualifiersRejected)) bool IsPolicyQualifiersRejected;

  __declspec(property(get = get_IsRevocationEnabled, put = set_IsRevocationEnabled)) bool IsRevocationEnabled;

  __declspec(property(get = get_IsUseDeltasEnabled, put = set_IsUseDeltasEnabled)) bool IsUseDeltasEnabled;

  __declspec(property(get = get_ValidityModel, put = set_ValidityModel)) int32_t ValidityModel;

  /// @brief Field additionalLocationsEnabled, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_additionalLocationsEnabled, put = __cordl_internal_set_additionalLocationsEnabled)) bool additionalLocationsEnabled;

  /// @brief Field additionalStores, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_additionalStores, put = __cordl_internal_set_additionalStores)) ::System::Collections::IList* additionalStores;

  /// @brief Field anyPolicyInhibited, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_anyPolicyInhibited, put = __cordl_internal_set_anyPolicyInhibited)) bool anyPolicyInhibited;

  /// @brief Field attrCertCheckers, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_attrCertCheckers, put = __cordl_internal_set_attrCertCheckers)) ::Org::BouncyCastle::Utilities::Collections::ISet* attrCertCheckers;

  /// @brief Field certPathCheckers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_certPathCheckers, put = __cordl_internal_set_certPathCheckers)) ::System::Collections::IList* certPathCheckers;

  /// @brief Field certSelector, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_certSelector, put = __cordl_internal_set_certSelector)) ::Org::BouncyCastle::X509::Store::IX509Selector* certSelector;

  /// @brief Field date, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_date, put = __cordl_internal_set_date)) ::Org::BouncyCastle::Utilities::Date::DateTimeObject* date;

  /// @brief Field explicitPolicyRequired, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_explicitPolicyRequired, put = __cordl_internal_set_explicitPolicyRequired)) bool explicitPolicyRequired;

  /// @brief Field initialPolicies, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_initialPolicies, put = __cordl_internal_set_initialPolicies)) ::Org::BouncyCastle::Utilities::Collections::ISet* initialPolicies;

  /// @brief Field necessaryACAttributes, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_necessaryACAttributes, put = __cordl_internal_set_necessaryACAttributes)) ::Org::BouncyCastle::Utilities::Collections::ISet* necessaryACAttributes;

  /// @brief Field policyMappingInhibited, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get_policyMappingInhibited, put = __cordl_internal_set_policyMappingInhibited)) bool policyMappingInhibited;

  /// @brief Field policyQualifiersRejected, offset 0x3b, size 0x1
  __declspec(property(get = __cordl_internal_get_policyQualifiersRejected, put = __cordl_internal_set_policyQualifiersRejected)) bool policyQualifiersRejected;

  /// @brief Field prohibitedACAttributes, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_prohibitedACAttributes, put = __cordl_internal_set_prohibitedACAttributes)) ::Org::BouncyCastle::Utilities::Collections::ISet* prohibitedACAttributes;

  /// @brief Field revocationEnabled, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_revocationEnabled, put = __cordl_internal_set_revocationEnabled)) bool revocationEnabled;

  /// @brief Field selector, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_selector, put = __cordl_internal_set_selector)) ::Org::BouncyCastle::X509::Store::IX509Selector* selector;

  /// @brief Field stores, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_stores, put = __cordl_internal_set_stores)) ::System::Collections::IList* stores;

  /// @brief Field trustAnchors, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_trustAnchors, put = __cordl_internal_set_trustAnchors)) ::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors;

  /// @brief Field trustedACIssuers, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_trustedACIssuers, put = __cordl_internal_set_trustedACIssuers)) ::Org::BouncyCastle::Utilities::Collections::ISet* trustedACIssuers;

  /// @brief Field useDeltas, offset 0x8c, size 0x1
  __declspec(property(get = __cordl_internal_get_useDeltas, put = __cordl_internal_set_useDeltas)) bool useDeltas;

  /// @brief Field validityModel, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_validityModel, put = __cordl_internal_set_validityModel)) int32_t validityModel;

  /// @brief Method AddAdditionalStore, addr 0x2536d94, size 0xbc, virtual true, abstract: false, final false
  inline void AddAdditionalStore(::Org::BouncyCastle::X509::Store::IX509Store* store);

  /// @brief Method AddCertPathChecker, addr 0x25363a8, size 0xd0, virtual true, abstract: false, final false
  inline void AddCertPathChecker(::Org::BouncyCastle::Pkix::PkixCertPathChecker* checker);

  /// @brief Method AddStore, addr 0x2536cd8, size 0xbc, virtual true, abstract: false, final false
  inline void AddStore(::Org::BouncyCastle::X509::Store::IX509Store* store);

  /// @brief Method Clone, addr 0x2536478, size 0x94, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method GetAdditionalStores, addr 0x2536e50, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Collections::IList* GetAdditionalStores();

  /// @brief Method GetAttrCertCheckers, addr 0x2537dbc, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetAttrCertCheckers();

  /// @brief Method GetCertPathCheckers, addr 0x2535fb8, size 0x3f0, virtual true, abstract: false, final false
  inline ::System::Collections::IList* GetCertPathCheckers();

  /// @brief Method GetInitialPolicies, addr 0x2535784, size 0x78, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetInitialPolicies();

  /// @brief Method GetNecessaryACAttributes, addr 0x25375ac, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetNecessaryACAttributes();

  /// @brief Method GetProhibitedACAttributes, addr 0x25379b4, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetProhibitedACAttributes();

  /// @brief Method GetStores, addr 0x2536eac, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Collections::IList* GetStores();

  /// @brief Method GetTargetCertConstraints, addr 0x253558c, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::X509::Store::X509CertStoreSelector* GetTargetCertConstraints();

  /// @brief Method GetTargetConstraints, addr 0x2536f1c, size 0xe0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::X509::Store::IX509Selector* GetTargetConstraints();

  /// @brief Method GetTrustAnchors, addr 0x2535060, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetTrustAnchors();

  /// @brief Method GetTrustedACIssuers, addr 0x2537104, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetTrustedACIssuers();

  static inline ::Org::BouncyCastle::Pkix::PkixParameters* New_ctor(::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors);

  /// @brief Method SetAdditionalLocationsEnabled, addr 0x2536f10, size 0xc, virtual true, abstract: false, final false
  inline void SetAdditionalLocationsEnabled(bool enabled);

  /// @brief Method SetAttrCertCheckers, addr 0x2537e1c, size 0x448, virtual true, abstract: false, final false
  inline void SetAttrCertCheckers(::Org::BouncyCastle::Utilities::Collections::ISet* attrCertCheckers);

  /// @brief Method SetCertPathCheckers, addr 0x2535bc0, size 0x3f8, virtual true, abstract: false, final false
  inline void SetCertPathCheckers(::System::Collections::IList* checkers);

  /// @brief Method SetInitialPolicies, addr 0x25357fc, size 0x3c4, virtual true, abstract: false, final false
  inline void SetInitialPolicies(::Org::BouncyCastle::Utilities::Collections::ISet* initialPolicies);

  /// @brief Method SetNecessaryACAttributes, addr 0x253760c, size 0x3a8, virtual true, abstract: false, final false
  inline void SetNecessaryACAttributes(::Org::BouncyCastle::Utilities::Collections::ISet* necessaryACAttributes);

  /// @brief Method SetParams, addr 0x253650c, size 0x390, virtual true, abstract: false, final false
  inline void SetParams(::Org::BouncyCastle::Pkix::PkixParameters* parameters);

  /// @brief Method SetProhibitedACAttributes, addr 0x2537a14, size 0x3a8, virtual true, abstract: false, final false
  inline void SetProhibitedACAttributes(::Org::BouncyCastle::Utilities::Collections::ISet* prohibitedACAttributes);

  /// @brief Method SetStores, addr 0x25368c0, size 0x418, virtual true, abstract: false, final false
  inline void SetStores(::System::Collections::IList* stores);

  /// @brief Method SetTargetCertConstraints, addr 0x253567c, size 0x108, virtual true, abstract: false, final false
  inline void SetTargetCertConstraints(::Org::BouncyCastle::X509::Store::IX509Selector* selector);

  /// @brief Method SetTargetConstraints, addr 0x2536ffc, size 0x108, virtual true, abstract: false, final false
  inline void SetTargetConstraints(::Org::BouncyCastle::X509::Store::IX509Selector* selector);

  /// @brief Method SetTrustAnchors, addr 0x25350c0, size 0x4cc, virtual true, abstract: false, final false
  inline void SetTrustAnchors(::Org::BouncyCastle::Utilities::Collections::ISet* tas);

  /// @brief Method SetTrustedACIssuers, addr 0x2537164, size 0x448, virtual true, abstract: false, final false
  inline void SetTrustedACIssuers(::Org::BouncyCastle::Utilities::Collections::ISet* trustedACIssuers);

  constexpr bool const& __cordl_internal_get_additionalLocationsEnabled() const;

  constexpr bool& __cordl_internal_get_additionalLocationsEnabled();

  constexpr ::System::Collections::IList*& __cordl_internal_get_additionalStores();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_additionalStores() const;

  constexpr bool const& __cordl_internal_get_anyPolicyInhibited() const;

  constexpr bool& __cordl_internal_get_anyPolicyInhibited();

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_attrCertCheckers();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __cordl_internal_get_attrCertCheckers() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_certPathCheckers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_certPathCheckers() const;

  constexpr ::Org::BouncyCastle::X509::Store::IX509Selector*& __cordl_internal_get_certSelector();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::Store::IX509Selector*> const& __cordl_internal_get_certSelector() const;

  constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject*& __cordl_internal_get_date();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Date::DateTimeObject*> const& __cordl_internal_get_date() const;

  constexpr bool const& __cordl_internal_get_explicitPolicyRequired() const;

  constexpr bool& __cordl_internal_get_explicitPolicyRequired();

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_initialPolicies();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __cordl_internal_get_initialPolicies() const;

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_necessaryACAttributes();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __cordl_internal_get_necessaryACAttributes() const;

  constexpr bool const& __cordl_internal_get_policyMappingInhibited() const;

  constexpr bool& __cordl_internal_get_policyMappingInhibited();

  constexpr bool const& __cordl_internal_get_policyQualifiersRejected() const;

  constexpr bool& __cordl_internal_get_policyQualifiersRejected();

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_prohibitedACAttributes();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __cordl_internal_get_prohibitedACAttributes() const;

  constexpr bool const& __cordl_internal_get_revocationEnabled() const;

  constexpr bool& __cordl_internal_get_revocationEnabled();

  constexpr ::Org::BouncyCastle::X509::Store::IX509Selector*& __cordl_internal_get_selector();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::Store::IX509Selector*> const& __cordl_internal_get_selector() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_stores();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_stores() const;

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_trustAnchors();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __cordl_internal_get_trustAnchors() const;

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_trustedACIssuers();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __cordl_internal_get_trustedACIssuers() const;

  constexpr bool const& __cordl_internal_get_useDeltas() const;

  constexpr bool& __cordl_internal_get_useDeltas();

  constexpr int32_t const& __cordl_internal_get_validityModel() const;

  constexpr int32_t& __cordl_internal_get_validityModel();

  constexpr void __cordl_internal_set_additionalLocationsEnabled(bool value);

  constexpr void __cordl_internal_set_additionalStores(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_anyPolicyInhibited(bool value);

  constexpr void __cordl_internal_set_attrCertCheckers(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr void __cordl_internal_set_certPathCheckers(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_certSelector(::Org::BouncyCastle::X509::Store::IX509Selector* value);

  constexpr void __cordl_internal_set_date(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);

  constexpr void __cordl_internal_set_explicitPolicyRequired(bool value);

  constexpr void __cordl_internal_set_initialPolicies(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr void __cordl_internal_set_necessaryACAttributes(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr void __cordl_internal_set_policyMappingInhibited(bool value);

  constexpr void __cordl_internal_set_policyQualifiersRejected(bool value);

  constexpr void __cordl_internal_set_prohibitedACAttributes(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr void __cordl_internal_set_revocationEnabled(bool value);

  constexpr void __cordl_internal_set_selector(::Org::BouncyCastle::X509::Store::IX509Selector* value);

  constexpr void __cordl_internal_set_stores(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_trustAnchors(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr void __cordl_internal_set_trustedACIssuers(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr void __cordl_internal_set_useDeltas(bool value);

  constexpr void __cordl_internal_set_validityModel(int32_t value);

  /// @brief Method .ctor, addr 0x2534ea4, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors);

  /// @brief Method get_Date, addr 0x2535050, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_Date();

  /// @brief Method get_IsAdditionalLocationsEnabled, addr 0x2536f08, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsAdditionalLocationsEnabled();

  /// @brief Method get_IsAnyPolicyInhibited, addr 0x2535014, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsAnyPolicyInhibited();

  /// @brief Method get_IsExplicitPolicyRequired, addr 0x2535000, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsExplicitPolicyRequired();

  /// @brief Method get_IsPolicyMappingInhibited, addr 0x2535028, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPolicyMappingInhibited();

  /// @brief Method get_IsPolicyQualifiersRejected, addr 0x253503c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPolicyQualifiersRejected();

  /// @brief Method get_IsRevocationEnabled, addr 0x2534fec, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsRevocationEnabled();

  /// @brief Method get_IsUseDeltasEnabled, addr 0x253689c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsUseDeltasEnabled();

  /// @brief Method get_ValidityModel, addr 0x25368b0, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ValidityModel();

  /// @brief Method set_Date, addr 0x2535058, size 0x8, virtual true, abstract: false, final false
  inline void set_Date(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);

  /// @brief Method set_IsAnyPolicyInhibited, addr 0x253501c, size 0xc, virtual true, abstract: false, final false
  inline void set_IsAnyPolicyInhibited(bool value);

  /// @brief Method set_IsExplicitPolicyRequired, addr 0x2535008, size 0xc, virtual true, abstract: false, final false
  inline void set_IsExplicitPolicyRequired(bool value);

  /// @brief Method set_IsPolicyMappingInhibited, addr 0x2535030, size 0xc, virtual true, abstract: false, final false
  inline void set_IsPolicyMappingInhibited(bool value);

  /// @brief Method set_IsPolicyQualifiersRejected, addr 0x2535044, size 0xc, virtual true, abstract: false, final false
  inline void set_IsPolicyQualifiersRejected(bool value);

  /// @brief Method set_IsRevocationEnabled, addr 0x2534ff4, size 0xc, virtual true, abstract: false, final false
  inline void set_IsRevocationEnabled(bool value);

  /// @brief Method set_IsUseDeltasEnabled, addr 0x25368a4, size 0xc, virtual true, abstract: false, final false
  inline void set_IsUseDeltasEnabled(bool value);

  /// @brief Method set_ValidityModel, addr 0x25368b8, size 0x8, virtual true, abstract: false, final false
  inline void set_ValidityModel(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkixParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixParameters(PkixParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixParameters(PkixParameters const&) = delete;

  /// @brief Field trustAnchors, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___trustAnchors;

  /// @brief Field date, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Date::DateTimeObject* ___date;

  /// @brief Field certPathCheckers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::IList* ___certPathCheckers;

  /// @brief Field revocationEnabled, offset: 0x28, size: 0x1, def value: None
  bool ___revocationEnabled;

  /// @brief Field initialPolicies, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___initialPolicies;

  /// @brief Field explicitPolicyRequired, offset: 0x38, size: 0x1, def value: None
  bool ___explicitPolicyRequired;

  /// @brief Field anyPolicyInhibited, offset: 0x39, size: 0x1, def value: None
  bool ___anyPolicyInhibited;

  /// @brief Field policyMappingInhibited, offset: 0x3a, size: 0x1, def value: None
  bool ___policyMappingInhibited;

  /// @brief Field policyQualifiersRejected, offset: 0x3b, size: 0x1, def value: None
  bool ___policyQualifiersRejected;

  /// @brief Field certSelector, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::Store::IX509Selector* ___certSelector;

  /// @brief Field stores, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::IList* ___stores;

  /// @brief Field selector, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::Store::IX509Selector* ___selector;

  /// @brief Field additionalLocationsEnabled, offset: 0x58, size: 0x1, def value: None
  bool ___additionalLocationsEnabled;

  /// @brief Field additionalStores, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::IList* ___additionalStores;

  /// @brief Field trustedACIssuers, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___trustedACIssuers;

  /// @brief Field necessaryACAttributes, offset: 0x70, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___necessaryACAttributes;

  /// @brief Field prohibitedACAttributes, offset: 0x78, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___prohibitedACAttributes;

  /// @brief Field attrCertCheckers, offset: 0x80, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___attrCertCheckers;

  /// @brief Field validityModel, offset: 0x88, size: 0x4, def value: None
  int32_t ___validityModel;

  /// @brief Field useDeltas, offset: 0x8c, size: 0x1, def value: None
  bool ___useDeltas;

  /// @brief Field ChainValidityModel offset 0xffffffff size 0x4
  static constexpr int32_t ChainValidityModel{ static_cast<int32_t>(0x1) };

  /// @brief Field PkixValidityModel offset 0xffffffff size 0x4
  static constexpr int32_t PkixValidityModel{ static_cast<int32_t>(0x0) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1713 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixParameters, 0x90>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixParameters, ___trustAnchors) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixParameters, ___date) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixParameters, ___certPathCheckers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixParameters, ___revocationEnabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixParameters, ___initialPolicies) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixParameters, ___explicitPolicyRequired) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixParameters, ___anyPolicyInhibited) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixParameters, ___policyMappingInhibited) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixParameters, ___policyQualifiersRejected) == 0x3b, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixParameters, ___certSelector) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixParameters, ___stores) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixParameters, ___selector) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixParameters, ___additionalLocationsEnabled) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixParameters, ___additionalStores) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixParameters, ___trustedACIssuers) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixParameters, ___necessaryACAttributes) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixParameters, ___prohibitedACAttributes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixParameters, ___attrCertCheckers) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixParameters, ___validityModel) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixParameters, ___useDeltas) == 0x8c, "Offset mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixParameters*, "Org.BouncyCastle.Pkix", "PkixParameters");
