#pragma once
// IWYU pragma private; include "UnityEngine/Component.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Component)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct SendMessageOptions;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine {
class Component;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Component);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Component
class CORDL_TYPE Component : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_gameObject)) ::UnityW<::UnityEngine::GameObject> gameObject;

  __declspec(property(get = get_tag, put = set_tag)) ::StringW tag;

  __declspec(property(get = get_transform)) ::UnityW<::UnityEngine::Transform> transform;

  /// @brief Method BroadcastMessage, addr 0x6913ab8, size 0x184, virtual false, abstract: false, final false
  inline void BroadcastMessage(::StringW methodName, ::System::Object* parameter, ::UnityEngine::SendMessageOptions options);

  /// @brief Method BroadcastMessage_Injected, addr 0x6913c3c, size 0x5c, virtual false, abstract: false, final false
  static inline void BroadcastMessage_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> methodName, ::System::Object* parameter,
                                               ::UnityEngine::SendMessageOptions options);

  /// @brief Method CompareTag, addr 0x69138b4, size 0x20, virtual false, abstract: false, final false
  inline bool CompareTag(::StringW tag);

  /// @brief Method GetComponent, addr 0x6912cb0, size 0x298, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponent(::StringW type);

  /// @brief Method GetComponent, addr 0x691299c, size 0x20, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponent(::System::Type* type);

  /// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponent();

  /// @brief Method GetComponentFastPath, addr 0x6912b14, size 0x98, virtual false, abstract: false, final false
  inline void GetComponentFastPath(::System::Type* type, ::System::IntPtr oneFurtherThanResultValue);

  /// @brief Method GetComponentFastPath_Injected, addr 0x6912bac, size 0x54, virtual false, abstract: false, final false
  static inline void GetComponentFastPath_Injected(::System::IntPtr _unity_self, ::System::Type* type, ::System::IntPtr oneFurtherThanResultValue);

  /// @brief Method GetComponentInChildren, addr 0x6912f8c, size 0x30, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentInChildren(::System::Type* t, bool includeInactive);

  /// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentInChildren();

  /// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentInChildren(bool includeInactive);

  /// @brief Method GetComponentInParent, addr 0x69131e4, size 0x30, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentInParent(::System::Type* t, bool includeInactive);

  /// @brief Method GetComponentInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentInParent();

  /// @brief Method GetComponent_Injected, addr 0x6912f48, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetComponent_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> type);

  /// @brief Method GetComponents, addr 0x691343c, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> GetComponents(::System::Type* type);

  /// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponents();

  /// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponents(::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetComponents, addr 0x69135dc, size 0x4, virtual false, abstract: false, final false
  inline void GetComponents(::System::Type* type, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* results);

  /// @brief Method GetComponentsForListInternal, addr 0x69134f0, size 0x98, virtual false, abstract: false, final false
  inline void GetComponentsForListInternal(::System::Type* searchType, ::System::Object* resultList);

  /// @brief Method GetComponentsForListInternal_Injected, addr 0x6913588, size 0x54, virtual false, abstract: false, final false
  static inline void GetComponentsForListInternal_Injected(::System::IntPtr _unity_self, ::System::Type* searchType, ::System::Object* resultList);

  /// @brief Method GetComponentsInChildren, addr 0x691311c, size 0x30, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> GetComponentsInChildren(::System::Type* t, bool includeInactive);

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponentsInChildren();

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponentsInChildren(bool includeInactive);

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponentsInChildren(bool includeInactive, ::System::Collections::Generic::List_1<T>* result);

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponentsInChildren(::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetComponentsInParent, addr 0x6913374, size 0x30, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> GetComponentsInParent(::System::Type* t, bool includeInactive);

  /// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponentsInParent();

  /// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponentsInParent(bool includeInactive);

  /// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponentsInParent(bool includeInactive, ::System::Collections::Generic::List_1<T>* results);

  static inline ::UnityEngine::Component* New_ctor();

  /// @brief Method SendMessage, addr 0x69138d8, size 0x184, virtual false, abstract: false, final false
  inline void SendMessage(::StringW methodName, ::System::Object* value, ::UnityEngine::SendMessageOptions options);

  /// @brief Method SendMessage_Injected, addr 0x6913a5c, size 0x5c, virtual false, abstract: false, final false
  static inline void SendMessage_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> methodName, ::System::Object* value,
                                          ::UnityEngine::SendMessageOptions options);

  /// @brief Method TryGetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGetComponent(::ByRef<T> component);

  /// @brief Method TryGetComponent, addr 0x6912c00, size 0x30, virtual false, abstract: false, final false
  inline bool TryGetComponent(::System::Type* type, ::ByRef<::UnityEngine::Component*> component);

  /// @brief Method .ctor, addr 0x691204c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_gameObject, addr 0x6912810, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_gameObject();

  /// @brief Method get_gameObject_Injected, addr 0x6912960, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_gameObject_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_tag, addr 0x69135e0, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_tag();

  /// @brief Method get_transform, addr 0x6912684, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_transform();

  /// @brief Method get_transform_Injected, addr 0x69127d4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_transform_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_tag, addr 0x691372c, size 0x20, virtual false, abstract: false, final false
  inline void set_tag(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Component();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Component", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Component(Component&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Component", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Component(Component const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10312 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Component, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Component);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Component*, "UnityEngine", "Component");
