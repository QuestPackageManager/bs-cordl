#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Component)
namespace UnityEngine {
struct SendMessageOptions;
}
namespace UnityEngine {
class GameObject;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Transform;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class Component;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Component);
// Type: UnityEngine::Component
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10200))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10238))
// CS Name: ::UnityEngine::Component*
class CORDL_TYPE Component : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_transform))::UnityEngine::Transform* transform;

  __declspec(property(get = get_gameObject))::UnityEngine::GameObject* gameObject;

  __declspec(property(get = get_tag, put = set_tag))::StringW tag;

  /// @brief Method get_transform, addr 0x2cd3d3c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_transform();

  /// @brief Method get_gameObject, addr 0x2cd3d78, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* get_gameObject();

  /// @brief Method GetComponent, addr 0x2cd3db4, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Component* GetComponent(::System::Type* type);

  /// @brief Method GetComponentFastPath, addr 0x2cd3e2c, size 0x54, virtual false, abstract: false, final false
  inline void GetComponentFastPath(::System::Type* type, void* oneFurtherThanResultValue);

  /// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponent();

  /// @brief Method TryGetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGetComponent(ByRef<T> component);

  /// @brief Method GetComponent, addr 0x2cd3e80, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Component* GetComponent(::StringW type);

  /// @brief Method GetComponentInChildren, addr 0x2cd3ec4, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Component* GetComponentInChildren(::System::Type* t, bool includeInactive);

  /// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentInChildren(bool includeInactive);

  /// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentInChildren();

  /// @brief Method GetComponentsInChildren, addr 0x2cd3f4c, size 0x60, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*> GetComponentsInChildren(::System::Type* t, bool includeInactive);

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponentsInChildren(bool includeInactive);

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponentsInChildren(bool includeInactive, ::System::Collections::Generic::List_1<T>* result);

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponentsInChildren();

  /// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponentsInChildren(::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetComponentInParent, addr 0x2cd3fac, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Component* GetComponentInParent(::System::Type* t, bool includeInactive);

  /// @brief Method GetComponentInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponentInParent();

  /// @brief Method GetComponentsInParent, addr 0x2cd4034, size 0x60, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*> GetComponentsInParent(::System::Type* t, bool includeInactive);

  /// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponentsInParent(bool includeInactive);

  /// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponentsInParent(bool includeInactive, ::System::Collections::Generic::List_1<T>* results);

  /// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponentsInParent();

  /// @brief Method GetComponents, addr 0x2cd4094, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*> GetComponents(::System::Type* type);

  /// @brief Method GetComponentsForListInternal, addr 0x2cd40e4, size 0x54, virtual false, abstract: false, final false
  inline void GetComponentsForListInternal(::System::Type* searchType, ::System::Object* resultList);

  /// @brief Method GetComponents, addr 0x2cd4138, size 0x54, virtual false, abstract: false, final false
  inline void GetComponents(::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::Component*>* results);

  /// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetComponents(::System::Collections::Generic::List_1<T>* results);

  /// @brief Method get_tag, addr 0x2cd418c, size 0x70, virtual false, abstract: false, final false
  inline ::StringW get_tag();

  /// @brief Method set_tag, addr 0x2cd41fc, size 0x78, virtual false, abstract: false, final false
  inline void set_tag(::StringW value);

  /// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetComponents();

  /// @brief Method CompareTag, addr 0x2cd4274, size 0x78, virtual false, abstract: false, final false
  inline bool CompareTag(::StringW tag);

  /// @brief Method SendMessage, addr 0x2cd42ec, size 0x5c, virtual false, abstract: false, final false
  inline void SendMessage(::StringW methodName, ::System::Object* value, ::UnityEngine::SendMessageOptions options);

  /// @brief Method SendMessage, addr 0x2cd4348, size 0x58, virtual false, abstract: false, final false
  inline void SendMessage(::StringW methodName, ::UnityEngine::SendMessageOptions options);

  /// @brief Method BroadcastMessage, addr 0x2cd43a0, size 0x5c, virtual false, abstract: false, final false
  inline void BroadcastMessage(::StringW methodName, ::System::Object* parameter, ::UnityEngine::SendMessageOptions options);

  static inline ::UnityEngine::Component* New_ctor();

  /// @brief Method .ctor, addr 0x2ccd270, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Component", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Component(Component&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Component", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Component(Component const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Component();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Component, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Component);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Component*, "UnityEngine", "Component");
