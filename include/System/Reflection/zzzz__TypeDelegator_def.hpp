#pragma once
// IWYU pragma private; include "System/Reflection/TypeDelegator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__TypeInfo_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeDelegator)
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
struct InterfaceMapping;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Reflection {
struct TypeAttributes;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class TypeDelegator;
}
// Write type traits
MARK_REF_T(::System::Reflection::TypeDelegator*);
DEFINE_IL2CPP_CLASS(::System::Reflection::TypeDelegator*, "System.Reflection", "TypeDelegator");
// Dependencies System.Reflection.TypeInfo
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.TypeDelegator
class CORDL_TYPE TypeDelegator : public ::System::Reflection::TypeInfo {
public:
  // Declarations
  __declspec(property(get = get_Assembly)) ::System::Reflection::Assembly* Assembly;

  __declspec(property(get = get_AssemblyQualifiedName)) ::StringW AssemblyQualifiedName;

  __declspec(property(get = get_BaseType)) ::System::Type* BaseType;

  __declspec(property(get = get_FullName)) ::StringW FullName;

  __declspec(property(get = get_GUID)) ::System::Guid GUID;

  __declspec(property(get = get_IsCollectible)) bool IsCollectible;

  __declspec(property(get = get_IsConstructedGenericType)) bool IsConstructedGenericType;

  __declspec(property(get = get_IsGenericMethodParameter)) bool IsGenericMethodParameter;

  __declspec(property(get = get_IsSZArray)) bool IsSZArray;

  __declspec(property(get = get_MetadataToken)) int32_t MetadataToken;

  __declspec(property(get = get_Module)) ::System::Reflection::Module* Module;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_Namespace)) ::StringW Namespace;

  __declspec(property(get = get_TypeHandle)) ::System::RuntimeTypeHandle TypeHandle;

  __declspec(property(get = get_UnderlyingSystemType)) ::System::Type* UnderlyingSystemType;

  /// @brief Field typeImpl, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_typeImpl, put = __cordl_internal_set_typeImpl)) ::System::Type* typeImpl;

  /// @brief Method GetAttributeFlagsImpl, addr 0x5f9c254, size 0x20, virtual true, abstract: false, final false
  inline ::System::Reflection::TypeAttributes GetAttributeFlagsImpl();

  /// @brief Method GetConstructorImpl, addr 0x5f9bfdc, size 0x18, virtual true, abstract: false, final false
  inline ::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                   ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*> types,
                                                                   ::ArrayW<::System::Reflection::ParameterModifier> modifiers);

  /// [ComVisible(true)]
  /// @brief Method GetConstructors, addr 0x5f9bff4, size 0x20, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::ConstructorInfo*> GetConstructors(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetCustomAttributes, addr 0x5f9c438, size 0x24, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x5f9c414, size 0x24, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*> GetCustomAttributes(bool inherit);

  /// @brief Method GetElementType, addr 0x5f9c3b4, size 0x20, virtual true, abstract: false, final false
  inline ::System::Type* GetElementType();

  /// @brief Method GetEvent, addr 0x5f9c0e8, size 0x20, virtual true, abstract: false, final false
  inline ::System::Reflection::EventInfo* GetEvent(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetEvents, addr 0x5f9c1d4, size 0x20, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::EventInfo*> GetEvents(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetField, addr 0x5f9c064, size 0x20, virtual true, abstract: false, final false
  inline ::System::Reflection::FieldInfo* GetField(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetFields, addr 0x5f9c084, size 0x20, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::FieldInfo*> GetFields(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetInterface, addr 0x5f9c0a4, size 0x24, virtual true, abstract: false, final false
  inline ::System::Type* GetInterface(::StringW name, bool ignoreCase);

  /// [ComVisible(true)]
  /// @brief Method GetInterfaceMap, addr 0x5f9c47c, size 0x40, virtual true, abstract: false, final false
  inline ::System::Reflection::InterfaceMapping GetInterfaceMap(::System::Type* interfaceType);

  /// @brief Method GetInterfaces, addr 0x5f9c0c8, size 0x20, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*> GetInterfaces();

  /// @brief Method GetMember, addr 0x5f9c214, size 0x20, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::MemberInfo*> GetMember(::StringW name, ::System::Reflection::MemberTypes type, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMembers, addr 0x5f9c234, size 0x20, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::MemberInfo*> GetMembers(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMethodImpl, addr 0x5f9c014, size 0x30, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetMethodImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                         ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*> types,
                                                         ::ArrayW<::System::Reflection::ParameterModifier> modifiers);

  /// @brief Method GetMethods, addr 0x5f9c044, size 0x20, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::MethodInfo*> GetMethods(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetNestedType, addr 0x5f9c1f4, size 0x20, virtual true, abstract: false, final false
  inline ::System::Type* GetNestedType(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetProperties, addr 0x5f9c1b4, size 0x20, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::PropertyInfo*> GetProperties(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetPropertyImpl, addr 0x5f9c108, size 0xac, virtual true, abstract: false, final false
  inline ::System::Reflection::PropertyInfo* GetPropertyImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType,
                                                             ::ArrayW<::System::Type*> types, ::ArrayW<::System::Reflection::ParameterModifier> modifiers);

  /// @brief Method HasElementTypeImpl, addr 0x5f9c3d4, size 0x20, virtual true, abstract: false, final false
  inline bool HasElementTypeImpl();

  /// @brief Method InvokeMember, addr 0x5f9beb4, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Object* InvokeMember(::StringW name, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Object* target, ::ArrayW<::System::Object*> args,
                                        ::ArrayW<::System::Reflection::ParameterModifier> modifiers, ::System::Globalization::CultureInfo* culture, ::ArrayW<::StringW> namedParameters);

  /// @brief Method IsArrayImpl, addr 0x5f9c294, size 0x20, virtual true, abstract: false, final false
  inline bool IsArrayImpl();

  /// @brief Method IsByRefImpl, addr 0x5f9c2d4, size 0x20, virtual true, abstract: false, final false
  inline bool IsByRefImpl();

  /// @brief Method IsCOMObjectImpl, addr 0x5f9c354, size 0x20, virtual true, abstract: false, final false
  inline bool IsCOMObjectImpl();

  /// @brief Method IsDefined, addr 0x5f9c45c, size 0x20, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method IsPointerImpl, addr 0x5f9c314, size 0x20, virtual true, abstract: false, final false
  inline bool IsPointerImpl();

  /// @brief Method IsPrimitiveImpl, addr 0x5f9c2b4, size 0x20, virtual true, abstract: false, final false
  inline bool IsPrimitiveImpl();

  /// @brief Method IsValueTypeImpl, addr 0x5f9c334, size 0x20, virtual true, abstract: false, final false
  inline bool IsValueTypeImpl();

  static inline ::System::Reflection::TypeDelegator* New_ctor(::System::Type* delegatingType);

  constexpr ::System::Type* const& __cordl_internal_get_typeImpl() const;

  constexpr ::System::Type*& __cordl_internal_get_typeImpl();

  constexpr void __cordl_internal_set_typeImpl(::System::Type* value);

  /// @brief Method .ctor, addr 0x5f96c8c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* delegatingType);

  /// @brief Method get_Assembly, addr 0x5f9bf00, size 0x20, virtual true, abstract: false, final false
  inline ::System::Reflection::Assembly* get_Assembly();

  /// @brief Method get_AssemblyQualifiedName, addr 0x5f9bf9c, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_AssemblyQualifiedName();

  /// @brief Method get_BaseType, addr 0x5f9bfbc, size 0x20, virtual true, abstract: false, final false
  inline ::System::Type* get_BaseType();

  /// @brief Method get_FullName, addr 0x5f9bf5c, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_FullName();

  /// @brief Method get_GUID, addr 0x5f9be74, size 0x20, virtual true, abstract: false, final false
  inline ::System::Guid get_GUID();

  /// @brief Method get_IsCollectible, addr 0x5f9c394, size 0x20, virtual true, abstract: false, final false
  inline bool get_IsCollectible();

  /// @brief Method get_IsConstructedGenericType, addr 0x5f9c374, size 0x20, virtual true, abstract: false, final false
  inline bool get_IsConstructedGenericType();

  /// @brief Method get_IsGenericMethodParameter, addr 0x5f9c2f4, size 0x20, virtual true, abstract: false, final false
  inline bool get_IsGenericMethodParameter();

  /// @brief Method get_IsSZArray, addr 0x5f9c274, size 0x20, virtual true, abstract: false, final false
  inline bool get_IsSZArray();

  /// @brief Method get_MetadataToken, addr 0x5f9be94, size 0x20, virtual true, abstract: false, final false
  inline int32_t get_MetadataToken();

  /// @brief Method get_Module, addr 0x5f9bee0, size 0x20, virtual true, abstract: false, final false
  inline ::System::Reflection::Module* get_Module();

  /// @brief Method get_Name, addr 0x5f9bf40, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Namespace, addr 0x5f9bf7c, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method get_TypeHandle, addr 0x5f9bf20, size 0x20, virtual true, abstract: false, final false
  inline ::System::RuntimeTypeHandle get_TypeHandle();

  /// @brief Method get_UnderlyingSystemType, addr 0x5f9c3f4, size 0x20, virtual true, abstract: false, final false
  inline ::System::Type* get_UnderlyingSystemType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeDelegator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeDelegator", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeDelegator(TypeDelegator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeDelegator", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeDelegator(TypeDelegator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3526 };

  /// @brief Field typeImpl, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___typeImpl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::TypeDelegator, ___typeImpl) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Reflection::TypeDelegator) == 0x20, "Size mismatch!");

} // namespace System::Reflection
