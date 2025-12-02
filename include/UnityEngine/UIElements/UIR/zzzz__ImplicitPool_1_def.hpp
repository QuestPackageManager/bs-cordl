#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/ImplicitPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ImplicitPool_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template <typename T> class ImplicitPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UIR::ImplicitPool_1);
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.ImplicitPool`1<T>
class CORDL_TYPE ImplicitPool_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_CreateAction, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CreateAction, put = __cordl_internal_set_m_CreateAction)) ::System::Func_1<T>* m_CreateAction;

  /// @brief Field m_List, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_List, put = __cordl_internal_set_m_List)) ::System::Collections::Generic::List_1<T>* m_List;

  /// @brief Field m_MaxCapacity, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxCapacity, put = __cordl_internal_set_m_MaxCapacity)) int32_t m_MaxCapacity;

  /// @brief Field m_ResetAction, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResetAction, put = __cordl_internal_set_m_ResetAction)) ::System::Action_1<T>* m_ResetAction;

  /// @brief Field m_StartCapacity, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StartCapacity, put = __cordl_internal_set_m_StartCapacity)) int32_t m_StartCapacity;

  /// @brief Field m_UsedCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UsedCount, put = __cordl_internal_set_m_UsedCount)) int32_t m_UsedCount;

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Get();

  static inline ::UnityEngine::UIElements::UIR::ImplicitPool_1<T>* New_ctor(::System::Func_1<T>* createAction, ::System::Action_1<T>* resetAction, int32_t startCapacity, int32_t maxCapacity);

  /// @brief Method ReturnAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ReturnAll();

  constexpr ::System::Func_1<T>* const& __cordl_internal_get_m_CreateAction() const;

  constexpr ::System::Func_1<T>*& __cordl_internal_get_m_CreateAction();

  constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get_m_List() const;

  constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_m_List();

  constexpr int32_t const& __cordl_internal_get_m_MaxCapacity() const;

  constexpr int32_t& __cordl_internal_get_m_MaxCapacity();

  constexpr ::System::Action_1<T>* const& __cordl_internal_get_m_ResetAction() const;

  constexpr ::System::Action_1<T>*& __cordl_internal_get_m_ResetAction();

  constexpr int32_t const& __cordl_internal_get_m_StartCapacity() const;

  constexpr int32_t& __cordl_internal_get_m_StartCapacity();

  constexpr int32_t const& __cordl_internal_get_m_UsedCount() const;

  constexpr int32_t& __cordl_internal_get_m_UsedCount();

  constexpr void __cordl_internal_set_m_CreateAction(::System::Func_1<T>* value);

  constexpr void __cordl_internal_set_m_List(::System::Collections::Generic::List_1<T>* value);

  constexpr void __cordl_internal_set_m_MaxCapacity(int32_t value);

  constexpr void __cordl_internal_set_m_ResetAction(::System::Action_1<T>* value);

  constexpr void __cordl_internal_set_m_StartCapacity(int32_t value);

  constexpr void __cordl_internal_set_m_UsedCount(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_1<T>* createAction, ::System::Action_1<T>* resetAction, int32_t startCapacity, int32_t maxCapacity);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImplicitPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImplicitPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImplicitPool_1(ImplicitPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImplicitPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImplicitPool_1(ImplicitPool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5299 };

  /// @brief Field m_StartCapacity, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_StartCapacity;

  /// @brief Field m_MaxCapacity, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_MaxCapacity;

  /// @brief Field m_CreateAction, offset: 0x18, size: 0x8, def value: None
  ::System::Func_1<T>* ___m_CreateAction;

  /// @brief Field m_ResetAction, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<T>* ___m_ResetAction;

  /// @brief Field m_List, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* ___m_List;

  /// @brief Field m_UsedCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_UsedCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::ImplicitPool_1, "UnityEngine.UIElements.UIR", "ImplicitPool`1");
