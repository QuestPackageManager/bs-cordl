#pragma once
// IWYU pragma private; include "GlobalNamespace/PS5AdvancedHapticsPlayerController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
CORDL_MODULE_EXPORT(PS5AdvancedHapticsPlayerController)
namespace GlobalNamespace {
class HapticsAudioClipPlayer;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace GlobalNamespace {
class IHapticFeedbackPlayer;
}
namespace GlobalNamespace {
class __HapticsAudioClipPlayer__Pool;
}
namespace GlobalNamespace {
class __PS5AdvancedHapticsPlayerController____c__DisplayClass6_0;
}
namespace GlobalNamespace {
class __PS5AdvancedHapticsPlayerController____c__DisplayClass7_0;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace Zenject {
class IInitializable;
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
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PS5AdvancedHapticsPlayerController::<>c__DisplayClass6_0*
class CORDL_TYPE __PS5AdvancedHapticsPlayerController____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::PS5AdvancedHapticsPlayerController* __4__this;

  /// @brief Field hapticPreset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_hapticPreset, put = __cordl_internal_set_hapticPreset)) ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> hapticPreset;

  /// @brief Field node, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_node, put = __cordl_internal_set_node)) ::UnityEngine::XR::XRNode node;

  static inline ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0* New_ctor();

  /// @brief Method <PlayContinuousHapticPreset>b__0, addr 0x39629e8, size 0xac, virtual false, abstract: false, final false
  inline void _PlayContinuousHapticPreset_b__0(::GlobalNamespace::HapticsAudioClipPlayer* player);

  constexpr ::GlobalNamespace::PS5AdvancedHapticsPlayerController*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5AdvancedHapticsPlayerController*> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& __cordl_internal_get_hapticPreset() const;

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& __cordl_internal_get_hapticPreset();

  constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get_node() const;

  constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get_node();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::PS5AdvancedHapticsPlayerController* value);

  constexpr void __cordl_internal_set_hapticPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value);

  constexpr void __cordl_internal_set_node(::UnityEngine::XR::XRNode value);

  /// @brief Method .ctor, addr 0x3962904, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PS5AdvancedHapticsPlayerController____c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PS5AdvancedHapticsPlayerController____c__DisplayClass6_0(__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PS5AdvancedHapticsPlayerController____c__DisplayClass6_0(__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::PS5AdvancedHapticsPlayerController* _____4__this;

  /// @brief Field node, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::XR::XRNode ___node;

  /// @brief Field hapticPreset, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> ___hapticPreset;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16428 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0, ___node) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0, ___hapticPreset) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PS5AdvancedHapticsPlayerController::<>c__DisplayClass7_0*
class CORDL_TYPE __PS5AdvancedHapticsPlayerController____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::PS5AdvancedHapticsPlayerController* __4__this;

  /// @brief Field hapticPreset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_hapticPreset, put = __cordl_internal_set_hapticPreset)) ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> hapticPreset;

  /// @brief Field node, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_node, put = __cordl_internal_set_node)) ::UnityEngine::XR::XRNode node;

  static inline ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0* New_ctor();

  /// @brief Method <PlayOneShotHapticPreset>b__0, addr 0x3962a94, size 0xac, virtual false, abstract: false, final false
  inline void _PlayOneShotHapticPreset_b__0(::GlobalNamespace::HapticsAudioClipPlayer* player);

  constexpr ::GlobalNamespace::PS5AdvancedHapticsPlayerController*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5AdvancedHapticsPlayerController*> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& __cordl_internal_get_hapticPreset() const;

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& __cordl_internal_get_hapticPreset();

  constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get_node() const;

  constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get_node();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::PS5AdvancedHapticsPlayerController* value);

  constexpr void __cordl_internal_set_hapticPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value);

  constexpr void __cordl_internal_set_node(::UnityEngine::XR::XRNode value);

  /// @brief Method .ctor, addr 0x396290c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PS5AdvancedHapticsPlayerController____c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PS5AdvancedHapticsPlayerController____c__DisplayClass7_0(__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PS5AdvancedHapticsPlayerController____c__DisplayClass7_0(__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::PS5AdvancedHapticsPlayerController* _____4__this;

  /// @brief Field node, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::XR::XRNode ___node;

  /// @brief Field hapticPreset, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> ___hapticPreset;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16429 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0, ___node) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0, ___hapticPreset) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PS5AdvancedHapticsPlayerController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PS5AdvancedHapticsPlayerController*
class CORDL_TYPE PS5AdvancedHapticsPlayerController : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass6_0 = ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0;

  using __c__DisplayClass7_0 = ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0;

  /// @brief Field _activePlayers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__activePlayers, put = __cordl_internal_set__activePlayers)) ::System::Collections::Generic::Dictionary_2<
      ::System::ValueTuple_2<::UnityEngine::XR::XRNode, ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>>, ::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>* _activePlayers;

  /// @brief Field _coroutineStarter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__coroutineStarter, put = __cordl_internal_set__coroutineStarter)) ::GlobalNamespace::ICoroutineStarter* _coroutineStarter;

  /// @brief Field _hapticsPlayerPool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticsPlayerPool, put = __cordl_internal_set__hapticsPlayerPool)) ::GlobalNamespace::__HapticsAudioClipPlayer__Pool* _hapticsPlayerPool;

  /// @brief Convert operator to "::GlobalNamespace::IHapticFeedbackPlayer"
  constexpr operator ::GlobalNamespace::IHapticFeedbackPlayer*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method CanPlayHapticPreset, addr 0x396280c, size 0x14, virtual true, abstract: false, final true
  inline bool CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset, ::UnityEngine::XR::XRNode node);

  /// @brief Method Initialize, addr 0x3962440, size 0x4, virtual true, abstract: false, final true
  inline void Initialize();

  static inline ::GlobalNamespace::PS5AdvancedHapticsPlayerController* New_ctor();

  /// @brief Method OnHapticPlayFinishedCallback, addr 0x3962914, size 0x58, virtual false, abstract: false, final false
  inline void OnHapticPlayFinishedCallback(::GlobalNamespace::HapticsAudioClipPlayer* player);

  /// @brief Method PlayContinuousHapticPreset, addr 0x3962638, size 0x1d4, virtual false, abstract: false, final false
  inline void PlayContinuousHapticPreset(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  /// @brief Method PlayHapticFeedback, addr 0x3962444, size 0x24, virtual true, abstract: false, final true
  inline void PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  /// @brief Method PlayOneShotHapticPreset, addr 0x3962468, size 0x1d0, virtual false, abstract: false, final false
  inline void PlayOneShotHapticPreset(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode, ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>>,
                                                         ::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>*&
  __cordl_internal_get__activePlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode, ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>>,
                                                                                             ::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>*> const&
  __cordl_internal_get__activePlayers() const;

  constexpr ::GlobalNamespace::ICoroutineStarter*& __cordl_internal_get__coroutineStarter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICoroutineStarter*> const& __cordl_internal_get__coroutineStarter() const;

  constexpr ::GlobalNamespace::__HapticsAudioClipPlayer__Pool*& __cordl_internal_get__hapticsPlayerPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*> const& __cordl_internal_get__hapticsPlayerPool() const;

  constexpr void
  __cordl_internal_set__activePlayers(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode, ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>>,
                                                                                   ::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>* value);

  constexpr void __cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value);

  constexpr void __cordl_internal_set__hapticsPlayerPool(::GlobalNamespace::__HapticsAudioClipPlayer__Pool* value);

  /// @brief Method .ctor, addr 0x396296c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IHapticFeedbackPlayer"
  constexpr ::GlobalNamespace::IHapticFeedbackPlayer* i___GlobalNamespace__IHapticFeedbackPlayer() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS5AdvancedHapticsPlayerController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PS5AdvancedHapticsPlayerController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS5AdvancedHapticsPlayerController(PS5AdvancedHapticsPlayerController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS5AdvancedHapticsPlayerController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS5AdvancedHapticsPlayerController(PS5AdvancedHapticsPlayerController const&) = delete;

  /// @brief Field _hapticsPlayerPool, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__HapticsAudioClipPlayer__Pool* ____hapticsPlayerPool;

  /// @brief Field _coroutineStarter, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ICoroutineStarter* ____coroutineStarter;

  /// @brief Field _activePlayers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode, ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>>,
                                               ::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>* ____activePlayers;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16430 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5AdvancedHapticsPlayerController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AdvancedHapticsPlayerController, ____hapticsPlayerPool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AdvancedHapticsPlayerController, ____coroutineStarter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5AdvancedHapticsPlayerController, ____activePlayers) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5AdvancedHapticsPlayerController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5AdvancedHapticsPlayerController*, "", "PS5AdvancedHapticsPlayerController");
NEED_NO_BOX(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0*, "", "PS5AdvancedHapticsPlayerController/<>c__DisplayClass6_0");
NEED_NO_BOX(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0*, "", "PS5AdvancedHapticsPlayerController/<>c__DisplayClass7_0");
