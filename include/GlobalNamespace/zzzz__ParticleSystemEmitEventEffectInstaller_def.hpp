#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleSystemEmitEventEffectInstaller.hpp"
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
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ParticleSystemEmitEventEffectInstaller*
class CORDL_TYPE ParticleSystemEmitEventEffectInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _particleSystemEventControllerInitialSize, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__particleSystemEventControllerInitialSize,
                      put = __cordl_internal_set__particleSystemEventControllerInitialSize)) int32_t _particleSystemEventControllerInitialSize;

  /// @brief Field _particleSystemEventControllerPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystemEventControllerPrefab,
                      put = __cordl_internal_set__particleSystemEventControllerPrefab)) ::UnityW<::GlobalNamespace::ParticleSystemEventController>
      _particleSystemEventControllerPrefab;

  /// @brief Method InstallBindings, addr 0x3b1d6b8, size 0xa8, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::ParticleSystemEmitEventEffectInstaller* New_ctor();

  constexpr int32_t const& __cordl_internal_get__particleSystemEventControllerInitialSize() const;

  constexpr int32_t& __cordl_internal_get__particleSystemEventControllerInitialSize();

  constexpr ::UnityW<::GlobalNamespace::ParticleSystemEventController> const& __cordl_internal_get__particleSystemEventControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::ParticleSystemEventController>& __cordl_internal_get__particleSystemEventControllerPrefab();

  constexpr void __cordl_internal_set__particleSystemEventControllerInitialSize(int32_t value);

  constexpr void __cordl_internal_set__particleSystemEventControllerPrefab(::UnityW<::GlobalNamespace::ParticleSystemEventController> value);

  /// @brief Method .ctor, addr 0x3b1d760, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemEmitEventEffectInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEmitEventEffectInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystemEmitEventEffectInstaller(ParticleSystemEmitEventEffectInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEmitEventEffectInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystemEmitEventEffectInstaller(ParticleSystemEmitEventEffectInstaller const&) = delete;

  /// @brief Field _particleSystemEventControllerPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ParticleSystemEventController> ____particleSystemEventControllerPrefab;

  /// @brief Field _particleSystemEventControllerInitialSize, offset: 0x30, size: 0x4, def value: None
  int32_t ____particleSystemEventControllerInitialSize;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4315 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffectInstaller, ____particleSystemEventControllerPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffectInstaller, ____particleSystemEventControllerInitialSize) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ParticleSystemEmitEventEffectInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*, "", "ParticleSystemEmitEventEffectInstaller");
