#pragma once
// IWYU pragma private; include "Mono/RuntimeClassHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeClassHandle)
namespace Mono {
struct RuntimeStructs_MonoClass;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
struct RuntimeTypeHandle;
}
// Forward declare root types
namespace Mono {
struct RuntimeClassHandle;
}
// Write type traits
MARK_VAL_T(::Mono::RuntimeClassHandle);
// Dependencies
namespace Mono {
// Is value type: true
// CS Name: Mono.RuntimeClassHandle
struct CORDL_TYPE RuntimeClassHandle {
public:
  // Declarations
  __declspec(property(get = get_Value)) ::Mono::RuntimeStructs_MonoClass* Value;

  /// @brief Method Equals, addr 0x58983f4, size 0xe8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x58984dc, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTypeFromClass, addr 0x58984e4, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetTypeFromClass(::Mono::RuntimeStructs_MonoClass* klass);

  /// @brief Method GetTypeHandle, addr 0x58984ec, size 0xc, virtual false, abstract: false, final false
  inline ::System::RuntimeTypeHandle GetTypeHandle();

  /// @brief Method .ctor, addr 0x58983e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr);

  /// @brief Method .ctor, addr 0x58983dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Mono::RuntimeStructs_MonoClass* value);

  /// @brief Method get_Value, addr 0x58983ec, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::RuntimeStructs_MonoClass* get_Value();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeClassHandle();

  // Ctor Parameters [CppParam { name: "value", ty: "::Mono::RuntimeStructs_MonoClass*", modifiers: "", def_value: None }]
  constexpr RuntimeClassHandle(::Mono::RuntimeStructs_MonoClass* value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2228 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field value, offset: 0x0, size: 0x8, def value: None
  ::Mono::RuntimeStructs_MonoClass* value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::RuntimeClassHandle, value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::RuntimeClassHandle, 0x8>, "Size mismatch!");

} // namespace Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeClassHandle, "Mono", "RuntimeClassHandle");
