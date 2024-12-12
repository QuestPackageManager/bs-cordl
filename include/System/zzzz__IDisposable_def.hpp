#pragma once
// IWYU pragma private; include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDisposable)
// Forward declare root types
namespace System {
class IDisposable;
}
// Write type traits
MARK_REF_PTR_T(::System::IDisposable);
// Dependencies
namespace System {
// Is value type: false
// CS Name: System.IDisposable
class CORDL_TYPE IDisposable {
public:
  // Declarations
  /// @brief Method Dispose, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "", ty: "IDisposable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDisposable(IDisposable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2417 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::IDisposable);
DEFINE_IL2CPP_ARG_TYPE(::System::IDisposable*, "System", "IDisposable");
