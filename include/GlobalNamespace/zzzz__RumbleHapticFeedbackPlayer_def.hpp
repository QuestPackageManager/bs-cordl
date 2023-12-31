#pragma once
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
class __RumbleHapticFeedbackPlayer__RumbleData;
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
class __RumbleHapticFeedbackPlayer__RumbleData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RumbleHapticFeedbackPlayer);
MARK_REF_PTR_T(::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData);
// Type: ::RumbleData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14431))
// CS Name: ::RumbleHapticFeedbackPlayer::RumbleData*
class CORDL_TYPE __RumbleHapticFeedbackPlayer__RumbleData : public ::System::Object {
public:
  // Declarations
  /// @brief Field active, offset 0x10, size 0x1
  __declspec(property(get = __get_active, put = __set_active)) bool active;

  /// @brief Field continuous, offset 0x11, size 0x1
  __declspec(property(get = __get_continuous, put = __set_continuous)) bool continuous;

  /// @brief Field strength, offset 0x14, size 0x4
  __declspec(property(get = __get_strength, put = __set_strength)) float_t strength;

  /// @brief Field endTime, offset 0x18, size 0x4
  __declspec(property(get = __get_endTime, put = __set_endTime)) float_t endTime;

  /// @brief Field frequency, offset 0x1c, size 0x4
  __declspec(property(get = __get_frequency, put = __set_frequency)) float_t frequency;

  constexpr bool& __get_active();

  constexpr bool const& __get_active() const;

  constexpr void __set_active(bool value);

  constexpr bool& __get_continuous();

  constexpr bool const& __get_continuous() const;

  constexpr void __set_continuous(bool value);

  constexpr float_t& __get_strength();

  constexpr float_t const& __get_strength() const;

  constexpr void __set_strength(float_t value);

  constexpr float_t& __get_endTime();

  constexpr float_t const& __get_endTime() const;

  constexpr void __set_endTime(float_t value);

  constexpr float_t& __get_frequency();

  constexpr float_t const& __get_frequency() const;

  constexpr void __set_frequency(float_t value);

  static inline ::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData* New_ctor();

  /// @brief Method .ctor, addr 0x20fd260, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__RumbleHapticFeedbackPlayer__RumbleData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RumbleHapticFeedbackPlayer__RumbleData(__RumbleHapticFeedbackPlayer__RumbleData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RumbleHapticFeedbackPlayer__RumbleData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RumbleHapticFeedbackPlayer__RumbleData(__RumbleHapticFeedbackPlayer__RumbleData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RumbleHapticFeedbackPlayer__RumbleData();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData, ___active) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData, ___continuous) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData, ___strength) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData, ___endTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData, ___frequency) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RumbleHapticFeedbackPlayer
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14432))
// CS Name: ::RumbleHapticFeedbackPlayer*
class CORDL_TYPE RumbleHapticFeedbackPlayer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using RumbleData = ::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData;

  /// @brief Field _vrPlatformHelper, offset 0x18, size 0x8
  __declspec(property(get = __get__vrPlatformHelper, put = __set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field _rumblesByNode, offset 0x20, size 0x8
  __declspec(property(get = __get__rumblesByNode, put = __set__rumblesByNode))::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData*>*>* _rumblesByNode;

  /// @brief Convert operator to "::GlobalNamespace::IHapticFeedbackPlayer"
  constexpr operator ::GlobalNamespace::IHapticFeedbackPlayer*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IHapticFeedbackPlayer"
  constexpr ::GlobalNamespace::IHapticFeedbackPlayer* i___GlobalNamespace__IHapticFeedbackPlayer() noexcept;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __get__vrPlatformHelper() const;

  constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,
                                                         ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData*>*>*&
  __get__rumblesByNode();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData*>*>*> const&
  __get__rumblesByNode() const;

  constexpr void __set__rumblesByNode(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,
                                                   ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData*>*>* value);

  /// @brief Method Awake, addr 0x20fcb98, size 0xe0, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method PlayHapticFeedback, addr 0x20f6f44, size 0xc8, virtual true, abstract: false, final true
  inline void PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  /// @brief Method CanPlayHapticPreset, addr 0x20fcd98, size 0x40, virtual true, abstract: false, final true
  inline bool CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  /// @brief Method LateUpdate, addr 0x20fcdd8, size 0x4, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method UpdateRumbles, addr 0x20fcddc, size 0x484, virtual false, abstract: false, final false
  inline void UpdateRumbles();

  /// @brief Method GetRumble, addr 0x20fcc78, size 0x120, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData* GetRumble(::UnityEngine::XR::XRNode node, ::System::Object* preset);

  static inline ::GlobalNamespace::RumbleHapticFeedbackPlayer* New_ctor();

  /// @brief Method .ctor, addr 0x20fd268, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RumbleHapticFeedbackPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RumbleHapticFeedbackPlayer(RumbleHapticFeedbackPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RumbleHapticFeedbackPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RumbleHapticFeedbackPlayer(RumbleHapticFeedbackPlayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RumbleHapticFeedbackPlayer();

public:
  /// @brief Field _vrPlatformHelper, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _rumblesByNode, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,
                                               ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData*>*>* ____rumblesByNode;

  /// @brief Field kContinuousRumbleFrameDuration offset 0xffffffff size 0x4
  static constexpr float_t kContinuousRumbleFrameDuration{ 0.016666668 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RumbleHapticFeedbackPlayer, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RumbleHapticFeedbackPlayer, ____vrPlatformHelper) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RumbleHapticFeedbackPlayer, ____rumblesByNode) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RumbleHapticFeedbackPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RumbleHapticFeedbackPlayer*, "", "RumbleHapticFeedbackPlayer");
NEED_NO_BOX(::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RumbleHapticFeedbackPlayer__RumbleData*, "", "RumbleHapticFeedbackPlayer/RumbleData");
