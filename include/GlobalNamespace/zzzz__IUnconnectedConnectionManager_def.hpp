#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUnconnectedConnectionManager)
namespace GlobalNamespace {
class IUnconnectedMessageSender;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class IPollable;
}
// Forward declare root types
namespace GlobalNamespace {
class IUnconnectedConnectionManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IUnconnectedConnectionManager);
// Type: ::IUnconnectedConnectionManager
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12792))
// CS Name: ::IUnconnectedConnectionManager*
class CORDL_TYPE IUnconnectedConnectionManager {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IUnconnectedMessageSender"
  constexpr operator ::GlobalNamespace::IUnconnectedMessageSender*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IUnconnectedConnectionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IUnconnectedConnectionManager(IUnconnectedConnectionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IUnconnectedConnectionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUnconnectedConnectionManager(IUnconnectedConnectionManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IUnconnectedConnectionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IUnconnectedConnectionManager*, "", "IUnconnectedConnectionManager");
