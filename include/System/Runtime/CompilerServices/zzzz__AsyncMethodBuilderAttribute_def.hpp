#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/AsyncMethodBuilderAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AsyncMethodBuilderAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class AsyncMethodBuilderAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute);
// Dependencies System.Attribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.AsyncMethodBuilderAttribute
class CORDL_TYPE AsyncMethodBuilderAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <BuilderType>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__BuilderType_k__BackingField, put = __cordl_internal_set__BuilderType_k__BackingField)) ::System::Type* _BuilderType_k__BackingField;

  static inline ::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute* New_ctor(::System::Type* builderType);

  constexpr ::System::Type* const& __cordl_internal_get__BuilderType_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__BuilderType_k__BackingField();

  constexpr void __cordl_internal_set__BuilderType_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x3d19bf4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* builderType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncMethodBuilderAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncMethodBuilderAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncMethodBuilderAttribute(AsyncMethodBuilderAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncMethodBuilderAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncMethodBuilderAttribute(AsyncMethodBuilderAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3355 };

  /// @brief Field <BuilderType>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____BuilderType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute, ____BuilderType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute, 0x18>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute*, "System.Runtime.CompilerServices", "AsyncMethodBuilderAttribute");
