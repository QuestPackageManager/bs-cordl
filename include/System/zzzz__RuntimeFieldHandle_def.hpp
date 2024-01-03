#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: System::RuntimeFieldHandle
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2616))
// CS Name: ::System::RuntimeFieldHandle
struct CORDL_TYPE RuntimeFieldHandle {
public:
  // Declarations
  __declspec(property(get = get_Value)) void* Value;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable();

  /// @brief Method .ctor, addr 0x25fedb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(void* v);

  /// @brief Method .ctor, addr 0x25fedc0, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Value, addr 0x25fef74, size 0x8, virtual false, abstract: false, final false
  inline void* get_Value();

  /// @brief Method GetObjectData, addr 0x25fef7c, size 0x1bc, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method Equals, addr 0x25ff138, size 0xfc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x25ff234, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method SetValueInternal, addr 0x25ff23c, size 0x4, virtual false, abstract: false, final false
  static inline void SetValueInternal(::System::Reflection::FieldInfo* fi, ::System::Object* obj, ::System::Object* value);

  /// @brief Method SetValue, addr 0x25ff240, size 0x4, virtual false, abstract: false, final false
  static inline void SetValue(::System::Reflection::RuntimeFieldInfo* field, ::System::Object* obj, ::System::Object* value, ::System::RuntimeType* fieldType,
                              ::System::Reflection::FieldAttributes fieldAttr, ::System::RuntimeType* declaringType, ByRef<bool> domainInitialized);

  /// @brief Method SetValueDirect, addr 0x25ff244, size 0x4, virtual false, abstract: false, final false
  static inline void SetValueDirect(::System::Reflection::RuntimeFieldInfo* field, ::System::RuntimeType* fieldType, ::cordl_internals::Ptr<void> pTypedRef, ::System::Object* value,
                                    ::System::RuntimeType* contextType);

  // Ctor Parameters [CppParam { name: "value", ty: "void*", modifiers: "", def_value: None }]
  constexpr RuntimeFieldHandle(void* value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeFieldHandle();

  /// @brief Field value, offset: 0x0, size: 0x8, def value: None
  void* value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::RuntimeFieldHandle, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::RuntimeFieldHandle, value) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::RuntimeFieldHandle, "System", "RuntimeFieldHandle");
