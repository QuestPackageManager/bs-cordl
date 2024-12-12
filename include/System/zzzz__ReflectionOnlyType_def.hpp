#pragma once
// IWYU pragma private; include "System/ReflectionOnlyType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__RuntimeType_def.hpp"
CORDL_MODULE_EXPORT(ReflectionOnlyType)
namespace System {
struct RuntimeTypeHandle;
}
// Forward declare root types
namespace System {
class ReflectionOnlyType;
}
// Write type traits
MARK_REF_PTR_T(::System::ReflectionOnlyType);
// Dependencies System.RuntimeType
namespace System {
// Is value type: false
// CS Name: System.ReflectionOnlyType
class CORDL_TYPE ReflectionOnlyType : public ::System::RuntimeType {
public:
  // Declarations
  __declspec(property(get = get_TypeHandle)) ::System::RuntimeTypeHandle TypeHandle;

  static inline ::System::ReflectionOnlyType* New_ctor();

  /// @brief Method .ctor, addr 0x3e2c744, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TypeHandle, addr 0x3e2c79c, size 0x50, virtual true, abstract: false, final false
  inline ::System::RuntimeTypeHandle get_TypeHandle();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionOnlyType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionOnlyType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionOnlyType(ReflectionOnlyType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionOnlyType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionOnlyType(ReflectionOnlyType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2569 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ReflectionOnlyType, 0x30>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ReflectionOnlyType);
DEFINE_IL2CPP_ARG_TYPE(::System::ReflectionOnlyType*, "System", "ReflectionOnlyType");
