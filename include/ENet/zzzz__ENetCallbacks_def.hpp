#pragma once
// IWYU pragma private; include "ENet/ENetCallbacks.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ENetCallbacks)
namespace ENet {
class AllocCallback;
}
namespace ENet {
class FreeCallback;
}
namespace ENet {
class NoMemoryCallback;
}
// Forward declare root types
namespace ENet {
struct ENetCallbacks;
}
// Write type traits
MARK_VAL_T(::ENet::ENetCallbacks);
// Dependencies
namespace ENet {
// Is value type: true
// CS Name: ENet.ENetCallbacks
struct CORDL_TYPE ENetCallbacks {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ENetCallbacks();

  // Ctor Parameters [CppParam { name: "malloc", ty: "::ENet::AllocCallback*", modifiers: "", def_value: None }, CppParam { name: "free", ty: "::ENet::FreeCallback*", modifiers: "", def_value: None },
  // CppParam { name: "noMemory", ty: "::ENet::NoMemoryCallback*", modifiers: "", def_value: None }]
  constexpr ENetCallbacks(::ENet::AllocCallback* malloc, ::ENet::FreeCallback* free, ::ENet::NoMemoryCallback* noMemory) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17744 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field malloc, offset: 0x0, size: 0x8, def value: None
  ::ENet::AllocCallback* malloc;

  /// @brief Field free, offset: 0x8, size: 0x8, def value: None
  ::ENet::FreeCallback* free;

  /// @brief Field noMemory, offset: 0x10, size: 0x8, def value: None
  ::ENet::NoMemoryCallback* noMemory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ENet::ENetCallbacks, malloc) == 0x0, "Offset mismatch!");

static_assert(offsetof(::ENet::ENetCallbacks, free) == 0x8, "Offset mismatch!");

static_assert(offsetof(::ENet::ENetCallbacks, noMemory) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::ENet::ENetCallbacks, 0x18>, "Size mismatch!");

} // namespace ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::ENetCallbacks, "ENet", "ENetCallbacks");
