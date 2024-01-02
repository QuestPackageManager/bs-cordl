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
class InteractionObject;
}
namespace RootMotion::FinalIK {
class InteractionTrigger;
}
namespace RootMotion::FinalIK {
class __InteractionTrigger__Range;
}
namespace RootMotion::FinalIK {
class InteractionTarget;
}
namespace RootMotion::FinalIK {
class __InteractionSystem__InteractionDelegate;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class InteractionLookAt;
}
namespace RootMotion::FinalIK {
class __InteractionSystem__InteractionEventDelegate;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace RootMotion::FinalIK {
class FullBodyBipedIK;
}
namespace RootMotion::FinalIK {
class InteractionEffector;
}
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace RootMotion::FinalIK {
class __InteractionObject__InteractionEvent;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12604))
// CS Name: ::InteractionSystem::InteractionDelegate*
class CORDL_TYPE __InteractionSystem__InteractionDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1289a88, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x128b2f4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject* interactionObject);

  /// @brief Method BeginInvoke, addr 0x128b308, size 0x90, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject* interactionObject, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x128b398, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionSystem__InteractionDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InteractionSystem__InteractionDelegate(__InteractionSystem__InteractionDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionSystem__InteractionDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InteractionSystem__InteractionDelegate(__InteractionSystem__InteractionDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InteractionSystem__InteractionDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate, 0x80>, "Size mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::InteractionEventDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12605))
// CS Name: ::InteractionSystem::InteractionEventDelegate*
class CORDL_TYPE __InteractionSystem__InteractionEventDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x128b3a4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x128b468, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject* interactionObject,
                     ::RootMotion::FinalIK::__InteractionObject__InteractionEvent* interactionEvent);

  /// @brief Method BeginInvoke, addr 0x128b47c, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject* interactionObject,
                                             ::RootMotion::FinalIK::__InteractionObject__InteractionEvent* interactionEvent, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x128b514, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionSystem__InteractionEventDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InteractionSystem__InteractionEventDelegate(__InteractionSystem__InteractionEventDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionSystem__InteractionEventDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InteractionSystem__InteractionEventDelegate(__InteractionSystem__InteractionEventDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InteractionSystem__InteractionEventDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate, 0x80>, "Size mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::InteractionSystem
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15487)), TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10204))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12606))
// CS Name: ::RootMotion.FinalIK::InteractionSystem*
class CORDL_TYPE InteractionSystem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InteractionEventDelegate = ::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate;

  using InteractionDelegate = ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate;

  /// @brief Field targetTag, offset 0x18, size 0x8
  __declspec(property(get = __get_targetTag, put = __set_targetTag))::StringW targetTag;

  /// @brief Field fadeInTime, offset 0x20, size 0x4
  __declspec(property(get = __get_fadeInTime, put = __set_fadeInTime)) float_t fadeInTime;

  /// @brief Field speed, offset 0x24, size 0x4
  __declspec(property(get = __get_speed, put = __set_speed)) float_t speed;

  /// @brief Field resetToDefaultsSpeed, offset 0x28, size 0x4
  __declspec(property(get = __get_resetToDefaultsSpeed, put = __set_resetToDefaultsSpeed)) float_t resetToDefaultsSpeed;

  /// @brief Field characterCollider, offset 0x30, size 0x8
  __declspec(property(get = __get_characterCollider, put = __set_characterCollider))::UnityEngine::Collider* characterCollider;

  /// @brief Field FPSCamera, offset 0x38, size 0x8
  __declspec(property(get = __get_FPSCamera, put = __set_FPSCamera))::UnityEngine::Transform* FPSCamera;

  /// @brief Field camRaycastLayers, offset 0x40, size 0x4
  __declspec(property(get = __get_camRaycastLayers, put = __set_camRaycastLayers))::UnityEngine::LayerMask camRaycastLayers;

  /// @brief Field camRaycastDistance, offset 0x44, size 0x4
  __declspec(property(get = __get_camRaycastDistance, put = __set_camRaycastDistance)) float_t camRaycastDistance;

  /// @brief Field <triggersInRange>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __get__triggersInRange_k__BackingField,
                      put = __set__triggersInRange_k__BackingField))::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>* _triggersInRange_k__BackingField;

  /// @brief Field inContact, offset 0x50, size 0x8
  __declspec(property(get = __get_inContact, put = __set_inContact))::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>* inContact;

  /// @brief Field bestRangeIndexes, offset 0x58, size 0x8
  __declspec(property(get = __get_bestRangeIndexes, put = __set_bestRangeIndexes))::System::Collections::Generic::List_1<int32_t>* bestRangeIndexes;

  /// @brief Field OnInteractionStart, offset 0x60, size 0x8
  __declspec(property(get = __get_OnInteractionStart, put = __set_OnInteractionStart))::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* OnInteractionStart;

  /// @brief Field OnInteractionPause, offset 0x68, size 0x8
  __declspec(property(get = __get_OnInteractionPause, put = __set_OnInteractionPause))::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* OnInteractionPause;

  /// @brief Field OnInteractionPickUp, offset 0x70, size 0x8
  __declspec(property(get = __get_OnInteractionPickUp, put = __set_OnInteractionPickUp))::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* OnInteractionPickUp;

  /// @brief Field OnInteractionResume, offset 0x78, size 0x8
  __declspec(property(get = __get_OnInteractionResume, put = __set_OnInteractionResume))::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* OnInteractionResume;

  /// @brief Field OnInteractionStop, offset 0x80, size 0x8
  __declspec(property(get = __get_OnInteractionStop, put = __set_OnInteractionStop))::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* OnInteractionStop;

  /// @brief Field OnInteractionEvent, offset 0x88, size 0x8
  __declspec(property(get = __get_OnInteractionEvent, put = __set_OnInteractionEvent))::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate* OnInteractionEvent;

  /// @brief Field raycastHit, offset 0x90, size 0x2c
  __declspec(property(get = __get_raycastHit, put = __set_raycastHit))::UnityEngine::RaycastHit raycastHit;

  /// @brief Field fullBody, offset 0xc0, size 0x8
  __declspec(property(get = __get_fullBody, put = __set_fullBody))::RootMotion::FinalIK::FullBodyBipedIK* fullBody;

  /// @brief Field lookAt, offset 0xc8, size 0x8
  __declspec(property(get = __get_lookAt, put = __set_lookAt))::RootMotion::FinalIK::InteractionLookAt* lookAt;

  /// @brief Field interactionEffectors, offset 0xd0, size 0x8
  __declspec(property(get = __get_interactionEffectors,
                      put = __set_interactionEffectors))::ArrayW<::RootMotion::FinalIK::InteractionEffector*, ::Array<::RootMotion::FinalIK::InteractionEffector*>*> interactionEffectors;

  /// @brief Field initiated, offset 0xd8, size 0x1
  __declspec(property(get = __get_initiated, put = __set_initiated)) bool initiated;

  /// @brief Field lastCollider, offset 0xe0, size 0x8
  __declspec(property(get = __get_lastCollider, put = __set_lastCollider))::UnityEngine::Collider* lastCollider;

  /// @brief Field c, offset 0xe8, size 0x8
  __declspec(property(get = __get_c, put = __set_c))::UnityEngine::Collider* c;

  __declspec(property(get = get_inInteraction)) bool inInteraction;

  __declspec(property(get = get_ik, put = set_ik))::RootMotion::FinalIK::FullBodyBipedIK* ik;

  __declspec(property(get = get_triggersInRange, put = set_triggersInRange))::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>* triggersInRange;

  constexpr ::StringW& __get_targetTag();

  constexpr ::StringW const& __get_targetTag() const;

  constexpr void __set_targetTag(::StringW value);

  constexpr float_t& __get_fadeInTime();

  constexpr float_t const& __get_fadeInTime() const;

  constexpr void __set_fadeInTime(float_t value);

  constexpr float_t& __get_speed();

  constexpr float_t const& __get_speed() const;

  constexpr void __set_speed(float_t value);

  constexpr float_t& __get_resetToDefaultsSpeed();

  constexpr float_t const& __get_resetToDefaultsSpeed() const;

  constexpr void __set_resetToDefaultsSpeed(float_t value);

  constexpr ::UnityEngine::Collider*& __get_characterCollider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Collider*> const& __get_characterCollider() const;

  constexpr void __set_characterCollider(::UnityEngine::Collider* value);

  constexpr ::UnityEngine::Transform*& __get_FPSCamera();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_FPSCamera() const;

  constexpr void __set_FPSCamera(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::LayerMask& __get_camRaycastLayers();

  constexpr ::UnityEngine::LayerMask const& __get_camRaycastLayers() const;

  constexpr void __set_camRaycastLayers(::UnityEngine::LayerMask value);

  constexpr float_t& __get_camRaycastDistance();

  constexpr float_t const& __get_camRaycastDistance() const;

  constexpr void __set_camRaycastDistance(float_t value);

  constexpr ::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>*& __get__triggersInRange_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>*> const& __get__triggersInRange_k__BackingField() const;

  constexpr void __set__triggersInRange_k__BackingField(::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>* value);

  constexpr ::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>*& __get_inContact();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>*> const& __get_inContact() const;

  constexpr void __set_inContact(::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>* value);

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __get_bestRangeIndexes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __get_bestRangeIndexes() const;

  constexpr void __set_bestRangeIndexes(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*& __get_OnInteractionStart();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*> const& __get_OnInteractionStart() const;

  constexpr void __set_OnInteractionStart(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* value);

  constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*& __get_OnInteractionPause();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*> const& __get_OnInteractionPause() const;

  constexpr void __set_OnInteractionPause(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* value);

  constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*& __get_OnInteractionPickUp();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*> const& __get_OnInteractionPickUp() const;

  constexpr void __set_OnInteractionPickUp(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* value);

  constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*& __get_OnInteractionResume();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*> const& __get_OnInteractionResume() const;

  constexpr void __set_OnInteractionResume(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* value);

  constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*& __get_OnInteractionStop();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate*> const& __get_OnInteractionStop() const;

  constexpr void __set_OnInteractionStop(::RootMotion::FinalIK::__InteractionSystem__InteractionDelegate* value);

  constexpr ::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*& __get_OnInteractionEvent();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate*> const& __get_OnInteractionEvent() const;

  constexpr void __set_OnInteractionEvent(::RootMotion::FinalIK::__InteractionSystem__InteractionEventDelegate* value);

  constexpr ::UnityEngine::RaycastHit& __get_raycastHit();

  constexpr ::UnityEngine::RaycastHit const& __get_raycastHit() const;

  constexpr void __set_raycastHit(::UnityEngine::RaycastHit value);

  constexpr ::RootMotion::FinalIK::FullBodyBipedIK*& __get_fullBody();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::FullBodyBipedIK*> const& __get_fullBody() const;

  constexpr void __set_fullBody(::RootMotion::FinalIK::FullBodyBipedIK* value);

  constexpr ::RootMotion::FinalIK::InteractionLookAt*& __get_lookAt();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::InteractionLookAt*> const& __get_lookAt() const;

  constexpr void __set_lookAt(::RootMotion::FinalIK::InteractionLookAt* value);

  constexpr ::ArrayW<::RootMotion::FinalIK::InteractionEffector*, ::Array<::RootMotion::FinalIK::InteractionEffector*>*>& __get_interactionEffectors();

  constexpr ::ArrayW<::RootMotion::FinalIK::InteractionEffector*, ::Array<::RootMotion::FinalIK::InteractionEffector*>*> const& __get_interactionEffectors() const;

  constexpr void __set_interactionEffectors(::ArrayW<::RootMotion::FinalIK::InteractionEffector*, ::Array<::RootMotion::FinalIK::InteractionEffector*>*> value);

  constexpr bool& __get_initiated();

  constexpr bool const& __get_initiated() const;

  constexpr void __set_initiated(bool value);

  constexpr ::UnityEngine::Collider*& __get_lastCollider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Collider*> const& __get_lastCollider() const;

  constexpr void __set_lastCollider(::UnityEngine::Collider* value);

  constexpr ::UnityEngine::Collider*& __get_c();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Collider*> const& __get_c() const;

  constexpr void __set_c(::UnityEngine::Collider* value);

  /// @brief Method OpenUserManual, addr 0x12878a8, size 0x44, virtual false, abstract: false, final false
  inline void OpenUserManual();

  /// @brief Method OpenScriptReference, addr 0x12878ec, size 0x44, virtual false, abstract: false, final false
  inline void OpenScriptReference();

  /// @brief Method OpenTutorial1, addr 0x1287930, size 0x44, virtual false, abstract: false, final false
  inline void OpenTutorial1();

  /// @brief Method OpenTutorial2, addr 0x1287974, size 0x44, virtual false, abstract: false, final false
  inline void OpenTutorial2();

  /// @brief Method OpenTutorial3, addr 0x12879b8, size 0x44, virtual false, abstract: false, final false
  inline void OpenTutorial3();

  /// @brief Method OpenTutorial4, addr 0x12879fc, size 0x44, virtual false, abstract: false, final false
  inline void OpenTutorial4();

  /// @brief Method SupportGroup, addr 0x1287a40, size 0x44, virtual false, abstract: false, final false
  inline void SupportGroup();

  /// @brief Method ASThread, addr 0x1287a84, size 0x44, virtual false, abstract: false, final false
  inline void ASThread();

  /// @brief Method get_inInteraction, addr 0x1287ac8, size 0x98, virtual false, abstract: false, final false
  inline bool get_inInteraction();

  /// @brief Method IsInInteraction, addr 0x1287c40, size 0xb8, virtual false, abstract: false, final false
  inline bool IsInInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType);

  /// @brief Method IsPaused, addr 0x1287cf8, size 0xb8, virtual false, abstract: false, final false
  inline bool IsPaused(::RootMotion::FinalIK::FullBodyBipedEffector effectorType);

  /// @brief Method IsPaused, addr 0x1287db0, size 0x98, virtual false, abstract: false, final false
  inline bool IsPaused();

  /// @brief Method IsInSync, addr 0x1287e48, size 0xe4, virtual false, abstract: false, final false
  inline bool IsInSync();

  /// @brief Method StartInteraction, addr 0x1287f2c, size 0xf8, virtual false, abstract: false, final false
  inline bool StartInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject* interactionObject, bool interrupt);

  /// @brief Method PauseInteraction, addr 0x1288024, size 0x84, virtual false, abstract: false, final false
  inline bool PauseInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType);

  /// @brief Method ResumeInteraction, addr 0x12880a8, size 0x84, virtual false, abstract: false, final false
  inline bool ResumeInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType);

  /// @brief Method StopInteraction, addr 0x128812c, size 0x84, virtual false, abstract: false, final false
  inline bool StopInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType);

  /// @brief Method PauseAll, addr 0x12881b0, size 0x68, virtual false, abstract: false, final false
  inline void PauseAll();

  /// @brief Method ResumeAll, addr 0x1288218, size 0x68, virtual false, abstract: false, final false
  inline void ResumeAll();

  /// @brief Method StopAll, addr 0x1288280, size 0x5c, virtual false, abstract: false, final false
  inline void StopAll();

  /// @brief Method GetInteractionObject, addr 0x12882dc, size 0x80, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::InteractionObject* GetInteractionObject(::RootMotion::FinalIK::FullBodyBipedEffector effectorType);

  /// @brief Method GetProgress, addr 0x128835c, size 0xa8, virtual false, abstract: false, final false
  inline float_t GetProgress(::RootMotion::FinalIK::FullBodyBipedEffector effectorType);

  /// @brief Method GetMinActiveProgress, addr 0x1288404, size 0xd0, virtual false, abstract: false, final false
  inline float_t GetMinActiveProgress();

  /// @brief Method TriggerInteraction, addr 0x12884d4, size 0x17c, virtual false, abstract: false, final false
  inline bool TriggerInteraction(int32_t index, bool interrupt);

  /// @brief Method TriggerInteraction, addr 0x1288764, size 0x1bc, virtual false, abstract: false, final false
  inline bool TriggerInteraction(int32_t index, bool interrupt, ByRef<::RootMotion::FinalIK::InteractionObject*> interactionObject);

  /// @brief Method TriggerInteraction, addr 0x1288920, size 0x268, virtual false, abstract: false, final false
  inline bool TriggerInteraction(int32_t index, bool interrupt, ByRef<::RootMotion::FinalIK::InteractionTarget*> interactionTarget);

  /// @brief Method GetClosestInteractionRange, addr 0x1288b88, size 0xe8, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__InteractionTrigger__Range* GetClosestInteractionRange();

  /// @brief Method GetClosestInteractionObjectInRange, addr 0x1288e14, size 0x38, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::InteractionObject* GetClosestInteractionObjectInRange();

  /// @brief Method GetClosestInteractionTargetInRange, addr 0x1288e4c, size 0x60, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::InteractionTarget* GetClosestInteractionTargetInRange();

  /// @brief Method GetClosestInteractionObjectsInRange, addr 0x1288eac, size 0x108, virtual false, abstract: false, final false
  inline ::ArrayW<::RootMotion::FinalIK::InteractionObject*, ::Array<::RootMotion::FinalIK::InteractionObject*>*> GetClosestInteractionObjectsInRange();

  /// @brief Method GetClosestInteractionTargetsInRange, addr 0x1288fb4, size 0x1e0, virtual false, abstract: false, final false
  inline ::ArrayW<::RootMotion::FinalIK::InteractionTarget*, ::Array<::RootMotion::FinalIK::InteractionTarget*>*> GetClosestInteractionTargetsInRange();

  /// @brief Method TriggerEffectorsReady, addr 0x1289194, size 0x274, virtual false, abstract: false, final false
  inline bool TriggerEffectorsReady(int32_t index);

  /// @brief Method GetTriggerRange, addr 0x1289408, size 0x120, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__InteractionTrigger__Range* GetTriggerRange(int32_t index);

  /// @brief Method GetClosestTriggerIndex, addr 0x1288c70, size 0x1a4, virtual false, abstract: false, final false
  inline int32_t GetClosestTriggerIndex();

  /// @brief Method get_ik, addr 0x1289528, size 0x8, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::FullBodyBipedIK* get_ik();

  /// @brief Method set_ik, addr 0x1289530, size 0x8, virtual false, abstract: false, final false
  inline void set_ik(::RootMotion::FinalIK::FullBodyBipedIK* value);

  /// @brief Method get_triggersInRange, addr 0x1289538, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>* get_triggersInRange();

  /// @brief Method set_triggersInRange, addr 0x1289540, size 0x8, virtual false, abstract: false, final false
  inline void set_triggersInRange(::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>* value);

  /// @brief Method Start, addr 0x1289548, size 0x540, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method InteractionPause, addr 0x1289d94, size 0x20, virtual false, abstract: false, final false
  inline void InteractionPause(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject* interactionObject);

  /// @brief Method InteractionResume, addr 0x1289db4, size 0x1c, virtual false, abstract: false, final false
  inline void InteractionResume(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject* interactionObject);

  /// @brief Method InteractionStop, addr 0x1289dd0, size 0x1c, virtual false, abstract: false, final false
  inline void InteractionStop(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject* interactionObject);

  /// @brief Method LookAtInteraction, addr 0x1289dec, size 0x54, virtual false, abstract: false, final false
  inline void LookAtInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject* interactionObject);

  /// @brief Method OnTriggerEnter, addr 0x1289e40, size 0x16c, virtual false, abstract: false, final false
  inline void OnTriggerEnter(::UnityEngine::Collider* c);

  /// @brief Method OnTriggerExit, addr 0x1289fac, size 0xfc, virtual false, abstract: false, final false
  inline void OnTriggerExit(::UnityEngine::Collider* c);

  /// @brief Method ContactIsInRange, addr 0x128a0a8, size 0x1a8, virtual false, abstract: false, final false
  inline bool ContactIsInRange(int32_t index, ByRef<int32_t> bestRangeIndex);

  /// @brief Method OnDrawGizmosSelected, addr 0x128a404, size 0xe4, virtual false, abstract: false, final false
  inline void OnDrawGizmosSelected();

  /// @brief Method Update, addr 0x128a4e8, size 0x2e4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method Raycasting, addr 0x128a7cc, size 0x130, virtual false, abstract: false, final false
  inline void Raycasting();

  /// @brief Method UpdateTriggerEventBroadcasting, addr 0x1289b4c, size 0x248, virtual false, abstract: false, final false
  inline void UpdateTriggerEventBroadcasting();

  /// @brief Method UpdateEffectors, addr 0x128a8fc, size 0x10c, virtual false, abstract: false, final false
  inline void UpdateEffectors();

  /// @brief Method OnPreFBBIK, addr 0x128aa08, size 0x88, virtual false, abstract: false, final false
  inline void OnPreFBBIK();

  /// @brief Method OnPostFBBIK, addr 0x128aa90, size 0xc0, virtual false, abstract: false, final false
  inline void OnPostFBBIK();

  /// @brief Method OnFixTransforms, addr 0x128ab50, size 0x18, virtual false, abstract: false, final false
  inline void OnFixTransforms();

  /// @brief Method OnDestroy, addr 0x128ab68, size 0x3e8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method IsValid, addr 0x1287b60, size 0xe0, virtual false, abstract: false, final false
  inline bool IsValid(bool log);

  /// @brief Method TriggerIndexIsValid, addr 0x1288650, size 0x114, virtual false, abstract: false, final false
  inline bool TriggerIndexIsValid(int32_t index);

  static inline ::RootMotion::FinalIK::InteractionSystem* New_ctor();

  /// @brief Method .ctor, addr 0x128af50, size 0x3a4, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InteractionSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteractionSystem(InteractionSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteractionSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteractionSystem(InteractionSystem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractionSystem();

public:
  /// @brief Field targetTag, offset: 0x18, size: 0x8, def value: None
  ::StringW ___targetTag;

  /// @brief Field fadeInTime, offset: 0x20, size: 0x4, def value: None
  float_t ___fadeInTime;

  /// @brief Field speed, offset: 0x24, size: 0x4, def value: None
  float_t ___speed;

  /// @brief Field resetToDefaultsSpeed, offset: 0x28, size: 0x4, def value: None
  float_t ___resetToDefaultsSpeed;

  /// @brief Field characterCollider, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Collider* ___characterCollider;

  /// @brief Field FPSCamera, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Transform* ___FPSCamera;

  /// @brief Field camRaycastLayers, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___camRaycastLayers;

  /// @brief Field camRaycastDistance, offset: 0x44, size: 0x4, def value: None
  float_t ___camRaycastDistance;

  /// @brief Field <triggersInRange>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>* ____triggersInRange_k__BackingField;

  /// @brief Field inContact, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>* ___inContact;

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
  ::RootMotion::FinalIK::FullBodyBipedIK* ___fullBody;

  /// @brief Field lookAt, offset: 0xc8, size: 0x8, def value: None
  ::RootMotion::FinalIK::InteractionLookAt* ___lookAt;

  /// @brief Field interactionEffectors, offset: 0xd0, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::InteractionEffector*, ::Array<::RootMotion::FinalIK::InteractionEffector*>*> ___interactionEffectors;

  /// @brief Field initiated, offset: 0xd8, size: 0x1, def value: None
  bool ___initiated;

  /// @brief Field lastCollider, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Collider* ___lastCollider;

  /// @brief Field c, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::Collider* ___c;

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
