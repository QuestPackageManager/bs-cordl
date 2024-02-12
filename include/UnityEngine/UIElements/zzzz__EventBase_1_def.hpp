#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventBase_1)
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
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::EventBase_1);
// Type: UnityEngine.UIElements::EventBase`1
// SizeInfo { instance_size: 128, native_size: 124, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6438))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6439))
// CS Name: ::UnityEngine.UIElements::EventBase`1<T>*
class CORDL_TYPE EventBase_1 : public ::UnityEngine::UIElements::EventBase {
public:
  // Declarations
  /// @brief Field m_RefCount, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RefCount, put = __cordl_internal_set_m_RefCount)) int32_t m_RefCount;

  /// @brief Field s_TypeId, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_TypeId, put = setStaticF_s_TypeId)) int64_t s_TypeId;

  /// @brief Field s_Pool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Pool, put = setStaticF_s_Pool))::UnityEngine::UIElements::ObjectPool_1<T>* s_Pool;

  __declspec(property(get = get_eventTypeId)) int64_t eventTypeId;

  constexpr int32_t& __cordl_internal_get_m_RefCount();

  constexpr int32_t const& __cordl_internal_get_m_RefCount() const;

  constexpr void __cordl_internal_set_m_RefCount(int32_t value);

  static inline void setStaticF_s_TypeId(int64_t value);

  static inline int64_t getStaticF_s_TypeId();

  static inline void setStaticF_s_Pool(::UnityEngine::UIElements::ObjectPool_1<T>* value);

  static inline ::UnityEngine::UIElements::ObjectPool_1<T>* getStaticF_s_Pool();

  static inline ::UnityEngine::UIElements::EventBase_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method TypeId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int64_t TypeId();

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T GetPooled();

  /// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T GetPooled(::UnityEngine::UIElements::EventBase* e);

  /// @brief Method ReleasePooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void ReleasePooled(T evt);

  /// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Acquire();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method get_eventTypeId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int64_t get_eventTypeId();

  // Ctor Parameters [CppParam { name: "", ty: "EventBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBase_1(EventBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBase_1(EventBase_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBase_1();

public:
  /// @brief Field m_RefCount, offset: 0x78, size: 0x4, def value: None
  int32_t ___m_RefCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::EventBase_1, "UnityEngine.UIElements", "EventBase`1");
