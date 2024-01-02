#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ContractUtils)
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Dynamic::Utils {
class ContractUtils;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::Utils::ContractUtils);
// Type: System.Dynamic.Utils::ContractUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Dynamic::Utils {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14310))
// CS Name: ::System.Dynamic.Utils::ContractUtils*
class CORDL_TYPE ContractUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_Unreachable, addr 0x2813d90, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Exception* get_Unreachable();

  // Ctor Parameters [CppParam { name: "", ty: "ContractUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContractUtils(ContractUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContractUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContractUtils(ContractUtils const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContractUtils();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::Utils::ContractUtils, 0x10>, "Size mismatch!");

} // namespace System::Dynamic::Utils
NEED_NO_BOX(::System::Dynamic::Utils::ContractUtils);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::Utils::ContractUtils*, "System.Dynamic.Utils", "ContractUtils");
