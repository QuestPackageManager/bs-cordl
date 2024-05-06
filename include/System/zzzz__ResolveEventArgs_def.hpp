#pragma once
// IWYU pragma private; include "System/ResolveEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResolveEventArgs)
namespace System::Reflection {
class Assembly;
}
// Forward declare root types
namespace System {
class ResolveEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::ResolveEventArgs);
// Type: System::ResolveEventArgs
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::ResolveEventArgs*
class CORDL_TYPE ResolveEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Field <RequestingAssembly>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__RequestingAssembly_k__BackingField,
                      put = __cordl_internal_set__RequestingAssembly_k__BackingField))::System::Reflection::Assembly* _RequestingAssembly_k__BackingField;

  static inline ::System::ResolveEventArgs* New_ctor(::StringW name);

  static inline ::System::ResolveEventArgs* New_ctor(::StringW name, ::System::Reflection::Assembly* requestingAssembly);

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr ::System::Reflection::Assembly*& __cordl_internal_get__RequestingAssembly_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> const& __cordl_internal_get__RequestingAssembly_k__BackingField() const;

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__RequestingAssembly_k__BackingField(::System::Reflection::Assembly* value);

  /// @brief Method .ctor, addr 0x2944f3c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x2944fa8, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Reflection::Assembly* requestingAssembly);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolveEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResolveEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolveEventArgs(ResolveEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolveEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolveEventArgs(ResolveEventArgs const&) = delete;

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <RequestingAssembly>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::Assembly* ____RequestingAssembly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ResolveEventArgs, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ResolveEventArgs, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ResolveEventArgs, ____RequestingAssembly_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::ResolveEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ResolveEventArgs*, "System", "ResolveEventArgs");
