#pragma once
// IWYU pragma private; include "Zenject\DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__DeclareSignalAsyncTickPriorityCopyBinder_def.hpp"
CORDL_MODULE_EXPORT(DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder)
namespace Zenject {
class DeclareSignalAsyncTickPriorityCopyBinder;
}
namespace Zenject {
class SignalDeclarationBindInfo;
}
// Forward declare root types
namespace Zenject {
class DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder;
}
// Write type traits
MARK_REF_T(::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*);
DEFINE_IL2CPP_CLASS(::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*, "Zenject", "DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder");
// Dependencies Zenject.DeclareSignalAsyncTickPriorityCopyBinder
namespace Zenject {
// Is value type: false
// CS Name: Zenject.DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder
class CORDL_TYPE DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder : public ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder {
public:
  // Declarations
  static inline ::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder* New_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo);

  /// @brief Method OptionalSubscriber, addr 0x6e46154, size 0x18, virtual false, abstract: false, final false
  inline ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* OptionalSubscriber();

  /// @brief Method OptionalSubscriberWithWarning, addr 0x6e4616c, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* OptionalSubscriberWithWarning();

  /// @brief Method RequireSubscriber, addr 0x6e46138, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* RequireSubscriber();

  /// @brief Method .ctor, addr 0x6e460fc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder(DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder(DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14005 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder) == 0x20, "Size mismatch!");

} // namespace Zenject
