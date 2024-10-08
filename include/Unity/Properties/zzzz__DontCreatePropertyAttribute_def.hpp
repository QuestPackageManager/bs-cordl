#pragma once
// IWYU pragma private; include "Unity/Properties/DontCreatePropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DontCreatePropertyAttribute)
// Forward declare root types
namespace Unity::Properties {
class DontCreatePropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::DontCreatePropertyAttribute);
// Type: Unity.Properties::DontCreatePropertyAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties {
// Is value type: false
// CS Name: ::Unity.Properties::DontCreatePropertyAttribute*
class CORDL_TYPE DontCreatePropertyAttribute : public ::System::Attribute {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DontCreatePropertyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DontCreatePropertyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DontCreatePropertyAttribute(DontCreatePropertyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DontCreatePropertyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DontCreatePropertyAttribute(DontCreatePropertyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17385 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::DontCreatePropertyAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::DontCreatePropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::DontCreatePropertyAttribute*, "Unity.Properties", "DontCreatePropertyAttribute");
