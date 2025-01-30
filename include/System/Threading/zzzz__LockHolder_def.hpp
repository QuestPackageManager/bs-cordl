#pragma once
// IWYU pragma private; include "System/Threading/LockHolder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LockHolder)
namespace System::Threading {
class Lock;
}
// Forward declare root types
namespace System::Threading {
struct LockHolder;
}
// Write type traits
MARK_VAL_T(::System::Threading::LockHolder);
// Dependencies System.IDisposable
namespace System::Threading {
// Is value type: true
// CS Name: System.Threading.LockHolder
struct CORDL_TYPE LockHolder {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x3e5360c, size 0x1c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Hold, addr 0x3e535e0, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Threading::LockHolder Hold(::System::Threading::Lock* l);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LockHolder();

  // Ctor Parameters [CppParam { name: "_lock", ty: "::System::Threading::Lock*", modifiers: "", def_value: None }]
  constexpr LockHolder(::System::Threading::Lock* _lock) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2698 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _lock, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::Lock* _lock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::LockHolder, _lock) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::LockHolder, 0x8>, "Size mismatch!");

} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::LockHolder, "System.Threading", "LockHolder");
