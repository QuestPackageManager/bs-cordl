#pragma once
// IWYU pragma private; include "Unity/Properties/ISetPropertyBagAccept_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISetPropertyBagAccept_1)
namespace Unity::Properties {
class ISetPropertyBagVisitor;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TContainer> class ISetPropertyBagAccept_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::ISetPropertyBagAccept_1);
// Dependencies
namespace Unity::Properties {
// cpp template
template <typename TContainer>
// Is value type: false
// CS Name: Unity.Properties.ISetPropertyBagAccept`1<TContainer>
class CORDL_TYPE ISetPropertyBagAccept_1 {
public:
  // Declarations
  /// @brief Method Accept, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Accept(::Unity::Properties::ISetPropertyBagVisitor* visitor, ::ByRef<TContainer> container);

  // Ctor Parameters [CppParam { name: "", ty: "ISetPropertyBagAccept_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISetPropertyBagAccept_1(ISetPropertyBagAccept_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19394 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::ISetPropertyBagAccept_1, "Unity.Properties", "ISetPropertyBagAccept`1");
