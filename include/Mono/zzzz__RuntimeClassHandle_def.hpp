#pragma once
// IWYU pragma private; include "Mono/RuntimeClassHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeClassHandle)
namespace Mono {
struct __RuntimeStructs__MonoClass;
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
// Type: Mono::RuntimeClassHandle
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Mono {
// Is value type: true
// CS Name: ::Mono::RuntimeClassHandle
struct CORDL_TYPE RuntimeClassHandle {
public:
  // Declarations
  __declspec(property(get = get_Value)) ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass> Value;

  /// @brief Method Equals, addr 0x3bdf8c0, size 0x104, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x3bdf9c4, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTypeFromClass, addr 0x3bdf9ec, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetTypeFromClass(::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass> klass);

  /// @brief Method GetTypeHandle, addr 0x3bdf9f0, size 0x8, virtual false, abstract: false, final false
  inline ::System::RuntimeTypeHandle GetTypeHandle();

  /// @brief Method .ctor, addr 0x3bdf898, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr);

  /// @brief Method .ctor, addr 0x3bdf890, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass> value);

  /// @brief Method get_Value, addr 0x3bdf8b8, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass> get_Value();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeClassHandle();

  // Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>", modifiers: "", def_value: None }]
  constexpr RuntimeClassHandle(::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass> value) noexcept;

  /// @brief Field value, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass> value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2228 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::RuntimeClassHandle, 0x8>, "Size mismatch!");

static_assert(offsetof(::Mono::RuntimeClassHandle, value) == 0x0, "Offset mismatch!");

} // namespace Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeClassHandle, "Mono", "RuntimeClassHandle");
