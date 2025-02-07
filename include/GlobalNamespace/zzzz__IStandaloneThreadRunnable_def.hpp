#pragma once
// IWYU pragma private; include "GlobalNamespace/IStandaloneThreadRunnable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
CORDL_MODULE_EXPORT(IStandaloneThreadRunnable)
// Forward declare root types
namespace GlobalNamespace {
class IStandaloneThreadRunnable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IStandaloneThreadRunnable);
// Dependencies System.IDisposable
namespace GlobalNamespace {
// Is value type: false
// CS Name: IStandaloneThreadRunnable
class CORDL_TYPE IStandaloneThreadRunnable {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool MoveNext();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IStandaloneThreadRunnable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStandaloneThreadRunnable(IStandaloneThreadRunnable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14825 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IStandaloneThreadRunnable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IStandaloneThreadRunnable*, "", "IStandaloneThreadRunnable");
