#pragma once
// IWYU pragma private; include "System/Dynamic/SetMemberBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SetMemberBinder)
namespace System::Dynamic {
class DynamicMetaObject;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Dynamic {
class SetMemberBinder;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::SetMemberBinder);
// Dependencies System.Dynamic.DynamicMetaObjectBinder
namespace System::Dynamic {
// Is value type: false
// CS Name: System.Dynamic.SetMemberBinder
class CORDL_TYPE SetMemberBinder : public ::System::Dynamic::DynamicMetaObjectBinder {
public:
  // Declarations
  __declspec(property(get = get_IgnoreCase)) bool IgnoreCase;

  __declspec(property(get = get_IsStandardBinder)) bool IsStandardBinder;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ReturnType)) ::System::Type* ReturnType;

  /// @brief Field <IgnoreCase>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IgnoreCase_k__BackingField, put = __cordl_internal_set__IgnoreCase_k__BackingField)) bool _IgnoreCase_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method Bind, addr 0x410263c, size 0xd4, virtual true, abstract: false, final true
  inline ::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target,
                                                    ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> args);

  /// @brief Method FallbackSetMember, addr 0x4102718, size 0x10, virtual false, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackSetMember(::System::Dynamic::DynamicMetaObject* target, ::System::Dynamic::DynamicMetaObject* value);

  /// @brief Method FallbackSetMember, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackSetMember(::System::Dynamic::DynamicMetaObject* target, ::System::Dynamic::DynamicMetaObject* value,
                                                                 ::System::Dynamic::DynamicMetaObject* errorSuggestion);

  static inline ::System::Dynamic::SetMemberBinder* New_ctor(::StringW name, bool ignoreCase);

  constexpr bool const& __cordl_internal_get__IgnoreCase_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IgnoreCase_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IgnoreCase_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x410254c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, bool ignoreCase);

  /// @brief Method get_IgnoreCase, addr 0x4102634, size 0x8, virtual false, abstract: false, final false
  inline bool get_IgnoreCase();

  /// @brief Method get_IsStandardBinder, addr 0x4102710, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsStandardBinder();

  /// @brief Method get_Name, addr 0x410262c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ReturnType, addr 0x41025c0, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Type* get_ReturnType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetMemberBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetMemberBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetMemberBinder(SetMemberBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetMemberBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetMemberBinder(SetMemberBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14179 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IgnoreCase>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IgnoreCase_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Dynamic::SetMemberBinder, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::SetMemberBinder, ____IgnoreCase_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Dynamic::SetMemberBinder, 0x28>, "Size mismatch!");

} // namespace System::Dynamic
NEED_NO_BOX(::System::Dynamic::SetMemberBinder);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::SetMemberBinder*, "System.Dynamic", "SetMemberBinder");
