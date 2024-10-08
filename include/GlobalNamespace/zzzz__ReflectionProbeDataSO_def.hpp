#pragma once
// IWYU pragma private; include "GlobalNamespace/ReflectionProbeDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(ReflectionProbeDataSO)
namespace UnityEngine {
class Cubemap;
}
// Forward declare root types
namespace GlobalNamespace {
class ReflectionProbeDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ReflectionProbeDataSO);
// Type: ::ReflectionProbeDataSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ReflectionProbeDataSO*
class CORDL_TYPE ReflectionProbeDataSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _reflectionProbeCubemap1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__reflectionProbeCubemap1, put = __cordl_internal_set__reflectionProbeCubemap1)) ::UnityW<::UnityEngine::Cubemap> _reflectionProbeCubemap1;

  /// @brief Field _reflectionProbeCubemap2, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__reflectionProbeCubemap2, put = __cordl_internal_set__reflectionProbeCubemap2)) ::UnityW<::UnityEngine::Cubemap> _reflectionProbeCubemap2;

  __declspec(property(get = get_reflectionProbeCubemap1, put = set_reflectionProbeCubemap1)) ::UnityW<::UnityEngine::Cubemap> reflectionProbeCubemap1;

  __declspec(property(get = get_reflectionProbeCubemap2, put = set_reflectionProbeCubemap2)) ::UnityW<::UnityEngine::Cubemap> reflectionProbeCubemap2;

  static inline ::GlobalNamespace::ReflectionProbeDataSO* New_ctor();

  constexpr ::UnityW<::UnityEngine::Cubemap> const& __cordl_internal_get__reflectionProbeCubemap1() const;

  constexpr ::UnityW<::UnityEngine::Cubemap>& __cordl_internal_get__reflectionProbeCubemap1();

  constexpr ::UnityW<::UnityEngine::Cubemap> const& __cordl_internal_get__reflectionProbeCubemap2() const;

  constexpr ::UnityW<::UnityEngine::Cubemap>& __cordl_internal_get__reflectionProbeCubemap2();

  constexpr void __cordl_internal_set__reflectionProbeCubemap1(::UnityW<::UnityEngine::Cubemap> value);

  constexpr void __cordl_internal_set__reflectionProbeCubemap2(::UnityW<::UnityEngine::Cubemap> value);

  /// @brief Method .ctor, addr 0x3aa4524, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_reflectionProbeCubemap1, addr 0x3aa4504, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Cubemap> get_reflectionProbeCubemap1();

  /// @brief Method get_reflectionProbeCubemap2, addr 0x3aa4514, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Cubemap> get_reflectionProbeCubemap2();

  /// @brief Method set_reflectionProbeCubemap1, addr 0x3aa450c, size 0x8, virtual false, abstract: false, final false
  inline void set_reflectionProbeCubemap1(::UnityEngine::Cubemap* value);

  /// @brief Method set_reflectionProbeCubemap2, addr 0x3aa451c, size 0x8, virtual false, abstract: false, final false
  inline void set_reflectionProbeCubemap2(::UnityEngine::Cubemap* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbeDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionProbeDataSO(ReflectionProbeDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionProbeDataSO(ReflectionProbeDataSO const&) = delete;

  /// @brief Field _reflectionProbeCubemap1, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Cubemap> ____reflectionProbeCubemap1;

  /// @brief Field _reflectionProbeCubemap2, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Cubemap> ____reflectionProbeCubemap2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5040 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ReflectionProbeDataSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ReflectionProbeDataSO, ____reflectionProbeCubemap1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReflectionProbeDataSO, ____reflectionProbeCubemap2) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ReflectionProbeDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ReflectionProbeDataSO*, "", "ReflectionProbeDataSO");
