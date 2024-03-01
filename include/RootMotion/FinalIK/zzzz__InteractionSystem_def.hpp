#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InteractionSystem)
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
namespace RootMotion::FinalIK {
class FullBodyBipedIK;
}
namespace RootMotion::FinalIK {
class InteractionEffector;
}
namespace RootMotion::FinalIK {
class InteractionLookAt;
}
namespace RootMotion::FinalIK {
class InteractionObject;
}
namespace RootMotion::FinalIK {
class InteractionTarget;
}
namespace RootMotion::FinalIK {
class InteractionTrigger;
}
namespace RootMotion::FinalIK {
class __InteractionObject__InteractionEvent;
}
namespace RootMotion::FinalIK {
class __InteractionSystem__InteractionDelegate;
}
namespace RootMotion::FinalIK {
class __InteractionSystem__InteractionEventDelegate;
}
namespace RootMotion::FinalIK {
class __InteractionTrigger__Range;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class InteractionSystem;
}
namespace RootMotion::FinalIK {
class __InteractionSystem__InteractionDelegate;
}
namespace RootMotion::FinalIK {
class __InteractionSystem__InteractionEventDelegate;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::InteractionSystem);
MARK_REF_PTR_T(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate);
MARK_REF_PTR_T(::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate);
// Type: ::InteractionDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::InteractionSystem::InteractionDelegate*
class CORDL_TYPE __InteractionSystem__InteractionDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x13653a4, size 0x90, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject* interactionObject, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1365434, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1365390, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject* interactionObject);

  static inline ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1363b24, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InteractionSystem__InteractionDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InteractionSystem__InteractionDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InteractionSystem__InteractionDelegate(__InteractionSystem__InteractionDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionSystem__InteractionDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InteractionSystem__InteractionDelegate(__InteractionSystem__InteractionDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate, 0x80>, "Size mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::InteractionEventDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::InteractionSystem::InteractionEventDelegate*
class CORDL_TYPE __InteractionSystem__InteractionEventDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1365518, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject* interactionObject,
                                             ::RootMotion::FinalIK::__InteractionObject__InteractionEvent* interactionEvent, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x13655b0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1365504, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject* interactionObject,
                     ::RootMotion::FinalIK::__InteractionObject__InteractionEvent* interactionEvent);

  static inline ::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1365440, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InteractionSystem__InteractionEventDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InteractionSystem__InteractionEventDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InteractionSystem__InteractionEventDelegate(__InteractionSystem__InteractionEventDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionSystem__InteractionEventDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InteractionSystem__InteractionEventDelegate(__InteractionSystem__InteractionEventDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate, 0x80>, "Size mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::InteractionSystem
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::InteractionSystem*
class CORDL_TYPE InteractionSystem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InteractionDelegate = ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate;

  using InteractionEventDelegate = ::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate;

  /// @brief Field FPSCamera, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_FPSCamera, put = __cordl_internal_set_FPSCamera))::UnityW<::UnityEngine::Transform> FPSCamera;

  /// @brief Field OnInteractionEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_OnInteractionEvent,
                      put = __cordl_internal_set_OnInteractionEvent))::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate* OnInteractionEvent;

  /// @brief Field OnInteractionPause, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_OnInteractionPause, put = __cordl_internal_set_OnInteractionPause))::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* OnInteractionPause;

  /// @brief Field OnInteractionPickUp, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_OnInteractionPickUp,
                      put = __cordl_internal_set_OnInteractionPickUp))::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* OnInteractionPickUp;

  /// @brief Field OnInteractionResume, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_OnInteractionResume,
                      put = __cordl_internal_set_OnInteractionResume))::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* OnInteractionResume;

  /// @brief Field OnInteractionStart, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_OnInteractionStart, put = __cordl_internal_set_OnInteractionStart))::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* OnInteractionStart;

  /// @brief Field OnInteractionStop, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_OnInteractionStop, put = __cordl_internal_set_OnInteractionStop))::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* OnInteractionStop;

  /// @brief Field <triggersInRange>k__BackingField, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get__triggersInRange_k__BackingField,
      put = __cordl_internal_set__triggersInRange_k__BackingField))::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>* _triggersInRange_k__BackingField;

  /// @brief Field bestRangeIndexes, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_bestRangeIndexes, put = __cordl_internal_set_bestRangeIndexes))::System::Collections::Generic::List_1<int32_t>* bestRangeIndexes;

  /// @brief Field c, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c))::UnityW<::UnityEngine::Collider> c;

  /// @brief Field camRaycastDistance, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_camRaycastDistance, put = __cordl_internal_set_camRaycastDistance)) float_t camRaycastDistance;

  /// @brief Field camRaycastLayers, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_camRaycastLayers, put = __cordl_internal_set_camRaycastLayers))::UnityEngine::LayerMask camRaycastLayers;

  /// @brief Field characterCollider, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_characterCollider, put = __cordl_internal_set_characterCollider))::UnityW<::UnityEngine::Collider> characterCollider;

  /// @brief Field fadeInTime, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_fadeInTime, put = __cordl_internal_set_fadeInTime)) float_t fadeInTime;

  /// @brief Field fullBody, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_fullBody, put = __cordl_internal_set_fullBody))::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> fullBody;

  __declspec(property(get = get_ik, put = set_ik))::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> ik;

  /// @brief Field inContact, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_inContact,
                      put = __cordl_internal_set_inContact))::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>* inContact;

  __declspec(property(get = get_inInteraction)) bool inInteraction;

  /// @brief Field initiated, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get_initiated, put = __cordl_internal_set_initiated)) bool initiated;

  /// @brief Field interactionEffectors, offset 0xd0, size 0x8
  __declspec(
      property(get = __cordl_internal_get_interactionEffectors,
               put = __cordl_internal_set_interactionEffectors))::ArrayW<::RootMotion::FinalIK::InteractionEffector*, ::Array<::RootMotion::FinalIK::InteractionEffector*>*> interactionEffectors;

  /// @brief Field lastCollider, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_lastCollider, put = __cordl_internal_set_lastCollider))::UnityW<::UnityEngine::Collider> lastCollider;

  /// @brief Field lookAt, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_lookAt, put = __cordl_internal_set_lookAt))::RootMotion::FinalIK::InteractionLookAt* lookAt;

  /// @brief Field raycastHit, offset 0x90, size 0x2c
  __declspec(property(get = __cordl_internal_get_raycastHit, put = __cordl_internal_set_raycastHit))::UnityEngine::RaycastHit raycastHit;

  /// @brief Field resetToDefaultsSpeed, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_resetToDefaultsSpeed, put = __cordl_internal_set_resetToDefaultsSpeed)) float_t resetToDefaultsSpeed;

  /// @brief Field speed, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_speed, put = __cordl_internal_set_speed)) float_t speed;

  /// @brief Field targetTag, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_targetTag, put = __cordl_internal_set_targetTag))::StringW targetTag;

  __declspec(property(get = get_triggersInRange, put = set_triggersInRange))::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>* triggersInRange;

  /// @brief Method ASThread, addr 0x1361b20, size 0x44, virtual false, abstract: false, final false
  inline void ASThread();

  /// @brief Method ContactIsInRange, addr 0x1364144, size 0x1a8, virtual false, abstract: false, final false
  inline bool ContactIsInRange(int32_t index, ByRef<int32_t> bestRangeIndex);

  /// @brief Method GetClosestInteractionObjectInRange, addr 0x1362eb0, size 0x38, virtual false, abstract: false, final false
  inline ::UnityW<::RootMotion::FinalIK::InteractionObject> GetClosestInteractionObjectInRange();

  /// @brief Method GetClosestInteractionObjectsInRange, addr 0x1362f48, size 0x108, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::RootMotion::FinalIK::InteractionObject>, ::Array<::UnityW<::RootMotion::FinalIK::InteractionObject>>*> GetClosestInteractionObjectsInRange();

  /// @brief Method GetClosestInteractionRange, addr 0x1362c24, size 0xe8, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__InteractionTrigger__Range* GetClosestInteractionRange();

  /// @brief Method GetClosestInteractionTargetInRange, addr 0x1362ee8, size 0x60, virtual false, abstract: false, final false
  inline ::UnityW<::RootMotion::FinalIK::InteractionTarget> GetClosestInteractionTargetInRange();

  /// @brief Method GetClosestInteractionTargetsInRange, addr 0x1363050, size 0x1e0, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::RootMotion::FinalIK::InteractionTarget>, ::Array<::UnityW<::RootMotion::FinalIK::InteractionTarget>>*> GetClosestInteractionTargetsInRange();

  /// @brief Method GetClosestTriggerIndex, addr 0x1362d0c, size 0x1a4, virtual false, abstract: false, final false
  inline int32_t GetClosestTriggerIndex();

  /// @brief Method GetInteractionObject, addr 0x1362378, size 0x80, virtual false, abstract: false, final false
  inline ::UnityW<::RootMotion::FinalIK::InteractionObject> GetInteractionObject(::RootMotion::FinalIK::FullBodyBipedEffector effectorType);

  /// @brief Method GetMinActiveProgress, addr 0x13624a0, size 0xd0, virtual false, abstract: false, final false
  inline float_t GetMinActiveProgress();

  /// @brief Method GetProgress, addr 0x13623f8, size 0xa8, virtual false, abstract: false, final false
  inline float_t GetProgress(::RootMotion::FinalIK::FullBodyBipedEffector effectorType);

  /// @brief Method GetTriggerRange, addr 0x13634a4, size 0x120, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__InteractionTrigger__Range* GetTriggerRange(int32_t index);

  /// @brief Method InteractionPause, addr 0x1363e30, size 0x20, virtual false, abstract: false, final false
  inline void InteractionPause(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject* interactionObject);

  /// @brief Method InteractionResume, addr 0x1363e50, size 0x1c, virtual false, abstract: false, final false
  inline void InteractionResume(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject* interactionObject);

  /// @brief Method InteractionStop, addr 0x1363e6c, size 0x1c, virtual false, abstract: false, final false
  inline void InteractionStop(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject* interactionObject);

  /// @brief Method IsInInteraction, addr 0x1361cdc, size 0xb8, virtual false, abstract: false, final false
  inline bool IsInInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType);

  /// @brief Method IsInSync, addr 0x1361ee4, size 0xe4, virtual false, abstract: false, final false
  inline bool IsInSync();

  /// @brief Method IsPaused, addr 0x1361e4c, size 0x98, virtual false, abstract: false, final false
  inline bool IsPaused();

  /// @brief Method IsPaused, addr 0x1361d94, size 0xb8, virtual false, abstract: false, final false
  inline bool IsPaused(::RootMotion::FinalIK::FullBodyBipedEffector effectorType);

  /// @brief Method IsValid, addr 0x1361bfc, size 0xe0, virtual false, abstract: false, final false
  inline bool IsValid(bool log);

  /// @brief Method LookAtInteraction, addr 0x1363e88, size 0x54, virtual false, abstract: false, final false
  inline void LookAtInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject* interactionObject);

  static inline ::RootMotion::FinalIK::InteractionSystem* New_ctor();

  /// @brief Method OnDestroy, addr 0x1364c04, size 0x3e8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDrawGizmosSelected, addr 0x13644a0, size 0xe4, virtual false, abstract: false, final false
  inline void OnDrawGizmosSelected();

  /// @brief Method OnFixTransforms, addr 0x1364bec, size 0x18, virtual false, abstract: false, final false
  inline void OnFixTransforms();

  /// @brief Method OnPostFBBIK, addr 0x1364b2c, size 0xc0, virtual false, abstract: false, final false
  inline void OnPostFBBIK();

  /// @brief Method OnPreFBBIK, addr 0x1364aa4, size 0x88, virtual false, abstract: false, final false
  inline void OnPreFBBIK();

  /// @brief Method OnTriggerEnter, addr 0x1363edc, size 0x16c, virtual false, abstract: false, final false
  inline void OnTriggerEnter(::UnityEngine::Collider* c);

  /// @brief Method OnTriggerExit, addr 0x1364048, size 0xfc, virtual false, abstract: false, final false
  inline void OnTriggerExit(::UnityEngine::Collider* c);

  /// @brief Method OpenScriptReference, addr 0x1361988, size 0x44, virtual false, abstract: false, final false
  inline void OpenScriptReference();

  /// @brief Method OpenTutorial1, addr 0x13619cc, size 0x44, virtual false, abstract: false, final false
  inline void OpenTutorial1();

  /// @brief Method OpenTutorial2, addr 0x1361a10, size 0x44, virtual false, abstract: false, final false
  inline void OpenTutorial2();

  /// @brief Method OpenTutorial3, addr 0x1361a54, size 0x44, virtual false, abstract: false, final false
  inline void OpenTutorial3();

  /// @brief Method OpenTutorial4, addr 0x1361a98, size 0x44, virtual false, abstract: false, final false
  inline void OpenTutorial4();

  /// @brief Method OpenUserManual, addr 0x1361944, size 0x44, virtual false, abstract: false, final false
  inline void OpenUserManual();

  /// @brief Method PauseAll, addr 0x136224c, size 0x68, virtual false, abstract: false, final false
  inline void PauseAll();

  /// @brief Method PauseInteraction, addr 0x13620c0, size 0x84, virtual false, abstract: false, final false
  inline bool PauseInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType);

  /// @brief Method Raycasting, addr 0x1364868, size 0x130, virtual false, abstract: false, final false
  inline void Raycasting();

  /// @brief Method ResumeAll, addr 0x13622b4, size 0x68, virtual false, abstract: false, final false
  inline void ResumeAll();

  /// @brief Method ResumeInteraction, addr 0x1362144, size 0x84, virtual false, abstract: false, final false
  inline bool ResumeInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType);

  /// @brief Method Start, addr 0x13635e4, size 0x540, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartInteraction, addr 0x1361fc8, size 0xf8, virtual false, abstract: false, final false
  inline bool StartInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject* interactionObject, bool interrupt);

  /// @brief Method StopAll, addr 0x136231c, size 0x5c, virtual false, abstract: false, final false
  inline void StopAll();

  /// @brief Method StopInteraction, addr 0x13621c8, size 0x84, virtual false, abstract: false, final false
  inline bool StopInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType);

  /// @brief Method SupportGroup, addr 0x1361adc, size 0x44, virtual false, abstract: false, final false
  inline void SupportGroup();

  /// @brief Method TriggerEffectorsReady, addr 0x1363230, size 0x274, virtual false, abstract: false, final false
  inline bool TriggerEffectorsReady(int32_t index);

  /// @brief Method TriggerIndexIsValid, addr 0x13626ec, size 0x114, virtual false, abstract: false, final false
  inline bool TriggerIndexIsValid(int32_t index);

  /// @brief Method TriggerInteraction, addr 0x1362570, size 0x17c, virtual false, abstract: false, final false
  inline bool TriggerInteraction(int32_t index, bool interrupt);

  /// @brief Method TriggerInteraction, addr 0x1362800, size 0x1bc, virtual false, abstract: false, final false
  inline bool TriggerInteraction(int32_t index, bool interrupt, ByRef<::RootMotion::FinalIK::InteractionObject*> interactionObject);

  /// @brief Method TriggerInteraction, addr 0x13629bc, size 0x268, virtual false, abstract: false, final false
  inline bool TriggerInteraction(int32_t index, bool interrupt, ByRef<::RootMotion::FinalIK::InteractionTarget*> interactionTarget);

  /// @brief Method Update, addr 0x1364584, size 0x2e4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateEffectors, addr 0x1364998, size 0x10c, virtual false, abstract: false, final false
  inline void UpdateEffectors();

  /// @brief Method UpdateTriggerEventBroadcasting, addr 0x1363be8, size 0x248, virtual false, abstract: false, final false
  inline void UpdateTriggerEventBroadcasting();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_FPSCamera() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_FPSCamera();

  constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*& __cordl_internal_get_OnInteractionEvent();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*> const& __cordl_internal_get_OnInteractionEvent() const;

  constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*& __cordl_internal_get_OnInteractionPause();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*> const& __cordl_internal_get_OnInteractionPause() const;

  constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*& __cordl_internal_get_OnInteractionPickUp();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*> const& __cordl_internal_get_OnInteractionPickUp() const;

  constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*& __cordl_internal_get_OnInteractionResume();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*> const& __cordl_internal_get_OnInteractionResume() const;

  constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*& __cordl_internal_get_OnInteractionStart();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*> const& __cordl_internal_get_OnInteractionStart() const;

  constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*& __cordl_internal_get_OnInteractionStop();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*> const& __cordl_internal_get_OnInteractionStop() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>*& __cordl_internal_get__triggersInRange_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>*> const&
  __cordl_internal_get__triggersInRange_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_bestRangeIndexes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_bestRangeIndexes() const;

  constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_c() const;

  constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_c();

  constexpr float_t const& __cordl_internal_get_camRaycastDistance() const;

  constexpr float_t& __cordl_internal_get_camRaycastDistance();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_camRaycastLayers() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_camRaycastLayers();

  constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_characterCollider() const;

  constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_characterCollider();

  constexpr float_t const& __cordl_internal_get_fadeInTime() const;

  constexpr float_t& __cordl_internal_get_fadeInTime();

  constexpr ::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> const& __cordl_internal_get_fullBody() const;

  constexpr ::UnityW<::RootMotion::FinalIK::FullBodyBipedIK>& __cordl_internal_get_fullBody();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>*& __cordl_internal_get_inContact();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>*> const& __cordl_internal_get_inContact() const;

  constexpr bool const& __cordl_internal_get_initiated() const;

  constexpr bool& __cordl_internal_get_initiated();

  constexpr ::ArrayW<::RootMotion::FinalIK::InteractionEffector*, ::Array<::RootMotion::FinalIK::InteractionEffector*>*> const& __cordl_internal_get_interactionEffectors() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::InteractionEffector*, ::Array<::RootMotion::FinalIK::InteractionEffector*>*>& __cordl_internal_get_interactionEffectors();

  constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_lastCollider() const;

  constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_lastCollider();

  constexpr ::RootMotion::FinalIK::InteractionLookAt*& __cordl_internal_get_lookAt();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::InteractionLookAt*> const& __cordl_internal_get_lookAt() const;

  constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_raycastHit() const;

  constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_raycastHit();

  constexpr float_t const& __cordl_internal_get_resetToDefaultsSpeed() const;

  constexpr float_t& __cordl_internal_get_resetToDefaultsSpeed();

  constexpr float_t const& __cordl_internal_get_speed() const;

  constexpr float_t& __cordl_internal_get_speed();

  constexpr ::StringW const& __cordl_internal_get_targetTag() const;

  constexpr ::StringW& __cordl_internal_get_targetTag();

  constexpr void __cordl_internal_set_FPSCamera(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_OnInteractionEvent(::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate* value);

  constexpr void __cordl_internal_set_OnInteractionPause(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* value);

  constexpr void __cordl_internal_set_OnInteractionPickUp(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* value);

  constexpr void __cordl_internal_set_OnInteractionResume(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* value);

  constexpr void __cordl_internal_set_OnInteractionStart(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* value);

  constexpr void __cordl_internal_set_OnInteractionStop(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* value);

  constexpr void __cordl_internal_set__triggersInRange_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>* value);

  constexpr void __cordl_internal_set_bestRangeIndexes(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_c(::UnityW<::UnityEngine::Collider> value);

  constexpr void __cordl_internal_set_camRaycastDistance(float_t value);

  constexpr void __cordl_internal_set_camRaycastLayers(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_characterCollider(::UnityW<::UnityEngine::Collider> value);

  constexpr void __cordl_internal_set_fadeInTime(float_t value);

  constexpr void __cordl_internal_set_fullBody(::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> value);

  constexpr void __cordl_internal_set_inContact(::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>* value);

  constexpr void __cordl_internal_set_initiated(bool value);

  constexpr void __cordl_internal_set_interactionEffectors(::ArrayW<::RootMotion::FinalIK::InteractionEffector*, ::Array<::RootMotion::FinalIK::InteractionEffector*>*> value);

  constexpr void __cordl_internal_set_lastCollider(::UnityW<::UnityEngine::Collider> value);

  constexpr void __cordl_internal_set_lookAt(::RootMotion::FinalIK::InteractionLookAt* value);

  constexpr void __cordl_internal_set_raycastHit(::UnityEngine::RaycastHit value);

  constexpr void __cordl_internal_set_resetToDefaultsSpeed(float_t value);

  constexpr void __cordl_internal_set_speed(float_t value);

  constexpr void __cordl_internal_set_targetTag(::StringW value);

  /// @brief Method .ctor, addr 0x1364fec, size 0x3a4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ik, addr 0x13635c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> get_ik();

  /// @brief Method get_inInteraction, addr 0x1361b64, size 0x98, virtual false, abstract: false, final false
  inline bool get_inInteraction();

  /// @brief Method get_triggersInRange, addr 0x13635d4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>* get_triggersInRange();

  /// @brief Method set_ik, addr 0x13635cc, size 0x8, virtual false, abstract: false, final false
  inline void set_ik(::RootMotion::FinalIK::FullBodyBipedIK* value);

  /// @brief Method set_triggersInRange, addr 0x13635dc, size 0x8, virtual false, abstract: false, final false
  inline void set_triggersInRange(::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractionSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InteractionSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteractionSystem(InteractionSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteractionSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteractionSystem(InteractionSystem const&) = delete;

  /// @brief Field targetTag, offset: 0x18, size: 0x8, def value: None
  ::StringW ___targetTag;

  /// @brief Field fadeInTime, offset: 0x20, size: 0x4, def value: None
  float_t ___fadeInTime;

  /// @brief Field speed, offset: 0x24, size: 0x4, def value: None
  float_t ___speed;

  /// @brief Field resetToDefaultsSpeed, offset: 0x28, size: 0x4, def value: None
  float_t ___resetToDefaultsSpeed;

  /// @brief Field characterCollider, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> ___characterCollider;

  /// @brief Field FPSCamera, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___FPSCamera;

  /// @brief Field camRaycastLayers, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___camRaycastLayers;

  /// @brief Field camRaycastDistance, offset: 0x44, size: 0x4, def value: None
  float_t ___camRaycastDistance;

  /// @brief Field <triggersInRange>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>* ____triggersInRange_k__BackingField;

  /// @brief Field inContact, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::RootMotion::FinalIK::InteractionTrigger>>* ___inContact;

  /// @brief Field bestRangeIndexes, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___bestRangeIndexes;

  /// @brief Field OnInteractionStart, offset: 0x60, size: 0x8, def value: None
  ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* ___OnInteractionStart;

  /// @brief Field OnInteractionPause, offset: 0x68, size: 0x8, def value: None
  ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* ___OnInteractionPause;

  /// @brief Field OnInteractionPickUp, offset: 0x70, size: 0x8, def value: None
  ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* ___OnInteractionPickUp;

  /// @brief Field OnInteractionResume, offset: 0x78, size: 0x8, def value: None
  ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* ___OnInteractionResume;

  /// @brief Field OnInteractionStop, offset: 0x80, size: 0x8, def value: None
  ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* ___OnInteractionStop;

  /// @brief Field OnInteractionEvent, offset: 0x88, size: 0x8, def value: None
  ::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate* ___OnInteractionEvent;

  /// @brief Field raycastHit, offset: 0x90, size: 0x2c, def value: None
  ::UnityEngine::RaycastHit ___raycastHit;

  /// @brief Field fullBody, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> ___fullBody;

  /// @brief Field lookAt, offset: 0xc8, size: 0x8, def value: None
  ::RootMotion::FinalIK::InteractionLookAt* ___lookAt;

  /// @brief Field interactionEffectors, offset: 0xd0, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::InteractionEffector*, ::Array<::RootMotion::FinalIK::InteractionEffector*>*> ___interactionEffectors;

  /// @brief Field initiated, offset: 0xd8, size: 0x1, def value: None
  bool ___initiated;

  /// @brief Field lastCollider, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> ___lastCollider;

  /// @brief Field c, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> ___c;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::InteractionSystem, 0xf0>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___targetTag) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___fadeInTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___speed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___resetToDefaultsSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___characterCollider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___FPSCamera) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___camRaycastLayers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___camRaycastDistance) == 0x44, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ____triggersInRange_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___inContact) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___bestRangeIndexes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___OnInteractionStart) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___OnInteractionPause) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___OnInteractionPickUp) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___OnInteractionResume) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___OnInteractionStop) == 0x80, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___OnInteractionEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___raycastHit) == 0x90, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___fullBody) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___lookAt) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___interactionEffectors) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___initiated) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___lastCollider) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionSystem, ___c) == 0xe8, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::InteractionSystem);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::InteractionSystem*, "RootMotion.FinalIK", "InteractionSystem");
NEED_NO_BOX(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*, "RootMotion.FinalIK", "InteractionSystem/InteractionDelegate");
NEED_NO_BOX(::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*, "RootMotion.FinalIK", "InteractionSystem/InteractionEventDelegate");
