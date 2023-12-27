#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/zzzz__TypeEntry_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WellKnownClientTypeEntry)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class WellKnownClientTypeEntry;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::WellKnownClientTypeEntry);
// Type: System.Runtime.Remoting::WellKnownClientTypeEntry
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3079))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3081))
// CS Name: ::System.Runtime.Remoting::WellKnownClientTypeEntry*
class CORDL_TYPE WellKnownClientTypeEntry : public ::System::Runtime::Remoting::TypeEntry {
public:
  // Declarations
  /// @brief Field obj_type, offset 0x20, size 0x8
  __declspec(property(get = __get_obj_type, put = __set_obj_type))::System::Type* obj_type;

  /// @brief Field obj_url, offset 0x28, size 0x8
  __declspec(property(get = __get_obj_url, put = __set_obj_url))::StringW obj_url;

  /// @brief Field app_url, offset 0x30, size 0x8
  __declspec(property(get = __get_app_url, put = __set_app_url))::StringW app_url;

  __declspec(property(get = get_ApplicationUrl))::StringW ApplicationUrl;

  __declspec(property(get = get_ObjectType))::System::Type* ObjectType;

  __declspec(property(get = get_ObjectUrl))::StringW ObjectUrl;

  constexpr ::System::Type*& __get_obj_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_obj_type() const;

  constexpr void __set_obj_type(::System::Type* value);

  constexpr ::StringW& __get_obj_url();

  constexpr ::StringW const& __get_obj_url() const;

  constexpr void __set_obj_url(::StringW value);

  constexpr ::StringW& __get_app_url();

  constexpr ::StringW const& __get_app_url() const;

  constexpr void __set_app_url(::StringW value);

  static inline ::System::Runtime::Remoting::WellKnownClientTypeEntry* New_ctor(::StringW typeName, ::StringW assemblyName, ::StringW objectUrl);

  /// @brief Method .ctor addr 0x24958c8 size 0x134 virtual false final false
  inline void _ctor(::StringW typeName, ::StringW assemblyName, ::StringW objectUrl);

  /// @brief Method get_ApplicationUrl addr 0x24959fc size 0x8 virtual false final false
  inline ::StringW get_ApplicationUrl();

  /// @brief Method get_ObjectType addr 0x2495a04 size 0x8 virtual false final false
  inline ::System::Type* get_ObjectType();

  /// @brief Method get_ObjectUrl addr 0x2495a0c size 0x8 virtual false final false
  inline ::StringW get_ObjectUrl();

  /// @brief Method ToString addr 0x2495a14 size 0x1c virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "WellKnownClientTypeEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WellKnownClientTypeEntry(WellKnownClientTypeEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WellKnownClientTypeEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WellKnownClientTypeEntry(WellKnownClientTypeEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WellKnownClientTypeEntry();

public:
  /// @brief Field obj_type, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___obj_type;

  /// @brief Field obj_url, offset: 0x28, size: 0x8, def value: None
  ::StringW ___obj_url;

  /// @brief Field app_url, offset: 0x30, size: 0x8, def value: None
  ::StringW ___app_url;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::WellKnownClientTypeEntry, 0x38>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::WellKnownClientTypeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::WellKnownClientTypeEntry*, "System.Runtime.Remoting", "WellKnownClientTypeEntry");
