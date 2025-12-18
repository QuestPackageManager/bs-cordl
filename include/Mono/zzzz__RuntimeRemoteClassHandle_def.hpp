#pragma once
// IWYU pragma private; include "Mono/RuntimeRemoteClassHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(RuntimeRemoteClassHandle)
namespace Mono {
struct RuntimeClassHandle;
}
namespace Mono {
struct RuntimeStructs_RemoteClass;
}
// Forward declare root types
namespace Mono {
struct RuntimeRemoteClassHandle;
}
// Write type traits
MARK_VAL_T(::Mono::RuntimeRemoteClassHandle);
// Dependencies
namespace Mono {
// Is value type: true
// CS Name: Mono.RuntimeRemoteClassHandle
struct CORDL_TYPE RuntimeRemoteClassHandle {
public:
  // Declarations
  __declspec(property(get = get_ProxyClass)) ::Mono::RuntimeClassHandle ProxyClass;

  /// @brief Method get_ProxyClass, addr 0x58fee44, size 0x18, virtual false, abstract: false, final false
  inline ::Mono::RuntimeClassHandle get_ProxyClass();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeRemoteClassHandle();

  // Ctor Parameters [CppParam { name: "value", ty: "::Mono::RuntimeStructs_RemoteClass*", modifiers: "", def_value: None }]
  constexpr RuntimeRemoteClassHandle(::Mono::RuntimeStructs_RemoteClass* value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2229 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field value, offset: 0x0, size: 0x8, def value: None
  ::Mono::RuntimeStructs_RemoteClass* value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::RuntimeRemoteClassHandle, value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::RuntimeRemoteClassHandle, 0x8>, "Size mismatch!");

} // namespace Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeRemoteClassHandle, "Mono", "RuntimeRemoteClassHandle");
