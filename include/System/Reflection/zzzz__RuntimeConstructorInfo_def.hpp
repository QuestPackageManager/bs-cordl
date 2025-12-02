#pragma once
// IWYU pragma private; include "System/Reflection/RuntimeConstructorInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeConstructorInfo)
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
struct MethodAttributes;
}
namespace System::Reflection {
struct MethodImplAttributes;
}
namespace System::Reflection {
class Module;
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
class Exception;
}
namespace System {
class Object;
}
namespace System {
struct RuntimeMethodHandle;
}
namespace System {
class RuntimeType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeConstructorInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::RuntimeConstructorInfo);
// Dependencies System.IntPtr, System.Reflection.ConstructorInfo
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.RuntimeConstructorInfo
class CORDL_TYPE RuntimeConstructorInfo : public ::System::Reflection::ConstructorInfo {
public:
  // Declarations
  __declspec(property(get = get_Attributes)) ::System::Reflection::MethodAttributes Attributes;

  __declspec(property(get = get_BindingFlags)) ::System::Reflection::BindingFlags BindingFlags;

  __declspec(property(get = get_CallingConvention)) ::System::Reflection::CallingConventions CallingConvention;

  __declspec(property(get = get_ContainsGenericParameters)) bool ContainsGenericParameters;

  __declspec(property(get = get_DeclaringType)) ::System::Type* DeclaringType;

  __declspec(property(get = get_IsSecurityCritical)) bool IsSecurityCritical;

  __declspec(property(get = get_MetadataToken)) int32_t MetadataToken;

  __declspec(property(get = get_MethodHandle)) ::System::RuntimeMethodHandle MethodHandle;

  __declspec(property(get = get_Module)) ::System::Reflection::Module* Module;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ReflectedType)) ::System::Type* ReflectedType;

  __declspec(property(get = get_ReflectedTypeInternal)) ::System::RuntimeType* ReflectedTypeInternal;

  /// @brief Field mhandle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mhandle, put = __cordl_internal_set_mhandle)) ::System::IntPtr mhandle;

  /// @brief Field name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field reftype, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_reftype, put = __cordl_internal_set_reftype)) ::System::Type* reftype;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method DoInvoke, addr 0x59789b0, size 0x1c0, virtual false, abstract: false, final false
  inline ::System::Object* DoInvoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, ::System::Globalization::CultureInfo* culture);

  /// @brief Method GetCustomAttributes, addr 0x5978ea0, size 0x74, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x5978e34, size 0x6c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetMethodImplementationFlags, addr 0x5978844, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags();

  /// @brief Method GetObjectData, addr 0x5978628, size 0xd8, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetParameters, addr 0x5978870, size 0xc, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParameters();

  /// @brief Method GetParametersCount, addr 0x5978888, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetParametersCount();

  /// @brief Method GetParametersInternal, addr 0x597887c, size 0xc, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParametersInternal();

  /// @brief Method GetRuntimeModule, addr 0x5978500, size 0x98, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeModule* GetRuntimeModule();

  /// @brief Method InternalInvoke, addr 0x59788a8, size 0x4, virtual false, abstract: false, final false
  inline ::System::Object* InternalInvoke(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, ::ByRef<::System::Exception*> exc);

  /// @brief Method InternalInvoke, addr 0x5978b70, size 0x164, virtual false, abstract: false, final false
  inline ::System::Object* InternalInvoke(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, bool wrapExceptions);

  /// @brief Method Invoke, addr 0x5978cd4, size 0x18, virtual true, abstract: false, final false
  inline ::System::Object* Invoke(::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters,
                                  ::System::Globalization::CultureInfo* culture);

  /// @brief Method Invoke, addr 0x59788ac, size 0x104, virtual true, abstract: false, final false
  inline ::System::Object* Invoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, ::System::Globalization::CultureInfo* culture);

  /// @brief Method IsDefined, addr 0x5978dc0, size 0x74, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  static inline ::System::Reflection::RuntimeConstructorInfo* New_ctor();

  /// @brief Method SerializationInvoke, addr 0x5978714, size 0x130, virtual false, abstract: false, final false
  inline void SerializationInvoke(::System::Object* target, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method SerializationToString, addr 0x5978700, size 0x14, virtual false, abstract: false, final false
  inline ::StringW SerializationToString();

  /// @brief Method ToString, addr 0x5978f14, size 0x6c, virtual true, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x5978fb8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Attributes, addr 0x5978cf4, size 0xc, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodAttributes get_Attributes();

  /// @brief Method get_BindingFlags, addr 0x5978598, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::BindingFlags get_BindingFlags();

  /// @brief Method get_CallingConvention, addr 0x5978d00, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Reflection::CallingConventions get_CallingConvention();

  /// @brief Method get_ContainsGenericParameters, addr 0x5978d2c, size 0x2c, virtual true, abstract: false, final false
  inline bool get_ContainsGenericParameters();

  /// @brief Method get_DeclaringType, addr 0x5978d60, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_IsSecurityCritical, addr 0x5978f88, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSecurityCritical();

  /// @brief Method get_MetadataToken, addr 0x5978f90, size 0x14, virtual true, abstract: false, final false
  inline int32_t get_MetadataToken();

  /// @brief Method get_MethodHandle, addr 0x5978cec, size 0x8, virtual true, abstract: false, final false
  inline ::System::RuntimeMethodHandle get_MethodHandle();

  /// @brief Method get_Module, addr 0x59784fc, size 0x4, virtual true, abstract: false, final false
  inline ::System::Reflection::Module* get_Module();

  /// @brief Method get_Name, addr 0x5978d8c, size 0x34, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ReflectedType, addr 0x5978d58, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* get_ReflectedType();

  /// @brief Method get_ReflectedTypeInternal, addr 0x59785a0, size 0x88, virtual false, abstract: false, final false
  inline ::System::RuntimeType* get_ReflectedTypeInternal();

  /// @brief Method get_core_clr_security_level, addr 0x5978f80, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_core_clr_security_level();

  /// @brief Method get_metadata_token, addr 0x5978fa4, size 0x14, virtual false, abstract: false, final false
  static inline int32_t get_metadata_token(::System::Reflection::RuntimeConstructorInfo* method);

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeConstructorInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeConstructorInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeConstructorInfo(RuntimeConstructorInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeConstructorInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeConstructorInfo(RuntimeConstructorInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3551 };

  /// @brief Field mhandle, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___mhandle;

  /// @brief Field name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field reftype, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___reftype;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::RuntimeConstructorInfo, ___mhandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeConstructorInfo, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeConstructorInfo, ___reftype) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::RuntimeConstructorInfo, 0x28>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::RuntimeConstructorInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimeConstructorInfo*, "System.Reflection", "RuntimeConstructorInfo");
