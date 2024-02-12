#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeTypeHandle)
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
struct CorElementType;
}
namespace System::Reflection {
class RuntimeAssembly;
}
namespace System::Reflection {
class RuntimeModule;
}
namespace System::Reflection {
struct TypeAttributes;
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
namespace System::Threading {
struct StackCrawlMark;
}
namespace System {
class Object;
}
namespace System {
class RuntimeType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
struct RuntimeTypeHandle;
}
// Write type traits
MARK_VAL_T(::System::RuntimeTypeHandle);
// Type: System::RuntimeTypeHandle
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2603))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2618))
// CS Name: ::System::RuntimeTypeHandle
struct CORDL_TYPE RuntimeTypeHandle {
public:
  // Declarations
  __declspec(property(get = get_Value)) void* Value;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable();

  /// @brief Method .ctor, addr 0x2623784, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(void* val);

  /// @brief Method .ctor, addr 0x262378c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::System::RuntimeType* type);

  /// @brief Method .ctor, addr 0x26237a8, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Value, addr 0x262395c, size 0x8, virtual false, abstract: false, final false
  inline void* get_Value();

  /// @brief Method GetObjectData, addr 0x2623964, size 0x1b8, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method Equals, addr 0x2623b1c, size 0xfc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2623c18, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetAttributes, addr 0x2623c20, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::TypeAttributes GetAttributes(::System::RuntimeType* type);

  /// @brief Method GetMetadataToken, addr 0x2623c24, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetMetadataToken(::System::RuntimeType* type);

  /// @brief Method GetToken, addr 0x2623c28, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetToken(::System::RuntimeType* type);

  /// @brief Method GetGenericTypeDefinition_impl, addr 0x2623c2c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Type* GetGenericTypeDefinition_impl(::System::RuntimeType* type);

  /// @brief Method GetGenericTypeDefinition, addr 0x2623c30, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Type* GetGenericTypeDefinition(::System::RuntimeType* type);

  /// @brief Method IsPrimitive, addr 0x2623c34, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsPrimitive(::System::RuntimeType* type);

  /// @brief Method IsByRef, addr 0x2623c74, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsByRef(::System::RuntimeType* type);

  /// @brief Method IsPointer, addr 0x2623c90, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsPointer(::System::RuntimeType* type);

  /// @brief Method IsArray, addr 0x2623cac, size 0x28, virtual false, abstract: false, final false
  static inline bool IsArray(::System::RuntimeType* type);

  /// @brief Method IsSzArray, addr 0x2623cd4, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsSzArray(::System::RuntimeType* type);

  /// @brief Method HasElementType, addr 0x2623cf0, size 0x3c, virtual false, abstract: false, final false
  static inline bool HasElementType(::System::RuntimeType* type);

  /// @brief Method GetCorElementType, addr 0x2623c70, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::CorElementType GetCorElementType(::System::RuntimeType* type);

  /// @brief Method HasInstantiation, addr 0x2623d2c, size 0x4, virtual false, abstract: false, final false
  static inline bool HasInstantiation(::System::RuntimeType* type);

  /// @brief Method IsComObject, addr 0x2623d30, size 0x4, virtual false, abstract: false, final false
  static inline bool IsComObject(::System::RuntimeType* type);

  /// @brief Method IsInstanceOfType, addr 0x2623d34, size 0x4, virtual false, abstract: false, final false
  static inline bool IsInstanceOfType(::System::RuntimeType* type, ::System::Object* o);

  /// @brief Method HasReferences, addr 0x2623d38, size 0x4, virtual false, abstract: false, final false
  static inline bool HasReferences(::System::RuntimeType* type);

  /// @brief Method IsComObject, addr 0x2623d3c, size 0x10, virtual false, abstract: false, final false
  static inline bool IsComObject(::System::RuntimeType* type, bool isGenericCOM);

  /// @brief Method IsContextful, addr 0x2623d4c, size 0x94, virtual false, abstract: false, final false
  static inline bool IsContextful(::System::RuntimeType* type);

  /// @brief Method IsEquivalentTo, addr 0x2623de0, size 0x8, virtual false, abstract: false, final false
  static inline bool IsEquivalentTo(::System::RuntimeType* rtType1, ::System::RuntimeType* rtType2);

  /// @brief Method IsInterface, addr 0x2623de8, size 0x20, virtual false, abstract: false, final false
  static inline bool IsInterface(::System::RuntimeType* type);

  /// @brief Method GetArrayRank, addr 0x2623e08, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetArrayRank(::System::RuntimeType* type);

  /// @brief Method GetAssembly, addr 0x2623e0c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::RuntimeAssembly* GetAssembly(::System::RuntimeType* type);

  /// @brief Method GetElementType, addr 0x2623e10, size 0x4, virtual false, abstract: false, final false
  static inline ::System::RuntimeType* GetElementType(::System::RuntimeType* type);

  /// @brief Method GetModule, addr 0x2623e14, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::RuntimeModule* GetModule(::System::RuntimeType* type);

  /// @brief Method IsGenericVariable, addr 0x2623e18, size 0x4, virtual false, abstract: false, final false
  static inline bool IsGenericVariable(::System::RuntimeType* type);

  /// @brief Method GetBaseType, addr 0x2623e1c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::RuntimeType* GetBaseType(::System::RuntimeType* type);

  /// @brief Method CanCastTo, addr 0x2623e20, size 0x10, virtual false, abstract: false, final false
  static inline bool CanCastTo(::System::RuntimeType* type, ::System::RuntimeType* target);

  /// @brief Method type_is_assignable_from, addr 0x2623e30, size 0x4, virtual false, abstract: false, final false
  static inline bool type_is_assignable_from(::System::Type* a, ::System::Type* b);

  /// @brief Method IsGenericTypeDefinition, addr 0x2623e34, size 0x4, virtual false, abstract: false, final false
  static inline bool IsGenericTypeDefinition(::System::RuntimeType* type);

  /// @brief Method GetGenericParameterInfo, addr 0x2623e38, size 0x4, virtual false, abstract: false, final false
  static inline void* GetGenericParameterInfo(::System::RuntimeType* type);

  /// @brief Method IsSubclassOf, addr 0x2623e3c, size 0x20, virtual false, abstract: false, final false
  static inline bool IsSubclassOf(::System::RuntimeType* childType, ::System::RuntimeType* baseType);

  /// @brief Method is_subclass_of, addr 0x2623e5c, size 0x4, virtual false, abstract: false, final false
  static inline bool is_subclass_of(void* childType, void* baseType);

  /// @brief Method internal_from_name, addr 0x2623e60, size 0x10, virtual false, abstract: false, final false
  static inline ::System::RuntimeType* internal_from_name(::StringW name, ByRef<::System::Threading::StackCrawlMark> stackMark, ::System::Reflection::Assembly* callerAssembly, bool throwOnError,
                                                          bool ignoreCase, bool reflectionOnly);

  /// @brief Method GetTypeByName, addr 0x2623e70, size 0x368, virtual false, abstract: false, final false
  static inline ::System::RuntimeType* GetTypeByName(::StringW typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly, ByRef<::System::Threading::StackCrawlMark> stackMark,
                                                     bool loadTypeFromPartialName);

  // Ctor Parameters [CppParam { name: "value", ty: "void*", modifiers: "", def_value: None }]
  constexpr RuntimeTypeHandle(void* value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeTypeHandle();

  /// @brief Field value, offset: 0x0, size: 0x8, def value: None
  void* value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::RuntimeTypeHandle, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::RuntimeTypeHandle, value) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::RuntimeTypeHandle, "System", "RuntimeTypeHandle");
