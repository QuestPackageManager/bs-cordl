#pragma once
// IWYU pragma private; include "Unity/Properties/IConstructor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IConstructor)
namespace Unity::Properties {
struct InstantiationKind;
}
// Forward declare root types
namespace Unity::Properties {
class IConstructor;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::IConstructor);
// Dependencies
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.IConstructor
class CORDL_TYPE IConstructor {
public:
  // Declarations
  __declspec(property(get = get_InstantiationKind)) ::Unity::Properties::InstantiationKind InstantiationKind;

  /// @brief Method get_InstantiationKind, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Properties::InstantiationKind get_InstantiationKind();

  // Ctor Parameters [CppParam { name: "", ty: "IConstructor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IConstructor(IConstructor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17476 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::IConstructor);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::IConstructor*, "Unity.Properties", "IConstructor");
