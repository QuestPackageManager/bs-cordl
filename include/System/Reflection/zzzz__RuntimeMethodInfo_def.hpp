#pragma once
// IWYU pragma private; include "System/Reflection/RuntimeMethodInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
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
struct IntPtr;
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
// Dependencies System.IntPtr, System.Reflection.MethodInfo, System.Runtime.Serialization.ISerializable
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.RuntimeMethodInfo
class CORDL_TYPE RuntimeMethodInfo : public ::System::Reflection::MethodInfo {
public:
  // Declarations
  __declspec(property(get = get_Attributes)) ::System::Reflection::MethodAttributes Attributes;

  __declspec(property(get = get_BindingFlags)) ::System::Reflection::BindingFlags BindingFlags;

  __declspec(property(get = get_CallingConvention)) ::System::Reflection::CallingConventions CallingConvention;

  __declspec(property(get = get_ContainsGenericParameters)) bool ContainsGenericParameters;

  __declspec(property(get = get_DeclaringType)) ::System::Type* DeclaringType;

  __declspec(property(get = get_IsGenericMethod)) bool IsGenericMethod;

  __declspec(property(get = get_IsGenericMethodDefinition)) bool IsGenericMethodDefinition;

  __declspec(property(get = get_IsSecurityCritical)) bool IsSecurityCritical;

  __declspec(property(get = get_MetadataToken)) int32_t MetadataToken;

  __declspec(property(get = get_MethodHandle)) ::System::RuntimeMethodHandle MethodHandle;

  __declspec(property(get = get_Module)) ::System::Reflection::Module* Module;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ReflectedType)) ::System::Type* ReflectedType;

  __declspec(property(get = get_ReflectedTypeInternal)) ::System::RuntimeType* ReflectedTypeInternal;

  __declspec(property(get = get_ReturnParameter)) ::System::Reflection::ParameterInfo* ReturnParameter;

  __declspec(property(get = get_ReturnType)) ::System::Type* ReturnType;

  /// @brief Field mhandle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mhandle, put = __cordl_internal_set_mhandle)) ::System::IntPtr mhandle;

  /// @brief Field name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field reftype, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_reftype, put = __cordl_internal_set_reftype)) ::System::Type* reftype;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method ConvertValues, addr 0x3d2f6d8, size 0x2b4, virtual false, abstract: false, final false
  static inline void ConvertValues(::System::Reflection::Binder* binder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args,
                                   ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> pinfo, ::System::Globalization::CultureInfo* culture,
                                   ::System::Reflection::BindingFlags invokeAttr);

  /// @brief Method CreateDelegate, addr 0x3d2f00c, size 0x14, virtual true, abstract: false, final false
  inline ::System::Delegate* CreateDelegate(::System::Type* delegateType);

  /// @brief Method CreateDelegate, addr 0x3d2f020, size 0x18, virtual true, abstract: false, final false
  inline ::System::Delegate* CreateDelegate(::System::Type* delegateType, ::System::Object* target);

  /// @brief Method FormatNameAndSig, addr 0x3d2ecb8, size 0x160, virtual true, abstract: false, final false
  inline ::StringW FormatNameAndSig(bool serialization);

  /// @brief Method GetBaseDefinition, addr 0x3d2f2c0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetBaseDefinition();

  /// @brief Method GetBaseMethod, addr 0x3d2f2c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetBaseMethod();

  /// @brief Method GetCustomAttributes, addr 0x3d2fae8, size 0x70, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x3d2fa80, size 0x68, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetDllImportAttributeData, addr 0x3d2fea0, size 0x73c, virtual false, abstract: false, final false
  inline ::System::Reflection::CustomAttributeData* GetDllImportAttributeData();

  /// @brief Method GetGenericArguments, addr 0x3d30920, size 0x4, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericArguments();

  /// @brief Method GetGenericMethodDefinition, addr 0x3d30928, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetGenericMethodDefinition();

  /// @brief Method GetGenericMethodDefinition_impl, addr 0x3d30924, size 0x4, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetGenericMethodDefinition_impl();

  /// @brief Method GetMethodFromHandleInternalType, addr 0x3d2f2a0, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* GetMethodFromHandleInternalType(::System::IntPtr method_handle, ::System::IntPtr type_handle);

  /// @brief Method GetMethodFromHandleInternalType_native, addr 0x3d2f290, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* GetMethodFromHandleInternalType_native(::System::IntPtr method_handle, ::System::IntPtr type_handle, bool genericCheck);

  /// @brief Method GetMethodFromHandleNoGenericCheck, addr 0x3d2f284, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* GetMethodFromHandleNoGenericCheck(::System::RuntimeMethodHandle handle);

  /// @brief Method GetMethodFromHandleNoGenericCheck, addr 0x3d2f298, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* GetMethodFromHandleNoGenericCheck(::System::RuntimeMethodHandle handle, ::System::RuntimeTypeHandle reflectedType);

  /// @brief Method GetMethodImplementationFlags, addr 0x3d2f304, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags();

  /// @brief Method GetObjectData, addr 0x3d2f0c8, size 0x120, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetPInvoke, addr 0x3d2fb58, size 0x4, virtual false, abstract: false, final false
  inline void GetPInvoke(::ByRef<::System::Reflection::PInvokeAttributes> flags, ::ByRef<::StringW> entryPoint, ::ByRef<::StringW> dllName);

  /// @brief Method GetParameters, addr 0x3d2f330, size 0x90, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParameters();

  /// @brief Method GetParametersCount, addr 0x3d2f3cc, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetParametersCount();

  /// @brief Method GetParametersInternal, addr 0x3d2f3c0, size 0xc, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParametersInternal();

  /// @brief Method GetPseudoCustomAttributes, addr 0x3d2fb5c, size 0x170, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetPseudoCustomAttributes();

  /// @brief Method GetPseudoCustomAttributesData, addr 0x3d2fccc, size 0x1d4, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*> GetPseudoCustomAttributesData();

  /// @brief Method GetRuntimeModule, addr 0x3d2eba8, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeModule* GetRuntimeModule();

  /// @brief Method InternalInvoke, addr 0x3d2f3f0, size 0x4, virtual false, abstract: false, final false
  inline ::System::Object* InternalInvoke(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, ::ByRef<::System::Exception*> exc);

  /// @brief Method Invoke, addr 0x3d2f3f4, size 0x2e4, virtual true, abstract: false, final false
  inline ::System::Object* Invoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, ::System::Globalization::CultureInfo* culture);

  /// @brief Method IsDefined, addr 0x3d2fa10, size 0x70, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method MakeGenericMethod, addr 0x3d305dc, size 0x340, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* MakeGenericMethod(::ArrayW<::System::Type*, ::Array<::System::Type*>*> methodInstantiation);

  /// @brief Method MakeGenericMethod_impl, addr 0x3d3091c, size 0x4, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* MakeGenericMethod_impl(::ArrayW<::System::Type*, ::Array<::System::Type*>*> types);

  static inline ::System::Reflection::RuntimeMethodInfo* New_ctor();

  /// @brief Method SerializationToString, addr 0x3d2f1e8, size 0x9c, virtual false, abstract: false, final false
  inline ::StringW SerializationToString();

  /// @brief Method ToString, addr 0x3d2f038, size 0x90, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::IntPtr const& __cordl_internal_get_mhandle() const;

  constexpr ::System::IntPtr& __cordl_internal_get_mhandle();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::System::Type* const& __cordl_internal_get_reftype() const;

  constexpr ::System::Type*& __cordl_internal_get_reftype();

  constexpr void __cordl_internal_set_mhandle(::System::IntPtr value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_reftype(::System::Type* value);

  /// @brief Method .ctor, addr 0x3d2f2a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Attributes, addr 0x3d2f994, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodAttributes get_Attributes();

  /// @brief Method get_BindingFlags, addr 0x3d2eb9c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::BindingFlags get_BindingFlags();

  /// @brief Method get_CallingConvention, addr 0x3d2f99c, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Reflection::CallingConventions get_CallingConvention();

  /// @brief Method get_ContainsGenericParameters, addr 0x3d3098c, size 0xc8, virtual true, abstract: false, final false
  inline bool get_ContainsGenericParameters();

  /// @brief Method get_DeclaringType, addr 0x3d2f9d0, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_IsGenericMethod, addr 0x3d30988, size 0x4, virtual true, abstract: false, final false
  inline bool get_IsGenericMethod();

  /// @brief Method get_IsGenericMethodDefinition, addr 0x3d30984, size 0x4, virtual true, abstract: false, final false
  inline bool get_IsGenericMethodDefinition();

  /// @brief Method get_IsSecurityCritical, addr 0x3d30a5c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSecurityCritical();

  /// @brief Method get_MetadataToken, addr 0x3d2f300, size 0x4, virtual true, abstract: false, final false
  inline int32_t get_MetadataToken();

  /// @brief Method get_MethodHandle, addr 0x3d2f98c, size 0x8, virtual true, abstract: false, final false
  inline ::System::RuntimeMethodHandle get_MethodHandle();

  /// @brief Method get_Module, addr 0x3d2eba4, size 0x4, virtual true, abstract: false, final false
  inline ::System::Reflection::Module* get_Module();

  /// @brief Method get_Name, addr 0x3d2f9fc, size 0x14, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ReflectedType, addr 0x3d2f9c8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* get_ReflectedType();

  /// @brief Method get_ReflectedTypeInternal, addr 0x3d2ec34, size 0x84, virtual false, abstract: false, final false
  inline ::System::RuntimeType* get_ReflectedTypeInternal();

  /// @brief Method get_ReturnParameter, addr 0x3d2f2d0, size 0x4, virtual true, abstract: false, final false
  inline ::System::Reflection::ParameterInfo* get_ReturnParameter();

  /// @brief Method get_ReturnType, addr 0x3d2f2d4, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Type* get_ReturnType();

  /// @brief Method get_base_method, addr 0x3d2f2b4, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Reflection::RuntimeMethodInfo* get_base_method(::System::Reflection::RuntimeMethodInfo* method, bool definition);

  /// @brief Method get_core_clr_security_level, addr 0x3d30a54, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_core_clr_security_level();

  /// @brief Method get_metadata_token, addr 0x3d2f2bc, size 0x4, virtual false, abstract: false, final false
  static inline int32_t get_metadata_token(::System::Reflection::RuntimeMethodInfo* method);

  /// @brief Method get_name, addr 0x3d2f2b0, size 0x4, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3526 };

  /// @brief Field mhandle, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___mhandle;

  /// @brief Field name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field reftype, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___reftype;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::RuntimeMethodInfo, ___mhandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeMethodInfo, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeMethodInfo, ___reftype) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::RuntimeMethodInfo, 0x28>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::RuntimeMethodInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimeMethodInfo*, "System.Reflection", "RuntimeMethodInfo");
