#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(RuntimeRemoteClassHandle)
namespace Mono {
struct RuntimeClassHandle;
}
namespace Mono {
struct __RuntimeStructs__RemoteClass;
}
// Forward declare root types
namespace Mono {
struct RuntimeRemoteClassHandle;
}
// Write type traits
MARK_VAL_T(::Mono::RuntimeRemoteClassHandle);
// Type: Mono::RuntimeRemoteClassHandle
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2229))
// CS Name: ::Mono::RuntimeRemoteClassHandle
struct CORDL_TYPE RuntimeRemoteClassHandle {
public:
  // Declarations
  __declspec(property(get = get_ProxyClass))::Mono::RuntimeClassHandle ProxyClass;

  /// @brief Method get_ProxyClass, addr 0x241265c, size 0x1c, virtual false, abstract: false, final false
  inline ::Mono::RuntimeClassHandle get_ProxyClass();

  // Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::Ptr<::Mono::__RuntimeStructs__RemoteClass>", modifiers: "", def_value: None }]
  constexpr RuntimeRemoteClassHandle(::cordl_internals::Ptr<::Mono::__RuntimeStructs__RemoteClass> value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeRemoteClassHandle();

  /// @brief Field value, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<::Mono::__RuntimeStructs__RemoteClass> value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::RuntimeRemoteClassHandle, 0x8>, "Size mismatch!");

static_assert(offsetof(::Mono::RuntimeRemoteClassHandle, value) == 0x0, "Offset mismatch!");

} // namespace Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeRemoteClassHandle, "Mono", "RuntimeRemoteClassHandle");
