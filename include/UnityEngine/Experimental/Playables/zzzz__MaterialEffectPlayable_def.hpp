#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MaterialEffectPlayable)
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
namespace UnityEngine::Experimental::Playables {
struct MaterialEffectPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Playables::MaterialEffectPlayable);
// Type: UnityEngine.Experimental.Playables::MaterialEffectPlayable
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Playables {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(9209))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9179))
// CS Name: ::UnityEngine.Experimental.Playables::MaterialEffectPlayable
struct CORDL_TYPE MaterialEffectPlayable {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
  constexpr operator ::UnityEngine::Playables::IPlayable*();

  /// @brief Convert to "::UnityEngine::Playables::IPlayable"
  constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>*();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>"
  constexpr ::System::IEquatable_1<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>* i___System__IEquatable_1___UnityEngine__Experimental__Playables__MaterialEffectPlayable_();

  /// @brief Method GetHandle, addr 0x2cff408, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Method Equals, addr 0x2cff414, size 0x74, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Experimental::Playables::MaterialEffectPlayable other);

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr MaterialEffectPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialEffectPlayable();

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle m_Handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Playables::MaterialEffectPlayable, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Playables::MaterialEffectPlayable, m_Handle) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Playables::MaterialEffectPlayable, "UnityEngine.Experimental.Playables", "MaterialEffectPlayable");
