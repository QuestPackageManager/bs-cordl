#pragma once
// IWYU pragma private; include "System/RuntimeTypeHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
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
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Threading {
struct StackCrawlMark;
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
namespace System {
class Type;
}
// Forward declare root types
namespace System {
struct RuntimeTypeHandle;
}
// Write type traits
MARK_VAL_T(::System::RuntimeTypeHandle);
// Dependencies System.IntPtr, System.Runtime.Serialization.ISerializable
namespace System {
// Is value type: true
// CS Name: System.RuntimeTypeHandle
struct CORDL_TYPE RuntimeTypeHandle {
public:
  // Declarations
  __declspec(property(get = get_Value)) ::System::IntPtr Value;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*();

  /// @brief Method CanCastTo, addr 0x3e3c380, size 0x10, virtual false, abstract: false, final false
  static inline bool CanCastTo(::System::RuntimeType* type, ::System::RuntimeType* target);

  /// @brief Method Equals, addr 0x3e3c080, size 0xfc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetArrayRank, addr 0x3e3c368, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetArrayRank(::System::RuntimeType* type);

  /// @brief Method GetAssembly, addr 0x3e3c36c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::RuntimeAssembly* GetAssembly(::System::RuntimeType* type);

  /// @brief Method GetAttributes, addr 0x3e3c184, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::TypeAttributes GetAttributes(::System::RuntimeType* type);

  /// @brief Method GetBaseType, addr 0x3e3c37c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::RuntimeType* GetBaseType(::System::RuntimeType* type);

  /// @brief Method GetCorElementType, addr 0x3e3c1d0, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::CorElementType GetCorElementType(::System::RuntimeType* type);

  /// @brief Method GetElementType, addr 0x3e3c370, size 0x4, virtual false, abstract: false, final false
  static inline ::System::RuntimeType* GetElementType(::System::RuntimeType* type);

  /// @brief Method GetGenericParameterInfo, addr 0x3e3c398, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetGenericParameterInfo(::System::RuntimeType* type);

  /// @brief Method GetGenericTypeDefinition, addr 0x3e3c194, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Type* GetGenericTypeDefinition(::System::RuntimeType* type);

  /// @brief Method GetGenericTypeDefinition_impl, addr 0x3e3c190, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Type* GetGenericTypeDefinition_impl(::System::RuntimeType* type);

  /// @brief Method GetHashCode, addr 0x3e3c17c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetMetadataToken, addr 0x3e3c188, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetMetadataToken(::System::RuntimeType* type);

  /// @brief Method GetModule, addr 0x3e3c374, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::RuntimeModule* GetModule(::System::RuntimeType* type);

  /// @brief Method GetObjectData, addr 0x3e3bef4, size 0x18c, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetToken, addr 0x3e3c18c, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetToken(::System::RuntimeType* type);

  /// @brief Method GetTypeByName, addr 0x3e3c3d0, size 0x35c, virtual false, abstract: false, final false
  static inline ::System::RuntimeType* GetTypeByName(::StringW typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly, ::ByRef<::System::Threading::StackCrawlMark> stackMark,
                                                     bool loadTypeFromPartialName);

  /// @brief Method HasElementType, addr 0x3e3c250, size 0x3c, virtual false, abstract: false, final false
  static inline bool HasElementType(::System::RuntimeType* type);

  /// @brief Method HasInstantiation, addr 0x3e3c28c, size 0x4, virtual false, abstract: false, final false
  static inline bool HasInstantiation(::System::RuntimeType* type);

  /// @brief Method HasReferences, addr 0x3e3c298, size 0x4, virtual false, abstract: false, final false
  static inline bool HasReferences(::System::RuntimeType* type);

  /// @brief Method IsArray, addr 0x3e3c20c, size 0x28, virtual false, abstract: false, final false
  static inline bool IsArray(::System::RuntimeType* type);

  /// @brief Method IsByRef, addr 0x3e3c1d4, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsByRef(::System::RuntimeType* type);

  /// @brief Method IsComObject, addr 0x3e3c290, size 0x4, virtual false, abstract: false, final false
  static inline bool IsComObject(::System::RuntimeType* type);

  /// @brief Method IsComObject, addr 0x3e3c29c, size 0x10, virtual false, abstract: false, final false
  static inline bool IsComObject(::System::RuntimeType* type, bool isGenericCOM);

  /// @brief Method IsContextful, addr 0x3e3c2ac, size 0x94, virtual false, abstract: false, final false
  static inline bool IsContextful(::System::RuntimeType* type);

  /// @brief Method IsEquivalentTo, addr 0x3e3c340, size 0x8, virtual false, abstract: false, final false
  static inline bool IsEquivalentTo(::System::RuntimeType* rtType1, ::System::RuntimeType* rtType2);

  /// @brief Method IsGenericTypeDefinition, addr 0x3e3c394, size 0x4, virtual false, abstract: false, final false
  static inline bool IsGenericTypeDefinition(::System::RuntimeType* type);

  /// @brief Method IsGenericVariable, addr 0x3e3c378, size 0x4, virtual false, abstract: false, final false
  static inline bool IsGenericVariable(::System::RuntimeType* type);

  /// @brief Method IsInstanceOfType, addr 0x3e3c294, size 0x4, virtual false, abstract: false, final false
  static inline bool IsInstanceOfType(::System::RuntimeType* type, ::System::Object* o);

  /// @brief Method IsInterface, addr 0x3e3c348, size 0x20, virtual false, abstract: false, final false
  static inline bool IsInterface(::System::RuntimeType* type);

  /// @brief Method IsPointer, addr 0x3e3c1f0, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsPointer(::System::RuntimeType* type);

  /// @brief Method IsPrimitive, addr 0x3e3c198, size 0x38, virtual false, abstract: false, final false
  static inline bool IsPrimitive(::System::RuntimeType* type);

  /// @brief Method IsSubclassOf, addr 0x3e3c39c, size 0x20, virtual false, abstract: false, final false
  static inline bool IsSubclassOf(::System::RuntimeType* childType, ::System::RuntimeType* baseType);

  /// @brief Method IsSzArray, addr 0x3e3c234, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsSzArray(::System::RuntimeType* type);

  /// @brief Method .ctor, addr 0x3e3bd64, size 0x188, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3e3bd48, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::System::RuntimeType* type);

  /// @brief Method .ctor, addr 0x3e3bd40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr val);

  /// @brief Method get_Value, addr 0x3e3beec, size 0x8, virtual false, abstract: false, final false
  inline ::System::IntPtr get_Value();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable();

  /// @brief Method internal_from_name, addr 0x3e3c3c0, size 0x10, virtual false, abstract: false, final false
  static inline ::System::RuntimeType* internal_from_name(::StringW name, ::ByRef<::System::Threading::StackCrawlMark> stackMark, ::System::Reflection::Assembly* callerAssembly, bool throwOnError,
                                                          bool ignoreCase, bool reflectionOnly);

  /// @brief Method is_subclass_of, addr 0x3e3c3bc, size 0x4, virtual false, abstract: false, final false
  static inline bool is_subclass_of(::System::IntPtr childType, ::System::IntPtr baseType);

  /// @brief Method type_is_assignable_from, addr 0x3e3c390, size 0x4, virtual false, abstract: false, final false
  static inline bool type_is_assignable_from(::System::Type* a, ::System::Type* b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeTypeHandle();

  // Ctor Parameters [CppParam { name: "value", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr RuntimeTypeHandle(::System::IntPtr value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2620 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field value, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::RuntimeTypeHandle, value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::RuntimeTypeHandle, 0x8>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::RuntimeTypeHandle, "System", "RuntimeTypeHandle");
