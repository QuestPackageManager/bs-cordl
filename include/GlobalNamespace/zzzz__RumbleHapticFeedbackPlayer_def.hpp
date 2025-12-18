#pragma once
// IWYU pragma private; include "GlobalNamespace/RumbleHapticFeedbackPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RumbleHapticFeedbackPlayer)
namespace GlobalNamespace {
class IHapticFeedbackPlayer;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class RumbleHapticFeedbackPlayer_RumbleData;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Object;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace GlobalNamespace {
class RumbleHapticFeedbackPlayer;
}
namespace GlobalNamespace {
class RumbleHapticFeedbackPlayer_RumbleData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RumbleHapticFeedbackPlayer);
MARK_REF_PTR_T(::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RumbleHapticFeedbackPlayer/RumbleData
class CORDL_TYPE RumbleHapticFeedbackPlayer_RumbleData : public ::System::Object {
public:
  // Declarations
  /// @brief Field active, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_active, put = __cordl_internal_set_active)) bool active;

  /// @brief Field continuous, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_continuous, put = __cordl_internal_set_continuous)) bool continuous;

  /// @brief Field endTime, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_endTime, put = __cordl_internal_set_endTime)) float_t endTime;

  /// @brief Field frequency, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_frequency, put = __cordl_internal_set_frequency)) float_t frequency;

  /// @brief Field strength, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_strength, put = __cordl_internal_set_strength)) float_t strength;

  static inline ::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData* New_ctor();

  constexpr bool const& __cordl_internal_get_active() const;

  constexpr bool& __cordl_internal_get_active();

  constexpr bool const& __cordl_internal_get_continuous() const;

  constexpr bool& __cordl_internal_get_continuous();

  constexpr float_t const& __cordl_internal_get_endTime() const;

  constexpr float_t& __cordl_internal_get_endTime();

  constexpr float_t const& __cordl_internal_get_frequency() const;

  constexpr float_t& __cordl_internal_get_frequency();

  constexpr float_t const& __cordl_internal_get_strength() const;

  constexpr float_t& __cordl_internal_get_strength();

  constexpr void __cordl_internal_set_active(bool value);

  constexpr void __cordl_internal_set_continuous(bool value);

  constexpr void __cordl_internal_set_endTime(float_t value);

  constexpr void __cordl_internal_set_frequency(float_t value);

  constexpr void __cordl_internal_set_strength(float_t value);

  /// @brief Method .ctor, addr 0x56a8a3c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RumbleHapticFeedbackPlayer_RumbleData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RumbleHapticFeedbackPlayer_RumbleData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RumbleHapticFeedbackPlayer_RumbleData(RumbleHapticFeedbackPlayer_RumbleData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RumbleHapticFeedbackPlayer_RumbleData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RumbleHapticFeedbackPlayer_RumbleData(RumbleHapticFeedbackPlayer_RumbleData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20315 };

  /// @brief Field active, offset: 0x10, size: 0x1, def value: None
  bool ___active;

  /// @brief Field continuous, offset: 0x11, size: 0x1, def value: None
  bool ___continuous;

  /// @brief Field strength, offset: 0x14, size: 0x4, def value: None
  float_t ___strength;

  /// @brief Field endTime, offset: 0x18, size: 0x4, def value: None
  float_t ___endTime;

  /// @brief Field frequency, offset: 0x1c, size: 0x4, def value: None
  float_t ___frequency;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData, ___active) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData, ___continuous) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData, ___strength) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData, ___endTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData, ___frequency) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RumbleHapticFeedbackPlayer
class CORDL_TYPE RumbleHapticFeedbackPlayer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using RumbleData = ::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData;

  /// @brief Field _rumblesByNode, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rumblesByNode, put = __cordl_internal_set__rumblesByNode)) ::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData*>*>* _rumblesByNode;

  /// @brief Field _vrPlatformHelper, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Convert operator to "::GlobalNamespace::IHapticFeedbackPlayer"
  constexpr operator ::GlobalNamespace::IHapticFeedbackPlayer*() noexcept;

  /// @brief Method CanPlayHapticPreset, addr 0x56a8500, size 0x3c, virtual true, abstract: false, final true
  inline bool CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset, ::UnityEngine::XR::XRNode node);

  /// @brief Method GetRumble, addr 0x56a8334, size 0x1cc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData* GetRumble(::UnityEngine::XR::XRNode node, ::System::Object* preset);

  /// @brief Method LateUpdate, addr 0x56a853c, size 0x4, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::RumbleHapticFeedbackPlayer* New_ctor();

  /// @brief Method PlayHapticFeedback, addr 0x56a621c, size 0xe0, virtual true, abstract: false, final true
  inline void PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  /// @brief Method UpdateRumbles, addr 0x56a8540, size 0x4fc, virtual false, abstract: false, final false
  inline void UpdateRumbles();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,
                                                         ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData*>*>* const&
  __cordl_internal_get__rumblesByNode() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,
                                                         ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData*>*>*&
  __cordl_internal_get__rumblesByNode();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr void __cordl_internal_set__rumblesByNode(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,
                                                   ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData*>*>* value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method .ctor, addr 0x56a8a40, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IHapticFeedbackPlayer"
  constexpr ::GlobalNamespace::IHapticFeedbackPlayer* i___GlobalNamespace__IHapticFeedbackPlayer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RumbleHapticFeedbackPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RumbleHapticFeedbackPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RumbleHapticFeedbackPlayer(RumbleHapticFeedbackPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RumbleHapticFeedbackPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RumbleHapticFeedbackPlayer(RumbleHapticFeedbackPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20316 };

  /// @brief Field kContinuousRumbleFrameDuration offset 0xffffffff size 0x4
  static constexpr float_t kContinuousRumbleFrameDuration{ static_cast<float_t>(0.016666668f) };

  /// @brief Field _vrPlatformHelper, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _rumblesByNode, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData*>*>*
      ____rumblesByNode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RumbleHapticFeedbackPlayer, ____vrPlatformHelper) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RumbleHapticFeedbackPlayer, ____rumblesByNode) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RumbleHapticFeedbackPlayer, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RumbleHapticFeedbackPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RumbleHapticFeedbackPlayer*, "", "RumbleHapticFeedbackPlayer");
NEED_NO_BOX(::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RumbleHapticFeedbackPlayer_RumbleData*, "", "RumbleHapticFeedbackPlayer/RumbleData");
