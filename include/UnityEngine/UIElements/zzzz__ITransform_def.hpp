#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ITransform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITransform)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ITransform;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ITransform);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ITransform
class CORDL_TYPE ITransform {
public:
  // Declarations
  __declspec(property(get = get_position, put = set_position)) ::UnityEngine::Vector3 position;

  __declspec(property(get = get_scale)) ::UnityEngine::Vector3 scale;

  /// @brief Method get_position, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_scale, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_scale();

  /// @brief Method set_position, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  // Ctor Parameters [CppParam { name: "", ty: "ITransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITransform(ITransform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4612 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ITransform);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ITransform*, "UnityEngine.UIElements", "ITransform");
