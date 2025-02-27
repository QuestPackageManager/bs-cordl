#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/ActivatedServiceTypeEntry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/zzzz__TypeEntry_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ActivatedServiceTypeEntry)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ActivatedServiceTypeEntry;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::ActivatedServiceTypeEntry);
// Dependencies System.Runtime.Remoting.TypeEntry
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: System.Runtime.Remoting.ActivatedServiceTypeEntry
class CORDL_TYPE ActivatedServiceTypeEntry : public ::System::Runtime::Remoting::TypeEntry {
public:
  // Declarations
  __declspec(property(get = get_ObjectType)) ::System::Type* ObjectType;

  /// @brief Field obj_type, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_obj_type, put = __cordl_internal_set_obj_type)) ::System::Type* obj_type;

  static inline ::System::Runtime::Remoting::ActivatedServiceTypeEntry* New_ctor(::StringW typeName, ::StringW assemblyName);

  /// @brief Method ToString, addr 0x3cd4920, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Type* const& __cordl_internal_get_obj_type() const;

  constexpr ::System::Type*& __cordl_internal_get_obj_type();

  constexpr void __cordl_internal_set_obj_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x3cd47f4, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::StringW typeName, ::StringW assemblyName);

  /// @brief Method get_ObjectType, addr 0x3cd4918, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ObjectType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActivatedServiceTypeEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActivatedServiceTypeEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActivatedServiceTypeEntry(ActivatedServiceTypeEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActivatedServiceTypeEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActivatedServiceTypeEntry(ActivatedServiceTypeEntry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3053 };

  /// @brief Field obj_type, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___obj_type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::ActivatedServiceTypeEntry, ___obj_type) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::ActivatedServiceTypeEntry, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::ActivatedServiceTypeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ActivatedServiceTypeEntry*, "System.Runtime.Remoting", "ActivatedServiceTypeEntry");
