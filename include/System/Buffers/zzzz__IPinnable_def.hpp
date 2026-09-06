#pragma once
// IWYU pragma private; include "System/Buffers/IPinnable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPinnable)
// Forward declare root types
namespace System::Buffers {
class IPinnable;
}
// Write type traits
MARK_REF_T(::System::Buffers::IPinnable*);
DEFINE_IL2CPP_CLASS(::System::Buffers::IPinnable*, "System.Buffers", "IPinnable");
// Dependencies
namespace System::Buffers {
// Is value type: false
// CS Name: System.Buffers.IPinnable
class CORDL_TYPE IPinnable {
public:
  // Declarations
  /// @brief Method Unpin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Unpin();

  // Ctor Parameters [CppParam { name: "", ty: "IPinnable", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPinnable(IPinnableconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3824 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Buffers
