#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/IHasDefault.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHasDefault)
// Forward declare root types
namespace UnityEngine::ProBuilder {
class IHasDefault;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::IHasDefault);
// Dependencies
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.IHasDefault
class CORDL_TYPE IHasDefault {
public:
  // Declarations
  /// @brief Method SetDefaultValues, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetDefaultValues();

  // Ctor Parameters [CppParam { name: "", ty: "IHasDefault", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IHasDefault(IHasDefault const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14245 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::IHasDefault);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::IHasDefault*, "UnityEngine.ProBuilder", "IHasDefault");
