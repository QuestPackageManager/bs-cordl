#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/AnchorDebugVisual.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AnchorDebugVisual)
namespace System {
class Action;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Colocation {
class AnchorDebugVisual;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Colocation::AnchorDebugVisual);
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.AnchorDebugVisual
class CORDL_TYPE AnchorDebugVisual : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _debugVisibilityChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__debugVisibilityChanged, put = setStaticF__debugVisibilityChanged)) ::System::Action* _debugVisibilityChanged;

  /// @brief Field _debugVisualsVisible, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__debugVisualsVisible, put = setStaticF__debugVisualsVisible)) bool _debugVisualsVisible;

  /// @brief Method Awake, addr 0x58d2698, size 0xac, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::Meta::XR::MultiplayerBlocks::Colocation::AnchorDebugVisual* New_ctor();

  /// @brief Method OnDebugVisibilityChanged, addr 0x58d2744, size 0x84, virtual false, abstract: false, final false
  inline void OnDebugVisibilityChanged();

  /// @brief Method .ctor, addr 0x58d27c8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add__debugVisibilityChanged, addr 0x58d23b4, size 0xf0, virtual false, abstract: false, final false
  static inline void add__debugVisibilityChanged(::System::Action* value);

  static inline ::System::Action* getStaticF__debugVisibilityChanged();

  static inline bool getStaticF__debugVisualsVisible();

  /// @brief Method get_DebugVisualsVisible, addr 0x58d2594, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_DebugVisualsVisible();

  /// @brief Method remove__debugVisibilityChanged, addr 0x58d24a4, size 0xf0, virtual false, abstract: false, final false
  static inline void remove__debugVisibilityChanged(::System::Action* value);

  static inline void setStaticF__debugVisibilityChanged(::System::Action* value);

  static inline void setStaticF__debugVisualsVisible(bool value);

  /// @brief Method set_DebugVisualsVisible, addr 0x58d25f0, size 0xa8, virtual false, abstract: false, final false
  static inline void set_DebugVisualsVisible(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnchorDebugVisual();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnchorDebugVisual", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnchorDebugVisual(AnchorDebugVisual&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnchorDebugVisual", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnchorDebugVisual(AnchorDebugVisual const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20415 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::AnchorDebugVisual, 0x20>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Colocation::AnchorDebugVisual);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::AnchorDebugVisual*, "Meta.XR.MultiplayerBlocks.Colocation", "AnchorDebugVisual");
