#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FieldInfo)
namespace System::Reflection {
struct FieldAttributes;
}
namespace System::Reflection {
class CustomAttributeData;
}
namespace System::Reflection {
class Binder;
}
namespace System {
struct RuntimeFieldHandle;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System {
class Type;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
struct TypedReference;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System {
class Object;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System::Runtime::InteropServices {
class MarshalAsAttribute;
}
// Forward declare root types
namespace System::Reflection {
class FieldInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::FieldInfo);
// Type: System.Reflection::FieldInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3474))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3469))
// CS Name: ::System.Reflection::FieldInfo*
class CORDL_TYPE FieldInfo : public ::System::Reflection::MemberInfo {
public:
  // Declarations
  __declspec(property(get = get_MemberType))::System::Reflection::MemberTypes MemberType;

  __declspec(property(get = get_Attributes))::System::Reflection::FieldAttributes Attributes;

  __declspec(property(get = get_FieldType))::System::Type* FieldType;

  __declspec(property(get = get_IsInitOnly)) bool IsInitOnly;

  __declspec(property(get = get_IsLiteral)) bool IsLiteral;

  __declspec(property(get = get_IsNotSerialized)) bool IsNotSerialized;

  __declspec(property(get = get_IsStatic)) bool IsStatic;

  __declspec(property(get = get_IsPrivate)) bool IsPrivate;

  __declspec(property(get = get_IsPublic)) bool IsPublic;

  __declspec(property(get = get_FieldHandle))::System::RuntimeFieldHandle FieldHandle;

  static inline ::System::Reflection::FieldInfo* New_ctor();

  /// @brief Method .ctor addr 0x24e6760 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method get_MemberType addr 0x24e6768 size 0x8 virtual true final false
  inline ::System::Reflection::MemberTypes get_MemberType();

  /// @brief Method get_Attributes addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Reflection::FieldAttributes get_Attributes();

  /// @brief Method get_FieldType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Type* get_FieldType();

  /// @brief Method get_IsInitOnly addr 0x24e6770 size 0x20 virtual true final true
  inline bool get_IsInitOnly();

  /// @brief Method get_IsLiteral addr 0x24e6790 size 0x20 virtual true final true
  inline bool get_IsLiteral();

  /// @brief Method get_IsNotSerialized addr 0x24e67b0 size 0x20 virtual true final true
  inline bool get_IsNotSerialized();

  /// @brief Method get_IsStatic addr 0x24e67d0 size 0x20 virtual true final true
  inline bool get_IsStatic();

  /// @brief Method get_IsPrivate addr 0x24e67f0 size 0x28 virtual true final true
  inline bool get_IsPrivate();

  /// @brief Method get_IsPublic addr 0x24e6818 size 0x28 virtual true final true
  inline bool get_IsPublic();

  /// @brief Method get_FieldHandle addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::RuntimeFieldHandle get_FieldHandle();

  /// @brief Method Equals addr 0x24e6840 size 0x8 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x24e6848 size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality addr 0x24e6850 size 0x2c virtual false final false
  static inline bool op_Equality(::System::Reflection::FieldInfo* left, ::System::Reflection::FieldInfo* right);

  /// @brief Method op_Inequality addr 0x24e687c size 0x3c virtual false final false
  static inline bool op_Inequality(::System::Reflection::FieldInfo* left, ::System::Reflection::FieldInfo* right);

  /// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* GetValue(::System::Object* obj);

  /// @brief Method SetValue addr 0x24e68b8 size 0x8c virtual true final true
  inline void SetValue(::System::Object* obj, ::System::Object* value);

  /// @brief Method SetValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                       ::System::Globalization::CultureInfo* culture);

  /// @brief Method SetValueDirect addr 0x24e6944 size 0x50 virtual true final false
  inline void SetValueDirect(::System::TypedReference obj, ::System::Object* value);

  /// @brief Method GetRawConstantValue addr 0x24e6994 size 0x50 virtual true final false
  inline ::System::Object* GetRawConstantValue();

  /// @brief Method internal_from_handle_type addr 0x24e69e4 size 0x4 virtual false final false
  static inline ::System::Reflection::FieldInfo* internal_from_handle_type(void* field_handle, void* type_handle);

  /// @brief Method GetFieldFromHandle addr 0x24e69e8 size 0xb8 virtual false final false
  static inline ::System::Reflection::FieldInfo* GetFieldFromHandle(::System::RuntimeFieldHandle handle);

  /// @brief Method GetFieldFromHandle addr 0x24e6aa0 size 0xe8 virtual false final false
  static inline ::System::Reflection::FieldInfo* GetFieldFromHandle(::System::RuntimeFieldHandle handle, ::System::RuntimeTypeHandle declaringType);

  /// @brief Method GetFieldOffset addr 0x24e6b88 size 0x50 virtual true final false
  inline int32_t GetFieldOffset();

  /// @brief Method get_marshal_info addr 0x24e6bd8 size 0x4 virtual false final false
  inline ::System::Runtime::InteropServices::MarshalAsAttribute* get_marshal_info();

  /// @brief Method GetPseudoCustomAttributes addr 0x24e6bdc size 0x214 virtual false final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetPseudoCustomAttributes();

  /// @brief Method GetPseudoCustomAttributesData addr 0x24e6df0 size 0x58c virtual false final false
  inline ::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*> GetPseudoCustomAttributesData();

  // Ctor Parameters [CppParam { name: "", ty: "FieldInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FieldInfo(FieldInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FieldInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FieldInfo(FieldInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FieldInfo();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::FieldInfo, 0x10>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::FieldInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::FieldInfo*, "System.Reflection", "FieldInfo");
