#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/WellKnownClientTypeEntry.hpp"
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
// Dependencies System.Runtime.Remoting.TypeEntry
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: System.Runtime.Remoting.WellKnownClientTypeEntry
class CORDL_TYPE WellKnownClientTypeEntry : public ::System::Runtime::Remoting::TypeEntry {
public:
  // Declarations
  __declspec(property(get = get_ApplicationUrl)) ::StringW ApplicationUrl;

  __declspec(property(get = get_ObjectType)) ::System::Type* ObjectType;

  __declspec(property(get = get_ObjectUrl)) ::StringW ObjectUrl;

  /// @brief Field app_url, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_app_url, put = __cordl_internal_set_app_url)) ::StringW app_url;

  /// @brief Field obj_type, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_obj_type, put = __cordl_internal_set_obj_type)) ::System::Type* obj_type;

  /// @brief Field obj_url, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_obj_url, put = __cordl_internal_set_obj_url)) ::StringW obj_url;

  static inline ::System::Runtime::Remoting::WellKnownClientTypeEntry* New_ctor(::StringW typeName, ::StringW assemblyName, ::StringW objectUrl);

  /// @brief Method ToString, addr 0x3cdc300, size 0x20, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get_app_url() const;

  constexpr ::StringW& __cordl_internal_get_app_url();

  constexpr ::System::Type* const& __cordl_internal_get_obj_type() const;

  constexpr ::System::Type*& __cordl_internal_get_obj_type();

  constexpr ::StringW const& __cordl_internal_get_obj_url() const;

  constexpr ::StringW& __cordl_internal_get_obj_url();

  constexpr void __cordl_internal_set_app_url(::StringW value);

  constexpr void __cordl_internal_set_obj_type(::System::Type* value);

  constexpr void __cordl_internal_set_obj_url(::StringW value);

  /// @brief Method .ctor, addr 0x3cdc1c0, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(::StringW typeName, ::StringW assemblyName, ::StringW objectUrl);

  /// @brief Method get_ApplicationUrl, addr 0x3cdc2e8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ApplicationUrl();

  /// @brief Method get_ObjectType, addr 0x3cdc2f0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ObjectType();

  /// @brief Method get_ObjectUrl, addr 0x3cdc2f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ObjectUrl();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WellKnownClientTypeEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WellKnownClientTypeEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WellKnownClientTypeEntry(WellKnownClientTypeEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WellKnownClientTypeEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WellKnownClientTypeEntry(WellKnownClientTypeEntry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3080 };

  /// @brief Field obj_type, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___obj_type;

  /// @brief Field obj_url, offset: 0x28, size: 0x8, def value: None
  ::StringW ___obj_url;

  /// @brief Field app_url, offset: 0x30, size: 0x8, def value: None
  ::StringW ___app_url;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::WellKnownClientTypeEntry, ___obj_type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::WellKnownClientTypeEntry, ___obj_url) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::WellKnownClientTypeEntry, ___app_url) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::WellKnownClientTypeEntry, 0x38>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::WellKnownClientTypeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::WellKnownClientTypeEntry*, "System.Runtime.Remoting", "WellKnownClientTypeEntry");
