#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Assembly)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::InteropServices {
class _Assembly;
}
namespace System::Security::Policy {
class Evidence;
}
namespace System::Reflection {
class ICustomAttributeProvider;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Exception;
}
namespace System::Reflection {
class __Assembly__ResolveEventHolder;
}
namespace System::Reflection {
class AssemblyName;
}
// Forward declare root types
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class __Assembly__ResolveEventHolder;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Assembly);
MARK_REF_PTR_T(::System::Reflection::__Assembly__ResolveEventHolder);
// Type: ::ResolveEventHolder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3505))
// CS Name: ::Assembly::ResolveEventHolder*
class CORDL_TYPE __Assembly__ResolveEventHolder : public ::System::Object {
public:
  // Declarations
  static inline ::System::Reflection::__Assembly__ResolveEventHolder* New_ctor();

  /// @brief Method .ctor addr 0x239598c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Assembly__ResolveEventHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Assembly__ResolveEventHolder(__Assembly__ResolveEventHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Assembly__ResolveEventHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Assembly__ResolveEventHolder(__Assembly__ResolveEventHolder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Assembly__ResolveEventHolder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::__Assembly__ResolveEventHolder, 0x10>, "Size mismatch!");

} // namespace System::Reflection
// Type: System.Reflection::Assembly
// SizeInfo { instance_size: 16, native_size: 1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3506))
// CS Name: ::System.Reflection::Assembly*
class CORDL_TYPE Assembly : public ::System::Object {
public:
  // Declarations
  using ResolveEventHolder = ::System::Reflection::__Assembly__ResolveEventHolder;

  __declspec(property(get = get_CodeBase))::StringW CodeBase;

  __declspec(property(get = get_FullName))::StringW FullName;

  __declspec(property(get = get_MonoAssembly)) void* MonoAssembly;

  __declspec(property(get = get_IsFullyTrusted)) bool IsFullyTrusted;

  /// @brief Convert operator to "::System::Reflection::ICustomAttributeProvider"
  constexpr operator ::System::Reflection::ICustomAttributeProvider*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::InteropServices::_Assembly"
  constexpr operator ::System::Runtime::InteropServices::_Assembly*() noexcept;

  /// @brief Method get_CodeBase addr 0x239539c size 0x40 virtual true final false
  inline ::StringW get_CodeBase();

  /// @brief Method get_FullName addr 0x23953dc size 0x40 virtual true final false
  inline ::StringW get_FullName();

  /// @brief Method get_MonoAssembly addr 0x239541c size 0x40 virtual true final false
  inline void* get_MonoAssembly();

  /// @brief Method GetObjectData addr 0x239545c size 0x40 virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method IsDefined addr 0x239549c size 0x40 virtual true final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes addr 0x23954dc size 0x40 virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetCustomAttributes addr 0x239551c size 0x40 virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetTypes addr 0x239555c size 0x8 virtual true final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetTypes(bool exportedOnly);

  /// @brief Method GetTypes addr 0x2395564 size 0x14 virtual true final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetTypes();

  /// @brief Method GetType addr 0x2395578 size 0x18 virtual true final false
  inline ::System::Type* GetType(::StringW name);

  /// @brief Method InternalGetType addr 0x2395590 size 0xc virtual false final false
  inline ::System::Type* InternalGetType(::System::Reflection::Module* module, ::StringW name, bool throwOnError, bool ignoreCase);

  /// @brief Method GetName addr 0x239559c size 0x40 virtual true final false
  inline ::System::Reflection::AssemblyName* GetName(bool copiedName);

  /// @brief Method GetName addr 0x23955dc size 0x14 virtual true final false
  inline ::System::Reflection::AssemblyName* GetName();

  /// @brief Method ToString addr 0x23955f0 size 0x8 virtual true final false
  inline ::StringW ToString();

  /// @brief Method GetAssembly addr 0x23955f8 size 0xc8 virtual false final false
  static inline ::System::Reflection::Assembly* GetAssembly(::System::Type* type);

  /// @brief Method Load addr 0x23956c0 size 0x28 virtual false final false
  static inline ::System::Reflection::Assembly* Load(::StringW assemblyString);

  /// @brief Method ReflectionOnlyLoad addr 0x23956e8 size 0x48 virtual false final false
  static inline ::System::Reflection::Assembly* ReflectionOnlyLoad(::StringW assemblyString);

  /// @brief Method load_with_partial_name addr 0x2395730 size 0x4 virtual false final false
  static inline ::System::Reflection::Assembly* load_with_partial_name(::StringW name, ::System::Security::Policy::Evidence* e);

  /// @brief Method LoadWithPartialName addr 0x2395734 size 0x8 virtual false final false
  static inline ::System::Reflection::Assembly* LoadWithPartialName(::StringW partialName, ::System::Security::Policy::Evidence* securityEvidence);

  /// @brief Method LoadWithPartialName addr 0x239573c size 0x78 virtual false final false
  static inline ::System::Reflection::Assembly* LoadWithPartialName(::StringW partialName, ::System::Security::Policy::Evidence* securityEvidence, bool oldBehavior);

  /// @brief Method GetModulesInternal addr 0x23957b4 size 0x40 virtual true final false
  inline ::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*> GetModulesInternal();

  /// @brief Method GetExecutingAssembly addr 0x23957f4 size 0x40 virtual false final false
  static inline ::System::Reflection::Assembly* GetExecutingAssembly();

  /// @brief Method GetCallingAssembly addr 0x2386f80 size 0x4 virtual false final false
  static inline ::System::Reflection::Assembly* GetCallingAssembly();

  /// @brief Method GetHashCode addr 0x2395834 size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x239583c size 0x8 virtual true final false
  inline bool Equals(::System::Object* o);

  /// @brief Method CreateNIE addr 0x2395844 size 0x74 virtual false final false
  static inline ::System::Exception* CreateNIE();

  /// @brief Method get_IsFullyTrusted addr 0x23958b8 size 0x8 virtual false final false
  inline bool get_IsFullyTrusted();

  /// @brief Method GetType addr 0x23958c0 size 0x24 virtual true final false
  inline ::System::Type* GetType(::StringW name, bool throwOnError, bool ignoreCase);

  /// @brief Method GetModule addr 0x23958e4 size 0x24 virtual true final false
  inline ::System::Reflection::Module* GetModule(::StringW name);

  /// @brief Method GetModules addr 0x2395908 size 0x24 virtual true final false
  inline ::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*> GetModules(bool getResourceModules);

  /// @brief Method op_Equality addr 0x2386e18 size 0x50 virtual false final false
  static inline bool op_Equality(::System::Reflection::Assembly* left, ::System::Reflection::Assembly* right);

  /// @brief Method op_Inequality addr 0x239592c size 0x58 virtual false final false
  static inline bool op_Inequality(::System::Reflection::Assembly* left, ::System::Reflection::Assembly* right);

  static inline ::System::Reflection::Assembly* New_ctor();

  /// @brief Method .ctor addr 0x2395984 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Assembly", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Assembly(Assembly&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Assembly", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Assembly(Assembly const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Assembly();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Assembly, 0x10>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::Assembly);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Assembly*, "System.Reflection", "Assembly");
NEED_NO_BOX(::System::Reflection::__Assembly__ResolveEventHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::__Assembly__ResolveEventHolder*, "System.Reflection", "Assembly/ResolveEventHolder");
