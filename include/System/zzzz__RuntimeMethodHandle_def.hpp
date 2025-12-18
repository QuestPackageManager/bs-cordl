#pragma once
// IWYU pragma private; include "System/RuntimeMethodHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeMethodHandle)
namespace System::Reflection {
class RuntimeMethodInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
struct TypeNameFormatFlags;
}
// Forward declare root types
namespace System {
struct RuntimeMethodHandle;
}
// Write type traits
MARK_VAL_T(::System::RuntimeMethodHandle);
// Dependencies System.IntPtr
namespace System {
// Is value type: true
// CS Name: System.RuntimeMethodHandle
struct CORDL_TYPE RuntimeMethodHandle {
public:
  // Declarations
  __declspec(property(get = get_Value)) ::System::IntPtr Value;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*();

  /// @brief Method ConstructInstantiation, addr 0x5ae813c, size 0x164, virtual false, abstract: false, final false
  static inline ::StringW ConstructInstantiation(::System::Reflection::RuntimeMethodInfo* method, ::System::TypeNameFormatFlags format);

  /// @brief Method Equals, addr 0x5ae804c, size 0xe8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x5ae8134, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetObjectData, addr 0x5ae7ec0, size 0x18c, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method IsNullHandle, addr 0x5ae82a0, size 0x10, virtual false, abstract: false, final false
  inline bool IsNullHandle();

  /// @brief Method .ctor, addr 0x5ae7d34, size 0x184, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5ae7d2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr v);

  /// @brief Method get_Value, addr 0x5ae7eb8, size 0x8, virtual false, abstract: false, final false
  inline ::System::IntPtr get_Value();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeMethodHandle();

  // Ctor Parameters [CppParam { name: "value", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr RuntimeMethodHandle(::System::IntPtr value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2627 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field value, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::RuntimeMethodHandle, value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::RuntimeMethodHandle, 0x8>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::RuntimeMethodHandle, "System", "RuntimeMethodHandle");
