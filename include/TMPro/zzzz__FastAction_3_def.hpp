#pragma once
// IWYU pragma private; include "TMPro/FastAction_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FastAction_3)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
// Forward declare root types
namespace TMPro {
template <typename A, typename B, typename C> class FastAction_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::TMPro::FastAction_3);
// Dependencies System.Object
namespace TMPro {
// cpp template
template <typename A, typename B, typename C>
// Is value type: false
// CS Name: TMPro.FastAction`3<A,B,C>
class CORDL_TYPE FastAction_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field delegates, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_delegates, put = __cordl_internal_set_delegates)) ::System::Collections::Generic::LinkedList_1<::System::Action_3<A, B, C>*>* delegates;

  /// @brief Field lookup, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_lookup,
                      put = __cordl_internal_set_lookup)) ::System::Collections::Generic::Dictionary_2<::System::Action_3<A, B, C>*,
                                                                                                       ::System::Collections::Generic::LinkedListNode_1<::System::Action_3<A, B, C>*>*>* lookup;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(::System::Action_3<A, B, C>* rhs);

  /// @brief Method Call, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Call(A a, B b, C c);

  static inline ::TMPro::FastAction_3<A, B, C>* New_ctor();

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Remove(::System::Action_3<A, B, C>* rhs);

  constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_3<A, B, C>*>* const& __cordl_internal_get_delegates() const;

  constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_3<A, B, C>*>*& __cordl_internal_get_delegates();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Action_3<A, B, C>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_3<A, B, C>*>*>* const&
  __cordl_internal_get_lookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Action_3<A, B, C>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_3<A, B, C>*>*>*& __cordl_internal_get_lookup();

  constexpr void __cordl_internal_set_delegates(::System::Collections::Generic::LinkedList_1<::System::Action_3<A, B, C>*>* value);

  constexpr void
  __cordl_internal_set_lookup(::System::Collections::Generic::Dictionary_2<::System::Action_3<A, B, C>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_3<A, B, C>*>*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FastAction_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FastAction_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FastAction_3(FastAction_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FastAction_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FastAction_3(FastAction_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14422 };

  /// @brief Field delegates, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<::System::Action_3<A, B, C>*>* ___delegates;

  /// @brief Field lookup, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Action_3<A, B, C>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_3<A, B, C>*>*>* ___lookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::TMPro::FastAction_3, "TMPro", "FastAction`3");
