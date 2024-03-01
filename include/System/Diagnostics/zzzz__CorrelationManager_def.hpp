#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CorrelationManager)
namespace System::Collections {
class Stack;
}
// Forward declare root types
namespace System::Diagnostics {
class CorrelationManager;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::CorrelationManager);
// Type: System.Diagnostics::CorrelationManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// CS Name: ::System.Diagnostics::CorrelationManager*
class CORDL_TYPE CorrelationManager : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_LogicalOperationStack))::System::Collections::Stack* LogicalOperationStack;

  /// @brief Method GetLogicalOperationStack, addr 0x2a557b8, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Collections::Stack* GetLogicalOperationStack();

  static inline ::System::Diagnostics::CorrelationManager* New_ctor();

  /// @brief Method .ctor, addr 0x2a557ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LogicalOperationStack, addr 0x2a557b4, size 0x4, virtual false, abstract: false, final false
  inline ::System::Collections::Stack* get_LogicalOperationStack();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CorrelationManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CorrelationManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CorrelationManager(CorrelationManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CorrelationManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CorrelationManager(CorrelationManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::CorrelationManager, 0x10>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::CorrelationManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::CorrelationManager*, "System.Diagnostics", "CorrelationManager");
