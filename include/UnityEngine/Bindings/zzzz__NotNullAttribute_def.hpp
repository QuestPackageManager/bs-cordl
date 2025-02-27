#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/NotNullAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NotNullAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class NotNullAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::NotNullAttribute);
// Dependencies System.Attribute
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.NotNullAttribute
class CORDL_TYPE NotNullAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(put = set_Exception)) ::StringW Exception;

  /// @brief Field <Exception>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Exception_k__BackingField, put = __cordl_internal_set__Exception_k__BackingField)) ::StringW _Exception_k__BackingField;

  static inline ::UnityEngine::Bindings::NotNullAttribute* New_ctor(::StringW exception);

  constexpr ::StringW const& __cordl_internal_get__Exception_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Exception_k__BackingField();

  constexpr void __cordl_internal_set__Exception_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x4925868, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW exception);

  /// @brief Method set_Exception, addr 0x4925860, size 0x8, virtual false, abstract: false, final false
  inline void set_Exception(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotNullAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotNullAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotNullAttribute(NotNullAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotNullAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotNullAttribute(NotNullAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18714 };

  /// @brief Field <Exception>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Exception_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Bindings::NotNullAttribute, ____Exception_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::NotNullAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::NotNullAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NotNullAttribute*, "UnityEngine.Bindings", "NotNullAttribute");
