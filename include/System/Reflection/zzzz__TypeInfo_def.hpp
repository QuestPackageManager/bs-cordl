#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/zzzz__Type_def.hpp"
CORDL_MODULE_EXPORT(TypeInfo)
// Forward declare root types
namespace System::Reflection {
class TypeInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::TypeInfo);
// Type: System.Reflection::TypeInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2494)), TypeDefinitionIndex(TypeDefinitionIndex(3459))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3502))
// CS Name: ::System.Reflection::TypeInfo*
class CORDL_TYPE TypeInfo : public ::System::Type {
public:
  // Declarations
  static inline ::System::Reflection::TypeInfo* New_ctor();

  /// @brief Method .ctor, addr 0x24ec81c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TypeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeInfo(TypeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeInfo(TypeInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeInfo();

public:
  /// @brief Field DeclaredOnlyLookup value: static_cast<int32_t>(0x3e)
  static ::System::Reflection::BindingFlags const DeclaredOnlyLookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::TypeInfo, 0x18>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::TypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::TypeInfo*, "System.Reflection", "TypeInfo");
