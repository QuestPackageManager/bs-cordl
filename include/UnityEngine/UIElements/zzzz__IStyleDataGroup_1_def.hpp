#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IStyleDataGroup_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IStyleDataGroup_1)
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class IStyleDataGroup_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::IStyleDataGroup_1);
// Dependencies
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.IStyleDataGroup`1<T>
class CORDL_TYPE IStyleDataGroup_1 {
public:
  // Declarations
  /// @brief Method Copy, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T Copy();

  /// @brief Method CopyFrom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CopyFrom(::ByRef<T> other);

  // Ctor Parameters [CppParam { name: "", ty: "IStyleDataGroup_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStyleDataGroup_1(IStyleDataGroup_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6080 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::IStyleDataGroup_1, "UnityEngine.UIElements", "IStyleDataGroup`1");
