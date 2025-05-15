#pragma once
// IWYU pragma private; include "UnityEngine/Scripting/APIUpdating/MovedFromAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "UnityEngine/Scripting/APIUpdating/zzzz__MovedFromAttributeData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MovedFromAttribute)
// Forward declare root types
namespace UnityEngine::Scripting::APIUpdating {
class MovedFromAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Scripting::APIUpdating::MovedFromAttribute);
// Dependencies System.Attribute, UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
namespace UnityEngine::Scripting::APIUpdating {
// Is value type: false
// CS Name: UnityEngine.Scripting.APIUpdating.MovedFromAttribute
class CORDL_TYPE MovedFromAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x20
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData data;

  static inline ::UnityEngine::Scripting::APIUpdating::MovedFromAttribute* New_ctor(bool autoUpdateAPI, ::StringW sourceNamespace, ::StringW sourceAssembly, ::StringW sourceClassName);

  static inline ::UnityEngine::Scripting::APIUpdating::MovedFromAttribute* New_ctor(::StringW sourceNamespace);

  constexpr ::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData const& __cordl_internal_get_data() const;

  constexpr ::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_data(::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData value);

  /// @brief Method .ctor, addr 0x48c059c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(bool autoUpdateAPI, ::StringW sourceNamespace, ::StringW sourceAssembly, ::StringW sourceClassName);

  /// @brief Method .ctor, addr 0x48c0608, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW sourceNamespace);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MovedFromAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MovedFromAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MovedFromAttribute(MovedFromAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MovedFromAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MovedFromAttribute(MovedFromAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11006 };

  /// @brief Field data, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Scripting::APIUpdating::MovedFromAttribute, ___data) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Scripting::APIUpdating::MovedFromAttribute, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Scripting::APIUpdating
NEED_NO_BOX(::UnityEngine::Scripting::APIUpdating::MovedFromAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Scripting::APIUpdating::MovedFromAttribute*, "UnityEngine.Scripting.APIUpdating", "MovedFromAttribute");
