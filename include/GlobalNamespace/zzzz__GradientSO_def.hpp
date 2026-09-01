#pragma once
// IWYU pragma private; include "GlobalNamespace\GradientSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(GradientSO)
namespace UnityEngine {
class Gradient;
}
// Forward declare root types
namespace GlobalNamespace {
class GradientSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GradientSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GradientSO*, "", "GradientSO");
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: GradientSO
class CORDL_TYPE GradientSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _gradient, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__gradient, put = __cordl_internal_set__gradient)) ::UnityEngine::Gradient* _gradient;

  __declspec(property(get = get_gradient)) ::UnityEngine::Gradient* gradient;

  static inline ::GlobalNamespace::GradientSO* New_ctor();

  /// @brief Method SetGradient, addr 0x36f8710, size 0x8, virtual false, abstract: false, final false
  inline void SetGradient(::UnityEngine::Gradient* gradient);

  constexpr ::UnityEngine::Gradient* const& __cordl_internal_get__gradient() const;

  constexpr ::UnityEngine::Gradient*& __cordl_internal_get__gradient();

  constexpr void __cordl_internal_set__gradient(::UnityEngine::Gradient* value);

  /// @brief Method .ctor, addr 0x36f8718, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_gradient, addr 0x36f8708, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Gradient* get_gradient();

  /// @brief Method op_Implicit, addr 0x36f7d90, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Gradient* op_Implicit___UnityEngine__Gradient_(::GlobalNamespace::GradientSO* gradientSo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GradientSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GradientSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GradientSO(GradientSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GradientSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GradientSO(GradientSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23157 };

  /// @brief Field _gradient, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Gradient* ____gradient;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GradientSO, ____gradient) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GradientSO) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
