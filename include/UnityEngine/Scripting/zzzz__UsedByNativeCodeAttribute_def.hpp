#pragma once
// IWYU pragma private; include "UnityEngine/Scripting/UsedByNativeCodeAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UsedByNativeCodeAttribute)
// Forward declare root types
namespace UnityEngine::Scripting {
class UsedByNativeCodeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Scripting::UsedByNativeCodeAttribute);
// Dependencies System.Attribute
namespace UnityEngine::Scripting {
// Is value type: false
// CS Name: UnityEngine.Scripting.UsedByNativeCodeAttribute
class CORDL_TYPE UsedByNativeCodeAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(put = set_Name)) ::StringW Name;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  static inline ::UnityEngine::Scripting::UsedByNativeCodeAttribute* New_ctor();

  static inline ::UnityEngine::Scripting::UsedByNativeCodeAttribute* New_ctor(::StringW name);

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x4919264, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x491926c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method set_Name, addr 0x4919294, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UsedByNativeCodeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UsedByNativeCodeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UsedByNativeCodeAttribute(UsedByNativeCodeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UsedByNativeCodeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UsedByNativeCodeAttribute(UsedByNativeCodeAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18727 };

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Scripting::UsedByNativeCodeAttribute, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Scripting::UsedByNativeCodeAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Scripting
NEED_NO_BOX(::UnityEngine::Scripting::UsedByNativeCodeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Scripting::UsedByNativeCodeAttribute*, "UnityEngine.Scripting", "UsedByNativeCodeAttribute");
