#pragma once
// IWYU pragma private; include "System/Security/Principal/WellKnownAccount.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Principal/zzzz__WellKnownSidType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WellKnownAccount)
namespace System::Security::Principal {
struct WellKnownSidType;
}
// Forward declare root types
namespace System::Security::Principal {
class WellKnownAccount;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Principal::WellKnownAccount);
// Type: System.Security.Principal::WellKnownAccount
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Principal {
// Is value type: false
// CS Name: ::System.Security.Principal::WellKnownAccount*
class CORDL_TYPE WellKnownAccount : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsAbsolute, put = set_IsAbsolute)) bool IsAbsolute;

  __declspec(property(get = get_Name, put = set_Name)) ::StringW Name;

  __declspec(property(put = set_Rid)) ::StringW Rid;

  __declspec(property(get = get_SddlForm, put = set_SddlForm)) ::StringW SddlForm;

  __declspec(property(get = get_Sid, put = set_Sid)) ::StringW Sid;

  __declspec(property(put = set_WellKnownValue)) ::System::Security::Principal::WellKnownSidType WellKnownValue;

  /// @brief Field <IsAbsolute>k__BackingField, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get__IsAbsolute_k__BackingField, put = __cordl_internal_set__IsAbsolute_k__BackingField)) bool _IsAbsolute_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Field <Rid>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Rid_k__BackingField, put = __cordl_internal_set__Rid_k__BackingField)) ::StringW _Rid_k__BackingField;

  /// @brief Field <SddlForm>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__SddlForm_k__BackingField, put = __cordl_internal_set__SddlForm_k__BackingField)) ::StringW _SddlForm_k__BackingField;

  /// @brief Field <Sid>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Sid_k__BackingField, put = __cordl_internal_set__Sid_k__BackingField)) ::StringW _Sid_k__BackingField;

  /// @brief Field <WellKnownValue>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__WellKnownValue_k__BackingField,
                      put = __cordl_internal_set__WellKnownValue_k__BackingField)) ::System::Security::Principal::WellKnownSidType _WellKnownValue_k__BackingField;

  /// @brief Field accounts, offset 0xffffffff, size 0x8
  static
      __declspec(property(get = getStaticF_accounts, put = setStaticF_accounts)) ::ArrayW<::System::Security::Principal::WellKnownAccount*, ::Array<::System::Security::Principal::WellKnownAccount*>*>
          accounts;

  /// @brief Method LookupByName, addr 0x3c439f8, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Security::Principal::WellKnownAccount* LookupByName(::StringW s);

  /// @brief Method LookupBySddlForm, addr 0x3c44b9c, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Security::Principal::WellKnownAccount* LookupBySddlForm(::StringW s);

  /// @brief Method LookupBySid, addr 0x3c44adc, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Security::Principal::WellKnownAccount* LookupBySid(::StringW s);

  static inline ::System::Security::Principal::WellKnownAccount* New_ctor();

  constexpr bool const& __cordl_internal_get__IsAbsolute_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsAbsolute_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Rid_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Rid_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SddlForm_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SddlForm_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Sid_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Sid_k__BackingField();

  constexpr ::System::Security::Principal::WellKnownSidType const& __cordl_internal_get__WellKnownValue_k__BackingField() const;

  constexpr ::System::Security::Principal::WellKnownSidType& __cordl_internal_get__WellKnownValue_k__BackingField();

  constexpr void __cordl_internal_set__IsAbsolute_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Rid_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SddlForm_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Sid_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__WellKnownValue_k__BackingField(::System::Security::Principal::WellKnownSidType value);

  /// @brief Method .ctor, addr 0x3c44ec0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Security::Principal::WellKnownAccount*, ::Array<::System::Security::Principal::WellKnownAccount*>*> getStaticF_accounts();

  /// @brief Method get_IsAbsolute, addr 0x3c44e74, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsAbsolute();

  /// @brief Method get_Name, addr 0x3c44ea0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_SddlForm, addr 0x3c44eb0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SddlForm();

  /// @brief Method get_Sid, addr 0x3c44e88, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Sid();

  static inline void setStaticF_accounts(::ArrayW<::System::Security::Principal::WellKnownAccount*, ::Array<::System::Security::Principal::WellKnownAccount*>*> value);

  /// @brief Method set_IsAbsolute, addr 0x3c44e7c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsAbsolute(bool value);

  /// @brief Method set_Name, addr 0x3c44ea8, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_Rid, addr 0x3c44e98, size 0x8, virtual false, abstract: false, final false
  inline void set_Rid(::StringW value);

  /// @brief Method set_SddlForm, addr 0x3c44eb8, size 0x8, virtual false, abstract: false, final false
  inline void set_SddlForm(::StringW value);

  /// @brief Method set_Sid, addr 0x3c44e90, size 0x8, virtual false, abstract: false, final false
  inline void set_Sid(::StringW value);

  /// @brief Method set_WellKnownValue, addr 0x3c44e6c, size 0x8, virtual false, abstract: false, final false
  inline void set_WellKnownValue(::System::Security::Principal::WellKnownSidType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WellKnownAccount();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WellKnownAccount", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WellKnownAccount(WellKnownAccount&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WellKnownAccount", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WellKnownAccount(WellKnownAccount const&) = delete;

  /// @brief Field <WellKnownValue>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::System::Security::Principal::WellKnownSidType ____WellKnownValue_k__BackingField;

  /// @brief Field <IsAbsolute>k__BackingField, offset: 0x14, size: 0x1, def value: None
  bool ____IsAbsolute_k__BackingField;

  /// @brief Field <Sid>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Sid_k__BackingField;

  /// @brief Field <Rid>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Rid_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <SddlForm>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____SddlForm_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3002 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Principal::WellKnownAccount, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Security::Principal::WellKnownAccount, ____WellKnownValue_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Principal::WellKnownAccount, ____IsAbsolute_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Security::Principal::WellKnownAccount, ____Sid_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Principal::WellKnownAccount, ____Rid_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Principal::WellKnownAccount, ____Name_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Principal::WellKnownAccount, ____SddlForm_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace System::Security::Principal
NEED_NO_BOX(::System::Security::Principal::WellKnownAccount);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::WellKnownAccount*, "System.Security.Principal", "WellKnownAccount");
