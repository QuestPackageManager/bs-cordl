#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyBag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PropertyBag)
namespace Unity::Properties {
template <typename TContainer> class PropertyBag_1;
}
// Forward declare root types
namespace Unity::Properties {
class PropertyBag;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::PropertyBag);
// Dependencies System.Object
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.PropertyBag
class CORDL_TYPE PropertyBag : public ::System::Object {
public:
  // Declarations
  /// @brief Method Register, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContainer> static inline void Register(::Unity::Properties::PropertyBag_1<TContainer>* propertyBag);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag(PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag(PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17469 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::PropertyBag, 0x10>, "Size mismatch!");

} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::PropertyBag*, "Unity.Properties", "PropertyBag");
