#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AnimationScriptPlayable)
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationScriptPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationScriptPlayable);
// Type: UnityEngine.Animations::AnimationScriptPlayable
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Animations {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(9209))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14766))
// CS Name: ::UnityEngine.Animations::AnimationScriptPlayable
struct CORDL_TYPE AnimationScriptPlayable {
public:
  // Declarations
  /// @brief Field m_NullPlayable, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_m_NullPlayable, put = setStaticF_m_NullPlayable))::UnityEngine::Animations::AnimationScriptPlayable m_NullPlayable;

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
  constexpr operator ::UnityEngine::Playables::IPlayable*();

  /// @brief Convert to "::UnityEngine::Playables::IPlayable"
  constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>*();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>"
  constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>* i___System__IEquatable_1___UnityEngine__Animations__AnimationScriptPlayable_();

  static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationScriptPlayable value);

  static inline ::UnityEngine::Animations::AnimationScriptPlayable getStaticF_m_NullPlayable();

  /// @brief Method .ctor, addr 0x2c9421c, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableHandle handle);

  /// @brief Method GetHandle, addr 0x2c942dc, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Method Equals, addr 0x2c942e8, size 0x78, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Animations::AnimationScriptPlayable other);

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr AnimationScriptPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationScriptPlayable();

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle m_Handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationScriptPlayable, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Animations::AnimationScriptPlayable, m_Handle) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationScriptPlayable, "UnityEngine.Animations", "AnimationScriptPlayable");
