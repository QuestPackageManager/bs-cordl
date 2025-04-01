#pragma once
// IWYU pragma private; include "GlobalNamespace/ProfanityFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProfanityFilter)
namespace GlobalNamespace {
class ProfanityFilter_TrieNode;
}
namespace GlobalNamespace {
class ProfanityFilter__GetLookalikeLetters_d__4;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class ProfanityFilter;
}
namespace GlobalNamespace {
class ProfanityFilter_TrieNode;
}
namespace GlobalNamespace {
class ProfanityFilter__GetLookalikeLetters_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ProfanityFilter);
MARK_REF_PTR_T(::GlobalNamespace::ProfanityFilter_TrieNode);
MARK_REF_PTR_T(::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProfanityFilter/TrieNode
class CORDL_TYPE ProfanityFilter_TrieNode : public ::System::Object {
public:
  // Declarations
  /// @brief Field _children, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__children,
                      put = __cordl_internal_set__children)) ::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::ProfanityFilter_TrieNode*>* _children;

  /// @brief Field _shortestWord, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__shortestWord, put = __cordl_internal_set__shortestWord)) int32_t _shortestWord;

  /// @brief Method AddWord, addr 0x22e01d0, size 0x4ac, virtual false, abstract: false, final false
  inline void AddWord(::StringW word, int32_t index);

  /// @brief Method IsMatch, addr 0x22e06f0, size 0x178, virtual false, abstract: false, final false
  inline bool IsMatch(::StringW word, int32_t index);

  static inline ::GlobalNamespace::ProfanityFilter_TrieNode* New_ctor();

  constexpr ::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::ProfanityFilter_TrieNode*>* const& __cordl_internal_get__children() const;

  constexpr ::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::ProfanityFilter_TrieNode*>*& __cordl_internal_get__children();

  constexpr int32_t const& __cordl_internal_get__shortestWord() const;

  constexpr int32_t& __cordl_internal_get__shortestWord();

  constexpr void __cordl_internal_set__children(::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::ProfanityFilter_TrieNode*>* value);

  constexpr void __cordl_internal_set__shortestWord(int32_t value);

  /// @brief Method .ctor, addr 0x22e01c0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfanityFilter_TrieNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProfanityFilter_TrieNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfanityFilter_TrieNode(ProfanityFilter_TrieNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfanityFilter_TrieNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfanityFilter_TrieNode(ProfanityFilter_TrieNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14939 };

  /// @brief Field _children, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::ProfanityFilter_TrieNode*>* ____children;

  /// @brief Field _shortestWord, offset: 0x18, size: 0x4, def value: None
  int32_t ____shortestWord;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProfanityFilter_TrieNode, ____children) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProfanityFilter_TrieNode, ____shortestWord) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ProfanityFilter_TrieNode, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProfanityFilter/<GetLookalikeLetters>d__4
class CORDL_TYPE ProfanityFilter__GetLookalikeLetters_d__4 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Char__get_Current)) char16_t System_Collections_Generic_IEnumerator_System_Char__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x14, size 0x2
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) char16_t __2__current;

  /// @brief Field <>3__c, offset 0x1e, size 0x2
  __declspec(property(get = __cordl_internal_get___3__c, put = __cordl_internal_set___3__c)) char16_t __3__c;

  /// @brief Field <>l__initialThreadId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field c, offset 0x1c, size 0x2
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c)) char16_t c;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<char16_t>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<char16_t>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<char16_t>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<char16_t>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x22e097c, size 0xa4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator, addr 0x22e0abc, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<char16_t>* System_Collections_Generic_IEnumerable_System_Char__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Char>.get_Current, addr 0x22e0a20, size 0x8, virtual true, abstract: false, final true
  inline char16_t System_Collections_Generic_IEnumerator_System_Char__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x22e0b58, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x22e0a28, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x22e0a60, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x22e0978, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr char16_t const& __cordl_internal_get___2__current() const;

  constexpr char16_t& __cordl_internal_get___2__current();

  constexpr char16_t const& __cordl_internal_get___3__c() const;

  constexpr char16_t& __cordl_internal_get___3__c();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr char16_t const& __cordl_internal_get_c() const;

  constexpr char16_t& __cordl_internal_get_c();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(char16_t value);

  constexpr void __cordl_internal_set___3__c(char16_t value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_c(char16_t value);

  /// @brief Method .ctor, addr 0x22e08d8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<char16_t>"
  constexpr ::System::Collections::Generic::IEnumerable_1<char16_t>* i___System__Collections__Generic__IEnumerable_1_char16_t_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<char16_t>"
  constexpr ::System::Collections::Generic::IEnumerator_1<char16_t>* i___System__Collections__Generic__IEnumerator_1_char16_t_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfanityFilter__GetLookalikeLetters_d__4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProfanityFilter__GetLookalikeLetters_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfanityFilter__GetLookalikeLetters_d__4(ProfanityFilter__GetLookalikeLetters_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfanityFilter__GetLookalikeLetters_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfanityFilter__GetLookalikeLetters_d__4(ProfanityFilter__GetLookalikeLetters_d__4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14940 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x14, size: 0x2, def value: None
  char16_t _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x18, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field c, offset: 0x1c, size: 0x2, def value: None
  char16_t ___c;

  /// @brief Field <>3__c, offset: 0x1e, size: 0x2, def value: None
  char16_t _____3__c;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4, _____l__initialThreadId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4, ___c) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4, _____3__c) == 0x1e, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProfanityFilter
class CORDL_TYPE ProfanityFilter : public ::System::Object {
public:
  // Declarations
  using TrieNode = ::GlobalNamespace::ProfanityFilter_TrieNode;

  using _GetLookalikeLetters_d__4 = ::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4;

  /// @brief Field _trie, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__trie, put = __cordl_internal_set__trie)) ::GlobalNamespace::ProfanityFilter_TrieNode* _trie;

  /// @brief Method GetLeetEquivalent, addr 0x22e090c, size 0x6c, virtual false, abstract: false, final false
  static inline char16_t GetLeetEquivalent(char16_t c);

  /// @brief Method GetLookalikeLetters, addr 0x22e0868, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<char16_t>* GetLookalikeLetters(char16_t c);

  /// @brief Method IsProfane, addr 0x22e067c, size 0x74, virtual false, abstract: false, final false
  inline bool IsProfane(::StringW word);

  static inline ::GlobalNamespace::ProfanityFilter* New_ctor(::System::Collections::Generic::IEnumerable_1<::StringW>* wordList);

  constexpr ::GlobalNamespace::ProfanityFilter_TrieNode* const& __cordl_internal_get__trie() const;

  constexpr ::GlobalNamespace::ProfanityFilter_TrieNode*& __cordl_internal_get__trie();

  constexpr void __cordl_internal_set__trie(::GlobalNamespace::ProfanityFilter_TrieNode* value);

  /// @brief Method .ctor, addr 0x22dfe88, size 0x338, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::StringW>* wordList);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfanityFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProfanityFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfanityFilter(ProfanityFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfanityFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfanityFilter(ProfanityFilter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14941 };

  /// @brief Field _trie, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::ProfanityFilter_TrieNode* ____trie;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProfanityFilter, ____trie) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ProfanityFilter, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ProfanityFilter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProfanityFilter*, "", "ProfanityFilter");
NEED_NO_BOX(::GlobalNamespace::ProfanityFilter_TrieNode);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProfanityFilter_TrieNode*, "", "ProfanityFilter/TrieNode");
NEED_NO_BOX(::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProfanityFilter__GetLookalikeLetters_d__4*, "", "ProfanityFilter/<GetLookalikeLetters>d__4");
