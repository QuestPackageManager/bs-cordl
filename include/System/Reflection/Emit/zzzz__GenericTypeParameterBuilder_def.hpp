#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__TypeInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GenericTypeParameterBuilder)
namespace System::Reflection {
class Assembly;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Type;
}
namespace System {
struct Guid;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Object;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System::Reflection {
struct TypeAttributes;
}
namespace System::Reflection {
struct BindingFlags;
}
// Forward declare root types
namespace System::Reflection::Emit {
class GenericTypeParameterBuilder;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Emit::GenericTypeParameterBuilder);
// Type: System.Reflection.Emit::GenericTypeParameterBuilder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3502))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3540))
// CS Name: ::System.Reflection.Emit::GenericTypeParameterBuilder*
class CORDL_TYPE GenericTypeParameterBuilder : public ::System::Reflection::TypeInfo {
public:
  // Declarations
  __declspec(property(get = get_Assembly))::System::Reflection::Assembly* Assembly;

  __declspec(property(get = get_AssemblyQualifiedName))::StringW AssemblyQualifiedName;

  __declspec(property(get = get_BaseType))::System::Type* BaseType;

  __declspec(property(get = get_FullName))::StringW FullName;

  __declspec(property(get = get_GUID))::System::Guid GUID;

  __declspec(property(get = get_Module))::System::Reflection::Module* Module;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_Namespace))::StringW Namespace;

  __declspec(property(get = get_UnderlyingSystemType))::System::Type* UnderlyingSystemType;

  /// @brief Method get_Assembly addr 0x24fa794 size 0x40 virtual true final false
  inline ::System::Reflection::Assembly* get_Assembly();

  /// @brief Method get_AssemblyQualifiedName addr 0x24fa7d4 size 0x40 virtual true final false
  inline ::StringW get_AssemblyQualifiedName();

  /// @brief Method get_BaseType addr 0x24fa814 size 0x40 virtual true final false
  inline ::System::Type* get_BaseType();

  /// @brief Method get_FullName addr 0x24fa854 size 0x40 virtual true final false
  inline ::StringW get_FullName();

  /// @brief Method get_GUID addr 0x24fa894 size 0x40 virtual true final false
  inline ::System::Guid get_GUID();

  /// @brief Method get_Module addr 0x24fa8d4 size 0x40 virtual true final false
  inline ::System::Reflection::Module* get_Module();

  /// @brief Method get_Name addr 0x24fa914 size 0x40 virtual true final false
  inline ::StringW get_Name();

  /// @brief Method get_Namespace addr 0x24fa954 size 0x40 virtual true final false
  inline ::StringW get_Namespace();

  /// @brief Method get_UnderlyingSystemType addr 0x24fa994 size 0x40 virtual true final false
  inline ::System::Type* get_UnderlyingSystemType();

  /// @brief Method GetAttributeFlagsImpl addr 0x24fa9d4 size 0x40 virtual true final false
  inline ::System::Reflection::TypeAttributes GetAttributeFlagsImpl();

  /// @brief Method GetConstructorImpl addr 0x24faa14 size 0x40 virtual true final false
  inline ::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                   ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                   ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetConstructors addr 0x24faa54 size 0x40 virtual true final false
  inline ::ArrayW<::System::Reflection::ConstructorInfo*, ::Array<::System::Reflection::ConstructorInfo*>*> GetConstructors(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetCustomAttributes addr 0x24faa94 size 0x40 virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetCustomAttributes addr 0x24faad4 size 0x40 virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetElementType addr 0x24fab14 size 0x40 virtual true final false
  inline ::System::Type* GetElementType();

  /// @brief Method GetEvent addr 0x24fab54 size 0x40 virtual true final false
  inline ::System::Reflection::EventInfo* GetEvent(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetEvents addr 0x24fab94 size 0x40 virtual true final false
  inline ::ArrayW<::System::Reflection::EventInfo*, ::Array<::System::Reflection::EventInfo*>*> GetEvents(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetField addr 0x24fabd4 size 0x40 virtual true final false
  inline ::System::Reflection::FieldInfo* GetField(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetFields addr 0x24fac14 size 0x40 virtual true final false
  inline ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> GetFields(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetInterfaces addr 0x24fac54 size 0x40 virtual true final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetInterfaces();

  /// @brief Method GetMethodImpl addr 0x24fac94 size 0x40 virtual true final false
  inline ::System::Reflection::MethodInfo* GetMethodImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                         ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                         ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetMethods addr 0x24facd4 size 0x40 virtual true final false
  inline ::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> GetMethods(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetNestedType addr 0x24fad14 size 0x40 virtual true final false
  inline ::System::Type* GetNestedType(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetProperties addr 0x24fad54 size 0x40 virtual true final false
  inline ::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> GetProperties(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetPropertyImpl addr 0x24fad94 size 0x40 virtual true final false
  inline ::System::Reflection::PropertyInfo* GetPropertyImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType,
                                                             ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                             ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method HasElementTypeImpl addr 0x24fadd4 size 0x40 virtual true final false
  inline bool HasElementTypeImpl();

  /// @brief Method InvokeMember addr 0x24fae14 size 0x40 virtual true final false
  inline ::System::Object* InvokeMember(::StringW name, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Object* target,
                                        ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args,
                                        ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers, ::System::Globalization::CultureInfo* culture,
                                        ::ArrayW<::StringW, ::Array<::StringW>*> namedParameters);

  /// @brief Method IsArrayImpl addr 0x24fae54 size 0x40 virtual true final false
  inline bool IsArrayImpl();

  /// @brief Method IsByRefImpl addr 0x24fae94 size 0x40 virtual true final false
  inline bool IsByRefImpl();

  /// @brief Method IsCOMObjectImpl addr 0x24faed4 size 0x40 virtual true final false
  inline bool IsCOMObjectImpl();

  /// @brief Method IsDefined addr 0x24faf14 size 0x40 virtual true final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method IsPointerImpl addr 0x24faf54 size 0x40 virtual true final false
  inline bool IsPointerImpl();

  /// @brief Method IsPrimitiveImpl addr 0x24faf94 size 0x40 virtual true final false
  inline bool IsPrimitiveImpl();

  // Ctor Parameters [CppParam { name: "", ty: "GenericTypeParameterBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericTypeParameterBuilder(GenericTypeParameterBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericTypeParameterBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericTypeParameterBuilder(GenericTypeParameterBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericTypeParameterBuilder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Emit::GenericTypeParameterBuilder, 0x18>, "Size mismatch!");

} // namespace System::Reflection::Emit
NEED_NO_BOX(::System::Reflection::Emit::GenericTypeParameterBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::GenericTypeParameterBuilder*, "System.Reflection.Emit", "GenericTypeParameterBuilder");
