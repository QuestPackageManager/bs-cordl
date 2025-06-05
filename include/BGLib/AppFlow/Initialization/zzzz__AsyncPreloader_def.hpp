#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/AsyncPreloader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(AsyncPreloader)
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
class AsyncPreloader;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::AppFlow::Initialization::AsyncPreloader);
// Dependencies Zenject.MonoInstaller
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.AsyncPreloader
class CORDL_TYPE AsyncPreloader : public ::Zenject::MonoInstaller {
public:
  // Declarations
  static inline ::BGLib::AppFlow::Initialization::AsyncPreloader* New_ctor();

  /// @brief Method PreloadAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PreloadAsync();

  /// @brief Method .ctor, addr 0x229c3c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncPreloader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncPreloader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncPreloader(AsyncPreloader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncPreloader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncPreloader(AsyncPreloader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17652 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::AsyncPreloader, 0x28>, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
NEED_NO_BOX(::BGLib::AppFlow::Initialization::AsyncPreloader);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::AsyncPreloader*, "BGLib.AppFlow.Initialization", "AsyncPreloader");
