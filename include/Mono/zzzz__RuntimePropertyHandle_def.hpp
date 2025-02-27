#pragma once
// IWYU pragma private; include "Mono/RuntimePropertyHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimePropertyHandle)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono {
struct RuntimePropertyHandle;
}
// Write type traits
MARK_VAL_T(::Mono::RuntimePropertyHandle);
// Dependencies System.IntPtr
namespace Mono {
// Is value type: true
// CS Name: Mono.RuntimePropertyHandle
struct CORDL_TYPE RuntimePropertyHandle {
public:
  // Declarations
  __declspec(property(get = get_Value)) ::System::IntPtr Value;

  /// @brief Method Equals, addr 0x3c63258, size 0x10c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x3c63364, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x3c63248, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr v);

  /// @brief Method get_Value, addr 0x3c63250, size 0x8, virtual false, abstract: false, final false
  inline ::System::IntPtr get_Value();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimePropertyHandle();

  // Ctor Parameters [CppParam { name: "value", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr RuntimePropertyHandle(::System::IntPtr value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2232 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field value, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::RuntimePropertyHandle, value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::RuntimePropertyHandle, 0x8>, "Size mismatch!");

} // namespace Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimePropertyHandle, "Mono", "RuntimePropertyHandle");
