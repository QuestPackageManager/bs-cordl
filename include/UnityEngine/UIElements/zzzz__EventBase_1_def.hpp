#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventBase_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCategory_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventBase_1)
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::UIElements {
template <typename T> class EventBase_1___c;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
template <typename T> class ObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class EventBase_1;
}
namespace UnityEngine::UIElements {
template <typename T> class EventBase_1___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::EventBase_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::EventBase_1___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.EventBase`1/<>c<T>
class CORDL_TYPE EventBase_1___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::EventBase_1___c<T>* __9;

  static inline ::UnityEngine::UIElements::EventBase_1___c<T>* New_ctor();

  /// @brief Method <.cctor>b__15_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T __cctor_b__15_0();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::EventBase_1___c<T>* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::EventBase_1___c<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBase_1___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBase_1___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBase_1___c(EventBase_1___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBase_1___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBase_1___c(EventBase_1___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5807 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.EventBase, UnityEngine.UIElements.EventCategory
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.EventBase`1<T>
class CORDL_TYPE EventBase_1 : public ::UnityEngine::UIElements::EventBase {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::EventBase_1___c<T>;

  /// @brief Field EventCategory, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_EventCategory, put = setStaticF_EventCategory)) ::UnityEngine::UIElements::EventCategory EventCategory;

  __declspec(property(get = get_eventTypeId)) int64_t eventTypeId;

  /// @brief Field m_RefCount, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RefCount, put = __cordl_internal_set_m_RefCount)) int32_t m_RefCount;

  /// @brief Field s_Pool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Pool, put = setStaticF_s_Pool)) ::UnityEngine::UIElements::ObjectPool_1<T>* s_Pool;

  /// @brief Field s_TypeId, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TypeId, put = setStaticF_s_TypeId)) int64_t s_TypeId;

  /// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Acquire();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T GetPooled();

  /// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T GetPooled(::UnityEngine::UIElements::EventBase* e);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init();

  static inline ::UnityEngine::UIElements::EventBase_1<T>* New_ctor();

  /// @brief Method ReleasePooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void ReleasePooled(T evt);

  /// @brief Method SetCreateFunction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void SetCreateFunction(::System::Func_1<T>* createMethod);

  /// @brief Method TypeId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int64_t TypeId();

  constexpr int32_t const& __cordl_internal_get_m_RefCount() const;

  constexpr int32_t& __cordl_internal_get_m_RefCount();

  constexpr void __cordl_internal_set_m_RefCount(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::EventCategory getStaticF_EventCategory();

  static inline ::UnityEngine::UIElements::ObjectPool_1<T>* getStaticF_s_Pool();

  static inline int64_t getStaticF_s_TypeId();

  /// @brief Method get_eventTypeId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int64_t get_eventTypeId();

  static inline void setStaticF_EventCategory(::UnityEngine::UIElements::EventCategory value);

  static inline void setStaticF_s_Pool(::UnityEngine::UIElements::ObjectPool_1<T>* value);

  static inline void setStaticF_s_TypeId(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBase_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBase_1(EventBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBase_1(EventBase_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5808 };

  /// @brief Field m_RefCount, offset: 0x80, size: 0x4, def value: None
  int32_t ___m_RefCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::EventBase_1, "UnityEngine.UIElements", "EventBase`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::EventBase_1___c, "UnityEngine.UIElements", "EventBase`1/<>c");
