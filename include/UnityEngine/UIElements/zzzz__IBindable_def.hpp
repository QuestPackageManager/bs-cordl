#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IBindable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IBindable)
namespace UnityEngine::UIElements {
class IBinding;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IBindable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IBindable);
// Type: UnityEngine.UIElements::IBindable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IBindable*
class CORDL_TYPE IBindable {
public:
  // Declarations
  __declspec(property(get = get_binding)) ::UnityEngine::UIElements::IBinding* binding;

  __declspec(property(put = set_bindingPath)) ::StringW bindingPath;

  /// @brief Method get_binding, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::IBinding* get_binding();

  /// @brief Method set_bindingPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_bindingPath(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "IBindable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBindable(IBindable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBindable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBindable(IBindable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5492 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IBindable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IBindable*, "UnityEngine.UIElements", "IBindable");
