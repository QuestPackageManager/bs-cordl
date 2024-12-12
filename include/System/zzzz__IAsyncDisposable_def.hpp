#pragma once
// IWYU pragma private; include "System/IAsyncDisposable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncDisposable)
namespace System::Threading::Tasks {
struct ValueTask;
}
// Forward declare root types
namespace System {
class IAsyncDisposable;
}
// Write type traits
MARK_REF_PTR_T(::System::IAsyncDisposable);
// Dependencies
namespace System {
// Is value type: false
// CS Name: System.IAsyncDisposable
class CORDL_TYPE IAsyncDisposable {
public:
  // Declarations
  /// @brief Method DisposeAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask DisposeAsync();

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncDisposable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsyncDisposable(IAsyncDisposable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2410 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::IAsyncDisposable);
DEFINE_IL2CPP_ARG_TYPE(::System::IAsyncDisposable*, "System", "IAsyncDisposable");
