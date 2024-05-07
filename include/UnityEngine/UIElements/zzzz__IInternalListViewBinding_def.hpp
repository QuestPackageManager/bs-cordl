#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IInternalListViewBinding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInternalListViewBinding)
// Forward declare root types
namespace UnityEngine::UIElements {
class IInternalListViewBinding;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IInternalListViewBinding);
// Type: UnityEngine.UIElements::IInternalListViewBinding
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IInternalListViewBinding*
class CORDL_TYPE IInternalListViewBinding {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IInternalListViewBinding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInternalListViewBinding(IInternalListViewBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInternalListViewBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInternalListViewBinding(IInternalListViewBinding const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IInternalListViewBinding);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IInternalListViewBinding*, "UnityEngine.UIElements", "IInternalListViewBinding");
