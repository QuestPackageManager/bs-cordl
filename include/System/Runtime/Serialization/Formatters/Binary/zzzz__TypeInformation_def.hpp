#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeInformation)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class TypeInformation;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::TypeInformation);
// Type: System.Runtime.Serialization.Formatters.Binary::TypeInformation
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3285))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::TypeInformation*
class CORDL_TYPE TypeInformation : public ::System::Object {
public:
  // Declarations
  /// @brief Field fullTypeName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_fullTypeName, put = __cordl_internal_set_fullTypeName))::StringW fullTypeName;

  /// @brief Field assemblyString, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_assemblyString, put = __cordl_internal_set_assemblyString))::StringW assemblyString;

  /// @brief Field hasTypeForwardedFrom, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_hasTypeForwardedFrom, put = __cordl_internal_set_hasTypeForwardedFrom)) bool hasTypeForwardedFrom;

  __declspec(property(get = get_FullTypeName))::StringW FullTypeName;

  __declspec(property(get = get_AssemblyString))::StringW AssemblyString;

  __declspec(property(get = get_HasTypeForwardedFrom)) bool HasTypeForwardedFrom;

  constexpr ::StringW& __cordl_internal_get_fullTypeName();

  constexpr ::StringW const& __cordl_internal_get_fullTypeName() const;

  constexpr void __cordl_internal_set_fullTypeName(::StringW value);

  constexpr ::StringW& __cordl_internal_get_assemblyString();

  constexpr ::StringW const& __cordl_internal_get_assemblyString() const;

  constexpr void __cordl_internal_set_assemblyString(::StringW value);

  constexpr bool& __cordl_internal_get_hasTypeForwardedFrom();

  constexpr bool const& __cordl_internal_get_hasTypeForwardedFrom() const;

  constexpr void __cordl_internal_set_hasTypeForwardedFrom(bool value);

  /// @brief Method get_FullTypeName, addr 0x24cb3d0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FullTypeName();

  /// @brief Method get_AssemblyString, addr 0x24cb3d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AssemblyString();

  /// @brief Method get_HasTypeForwardedFrom, addr 0x24cb3e0, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasTypeForwardedFrom();

  static inline ::System::Runtime::Serialization::Formatters::Binary::TypeInformation* New_ctor(::StringW fullTypeName, ::StringW assemblyString, bool hasTypeForwardedFrom);

  /// @brief Method .ctor, addr 0x24cb3e8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW fullTypeName, ::StringW assemblyString, bool hasTypeForwardedFrom);

  // Ctor Parameters [CppParam { name: "", ty: "TypeInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeInformation(TypeInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeInformation(TypeInformation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeInformation();

public:
  /// @brief Field fullTypeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___fullTypeName;

  /// @brief Field assemblyString, offset: 0x18, size: 0x8, def value: None
  ::StringW ___assemblyString;

  /// @brief Field hasTypeForwardedFrom, offset: 0x20, size: 0x1, def value: None
  bool ___hasTypeForwardedFrom;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::TypeInformation, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::TypeInformation, ___fullTypeName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::TypeInformation, ___assemblyString) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::TypeInformation, ___hasTypeForwardedFrom) == 0x20, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::TypeInformation);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::TypeInformation*, "System.Runtime.Serialization.Formatters.Binary", "TypeInformation");
