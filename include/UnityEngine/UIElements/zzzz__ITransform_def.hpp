#pragma once
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
// Type: UnityEngine.UIElements::ITransform
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6866))
// CS Name: ::UnityEngine.UIElements::ITransform*
class CORDL_TYPE ITransform {
public:
  // Declarations
  __declspec(property(get = get_position, put = set_position))::UnityEngine::Vector3 position;

  __declspec(property(get = get_scale))::UnityEngine::Vector3 scale;

  /// @brief Method get_position addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method set_position addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method get_scale addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::Vector3 get_scale();

  // Ctor Parameters [CppParam { name: "", ty: "ITransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITransform(ITransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITransform(ITransform const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ITransform);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ITransform*, "UnityEngine.UIElements", "ITransform");
