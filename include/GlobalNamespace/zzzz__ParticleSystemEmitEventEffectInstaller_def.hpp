#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemEmitEventEffectInstaller)
namespace GlobalNamespace {
class ParticleSystemEventController;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleSystemEmitEventEffectInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ParticleSystemEmitEventEffectInstaller);
// Type: ::ParticleSystemEmitEventEffectInstaller
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10280))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4318))
// CS Name: ::ParticleSystemEmitEventEffectInstaller*
class CORDL_TYPE ParticleSystemEmitEventEffectInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _particleSystemEventControllerPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystemEventControllerPrefab,
                      put = __cordl_internal_set__particleSystemEventControllerPrefab))::UnityW<::GlobalNamespace::ParticleSystemEventController> _particleSystemEventControllerPrefab;

  /// @brief Field _particleSystemEventControllerInitialSize, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__particleSystemEventControllerInitialSize,
                      put = __cordl_internal_set__particleSystemEventControllerInitialSize)) int32_t _particleSystemEventControllerInitialSize;

  constexpr ::UnityW<::GlobalNamespace::ParticleSystemEventController>& __cordl_internal_get__particleSystemEventControllerPrefab();

  constexpr ::UnityW<::GlobalNamespace::ParticleSystemEventController> const& __cordl_internal_get__particleSystemEventControllerPrefab() const;

  constexpr void __cordl_internal_set__particleSystemEventControllerPrefab(::UnityW<::GlobalNamespace::ParticleSystemEventController> value);

  constexpr int32_t& __cordl_internal_get__particleSystemEventControllerInitialSize();

  constexpr int32_t const& __cordl_internal_get__particleSystemEventControllerInitialSize() const;

  constexpr void __cordl_internal_set__particleSystemEventControllerInitialSize(int32_t value);

  /// @brief Method InstallBindings, addr 0x2370348, size 0xa8, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::ParticleSystemEmitEventEffectInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x23703f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEmitEventEffectInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystemEmitEventEffectInstaller(ParticleSystemEmitEventEffectInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEmitEventEffectInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystemEmitEventEffectInstaller(ParticleSystemEmitEventEffectInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemEmitEventEffectInstaller();

public:
  /// @brief Field _particleSystemEventControllerPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ParticleSystemEventController> ____particleSystemEventControllerPrefab;

  /// @brief Field _particleSystemEventControllerInitialSize, offset: 0x28, size: 0x4, def value: None
  int32_t ____particleSystemEventControllerInitialSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffectInstaller, ____particleSystemEventControllerPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffectInstaller, ____particleSystemEventControllerInitialSize) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ParticleSystemEmitEventEffectInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*, "", "ParticleSystemEmitEventEffectInstaller");
