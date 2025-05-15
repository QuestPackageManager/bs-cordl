#pragma once
// IWYU pragma private; include "GlobalNamespace/IHealthCheckService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
CORDL_MODULE_EXPORT(IHealthCheckService)
// Forward declare root types
namespace GlobalNamespace {
class IHealthCheckService;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IHealthCheckService);
// Dependencies IPollable, System.IDisposable
namespace GlobalNamespace {
// Is value type: false
// CS Name: IHealthCheckService
class CORDL_TYPE IHealthCheckService {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IPollable"
  constexpr ::GlobalNamespace::IPollable* i___GlobalNamespace__IPollable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IHealthCheckService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IHealthCheckService(IHealthCheckService const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14803 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IHealthCheckService);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IHealthCheckService*, "", "IHealthCheckService");
