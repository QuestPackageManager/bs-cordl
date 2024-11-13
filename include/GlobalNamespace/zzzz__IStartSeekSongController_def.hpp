#pragma once
// IWYU pragma private; include "GlobalNamespace/IStartSeekSongController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IStartSeekSongController)
namespace UnityEngine {
class WaitUntil;
}
// Forward declare root types
namespace GlobalNamespace {
class IStartSeekSongController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IStartSeekSongController);
// Type: ::IStartSeekSongController
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IStartSeekSongController*
class CORDL_TYPE IStartSeekSongController {
public:
  // Declarations
  __declspec(property(get = get_songFailedToLoad)) bool songFailedToLoad;

  __declspec(property(get = get_waitUntilIsReadyToStartTheSong)) ::UnityEngine::WaitUntil* waitUntilIsReadyToStartTheSong;

  /// @brief Method SeekTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SeekTo(float_t songTime);

  /// @brief Method StartSong, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void StartSong(float_t offsetTime);

  /// @brief Method get_songFailedToLoad, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_songFailedToLoad();

  /// @brief Method get_waitUntilIsReadyToStartTheSong, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::WaitUntil* get_waitUntilIsReadyToStartTheSong();

  // Ctor Parameters [CppParam { name: "", ty: "IStartSeekSongController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IStartSeekSongController(IStartSeekSongController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IStartSeekSongController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStartSeekSongController(IStartSeekSongController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4679 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IStartSeekSongController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IStartSeekSongController*, "", "IStartSeekSongController");
