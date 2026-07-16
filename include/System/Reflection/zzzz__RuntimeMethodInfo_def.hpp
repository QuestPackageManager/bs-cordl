#pragma once
// IWYU pragma private; include "System/Reflection/RuntimeMethodInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::System::Reflection::RuntimeMethodInfo*);
DEFINE_IL2CPP_CLASS(::System::Reflection::RuntimeMethodInfo*, "System.Reflection", "RuntimeMethodInfo");
// Dependencies System.IntPtr, System.Reflection.MethodInfo
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

  /// @brief Method ConvertValues, addr 0x5b8b818, size 0x2b8, virtual false, abstract: false, final false
  static inline void ConvertValues(::System::Reflection::Binder* binder, ::ArrayW<::System::Object*> args, ::ArrayW<::System::Reflection::ParameterInfo*> pinfo,
                                   ::System::Globalization::CultureInfo* culture, ::System::Reflection::BindingFlags invokeAttr);

  /// @brief Method CreateDelegate, addr 0x5b8b108, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Delegate* CreateDelegate(::System::Type* delegateType);

  /// @brief Method CreateDelegate, addr 0x5b8b124, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Delegate* CreateDelegate(::System::Type* delegateType, ::System::Object* target);

  /// @brief Method FormatNameAndSig, addr 0x5b8ad64, size 0x180, virtual true, abstract: false, final false
  inline ::StringW FormatNameAndSig(bool serialization);

  /// @brief Method GetBaseDefinition, addr 0x5b8b3fc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetBaseDefinition();

  /// @brief Method GetBaseMethod, addr 0x5b8b404, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetBaseMethod();

  /// @brief Method GetCustomAttributes, addr 0x5b8bc58, size 0x74, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x5b8bbec, size 0x6c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*> GetCustomAttributes(bool inherit);

  /// @brief Method GetDllImportAttributeData, addr 0x5b8c034, size 0x674, virtual false, abstract: false, final false
  inline ::System::Reflection::CustomAttributeData* GetDllImportAttributeData();

  /// @brief Method GetGenericArguments, addr 0x5b8c9a4, size 0x4, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*> GetGenericArguments();

  /// @brief Method GetGenericMethodDefinition, addr 0x5b8c9ac, size 0x48, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetGenericMethodDefinition();

  /// @brief Method GetGenericMethodDefinition_impl, addr 0x5b8c9a8, size 0x4, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetGenericMethodDefinition_impl();

  /// @brief Method GetMethodFromHandleInternalType, addr 0x5b8b3b4, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* GetMethodFromHandleInternalType(::System::IntPtr method_handle, ::System::IntPtr type_handle);

  /// @brief Method GetMethodFromHandleInternalType_native, addr 0x5b8b3a8, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* GetMethodFromHandleInternalType_native(::System::IntPtr method_handle, ::System::IntPtr type_handle, bool genericCheck);

  /// @brief Method GetMethodFromHandleNoGenericCheck, addr 0x5b8b3a0, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* GetMethodFromHandleNoGenericCheck(::System::RuntimeMethodHandle handle);

  /// @brief Method GetMethodFromHandleNoGenericCheck, addr 0x5b8b3ac, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodBase* GetMethodFromHandleNoGenericCheck(::System::RuntimeMethodHandle handle, ::System::RuntimeTypeHandle reflectedType);

  /// @brief Method GetMethodImplementationFlags, addr 0x5b8b450, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags();

  /// @brief Method GetObjectData, addr 0x5b8b1e0, size 0x120, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetPInvoke, addr 0x5b8bccc, size 0x18, virtual false, abstract: false, final false
  inline void GetPInvoke(::by_ref<::System::Reflection::PInvokeAttributes> flags, ::by_ref<::StringW> entryPoint, ::by_ref<::StringW> dllName);

  /// @brief Method GetParameters, addr 0x5b8b47c, size 0x94, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*> GetParameters();

  /// @brief Method GetParametersCount, addr 0x5b8b51c, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetParametersCount();

  /// @brief Method GetParametersInternal, addr 0x5b8b510, size 0xc, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*> GetParametersInternal();

  /// @brief Method GetPseudoCustomAttributes, addr 0x5b8bce4, size 0x174, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*> GetPseudoCustomAttributes();

  /// @brief Method GetPseudoCustomAttributesData, addr 0x5b8be58, size 0x1dc, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Reflection::CustomAttributeData*> GetPseudoCustomAttributesData();

  /// @brief Method GetRuntimeModule, addr 0x5b8ac40, size 0x9c, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeModule* GetRuntimeModule();

  /// @brief Method InternalInvoke, addr 0x5b8b540, size 0x4, virtual false, abstract: false, final false
  inline ::System::Object* InternalInvoke(::System::Object* obj, ::ArrayW<::System::Object*> parameters, ::by_ref<::System::Exception*> exc);

  /// @brief Method Invoke, addr 0x5b8b544, size 0x2d4, virtual true, abstract: false, final false
  inline ::System::Object* Invoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::ArrayW<::System::Object*> parameters,
                                  ::System::Globalization::CultureInfo* culture);

  /// @brief Method IsDefined, addr 0x5b8bb78, size 0x74, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method MakeGenericMethod, addr 0x5b8c6a8, size 0x2f8, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* MakeGenericMethod(::ArrayW<::System::Type*> methodInstantiation);

  /// @brief Method MakeGenericMethod_impl, addr 0x5b8c9a0, size 0x4, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* MakeGenericMethod_impl(::ArrayW<::System::Type*> types);

  static inline ::System::Reflection::RuntimeMethodInfo* New_ctor();

  /// @brief Method SerializationToString, addr 0x5b8b300, size 0xa0, virtual false, abstract: false, final false
  inline ::StringW SerializationToString();

  /// @brief Method ToString, addr 0x5b8b140, size 0xa0, virtual true, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x5b8b3bc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Attributes, addr 0x5b8bad8, size 0xc, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodAttributes get_Attributes();

  /// @brief Method get_BindingFlags, addr 0x5b8ac34, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::BindingFlags get_BindingFlags();

  /// @brief Method get_CallingConvention, addr 0x5b8bae4, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Reflection::CallingConventions get_CallingConvention();

  /// @brief Method get_ContainsGenericParameters, addr 0x5b8ca38, size 0xc8, virtual true, abstract: false, final false
  inline bool get_ContainsGenericParameters();

  /// @brief Method get_DeclaringType, addr 0x5b8bb18, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_IsGenericMethod, addr 0x5b8ca04, size 0x34, virtual true, abstract: false, final false
  inline bool get_IsGenericMethod();

  /// @brief Method get_IsGenericMethodDefinition, addr 0x5b8c9f4, size 0x10, virtual true, abstract: false, final false
  inline bool get_IsGenericMethodDefinition();

  /// @brief Method get_IsSecurityCritical, addr 0x5b8cb08, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSecurityCritical();

  /// @brief Method get_MetadataToken, addr 0x5b8b43c, size 0x14, virtual true, abstract: false, final false
  inline int32_t get_MetadataToken();

  /// @brief Method get_MethodHandle, addr 0x5b8bad0, size 0x8, virtual true, abstract: false, final false
  inline ::System::RuntimeMethodHandle get_MethodHandle();

  /// @brief Method get_Module, addr 0x5b8ac3c, size 0x4, virtual true, abstract: false, final false
  inline ::System::Reflection::Module* get_Module();

  /// @brief Method get_Name, addr 0x5b8bb44, size 0x34, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ReflectedType, addr 0x5b8bb10, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* get_ReflectedType();

  /// @brief Method get_ReflectedTypeInternal, addr 0x5b8acdc, size 0x88, virtual false, abstract: false, final false
  inline ::System::RuntimeType* get_ReflectedTypeInternal();

  /// @brief Method get_ReturnParameter, addr 0x5b8b40c, size 0x4, virtual true, abstract: false, final false
  inline ::System::Reflection::ParameterInfo* get_ReturnParameter();

  /// @brief Method get_ReturnType, addr 0x5b8b410, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Type* get_ReturnType();

  /// @brief Method get_base_method, addr 0x5b8b3e4, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::RuntimeMethodInfo* get_base_method(::System::Reflection::RuntimeMethodInfo* method, bool definition);

  /// @brief Method get_core_clr_security_level, addr 0x5b8cb00, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_core_clr_security_level();

  /// @brief Method get_metadata_token, addr 0x5b8b3e8, size 0x14, virtual false, abstract: false, final false
  static inline int32_t get_metadata_token(::System::Reflection::RuntimeMethodInfo* method);

  /// @brief Method get_name, addr 0x5b8b3c0, size 0x24, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3550 };

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

static_assert(sizeof(::System::Reflection::RuntimeMethodInfo) == 0x28, "Size mismatch!");

} // namespace System::Reflection
