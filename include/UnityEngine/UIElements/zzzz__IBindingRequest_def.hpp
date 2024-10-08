#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IBindingRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBindingRequest)
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IBindingRequest;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IBindingRequest);
// Type: UnityEngine.UIElements::IBindingRequest
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IBindingRequest*
class CORDL_TYPE IBindingRequest {
public:
  // Declarations
  /// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Bind(::UnityEngine::UIElements::VisualElement* element);

  // Ctor Parameters [CppParam { name: "", ty: "IBindingRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBindingRequest(IBindingRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBindingRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBindingRequest(IBindingRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5427 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IBindingRequest);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IBindingRequest*, "UnityEngine.UIElements", "IBindingRequest");
