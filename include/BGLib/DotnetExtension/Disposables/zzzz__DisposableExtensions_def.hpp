#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/Disposables/DisposableExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DisposableExtensions)
namespace BGLib::DotnetExtension::Disposables {
class CompositeDisposable;
}
namespace BGLib::DotnetExtension::Disposables {
class ConcurrentCompositeDisposable;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace BGLib::DotnetExtension::Disposables {
class DisposableExtensions;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::DotnetExtension::Disposables::DisposableExtensions);
// Dependencies System.Object
namespace BGLib::DotnetExtension::Disposables {
// Is value type: false
// CS Name: BGLib.DotnetExtension.Disposables.DisposableExtensions
class CORDL_TYPE DisposableExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddTo, addr 0x32195b8, size 0x1c, virtual false, abstract: false, final false
  static inline void AddTo(::System::IDisposable* disposable, ::BGLib::DotnetExtension::Disposables::CompositeDisposable* compositeDisposable);

  /// @brief Method AddTo, addr 0x32195d4, size 0x1c, virtual false, abstract: false, final false
  static inline void AddTo(::System::IDisposable* disposable, ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable* compositeDisposable);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisposableExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisposableExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisposableExtensions(DisposableExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisposableExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisposableExtensions(DisposableExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20542 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::DotnetExtension::Disposables::DisposableExtensions, 0x10>, "Size mismatch!");

} // namespace BGLib::DotnetExtension::Disposables
NEED_NO_BOX(::BGLib::DotnetExtension::Disposables::DisposableExtensions);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::DotnetExtension::Disposables::DisposableExtensions*, "BGLib.DotnetExtension.Disposables", "DisposableExtensions");
