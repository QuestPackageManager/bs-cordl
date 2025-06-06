#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IBinding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBinding)
// Forward declare root types
namespace UnityEngine::UIElements {
class IBinding;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IBinding);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IBinding
class CORDL_TYPE IBinding {
public:
  // Declarations
  /// @brief Method PreUpdate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void PreUpdate();

  /// @brief Method Release, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Release();

  /// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Update();

  // Ctor Parameters [CppParam { name: "", ty: "IBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBinding(IBinding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5522 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IBinding);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IBinding*, "UnityEngine.UIElements", "IBinding");
