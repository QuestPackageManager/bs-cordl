#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder);
// Type: Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*
class CORDL_TYPE DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder : public ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder {
public:
  // Declarations
  static inline ::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder* New_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo);

  /// @brief Method OptionalSubscriber, addr 0x34122f8, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* OptionalSubscriber();

  /// @brief Method OptionalSubscriberWithWarning, addr 0x3412314, size 0x20, virtual false, abstract: false, final false
  inline ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* OptionalSubscriberWithWarning();

  /// @brief Method RequireSubscriber, addr 0x34122d8, size 0x20, virtual false, abstract: false, final false
  inline ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* RequireSubscriber();

  /// @brief Method .ctor, addr 0x3412298, size 0x24, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*, "Zenject", "DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder");
