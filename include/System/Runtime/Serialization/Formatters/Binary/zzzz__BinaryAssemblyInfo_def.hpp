#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/BinaryAssemblyInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BinaryAssemblyInfo)
namespace System::Reflection {
class Assembly;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryAssemblyInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo);
// Dependencies System.Object
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo
class CORDL_TYPE BinaryAssemblyInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field assembly, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_assembly, put = __cordl_internal_set_assembly)) ::System::Reflection::Assembly* assembly;

  /// @brief Field assemblyString, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_assemblyString, put = __cordl_internal_set_assemblyString)) ::StringW assemblyString;

  /// @brief Method GetAssembly, addr 0x3d00604, size 0x114, virtual false, abstract: false, final false
  inline ::System::Reflection::Assembly* GetAssembly();

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* New_ctor(::StringW assemblyString);

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* New_ctor(::StringW assemblyString, ::System::Reflection::Assembly* assembly);

  constexpr ::System::Reflection::Assembly* const& __cordl_internal_get_assembly() const;

  constexpr ::System::Reflection::Assembly*& __cordl_internal_get_assembly();

  constexpr ::StringW const& __cordl_internal_get_assemblyString() const;

  constexpr ::StringW& __cordl_internal_get_assemblyString();

  constexpr void __cordl_internal_set_assembly(::System::Reflection::Assembly* value);

  constexpr void __cordl_internal_set_assemblyString(::StringW value);

  /// @brief Method .ctor, addr 0x3d005b0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW assemblyString);

  /// @brief Method .ctor, addr 0x3d005d8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW assemblyString, ::System::Reflection::Assembly* assembly);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryAssemblyInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryAssemblyInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryAssemblyInfo(BinaryAssemblyInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryAssemblyInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryAssemblyInfo(BinaryAssemblyInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3257 };

  /// @brief Field assemblyString, offset: 0x10, size: 0x8, def value: None
  ::StringW ___assemblyString;

  /// @brief Field assembly, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::Assembly* ___assembly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo, ___assemblyString) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo, ___assembly) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, "System.Runtime.Serialization.Formatters.Binary", "BinaryAssemblyInfo");
