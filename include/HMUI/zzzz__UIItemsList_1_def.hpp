#pragma once
// IWYU pragma private; include "HMUI/UIItemsList_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIItemsList_1)
namespace HMUI {
template <typename T> class __UIItemsList_1__DataCallback;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
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
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace HMUI {
template <typename T> class UIItemsList_1;
}
namespace HMUI {
template <typename T> class __UIItemsList_1__DataCallback;
}
// Write type traits
MARK_GEN_REF_PTR_T(::HMUI::UIItemsList_1);
MARK_GEN_REF_PTR_T(::HMUI::__UIItemsList_1__DataCallback);
// Type: ::DataCallback
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UIItemsList`1::DataCallback<T>*
class CORDL_TYPE __UIItemsList_1__DataCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t idx, T item, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(int32_t idx, T item);

  static inline ::HMUI::__UIItemsList_1__DataCallback<T>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIItemsList_1__DataCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UIItemsList_1__DataCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UIItemsList_1__DataCallback(__UIItemsList_1__DataCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UIItemsList_1__DataCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UIItemsList_1__DataCallback(__UIItemsList_1__DataCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16085 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HMUI
// Type: HMUI::UIItemsList`1
// SizeInfo { instance_size: 72, native_size: 72, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::HMUI::UIItemsList`1<T>*
class CORDL_TYPE UIItemsList_1 : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using DataCallback = ::HMUI::__UIItemsList_1__DataCallback<T>;

  /// @brief Field _container, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _insertInTheBeginning, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__insertInTheBeginning, put = __cordl_internal_set__insertInTheBeginning)) bool _insertInTheBeginning;

  /// @brief Field _items, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__items, put = __cordl_internal_set__items)) ::System::Collections::Generic::List_1<T>* _items;

  /// @brief Field _itemsContainer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__itemsContainer, put = __cordl_internal_set__itemsContainer)) ::UnityW<::UnityEngine::Transform> _itemsContainer;

  /// @brief Field _prefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__prefab, put = __cordl_internal_set__prefab)) T _prefab;

  __declspec(property(get = get_items)) ::System::Collections::Generic::IEnumerable_1<T>* items;

  static inline ::HMUI::UIItemsList_1<T>* New_ctor();

  /// @brief Method SetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetData(int32_t numberOfElements, ::HMUI::__UIItemsList_1__DataCallback<T>* dataCallback);

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container() const;

  constexpr bool const& __cordl_internal_get__insertInTheBeginning() const;

  constexpr bool& __cordl_internal_get__insertInTheBeginning();

  constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get__items();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& __cordl_internal_get__items() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__itemsContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__itemsContainer();

  constexpr T const& __cordl_internal_get__prefab() const;

  constexpr T& __cordl_internal_get__prefab();

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__insertInTheBeginning(bool value);

  constexpr void __cordl_internal_set__items(::System::Collections::Generic::List_1<T>* value);

  constexpr void __cordl_internal_set__itemsContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__prefab(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_items, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<T>* get_items();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIItemsList_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIItemsList_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIItemsList_1(UIItemsList_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIItemsList_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIItemsList_1(UIItemsList_1 const&) = delete;

  /// @brief Field _prefab, offset: 0x20, size: 0x8, def value: None
  T ____prefab;

  /// @brief Field _itemsContainer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____itemsContainer;

  /// @brief Field _insertInTheBeginning, offset: 0x30, size: 0x1, def value: None
  bool ____insertInTheBeginning;

  /// @brief Field _items, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ____items;

  /// @brief Field _container, offset: 0x40, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16086 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HMUI::UIItemsList_1, "HMUI", "UIItemsList`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HMUI::__UIItemsList_1__DataCallback, "HMUI", "UIItemsList`1/DataCallback");
