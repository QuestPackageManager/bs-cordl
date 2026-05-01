#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IDataSourceViewHashProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IDataSourceViewHashProvider)
// Forward declare root types
namespace UnityEngine::UIElements {
class IDataSourceViewHashProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IDataSourceViewHashProvider);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IDataSourceViewHashProvider
class CORDL_TYPE IDataSourceViewHashProvider {
public:
  // Declarations
  /// @brief Method GetViewHashCode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int64_t GetViewHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "IDataSourceViewHashProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDataSourceViewHashProvider(IDataSourceViewHashProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4058 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IDataSourceViewHashProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IDataSourceViewHashProvider*, "UnityEngine.UIElements", "IDataSourceViewHashProvider");
