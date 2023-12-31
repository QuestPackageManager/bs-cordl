#pragma once
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
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5867))
// CS Name: ::ReflectionProbeDataSO*
class CORDL_TYPE ReflectionProbeDataSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _reflectionProbeCubemap1, offset 0x18, size 0x8
  __declspec(property(get = __get__reflectionProbeCubemap1, put = __set__reflectionProbeCubemap1))::UnityEngine::Cubemap* _reflectionProbeCubemap1;

  /// @brief Field _reflectionProbeCubemap2, offset 0x20, size 0x8
  __declspec(property(get = __get__reflectionProbeCubemap2, put = __set__reflectionProbeCubemap2))::UnityEngine::Cubemap* _reflectionProbeCubemap2;

  __declspec(property(get = get_reflectionProbeCubemap1, put = set_reflectionProbeCubemap1))::UnityEngine::Cubemap* reflectionProbeCubemap1;

  __declspec(property(get = get_reflectionProbeCubemap2, put = set_reflectionProbeCubemap2))::UnityEngine::Cubemap* reflectionProbeCubemap2;

  constexpr ::UnityEngine::Cubemap*& __get__reflectionProbeCubemap1();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Cubemap*> const& __get__reflectionProbeCubemap1() const;

  constexpr void __set__reflectionProbeCubemap1(::UnityEngine::Cubemap* value);

  constexpr ::UnityEngine::Cubemap*& __get__reflectionProbeCubemap2();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Cubemap*> const& __get__reflectionProbeCubemap2() const;

  constexpr void __set__reflectionProbeCubemap2(::UnityEngine::Cubemap* value);

  /// @brief Method get_reflectionProbeCubemap1, addr 0x22f8488, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Cubemap* get_reflectionProbeCubemap1();

  /// @brief Method set_reflectionProbeCubemap1, addr 0x22f8490, size 0x8, virtual false, abstract: false, final false
  inline void set_reflectionProbeCubemap1(::UnityEngine::Cubemap* value);

  /// @brief Method get_reflectionProbeCubemap2, addr 0x22f8498, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Cubemap* get_reflectionProbeCubemap2();

  /// @brief Method set_reflectionProbeCubemap2, addr 0x22f84a0, size 0x8, virtual false, abstract: false, final false
  inline void set_reflectionProbeCubemap2(::UnityEngine::Cubemap* value);

  static inline ::GlobalNamespace::ReflectionProbeDataSO* New_ctor();

  /// @brief Method .ctor, addr 0x22f84a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionProbeDataSO(ReflectionProbeDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionProbeDataSO(ReflectionProbeDataSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbeDataSO();

public:
  /// @brief Field _reflectionProbeCubemap1, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Cubemap* ____reflectionProbeCubemap1;

  /// @brief Field _reflectionProbeCubemap2, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Cubemap* ____reflectionProbeCubemap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ReflectionProbeDataSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ReflectionProbeDataSO, ____reflectionProbeCubemap1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReflectionProbeDataSO, ____reflectionProbeCubemap2) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ReflectionProbeDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ReflectionProbeDataSO*, "", "ReflectionProbeDataSO");
