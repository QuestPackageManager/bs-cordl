#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ConvertBinder)
namespace System::Dynamic {
class DynamicMetaObject;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Dynamic {
class ConvertBinder;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::ConvertBinder);
// Type: System.Dynamic::ConvertBinder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::System.Dynamic::ConvertBinder*
class CORDL_TYPE ConvertBinder : public ::System::Dynamic::DynamicMetaObjectBinder {
public:
  // Declarations
  __declspec(property(get = get_Type))::System::Type* Type;

  /// @brief Field <Type>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField))::System::Type* _Type_k__BackingField;

  /// @brief Method Bind, addr 0x2b50a58, size 0xb0, virtual true, abstract: false, final true
  inline ::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target,
                                                    ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> args);

  /// @brief Method FallbackConvert, addr 0x2b50a48, size 0x10, virtual false, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackConvert(::System::Dynamic::DynamicMetaObject* target);

  /// @brief Method FallbackConvert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackConvert(::System::Dynamic::DynamicMetaObject* target, ::System::Dynamic::DynamicMetaObject* errorSuggestion);

  constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type* value);

  /// @brief Method get_Type, addr 0x2b50a40, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConvertBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConvertBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConvertBinder(ConvertBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConvertBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConvertBinder(ConvertBinder const&) = delete;

  /// @brief Field <Type>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____Type_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::ConvertBinder, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Dynamic::ConvertBinder, ____Type_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::Dynamic
NEED_NO_BOX(::System::Dynamic::ConvertBinder);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::ConvertBinder*, "System.Dynamic", "ConvertBinder");
