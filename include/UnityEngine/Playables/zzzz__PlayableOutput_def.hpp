#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PlayableOutput)
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::Playables {
class IPlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayableOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::PlayableOutput);
// Type: UnityEngine.Playables::PlayableOutput
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: ::UnityEngine.Playables::PlayableOutput
struct CORDL_TYPE PlayableOutput {
public:
  // Declarations
  /// @brief Field m_NullPlayableOutput, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_m_NullPlayableOutput, put = setStaticF_m_NullPlayableOutput))::UnityEngine::Playables::PlayableOutput m_NullPlayableOutput;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Playables::PlayableOutput>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Playables::PlayableOutput>*();

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
  constexpr operator ::UnityEngine::Playables::IPlayableOutput*();

  /// @brief Method Equals, addr 0x2e48540, size 0x74, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Playables::PlayableOutput other);

  /// @brief Method GetHandle, addr 0x2e48534, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableOutputHandle GetHandle();

  /// @brief Method IsPlayableOutputOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool IsPlayableOutputOfType();

  /// @brief Method .ctor, addr 0x2e47844, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableOutputHandle handle);

  static inline ::UnityEngine::Playables::PlayableOutput getStaticF_m_NullPlayableOutput();

  /// @brief Method get_Null, addr 0x2e47bc8, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableOutput get_Null();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Playables::PlayableOutput>"
  constexpr ::System::IEquatable_1<::UnityEngine::Playables::PlayableOutput>* i___System__IEquatable_1___UnityEngine__Playables__PlayableOutput_();

  /// @brief Convert to "::UnityEngine::Playables::IPlayableOutput"
  constexpr ::UnityEngine::Playables::IPlayableOutput* i___UnityEngine__Playables__IPlayableOutput();

  static inline void setStaticF_m_NullPlayableOutput(::UnityEngine::Playables::PlayableOutput value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableOutput();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: None }]
  constexpr PlayableOutput(::UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept;

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableOutputHandle m_Handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableOutput, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableOutput, m_Handle) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableOutput, "UnityEngine.Playables", "PlayableOutput");
