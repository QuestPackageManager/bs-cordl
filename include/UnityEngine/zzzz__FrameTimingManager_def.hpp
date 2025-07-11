#pragma once
// IWYU pragma private; include "UnityEngine/FrameTimingManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FrameTimingManager)
namespace UnityEngine {
struct FrameTiming;
}
// Forward declare root types
namespace UnityEngine {
class FrameTimingManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::FrameTimingManager);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.FrameTimingManager
class CORDL_TYPE FrameTimingManager : public ::System::Object {
public:
  // Declarations
  /// @brief Method CaptureFrameTimings, addr 0x48770d0, size 0x28, virtual false, abstract: false, final false
  static inline void CaptureFrameTimings();

  /// @brief Method GetLatestTimings, addr 0x48770f8, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t GetLatestTimings(uint32_t numFrames, ::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*> timings);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FrameTimingManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FrameTimingManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FrameTimingManager(FrameTimingManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FrameTimingManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FrameTimingManager(FrameTimingManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10724 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::FrameTimingManager, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::FrameTimingManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::FrameTimingManager*, "UnityEngine", "FrameTimingManager");
