#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/EntryPool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EntryPool)
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::UIElements::UIR {
class EntryPool___c;
}
namespace UnityEngine::UIElements::UIR {
class Entry;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class ImplicitPool_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class EntryPool;
}
namespace UnityEngine::UIElements::UIR {
class EntryPool___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::EntryPool);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::EntryPool___c);
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.EntryPool/<>c
class CORDL_TYPE EntryPool___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UIR::EntryPool___c* __9;

  static inline ::UnityEngine::UIElements::UIR::EntryPool___c* New_ctor();

  /// @brief Method <.cctor>b__8_0, addr 0x6aa4d14, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::Entry* __cctor_b__8_0();

  /// @brief Method <.cctor>b__8_1, addr 0x6aa4d5c, size 0x28, virtual false, abstract: false, final false
  inline void __cctor_b__8_1(::UnityEngine::UIElements::UIR::Entry* e);

  /// @brief Method .ctor, addr 0x6aa4d10, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UIR::EntryPool___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::UIR::EntryPool___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EntryPool___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EntryPool___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EntryPool___c(EntryPool___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EntryPool___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EntryPool___c(EntryPool___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5287 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::EntryPool___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.EntryPool
class CORDL_TYPE EntryPool : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::UIR::EntryPool___c;

  /// @brief Field k_CreateAction, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_CreateAction, put = setStaticF_k_CreateAction)) ::System::Func_1<::UnityEngine::UIElements::UIR::Entry*>* k_CreateAction;

  /// @brief Field k_ResetAction, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ResetAction, put = setStaticF_k_ResetAction)) ::System::Action_1<::UnityEngine::UIElements::UIR::Entry*>* k_ResetAction;

  /// @brief Field m_SharedPool, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SharedPool,
                      put = __cordl_internal_set_m_SharedPool)) ::UnityEngine::UIElements::UIR::ImplicitPool_1<::UnityEngine::UIElements::UIR::Entry*>* m_SharedPool;

  /// @brief Field m_ThreadEntries, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ThreadEntries,
                      put = __cordl_internal_set_m_ThreadEntries)) ::ArrayW<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::Entry*>*,
                                                                            ::Array<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::Entry*>*>*>
      m_ThreadEntries;

  /// @brief Method Get, addr 0x6aa48bc, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::Entry* Get();

  static inline ::UnityEngine::UIElements::UIR::EntryPool* New_ctor(int32_t maxCapacity);

  /// @brief Method ReturnAll, addr 0x6aa4aa8, size 0xdc, virtual false, abstract: false, final false
  inline void ReturnAll();

  constexpr ::UnityEngine::UIElements::UIR::ImplicitPool_1<::UnityEngine::UIElements::UIR::Entry*>* const& __cordl_internal_get_m_SharedPool() const;

  constexpr ::UnityEngine::UIElements::UIR::ImplicitPool_1<::UnityEngine::UIElements::UIR::Entry*>*& __cordl_internal_get_m_SharedPool();

  constexpr ::ArrayW<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::Entry*>*,
                     ::Array<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::Entry*>*>*> const&
  __cordl_internal_get_m_ThreadEntries() const;

  constexpr ::ArrayW<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::Entry*>*, ::Array<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::Entry*>*>*>&
  __cordl_internal_get_m_ThreadEntries();

  constexpr void __cordl_internal_set_m_SharedPool(::UnityEngine::UIElements::UIR::ImplicitPool_1<::UnityEngine::UIElements::UIR::Entry*>* value);

  constexpr void __cordl_internal_set_m_ThreadEntries(
      ::ArrayW<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::Entry*>*, ::Array<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::Entry*>*>*> value);

  /// @brief Method .ctor, addr 0x6aa46d0, size 0x1ec, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxCapacity);

  static inline ::System::Func_1<::UnityEngine::UIElements::UIR::Entry*>* getStaticF_k_CreateAction();

  static inline ::System::Action_1<::UnityEngine::UIElements::UIR::Entry*>* getStaticF_k_ResetAction();

  static inline void setStaticF_k_CreateAction(::System::Func_1<::UnityEngine::UIElements::UIR::Entry*>* value);

  static inline void setStaticF_k_ResetAction(::System::Action_1<::UnityEngine::UIElements::UIR::Entry*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EntryPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EntryPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EntryPool(EntryPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EntryPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EntryPool(EntryPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5288 };

  /// @brief Field k_StackSize offset 0xffffffff size 0x4
  static constexpr int32_t k_StackSize{ static_cast<int32_t>(0x80) };

  /// @brief Field m_ThreadEntries, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::Entry*>*, ::Array<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::Entry*>*>*>
      ___m_ThreadEntries;

  /// @brief Field m_SharedPool, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::ImplicitPool_1<::UnityEngine::UIElements::UIR::Entry*>* ___m_SharedPool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryPool, ___m_ThreadEntries) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryPool, ___m_SharedPool) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::EntryPool, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::EntryPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::EntryPool*, "UnityEngine.UIElements.UIR", "EntryPool");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::EntryPool___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::EntryPool___c*, "UnityEngine.UIElements.UIR", "EntryPool/<>c");
