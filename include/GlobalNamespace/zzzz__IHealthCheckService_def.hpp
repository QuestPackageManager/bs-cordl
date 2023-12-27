#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHealthCheckService)
namespace GlobalNamespace {
class IPollable;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class IHealthCheckService;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IHealthCheckService);
// Type: ::IHealthCheckService
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12797))
// CS Name: ::IHealthCheckService*
class CORDL_TYPE IHealthCheckService {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IHealthCheckService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IHealthCheckService(IHealthCheckService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IHealthCheckService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IHealthCheckService(IHealthCheckService const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IHealthCheckService);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IHealthCheckService*, "", "IHealthCheckService");
