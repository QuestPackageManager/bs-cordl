#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkixParameters)
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPathChecker;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::X509::Store {
class X509CertStoreSelector;
}
namespace System {
class Object;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixParameters);
// Type: Org.BouncyCastle.Pkix::PkixParameters
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 141, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1713))
// CS Name: ::Org.BouncyCastle.Pkix::PkixParameters*
class CORDL_TYPE PkixParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field trustAnchors, offset 0x10, size 0x8
  __declspec(property(get = __get_trustAnchors, put = __set_trustAnchors))::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors;

  /// @brief Field date, offset 0x18, size 0x8
  __declspec(property(get = __get_date, put = __set_date))::Org::BouncyCastle::Utilities::Date::DateTimeObject* date;

  /// @brief Field certPathCheckers, offset 0x20, size 0x8
  __declspec(property(get = __get_certPathCheckers, put = __set_certPathCheckers))::System::Collections::IList* certPathCheckers;

  /// @brief Field revocationEnabled, offset 0x28, size 0x1
  __declspec(property(get = __get_revocationEnabled, put = __set_revocationEnabled)) bool revocationEnabled;

  /// @brief Field initialPolicies, offset 0x30, size 0x8
  __declspec(property(get = __get_initialPolicies, put = __set_initialPolicies))::Org::BouncyCastle::Utilities::Collections::ISet* initialPolicies;

  /// @brief Field explicitPolicyRequired, offset 0x38, size 0x1
  __declspec(property(get = __get_explicitPolicyRequired, put = __set_explicitPolicyRequired)) bool explicitPolicyRequired;

  /// @brief Field anyPolicyInhibited, offset 0x39, size 0x1
  __declspec(property(get = __get_anyPolicyInhibited, put = __set_anyPolicyInhibited)) bool anyPolicyInhibited;

  /// @brief Field policyMappingInhibited, offset 0x3a, size 0x1
  __declspec(property(get = __get_policyMappingInhibited, put = __set_policyMappingInhibited)) bool policyMappingInhibited;

  /// @brief Field policyQualifiersRejected, offset 0x3b, size 0x1
  __declspec(property(get = __get_policyQualifiersRejected, put = __set_policyQualifiersRejected)) bool policyQualifiersRejected;

  /// @brief Field certSelector, offset 0x40, size 0x8
  __declspec(property(get = __get_certSelector, put = __set_certSelector))::Org::BouncyCastle::X509::Store::IX509Selector* certSelector;

  /// @brief Field stores, offset 0x48, size 0x8
  __declspec(property(get = __get_stores, put = __set_stores))::System::Collections::IList* stores;

  /// @brief Field selector, offset 0x50, size 0x8
  __declspec(property(get = __get_selector, put = __set_selector))::Org::BouncyCastle::X509::Store::IX509Selector* selector;

  /// @brief Field additionalLocationsEnabled, offset 0x58, size 0x1
  __declspec(property(get = __get_additionalLocationsEnabled, put = __set_additionalLocationsEnabled)) bool additionalLocationsEnabled;

  /// @brief Field additionalStores, offset 0x60, size 0x8
  __declspec(property(get = __get_additionalStores, put = __set_additionalStores))::System::Collections::IList* additionalStores;

  /// @brief Field trustedACIssuers, offset 0x68, size 0x8
  __declspec(property(get = __get_trustedACIssuers, put = __set_trustedACIssuers))::Org::BouncyCastle::Utilities::Collections::ISet* trustedACIssuers;

  /// @brief Field necessaryACAttributes, offset 0x70, size 0x8
  __declspec(property(get = __get_necessaryACAttributes, put = __set_necessaryACAttributes))::Org::BouncyCastle::Utilities::Collections::ISet* necessaryACAttributes;

  /// @brief Field prohibitedACAttributes, offset 0x78, size 0x8
  __declspec(property(get = __get_prohibitedACAttributes, put = __set_prohibitedACAttributes))::Org::BouncyCastle::Utilities::Collections::ISet* prohibitedACAttributes;

  /// @brief Field attrCertCheckers, offset 0x80, size 0x8
  __declspec(property(get = __get_attrCertCheckers, put = __set_attrCertCheckers))::Org::BouncyCastle::Utilities::Collections::ISet* attrCertCheckers;

  /// @brief Field validityModel, offset 0x88, size 0x4
  __declspec(property(get = __get_validityModel, put = __set_validityModel)) int32_t validityModel;

  /// @brief Field useDeltas, offset 0x8c, size 0x1
  __declspec(property(get = __get_useDeltas, put = __set_useDeltas)) bool useDeltas;

  __declspec(property(get = get_IsRevocationEnabled, put = set_IsRevocationEnabled)) bool IsRevocationEnabled;

  __declspec(property(get = get_IsExplicitPolicyRequired, put = set_IsExplicitPolicyRequired)) bool IsExplicitPolicyRequired;

  __declspec(property(get = get_IsAnyPolicyInhibited, put = set_IsAnyPolicyInhibited)) bool IsAnyPolicyInhibited;

  __declspec(property(get = get_IsPolicyMappingInhibited, put = set_IsPolicyMappingInhibited)) bool IsPolicyMappingInhibited;

  __declspec(property(get = get_IsPolicyQualifiersRejected, put = set_IsPolicyQualifiersRejected)) bool IsPolicyQualifiersRejected;

  __declspec(property(get = get_Date, put = set_Date))::Org::BouncyCastle::Utilities::Date::DateTimeObject* Date;

  __declspec(property(get = get_IsUseDeltasEnabled, put = set_IsUseDeltasEnabled)) bool IsUseDeltasEnabled;

  __declspec(property(get = get_ValidityModel, put = set_ValidityModel)) int32_t ValidityModel;

  __declspec(property(get = get_IsAdditionalLocationsEnabled)) bool IsAdditionalLocationsEnabled;

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __get_trustAnchors();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __get_trustAnchors() const;

  constexpr void __set_trustAnchors(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject*& __get_date();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Date::DateTimeObject*> const& __get_date() const;

  constexpr void __set_date(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);

  constexpr ::System::Collections::IList*& __get_certPathCheckers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_certPathCheckers() const;

  constexpr void __set_certPathCheckers(::System::Collections::IList* value);

  constexpr bool& __get_revocationEnabled();

  constexpr bool const& __get_revocationEnabled() const;

  constexpr void __set_revocationEnabled(bool value);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __get_initialPolicies();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __get_initialPolicies() const;

  constexpr void __set_initialPolicies(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr bool& __get_explicitPolicyRequired();

  constexpr bool const& __get_explicitPolicyRequired() const;

  constexpr void __set_explicitPolicyRequired(bool value);

  constexpr bool& __get_anyPolicyInhibited();

  constexpr bool const& __get_anyPolicyInhibited() const;

  constexpr void __set_anyPolicyInhibited(bool value);

  constexpr bool& __get_policyMappingInhibited();

  constexpr bool const& __get_policyMappingInhibited() const;

  constexpr void __set_policyMappingInhibited(bool value);

  constexpr bool& __get_policyQualifiersRejected();

  constexpr bool const& __get_policyQualifiersRejected() const;

  constexpr void __set_policyQualifiersRejected(bool value);

  constexpr ::Org::BouncyCastle::X509::Store::IX509Selector*& __get_certSelector();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::Store::IX509Selector*> const& __get_certSelector() const;

  constexpr void __set_certSelector(::Org::BouncyCastle::X509::Store::IX509Selector* value);

  constexpr ::System::Collections::IList*& __get_stores();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_stores() const;

  constexpr void __set_stores(::System::Collections::IList* value);

  constexpr ::Org::BouncyCastle::X509::Store::IX509Selector*& __get_selector();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::Store::IX509Selector*> const& __get_selector() const;

  constexpr void __set_selector(::Org::BouncyCastle::X509::Store::IX509Selector* value);

  constexpr bool& __get_additionalLocationsEnabled();

  constexpr bool const& __get_additionalLocationsEnabled() const;

  constexpr void __set_additionalLocationsEnabled(bool value);

  constexpr ::System::Collections::IList*& __get_additionalStores();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_additionalStores() const;

  constexpr void __set_additionalStores(::System::Collections::IList* value);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __get_trustedACIssuers();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __get_trustedACIssuers() const;

  constexpr void __set_trustedACIssuers(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __get_necessaryACAttributes();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __get_necessaryACAttributes() const;

  constexpr void __set_necessaryACAttributes(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __get_prohibitedACAttributes();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __get_prohibitedACAttributes() const;

  constexpr void __set_prohibitedACAttributes(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __get_attrCertCheckers();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __get_attrCertCheckers() const;

  constexpr void __set_attrCertCheckers(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr int32_t& __get_validityModel();

  constexpr int32_t const& __get_validityModel() const;

  constexpr void __set_validityModel(int32_t value);

  constexpr bool& __get_useDeltas();

  constexpr bool const& __get_useDeltas() const;

  constexpr void __set_useDeltas(bool value);

  static inline ::Org::BouncyCastle::Pkix::PkixParameters* New_ctor(::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors);

  /// @brief Method .ctor addr 0x10ec470 size 0x160 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors);

  /// @brief Method get_IsRevocationEnabled addr 0x10ec5d0 size 0x8 virtual true final false
  inline bool get_IsRevocationEnabled();

  /// @brief Method set_IsRevocationEnabled addr 0x10ec5d8 size 0xc virtual true final false
  inline void set_IsRevocationEnabled(bool value);

  /// @brief Method get_IsExplicitPolicyRequired addr 0x10ec5e4 size 0x8 virtual true final false
  inline bool get_IsExplicitPolicyRequired();

  /// @brief Method set_IsExplicitPolicyRequired addr 0x10ec5ec size 0xc virtual true final false
  inline void set_IsExplicitPolicyRequired(bool value);

  /// @brief Method get_IsAnyPolicyInhibited addr 0x10ec5f8 size 0x8 virtual true final false
  inline bool get_IsAnyPolicyInhibited();

  /// @brief Method set_IsAnyPolicyInhibited addr 0x10ec600 size 0xc virtual true final false
  inline void set_IsAnyPolicyInhibited(bool value);

  /// @brief Method get_IsPolicyMappingInhibited addr 0x10ec60c size 0x8 virtual true final false
  inline bool get_IsPolicyMappingInhibited();

  /// @brief Method set_IsPolicyMappingInhibited addr 0x10ec614 size 0xc virtual true final false
  inline void set_IsPolicyMappingInhibited(bool value);

  /// @brief Method get_IsPolicyQualifiersRejected addr 0x10ec620 size 0x8 virtual true final false
  inline bool get_IsPolicyQualifiersRejected();

  /// @brief Method set_IsPolicyQualifiersRejected addr 0x10ec628 size 0xc virtual true final false
  inline void set_IsPolicyQualifiersRejected(bool value);

  /// @brief Method get_Date addr 0x10ec634 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_Date();

  /// @brief Method set_Date addr 0x10ec63c size 0x8 virtual true final false
  inline void set_Date(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);

  /// @brief Method GetTrustAnchors addr 0x10ec644 size 0x68 virtual true final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetTrustAnchors();

  /// @brief Method SetTrustAnchors addr 0x10ec6ac size 0x4dc virtual true final false
  inline void SetTrustAnchors(::Org::BouncyCastle::Utilities::Collections::ISet* tas);

  /// @brief Method GetTargetCertConstraints addr 0x10ecb88 size 0xf0 virtual true final false
  inline ::Org::BouncyCastle::X509::Store::X509CertStoreSelector* GetTargetCertConstraints();

  /// @brief Method SetTargetCertConstraints addr 0x10ecc78 size 0x108 virtual true final false
  inline void SetTargetCertConstraints(::Org::BouncyCastle::X509::Store::IX509Selector* selector);

  /// @brief Method GetInitialPolicies addr 0x10ecd80 size 0x84 virtual true final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetInitialPolicies();

  /// @brief Method SetInitialPolicies addr 0x10ece04 size 0x3cc virtual true final false
  inline void SetInitialPolicies(::Org::BouncyCastle::Utilities::Collections::ISet* initialPolicies);

  /// @brief Method SetCertPathCheckers addr 0x10ed1d0 size 0x3fc virtual true final false
  inline void SetCertPathCheckers(::System::Collections::IList* checkers);

  /// @brief Method GetCertPathCheckers addr 0x10ed5cc size 0x3f0 virtual true final false
  inline ::System::Collections::IList* GetCertPathCheckers();

  /// @brief Method AddCertPathChecker addr 0x10ed9bc size 0xd0 virtual true final false
  inline void AddCertPathChecker(::Org::BouncyCastle::Pkix::PkixCertPathChecker* checker);

  /// @brief Method Clone addr 0x10eda8c size 0x94 virtual true final false
  inline ::System::Object* Clone();

  /// @brief Method SetParams addr 0x10edb20 size 0x394 virtual true final false
  inline void SetParams(::Org::BouncyCastle::Pkix::PkixParameters* parameters);

  /// @brief Method get_IsUseDeltasEnabled addr 0x10edeb4 size 0x8 virtual true final false
  inline bool get_IsUseDeltasEnabled();

  /// @brief Method set_IsUseDeltasEnabled addr 0x10edebc size 0xc virtual true final false
  inline void set_IsUseDeltasEnabled(bool value);

  /// @brief Method get_ValidityModel addr 0x10edec8 size 0x8 virtual true final false
  inline int32_t get_ValidityModel();

  /// @brief Method set_ValidityModel addr 0x10eded0 size 0x8 virtual true final false
  inline void set_ValidityModel(int32_t value);

  /// @brief Method SetStores addr 0x10eded8 size 0x41c virtual true final false
  inline void SetStores(::System::Collections::IList* stores);

  /// @brief Method AddStore addr 0x10ee2f4 size 0xbc virtual true final false
  inline void AddStore(::Org::BouncyCastle::X509::Store::IX509Store* store);

  /// @brief Method AddAdditionalStore addr 0x10ee3b0 size 0xbc virtual true final false
  inline void AddAdditionalStore(::Org::BouncyCastle::X509::Store::IX509Store* store);

  /// @brief Method GetAdditionalStores addr 0x10ee46c size 0x5c virtual true final false
  inline ::System::Collections::IList* GetAdditionalStores();

  /// @brief Method GetStores addr 0x10ee4c8 size 0x5c virtual true final false
  inline ::System::Collections::IList* GetStores();

  /// @brief Method get_IsAdditionalLocationsEnabled addr 0x10ee524 size 0x8 virtual true final false
  inline bool get_IsAdditionalLocationsEnabled();

  /// @brief Method SetAdditionalLocationsEnabled addr 0x10ee52c size 0xc virtual true final false
  inline void SetAdditionalLocationsEnabled(bool enabled);

  /// @brief Method GetTargetConstraints addr 0x10ee538 size 0xe0 virtual true final false
  inline ::Org::BouncyCastle::X509::Store::IX509Selector* GetTargetConstraints();

  /// @brief Method SetTargetConstraints addr 0x10ee618 size 0x108 virtual true final false
  inline void SetTargetConstraints(::Org::BouncyCastle::X509::Store::IX509Selector* selector);

  /// @brief Method GetTrustedACIssuers addr 0x10ee720 size 0x68 virtual true final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetTrustedACIssuers();

  /// @brief Method SetTrustedACIssuers addr 0x10ee788 size 0x458 virtual true final false
  inline void SetTrustedACIssuers(::Org::BouncyCastle::Utilities::Collections::ISet* trustedACIssuers);

  /// @brief Method GetNecessaryACAttributes addr 0x10eebe0 size 0x68 virtual true final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetNecessaryACAttributes();

  /// @brief Method SetNecessaryACAttributes addr 0x10eec48 size 0x3b4 virtual true final false
  inline void SetNecessaryACAttributes(::Org::BouncyCastle::Utilities::Collections::ISet* necessaryACAttributes);

  /// @brief Method GetProhibitedACAttributes addr 0x10eeffc size 0x68 virtual true final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetProhibitedACAttributes();

  /// @brief Method SetProhibitedACAttributes addr 0x10ef064 size 0x3b4 virtual true final false
  inline void SetProhibitedACAttributes(::Org::BouncyCastle::Utilities::Collections::ISet* prohibitedACAttributes);

  /// @brief Method GetAttrCertCheckers addr 0x10ef418 size 0x68 virtual true final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetAttrCertCheckers();

  /// @brief Method SetAttrCertCheckers addr 0x10ef480 size 0x458 virtual true final false
  inline void SetAttrCertCheckers(::Org::BouncyCastle::Utilities::Collections::ISet* attrCertCheckers);

  // Ctor Parameters [CppParam { name: "", ty: "PkixParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixParameters(PkixParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixParameters(PkixParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixParameters();

public:
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

  /// @brief Field PkixValidityModel offset 0xffffffff size 0x4
  static constexpr int32_t PkixValidityModel{ static_cast<int32_t>(0x0) };

  /// @brief Field ChainValidityModel offset 0xffffffff size 0x4
  static constexpr int32_t ChainValidityModel{ static_cast<int32_t>(0x1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixParameters, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixParameters*, "Org.BouncyCastle.Pkix", "PkixParameters");
