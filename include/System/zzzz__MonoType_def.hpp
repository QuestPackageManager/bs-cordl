#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__RuntimeType_def.hpp"
CORDL_MODULE_EXPORT(MonoType)
// Forward declare root types
namespace System {
class MonoType;
}
// Write type traits
MARK_REF_PTR_T(::System::MonoType);
// Type: System::MonoType
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2567))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2610))
// CS Name: ::System::MonoType*
class CORDL_TYPE MonoType : public ::System::RuntimeType {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "MonoType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoType(MonoType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoType(MonoType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoType();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MonoType, 0x30>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MonoType);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoType*, "System", "MonoType");
