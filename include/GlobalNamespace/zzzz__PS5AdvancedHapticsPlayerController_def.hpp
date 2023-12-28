#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
CORDL_MODULE_EXPORT(PS5AdvancedHapticsPlayerController)
namespace Zenject {
class IInitializable;
}
namespace GlobalNamespace {
class __PS5AdvancedHapticsPlayerController____c__DisplayClass6_0;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace GlobalNamespace {
class __PS5AdvancedHapticsPlayerController____c__DisplayClass7_0;
}
namespace GlobalNamespace {
class IHapticFeedbackPlayer;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace GlobalNamespace {
class HapticsAudioClipPlayer;
}
namespace GlobalNamespace {
class __HapticsAudioClipPlayer__Pool;
}
// Forward declare root types
namespace GlobalNamespace {
class PS5AdvancedHapticsPlayerController;
}
namespace GlobalNamespace {
class __PS5AdvancedHapticsPlayerController____c__DisplayClass6_0;
}
namespace GlobalNamespace {
class __PS5AdvancedHapticsPlayerController____c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5AdvancedHapticsPlayerController);
MARK_REF_PTR_T(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0);
MARK_REF_PTR_T(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0);
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15614)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14425))
// CS Name: ::PS5AdvancedHapticsPlayerController::<>c__DisplayClass6_0*
class CORDL_TYPE __PS5AdvancedHapticsPlayerController____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::PS5AdvancedHapticsPlayerController* __4__this;

  /// @brief Field node, offset 0x18, size 0x4
  __declspec(property(get = __get_node, put = __set_node))::UnityEngine::XR::XRNode node;

  /// @brief Field hapticPreset, offset 0x20, size 0x8
  __declspec(property(get = __get_hapticPreset, put = __set_hapticPreset))::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset;

  constexpr ::GlobalNamespace::PS5AdvancedHapticsPlayerController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5AdvancedHapticsPlayerController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::PS5AdvancedHapticsPlayerController* value);

  constexpr ::UnityEngine::XR::XRNode& __get_node();

  constexpr ::UnityEngine::XR::XRNode const& __get_node() const;

  constexpr void __set_node(::UnityEngine::XR::XRNode value);

  constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& __get_hapticPreset();

  constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& __get_hapticPreset() const;

  constexpr void __set_hapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value);

  static inline ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0* New_ctor();

  /// @brief Method .ctor addr 0x20f9ecc size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <PlayContinuousHapticPreset>b__0 addr 0x20f9fb0 size 0xac virtual false final false
  inline void _PlayContinuousHapticPreset_b__0(::GlobalNamespace::HapticsAudioClipPlayer* player);

  // Ctor Parameters [CppParam { name: "", ty: "__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PS5AdvancedHapticsPlayerController____c__DisplayClass6_0(__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PS5AdvancedHapticsPlayerController____c__DisplayClass6_0(__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PS5AdvancedHapticsPlayerController____c__DisplayClass6_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::PS5AdvancedHapticsPlayerController* _____4__this;

  /// @brief Field node, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::XR::XRNode ___node;

  /// @brief Field hapticPreset, offset: 0x20, size: 0x8, def value: None
  ::Libraries::HM::HMLib::VR::HapticPresetSO* ___hapticPreset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15614))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14426))
// CS Name: ::PS5AdvancedHapticsPlayerController::<>c__DisplayClass7_0*
class CORDL_TYPE __PS5AdvancedHapticsPlayerController____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::PS5AdvancedHapticsPlayerController* __4__this;

  /// @brief Field node, offset 0x18, size 0x4
  __declspec(property(get = __get_node, put = __set_node))::UnityEngine::XR::XRNode node;

  /// @brief Field hapticPreset, offset 0x20, size 0x8
  __declspec(property(get = __get_hapticPreset, put = __set_hapticPreset))::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset;

  constexpr ::GlobalNamespace::PS5AdvancedHapticsPlayerController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5AdvancedHapticsPlayerController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::PS5AdvancedHapticsPlayerController* value);

  constexpr ::UnityEngine::XR::XRNode& __get_node();

  constexpr ::UnityEngine::XR::XRNode const& __get_node() const;

  constexpr void __set_node(::UnityEngine::XR::XRNode value);

  constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& __get_hapticPreset();

  constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& __get_hapticPreset() const;

  constexpr void __set_hapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value);

  static inline ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0* New_ctor();

  /// @brief Method .ctor addr 0x20f9ed4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <PlayOneShotHapticPreset>b__0 addr 0x20fa05c size 0xac virtual false final false
  inline void _PlayOneShotHapticPreset_b__0(::GlobalNamespace::HapticsAudioClipPlayer* player);

  // Ctor Parameters [CppParam { name: "", ty: "__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PS5AdvancedHapticsPlayerController____c__DisplayClass7_0(__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PS5AdvancedHapticsPlayerController____c__DisplayClass7_0(__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PS5AdvancedHapticsPlayerController____c__DisplayClass7_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::PS5AdvancedHapticsPlayerController* _____4__this;

  /// @brief Field node, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::XR::XRNode ___node;

  /// @brief Field hapticPreset, offset: 0x20, size: 0x8, def value: None
  ::Libraries::HM::HMLib::VR::HapticPresetSO* ___hapticPreset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PS5AdvancedHapticsPlayerController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14427))
// CS Name: ::PS5AdvancedHapticsPlayerController*
class CORDL_TYPE PS5AdvancedHapticsPlayerController : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass7_0 = ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0;

  using __c__DisplayClass6_0 = ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0;

  /// @brief Field _hapticsPlayerPool, offset 0x10, size 0x8
  __declspec(property(get = __get__hapticsPlayerPool, put = __set__hapticsPlayerPool))::GlobalNamespace::__HapticsAudioClipPlayer__Pool* _hapticsPlayerPool;

  /// @brief Field _coroutineStarter, offset 0x18, size 0x8
  __declspec(property(get = __get__coroutineStarter, put = __set__coroutineStarter))::GlobalNamespace::ICoroutineStarter* _coroutineStarter;

  /// @brief Field _activePlayers, offset 0x20, size 0x8
  __declspec(property(get = __get__activePlayers,
                      put = __set__activePlayers))::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*>,
                                                                                               ::GlobalNamespace::HapticsAudioClipPlayer*>* _activePlayers;

  /// @brief Convert operator to "::GlobalNamespace::IHapticFeedbackPlayer"
  constexpr operator ::GlobalNamespace::IHapticFeedbackPlayer*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  constexpr ::GlobalNamespace::__HapticsAudioClipPlayer__Pool*& __get__hapticsPlayerPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*> const& __get__hapticsPlayerPool() const;

  constexpr void __set__hapticsPlayerPool(::GlobalNamespace::__HapticsAudioClipPlayer__Pool* value);

  constexpr ::GlobalNamespace::ICoroutineStarter*& __get__coroutineStarter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICoroutineStarter*> const& __get__coroutineStarter() const;

  constexpr void __set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*>, ::GlobalNamespace::HapticsAudioClipPlayer*>*&
  __get__activePlayers();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*>, ::GlobalNamespace::HapticsAudioClipPlayer*>*> const&
  __get__activePlayers() const;

  constexpr void __set__activePlayers(
      ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*>, ::GlobalNamespace::HapticsAudioClipPlayer*>* value);

  /// @brief Method Initialize addr 0x20f9a90 size 0x4 virtual true final true
  inline void Initialize();

  /// @brief Method PlayHapticFeedback addr 0x20f9a94 size 0x24 virtual true final true
  inline void PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  /// @brief Method CanPlayHapticPreset addr 0x20f9e64 size 0x68 virtual true final true
  inline bool CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  /// @brief Method PlayContinuousHapticPreset addr 0x20f9c8c size 0x1d8 virtual false final false
  inline void PlayContinuousHapticPreset(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  /// @brief Method PlayOneShotHapticPreset addr 0x20f9ab8 size 0x1d4 virtual false final false
  inline void PlayOneShotHapticPreset(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  /// @brief Method OnHapticPlayFinishedCallback addr 0x20f9edc size 0x58 virtual false final false
  inline void OnHapticPlayFinishedCallback(::GlobalNamespace::HapticsAudioClipPlayer* player);

  static inline ::GlobalNamespace::PS5AdvancedHapticsPlayerController* New_ctor();

  /// @brief Method .ctor addr 0x20f9f34 size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PS5AdvancedHapticsPlayerController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS5AdvancedHapticsPlayerController(PS5AdvancedHapticsPlayerController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS5AdvancedHapticsPlayerController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS5AdvancedHapticsPlayerController(PS5AdvancedHapticsPlayerController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS5AdvancedHapticsPlayerController();

public:
  /// @brief Field _hapticsPlayerPool, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__HapticsAudioClipPlayer__Pool* ____hapticsPlayerPool;

  /// @brief Field _coroutineStarter, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ICoroutineStarter* ____coroutineStarter;

  /// @brief Field _activePlayers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*>, ::GlobalNamespace::HapticsAudioClipPlayer*>*
      ____activePlayers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5AdvancedHapticsPlayerController, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5AdvancedHapticsPlayerController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5AdvancedHapticsPlayerController*, "", "PS5AdvancedHapticsPlayerController");
NEED_NO_BOX(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0*, "", "PS5AdvancedHapticsPlayerController/<>c__DisplayClass6_0");
NEED_NO_BOX(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0*, "", "PS5AdvancedHapticsPlayerController/<>c__DisplayClass7_0");
