#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeConstructorInfo)
namespace System::Reflection {
struct MethodImplAttributes;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Reflection {
class Binder;
}
namespace System {
class Type;
}
namespace System::Reflection {
class RuntimeModule;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
struct MethodAttributes;
}
namespace System::Reflection {
class Module;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class RuntimeType;
}
namespace System {
struct RuntimeMethodHandle;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeConstructorInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::RuntimeConstructorInfo);
// Type: System.Reflection::RuntimeConstructorInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3461)), TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3524))
// CS Name: ::System.Reflection::RuntimeConstructorInfo*
class CORDL_TYPE RuntimeConstructorInfo : public ::System::Reflection::ConstructorInfo {
public:
  // Declarations
  /// @brief Field mhandle, offset 0x10, size 0x8
  __declspec(property(get = __get_mhandle, put = __set_mhandle)) void* mhandle;

  /// @brief Field name, offset 0x18, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  /// @brief Field reftype, offset 0x20, size 0x8
  __declspec(property(get = __get_reftype, put = __set_reftype))::System::Type* reftype;

  __declspec(property(get = get_Module))::System::Reflection::Module* Module;

  __declspec(property(get = get_BindingFlags))::System::Reflection::BindingFlags BindingFlags;

  __declspec(property(get = get_ReflectedTypeInternal))::System::RuntimeType* ReflectedTypeInternal;

  __declspec(property(get = get_MethodHandle))::System::RuntimeMethodHandle MethodHandle;

  __declspec(property(get = get_Attributes))::System::Reflection::MethodAttributes Attributes;

  __declspec(property(get = get_CallingConvention))::System::Reflection::CallingConventions CallingConvention;

  __declspec(property(get = get_ContainsGenericParameters)) bool ContainsGenericParameters;

  __declspec(property(get = get_ReflectedType))::System::Type* ReflectedType;

  __declspec(property(get = get_DeclaringType))::System::Type* DeclaringType;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_IsSecurityCritical)) bool IsSecurityCritical;

  __declspec(property(get = get_MetadataToken)) int32_t MetadataToken;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  constexpr void*& __get_mhandle();

  constexpr void* const& __get_mhandle() const;

  constexpr void __set_mhandle(void* value);

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  constexpr ::System::Type*& __get_reftype();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_reftype() const;

  constexpr void __set_reftype(::System::Type* value);

  /// @brief Method get_Module addr 0x24f56b0 size 0x4 virtual true final false
  inline ::System::Reflection::Module* get_Module();

  /// @brief Method GetRuntimeModule addr 0x24f56b4 size 0x88 virtual false final false
  inline ::System::Reflection::RuntimeModule* GetRuntimeModule();

  /// @brief Method get_BindingFlags addr 0x24f573c size 0x8 virtual false final false
  inline ::System::Reflection::BindingFlags get_BindingFlags();

  /// @brief Method get_ReflectedTypeInternal addr 0x24f5744 size 0x84 virtual false final false
  inline ::System::RuntimeType* get_ReflectedTypeInternal();

  /// @brief Method GetObjectData addr 0x24f57c8 size 0xd8 virtual true final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method SerializationToString addr 0x24eed9c size 0x14 virtual false final false
  inline ::StringW SerializationToString();

  /// @brief Method SerializationInvoke addr 0x24f58a0 size 0x12c virtual false final false
  inline void SerializationInvoke(::System::Object* target, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetMethodImplementationFlags addr 0x24f59cc size 0x2c virtual true final false
  inline ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags();

  /// @brief Method GetParameters addr 0x24f59f8 size 0xc virtual true final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParameters();

  /// @brief Method GetParametersInternal addr 0x24f5a04 size 0xc virtual true final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParametersInternal();

  /// @brief Method GetParametersCount addr 0x24f5a10 size 0x20 virtual true final false
  inline int32_t GetParametersCount();

  /// @brief Method InternalInvoke addr 0x24f5a30 size 0x4 virtual false final false
  inline ::System::Object* InternalInvoke(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, ByRef<::System::Exception*> exc);

  /// @brief Method Invoke addr 0x24f5a34 size 0x108 virtual true final false
  inline ::System::Object* Invoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, ::System::Globalization::CultureInfo* culture);

  /// @brief Method DoInvoke addr 0x24f5b3c size 0x1f4 virtual false final false
  inline ::System::Object* DoInvoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, ::System::Globalization::CultureInfo* culture);

  /// @brief Method InternalInvoke addr 0x24f5d30 size 0x15c virtual false final false
  inline ::System::Object* InternalInvoke(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, bool wrapExceptions);

  /// @brief Method Invoke addr 0x24f5e8c size 0x18 virtual true final false
  inline ::System::Object* Invoke(::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters,
                                  ::System::Globalization::CultureInfo* culture);

  /// @brief Method get_MethodHandle addr 0x24f5ea4 size 0x8 virtual true final false
  inline ::System::RuntimeMethodHandle get_MethodHandle();

  /// @brief Method get_Attributes addr 0x24f5eac size 0x8 virtual true final false
  inline ::System::Reflection::MethodAttributes get_Attributes();

  /// @brief Method get_CallingConvention addr 0x24f5eb4 size 0x2c virtual true final false
  inline ::System::Reflection::CallingConventions get_CallingConvention();

  /// @brief Method get_ContainsGenericParameters addr 0x24f5ee0 size 0x2c virtual true final false
  inline bool get_ContainsGenericParameters();

  /// @brief Method get_ReflectedType addr 0x24f5f0c size 0x8 virtual true final false
  inline ::System::Type* get_ReflectedType();

  /// @brief Method get_DeclaringType addr 0x24f5f14 size 0x2c virtual true final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_Name addr 0x24f5f40 size 0x14 virtual true final false
  inline ::StringW get_Name();

  /// @brief Method IsDefined addr 0x24f5f54 size 0x70 virtual true final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes addr 0x24f5fc4 size 0x68 virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetCustomAttributes addr 0x24f602c size 0x70 virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method ToString addr 0x24f609c size 0x68 virtual true final false
  inline ::StringW ToString();

  /// @brief Method get_core_clr_security_level addr 0x24f6104 size 0x8 virtual false final false
  static inline int32_t get_core_clr_security_level();

  /// @brief Method get_IsSecurityCritical addr 0x24f610c size 0x8 virtual true final false
  inline bool get_IsSecurityCritical();

  /// @brief Method get_MetadataToken addr 0x24f6114 size 0x4 virtual true final false
  inline int32_t get_MetadataToken();

  /// @brief Method get_metadata_token addr 0x24f6118 size 0x4 virtual false final false
  static inline int32_t get_metadata_token(::System::Reflection::RuntimeConstructorInfo* method);

  static inline ::System::Reflection::RuntimeConstructorInfo* New_ctor();

  /// @brief Method .ctor addr 0x24f611c size 0x1058 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeConstructorInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeConstructorInfo(RuntimeConstructorInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeConstructorInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeConstructorInfo(RuntimeConstructorInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeConstructorInfo();

public:
  /// @brief Field mhandle, offset: 0x10, size: 0x8, def value: None
  void* ___mhandle;

  /// @brief Field name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field reftype, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___reftype;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::RuntimeConstructorInfo, 0x28>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::RuntimeConstructorInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimeConstructorInfo*, "System.Reflection", "RuntimeConstructorInfo");
