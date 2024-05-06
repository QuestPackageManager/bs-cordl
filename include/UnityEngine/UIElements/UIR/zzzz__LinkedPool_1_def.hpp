#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/LinkedPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LinkedPool_1)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template <typename T> class LinkedPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UIR::LinkedPool_1);
// Type: UnityEngine.UIElements.UIR::LinkedPool`1
// SizeInfo { instance_size: 56, native_size: 52, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.UIElements.UIR::LinkedPool`1<T>*
class CORDL_TYPE LinkedPool_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count, put = set_Count)) int32_t Count;

  /// @brief Field <Count>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__Count_k__BackingField, put = __cordl_internal_set__Count_k__BackingField)) int32_t _Count_k__BackingField;

  /// @brief Field m_CreateFunc, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CreateFunc, put = __cordl_internal_set_m_CreateFunc))::System::Func_1<T>* m_CreateFunc;

  /// @brief Field m_Limit, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Limit, put = __cordl_internal_set_m_Limit)) int32_t m_Limit;

  /// @brief Field m_PoolFirst, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PoolFirst, put = __cordl_internal_set_m_PoolFirst)) T m_PoolFirst;

  /// @brief Field m_ResetAction, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResetAction, put = __cordl_internal_set_m_ResetAction))::System::Action_1<T>* m_ResetAction;

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Get();

  static inline ::UnityEngine::UIElements::UIR::LinkedPool_1<T>* New_ctor(::System::Func_1<T>* createFunc, ::System::Action_1<T>* resetAction, int32_t limit);

  /// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Return(T item);

  constexpr int32_t const& __cordl_internal_get__Count_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Count_k__BackingField();

  constexpr ::System::Func_1<T>*& __cordl_internal_get_m_CreateFunc();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& __cordl_internal_get_m_CreateFunc() const;

  constexpr int32_t const& __cordl_internal_get_m_Limit() const;

  constexpr int32_t& __cordl_internal_get_m_Limit();

  constexpr T const& __cordl_internal_get_m_PoolFirst() const;

  constexpr T& __cordl_internal_get_m_PoolFirst();

  constexpr ::System::Action_1<T>*& __cordl_internal_get_m_ResetAction();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __cordl_internal_get_m_ResetAction() const;

  constexpr void __cordl_internal_set__Count_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_CreateFunc(::System::Func_1<T>* value);

  constexpr void __cordl_internal_set_m_Limit(int32_t value);

  constexpr void __cordl_internal_set_m_PoolFirst(T value);

  constexpr void __cordl_internal_set_m_ResetAction(::System::Action_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_1<T>* createFunc, ::System::Action_1<T>* resetAction, int32_t limit);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method set_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Count(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinkedPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LinkedPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinkedPool_1(LinkedPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinkedPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinkedPool_1(LinkedPool_1 const&) = delete;

  /// @brief Field m_CreateFunc, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<T>* ___m_CreateFunc;

  /// @brief Field m_ResetAction, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<T>* ___m_ResetAction;

  /// @brief Field m_Limit, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_Limit;

  /// @brief Field m_PoolFirst, offset: 0x28, size: 0x8, def value: None
  T ___m_PoolFirst;

  /// @brief Field <Count>k__BackingField, offset: 0x30, size: 0x4, def value: None
  int32_t ____Count_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::LinkedPool_1, "UnityEngine.UIElements.UIR", "LinkedPool`1");
