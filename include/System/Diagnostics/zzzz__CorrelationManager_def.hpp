#pragma once
// IWYU pragma private; include "System/Diagnostics/CorrelationManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::System::Diagnostics::CorrelationManager*);
DEFINE_IL2CPP_CLASS(::System::Diagnostics::CorrelationManager*, "System.Diagnostics", "CorrelationManager");
// Dependencies System.Object
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.CorrelationManager
class CORDL_TYPE CorrelationManager : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_LogicalOperationStack)) ::System::Collections::Stack* LogicalOperationStack;

  /// @brief Method GetLogicalOperationStack, addr 0x63918f8, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Collections::Stack* GetLogicalOperationStack();

  static inline ::System::Diagnostics::CorrelationManager* New_ctor();

  /// @brief Method .ctor, addr 0x63918f0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LogicalOperationStack, addr 0x63918f4, size 0x4, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11102 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Diagnostics::CorrelationManager) == 0x10, "Size mismatch!");

} // namespace System::Diagnostics
