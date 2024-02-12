#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PropertyBuilder)
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
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection::Emit {
class PropertyBuilder;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Emit::PropertyBuilder);
// Type: System.Reflection.Emit::PropertyBuilder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3484))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3542))
// CS Name: ::System.Reflection.Emit::PropertyBuilder*
class CORDL_TYPE PropertyBuilder : public ::System::Reflection::PropertyInfo {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_DeclaringType))::System::Type* DeclaringType;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_PropertyType))::System::Type* PropertyType;

  __declspec(property(get = get_ReflectedType))::System::Type* ReflectedType;

  /// @brief Method get_CanRead, addr 0x251a368, size 0x40, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanWrite, addr 0x251a3a8, size 0x40, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_DeclaringType, addr 0x251a3e8, size 0x40, virtual true, abstract: false, final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_Name, addr 0x251a428, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_PropertyType, addr 0x251a468, size 0x40, virtual true, abstract: false, final false
  inline ::System::Type* get_PropertyType();

  /// @brief Method get_ReflectedType, addr 0x251a4a8, size 0x40, virtual true, abstract: false, final false
  inline ::System::Type* get_ReflectedType();

  /// @brief Method GetCustomAttributes, addr 0x251a4e8, size 0x40, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x251a528, size 0x40, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetGetMethod, addr 0x251a568, size 0x40, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetGetMethod(bool nonPublic);

  /// @brief Method GetIndexParameters, addr 0x251a5a8, size 0x40, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetIndexParameters();

  /// @brief Method GetSetMethod, addr 0x251a5e8, size 0x40, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetSetMethod(bool nonPublic);

  /// @brief Method GetValue, addr 0x251a628, size 0x40, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> index, ::System::Globalization::CultureInfo* culture);

  /// @brief Method IsDefined, addr 0x251a668, size 0x40, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method SetValue, addr 0x251a6a8, size 0x40, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                       ::ArrayW<::System::Object*, ::Array<::System::Object*>*> index, ::System::Globalization::CultureInfo* culture);

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBuilder(PropertyBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBuilder(PropertyBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBuilder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Emit::PropertyBuilder, 0x10>, "Size mismatch!");

} // namespace System::Reflection::Emit
NEED_NO_BOX(::System::Reflection::Emit::PropertyBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::PropertyBuilder*, "System.Reflection.Emit", "PropertyBuilder");
