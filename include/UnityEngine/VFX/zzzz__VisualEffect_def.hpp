#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualEffect)
namespace System {
template <typename T> class Action_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::VFX {
class VFXEventAttribute;
}
namespace UnityEngine::VFX {
struct VFXOutputEventArgs;
}
namespace UnityEngine::VFX {
class VisualEffectAsset;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::VFX {
class VisualEffect;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::VisualEffect*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffect*, "UnityEngine.VFX", "VisualEffect");
// [NativeHeader("Modules/VFX/Public/ScriptBindings/VisualEffectBindings.h")]
// [NativeHeader("Modules/VFX/Public/VisualEffect.h")]
// [RequireComponent(typeof(UnityEngine.Transform))]
// Dependencies UnityEngine.Behaviour
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VisualEffect
class CORDL_TYPE VisualEffect : public ::UnityEngine::Behaviour {
public:
  // Declarations
  /// @brief Field m_cachedEventAttribute, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_cachedEventAttribute, put = __cordl_internal_set_m_cachedEventAttribute)) ::UnityEngine::VFX::VFXEventAttribute* m_cachedEventAttribute;

  /// @brief Field outputEventReceived, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_outputEventReceived, put = __cordl_internal_set_outputEventReceived)) ::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>* outputEventReceived;

  __declspec(property(put = set_pause)) bool pause;

  __declspec(property(get = get_resetSeedOnPlay, put = set_resetSeedOnPlay)) bool resetSeedOnPlay;

  __declspec(property(get = get_startSeed, put = set_startSeed)) uint32_t startSeed;

  __declspec(property(get = get_time)) float_t time;

  __declspec(property(get = get_visualEffectAsset)) ::UnityW<::UnityEngine::VFX::VisualEffectAsset> visualEffectAsset;

  /// @brief Method CheckValidVFXEventAttribute, addr 0x7306cb0, size 0xd4, virtual false, abstract: false, final false
  inline void CheckValidVFXEventAttribute(::UnityEngine::VFX::VFXEventAttribute* eventAttribute);

  /// @brief Method CreateVFXEventAttribute, addr 0x7306c20, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::VFX::VFXEventAttribute* CreateVFXEventAttribute();

  /// [FreeFunction(Name = "VisualEffectBindings::GetValueFromScript<float>", HasExplicitThis = true)]
  /// @brief Method GetFloat, addr 0x7307e4c, size 0x90, virtual false, abstract: false, final false
  inline float_t GetFloat(int32_t nameID);

  /// @brief Method GetFloat_Injected, addr 0x7307edc, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloat_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// [FreeFunction(Name = "VisualEffectBindings::HasValueFromScript<bool>", HasExplicitThis = true)]
  /// @brief Method HasBool, addr 0x7306fcc, size 0x90, virtual false, abstract: false, final false
  inline bool HasBool(int32_t nameID);

  /// @brief Method HasBool_Injected, addr 0x730705c, size 0x44, virtual false, abstract: false, final false
  static inline bool HasBool_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method HasFloat, addr 0x7307f44, size 0x24, virtual false, abstract: false, final false
  inline bool HasFloat(::StringW name);

  /// [FreeFunction(Name = "VisualEffectBindings::HasValueFromScript<float>", HasExplicitThis = true)]
  /// @brief Method HasFloat, addr 0x7307248, size 0x90, virtual false, abstract: false, final false
  inline bool HasFloat(int32_t nameID);

  /// @brief Method HasFloat_Injected, addr 0x73072d8, size 0x44, virtual false, abstract: false, final false
  static inline bool HasFloat_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// [FreeFunction(Name = "VisualEffectBindings::HasValueFromScript<int>", HasExplicitThis = true)]
  /// @brief Method HasInt, addr 0x73070a0, size 0x90, virtual false, abstract: false, final false
  inline bool HasInt(int32_t nameID);

  /// @brief Method HasInt_Injected, addr 0x7307130, size 0x44, virtual false, abstract: false, final false
  static inline bool HasInt_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method HasTexture, addr 0x7307f8c, size 0x24, virtual false, abstract: false, final false
  inline bool HasTexture(::StringW name);

  /// [FreeFunction(Name = "VisualEffectBindings::HasValueFromScript<Texture*>", HasExplicitThis = true)]
  /// @brief Method HasTexture, addr 0x7307598, size 0x90, virtual false, abstract: false, final false
  inline bool HasTexture(int32_t nameID);

  /// @brief Method HasTexture_Injected, addr 0x7307628, size 0x44, virtual false, abstract: false, final false
  static inline bool HasTexture_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method HasUInt, addr 0x7307f20, size 0x24, virtual false, abstract: false, final false
  inline bool HasUInt(::StringW name);

  /// [FreeFunction(Name = "VisualEffectBindings::HasValueFromScript<UInt32>", HasExplicitThis = true)]
  /// @brief Method HasUInt, addr 0x7307174, size 0x90, virtual false, abstract: false, final false
  inline bool HasUInt(int32_t nameID);

  /// @brief Method HasUInt_Injected, addr 0x7307204, size 0x44, virtual false, abstract: false, final false
  static inline bool HasUInt_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// [FreeFunction(Name = "VisualEffectBindings::HasValueFromScript<Vector2f>", HasExplicitThis = true)]
  /// @brief Method HasVector2, addr 0x730731c, size 0x90, virtual false, abstract: false, final false
  inline bool HasVector2(int32_t nameID);

  /// @brief Method HasVector2_Injected, addr 0x73073ac, size 0x44, virtual false, abstract: false, final false
  static inline bool HasVector2_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// [FreeFunction(Name = "VisualEffectBindings::HasValueFromScript<Vector3f>", HasExplicitThis = true)]
  /// @brief Method HasVector3, addr 0x73073f0, size 0x90, virtual false, abstract: false, final false
  inline bool HasVector3(int32_t nameID);

  /// @brief Method HasVector3_Injected, addr 0x7307480, size 0x44, virtual false, abstract: false, final false
  static inline bool HasVector3_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method HasVector4, addr 0x7307f68, size 0x24, virtual false, abstract: false, final false
  inline bool HasVector4(::StringW name);

  /// [FreeFunction(Name = "VisualEffectBindings::HasValueFromScript<Vector4f>", HasExplicitThis = true)]
  /// @brief Method HasVector4, addr 0x73074c4, size 0x90, virtual false, abstract: false, final false
  inline bool HasVector4(int32_t nameID);

  /// @brief Method HasVector4_Injected, addr 0x7307554, size 0x44, virtual false, abstract: false, final false
  static inline bool HasVector4_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// [RequiredByNativeCode]
  /// @brief Method InvokeGetCachedEventAttributeForOutputEvent_Internal, addr 0x7308284, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::VFXEventAttribute* InvokeGetCachedEventAttributeForOutputEvent_Internal(::UnityEngine::VFX::VisualEffect* source);

  /// [RequiredByNativeCode]
  /// @brief Method InvokeOutputEventReceived_Internal, addr 0x73082c0, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeOutputEventReceived_Internal(::UnityEngine::VFX::VisualEffect* source, int32_t eventNameId);

  static inline ::UnityEngine::VFX::VisualEffect* New_ctor();

  /// @brief Method Reinit, addr 0x7306ef8, size 0x90, virtual false, abstract: false, final false
  inline void Reinit(bool sendInitialEventAndPrewarm);

  /// @brief Method Reinit_Injected, addr 0x7306f88, size 0x44, virtual false, abstract: false, final false
  static inline void Reinit_Injected(::System::IntPtr _unity_self, bool sendInitialEventAndPrewarm);

  /// @brief Method SendEvent, addr 0x7306eac, size 0x44, virtual false, abstract: false, final false
  inline void SendEvent(::StringW eventName, ::UnityEngine::VFX::VFXEventAttribute* eventAttribute);

  /// @brief Method SendEvent, addr 0x7306ef0, size 0x8, virtual false, abstract: false, final false
  inline void SendEvent(int32_t eventNameID);

  /// @brief Method SendEvent, addr 0x7306e78, size 0x34, virtual false, abstract: false, final false
  inline void SendEvent(int32_t eventNameID, ::UnityEngine::VFX::VFXEventAttribute* eventAttribute);

  /// [FreeFunction(Name = "VisualEffectBindings::SendEventFromScript", HasExplicitThis = true)]
  /// @brief Method SendEventFromScript, addr 0x7306d84, size 0xa0, virtual false, abstract: false, final false
  inline void SendEventFromScript(int32_t eventNameID, ::UnityEngine::VFX::VFXEventAttribute* eventAttribute);

  /// @brief Method SendEventFromScript_Injected, addr 0x7306e24, size 0x54, virtual false, abstract: false, final false
  static inline void SendEventFromScript_Injected(::System::IntPtr _unity_self, int32_t eventNameID, ::System::IntPtr eventAttribute);

  /// @brief Method SetBool, addr 0x73080a0, size 0x34, virtual false, abstract: false, final false
  inline void SetBool(::StringW name, bool b);

  /// [FreeFunction(Name = "VisualEffectBindings::SetValueFromScript<bool>", HasExplicitThis = true)]
  /// @brief Method SetBool, addr 0x730766c, size 0x98, virtual false, abstract: false, final false
  inline void SetBool(int32_t nameID, bool b);

  /// @brief Method SetBool_Injected, addr 0x7307704, size 0x54, virtual false, abstract: false, final false
  static inline void SetBool_Injected(::System::IntPtr _unity_self, int32_t nameID, bool b);

  /// @brief Method SetFloat, addr 0x7307fe4, size 0x34, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t f);

  /// [FreeFunction(Name = "VisualEffectBindings::SetValueFromScript<float>", HasExplicitThis = true)]
  /// @brief Method SetFloat, addr 0x7307930, size 0xa0, virtual false, abstract: false, final false
  inline void SetFloat(int32_t nameID, float_t f);

  /// @brief Method SetFloat_Injected, addr 0x73079d0, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloat_Injected(::System::IntPtr _unity_self, int32_t nameID, float_t f);

  /// [FreeFunction(Name = "VisualEffectBindings::SetValueFromScript<int>", HasExplicitThis = true)]
  /// @brief Method SetInt, addr 0x7307758, size 0x98, virtual false, abstract: false, final false
  inline void SetInt(int32_t nameID, int32_t i);

  /// @brief Method SetInt_Injected, addr 0x73077f0, size 0x54, virtual false, abstract: false, final false
  static inline void SetInt_Injected(::System::IntPtr _unity_self, int32_t nameID, int32_t i);

  /// @brief Method SetTexture, addr 0x730806c, size 0x34, virtual false, abstract: false, final false
  inline void SetTexture(::StringW name, ::UnityEngine::Texture* t);

  /// [FreeFunction(Name = "VisualEffectBindings::SetValueFromScript<Texture*>", HasExplicitThis = true)]
  /// @brief Method SetTexture, addr 0x7307d0c, size 0xec, virtual false, abstract: false, final false
  inline void SetTexture(int32_t nameID, /* [NotNull] */ ::UnityEngine::Texture* t);

  /// @brief Method SetTexture_Injected, addr 0x7307df8, size 0x54, virtual false, abstract: false, final false
  static inline void SetTexture_Injected(::System::IntPtr _unity_self, int32_t nameID, ::System::IntPtr t);

  /// @brief Method SetUInt, addr 0x7307fb0, size 0x34, virtual false, abstract: false, final false
  inline void SetUInt(::StringW name, uint32_t i);

  /// [FreeFunction(Name = "VisualEffectBindings::SetValueFromScript<UInt32>", HasExplicitThis = true)]
  /// @brief Method SetUInt, addr 0x7307844, size 0x98, virtual false, abstract: false, final false
  inline void SetUInt(int32_t nameID, uint32_t i);

  /// @brief Method SetUInt_Injected, addr 0x73078dc, size 0x54, virtual false, abstract: false, final false
  static inline void SetUInt_Injected(::System::IntPtr _unity_self, int32_t nameID, uint32_t i);

  /// [FreeFunction(Name = "VisualEffectBindings::SetValueFromScript<Vector2f>", HasExplicitThis = true)]
  /// @brief Method SetVector2, addr 0x7307a24, size 0x9c, virtual false, abstract: false, final false
  inline void SetVector2(int32_t nameID, ::UnityEngine::Vector2 v);

  /// @brief Method SetVector2_Injected, addr 0x7307ac0, size 0x54, virtual false, abstract: false, final false
  static inline void SetVector2_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Vector2 const> v);

  /// [FreeFunction(Name = "VisualEffectBindings::SetValueFromScript<Vector3f>", HasExplicitThis = true)]
  /// @brief Method SetVector3, addr 0x7307b14, size 0xa8, virtual false, abstract: false, final false
  inline void SetVector3(int32_t nameID, ::UnityEngine::Vector3 v);

  /// @brief Method SetVector3_Injected, addr 0x7307bbc, size 0x54, virtual false, abstract: false, final false
  static inline void SetVector3_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Vector3 const> v);

  /// @brief Method SetVector4, addr 0x7308018, size 0x54, virtual false, abstract: false, final false
  inline void SetVector4(::StringW name, ::UnityEngine::Vector4 v);

  /// [FreeFunction(Name = "VisualEffectBindings::SetValueFromScript<Vector4f>", HasExplicitThis = true)]
  /// @brief Method SetVector4, addr 0x7307c10, size 0xa8, virtual false, abstract: false, final false
  inline void SetVector4(int32_t nameID, ::UnityEngine::Vector4 v);

  /// @brief Method SetVector4_Injected, addr 0x7307cb8, size 0x54, virtual false, abstract: false, final false
  static inline void SetVector4_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Vector4 const> v);

  /// @brief Method Simulate, addr 0x7308190, size 0xa0, virtual false, abstract: false, final false
  inline void Simulate(float_t stepDeltaTime, uint32_t stepCount);

  /// @brief Method Simulate_Injected, addr 0x7308230, size 0x54, virtual false, abstract: false, final false
  static inline void Simulate_Injected(::System::IntPtr _unity_self, float_t stepDeltaTime, uint32_t stepCount);

  constexpr ::UnityEngine::VFX::VFXEventAttribute* const& __cordl_internal_get_m_cachedEventAttribute() const;

  constexpr ::UnityEngine::VFX::VFXEventAttribute*& __cordl_internal_get_m_cachedEventAttribute();

  constexpr ::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>* const& __cordl_internal_get_outputEventReceived() const;

  constexpr ::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>*& __cordl_internal_get_outputEventReceived();

  constexpr void __cordl_internal_set_m_cachedEventAttribute(::UnityEngine::VFX::VFXEventAttribute* value);

  constexpr void __cordl_internal_set_outputEventReceived(::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>* value);

  /// @brief Method .ctor, addr 0x73082f4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_resetSeedOnPlay, addr 0x7306904, size 0x80, virtual false, abstract: false, final false
  inline bool get_resetSeedOnPlay();

  /// @brief Method get_resetSeedOnPlay_Injected, addr 0x7306984, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_resetSeedOnPlay_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_startSeed, addr 0x7306774, size 0x80, virtual false, abstract: false, final false
  inline uint32_t get_startSeed();

  /// @brief Method get_startSeed_Injected, addr 0x73067f4, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t get_startSeed_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_time, addr 0x73080d4, size 0x80, virtual false, abstract: false, final false
  inline float_t get_time();

  /// @brief Method get_time_Injected, addr 0x7308154, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_time_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_visualEffectAsset, addr 0x7306a94, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::VFX::VisualEffectAsset> get_visualEffectAsset();

  /// @brief Method get_visualEffectAsset_Injected, addr 0x7306be4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_visualEffectAsset_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_pause, addr 0x73066a0, size 0x90, virtual false, abstract: false, final false
  inline void set_pause(bool value);

  /// @brief Method set_pause_Injected, addr 0x7306730, size 0x44, virtual false, abstract: false, final false
  static inline void set_pause_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_resetSeedOnPlay, addr 0x73069c0, size 0x90, virtual false, abstract: false, final false
  inline void set_resetSeedOnPlay(bool value);

  /// @brief Method set_resetSeedOnPlay_Injected, addr 0x7306a50, size 0x44, virtual false, abstract: false, final false
  static inline void set_resetSeedOnPlay_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_startSeed, addr 0x7306830, size 0x90, virtual false, abstract: false, final false
  inline void set_startSeed(uint32_t value);

  /// @brief Method set_startSeed_Injected, addr 0x73068c0, size 0x44, virtual false, abstract: false, final false
  static inline void set_startSeed_Injected(::System::IntPtr _unity_self, uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualEffect", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualEffect(VisualEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualEffect", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualEffect(VisualEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23042 };

  /// @brief Field m_cachedEventAttribute, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::VFX::VFXEventAttribute* ___m_cachedEventAttribute;

  /// @brief Field outputEventReceived, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>* ___outputEventReceived;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VisualEffect, ___m_cachedEventAttribute) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffect, ___outputEventReceived) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VisualEffect) == 0x28, "Size mismatch!");

} // namespace UnityEngine::VFX
