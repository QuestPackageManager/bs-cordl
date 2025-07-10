#pragma once
// IWYU pragma private; include "TMPro/FastAction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FastAction)
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
class Action;
}
// Forward declare root types
namespace TMPro {
class FastAction;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::FastAction);
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.FastAction
class CORDL_TYPE FastAction : public ::System::Object {
public:
  // Declarations
  /// @brief Field delegates, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_delegates, put = __cordl_internal_set_delegates)) ::System::Collections::Generic::LinkedList_1<::System::Action*>* delegates;

  /// @brief Field lookup, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_lookup,
                      put = __cordl_internal_set_lookup)) ::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>* lookup;

  /// @brief Method Add, addr 0x47b4be0, size 0xc0, virtual false, abstract: false, final false
  inline void Add(::System::Action* rhs);

  /// @brief Method Call, addr 0x47b4d60, size 0x98, virtual false, abstract: false, final false
  inline void Call();

  static inline ::TMPro::FastAction* New_ctor();

  /// @brief Method Remove, addr 0x47b4ca0, size 0xc0, virtual false, abstract: false, final false
  inline void Remove(::System::Action* rhs);

  constexpr ::System::Collections::Generic::LinkedList_1<::System::Action*>* const& __cordl_internal_get_delegates() const;

  constexpr ::System::Collections::Generic::LinkedList_1<::System::Action*>*& __cordl_internal_get_delegates();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>* const& __cordl_internal_get_lookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>*& __cordl_internal_get_lookup();

  constexpr void __cordl_internal_set_delegates(::System::Collections::Generic::LinkedList_1<::System::Action*>* value);

  constexpr void __cordl_internal_set_lookup(::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>* value);

  /// @brief Method .ctor, addr 0x47b4df8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FastAction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FastAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FastAction(FastAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FastAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FastAction(FastAction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14419 };

  /// @brief Field delegates, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<::System::Action*>* ___delegates;

  /// @brief Field lookup, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>* ___lookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::FastAction, ___delegates) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::FastAction, ___lookup) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::FastAction, 0x20>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::FastAction);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::FastAction*, "TMPro", "FastAction");
