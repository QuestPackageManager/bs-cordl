#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IStandaloneMonobehavior)
namespace System {
class Action;
}
namespace GlobalNamespace {
class IStandaloneThreadRunner;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class IStandaloneMonobehavior;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IStandaloneMonobehavior);
// Type: ::IStandaloneMonobehavior
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12817))
// CS Name: ::IStandaloneMonobehavior*
class CORDL_TYPE IStandaloneMonobehavior {
public:
  // Declarations
  /// @brief Method Dispatch addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Dispatch(::System::Action* action);

  /// @brief Method DispatchAsync addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task* DispatchAsync(::System::Func_1<::System::Threading::Tasks::Task*>* action);

  /// @brief Method RunAsync addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task* RunAsync(::GlobalNamespace::IStandaloneThreadRunner* runner, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Stop addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Stop();

  // Ctor Parameters [CppParam { name: "", ty: "IStandaloneMonobehavior", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IStandaloneMonobehavior(IStandaloneMonobehavior&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IStandaloneMonobehavior", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStandaloneMonobehavior(IStandaloneMonobehavior const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IStandaloneMonobehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IStandaloneMonobehavior*, "", "IStandaloneMonobehavior");
