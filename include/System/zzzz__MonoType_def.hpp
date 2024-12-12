#pragma once
// IWYU pragma private; include "System/MonoType.hpp"
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
// Dependencies System.RuntimeType
namespace System {
// Is value type: false
// CS Name: System.MonoType
class CORDL_TYPE MonoType : public ::System::RuntimeType {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoType(MonoType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoType(MonoType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2612 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MonoType, 0x30>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MonoType);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoType*, "System", "MonoType");
