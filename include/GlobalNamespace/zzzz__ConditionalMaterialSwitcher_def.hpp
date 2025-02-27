#pragma once
// IWYU pragma private; include "GlobalNamespace/ConditionalMaterialSwitcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ConditionalMaterialSwitcher)
namespace GlobalNamespace {
class BoolSO;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class ConditionalMaterialSwitcher;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConditionalMaterialSwitcher);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConditionalMaterialSwitcher
class CORDL_TYPE ConditionalMaterialSwitcher : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _material0, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__material0, put = __cordl_internal_set__material0)) ::UnityW<::UnityEngine::Material> _material0;

  /// @brief Field _material1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__material1, put = __cordl_internal_set__material1)) ::UnityW<::UnityEngine::Material> _material1;

  /// @brief Field _renderer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__renderer, put = __cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer> _renderer;

  /// @brief Field _value, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) ::UnityW<::GlobalNamespace::BoolSO> _value;

  /// @brief Method Awake, addr 0x3b3c3c8, size 0x78, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::ConditionalMaterialSwitcher* New_ctor();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material0() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material0();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material1() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material1();

  constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

  constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer();

  constexpr ::UnityW<::GlobalNamespace::BoolSO> const& __cordl_internal_get__value() const;

  constexpr ::UnityW<::GlobalNamespace::BoolSO>& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__material0(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__material1(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer> value);

  constexpr void __cordl_internal_set__value(::UnityW<::GlobalNamespace::BoolSO> value);

  /// @brief Method .ctor, addr 0x3b3c440, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionalMaterialSwitcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConditionalMaterialSwitcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConditionalMaterialSwitcher(ConditionalMaterialSwitcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConditionalMaterialSwitcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConditionalMaterialSwitcher(ConditionalMaterialSwitcher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5166 };

  /// @brief Field _material0, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____material0;

  /// @brief Field _material1, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____material1;

  /// @brief Field _value, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoolSO> ____value;

  /// @brief Field _renderer, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Renderer> ____renderer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConditionalMaterialSwitcher, ____material0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalMaterialSwitcher, ____material1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalMaterialSwitcher, ____value) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalMaterialSwitcher, ____renderer) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConditionalMaterialSwitcher, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConditionalMaterialSwitcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConditionalMaterialSwitcher*, "", "ConditionalMaterialSwitcher");
