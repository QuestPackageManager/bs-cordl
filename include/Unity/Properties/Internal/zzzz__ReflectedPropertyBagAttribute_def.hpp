#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/ReflectedPropertyBagAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ReflectedPropertyBagAttribute)
// Forward declare root types
namespace Unity::Properties::Internal {
class ReflectedPropertyBagAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::ReflectedPropertyBagAttribute);
// Type: Unity.Properties.Internal::ReflectedPropertyBagAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Unity.Properties.Internal::ReflectedPropertyBagAttribute*
class CORDL_TYPE ReflectedPropertyBagAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Properties::Internal::ReflectedPropertyBagAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x48b0dd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectedPropertyBagAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectedPropertyBagAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectedPropertyBagAttribute(ReflectedPropertyBagAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectedPropertyBagAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectedPropertyBagAttribute(ReflectedPropertyBagAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17489 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::ReflectedPropertyBagAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::ReflectedPropertyBagAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::ReflectedPropertyBagAttribute*, "Unity.Properties.Internal", "ReflectedPropertyBagAttribute");
