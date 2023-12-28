#pragma once
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
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Principal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3004))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3003))
// CS Name: ::System.Security.Principal::WellKnownAccount*
class CORDL_TYPE WellKnownAccount : public ::System::Object {
public:
  // Declarations
  /// @brief Field <WellKnownValue>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__WellKnownValue_k__BackingField, put = __set__WellKnownValue_k__BackingField))::System::Security::Principal::WellKnownSidType _WellKnownValue_k__BackingField;

  /// @brief Field <IsAbsolute>k__BackingField, offset 0x14, size 0x1
  __declspec(property(get = __get__IsAbsolute_k__BackingField, put = __set__IsAbsolute_k__BackingField)) bool _IsAbsolute_k__BackingField;

  /// @brief Field <Sid>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Sid_k__BackingField, put = __set__Sid_k__BackingField))::StringW _Sid_k__BackingField;

  /// @brief Field <Rid>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__Rid_k__BackingField, put = __set__Rid_k__BackingField))::StringW _Rid_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__Name_k__BackingField, put = __set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Field <SddlForm>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __get__SddlForm_k__BackingField, put = __set__SddlForm_k__BackingField))::StringW _SddlForm_k__BackingField;

  /// @brief Field accounts, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_accounts,
                             put = setStaticF_accounts))::ArrayW<::System::Security::Principal::WellKnownAccount*, ::Array<::System::Security::Principal::WellKnownAccount*>*> accounts;

  __declspec(property(put = set_WellKnownValue))::System::Security::Principal::WellKnownSidType WellKnownValue;

  __declspec(property(get = get_IsAbsolute, put = set_IsAbsolute)) bool IsAbsolute;

  __declspec(property(get = get_Sid, put = set_Sid))::StringW Sid;

  __declspec(property(put = set_Rid))::StringW Rid;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  __declspec(property(get = get_SddlForm, put = set_SddlForm))::StringW SddlForm;

  constexpr ::System::Security::Principal::WellKnownSidType& __get__WellKnownValue_k__BackingField();

  constexpr ::System::Security::Principal::WellKnownSidType const& __get__WellKnownValue_k__BackingField() const;

  constexpr void __set__WellKnownValue_k__BackingField(::System::Security::Principal::WellKnownSidType value);

  constexpr bool& __get__IsAbsolute_k__BackingField();

  constexpr bool const& __get__IsAbsolute_k__BackingField() const;

  constexpr void __set__IsAbsolute_k__BackingField(bool value);

  constexpr ::StringW& __get__Sid_k__BackingField();

  constexpr ::StringW const& __get__Sid_k__BackingField() const;

  constexpr void __set__Sid_k__BackingField(::StringW value);

  constexpr ::StringW& __get__Rid_k__BackingField();

  constexpr ::StringW const& __get__Rid_k__BackingField() const;

  constexpr void __set__Rid_k__BackingField(::StringW value);

  constexpr ::StringW& __get__Name_k__BackingField();

  constexpr ::StringW const& __get__Name_k__BackingField() const;

  constexpr void __set__Name_k__BackingField(::StringW value);

  constexpr ::StringW& __get__SddlForm_k__BackingField();

  constexpr ::StringW const& __get__SddlForm_k__BackingField() const;

  constexpr void __set__SddlForm_k__BackingField(::StringW value);

  static inline void setStaticF_accounts(::ArrayW<::System::Security::Principal::WellKnownAccount*, ::Array<::System::Security::Principal::WellKnownAccount*>*> value);

  static inline ::ArrayW<::System::Security::Principal::WellKnownAccount*, ::Array<::System::Security::Principal::WellKnownAccount*>*> getStaticF_accounts();

  /// @brief Method set_WellKnownValue addr 0x24787a0 size 0x8 virtual false final false
  inline void set_WellKnownValue(::System::Security::Principal::WellKnownSidType value);

  /// @brief Method get_IsAbsolute addr 0x24787a8 size 0x8 virtual false final false
  inline bool get_IsAbsolute();

  /// @brief Method set_IsAbsolute addr 0x24787b0 size 0xc virtual false final false
  inline void set_IsAbsolute(bool value);

  /// @brief Method get_Sid addr 0x24787bc size 0x8 virtual false final false
  inline ::StringW get_Sid();

  /// @brief Method set_Sid addr 0x24787c4 size 0x8 virtual false final false
  inline void set_Sid(::StringW value);

  /// @brief Method set_Rid addr 0x24787cc size 0x8 virtual false final false
  inline void set_Rid(::StringW value);

  /// @brief Method get_Name addr 0x24787d4 size 0x8 virtual false final false
  inline ::StringW get_Name();

  /// @brief Method set_Name addr 0x24787dc size 0x8 virtual false final false
  inline void set_Name(::StringW value);

  /// @brief Method get_SddlForm addr 0x24787e4 size 0x8 virtual false final false
  inline ::StringW get_SddlForm();

  /// @brief Method set_SddlForm addr 0x24787ec size 0x8 virtual false final false
  inline void set_SddlForm(::StringW value);

  /// @brief Method LookupBySid addr 0x2478420 size 0xc0 virtual false final false
  static inline ::System::Security::Principal::WellKnownAccount* LookupBySid(::StringW s);

  /// @brief Method LookupByName addr 0x24772e4 size 0xc0 virtual false final false
  static inline ::System::Security::Principal::WellKnownAccount* LookupByName(::StringW s);

  /// @brief Method LookupBySddlForm addr 0x24784e0 size 0xc0 virtual false final false
  static inline ::System::Security::Principal::WellKnownAccount* LookupBySddlForm(::StringW s);

  static inline ::System::Security::Principal::WellKnownAccount* New_ctor();

  /// @brief Method .ctor addr 0x24787f4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "WellKnownAccount", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WellKnownAccount(WellKnownAccount&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WellKnownAccount", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WellKnownAccount(WellKnownAccount const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WellKnownAccount();

public:
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Principal::WellKnownAccount, 0x38>, "Size mismatch!");

} // namespace System::Security::Principal
NEED_NO_BOX(::System::Security::Principal::WellKnownAccount);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::WellKnownAccount*, "System.Security.Principal", "WellKnownAccount");
