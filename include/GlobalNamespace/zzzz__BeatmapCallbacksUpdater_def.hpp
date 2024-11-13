#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCallbacksUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BeatmapCallbacksUpdater)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCallbacksUpdater;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCallbacksUpdater);
// Type: ::BeatmapCallbacksUpdater
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapCallbacksUpdater*
class CORDL_TYPE BeatmapCallbacksUpdater : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioTimeSource, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _beatmapCallbacksController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Method LateUpdate, addr 0x3a83914, size 0x124, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::BeatmapCallbacksUpdater* New_ctor();

  /// @brief Method Pause, addr 0x3a83a38, size 0xc, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method Resume, addr 0x3a83a44, size 0xc, virtual false, abstract: false, final false
  inline void Resume();

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __cordl_internal_get__audioTimeSource() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  /// @brief Method .ctor, addr 0x3a83a50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCallbacksUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCallbacksUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCallbacksUpdater(BeatmapCallbacksUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCallbacksUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCallbacksUpdater(BeatmapCallbacksUpdater const&) = delete;

  /// @brief Field _beatmapCallbacksController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _audioTimeSource, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4049 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCallbacksUpdater, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksUpdater, ____beatmapCallbacksController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCallbacksUpdater, ____audioTimeSource) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCallbacksUpdater);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCallbacksUpdater*, "", "BeatmapCallbacksUpdater");
