#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCallbackList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventCallbackList)
namespace System {
class Delegate;
}
namespace System {
template <typename T> struct Span_1;
}
namespace UnityEngine::UIElements {
class EventCallbackFunctorBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventCallbackList;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EventCallbackList);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EventCallbackList
class CORDL_TYPE EventCallbackList : public ::System::Object {
public:
  // Declarations
  /// @brief Field EmptyArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyArray,
                      put = setStaticF_EmptyArray)) ::ArrayW<::UnityEngine::UIElements::EventCallbackFunctorBase*, ::Array<::UnityEngine::UIElements::EventCallbackFunctorBase*>*>
      EmptyArray;

  /// @brief Field EmptyList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyList, put = setStaticF_EmptyList)) ::UnityEngine::UIElements::EventCallbackList* EmptyList;

  __declspec(property(get = get_Span)) ::System::Span_1<::UnityEngine::UIElements::EventCallbackFunctorBase*> Span;

  /// @brief Field m_Array, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Array,
                      put = __cordl_internal_set_m_Array)) ::ArrayW<::UnityEngine::UIElements::EventCallbackFunctorBase*, ::Array<::UnityEngine::UIElements::EventCallbackFunctorBase*>*>
      m_Array;

  /// @brief Field m_Count, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Count, put = __cordl_internal_set_m_Count)) int32_t m_Count;

  /// @brief Method Add, addr 0x6bcd6bc, size 0xf0, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::UIElements::EventCallbackFunctorBase* item);

  /// @brief Method AddRange, addr 0x6bcd320, size 0xcc, virtual false, abstract: false, final false
  inline void AddRange(::UnityEngine::UIElements::EventCallbackList* list);

  /// @brief Method Clear, addr 0x6bcd46c, size 0x28, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Find, addr 0x6bcd508, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventCallbackFunctorBase* Find(int64_t eventTypeId, ::System::Delegate* callback);

  static inline ::UnityEngine::UIElements::EventCallbackList* New_ctor();

  static inline ::UnityEngine::UIElements::EventCallbackList* New_ctor(::UnityEngine::UIElements::EventCallbackList* source);

  /// @brief Method Remove, addr 0x6bcd5b8, size 0x104, virtual false, abstract: false, final false
  inline bool Remove(int64_t eventTypeId, ::System::Delegate* callback, ::ByRef<::UnityEngine::UIElements::EventCallbackFunctorBase*> removedFunctor);

  constexpr ::ArrayW<::UnityEngine::UIElements::EventCallbackFunctorBase*, ::Array<::UnityEngine::UIElements::EventCallbackFunctorBase*>*> const& __cordl_internal_get_m_Array() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::EventCallbackFunctorBase*, ::Array<::UnityEngine::UIElements::EventCallbackFunctorBase*>*>& __cordl_internal_get_m_Array();

  constexpr int32_t const& __cordl_internal_get_m_Count() const;

  constexpr int32_t& __cordl_internal_get_m_Count();

  constexpr void __cordl_internal_set_m_Array(::ArrayW<::UnityEngine::UIElements::EventCallbackFunctorBase*, ::Array<::UnityEngine::UIElements::EventCallbackFunctorBase*>*> value);

  constexpr void __cordl_internal_set_m_Count(int32_t value);

  /// @brief Method .ctor, addr 0x6bcd2bc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6bcd240, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::EventCallbackList* source);

  static inline ::ArrayW<::UnityEngine::UIElements::EventCallbackFunctorBase*, ::Array<::UnityEngine::UIElements::EventCallbackFunctorBase*>*> getStaticF_EmptyArray();

  static inline ::UnityEngine::UIElements::EventCallbackList* getStaticF_EmptyList();

  /// @brief Method get_Span, addr 0x6bcd7ac, size 0xec, virtual false, abstract: false, final false
  inline ::System::Span_1<::UnityEngine::UIElements::EventCallbackFunctorBase*> get_Span();

  static inline void setStaticF_EmptyArray(::ArrayW<::UnityEngine::UIElements::EventCallbackFunctorBase*, ::Array<::UnityEngine::UIElements::EventCallbackFunctorBase*>*> value);

  static inline void setStaticF_EmptyList(::UnityEngine::UIElements::EventCallbackList* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventCallbackList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventCallbackList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventCallbackList(EventCallbackList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventCallbackList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventCallbackList(EventCallbackList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4459 };

  /// @brief Field m_Array, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::EventCallbackFunctorBase*, ::Array<::UnityEngine::UIElements::EventCallbackFunctorBase*>*> ___m_Array;

  /// @brief Field m_Count, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EventCallbackList, ___m_Array) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventCallbackList, ___m_Count) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventCallbackList, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EventCallbackList);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventCallbackList*, "UnityEngine.UIElements", "EventCallbackList");
