#pragma once
// IWYU pragma private; include "System/RuntimeFieldHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeFieldHandle)
namespace System::Reflection {
struct FieldAttributes;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class RuntimeFieldInfo;
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
class RuntimeType;
}
// Forward declare root types
namespace System {
struct RuntimeFieldHandle;
}
// Write type traits
MARK_VAL_T(::System::RuntimeFieldHandle);
// Dependencies System.IntPtr
namespace System {
// Is value type: true
// CS Name: System.RuntimeFieldHandle
struct CORDL_TYPE RuntimeFieldHandle {
public:
  // Declarations
  __declspec(property(get = get_Value)) ::System::IntPtr Value;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*();

  /// @brief Method Equals, addr 0x5a812e4, size 0xe8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x5a813cc, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetObjectData, addr 0x5a81158, size 0x18c, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method SetValue, addr 0x5a813d8, size 0x4, virtual false, abstract: false, final false
  static inline void SetValue(::System::Reflection::RuntimeFieldInfo* field, ::System::Object* obj, ::System::Object* value, ::System::RuntimeType* fieldType,
                              ::System::Reflection::FieldAttributes fieldAttr, ::System::RuntimeType* declaringType, ::ByRef<bool> domainInitialized);

  /// @brief Method SetValueDirect, addr 0x5a813dc, size 0x4, virtual false, abstract: false, final false
  static inline void SetValueDirect(::System::Reflection::RuntimeFieldInfo* field, ::System::RuntimeType* fieldType, void* pTypedRef, ::System::Object* value, ::System::RuntimeType* contextType);

  /// @brief Method SetValueInternal, addr 0x5a813d4, size 0x4, virtual false, abstract: false, final false
  static inline void SetValueInternal(::System::Reflection::FieldInfo* fi, ::System::Object* obj, ::System::Object* value);

  /// @brief Method .ctor, addr 0x5a80fcc, size 0x184, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5a80fc4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr v);

  /// @brief Method get_Value, addr 0x5a81150, size 0x8, virtual false, abstract: false, final false
  inline ::System::IntPtr get_Value();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeFieldHandle();

  // Ctor Parameters [CppParam { name: "value", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr RuntimeFieldHandle(::System::IntPtr value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2626 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field value, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::RuntimeFieldHandle, value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::RuntimeFieldHandle, 0x8>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::RuntimeFieldHandle, "System", "RuntimeFieldHandle");
