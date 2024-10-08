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
// Type: UnityEngine.UIElements::IReorderable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IReorderable*
class CORDL_TYPE IReorderable {
public:
  // Declarations
  __declspec(property(get = get_enableReordering, put = set_enableReordering)) bool enableReordering;

  /// @brief Method get_enableReordering, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_enableReordering();

  /// @brief Method set_enableReordering, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_enableReordering(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "IReorderable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IReorderable(IReorderable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IReorderable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReorderable(IReorderable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5726 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IReorderable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IReorderable*, "UnityEngine.UIElements", "IReorderable");
