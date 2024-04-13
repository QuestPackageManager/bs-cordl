#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GetMemberBinder)
namespace System::Dynamic {
class DynamicMetaObject;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Dynamic {
class GetMemberBinder;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::GetMemberBinder);
// Type: System.Dynamic::GetMemberBinder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::System.Dynamic::GetMemberBinder*
class CORDL_TYPE GetMemberBinder : public ::System::Dynamic::DynamicMetaObjectBinder {
public:
  // Declarations
  __declspec(property(get = get_IgnoreCase)) bool IgnoreCase;

  __declspec(property(get = get_IsStandardBinder)) bool IsStandardBinder;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_ReturnType))::System::Type* ReturnType;

  /// @brief Field <IgnoreCase>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IgnoreCase_k__BackingField, put = __cordl_internal_set__IgnoreCase_k__BackingField)) bool _IgnoreCase_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Method Bind, addr 0x2b5792c, size 0xa8, virtual true, abstract: false, final true
  inline ::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target,
                                                    ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> args);

  /// @brief Method FallbackGetMember, addr 0x2b564c0, size 0x10, virtual false, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackGetMember(::System::Dynamic::DynamicMetaObject* target);

  /// @brief Method FallbackGetMember, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackGetMember(::System::Dynamic::DynamicMetaObject* target, ::System::Dynamic::DynamicMetaObject* errorSuggestion);

  static inline ::System::Dynamic::GetMemberBinder* New_ctor(::StringW name, bool ignoreCase);

  constexpr bool const& __cordl_internal_get__IgnoreCase_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IgnoreCase_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IgnoreCase_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x2b57840, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, bool ignoreCase);

  /// @brief Method get_IgnoreCase, addr 0x2b57924, size 0x8, virtual false, abstract: false, final false
  inline bool get_IgnoreCase();

  /// @brief Method get_IsStandardBinder, addr 0x2b57a08, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsStandardBinder();

  /// @brief Method get_Name, addr 0x2b5791c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ReturnType, addr 0x2b578b0, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Type* get_ReturnType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetMemberBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetMemberBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetMemberBinder(GetMemberBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetMemberBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetMemberBinder(GetMemberBinder const&) = delete;

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IgnoreCase>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IgnoreCase_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::GetMemberBinder, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Dynamic::GetMemberBinder, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::GetMemberBinder, ____IgnoreCase_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace System::Dynamic
NEED_NO_BOX(::System::Dynamic::GetMemberBinder);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::GetMemberBinder*, "System.Dynamic", "GetMemberBinder");
