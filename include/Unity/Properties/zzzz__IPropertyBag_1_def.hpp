#pragma once
// IWYU pragma private; include "Unity/Properties/IPropertyBag_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPropertyBag_1)
namespace Unity::Properties {
class IPropertyBagVisitor;
}
namespace Unity::Properties {
class IPropertyBag;
}
namespace Unity::Properties {
template <typename TContainer> struct PropertyCollection_1;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TContainer> class IPropertyBag_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::IPropertyBag_1);
// Dependencies
namespace Unity::Properties {
// cpp template
template <typename TContainer>
// Is value type: false
// CS Name: Unity.Properties.IPropertyBag`1<TContainer>
class CORDL_TYPE IPropertyBag_1 {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Properties::IPropertyBag"
  constexpr operator ::Unity::Properties::IPropertyBag*() noexcept;

  /// @brief Method Accept, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Accept(::Unity::Properties::IPropertyBagVisitor* visitor, ::ByRef<TContainer> container);

  /// @brief Method GetProperties, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Properties::PropertyCollection_1<TContainer> GetProperties();

  /// @brief Method GetProperties, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Properties::PropertyCollection_1<TContainer> GetProperties(::ByRef<TContainer> container);

  /// @brief Convert to "::Unity::Properties::IPropertyBag"
  constexpr ::Unity::Properties::IPropertyBag* i___Unity__Properties__IPropertyBag() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IPropertyBag_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPropertyBag_1(IPropertyBag_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19364 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::IPropertyBag_1, "Unity.Properties", "IPropertyBag`1");
