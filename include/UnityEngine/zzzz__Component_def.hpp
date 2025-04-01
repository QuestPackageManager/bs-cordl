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

  /// @brief Method BroadcastMessage, addr 0x48a4614, size 0x5c, virtual false, abstract: false, final false
  inline void BroadcastMessage(::StringW methodName, ::System::Object* parameter, ::UnityEngine::SendMessageOptions options);

  /// @brief Method CompareTag, addr 0x48a44a4, size 0x78, virtual false, abstract: false, final false
  inline bool CompareTag(::StringW tag);

  /// @brief Method GetComponent, addr 0x48a3d78, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponent(::StringW type);

  /// @brief Method GetComponent, addr 0x48a3b68, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponent(::System::Type* type);

  /// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponent();

  /// @brief Method GetComponentFastPath, addr 0x48a3c24, size 0x54, virtual false, abstract: false, final false
  inline void GetComponentFastPath(::System::Type* type, ::System::IntPtr oneFurtherThanResultValue);

  /// @brief Method GetComponentInChildren, addr 0x48a3dbc, size 0x88, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentInChildren(::System::Type* t, bool includeInactive);

  /// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentInChildren();

  /// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentInChildren(bool includeInactive);

  /// @brief Method GetComponentInParent, addr 0x48a3fac, size 0x88, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> GetComponentInParent(::System::Type* t, bool includeInactive);

  /// @brief Method GetComponentInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentInParent();

  /// @brief Method GetComponents, addr 0x48a419c, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> GetComponents(::System::Type* type);

  /// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponents();

  /// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponents(::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetComponents, addr 0x48a42e8, size 0x54, virtual false, abstract: false, final false
  inline void GetComponents(::System::Type* type, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* results);

  /// @brief Method GetComponentsForListInternal, addr 0x48a4294, size 0x54, virtual false, abstract: false, final false
  inline void GetComponentsForListInternal(::System::Type* searchType, ::System::Object* resultList);

  /// @brief Method GetComponentsInChildren, addr 0x48a3e98, size 0x60, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> GetComponentsInChildren(::System::Type* t, bool includeInactive);

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponentsInChildren();

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponentsInChildren(bool includeInactive);

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponentsInChildren(bool includeInactive, ::System::Collections::Generic::List_1<T>* result);

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponentsInChildren(::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetComponentsInParent, addr 0x48a4088, size 0x60, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> GetComponentsInParent(::System::Type* t, bool includeInactive);

  /// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponentsInParent();

  /// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponentsInParent(bool includeInactive);

  /// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponentsInParent(bool includeInactive, ::System::Collections::Generic::List_1<T>* results);

  static inline ::UnityEngine::Component* New_ctor();

  /// @brief Method SendMessage, addr 0x48a45bc, size 0x58, virtual false, abstract: false, final false
  inline void SendMessage(::StringW methodName, ::UnityEngine::SendMessageOptions options);

  /// @brief Method SendMessage, addr 0x48a4560, size 0x5c, virtual false, abstract: false, final false
  inline void SendMessage(::StringW methodName, ::System::Object* value, ::UnityEngine::SendMessageOptions options);

  /// @brief Method TryGetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGetComponent(::ByRef<T> component);

  /// @brief Method TryGetComponent, addr 0x48a3c78, size 0x60, virtual false, abstract: false, final false
  inline bool TryGetComponent(::System::Type* type, ::ByRef<::UnityEngine::Component*> component);

  /// @brief Method .ctor, addr 0x48a30f4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_gameObject, addr 0x48a3b2c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_gameObject();

  /// @brief Method get_tag, addr 0x48a433c, size 0x70, virtual false, abstract: false, final false
  inline ::StringW get_tag();

  /// @brief Method get_transform, addr 0x48a3af0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_transform();

  /// @brief Method set_tag, addr 0x48a43e8, size 0x78, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10878 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Component, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Component);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Component*, "UnityEngine", "Component");
