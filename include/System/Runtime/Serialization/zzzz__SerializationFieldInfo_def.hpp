#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializationFieldInfo)
namespace System {
class Object;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
class RuntimeFieldInfo;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
struct RuntimeFieldHandle;
}
namespace System {
class Type;
}
namespace System::Reflection {
struct FieldAttributes;
}
namespace System::Reflection {
class Module;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationFieldInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SerializationFieldInfo);
// Type: System.Runtime.Serialization::SerializationFieldInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3464))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3232))
// CS Name: ::System.Runtime.Serialization::SerializationFieldInfo*
class CORDL_TYPE SerializationFieldInfo : public ::System::Reflection::FieldInfo {
public:
  // Declarations
  /// @brief Field m_field, offset 0x10, size 0x8
  __declspec(property(get = __get_m_field, put = __set_m_field))::System::Reflection::RuntimeFieldInfo* m_field;

  /// @brief Field m_serializationName, offset 0x18, size 0x8
  __declspec(property(get = __get_m_serializationName, put = __set_m_serializationName))::StringW m_serializationName;

  __declspec(property(get = get_Module))::System::Reflection::Module* Module;

  __declspec(property(get = get_MetadataToken)) int32_t MetadataToken;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_DeclaringType))::System::Type* DeclaringType;

  __declspec(property(get = get_ReflectedType))::System::Type* ReflectedType;

  __declspec(property(get = get_FieldType))::System::Type* FieldType;

  __declspec(property(get = get_FieldInfo))::System::Reflection::RuntimeFieldInfo* FieldInfo;

  __declspec(property(get = get_FieldHandle))::System::RuntimeFieldHandle FieldHandle;

  __declspec(property(get = get_Attributes))::System::Reflection::FieldAttributes Attributes;

  constexpr ::System::Reflection::RuntimeFieldInfo*& __get_m_field();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::RuntimeFieldInfo*> const& __get_m_field() const;

  constexpr void __set_m_field(::System::Reflection::RuntimeFieldInfo* value);

  constexpr ::StringW& __get_m_serializationName();

  constexpr ::StringW const& __get_m_serializationName() const;

  constexpr void __set_m_serializationName(::StringW value);

  /// @brief Method get_Module addr 0x23653fc size 0x20 virtual true final false
  inline ::System::Reflection::Module* get_Module();

  /// @brief Method get_MetadataToken addr 0x236541c size 0x24 virtual true final false
  inline int32_t get_MetadataToken();

  static inline ::System::Runtime::Serialization::SerializationFieldInfo* New_ctor(::System::Reflection::RuntimeFieldInfo* field, ::StringW namePrefix);

  /// @brief Method .ctor addr 0x235e054 size 0x90 virtual false final false
  inline void _ctor(::System::Reflection::RuntimeFieldInfo* field, ::StringW namePrefix);

  /// @brief Method get_Name addr 0x2365440 size 0x8 virtual true final false
  inline ::StringW get_Name();

  /// @brief Method get_DeclaringType addr 0x2365448 size 0x20 virtual true final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_ReflectedType addr 0x2365468 size 0x20 virtual true final false
  inline ::System::Type* get_ReflectedType();

  /// @brief Method GetCustomAttributes addr 0x2365488 size 0x28 virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetCustomAttributes addr 0x23654b0 size 0x28 virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method IsDefined addr 0x23654d8 size 0x24 virtual true final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method get_FieldType addr 0x23654fc size 0x24 virtual true final false
  inline ::System::Type* get_FieldType();

  /// @brief Method GetValue addr 0x2365520 size 0x24 virtual true final false
  inline ::System::Object* GetValue(::System::Object* obj);

  /// @brief Method InternalGetValue addr 0x235ef1c size 0x80 virtual false final false
  inline ::System::Object* InternalGetValue(::System::Object* obj);

  /// @brief Method SetValue addr 0x2365544 size 0x24 virtual true final false
  inline void SetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                       ::System::Globalization::CultureInfo* culture);

  /// @brief Method InternalSetValue addr 0x235e7ec size 0xb0 virtual false final false
  inline void InternalSetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                               ::System::Globalization::CultureInfo* culture);

  /// @brief Method get_FieldInfo addr 0x2365568 size 0x8 virtual false final false
  inline ::System::Reflection::RuntimeFieldInfo* get_FieldInfo();

  /// @brief Method get_FieldHandle addr 0x2365570 size 0x24 virtual true final false
  inline ::System::RuntimeFieldHandle get_FieldHandle();

  /// @brief Method get_Attributes addr 0x2365594 size 0x24 virtual true final false
  inline ::System::Reflection::FieldAttributes get_Attributes();

  // Ctor Parameters [CppParam { name: "", ty: "SerializationFieldInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationFieldInfo(SerializationFieldInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationFieldInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationFieldInfo(SerializationFieldInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationFieldInfo();

public:
  /// @brief Field m_field, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::RuntimeFieldInfo* ___m_field;

  /// @brief Field m_serializationName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_serializationName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SerializationFieldInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationFieldInfo, ___m_field) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationFieldInfo, ___m_serializationName) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SerializationFieldInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationFieldInfo*, "System.Runtime.Serialization", "SerializationFieldInfo");
