#pragma once
// IWYU pragma private; include "GlobalNamespace/IStandaloneThreadRunner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IStandaloneThreadRunner)
namespace GlobalNamespace {
class IStandaloneThreadRunnable;
}
// Forward declare root types
namespace GlobalNamespace {
class IStandaloneThreadRunner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IStandaloneThreadRunner);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IStandaloneThreadRunner
class CORDL_TYPE IStandaloneThreadRunner {
public:
  // Declarations
  /// @brief Method Run, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Run(::GlobalNamespace::IStandaloneThreadRunnable* runnable);

  // Ctor Parameters [CppParam { name: "", ty: "IStandaloneThreadRunner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStandaloneThreadRunner(IStandaloneThreadRunner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14824 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IStandaloneThreadRunner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IStandaloneThreadRunner*, "", "IStandaloneThreadRunner");
