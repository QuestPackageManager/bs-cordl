#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DisplayInfoAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DisplayInfoAttribute)
// Forward declare root types
namespace UnityEngine::Rendering {
class DisplayInfoAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::DisplayInfoAttribute);
// Dependencies System.Attribute
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DisplayInfoAttribute
class CORDL_TYPE DisplayInfoAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field order, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_order, put = __cordl_internal_set_order)) int32_t order;

  static inline ::UnityEngine::Rendering::DisplayInfoAttribute* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr int32_t const& __cordl_internal_get_order() const;

  constexpr int32_t& __cordl_internal_get_order();

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_order(int32_t value);

  /// @brief Method .ctor, addr 0x6537984, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisplayInfoAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisplayInfoAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisplayInfoAttribute(DisplayInfoAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisplayInfoAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisplayInfoAttribute(DisplayInfoAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11862 };

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field order, offset: 0x18, size: 0x4, def value: None
  int32_t ___order;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DisplayInfoAttribute, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DisplayInfoAttribute, ___order) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DisplayInfoAttribute, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::DisplayInfoAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DisplayInfoAttribute*, "UnityEngine.Rendering", "DisplayInfoAttribute");
