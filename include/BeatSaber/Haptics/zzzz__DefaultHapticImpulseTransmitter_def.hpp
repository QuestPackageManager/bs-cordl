#pragma once
// IWYU pragma private; include "BeatSaber\Haptics\DefaultHapticImpulseTransmitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DefaultHapticImpulseTransmitter)
namespace BeatSaber::Haptics {
class IHapticImpulseTransmitter;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace BeatSaber::Haptics {
class DefaultHapticImpulseTransmitter;
}
// Write type traits
MARK_REF_T(::BeatSaber::Haptics::DefaultHapticImpulseTransmitter*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Haptics::DefaultHapticImpulseTransmitter*, "BeatSaber.Haptics", "DefaultHapticImpulseTransmitter");
// Dependencies System.Object, UnityEngine.XR.XRNode
namespace BeatSaber::Haptics {
// Is value type: false
// CS Name: BeatSaber.Haptics.DefaultHapticImpulseTransmitter
class CORDL_TYPE DefaultHapticImpulseTransmitter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _node, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__node, put = __cordl_internal_set__node)) ::UnityEngine::XR::XRNode _node;

  /// @brief Convert operator to "::BeatSaber::Haptics::IHapticImpulseTransmitter"
  constexpr operator ::BeatSaber::Haptics::IHapticImpulseTransmitter*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x32992fc, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::BeatSaber::Haptics::DefaultHapticImpulseTransmitter* New_ctor(::UnityEngine::XR::XRNode node);

  /// @brief Method StopHaptics, addr 0x3299280, size 0x7c, virtual true, abstract: false, final true
  inline void StopHaptics();

  /// @brief Method TriggerHapticPulse, addr 0x3299208, size 0x78, virtual true, abstract: false, final true
  inline void TriggerHapticPulse(float_t strength, float_t duration);

  constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get__node() const;

  constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get__node();

  constexpr void __cordl_internal_set__node(::UnityEngine::XR::XRNode value);

  /// @brief Method .ctor, addr 0x3299200, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::XRNode node);

  /// @brief Convert to "::BeatSaber::Haptics::IHapticImpulseTransmitter"
  constexpr ::BeatSaber::Haptics::IHapticImpulseTransmitter* i___BeatSaber__Haptics__IHapticImpulseTransmitter() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultHapticImpulseTransmitter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultHapticImpulseTransmitter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultHapticImpulseTransmitter(DefaultHapticImpulseTransmitter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultHapticImpulseTransmitter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultHapticImpulseTransmitter(DefaultHapticImpulseTransmitter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23195 };

  /// @brief Field _node, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::XR::XRNode ____node;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Haptics::DefaultHapticImpulseTransmitter, ____node) == 0x10, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Haptics::DefaultHapticImpulseTransmitter) == 0x18, "Size mismatch!");

} // namespace BeatSaber::Haptics
