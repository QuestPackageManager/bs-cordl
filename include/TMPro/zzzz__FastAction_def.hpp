#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FastAction)
namespace System {
class Action;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace TMPro {
class FastAction;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::FastAction);
// Type: TMPro::FastAction
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12225))
// CS Name: ::TMPro::FastAction*
class CORDL_TYPE FastAction : public ::System::Object {
public:
  // Declarations
  /// @brief Field delegates, offset 0x10, size 0x8
  __declspec(property(get = __get_delegates, put = __set_delegates))::System::Collections::Generic::LinkedList_1<::System::Action*>* delegates;

  /// @brief Field lookup, offset 0x18, size 0x8
  __declspec(property(get = __get_lookup,
                      put = __set_lookup))::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>* lookup;

  constexpr ::System::Collections::Generic::LinkedList_1<::System::Action*>*& __get_delegates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Action*>*> const& __get_delegates() const;

  constexpr void __set_delegates(::System::Collections::Generic::LinkedList_1<::System::Action*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>*& __get_lookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>*> const&
  __get_lookup() const;

  constexpr void __set_lookup(::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>* value);

  /// @brief Method Add addr 0x2a6b38c size 0xc0 virtual false final false
  inline void Add(::System::Action* rhs);

  /// @brief Method Remove addr 0x2a6b44c size 0xc0 virtual false final false
  inline void Remove(::System::Action* rhs);

  /// @brief Method Call addr 0x2a6b50c size 0x98 virtual false final false
  inline void Call();

  static inline ::TMPro::FastAction* New_ctor();

  /// @brief Method .ctor addr 0x2a6b5a4 size 0xc0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FastAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FastAction(FastAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FastAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FastAction(FastAction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FastAction();

public:
  /// @brief Field delegates, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<::System::Action*>* ___delegates;

  /// @brief Field lookup, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>* ___lookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::FastAction, 0x20>, "Size mismatch!");

static_assert(offsetof(::TMPro::FastAction, ___delegates) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::FastAction, ___lookup) == 0x18, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::FastAction);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::FastAction*, "TMPro", "FastAction");
