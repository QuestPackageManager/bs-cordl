#pragma once
// IWYU pragma private; include "System/Dynamic/InvokeMemberBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvokeMemberBinder)
namespace System::Dynamic {
class DynamicMetaObject;
}
// Forward declare root types
namespace System::Dynamic {
class InvokeMemberBinder;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::InvokeMemberBinder);
// Dependencies System.Dynamic.DynamicMetaObjectBinder
namespace System::Dynamic {
// Is value type: false
// CS Name: System.Dynamic.InvokeMemberBinder
class CORDL_TYPE InvokeMemberBinder : public ::System::Dynamic::DynamicMetaObjectBinder {
public:
  // Declarations
  __declspec(property(get = get_IgnoreCase)) bool IgnoreCase;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IgnoreCase>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IgnoreCase_k__BackingField, put = __cordl_internal_set__IgnoreCase_k__BackingField)) bool _IgnoreCase_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method Bind, addr 0x410fc04, size 0xb8, virtual true, abstract: false, final true
  inline ::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target,
                                                    ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> args);

  /// @brief Method FallbackInvoke, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackInvoke(::System::Dynamic::DynamicMetaObject* target,
                                                              ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> args,
                                                              ::System::Dynamic::DynamicMetaObject* errorSuggestion);

  /// @brief Method FallbackInvokeMember, addr 0x410e740, size 0x10, virtual false, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackInvokeMember(::System::Dynamic::DynamicMetaObject* target,
                                                                    ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> args);

  /// @brief Method FallbackInvokeMember, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackInvokeMember(::System::Dynamic::DynamicMetaObject* target,
                                                                    ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> args,
                                                                    ::System::Dynamic::DynamicMetaObject* errorSuggestion);

  constexpr bool const& __cordl_internal_get__IgnoreCase_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IgnoreCase_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IgnoreCase_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method get_IgnoreCase, addr 0x410fbfc, size 0x8, virtual false, abstract: false, final false
  inline bool get_IgnoreCase();

  /// @brief Method get_Name, addr 0x410fbf4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvokeMemberBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvokeMemberBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvokeMemberBinder(InvokeMemberBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvokeMemberBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvokeMemberBinder(InvokeMemberBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14177 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IgnoreCase>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IgnoreCase_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Dynamic::InvokeMemberBinder, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::InvokeMemberBinder, ____IgnoreCase_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Dynamic::InvokeMemberBinder, 0x28>, "Size mismatch!");

} // namespace System::Dynamic
NEED_NO_BOX(::System::Dynamic::InvokeMemberBinder);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::InvokeMemberBinder*, "System.Dynamic", "InvokeMemberBinder");
