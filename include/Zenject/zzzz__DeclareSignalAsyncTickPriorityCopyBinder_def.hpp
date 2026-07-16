#pragma once
// IWYU pragma private; include "Zenject/DeclareSignalAsyncTickPriorityCopyBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__SignalTickPriorityCopyBinder_def.hpp"
CORDL_MODULE_EXPORT(DeclareSignalAsyncTickPriorityCopyBinder)
namespace Zenject {
class SignalCopyBinder;
}
namespace Zenject {
class SignalDeclarationBindInfo;
}
namespace Zenject {
class SignalTickPriorityCopyBinder;
}
// Forward declare root types
namespace Zenject {
class DeclareSignalAsyncTickPriorityCopyBinder;
}
// Write type traits
MARK_REF_T(::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*);
DEFINE_IL2CPP_CLASS(::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*, "Zenject", "DeclareSignalAsyncTickPriorityCopyBinder");
// Dependencies Zenject.SignalTickPriorityCopyBinder
namespace Zenject {
// Is value type: false
// CS Name: Zenject.DeclareSignalAsyncTickPriorityCopyBinder
class CORDL_TYPE DeclareSignalAsyncTickPriorityCopyBinder : public ::Zenject::SignalTickPriorityCopyBinder {
public:
  // Declarations
  static inline ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* New_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo);

  /// @brief Method RunAsync, addr 0x6e42b1c, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::SignalTickPriorityCopyBinder* RunAsync();

  /// @brief Method RunSync, addr 0x6e42b38, size 0x18, virtual false, abstract: false, final false
  inline ::Zenject::SignalCopyBinder* RunSync();

  /// @brief Method .ctor, addr 0x6e42ad4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeclareSignalAsyncTickPriorityCopyBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeclareSignalAsyncTickPriorityCopyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeclareSignalAsyncTickPriorityCopyBinder(DeclareSignalAsyncTickPriorityCopyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeclareSignalAsyncTickPriorityCopyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeclareSignalAsyncTickPriorityCopyBinder(DeclareSignalAsyncTickPriorityCopyBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13976 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Zenject::DeclareSignalAsyncTickPriorityCopyBinder) == 0x20, "Size mismatch!");

} // namespace Zenject
