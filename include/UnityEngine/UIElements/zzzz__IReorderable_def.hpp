#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IReorderable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IReorderable)
// Forward declare root types
namespace UnityEngine::UIElements {
class IReorderable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IReorderable);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IReorderable
class CORDL_TYPE IReorderable {
public:
  // Declarations
  __declspec(property(get = get_enableReordering, put = set_enableReordering)) bool enableReordering;

  /// @brief Method get_enableReordering, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_enableReordering();

  /// @brief Method set_enableReordering, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_enableReordering(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "IReorderable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReorderable(IReorderable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4405 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IReorderable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IReorderable*, "UnityEngine.UIElements", "IReorderable");
