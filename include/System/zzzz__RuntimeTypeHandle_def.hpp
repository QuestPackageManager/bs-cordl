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

  /// @brief Method CanCastTo, addr 0x3e3c6e8, size 0x10, virtual false, abstract: false, final false
  static inline bool CanCastTo(::System::RuntimeType* type, ::System::RuntimeType* target);

  /// @brief Method Equals, addr 0x3e3c3e8, size 0xfc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetArrayRank, addr 0x3e3c6d0, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetArrayRank(::System::RuntimeType* type);

  /// @brief Method GetAssembly, addr 0x3e3c6d4, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::RuntimeAssembly* GetAssembly(::System::RuntimeType* type);

  /// @brief Method GetAttributes, addr 0x3e3c4ec, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::TypeAttributes GetAttributes(::System::RuntimeType* type);

  /// @brief Method GetBaseType, addr 0x3e3c6e4, size 0x4, virtual false, abstract: false, final false
  static inline ::System::RuntimeType* GetBaseType(::System::RuntimeType* type);

  /// @brief Method GetCorElementType, addr 0x3e3c538, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::CorElementType GetCorElementType(::System::RuntimeType* type);

  /// @brief Method GetElementType, addr 0x3e3c6d8, size 0x4, virtual false, abstract: false, final false
  static inline ::System::RuntimeType* GetElementType(::System::RuntimeType* type);

  /// @brief Method GetGenericParameterInfo, addr 0x3e3c700, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetGenericParameterInfo(::System::RuntimeType* type);

  /// @brief Method GetGenericTypeDefinition, addr 0x3e3c4fc, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Type* GetGenericTypeDefinition(::System::RuntimeType* type);

  /// @brief Method GetGenericTypeDefinition_impl, addr 0x3e3c4f8, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Type* GetGenericTypeDefinition_impl(::System::RuntimeType* type);

  /// @brief Method GetHashCode, addr 0x3e3c4e4, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetMetadataToken, addr 0x3e3c4f0, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetMetadataToken(::System::RuntimeType* type);

  /// @brief Method GetModule, addr 0x3e3c6dc, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::RuntimeModule* GetModule(::System::RuntimeType* type);

  /// @brief Method GetObjectData, addr 0x3e3c25c, size 0x18c, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetToken, addr 0x3e3c4f4, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetToken(::System::RuntimeType* type);

  /// @brief Method GetTypeByName, addr 0x3e3c738, size 0x35c, virtual false, abstract: false, final false
  static inline ::System::RuntimeType* GetTypeByName(::StringW typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly, ::ByRef<::System::Threading::StackCrawlMark> stackMark,
                                                     bool loadTypeFromPartialName);

  /// @brief Method HasElementType, addr 0x3e3c5b8, size 0x3c, virtual false, abstract: false, final false
  static inline bool HasElementType(::System::RuntimeType* type);

  /// @brief Method HasInstantiation, addr 0x3e3c5f4, size 0x4, virtual false, abstract: false, final false
  static inline bool HasInstantiation(::System::RuntimeType* type);

  /// @brief Method HasReferences, addr 0x3e3c600, size 0x4, virtual false, abstract: false, final false
  static inline bool HasReferences(::System::RuntimeType* type);

  /// @brief Method IsArray, addr 0x3e3c574, size 0x28, virtual false, abstract: false, final false
  static inline bool IsArray(::System::RuntimeType* type);

  /// @brief Method IsByRef, addr 0x3e3c53c, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsByRef(::System::RuntimeType* type);

  /// @brief Method IsComObject, addr 0x3e3c5f8, size 0x4, virtual false, abstract: false, final false
  static inline bool IsComObject(::System::RuntimeType* type);

  /// @brief Method IsComObject, addr 0x3e3c604, size 0x10, virtual false, abstract: false, final false
  static inline bool IsComObject(::System::RuntimeType* type, bool isGenericCOM);

  /// @brief Method IsContextful, addr 0x3e3c614, size 0x94, virtual false, abstract: false, final false
  static inline bool IsContextful(::System::RuntimeType* type);

  /// @brief Method IsEquivalentTo, addr 0x3e3c6a8, size 0x8, virtual false, abstract: false, final false
  static inline bool IsEquivalentTo(::System::RuntimeType* rtType1, ::System::RuntimeType* rtType2);

  /// @brief Method IsGenericTypeDefinition, addr 0x3e3c6fc, size 0x4, virtual false, abstract: false, final false
  static inline bool IsGenericTypeDefinition(::System::RuntimeType* type);

  /// @brief Method IsGenericVariable, addr 0x3e3c6e0, size 0x4, virtual false, abstract: false, final false
  static inline bool IsGenericVariable(::System::RuntimeType* type);

  /// @brief Method IsInstanceOfType, addr 0x3e3c5fc, size 0x4, virtual false, abstract: false, final false
  static inline bool IsInstanceOfType(::System::RuntimeType* type, ::System::Object* o);

  /// @brief Method IsInterface, addr 0x3e3c6b0, size 0x20, virtual false, abstract: false, final false
  static inline bool IsInterface(::System::RuntimeType* type);

  /// @brief Method IsPointer, addr 0x3e3c558, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsPointer(::System::RuntimeType* type);

  /// @brief Method IsPrimitive, addr 0x3e3c500, size 0x38, virtual false, abstract: false, final false
  static inline bool IsPrimitive(::System::RuntimeType* type);

  /// @brief Method IsSubclassOf, addr 0x3e3c704, size 0x20, virtual false, abstract: false, final false
  static inline bool IsSubclassOf(::System::RuntimeType* childType, ::System::RuntimeType* baseType);

  /// @brief Method IsSzArray, addr 0x3e3c59c, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsSzArray(::System::RuntimeType* type);

  /// @brief Method .ctor, addr 0x3e3c0cc, size 0x188, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3e3c0b0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::System::RuntimeType* type);

  /// @brief Method .ctor, addr 0x3e3c0a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr val);

  /// @brief Method get_Value, addr 0x3e3c254, size 0x8, virtual false, abstract: false, final false
  inline ::System::IntPtr get_Value();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable();

  /// @brief Method internal_from_name, addr 0x3e3c728, size 0x10, virtual false, abstract: false, final false
  static inline ::System::RuntimeType* internal_from_name(::StringW name, ::ByRef<::System::Threading::StackCrawlMark> stackMark, ::System::Reflection::Assembly* callerAssembly, bool throwOnError,
                                                          bool ignoreCase, bool reflectionOnly);

  /// @brief Method is_subclass_of, addr 0x3e3c724, size 0x4, virtual false, abstract: false, final false
  static inline bool is_subclass_of(::System::IntPtr childType, ::System::IntPtr baseType);

  /// @brief Method type_is_assignable_from, addr 0x3e3c6f8, size 0x4, virtual false, abstract: false, final false
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
