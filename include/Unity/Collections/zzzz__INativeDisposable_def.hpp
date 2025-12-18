#pragma once
// IWYU pragma private; include "Unity/Collections/INativeDisposable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INativeDisposable)
namespace System {
class IDisposable;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections {
class INativeDisposable;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::INativeDisposable);
// Dependencies
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.INativeDisposable
class CORDL_TYPE INativeDisposable {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle inputDeps);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "INativeDisposable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INativeDisposable(INativeDisposable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15525 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::INativeDisposable);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::INativeDisposable*, "Unity.Collections", "INativeDisposable");
