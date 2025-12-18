#pragma once
// IWYU pragma private; include "System/Linq/Expressions/ElementInit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ElementInit)
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class IArgumentProvider;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace System::Linq::Expressions {
class ElementInit;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::ElementInit);
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.ElementInit
class CORDL_TYPE ElementInit : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AddMethod)) ::System::Reflection::MethodInfo* AddMethod;

  __declspec(property(get = get_ArgumentCount)) int32_t ArgumentCount;

  __declspec(property(get = get_Arguments)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* Arguments;

  /// @brief Field <AddMethod>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__AddMethod_k__BackingField, put = __cordl_internal_set__AddMethod_k__BackingField)) ::System::Reflection::MethodInfo* _AddMethod_k__BackingField;

  /// @brief Field <Arguments>k__BackingField, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__Arguments_k__BackingField,
      put = __cordl_internal_set__Arguments_k__BackingField)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* _Arguments_k__BackingField;

  /// @brief Convert operator to "::System::Linq::Expressions::IArgumentProvider"
  constexpr operator ::System::Linq::Expressions::IArgumentProvider*() noexcept;

  /// @brief Method GetArgument, addr 0x5dc6288, size 0x64, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::Expression* GetArgument(int32_t index);

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get__AddMethod_k__BackingField() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get__AddMethod_k__BackingField();

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* const& __cordl_internal_get__Arguments_k__BackingField() const;

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*& __cordl_internal_get__Arguments_k__BackingField();

  constexpr void __cordl_internal_set__AddMethod_k__BackingField(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set__Arguments_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* value);

  /// @brief Method get_AddMethod, addr 0x5dc6278, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_AddMethod();

  /// @brief Method get_ArgumentCount, addr 0x5dc62ec, size 0x54, virtual true, abstract: false, final true
  inline int32_t get_ArgumentCount();

  /// @brief Method get_Arguments, addr 0x5dc6280, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* get_Arguments();

  /// @brief Convert to "::System::Linq::Expressions::IArgumentProvider"
  constexpr ::System::Linq::Expressions::IArgumentProvider* i___System__Linq__Expressions__IArgumentProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElementInit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElementInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElementInit(ElementInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElementInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElementInit(ElementInit const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16131 };

  /// @brief Field <AddMethod>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ____AddMethod_k__BackingField;

  /// @brief Field <Arguments>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* ____Arguments_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::ElementInit, ____AddMethod_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::ElementInit, ____Arguments_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::ElementInit, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::ElementInit);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::ElementInit*, "System.Linq.Expressions", "ElementInit");
