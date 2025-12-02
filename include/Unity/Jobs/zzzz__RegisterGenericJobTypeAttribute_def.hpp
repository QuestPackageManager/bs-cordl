#pragma once
// IWYU pragma private; include "Unity/Jobs/RegisterGenericJobTypeAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RegisterGenericJobTypeAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Jobs {
class RegisterGenericJobTypeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Jobs::RegisterGenericJobTypeAttribute);
// Dependencies System.Attribute
namespace Unity::Jobs {
// Is value type: false
// CS Name: Unity.Jobs.RegisterGenericJobTypeAttribute
class CORDL_TYPE RegisterGenericJobTypeAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field ConcreteType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ConcreteType, put = __cordl_internal_set_ConcreteType)) ::System::Type* ConcreteType;

  static inline ::Unity::Jobs::RegisterGenericJobTypeAttribute* New_ctor(::System::Type* type);

  constexpr ::System::Type* const& __cordl_internal_get_ConcreteType() const;

  constexpr ::System::Type*& __cordl_internal_get_ConcreteType();

  constexpr void __cordl_internal_set_ConcreteType(::System::Type* value);

  /// @brief Method .ctor, addr 0x6289920, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegisterGenericJobTypeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegisterGenericJobTypeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegisterGenericJobTypeAttribute(RegisterGenericJobTypeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegisterGenericJobTypeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegisterGenericJobTypeAttribute(RegisterGenericJobTypeAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15474 };

  /// @brief Field ConcreteType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___ConcreteType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Jobs::RegisterGenericJobTypeAttribute, ___ConcreteType) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Jobs::RegisterGenericJobTypeAttribute, 0x18>, "Size mismatch!");

} // namespace Unity::Jobs
NEED_NO_BOX(::Unity::Jobs::RegisterGenericJobTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::RegisterGenericJobTypeAttribute*, "Unity.Jobs", "RegisterGenericJobTypeAttribute");
