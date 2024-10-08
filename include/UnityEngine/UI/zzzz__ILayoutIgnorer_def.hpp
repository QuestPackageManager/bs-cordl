#pragma once
// IWYU pragma private; include "UnityEngine/UI/ILayoutIgnorer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILayoutIgnorer)
// Forward declare root types
namespace UnityEngine::UI {
class ILayoutIgnorer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::ILayoutIgnorer);
// Type: UnityEngine.UI::ILayoutIgnorer
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::ILayoutIgnorer*
class CORDL_TYPE ILayoutIgnorer {
public:
  // Declarations
  __declspec(property(get = get_ignoreLayout)) bool ignoreLayout;

  /// @brief Method get_ignoreLayout, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_ignoreLayout();

  // Ctor Parameters [CppParam { name: "", ty: "ILayoutIgnorer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILayoutIgnorer(ILayoutIgnorer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILayoutIgnorer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILayoutIgnorer(ILayoutIgnorer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15056 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::ILayoutIgnorer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ILayoutIgnorer*, "UnityEngine.UI", "ILayoutIgnorer");
