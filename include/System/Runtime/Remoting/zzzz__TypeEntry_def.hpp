#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeEntry)
// Forward declare root types
namespace System::Runtime::Remoting {
class TypeEntry;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::TypeEntry);
// Type: System.Runtime.Remoting::TypeEntry
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3079))
// CS Name: ::System.Runtime.Remoting::TypeEntry*
class CORDL_TYPE TypeEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field assembly_name, offset 0x10, size 0x8
  __declspec(property(get = __get_assembly_name, put = __set_assembly_name))::StringW assembly_name;

  /// @brief Field type_name, offset 0x18, size 0x8
  __declspec(property(get = __get_type_name, put = __set_type_name))::StringW type_name;

  __declspec(property(get = get_AssemblyName, put = set_AssemblyName))::StringW AssemblyName;

  __declspec(property(get = get_TypeName, put = set_TypeName))::StringW TypeName;

  constexpr ::StringW& __get_assembly_name();

  constexpr ::StringW const& __get_assembly_name() const;

  constexpr void __set_assembly_name(::StringW value);

  constexpr ::StringW& __get_type_name();

  constexpr ::StringW const& __get_type_name() const;

  constexpr void __set_type_name(::StringW value);

  static inline ::System::Runtime::Remoting::TypeEntry* New_ctor();

  /// @brief Method .ctor, addr 0x249562c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AssemblyName, addr 0x2495634, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AssemblyName();

  /// @brief Method set_AssemblyName, addr 0x249563c, size 0x8, virtual false, abstract: false, final false
  inline void set_AssemblyName(::StringW value);

  /// @brief Method get_TypeName, addr 0x2495644, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TypeName();

  /// @brief Method set_TypeName, addr 0x249564c, size 0x8, virtual false, abstract: false, final false
  inline void set_TypeName(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "TypeEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeEntry(TypeEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeEntry(TypeEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeEntry();

public:
  /// @brief Field assembly_name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___assembly_name;

  /// @brief Field type_name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___type_name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::TypeEntry, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::TypeEntry, ___assembly_name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::TypeEntry, ___type_name) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::TypeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::TypeEntry*, "System.Runtime.Remoting", "TypeEntry");
