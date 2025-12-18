#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/FastAction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
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
namespace UnityEngine::TextCore::Text {
class FastAction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::FastAction);
// Dependencies System.Object
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.FastAction
class CORDL_TYPE FastAction : public ::System::Object {
public:
  // Declarations
  /// @brief Field delegates, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_delegates, put = __cordl_internal_set_delegates)) ::System::Collections::Generic::LinkedList_1<::System::Action*>* delegates;

  /// @brief Field lookup, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_lookup,
                      put = __cordl_internal_set_lookup)) ::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>* lookup;

  static inline ::UnityEngine::TextCore::Text::FastAction* New_ctor();

  constexpr ::System::Collections::Generic::LinkedList_1<::System::Action*>* const& __cordl_internal_get_delegates() const;

  constexpr ::System::Collections::Generic::LinkedList_1<::System::Action*>*& __cordl_internal_get_delegates();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>* const& __cordl_internal_get_lookup() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>*& __cordl_internal_get_lookup();

  constexpr void __cordl_internal_set_delegates(::System::Collections::Generic::LinkedList_1<::System::Action*>* value);

  constexpr void __cordl_internal_set_lookup(::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>* value);

  /// @brief Method .ctor, addr 0x69fafc0, size 0xd4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17172 };

  /// @brief Field delegates, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<::System::Action*>* ___delegates;

  /// @brief Field lookup, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>* ___lookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::FastAction, ___delegates) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::FastAction, ___lookup) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::FastAction, 0x20>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::FastAction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FastAction*, "UnityEngine.TextCore.Text", "FastAction");
