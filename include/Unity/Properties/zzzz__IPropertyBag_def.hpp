#pragma once
// IWYU pragma private; include "Unity/Properties/IPropertyBag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPropertyBag)
namespace Unity::Properties {
class ITypeVisitor;
}
// Forward declare root types
namespace Unity::Properties {
class IPropertyBag;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::IPropertyBag);
// Type: Unity.Properties::IPropertyBag
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties {
// Is value type: false
// CS Name: ::Unity.Properties::IPropertyBag*
class CORDL_TYPE IPropertyBag {
public:
  // Declarations
  /// @brief Method Accept, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Accept(::Unity::Properties::ITypeVisitor* visitor);

  // Ctor Parameters [CppParam { name: "", ty: "IPropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPropertyBag(IPropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPropertyBag(IPropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17411 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::IPropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::IPropertyBag*, "Unity.Properties", "IPropertyBag");
