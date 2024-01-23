#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__FieldAttributes_def.hpp"
#include "System/Reflection/zzzz__RtFieldInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__RuntimeFieldHandle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeFieldInfo)
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
struct FieldAttributes;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class Module;
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
class Object;
}
namespace System {
struct RuntimeFieldHandle;
}
namespace System {
class RuntimeType;
}
namespace System {
class Type;
}
namespace System {
struct TypedReference;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeFieldInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::RuntimeFieldInfo);
// Type: System.Reflection::RuntimeFieldInfo
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(2616)), TypeDefinitionIndex(TypeDefinitionIndex(3468)),
// TypeDefinitionIndex(TypeDefinitionIndex(3520))] Self: TypeDefinitionIndex(TypeDefinitionIndex(3521)) CS Name: ::System.Reflection::RuntimeFieldInfo*
class CORDL_TYPE RuntimeFieldInfo : public ::System::Reflection::RtFieldInfo {
public:
  // Declarations
  /// @brief Field klass, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_klass, put = __cordl_internal_set_klass)) void* klass;

  /// @brief Field fhandle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_fhandle, put = __cordl_internal_set_fhandle))::System::RuntimeFieldHandle fhandle;

  /// @brief Field name, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field type, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Type* type;

  /// @brief Field attrs, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_attrs, put = __cordl_internal_set_attrs))::System::Reflection::FieldAttributes attrs;

  __declspec(property(get = get_BindingFlags))::System::Reflection::BindingFlags BindingFlags;

  __declspec(property(get = get_Module))::System::Reflection::Module* Module;

  __declspec(property(get = get_ReflectedTypeInternal))::System::RuntimeType* ReflectedTypeInternal;

  __declspec(property(get = get_Attributes))::System::Reflection::FieldAttributes Attributes;

  __declspec(property(get = get_FieldHandle))::System::RuntimeFieldHandle FieldHandle;

  __declspec(property(get = get_FieldType))::System::Type* FieldType;

  __declspec(property(get = get_ReflectedType))::System::Type* ReflectedType;

  __declspec(property(get = get_DeclaringType))::System::Type* DeclaringType;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_MetadataToken)) int32_t MetadataToken;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  constexpr void*& __cordl_internal_get_klass();

  constexpr void* const& __cordl_internal_get_klass() const;

  constexpr void __cordl_internal_set_klass(void* value);

  constexpr ::System::RuntimeFieldHandle& __cordl_internal_get_fhandle();

  constexpr ::System::RuntimeFieldHandle const& __cordl_internal_get_fhandle() const;

  constexpr void __cordl_internal_set_fhandle(::System::RuntimeFieldHandle value);

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_type() const;

  constexpr void __cordl_internal_set_type(::System::Type* value);

  constexpr ::System::Reflection::FieldAttributes& __cordl_internal_get_attrs();

  constexpr ::System::Reflection::FieldAttributes const& __cordl_internal_get_attrs() const;

  constexpr void __cordl_internal_set_attrs(::System::Reflection::FieldAttributes value);

  /// @brief Method get_BindingFlags, addr 0x24f2c80, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::BindingFlags get_BindingFlags();

  /// @brief Method get_Module, addr 0x24f2c88, size 0x4, virtual true, abstract: false, final false
  inline ::System::Reflection::Module* get_Module();

  /// @brief Method GetDeclaringTypeInternal, addr 0x24f2ca8, size 0x84, virtual false, abstract: false, final false
  inline ::System::RuntimeType* GetDeclaringTypeInternal();

  /// @brief Method get_ReflectedTypeInternal, addr 0x24f2d2c, size 0x84, virtual false, abstract: false, final false
  inline ::System::RuntimeType* get_ReflectedTypeInternal();

  /// @brief Method GetRuntimeModule, addr 0x24f2c8c, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeModule* GetRuntimeModule();

  /// @brief Method GetObjectData, addr 0x24f2db0, size 0xbc, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method UnsafeGetValue, addr 0x24f2e6c, size 0x4, virtual true, abstract: false, final false
  inline ::System::Object* UnsafeGetValue(::System::Object* obj);

  /// @brief Method CheckConsistency, addr 0x24f2e70, size 0x180, virtual true, abstract: false, final false
  inline void CheckConsistency(::System::Object* target);

  /// @brief Method UnsafeSetValue, addr 0x24f2ff0, size 0x64, virtual true, abstract: false, final false
  inline void UnsafeSetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                             ::System::Globalization::CultureInfo* culture);

  /// @brief Method SetValueDirect, addr 0x24f3054, size 0x164, virtual true, abstract: false, final false
  inline void SetValueDirect(::System::TypedReference obj, ::System::Object* value);

  /// @brief Method get_Attributes, addr 0x24f31b8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::FieldAttributes get_Attributes();

  /// @brief Method get_FieldHandle, addr 0x24f31c0, size 0x8, virtual true, abstract: false, final false
  inline ::System::RuntimeFieldHandle get_FieldHandle();

  /// @brief Method ResolveType, addr 0x24f31c8, size 0x4, virtual false, abstract: false, final false
  inline ::System::Type* ResolveType();

  /// @brief Method get_FieldType, addr 0x24f31cc, size 0x7c, virtual true, abstract: false, final false
  inline ::System::Type* get_FieldType();

  /// @brief Method GetParentType, addr 0x24f3248, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* GetParentType(bool declaring);

  /// @brief Method get_ReflectedType, addr 0x24f3250, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* get_ReflectedType();

  /// @brief Method get_DeclaringType, addr 0x24f3258, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_Name, addr 0x24f3260, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method IsDefined, addr 0x24f3268, size 0x70, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x24f32d8, size 0x68, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x24f3340, size 0x70, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetFieldOffset, addr 0x24f33b0, size 0x4, virtual true, abstract: false, final false
  inline int32_t GetFieldOffset();

  /// @brief Method GetValueInternal, addr 0x24f33b4, size 0x4, virtual false, abstract: false, final false
  inline ::System::Object* GetValueInternal(::System::Object* obj);

  /// @brief Method GetValue, addr 0x24f33b8, size 0x1a0, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* obj);

  /// @brief Method ToString, addr 0x24f35d8, size 0x68, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method SetValueInternal, addr 0x24f3640, size 0x4, virtual false, abstract: false, final false
  static inline void SetValueInternal(::System::Reflection::FieldInfo* fi, ::System::Object* obj, ::System::Object* value);

  /// @brief Method SetValue, addr 0x24f3644, size 0x2c4, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* obj, ::System::Object* val, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                       ::System::Globalization::CultureInfo* culture);

  /// @brief Method GetRawConstantValue, addr 0x24f3908, size 0x4, virtual true, abstract: false, final false
  inline ::System::Object* GetRawConstantValue();

  /// @brief Method CheckGeneric, addr 0x24f3558, size 0x80, virtual false, abstract: false, final false
  inline void CheckGeneric();

  /// @brief Method get_MetadataToken, addr 0x24f390c, size 0x4, virtual true, abstract: false, final false
  inline int32_t get_MetadataToken();

  /// @brief Method get_metadata_token, addr 0x24f3910, size 0x4, virtual false, abstract: false, final false
  static inline int32_t get_metadata_token(::System::Reflection::RuntimeFieldInfo* monoField);

  static inline ::System::Reflection::RuntimeFieldInfo* New_ctor();

  /// @brief Method .ctor, addr 0x24f3914, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeFieldInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeFieldInfo(RuntimeFieldInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeFieldInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeFieldInfo(RuntimeFieldInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeFieldInfo();

public:
  /// @brief Field klass, offset: 0x10, size: 0x8, def value: None
  void* ___klass;

  /// @brief Field fhandle, offset: 0x18, size: 0x8, def value: None
  ::System::RuntimeFieldHandle ___fhandle;

  /// @brief Field name, offset: 0x20, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field type, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field attrs, offset: 0x30, size: 0x4, def value: None
  ::System::Reflection::FieldAttributes ___attrs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::RuntimeFieldInfo, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeFieldInfo, ___klass) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeFieldInfo, ___fhandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeFieldInfo, ___name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeFieldInfo, ___type) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeFieldInfo, ___attrs) == 0x30, "Offset mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::RuntimeFieldInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimeFieldInfo*, "System.Reflection", "RuntimeFieldInfo");
