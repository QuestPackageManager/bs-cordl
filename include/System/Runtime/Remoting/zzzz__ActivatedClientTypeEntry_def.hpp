#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/zzzz__TypeEntry_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ActivatedClientTypeEntry)
namespace System::Runtime::Remoting::Contexts {
class IContextAttribute;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ActivatedClientTypeEntry;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::ActivatedClientTypeEntry);
// Type: System.Runtime.Remoting::ActivatedClientTypeEntry
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: ::System.Runtime.Remoting::ActivatedClientTypeEntry*
class CORDL_TYPE ActivatedClientTypeEntry : public ::System::Runtime::Remoting::TypeEntry {
public:
  // Declarations
  __declspec(property(get = get_ApplicationUrl))::StringW ApplicationUrl;

  __declspec(
      property(get = get_ContextAttributes))::ArrayW<::System::Runtime::Remoting::Contexts::IContextAttribute*, ::Array<::System::Runtime::Remoting::Contexts::IContextAttribute*>*> ContextAttributes;

  __declspec(property(get = get_ObjectType))::System::Type* ObjectType;

  /// @brief Field applicationUrl, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_applicationUrl, put = __cordl_internal_set_applicationUrl))::StringW applicationUrl;

  /// @brief Field obj_type, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_obj_type, put = __cordl_internal_set_obj_type))::System::Type* obj_type;

  static inline ::System::Runtime::Remoting::ActivatedClientTypeEntry* New_ctor(::StringW typeName, ::StringW assemblyName, ::StringW appUrl);

  /// @brief Method ToString, addr 0x2578c50, size 0x14, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get_applicationUrl() const;

  constexpr ::StringW& __cordl_internal_get_applicationUrl();

  constexpr ::System::Type*& __cordl_internal_get_obj_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_obj_type() const;

  constexpr void __cordl_internal_set_applicationUrl(::StringW value);

  constexpr void __cordl_internal_set_obj_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x2578b00, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::StringW typeName, ::StringW assemblyName, ::StringW appUrl);

  /// @brief Method get_ApplicationUrl, addr 0x2578c38, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ApplicationUrl();

  /// @brief Method get_ContextAttributes, addr 0x2578c40, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Runtime::Remoting::Contexts::IContextAttribute*, ::Array<::System::Runtime::Remoting::Contexts::IContextAttribute*>*> get_ContextAttributes();

  /// @brief Method get_ObjectType, addr 0x2578c48, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ObjectType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActivatedClientTypeEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActivatedClientTypeEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActivatedClientTypeEntry(ActivatedClientTypeEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActivatedClientTypeEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActivatedClientTypeEntry(ActivatedClientTypeEntry const&) = delete;

  /// @brief Field applicationUrl, offset: 0x20, size: 0x8, def value: None
  ::StringW ___applicationUrl;

  /// @brief Field obj_type, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ___obj_type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::ActivatedClientTypeEntry, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ActivatedClientTypeEntry, ___applicationUrl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ActivatedClientTypeEntry, ___obj_type) == 0x28, "Offset mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::ActivatedClientTypeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ActivatedClientTypeEntry*, "System.Runtime.Remoting", "ActivatedClientTypeEntry");
