#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventCallbackList)
namespace UnityEngine::UIElements {
class EventCallbackFunctorBase;
}
namespace System {
class Delegate;
}
namespace UnityEngine::UIElements {
struct CallbackPhase;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventCallbackList;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EventCallbackList);
// Type: UnityEngine.UIElements::EventCallbackList
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7166))
// CS Name: ::UnityEngine.UIElements::EventCallbackList*
class CORDL_TYPE EventCallbackList : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_List, offset 0x10, size 0x8
  __declspec(property(get = __get_m_List, put = __set_m_List))::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventCallbackFunctorBase*>* m_List;

  /// @brief Field <trickleDownCallbackCount>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__trickleDownCallbackCount_k__BackingField, put = __set__trickleDownCallbackCount_k__BackingField)) int32_t _trickleDownCallbackCount_k__BackingField;

  /// @brief Field <bubbleUpCallbackCount>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __get__bubbleUpCallbackCount_k__BackingField, put = __set__bubbleUpCallbackCount_k__BackingField)) int32_t _bubbleUpCallbackCount_k__BackingField;

  __declspec(property(get = get_trickleDownCallbackCount, put = set_trickleDownCallbackCount)) int32_t trickleDownCallbackCount;

  __declspec(property(get = get_bubbleUpCallbackCount, put = set_bubbleUpCallbackCount)) int32_t bubbleUpCallbackCount;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item))::UnityEngine::UIElements::EventCallbackFunctorBase* Item[];

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventCallbackFunctorBase*>*& __get_m_List();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventCallbackFunctorBase*>*> const& __get_m_List() const;

  constexpr void __set_m_List(::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventCallbackFunctorBase*>* value);

  constexpr int32_t& __get__trickleDownCallbackCount_k__BackingField();

  constexpr int32_t const& __get__trickleDownCallbackCount_k__BackingField() const;

  constexpr void __set__trickleDownCallbackCount_k__BackingField(int32_t value);

  constexpr int32_t& __get__bubbleUpCallbackCount_k__BackingField();

  constexpr int32_t const& __get__bubbleUpCallbackCount_k__BackingField() const;

  constexpr void __set__bubbleUpCallbackCount_k__BackingField(int32_t value);

  /// @brief Method get_trickleDownCallbackCount, addr 0x2e4b244, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_trickleDownCallbackCount();

  /// @brief Method set_trickleDownCallbackCount, addr 0x2e4b24c, size 0x8, virtual false, abstract: false, final false
  inline void set_trickleDownCallbackCount(int32_t value);

  /// @brief Method get_bubbleUpCallbackCount, addr 0x2e4b254, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_bubbleUpCallbackCount();

  /// @brief Method set_bubbleUpCallbackCount, addr 0x2e4b25c, size 0x8, virtual false, abstract: false, final false
  inline void set_bubbleUpCallbackCount(int32_t value);

  static inline ::UnityEngine::UIElements::EventCallbackList* New_ctor();

  /// @brief Method .ctor, addr 0x2e4aee8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::EventCallbackList* New_ctor(::UnityEngine::UIElements::EventCallbackList* source);

  /// @brief Method .ctor, addr 0x2e4ae58, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::EventCallbackList* source);

  /// @brief Method Contains, addr 0x2e4b264, size 0x18, virtual false, abstract: false, final false
  inline bool Contains(int64_t eventTypeId, ::System::Delegate* callback, ::UnityEngine::UIElements::CallbackPhase phase);

  /// @brief Method Find, addr 0x2e4b27c, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventCallbackFunctorBase* Find(int64_t eventTypeId, ::System::Delegate* callback, ::UnityEngine::UIElements::CallbackPhase phase);

  /// @brief Method Remove, addr 0x2e4b364, size 0x120, virtual false, abstract: false, final false
  inline bool Remove(int64_t eventTypeId, ::System::Delegate* callback, ::UnityEngine::UIElements::CallbackPhase phase);

  /// @brief Method Add, addr 0x2e4b484, size 0xdc, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::UIElements::EventCallbackFunctorBase* item);

  /// @brief Method AddRange, addr 0x2e4af68, size 0x190, virtual false, abstract: false, final false
  inline void AddRange(::UnityEngine::UIElements::EventCallbackList* list);

  /// @brief Method get_Count, addr 0x2e4b560, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x2e4b5a8, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventCallbackFunctorBase* get_Item(int32_t i);

  /// @brief Method Clear, addr 0x2e4b15c, size 0x6c, virtual false, abstract: false, final false
  inline void Clear();

  // Ctor Parameters [CppParam { name: "", ty: "EventCallbackList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventCallbackList(EventCallbackList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventCallbackList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventCallbackList(EventCallbackList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventCallbackList();

public:
  /// @brief Field m_List, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventCallbackFunctorBase*>* ___m_List;

  /// @brief Field <trickleDownCallbackCount>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____trickleDownCallbackCount_k__BackingField;

  /// @brief Field <bubbleUpCallbackCount>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____bubbleUpCallbackCount_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventCallbackList, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventCallbackList, ___m_List) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventCallbackList, ____trickleDownCallbackCount_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventCallbackList, ____bubbleUpCallbackCount_k__BackingField) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EventCallbackList);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventCallbackList*, "UnityEngine.UIElements", "EventCallbackList");
