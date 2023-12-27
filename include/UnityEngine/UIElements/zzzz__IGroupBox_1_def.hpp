#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGroupBox_1)
namespace UnityEngine::UIElements {
class IGroupBox;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class IGroupBox_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::IGroupBox_1);
// Type: UnityEngine.UIElements::IGroupBox`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6938))
// CS Name: ::UnityEngine.UIElements::IGroupBox`1<T>*
class CORDL_TYPE IGroupBox_1 {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::UIElements::IGroupBox"
  constexpr operator ::UnityEngine::UIElements::IGroupBox*() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IGroupBox_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IGroupBox_1(IGroupBox_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IGroupBox_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGroupBox_1(IGroupBox_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::IGroupBox_1, "UnityEngine.UIElements", "IGroupBox`1");
