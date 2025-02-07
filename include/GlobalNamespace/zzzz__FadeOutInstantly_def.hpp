#pragma once
// IWYU pragma private; include "GlobalNamespace/FadeOutInstantly.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FadeOutInstantly)
namespace GlobalNamespace {
class FadeInOutController;
}
// Forward declare root types
namespace GlobalNamespace {
class FadeOutInstantly;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FadeOutInstantly);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FadeOutInstantly
class CORDL_TYPE FadeOutInstantly : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _fadeInOut, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeInOut, put = __cordl_internal_set__fadeInOut)) ::UnityW<::GlobalNamespace::FadeInOutController> _fadeInOut;

  static inline ::GlobalNamespace::FadeOutInstantly* New_ctor();

  /// @brief Method Start, addr 0x4086844, size 0x1c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController> const& __cordl_internal_get__fadeInOut() const;

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController>& __cordl_internal_get__fadeInOut();

  constexpr void __cordl_internal_set__fadeInOut(::UnityW<::GlobalNamespace::FadeInOutController> value);

  /// @brief Method .ctor, addr 0x4086860, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FadeOutInstantly();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FadeOutInstantly", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FadeOutInstantly(FadeOutInstantly&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FadeOutInstantly", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FadeOutInstantly(FadeOutInstantly const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17895 };

  /// @brief Field _fadeInOut, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FadeInOutController> ____fadeInOut;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FadeOutInstantly, ____fadeInOut) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FadeOutInstantly, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FadeOutInstantly);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FadeOutInstantly*, "", "FadeOutInstantly");
