#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RequestCacheValidator)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Cache {
class RequestCacheValidator;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Cache::RequestCacheValidator);
// Type: System.Net.Cache::RequestCacheValidator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Cache {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8155))
// CS Name: ::System.Net.Cache::RequestCacheValidator*
class CORDL_TYPE RequestCacheValidator : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateValidator addr 0x2874ba8 size 0x40 virtual false final false
  inline ::System::Object* CreateValidator();

  // Ctor Parameters [CppParam { name: "", ty: "RequestCacheValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequestCacheValidator(RequestCacheValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequestCacheValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequestCacheValidator(RequestCacheValidator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestCacheValidator();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Cache::RequestCacheValidator, 0x10>, "Size mismatch!");

} // namespace System::Net::Cache
NEED_NO_BOX(::System::Net::Cache::RequestCacheValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCacheValidator*, "System.Net.Cache", "RequestCacheValidator");
