#pragma once
// IWYU pragma private; include "Unity/Properties/MissingPropertyBagException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MissingPropertyBagException)
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Properties {
class MissingPropertyBagException;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::MissingPropertyBagException);
// Dependencies System.Exception
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.MissingPropertyBagException
class CORDL_TYPE MissingPropertyBagException : public ::System::Exception {
public:
  // Declarations
  /// @brief Field <Type>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField)) ::System::Type* _Type_k__BackingField;

  /// @brief Method GetMessageForType, addr 0x696a2d0, size 0x8c, virtual false, abstract: false, final false
  static inline ::StringW GetMessageForType(::System::Type* type);

  static inline ::Unity::Properties::MissingPropertyBagException* New_ctor(::System::Type* type);

  constexpr ::System::Type* const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField();

  constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x696a250, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissingPropertyBagException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissingPropertyBagException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissingPropertyBagException(MissingPropertyBagException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissingPropertyBagException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissingPropertyBagException(MissingPropertyBagException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19307 };

  /// @brief Field <Type>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::System::Type* ____Type_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::MissingPropertyBagException, ____Type_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::MissingPropertyBagException, 0x98>, "Size mismatch!");

} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::MissingPropertyBagException);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::MissingPropertyBagException*, "Unity.Properties", "MissingPropertyBagException");
