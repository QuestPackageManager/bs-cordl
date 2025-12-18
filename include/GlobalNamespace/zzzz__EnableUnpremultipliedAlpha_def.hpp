#pragma once
// IWYU pragma private; include "GlobalNamespace/EnableUnpremultipliedAlpha.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EnableUnpremultipliedAlpha)
// Forward declare root types
namespace GlobalNamespace {
class EnableUnpremultipliedAlpha;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnableUnpremultipliedAlpha);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnableUnpremultipliedAlpha
class CORDL_TYPE EnableUnpremultipliedAlpha : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::EnableUnpremultipliedAlpha* New_ctor();

  /// @brief Method Start, addr 0x588216c, size 0x58, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method .ctor, addr 0x58821c4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnableUnpremultipliedAlpha();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnableUnpremultipliedAlpha", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnableUnpremultipliedAlpha(EnableUnpremultipliedAlpha&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnableUnpremultipliedAlpha", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnableUnpremultipliedAlpha(EnableUnpremultipliedAlpha const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21146 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnableUnpremultipliedAlpha, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnableUnpremultipliedAlpha);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnableUnpremultipliedAlpha*, "", "EnableUnpremultipliedAlpha");
