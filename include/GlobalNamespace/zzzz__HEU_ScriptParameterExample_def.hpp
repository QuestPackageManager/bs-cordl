#pragma once
// IWYU pragma private; include "GlobalNamespace/HEU_ScriptParameterExample.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HEU_ScriptParameterExample)
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class HEU_ScriptParameterExample;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HEU_ScriptParameterExample);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HEU_ScriptParameterExample
class CORDL_TYPE HEU_ScriptParameterExample : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _evergreenAsset, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__evergreenAsset, put = __cordl_internal_set__evergreenAsset)) ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> _evergreenAsset;

  /// @brief Field _evergreenGameObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__evergreenGameObject, put = __cordl_internal_set__evergreenGameObject)) ::UnityW<::UnityEngine::GameObject> _evergreenGameObject;

  /// @brief Field _scale, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__scale, put = __cordl_internal_set__scale)) float_t _scale;

  /// @brief Field _updateRate, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__updateRate, put = __cordl_internal_set__updateRate)) float_t _updateRate;

  static inline ::GlobalNamespace::HEU_ScriptParameterExample* New_ctor();

  /// @brief Method Start, addr 0x3a134dc, size 0x270, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UpdateGravity, addr 0x3a1374c, size 0xe4, virtual false, abstract: false, final false
  inline void UpdateGravity();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> const& __cordl_internal_get__evergreenAsset() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>& __cordl_internal_get__evergreenAsset();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__evergreenGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__evergreenGameObject();

  constexpr float_t const& __cordl_internal_get__scale() const;

  constexpr float_t& __cordl_internal_get__scale();

  constexpr float_t const& __cordl_internal_get__updateRate() const;

  constexpr float_t& __cordl_internal_get__updateRate();

  constexpr void __cordl_internal_set__evergreenAsset(::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> value);

  constexpr void __cordl_internal_set__evergreenGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__scale(float_t value);

  constexpr void __cordl_internal_set__updateRate(float_t value);

  /// @brief Method .ctor, addr 0x3a13830, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ScriptParameterExample();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_ScriptParameterExample", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_ScriptParameterExample(HEU_ScriptParameterExample&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ScriptParameterExample", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_ScriptParameterExample(HEU_ScriptParameterExample const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11577 };

  /// @brief Field _evergreenGameObject, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____evergreenGameObject;

  /// @brief Field _evergreenAsset, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> ____evergreenAsset;

  /// @brief Field _updateRate, offset: 0x30, size: 0x4, def value: None
  float_t ____updateRate;

  /// @brief Field _scale, offset: 0x34, size: 0x4, def value: None
  float_t ____scale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HEU_ScriptParameterExample, ____evergreenGameObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HEU_ScriptParameterExample, ____evergreenAsset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HEU_ScriptParameterExample, ____updateRate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HEU_ScriptParameterExample, ____scale) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HEU_ScriptParameterExample, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HEU_ScriptParameterExample);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HEU_ScriptParameterExample*, "", "HEU_ScriptParameterExample");
