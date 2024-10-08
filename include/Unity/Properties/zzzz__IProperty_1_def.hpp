#pragma once
// IWYU pragma private; include "Unity/Properties/IProperty_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IProperty_1)
namespace Unity::Properties {
class IProperty;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TContainer> class IProperty_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::IProperty_1);
// Type: Unity.Properties::IProperty`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties {
// cpp template
template <typename TContainer>
// Is value type: false
// CS Name: ::Unity.Properties::IProperty`1<TContainer>*
class CORDL_TYPE IProperty_1 {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Properties::IProperty"
  constexpr operator ::Unity::Properties::IProperty*() noexcept;

  /// @brief Convert to "::Unity::Properties::IProperty"
  constexpr ::Unity::Properties::IProperty* i___Unity__Properties__IProperty() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IProperty_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IProperty_1(IProperty_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IProperty_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IProperty_1(IProperty_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17390 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::IProperty_1, "Unity.Properties", "IProperty`1");
