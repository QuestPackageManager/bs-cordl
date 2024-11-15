#pragma once
// IWYU pragma private; include "GlobalNamespace/ProfanityFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProfanityFilter)
namespace GlobalNamespace {
class __ProfanityFilter__TrieNode;
}
namespace GlobalNamespace {
class __ProfanityFilter___GetLookalikeLetters_d__4;
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
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class ProfanityFilter;
}
namespace GlobalNamespace {
class __ProfanityFilter__TrieNode;
}
namespace GlobalNamespace {
class __ProfanityFilter___GetLookalikeLetters_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ProfanityFilter);
MARK_REF_PTR_T(::GlobalNamespace::__ProfanityFilter__TrieNode);
MARK_REF_PTR_T(::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4);
// Type: ::TrieNode
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ProfanityFilter::TrieNode*
class CORDL_TYPE __ProfanityFilter__TrieNode : public ::System::Object {
public:
  // Declarations
  /// @brief Field _children, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__children,
                      put = __cordl_internal_set__children)) ::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::__ProfanityFilter__TrieNode*>* _children;

  /// @brief Field _shortestWord, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__shortestWord, put = __cordl_internal_set__shortestWord)) int32_t _shortestWord;

  /// @brief Method AddWord, addr 0x22ae604, size 0x4ac, virtual false, abstract: false, final false
  inline void AddWord(::StringW word, int32_t index);

  /// @brief Method IsMatch, addr 0x22aeb24, size 0x178, virtual false, abstract: false, final false
  inline bool IsMatch(::StringW word, int32_t index);

  static inline ::GlobalNamespace::__ProfanityFilter__TrieNode* New_ctor();

  constexpr ::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::__ProfanityFilter__TrieNode*>*& __cordl_internal_get__children();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::__ProfanityFilter__TrieNode*>*> const& __cordl_internal_get__children() const;

  constexpr int32_t const& __cordl_internal_get__shortestWord() const;

  constexpr int32_t& __cordl_internal_get__shortestWord();

  constexpr void __cordl_internal_set__children(::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::__ProfanityFilter__TrieNode*>* value);

  constexpr void __cordl_internal_set__shortestWord(int32_t value);

  /// @brief Method .ctor, addr 0x22ae5f4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProfanityFilter__TrieNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ProfanityFilter__TrieNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProfanityFilter__TrieNode(__ProfanityFilter__TrieNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProfanityFilter__TrieNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProfanityFilter__TrieNode(__ProfanityFilter__TrieNode const&) = delete;

  /// @brief Field _children, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<char16_t, ::GlobalNamespace::__ProfanityFilter__TrieNode*>* ____children;

  /// @brief Field _shortestWord, offset: 0x18, size: 0x4, def value: None
  int32_t ____shortestWord;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14902 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ProfanityFilter__TrieNode, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ProfanityFilter__TrieNode, ____children) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ProfanityFilter__TrieNode, ____shortestWord) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetLookalikeLetters>d__4
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ProfanityFilter::<GetLookalikeLetters>d__4*
class CORDL_TYPE __ProfanityFilter___GetLookalikeLetters_d__4 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x22aedb0, size 0xa4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator, addr 0x22aeef0, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<char16_t>* System_Collections_Generic_IEnumerable_System_Char__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Char>.get_Current, addr 0x22aee54, size 0x8, virtual true, abstract: false, final true
  inline char16_t System_Collections_Generic_IEnumerator_System_Char__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x22aef8c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x22aee5c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x22aee94, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x22aedac, size 0x4, virtual true, abstract: false, final true
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

  /// @brief Method .ctor, addr 0x22aed0c, size 0x34, virtual false, abstract: false, final false
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
  constexpr __ProfanityFilter___GetLookalikeLetters_d__4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ProfanityFilter___GetLookalikeLetters_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProfanityFilter___GetLookalikeLetters_d__4(__ProfanityFilter___GetLookalikeLetters_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProfanityFilter___GetLookalikeLetters_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProfanityFilter___GetLookalikeLetters_d__4(__ProfanityFilter___GetLookalikeLetters_d__4 const&) = delete;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14903 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4, _____l__initialThreadId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4, ___c) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4, _____3__c) == 0x1e, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ProfanityFilter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ProfanityFilter*
class CORDL_TYPE ProfanityFilter : public ::System::Object {
public:
  // Declarations
  using TrieNode = ::GlobalNamespace::__ProfanityFilter__TrieNode;

  using _GetLookalikeLetters_d__4 = ::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4;

  /// @brief Field _trie, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__trie, put = __cordl_internal_set__trie)) ::GlobalNamespace::__ProfanityFilter__TrieNode* _trie;

  /// @brief Method GetLeetEquivalent, addr 0x22aed40, size 0x6c, virtual false, abstract: false, final false
  static inline char16_t GetLeetEquivalent(char16_t c);

  /// @brief Method GetLookalikeLetters, addr 0x22aec9c, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<char16_t>* GetLookalikeLetters(char16_t c);

  /// @brief Method IsProfane, addr 0x22aeab0, size 0x74, virtual false, abstract: false, final false
  inline bool IsProfane(::StringW word);

  static inline ::GlobalNamespace::ProfanityFilter* New_ctor(::System::Collections::Generic::IEnumerable_1<::StringW>* wordList);

  constexpr ::GlobalNamespace::__ProfanityFilter__TrieNode*& __cordl_internal_get__trie();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ProfanityFilter__TrieNode*> const& __cordl_internal_get__trie() const;

  constexpr void __cordl_internal_set__trie(::GlobalNamespace::__ProfanityFilter__TrieNode* value);

  /// @brief Method .ctor, addr 0x22ae2bc, size 0x338, virtual false, abstract: false, final false
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

  /// @brief Field _trie, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__ProfanityFilter__TrieNode* ____trie;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14904 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ProfanityFilter, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ProfanityFilter, ____trie) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ProfanityFilter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProfanityFilter*, "", "ProfanityFilter");
NEED_NO_BOX(::GlobalNamespace::__ProfanityFilter__TrieNode);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ProfanityFilter__TrieNode*, "", "ProfanityFilter/TrieNode");
NEED_NO_BOX(::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ProfanityFilter___GetLookalikeLetters_d__4*, "", "ProfanityFilter/<GetLookalikeLetters>d__4");
