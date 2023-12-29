#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HapticFeedbackController)
namespace GlobalNamespace {
class __HapticFeedbackController__RumbleData;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
class BoolSO;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
// Forward declare root types
namespace GlobalNamespace {
class HapticFeedbackController;
}
namespace GlobalNamespace {
class __HapticFeedbackController__RumbleData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HapticFeedbackController);
MARK_REF_PTR_T(::GlobalNamespace::__HapticFeedbackController__RumbleData);
// Type: ::RumbleData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13981))
// CS Name: ::HapticFeedbackController::RumbleData*
class CORDL_TYPE __HapticFeedbackController__RumbleData : public ::System::Object {
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

  static inline ::GlobalNamespace::__HapticFeedbackController__RumbleData* New_ctor();

  /// @brief Method .ctor addr 0x1fa46c0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__HapticFeedbackController__RumbleData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HapticFeedbackController__RumbleData(__HapticFeedbackController__RumbleData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HapticFeedbackController__RumbleData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HapticFeedbackController__RumbleData(__HapticFeedbackController__RumbleData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HapticFeedbackController__RumbleData();

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HapticFeedbackController__RumbleData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HapticFeedbackController__RumbleData, ___active) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HapticFeedbackController__RumbleData, ___continuous) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HapticFeedbackController__RumbleData, ___strength) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HapticFeedbackController__RumbleData, ___endTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HapticFeedbackController__RumbleData, ___frequency) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::HapticFeedbackController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13982))
// CS Name: ::HapticFeedbackController*
class CORDL_TYPE HapticFeedbackController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using RumbleData = ::GlobalNamespace::__HapticFeedbackController__RumbleData;

  /// @brief Field _controllersRumbleEnabled, offset 0x18, size 0x8
  __declspec(property(get = __get__controllersRumbleEnabled, put = __set__controllersRumbleEnabled))::GlobalNamespace::BoolSO* _controllersRumbleEnabled;

  /// @brief Field _continuousRumblePreset, offset 0x20, size 0x8
  __declspec(property(get = __get__continuousRumblePreset, put = __set__continuousRumblePreset))::Libraries::HM::HMLib::VR::HapticPresetSO* _continuousRumblePreset;

  /// @brief Field _vrPlatformHelper, offset 0x28, size 0x8
  __declspec(property(get = __get__vrPlatformHelper, put = __set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field _rumblesByNode, offset 0x30, size 0x8
  __declspec(property(get = __get__rumblesByNode, put = __set__rumblesByNode))::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::__HapticFeedbackController__RumbleData*>*>* _rumblesByNode;

  __declspec(property(get = get_continuousRumblePreset))::Libraries::HM::HMLib::VR::HapticPresetSO* continuousRumblePreset;

  constexpr ::GlobalNamespace::BoolSO*& __get__controllersRumbleEnabled();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get__controllersRumbleEnabled() const;

  constexpr void __set__controllersRumbleEnabled(::GlobalNamespace::BoolSO* value);

  constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& __get__continuousRumblePreset();

  constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& __get__continuousRumblePreset() const;

  constexpr void __set__continuousRumblePreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value);

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __get__vrPlatformHelper() const;

  constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,
                                                         ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::__HapticFeedbackController__RumbleData*>*>*&
  __get__rumblesByNode();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::__HapticFeedbackController__RumbleData*>*>*> const&
  __get__rumblesByNode() const;

  constexpr void __set__rumblesByNode(::System::Collections::Generic::Dictionary_2<
                                      ::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::__HapticFeedbackController__RumbleData*>*>* value);

  /// @brief Method get_continuousRumblePreset addr 0x1fa3f4c size 0x8 virtual false final false
  inline ::Libraries::HM::HMLib::VR::HapticPresetSO* get_continuousRumblePreset();

  /// @brief Method Awake addr 0x1fa3f54 size 0xe0 virtual false final false
  inline void Awake();

  /// @brief Method PlayHapticFeedback addr 0x1fa4034 size 0xe4 virtual false final false
  inline void PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  /// @brief Method LateUpdate addr 0x1fa4238 size 0x4 virtual false final false
  inline void LateUpdate();

  /// @brief Method UpdateRumbles addr 0x1fa423c size 0x484 virtual false final false
  inline void UpdateRumbles();

  /// @brief Method GetRumble addr 0x1fa4118 size 0x120 virtual false final false
  inline ::GlobalNamespace::__HapticFeedbackController__RumbleData* GetRumble(::UnityEngine::XR::XRNode node, ::System::Object* preset);

  static inline ::GlobalNamespace::HapticFeedbackController* New_ctor();

  /// @brief Method .ctor addr 0x1fa46c8 size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HapticFeedbackController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HapticFeedbackController(HapticFeedbackController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HapticFeedbackController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HapticFeedbackController(HapticFeedbackController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HapticFeedbackController();

public:
  /// @brief Field _controllersRumbleEnabled, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ____controllersRumbleEnabled;

  /// @brief Field _continuousRumblePreset, offset: 0x20, size: 0x8, def value: None
  ::Libraries::HM::HMLib::VR::HapticPresetSO* ____continuousRumblePreset;

  /// @brief Field _vrPlatformHelper, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _rumblesByNode, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GlobalNamespace::__HapticFeedbackController__RumbleData*>*>*
      ____rumblesByNode;

  /// @brief Field kContinuousRumbleFrameDuration offset 0xffffffff size 0x4
  static constexpr float_t kContinuousRumbleFrameDuration{ 0.016666668 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HapticFeedbackController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticFeedbackController, ____controllersRumbleEnabled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticFeedbackController, ____continuousRumblePreset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticFeedbackController, ____vrPlatformHelper) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticFeedbackController, ____rumblesByNode) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HapticFeedbackController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HapticFeedbackController*, "", "HapticFeedbackController");
NEED_NO_BOX(::GlobalNamespace::__HapticFeedbackController__RumbleData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HapticFeedbackController__RumbleData*, "", "HapticFeedbackController/RumbleData");
