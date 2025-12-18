#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomFogEnvironment.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BloomFogEnvironment)
namespace GlobalNamespace {
class BloomFogEnvironmentParams;
}
namespace GlobalNamespace {
class BloomFogSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomFogEnvironment;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomFogEnvironment);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomFogEnvironment
class CORDL_TYPE BloomFogEnvironment : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _bloomFog, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomFog, put = __cordl_internal_set__bloomFog)) ::UnityW<::GlobalNamespace::BloomFogSO> _bloomFog;

  /// @brief Field _fogParams, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__fogParams, put = __cordl_internal_set__fogParams)) ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> _fogParams;

  __declspec(property(get = get_fogParams)) ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> fogParams;

  static inline ::GlobalNamespace::BloomFogEnvironment* New_ctor();

  /// @brief Method OnEnable, addr 0x56ac0ac, size 0x40, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x56ac10c, size 0xcc, virtual false, abstract: false, final false
  inline void OnValidate();

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& __cordl_internal_get__bloomFog() const;

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& __cordl_internal_get__bloomFog();

  constexpr ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> const& __cordl_internal_get__fogParams() const;

  constexpr ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams>& __cordl_internal_get__fogParams();

  constexpr void __cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO> value);

  constexpr void __cordl_internal_set__fogParams(::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> value);

  /// @brief Method .ctor, addr 0x56ac3a8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_fogParams, addr 0x56ac0a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> get_fogParams();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomFogEnvironment();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomFogEnvironment", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomFogEnvironment(BloomFogEnvironment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomFogEnvironment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomFogEnvironment(BloomFogEnvironment const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19636 };

  /// @brief Field _bloomFog, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomFogSO> ____bloomFog;

  /// @brief Field _fogParams, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> ____fogParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomFogEnvironment, ____bloomFog) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogEnvironment, ____fogParams) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomFogEnvironment, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomFogEnvironment);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogEnvironment*, "", "BloomFogEnvironment");
