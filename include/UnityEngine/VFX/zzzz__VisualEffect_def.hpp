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

  /// @brief Method CheckValidVFXEventAttribute, addr 0x72c9d7c, size 0xd4, virtual false, abstract: false, final false
  inline void CheckValidVFXEventAttribute(::UnityEngine::VFX::VFXEventAttribute* eventAttribute);

  /// @brief Method CreateVFXEventAttribute, addr 0x72c9cec, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::VFX::VFXEventAttribute* CreateVFXEventAttribute();

  /// [FreeFunction(Name = "VisualEffectBindings::GetValueFromScript<float>", HasExplicitThis = true)]
  /// @brief Method GetFloat, addr 0x72caf18, size 0x90, virtual false, abstract: false, final false
  inline float_t GetFloat(int32_t nameID);

  /// @brief Method GetFloat_Injected, addr 0x72cafa8, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloat_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// [FreeFunction(Name = "VisualEffectBindings::HasValueFromScript<bool>", HasExplicitThis = true)]
  /// @brief Method HasBool, addr 0x72ca098, size 0x90, virtual false, abstract: false, final false
  inline bool HasBool(int32_t nameID);

  /// @brief Method HasBool_Injected, addr 0x72ca128, size 0x44, virtual false, abstract: false, final false
  static inline bool HasBool_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method HasFloat, addr 0x72cb010, size 0x24, virtual false, abstract: false, final false
  inline bool HasFloat(::StringW name);

  /// [FreeFunction(Name = "VisualEffectBindings::HasValueFromScript<float>", HasExplicitThis = true)]
  /// @brief Method HasFloat, addr 0x72ca314, size 0x90, virtual false, abstract: false, final false
  inline bool HasFloat(int32_t nameID);

  /// @brief Method HasFloat_Injected, addr 0x72ca3a4, size 0x44, virtual false, abstract: false, final false
  static inline bool HasFloat_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// [FreeFunction(Name = "VisualEffectBindings::HasValueFromScript<int>", HasExplicitThis = true)]
  /// @brief Method HasInt, addr 0x72ca16c, size 0x90, virtual false, abstract: false, final false
  inline bool HasInt(int32_t nameID);

  /// @brief Method HasInt_Injected, addr 0x72ca1fc, size 0x44, virtual false, abstract: false, final false
  static inline bool HasInt_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method HasTexture, addr 0x72cb058, size 0x24, virtual false, abstract: false, final false
  inline bool HasTexture(::StringW name);

  /// [FreeFunction(Name = "VisualEffectBindings::HasValueFromScript<Texture*>", HasExplicitThis = true)]
  /// @brief Method HasTexture, addr 0x72ca664, size 0x90, virtual false, abstract: false, final false
  inline bool HasTexture(int32_t nameID);

  /// @brief Method HasTexture_Injected, addr 0x72ca6f4, size 0x44, virtual false, abstract: false, final false
  static inline bool HasTexture_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method HasUInt, addr 0x72cafec, size 0x24, virtual false, abstract: false, final false
  inline bool HasUInt(::StringW name);

  /// [FreeFunction(Name = "VisualEffectBindings::HasValueFromScript<UInt32>", HasExplicitThis = true)]
  /// @brief Method HasUInt, addr 0x72ca240, size 0x90, virtual false, abstract: false, final false
  inline bool HasUInt(int32_t nameID);

  /// @brief Method HasUInt_Injected, addr 0x72ca2d0, size 0x44, virtual false, abstract: false, final false
  static inline bool HasUInt_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// [FreeFunction(Name = "VisualEffectBindings::HasValueFromScript<Vector2f>", HasExplicitThis = true)]
  /// @brief Method HasVector2, addr 0x72ca3e8, size 0x90, virtual false, abstract: false, final false
  inline bool HasVector2(int32_t nameID);

  /// @brief Method HasVector2_Injected, addr 0x72ca478, size 0x44, virtual false, abstract: false, final false
  static inline bool HasVector2_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// [FreeFunction(Name = "VisualEffectBindings::HasValueFromScript<Vector3f>", HasExplicitThis = true)]
  /// @brief Method HasVector3, addr 0x72ca4bc, size 0x90, virtual false, abstract: false, final false
  inline bool HasVector3(int32_t nameID);

  /// @brief Method HasVector3_Injected, addr 0x72ca54c, size 0x44, virtual false, abstract: false, final false
  static inline bool HasVector3_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method HasVector4, addr 0x72cb034, size 0x24, virtual false, abstract: false, final false
  inline bool HasVector4(::StringW name);

  /// [FreeFunction(Name = "VisualEffectBindings::HasValueFromScript<Vector4f>", HasExplicitThis = true)]
  /// @brief Method HasVector4, addr 0x72ca590, size 0x90, virtual false, abstract: false, final false
  inline bool HasVector4(int32_t nameID);

  /// @brief Method HasVector4_Injected, addr 0x72ca620, size 0x44, virtual false, abstract: false, final false
  static inline bool HasVector4_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// [RequiredByNativeCode]
  /// @brief Method InvokeGetCachedEventAttributeForOutputEvent_Internal, addr 0x72cb350, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::VFXEventAttribute* InvokeGetCachedEventAttributeForOutputEvent_Internal(::UnityEngine::VFX::VisualEffect* source);

  /// [RequiredByNativeCode]
  /// @brief Method InvokeOutputEventReceived_Internal, addr 0x72cb38c, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeOutputEventReceived_Internal(::UnityEngine::VFX::VisualEffect* source, int32_t eventNameId);

  static inline ::UnityEngine::VFX::VisualEffect* New_ctor();

  /// @brief Method Reinit, addr 0x72c9fc4, size 0x90, virtual false, abstract: false, final false
  inline void Reinit(bool sendInitialEventAndPrewarm);

  /// @brief Method Reinit_Injected, addr 0x72ca054, size 0x44, virtual false, abstract: false, final false
  static inline void Reinit_Injected(::System::IntPtr _unity_self, bool sendInitialEventAndPrewarm);

  /// @brief Method SendEvent, addr 0x72c9f78, size 0x44, virtual false, abstract: false, final false
  inline void SendEvent(::StringW eventName, ::UnityEngine::VFX::VFXEventAttribute* eventAttribute);

  /// @brief Method SendEvent, addr 0x72c9fbc, size 0x8, virtual false, abstract: false, final false
  inline void SendEvent(int32_t eventNameID);

  /// @brief Method SendEvent, addr 0x72c9f44, size 0x34, virtual false, abstract: false, final false
  inline void SendEvent(int32_t eventNameID, ::UnityEngine::VFX::VFXEventAttribute* eventAttribute);

  /// [FreeFunction(Name = "VisualEffectBindings::SendEventFromScript", HasExplicitThis = true)]
  /// @brief Method SendEventFromScript, addr 0x72c9e50, size 0xa0, virtual false, abstract: false, final false
  inline void SendEventFromScript(int32_t eventNameID, ::UnityEngine::VFX::VFXEventAttribute* eventAttribute);

  /// @brief Method SendEventFromScript_Injected, addr 0x72c9ef0, size 0x54, virtual false, abstract: false, final false
  static inline void SendEventFromScript_Injected(::System::IntPtr _unity_self, int32_t eventNameID, ::System::IntPtr eventAttribute);

  /// @brief Method SetBool, addr 0x72cb16c, size 0x34, virtual false, abstract: false, final false
  inline void SetBool(::StringW name, bool b);

  /// [FreeFunction(Name = "VisualEffectBindings::SetValueFromScript<bool>", HasExplicitThis = true)]
  /// @brief Method SetBool, addr 0x72ca738, size 0x98, virtual false, abstract: false, final false
  inline void SetBool(int32_t nameID, bool b);

  /// @brief Method SetBool_Injected, addr 0x72ca7d0, size 0x54, virtual false, abstract: false, final false
  static inline void SetBool_Injected(::System::IntPtr _unity_self, int32_t nameID, bool b);

  /// @brief Method SetFloat, addr 0x72cb0b0, size 0x34, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t f);

  /// [FreeFunction(Name = "VisualEffectBindings::SetValueFromScript<float>", HasExplicitThis = true)]
  /// @brief Method SetFloat, addr 0x72ca9fc, size 0xa0, virtual false, abstract: false, final false
  inline void SetFloat(int32_t nameID, float_t f);

  /// @brief Method SetFloat_Injected, addr 0x72caa9c, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloat_Injected(::System::IntPtr _unity_self, int32_t nameID, float_t f);

  /// [FreeFunction(Name = "VisualEffectBindings::SetValueFromScript<int>", HasExplicitThis = true)]
  /// @brief Method SetInt, addr 0x72ca824, size 0x98, virtual false, abstract: false, final false
  inline void SetInt(int32_t nameID, int32_t i);

  /// @brief Method SetInt_Injected, addr 0x72ca8bc, size 0x54, virtual false, abstract: false, final false
  static inline void SetInt_Injected(::System::IntPtr _unity_self, int32_t nameID, int32_t i);

  /// @brief Method SetTexture, addr 0x72cb138, size 0x34, virtual false, abstract: false, final false
  inline void SetTexture(::StringW name, ::UnityEngine::Texture* t);

  /// [FreeFunction(Name = "VisualEffectBindings::SetValueFromScript<Texture*>", HasExplicitThis = true)]
  /// @brief Method SetTexture, addr 0x72cadd8, size 0xec, virtual false, abstract: false, final false
  inline void SetTexture(int32_t nameID, /* [NotNull] */ ::UnityEngine::Texture* t);

  /// @brief Method SetTexture_Injected, addr 0x72caec4, size 0x54, virtual false, abstract: false, final false
  static inline void SetTexture_Injected(::System::IntPtr _unity_self, int32_t nameID, ::System::IntPtr t);

  /// @brief Method SetUInt, addr 0x72cb07c, size 0x34, virtual false, abstract: false, final false
  inline void SetUInt(::StringW name, uint32_t i);

  /// [FreeFunction(Name = "VisualEffectBindings::SetValueFromScript<UInt32>", HasExplicitThis = true)]
  /// @brief Method SetUInt, addr 0x72ca910, size 0x98, virtual false, abstract: false, final false
  inline void SetUInt(int32_t nameID, uint32_t i);

  /// @brief Method SetUInt_Injected, addr 0x72ca9a8, size 0x54, virtual false, abstract: false, final false
  static inline void SetUInt_Injected(::System::IntPtr _unity_self, int32_t nameID, uint32_t i);

  /// [FreeFunction(Name = "VisualEffectBindings::SetValueFromScript<Vector2f>", HasExplicitThis = true)]
  /// @brief Method SetVector2, addr 0x72caaf0, size 0x9c, virtual false, abstract: false, final false
  inline void SetVector2(int32_t nameID, ::UnityEngine::Vector2 v);

  /// @brief Method SetVector2_Injected, addr 0x72cab8c, size 0x54, virtual false, abstract: false, final false
  static inline void SetVector2_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Vector2 const> v);

  /// [FreeFunction(Name = "VisualEffectBindings::SetValueFromScript<Vector3f>", HasExplicitThis = true)]
  /// @brief Method SetVector3, addr 0x72cabe0, size 0xa8, virtual false, abstract: false, final false
  inline void SetVector3(int32_t nameID, ::UnityEngine::Vector3 v);

  /// @brief Method SetVector3_Injected, addr 0x72cac88, size 0x54, virtual false, abstract: false, final false
  static inline void SetVector3_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Vector3 const> v);

  /// @brief Method SetVector4, addr 0x72cb0e4, size 0x54, virtual false, abstract: false, final false
  inline void SetVector4(::StringW name, ::UnityEngine::Vector4 v);

  /// [FreeFunction(Name = "VisualEffectBindings::SetValueFromScript<Vector4f>", HasExplicitThis = true)]
  /// @brief Method SetVector4, addr 0x72cacdc, size 0xa8, virtual false, abstract: false, final false
  inline void SetVector4(int32_t nameID, ::UnityEngine::Vector4 v);

  /// @brief Method SetVector4_Injected, addr 0x72cad84, size 0x54, virtual false, abstract: false, final false
  static inline void SetVector4_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Vector4 const> v);

  /// @brief Method Simulate, addr 0x72cb25c, size 0xa0, virtual false, abstract: false, final false
  inline void Simulate(float_t stepDeltaTime, uint32_t stepCount);

  /// @brief Method Simulate_Injected, addr 0x72cb2fc, size 0x54, virtual false, abstract: false, final false
  static inline void Simulate_Injected(::System::IntPtr _unity_self, float_t stepDeltaTime, uint32_t stepCount);

  constexpr ::UnityEngine::VFX::VFXEventAttribute* const& __cordl_internal_get_m_cachedEventAttribute() const;

  constexpr ::UnityEngine::VFX::VFXEventAttribute*& __cordl_internal_get_m_cachedEventAttribute();

  constexpr ::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>* const& __cordl_internal_get_outputEventReceived() const;

  constexpr ::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>*& __cordl_internal_get_outputEventReceived();

  constexpr void __cordl_internal_set_m_cachedEventAttribute(::UnityEngine::VFX::VFXEventAttribute* value);

  constexpr void __cordl_internal_set_outputEventReceived(::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>* value);

  /// @brief Method .ctor, addr 0x72cb3c0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_resetSeedOnPlay, addr 0x72c99d0, size 0x80, virtual false, abstract: false, final false
  inline bool get_resetSeedOnPlay();

  /// @brief Method get_resetSeedOnPlay_Injected, addr 0x72c9a50, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_resetSeedOnPlay_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_startSeed, addr 0x72c9840, size 0x80, virtual false, abstract: false, final false
  inline uint32_t get_startSeed();

  /// @brief Method get_startSeed_Injected, addr 0x72c98c0, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t get_startSeed_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_time, addr 0x72cb1a0, size 0x80, virtual false, abstract: false, final false
  inline float_t get_time();

  /// @brief Method get_time_Injected, addr 0x72cb220, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_time_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_visualEffectAsset, addr 0x72c9b60, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::VFX::VisualEffectAsset> get_visualEffectAsset();

  /// @brief Method get_visualEffectAsset_Injected, addr 0x72c9cb0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_visualEffectAsset_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_pause, addr 0x72c976c, size 0x90, virtual false, abstract: false, final false
  inline void set_pause(bool value);

  /// @brief Method set_pause_Injected, addr 0x72c97fc, size 0x44, virtual false, abstract: false, final false
  static inline void set_pause_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_resetSeedOnPlay, addr 0x72c9a8c, size 0x90, virtual false, abstract: false, final false
  inline void set_resetSeedOnPlay(bool value);

  /// @brief Method set_resetSeedOnPlay_Injected, addr 0x72c9b1c, size 0x44, virtual false, abstract: false, final false
  static inline void set_resetSeedOnPlay_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_startSeed, addr 0x72c98fc, size 0x90, virtual false, abstract: false, final false
  inline void set_startSeed(uint32_t value);

  /// @brief Method set_startSeed_Injected, addr 0x72c998c, size 0x44, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22921 };

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
