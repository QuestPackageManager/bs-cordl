#pragma once
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
// Type: UnityEngine.UIElements::IBinding
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6342))
// CS Name: ::UnityEngine.UIElements::IBinding*
class CORDL_TYPE IBinding {
public:
  // Declarations
  /// @brief Method PreUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void PreUpdate();

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Update();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Release();

  // Ctor Parameters [CppParam { name: "", ty: "IBinding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBinding(IBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBinding(IBinding const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IBinding);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IBinding*, "UnityEngine.UIElements", "IBinding");
