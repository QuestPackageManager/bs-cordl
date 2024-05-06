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
// CS Name: ::System::RuntimeTypeHandle
struct CORDL_TYPE RuntimeTypeHandle {
public:
  // Declarations
  __declspec(property(get = get_Value)) void* Value;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*();

  /// @brief Method CanCastTo, addr 0x2985dec, size 0x10, virtual false, abstract: false, final false
  static inline bool CanCastTo(::System::RuntimeType* type, ::System::RuntimeType* target);

  /// @brief Method Equals, addr 0x2985ae8, size 0xfc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetArrayRank, addr 0x2985dd4, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetArrayRank(::System::RuntimeType* type);

  /// @brief Method GetAssembly, addr 0x2985dd8, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::RuntimeAssembly* GetAssembly(::System::RuntimeType* type);

  /// @brief Method GetAttributes, addr 0x2985bec, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::TypeAttributes GetAttributes(::System::RuntimeType* type);

  /// @brief Method GetBaseType, addr 0x2985de8, size 0x4, virtual false, abstract: false, final false
  static inline ::System::RuntimeType* GetBaseType(::System::RuntimeType* type);

  /// @brief Method GetCorElementType, addr 0x2985c3c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::CorElementType GetCorElementType(::System::RuntimeType* type);

  /// @brief Method GetElementType, addr 0x2985ddc, size 0x4, virtual false, abstract: false, final false
  static inline ::System::RuntimeType* GetElementType(::System::RuntimeType* type);

  /// @brief Method GetGenericParameterInfo, addr 0x2985e04, size 0x4, virtual false, abstract: false, final false
  static inline void* GetGenericParameterInfo(::System::RuntimeType* type);

  /// @brief Method GetGenericTypeDefinition, addr 0x2985bfc, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Type* GetGenericTypeDefinition(::System::RuntimeType* type);

  /// @brief Method GetGenericTypeDefinition_impl, addr 0x2985bf8, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Type* GetGenericTypeDefinition_impl(::System::RuntimeType* type);

  /// @brief Method GetHashCode, addr 0x2985be4, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetMetadataToken, addr 0x2985bf0, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetMetadataToken(::System::RuntimeType* type);

  /// @brief Method GetModule, addr 0x2985de0, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::RuntimeModule* GetModule(::System::RuntimeType* type);

  /// @brief Method GetObjectData, addr 0x2985930, size 0x1b8, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetToken, addr 0x2985bf4, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetToken(::System::RuntimeType* type);

  /// @brief Method GetTypeByName, addr 0x2985e3c, size 0x368, virtual false, abstract: false, final false
  static inline ::System::RuntimeType* GetTypeByName(::StringW typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly, ByRef<::System::Threading::StackCrawlMark> stackMark,
                                                     bool loadTypeFromPartialName);

  /// @brief Method HasElementType, addr 0x2985cbc, size 0x3c, virtual false, abstract: false, final false
  static inline bool HasElementType(::System::RuntimeType* type);

  /// @brief Method HasInstantiation, addr 0x2985cf8, size 0x4, virtual false, abstract: false, final false
  static inline bool HasInstantiation(::System::RuntimeType* type);

  /// @brief Method HasReferences, addr 0x2985d04, size 0x4, virtual false, abstract: false, final false
  static inline bool HasReferences(::System::RuntimeType* type);

  /// @brief Method IsArray, addr 0x2985c78, size 0x28, virtual false, abstract: false, final false
  static inline bool IsArray(::System::RuntimeType* type);

  /// @brief Method IsByRef, addr 0x2985c40, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsByRef(::System::RuntimeType* type);

  /// @brief Method IsComObject, addr 0x2985cfc, size 0x4, virtual false, abstract: false, final false
  static inline bool IsComObject(::System::RuntimeType* type);

  /// @brief Method IsComObject, addr 0x2985d08, size 0x10, virtual false, abstract: false, final false
  static inline bool IsComObject(::System::RuntimeType* type, bool isGenericCOM);

  /// @brief Method IsContextful, addr 0x2985d18, size 0x94, virtual false, abstract: false, final false
  static inline bool IsContextful(::System::RuntimeType* type);

  /// @brief Method IsEquivalentTo, addr 0x2985dac, size 0x8, virtual false, abstract: false, final false
  static inline bool IsEquivalentTo(::System::RuntimeType* rtType1, ::System::RuntimeType* rtType2);

  /// @brief Method IsGenericTypeDefinition, addr 0x2985e00, size 0x4, virtual false, abstract: false, final false
  static inline bool IsGenericTypeDefinition(::System::RuntimeType* type);

  /// @brief Method IsGenericVariable, addr 0x2985de4, size 0x4, virtual false, abstract: false, final false
  static inline bool IsGenericVariable(::System::RuntimeType* type);

  /// @brief Method IsInstanceOfType, addr 0x2985d00, size 0x4, virtual false, abstract: false, final false
  static inline bool IsInstanceOfType(::System::RuntimeType* type, ::System::Object* o);

  /// @brief Method IsInterface, addr 0x2985db4, size 0x20, virtual false, abstract: false, final false
  static inline bool IsInterface(::System::RuntimeType* type);

  /// @brief Method IsPointer, addr 0x2985c5c, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsPointer(::System::RuntimeType* type);

  /// @brief Method IsPrimitive, addr 0x2985c00, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsPrimitive(::System::RuntimeType* type);

  /// @brief Method IsSubclassOf, addr 0x2985e08, size 0x20, virtual false, abstract: false, final false
  static inline bool IsSubclassOf(::System::RuntimeType* childType, ::System::RuntimeType* baseType);

  /// @brief Method IsSzArray, addr 0x2985ca0, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsSzArray(::System::RuntimeType* type);

  /// @brief Method .ctor, addr 0x2985774, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x2985758, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::System::RuntimeType* type);

  /// @brief Method .ctor, addr 0x2985750, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(void* val);

  /// @brief Method get_Value, addr 0x2985928, size 0x8, virtual false, abstract: false, final false
  inline void* get_Value();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable();

  /// @brief Method internal_from_name, addr 0x2985e2c, size 0x10, virtual false, abstract: false, final false
  static inline ::System::RuntimeType* internal_from_name(::StringW name, ByRef<::System::Threading::StackCrawlMark> stackMark, ::System::Reflection::Assembly* callerAssembly, bool throwOnError,
                                                          bool ignoreCase, bool reflectionOnly);

  /// @brief Method is_subclass_of, addr 0x2985e28, size 0x4, virtual false, abstract: false, final false
  static inline bool is_subclass_of(void* childType, void* baseType);

  /// @brief Method type_is_assignable_from, addr 0x2985dfc, size 0x4, virtual false, abstract: false, final false
  static inline bool type_is_assignable_from(::System::Type* a, ::System::Type* b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeTypeHandle();

  // Ctor Parameters [CppParam { name: "value", ty: "void*", modifiers: "", def_value: None }]
  constexpr RuntimeTypeHandle(void* value) noexcept;

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
