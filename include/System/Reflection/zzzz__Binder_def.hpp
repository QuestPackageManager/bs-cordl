#pragma once
// IWYU pragma private; include "System/Reflection/Binder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Binder)
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class Binder;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Binder);
// Dependencies System.Object
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.Binder
class CORDL_TYPE Binder : public ::System::Object {
public:
  // Declarations
  /// @brief Method BindToField, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::FieldInfo* BindToField(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> match,
                                                      ::System::Object* value, ::System::Globalization::CultureInfo* culture);

  /// @brief Method BindToMethod, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodBase* BindToMethod(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::MethodBase*, ::Array<::System::Reflection::MethodBase*>*> match,
                                                        ::ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> args,
                                                        ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers,
                                                        ::System::Globalization::CultureInfo* culture, ::ArrayW<::StringW, ::Array<::StringW>*> names, ::ByRef<::System::Object*> state);

  /// @brief Method ChangeType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* type, ::System::Globalization::CultureInfo* culture);

  static inline ::System::Reflection::Binder* New_ctor();

  /// @brief Method ReorderArgumentArray, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReorderArgumentArray(::ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> args, ::System::Object* state);

  /// @brief Method SelectMethod, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodBase* SelectMethod(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::MethodBase*, ::Array<::System::Reflection::MethodBase*>*> match,
                                                        ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                        ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method SelectProperty, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::PropertyInfo* SelectProperty(::System::Reflection::BindingFlags bindingAttr,
                                                            ::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> match, ::System::Type* returnType,
                                                            ::ArrayW<::System::Type*, ::Array<::System::Type*>*> indexes,
                                                            ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method .ctor, addr 0x3d1d2dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Binder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Binder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Binder(Binder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Binder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Binder(Binder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3458 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Binder, 0x10>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::Binder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Binder*, "System.Reflection", "Binder");
