#pragma once
// IWYU pragma private; include "System/Reflection/FieldInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FieldInfo)
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
class CustomAttributeData;
}
namespace System::Reflection {
struct FieldAttributes;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System::Runtime::InteropServices {
class MarshalAsAttribute;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
struct RuntimeFieldHandle;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System {
class Type;
}
namespace System {
struct TypedReference;
}
// Forward declare root types
namespace System::Reflection {
class FieldInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::FieldInfo);
// Dependencies System.Reflection.MemberInfo
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.FieldInfo
class CORDL_TYPE FieldInfo : public ::System::Reflection::MemberInfo {
public:
  // Declarations
  __declspec(property(get = get_Attributes)) ::System::Reflection::FieldAttributes Attributes;

  __declspec(property(get = get_FieldHandle)) ::System::RuntimeFieldHandle FieldHandle;

  __declspec(property(get = get_FieldType)) ::System::Type* FieldType;

  __declspec(property(get = get_IsInitOnly)) bool IsInitOnly;

  __declspec(property(get = get_IsLiteral)) bool IsLiteral;

  __declspec(property(get = get_IsNotSerialized)) bool IsNotSerialized;

  __declspec(property(get = get_IsPrivate)) bool IsPrivate;

  __declspec(property(get = get_IsPublic)) bool IsPublic;

  __declspec(property(get = get_IsStatic)) bool IsStatic;

  __declspec(property(get = get_MemberType)) ::System::Reflection::MemberTypes MemberType;

  /// @brief Method Equals, addr 0x3d21140, size 0x8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetFieldFromHandle, addr 0x3d212e0, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Reflection::FieldInfo* GetFieldFromHandle(::System::RuntimeFieldHandle handle);

  /// @brief Method GetFieldFromHandle, addr 0x3d21350, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Reflection::FieldInfo* GetFieldFromHandle(::System::RuntimeFieldHandle handle, ::System::RuntimeTypeHandle declaringType);

  /// @brief Method GetFieldOffset, addr 0x3d213f4, size 0x4c, virtual true, abstract: false, final false
  inline int32_t GetFieldOffset();

  /// @brief Method GetHashCode, addr 0x3d21148, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetPseudoCustomAttributes, addr 0x3d21444, size 0x214, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetPseudoCustomAttributes();

  /// @brief Method GetPseudoCustomAttributesData, addr 0x3d21658, size 0x578, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*> GetPseudoCustomAttributesData();

  /// @brief Method GetRawConstantValue, addr 0x3d21290, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Object* GetRawConstantValue();

  /// @brief Method GetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* obj);

  static inline ::System::Reflection::FieldInfo* New_ctor();

  /// @brief Method SetValue, addr 0x3d211b8, size 0x8c, virtual true, abstract: false, final true
  inline void SetValue(::System::Object* obj, ::System::Object* value);

  /// @brief Method SetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                       ::System::Globalization::CultureInfo* culture);

  /// @brief Method SetValueDirect, addr 0x3d21244, size 0x4c, virtual true, abstract: false, final false
  inline void SetValueDirect(::System::TypedReference obj, ::System::Object* value);

  /// @brief Method .ctor, addr 0x3d21060, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Attributes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::FieldAttributes get_Attributes();

  /// @brief Method get_FieldHandle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::RuntimeFieldHandle get_FieldHandle();

  /// @brief Method get_FieldType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* get_FieldType();

  /// @brief Method get_IsInitOnly, addr 0x3d21070, size 0x20, virtual true, abstract: false, final true
  inline bool get_IsInitOnly();

  /// @brief Method get_IsLiteral, addr 0x3d21090, size 0x20, virtual true, abstract: false, final true
  inline bool get_IsLiteral();

  /// @brief Method get_IsNotSerialized, addr 0x3d210b0, size 0x20, virtual true, abstract: false, final true
  inline bool get_IsNotSerialized();

  /// @brief Method get_IsPrivate, addr 0x3d210f0, size 0x28, virtual true, abstract: false, final true
  inline bool get_IsPrivate();

  /// @brief Method get_IsPublic, addr 0x3d21118, size 0x28, virtual true, abstract: false, final true
  inline bool get_IsPublic();

  /// @brief Method get_IsStatic, addr 0x3d210d0, size 0x20, virtual true, abstract: false, final true
  inline bool get_IsStatic();

  /// @brief Method get_MemberType, addr 0x3d21068, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MemberTypes get_MemberType();

  /// @brief Method get_marshal_info, addr 0x3d21440, size 0x4, virtual false, abstract: false, final false
  inline ::System::Runtime::InteropServices::MarshalAsAttribute* get_marshal_info();

  /// @brief Method internal_from_handle_type, addr 0x3d212dc, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::FieldInfo* internal_from_handle_type(::System::IntPtr field_handle, ::System::IntPtr type_handle);

  /// @brief Method op_Equality, addr 0x3d21150, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Reflection::FieldInfo* left, ::System::Reflection::FieldInfo* right);

  /// @brief Method op_Inequality, addr 0x3d2117c, size 0x3c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Reflection::FieldInfo* left, ::System::Reflection::FieldInfo* right);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FieldInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FieldInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FieldInfo(FieldInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FieldInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FieldInfo(FieldInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3469 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::FieldInfo, 0x10>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::FieldInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::FieldInfo*, "System.Reflection", "FieldInfo");
