#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeMethodInfo)
namespace System::Globalization {
class CultureInfo;
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
class CustomAttributeData;
}
namespace System::Reflection {
struct MethodAttributes;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
struct MethodImplAttributes;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
struct PInvokeAttributes;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class RuntimeModule;
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
class Delegate;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
struct RuntimeMethodHandle;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System {
class RuntimeType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeMethodInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::RuntimeMethodInfo);
// Type: System.Reflection::RuntimeMethodInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::RuntimeMethodInfo*
class CORDL_TYPE RuntimeMethodInfo : public ::System::Reflection::MethodInfo {
public:
  // Declarations
  __declspec(property(get = get_Attributes))::System::Reflection::MethodAttributes Attributes;

  __declspec(property(get = get_BindingFlags))::System::Reflection::BindingFlags BindingFlags;

  __declspec(property(get = get_CallingConvention))::System::Reflection::CallingConventions CallingConvention;

  __declspec(property(get = get_ContainsGenericParameters)) bool ContainsGenericParameters;

  __declspec(property(get = get_DeclaringType))::System::Type* DeclaringType;

  __declspec(property(get = get_IsGenericMethod)) bool IsGenericMethod;

  __declspec(property(get = get_IsGenericMethodDefinition)) bool IsGenericMethodDefinition;

  __declspec(property(get = get_IsSecurityCritical)) bool IsSecurityCritical;

  __declspec(property(get = get_MetadataToken)) int32_t MetadataToken;

  __declspec(property(get = get_MethodHandle))::System::RuntimeMethodHandle MethodHandle;

  __declspec(property(get = get_Module))::System::Reflection::Module* Module;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_ReflectedType))::System::Type* ReflectedType;

  __declspec(property(get = get_ReflectedTypeInternal))::System::RuntimeType* ReflectedTypeInternal;

  __declspec(property(get = get_ReturnParameter))::System::Reflection::ParameterInfo* ReturnParameter;

  __declspec(property(get = get_ReturnType))::System::Type* ReturnType;

  /// @brief Field mhandle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mhandle, put = __cordl_internal_set_mhandle)) void* mhandle;

  /// @brief Field name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field reftype, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_reftype, put = __cordl_internal_set_reftype))::System::Type* reftype;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method ConvertValues, addr 0x27751a8, size 0x2bc, virtual false, abstract: false, final false
  static inline void ConvertValues(::System::Reflection::Binder* binder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args,
                                   ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> pinfo, ::System::Globalization::CultureInfo* culture,
                                   ::System::Reflection::BindingFlags invokeAttr);

  /// @brief Method CreateDelegate, addr 0x2774a80, size 0x14, virtual true, abstract: false, final false
  inline ::System::Delegate* CreateDelegate(::System::Type* delegateType);

  /// @brief Method CreateDelegate, addr 0x2774a94, size 0x18, virtual true, abstract: false, final false
  inline ::System::Delegate* CreateDelegate(::System::Type* delegateType, ::System::Object* target);

  /// @brief Method FormatNameAndSig, addr 0x277472c, size 0x160, virtual true, abstract: false, final false
  inline ::StringW FormatNameAndSig(bool serialization);

  /// @brief Method GetBaseDefinition, addr 0x2774d80, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetBaseDefinition();

  /// @brief Method GetBaseMethod, addr 0x2774d88, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetBaseMethod();

  /// @brief Method GetCustomAttributes, addr 0x27755c0, size 0x70, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x2775558, size 0x68, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetDllImportAttributeData, addr 0x2775970, size 0x744, virtual false, abstract: false, final false
  inline ::System::Reflection::CustomAttributeData* GetDllImportAttributeData();

  /// @brief Method GetGenericArguments, addr 0x2776418, size 0x4, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericArguments();

  /// @brief Method GetGenericMethodDefinition, addr 0x2776420, size 0x64, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetGenericMethodDefinition();

  /// @brief Method GetGenericMethodDefinition_impl, addr 0x277641c, size 0x4, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetGenericMethodDefinition_impl();

  /// @brief Method GetMethodFromHandleInternalType, addr 0x2774d60, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* GetMethodFromHandleInternalType(void* method_handle, void* type_handle);

  /// @brief Method GetMethodFromHandleInternalType_native, addr 0x2774d50, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* GetMethodFromHandleInternalType_native(void* method_handle, void* type_handle, bool genericCheck);

  /// @brief Method GetMethodFromHandleNoGenericCheck, addr 0x2774cfc, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* GetMethodFromHandleNoGenericCheck(::System::RuntimeMethodHandle handle);

  /// @brief Method GetMethodFromHandleNoGenericCheck, addr 0x2774d58, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* GetMethodFromHandleNoGenericCheck(::System::RuntimeMethodHandle handle, ::System::RuntimeTypeHandle reflectedType);

  /// @brief Method GetMethodImplementationFlags, addr 0x2774dc4, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags();

  /// @brief Method GetObjectData, addr 0x2774b3c, size 0x124, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetPInvoke, addr 0x2775630, size 0x4, virtual false, abstract: false, final false
  inline void GetPInvoke(ByRef<::System::Reflection::PInvokeAttributes> flags, ByRef<::StringW> entryPoint, ByRef<::StringW> dllName);

  /// @brief Method GetParameters, addr 0x2774df0, size 0x90, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParameters();

  /// @brief Method GetParametersCount, addr 0x2774e8c, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetParametersCount();

  /// @brief Method GetParametersInternal, addr 0x2774e80, size 0xc, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParametersInternal();

  /// @brief Method GetPseudoCustomAttributes, addr 0x2775634, size 0x16c, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetPseudoCustomAttributes();

  /// @brief Method GetPseudoCustomAttributesData, addr 0x27757a0, size 0x1d0, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*> GetPseudoCustomAttributesData();

  /// @brief Method GetRuntimeModule, addr 0x277461c, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeModule* GetRuntimeModule();

  /// @brief Method InternalInvoke, addr 0x2774eb0, size 0x4, virtual false, abstract: false, final false
  inline ::System::Object* InternalInvoke(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, ByRef<::System::Exception*> exc);

  /// @brief Method Invoke, addr 0x2774eb4, size 0x2f4, virtual true, abstract: false, final false
  inline ::System::Object* Invoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, ::System::Globalization::CultureInfo* culture);

  /// @brief Method IsDefined, addr 0x27754e8, size 0x70, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method MakeGenericMethod, addr 0x27760b4, size 0x360, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* MakeGenericMethod(::ArrayW<::System::Type*, ::Array<::System::Type*>*> methodInstantiation);

  /// @brief Method MakeGenericMethod_impl, addr 0x2776414, size 0x4, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* MakeGenericMethod_impl(::ArrayW<::System::Type*, ::Array<::System::Type*>*> types);

  static inline ::System::Reflection::RuntimeMethodInfo* New_ctor();

  /// @brief Method SerializationToString, addr 0x2774c60, size 0x9c, virtual false, abstract: false, final false
  inline ::StringW SerializationToString();

  /// @brief Method ToString, addr 0x2774aac, size 0x90, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr void* const& __cordl_internal_get_mhandle() const;

  constexpr void*& __cordl_internal_get_mhandle();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::System::Type*& __cordl_internal_get_reftype();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_reftype() const;

  constexpr void __cordl_internal_set_mhandle(void* value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_reftype(::System::Type* value);

  /// @brief Method .ctor, addr 0x2774d68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Attributes, addr 0x277546c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodAttributes get_Attributes();

  /// @brief Method get_BindingFlags, addr 0x2774610, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::BindingFlags get_BindingFlags();

  /// @brief Method get_CallingConvention, addr 0x2775474, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Reflection::CallingConventions get_CallingConvention();

  /// @brief Method get_ContainsGenericParameters, addr 0x277648c, size 0xc8, virtual true, abstract: false, final false
  inline bool get_ContainsGenericParameters();

  /// @brief Method get_DeclaringType, addr 0x27754a8, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_IsGenericMethod, addr 0x2776488, size 0x4, virtual true, abstract: false, final false
  inline bool get_IsGenericMethod();

  /// @brief Method get_IsGenericMethodDefinition, addr 0x2776484, size 0x4, virtual true, abstract: false, final false
  inline bool get_IsGenericMethodDefinition();

  /// @brief Method get_IsSecurityCritical, addr 0x277655c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSecurityCritical();

  /// @brief Method get_MetadataToken, addr 0x2774dc0, size 0x4, virtual true, abstract: false, final false
  inline int32_t get_MetadataToken();

  /// @brief Method get_MethodHandle, addr 0x2775464, size 0x8, virtual true, abstract: false, final false
  inline ::System::RuntimeMethodHandle get_MethodHandle();

  /// @brief Method get_Module, addr 0x2774618, size 0x4, virtual true, abstract: false, final false
  inline ::System::Reflection::Module* get_Module();

  /// @brief Method get_Name, addr 0x27754d4, size 0x14, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ReflectedType, addr 0x27754a0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* get_ReflectedType();

  /// @brief Method get_ReflectedTypeInternal, addr 0x27746a8, size 0x84, virtual false, abstract: false, final false
  inline ::System::RuntimeType* get_ReflectedTypeInternal();

  /// @brief Method get_ReturnParameter, addr 0x2774d90, size 0x4, virtual true, abstract: false, final false
  inline ::System::Reflection::ParameterInfo* get_ReturnParameter();

  /// @brief Method get_ReturnType, addr 0x2774d94, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Type* get_ReturnType();

  /// @brief Method get_base_method, addr 0x2774d74, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Reflection::RuntimeMethodInfo* get_base_method(::System::Reflection::RuntimeMethodInfo* method, bool definition);

  /// @brief Method get_core_clr_security_level, addr 0x2776554, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_core_clr_security_level();

  /// @brief Method get_metadata_token, addr 0x2774d7c, size 0x4, virtual false, abstract: false, final false
  static inline int32_t get_metadata_token(::System::Reflection::RuntimeMethodInfo* method);

  /// @brief Method get_name, addr 0x2774d70, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_name(::System::Reflection::MethodBase* method);

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeMethodInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeMethodInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeMethodInfo(RuntimeMethodInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeMethodInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeMethodInfo(RuntimeMethodInfo const&) = delete;

  /// @brief Field mhandle, offset: 0x10, size: 0x8, def value: None
  void* ___mhandle;

  /// @brief Field name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field reftype, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___reftype;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::RuntimeMethodInfo, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeMethodInfo, ___mhandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeMethodInfo, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeMethodInfo, ___reftype) == 0x20, "Offset mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::RuntimeMethodInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimeMethodInfo*, "System.Reflection", "RuntimeMethodInfo");
