#pragma once
// IWYU pragma private; include "System/Dynamic/DynamicMetaObjectBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__CallSiteBinder_def.hpp"
CORDL_MODULE_EXPORT(DynamicMetaObjectBinder)
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Dynamic {
class DynamicMetaObject;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class LabelTarget;
}
namespace System::Linq::Expressions {
class ParameterExpression;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Dynamic {
class DynamicMetaObjectBinder;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::DynamicMetaObjectBinder);
// Dependencies System.Runtime.CompilerServices.CallSiteBinder
namespace System::Dynamic {
// Is value type: false
// CS Name: System.Dynamic.DynamicMetaObjectBinder
class CORDL_TYPE DynamicMetaObjectBinder : public ::System::Runtime::CompilerServices::CallSiteBinder {
public:
  // Declarations
  __declspec(property(get = get_IsStandardBinder)) bool IsStandardBinder;

  __declspec(property(get = get_ReturnType)) ::System::Type* ReturnType;

  /// @brief Method Bind, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target,
                                                    ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*> args);

  /// @brief Method Bind, addr 0x5e0ee8c, size 0x5cc, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::Expression* Bind(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args,
                                                       ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* parameters,
                                                       ::System::Linq::Expressions::LabelTarget* returnLabel);

  /// @brief Method CreateArgumentMetaObjects, addr 0x5e0f458, size 0x1a0, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Dynamic::DynamicMetaObject*, ::Array<::System::Dynamic::DynamicMetaObject*>*>
  CreateArgumentMetaObjects(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args,
                            ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* parameters);

  /// @brief Method GetUpdateExpression, addr 0x5e0f5f8, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetUpdateExpression(::System::Type* type);

  static inline ::System::Dynamic::DynamicMetaObjectBinder* New_ctor();

  /// @brief Method .ctor, addr 0x5e0ee04, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsStandardBinder, addr 0x5e0f6d0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsStandardBinder();

  /// @brief Method get_ReturnType, addr 0x5e0ee5c, size 0x30, virtual true, abstract: false, final false
  inline ::System::Type* get_ReturnType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicMetaObjectBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicMetaObjectBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicMetaObjectBinder(DynamicMetaObjectBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicMetaObjectBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicMetaObjectBinder(DynamicMetaObjectBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16620 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::DynamicMetaObjectBinder, 0x18>, "Size mismatch!");

} // namespace System::Dynamic
NEED_NO_BOX(::System::Dynamic::DynamicMetaObjectBinder);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::DynamicMetaObjectBinder*, "System.Dynamic", "DynamicMetaObjectBinder");
