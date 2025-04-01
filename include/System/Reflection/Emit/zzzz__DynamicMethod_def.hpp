#pragma once
// IWYU pragma private; include "System/Reflection/Emit/DynamicMethod.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DynamicMethod)
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
struct MethodAttributes;
}
namespace System::Reflection {
struct MethodImplAttributes;
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
struct RuntimeMethodHandle;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection::Emit {
class DynamicMethod;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Emit::DynamicMethod);
// Dependencies System.Reflection.MethodInfo
namespace System::Reflection::Emit {
// Is value type: false
// CS Name: System.Reflection.Emit.DynamicMethod
class CORDL_TYPE DynamicMethod : public ::System::Reflection::MethodInfo {
public:
  // Declarations
  __declspec(property(get = get_Attributes)) ::System::Reflection::MethodAttributes Attributes;

  __declspec(property(get = get_DeclaringType)) ::System::Type* DeclaringType;

  __declspec(property(get = get_MethodHandle)) ::System::RuntimeMethodHandle MethodHandle;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ReflectedType)) ::System::Type* ReflectedType;

  /// @brief Method GetBaseDefinition, addr 0x3d30680, size 0x38, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetBaseDefinition();

  /// @brief Method GetCustomAttributes, addr 0x3d30610, size 0x38, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x3d305d8, size 0x38, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetMethodImplementationFlags, addr 0x3d30648, size 0x38, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags();

  /// @brief Method GetParameters, addr 0x3d30530, size 0x38, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParameters();

  /// @brief Method Invoke, addr 0x3d306b8, size 0x38, virtual true, abstract: false, final false
  inline ::System::Object* Invoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, ::System::Globalization::CultureInfo* culture);

  /// @brief Method IsDefined, addr 0x3d306f0, size 0x38, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method get_Attributes, addr 0x3d30488, size 0x38, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodAttributes get_Attributes();

  /// @brief Method get_DeclaringType, addr 0x3d304c0, size 0x38, virtual true, abstract: false, final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_MethodHandle, addr 0x3d30568, size 0x38, virtual true, abstract: false, final false
  inline ::System::RuntimeMethodHandle get_MethodHandle();

  /// @brief Method get_Name, addr 0x3d304f8, size 0x38, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ReflectedType, addr 0x3d305a0, size 0x38, virtual true, abstract: false, final false
  inline ::System::Type* get_ReflectedType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicMethod(DynamicMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicMethod(DynamicMethod const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3539 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Emit::DynamicMethod, 0x10>, "Size mismatch!");

} // namespace System::Reflection::Emit
NEED_NO_BOX(::System::Reflection::Emit::DynamicMethod);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::DynamicMethod*, "System.Reflection.Emit", "DynamicMethod");
