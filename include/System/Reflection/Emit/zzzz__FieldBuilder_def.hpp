#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FieldBuilder)
namespace System::Reflection {
struct BindingFlags;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace System::Reflection {
struct FieldAttributes;
}
namespace System::Reflection {
class Binder;
}
namespace System {
struct RuntimeFieldHandle;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System::Reflection::Emit {
class FieldBuilder;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Emit::FieldBuilder);
// Type: System.Reflection.Emit::FieldBuilder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3469))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3539))
// CS Name: ::System.Reflection.Emit::FieldBuilder*
class CORDL_TYPE FieldBuilder : public ::System::Reflection::FieldInfo {
public:
  // Declarations
  __declspec(property(get = get_Attributes))::System::Reflection::FieldAttributes Attributes;

  __declspec(property(get = get_DeclaringType))::System::Type* DeclaringType;

  __declspec(property(get = get_FieldHandle))::System::RuntimeFieldHandle FieldHandle;

  __declspec(property(get = get_FieldType))::System::Type* FieldType;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_ReflectedType))::System::Type* ReflectedType;

  /// @brief Method get_Attributes, addr 0x24fa704, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::FieldAttributes get_Attributes();

  /// @brief Method get_DeclaringType, addr 0x24fa70c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_FieldHandle, addr 0x24fa714, size 0x8, virtual true, abstract: false, final false
  inline ::System::RuntimeFieldHandle get_FieldHandle();

  /// @brief Method get_FieldType, addr 0x24fa71c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* get_FieldType();

  /// @brief Method get_Name, addr 0x24fa724, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ReflectedType, addr 0x24fa72c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* get_ReflectedType();

  /// @brief Method GetCustomAttributes, addr 0x24fa734, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x24fa73c, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetValue, addr 0x24fa744, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* obj);

  /// @brief Method IsDefined, addr 0x24fa74c, size 0x8, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method SetValue, addr 0x24fa754, size 0x40, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* obj, ::System::Object* val, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                       ::System::Globalization::CultureInfo* culture);

  // Ctor Parameters [CppParam { name: "", ty: "FieldBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FieldBuilder(FieldBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FieldBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FieldBuilder(FieldBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FieldBuilder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Emit::FieldBuilder, 0x10>, "Size mismatch!");

} // namespace System::Reflection::Emit
NEED_NO_BOX(::System::Reflection::Emit::FieldBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::FieldBuilder*, "System.Reflection.Emit", "FieldBuilder");
