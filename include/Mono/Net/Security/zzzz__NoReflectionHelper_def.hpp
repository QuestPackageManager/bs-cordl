#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NoReflectionHelper)
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Net::Security {
class NoReflectionHelper;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::NoReflectionHelper);
// Type: Mono.Net.Security::NoReflectionHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8845))
// CS Name: ::Mono.Net.Security::NoReflectionHelper*
class CORDL_TYPE NoReflectionHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetProvider, addr 0x2825d30, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Object* GetProvider();

  // Ctor Parameters [CppParam { name: "", ty: "NoReflectionHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoReflectionHelper(NoReflectionHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoReflectionHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoReflectionHelper(NoReflectionHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoReflectionHelper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::NoReflectionHelper, 0x10>, "Size mismatch!");

} // namespace Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::NoReflectionHelper);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::NoReflectionHelper*, "Mono.Net.Security", "NoReflectionHelper");
