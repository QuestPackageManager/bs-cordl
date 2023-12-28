#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FastAction_1)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
// Forward declare root types
namespace TMPro {
template <typename A> class FastAction_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::TMPro::FastAction_1);
// Type: TMPro::FastAction`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// cpp template
template <typename A>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12298))
// CS Name: ::TMPro::FastAction`1<A>*
class CORDL_TYPE FastAction_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field delegates, offset 0x10, size 0x8
  __declspec(property(get = __get_delegates, put = __set_delegates))::System::Collections::Generic::LinkedList_1<::System::Action_1<A>*>* delegates;

  /// @brief Field lookup, offset 0x18, size 0x8
  __declspec(property(get = __get_lookup,
                      put = __set_lookup))::System::Collections::Generic::Dictionary_2<::System::Action_1<A>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<A>*>*>* lookup;

  constexpr ::System::Collections::Generic::LinkedList_1<::System::Action_1<A>*>*& __get_delegates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Action_1<A>*>*> const& __get_delegates() const;

  constexpr void __set_delegates(::System::Collections::Generic::LinkedList_1<::System::Action_1<A>*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Action_1<A>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<A>*>*>*& __get_lookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Action_1<A>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<A>*>*>*> const&
  __get_lookup() const;

  constexpr void __set_lookup(::System::Collections::Generic::Dictionary_2<::System::Action_1<A>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<A>*>*>* value);

  /// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Add(::System::Action_1<A>* rhs);

  /// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Remove(::System::Action_1<A>* rhs);

  /// @brief Method Call addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Call(A a);

  static inline ::TMPro::FastAction_1<A>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FastAction_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FastAction_1(FastAction_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FastAction_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FastAction_1(FastAction_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FastAction_1();

public:
  /// @brief Field delegates, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<::System::Action_1<A>*>* ___delegates;

  /// @brief Field lookup, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Action_1<A>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<A>*>*>* ___lookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::TMPro::FastAction_1, "TMPro", "FastAction`1");
