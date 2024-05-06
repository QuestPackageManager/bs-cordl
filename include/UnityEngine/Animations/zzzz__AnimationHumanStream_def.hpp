#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationHumanStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationHumanStream)
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationHumanStream;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationHumanStream);
// Type: UnityEngine.Animations::AnimationHumanStream
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: ::UnityEngine.Animations::AnimationHumanStream
struct CORDL_TYPE AnimationHumanStream {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationHumanStream();

  // Ctor Parameters [CppParam { name: "stream", ty: "void*", modifiers: "", def_value: None }]
  constexpr AnimationHumanStream(void* stream) noexcept;

  /// @brief Field stream, offset: 0x0, size: 0x8, def value: None
  void* stream;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationHumanStream, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Animations::AnimationHumanStream, stream) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationHumanStream, "UnityEngine.Animations", "AnimationHumanStream");
