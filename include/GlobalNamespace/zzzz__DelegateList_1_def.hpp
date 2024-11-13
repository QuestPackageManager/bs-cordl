#pragma once
// IWYU pragma private; include "GlobalNamespace/DelegateList_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DelegateList_1)
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class DelegateList_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::DelegateList_1);
// Type: ::DelegateList`1
// SizeInfo { instance_size: 48, native_size: 41, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::DelegateList`1<T>*
class CORDL_TYPE DelegateList_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field m_acquireFunc, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_acquireFunc,
                      put = __cordl_internal_set_m_acquireFunc)) ::System::Func_2<::System::Action_1<T>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* m_acquireFunc;

  /// @brief Field m_callbacks, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_callbacks, put = __cordl_internal_set_m_callbacks)) ::System::Collections::Generic::LinkedList_1<::System::Action_1<T>*>* m_callbacks;

  /// @brief Field m_invoking, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_invoking, put = __cordl_internal_set_m_invoking)) bool m_invoking;

  /// @brief Field m_releaseFunc, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_releaseFunc,
                      put = __cordl_internal_set_m_releaseFunc)) ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* m_releaseFunc;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(::System::Action_1<T>* action);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CreateWithGlobalCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::DelegateList_1<T>* CreateWithGlobalCache();

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Invoke(T res);

  static inline ::GlobalNamespace::DelegateList_1<T>* New_ctor(::System::Func_2<::System::Action_1<T>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* acquireFunc,
                                                               ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* releaseFunc);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Remove(::System::Action_1<T>* action);

  constexpr ::System::Func_2<::System::Action_1<T>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*& __cordl_internal_get_m_acquireFunc();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Action_1<T>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*> const&
  __cordl_internal_get_m_acquireFunc() const;

  constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_1<T>*>*& __cordl_internal_get_m_callbacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Action_1<T>*>*> const& __cordl_internal_get_m_callbacks() const;

  constexpr bool const& __cordl_internal_get_m_invoking() const;

  constexpr bool& __cordl_internal_get_m_invoking();

  constexpr ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*& __cordl_internal_get_m_releaseFunc();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>*> const& __cordl_internal_get_m_releaseFunc() const;

  constexpr void __cordl_internal_set_m_acquireFunc(::System::Func_2<::System::Action_1<T>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* value);

  constexpr void __cordl_internal_set_m_callbacks(::System::Collections::Generic::LinkedList_1<::System::Action_1<T>*>* value);

  constexpr void __cordl_internal_set_m_invoking(bool value);

  constexpr void __cordl_internal_set_m_releaseFunc(::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_2<::System::Action_1<T>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* acquireFunc,
                    ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* releaseFunc);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelegateList_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DelegateList_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelegateList_1(DelegateList_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelegateList_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelegateList_1(DelegateList_1 const&) = delete;

  /// @brief Field m_acquireFunc, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::System::Action_1<T>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* ___m_acquireFunc;

  /// @brief Field m_releaseFunc, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::System::Collections::Generic::LinkedListNode_1<::System::Action_1<T>*>*>* ___m_releaseFunc;

  /// @brief Field m_callbacks, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<::System::Action_1<T>*>* ___m_callbacks;

  /// @brief Field m_invoking, offset: 0x28, size: 0x1, def value: None
  bool ___m_invoking;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15547 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::DelegateList_1, "", "DelegateList`1");
