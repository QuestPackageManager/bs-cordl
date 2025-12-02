#pragma once
// IWYU pragma private; include "Unity/Properties/IListElementProperty.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IListElementProperty)
// Forward declare root types
namespace Unity::Properties {
class IListElementProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::IListElementProperty);
// Dependencies
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.IListElementProperty
class CORDL_TYPE IListElementProperty {
public:
  // Declarations
  __declspec(property(get = get_Index)) int32_t Index;

  /// @brief Method get_Index, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_Index();

  // Ctor Parameters [CppParam { name: "", ty: "IListElementProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IListElementProperty(IListElementProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19312 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::IListElementProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::IListElementProperty*, "Unity.Properties", "IListElementProperty");
