#pragma once
// IWYU pragma private; include "GlobalNamespace/IStandaloneMonobehavior.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IStandaloneMonobehavior)
namespace GlobalNamespace {
class IStandaloneThreadRunner;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Action;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IStandaloneMonobehavior;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IStandaloneMonobehavior);
// Type: ::IStandaloneMonobehavior
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IStandaloneMonobehavior*
class CORDL_TYPE IStandaloneMonobehavior {
public:
  // Declarations
  /// @brief Method RunAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* RunAsync(::GlobalNamespace::IStandaloneThreadRunner* runner, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Stop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Stop();

  /// @brief Method WhenReady, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WhenReady(::System::Action* action);

  /// @brief Method WhenReadyAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* WhenReadyAsync(::System::Func_1<::System::Threading::Tasks::Task*>* action);

  // Ctor Parameters [CppParam { name: "", ty: "IStandaloneMonobehavior", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IStandaloneMonobehavior(IStandaloneMonobehavior&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IStandaloneMonobehavior", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStandaloneMonobehavior(IStandaloneMonobehavior const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14784 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IStandaloneMonobehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IStandaloneMonobehavior*, "", "IStandaloneMonobehavior");
