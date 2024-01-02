#pragma once
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
// Type: System::IAsyncDisposable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2408))
// CS Name: ::System::IAsyncDisposable*
class CORDL_TYPE IAsyncDisposable {
public:
  // Declarations
  /// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::ValueTask DisposeAsync();

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncDisposable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAsyncDisposable(IAsyncDisposable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncDisposable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsyncDisposable(IAsyncDisposable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::IAsyncDisposable);
DEFINE_IL2CPP_ARG_TYPE(::System::IAsyncDisposable*, "System", "IAsyncDisposable");
