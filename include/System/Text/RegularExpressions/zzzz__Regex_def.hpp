#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/Regex.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Regex)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Text::RegularExpressions {
class ExclusiveReference;
}
namespace System::Text::RegularExpressions {
class MatchCollection;
}
namespace System::Text::RegularExpressions {
class Match;
}
namespace System::Text::RegularExpressions {
class RegexCode;
}
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
namespace System::Text::RegularExpressions {
class RegexReplacement;
}
namespace System::Text::RegularExpressions {
class RegexRunnerFactory;
}
namespace System::Text::RegularExpressions {
struct Regex_CachedCodeEntryKey;
}
namespace System::Text::RegularExpressions {
class Regex_CachedCodeEntry;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
template <typename T> class WeakReference_1;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Text::RegularExpressions {
class Regex_CachedCodeEntry;
}
namespace System::Text::RegularExpressions {
struct Regex_CachedCodeEntryKey;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::Regex);
MARK_REF_PTR_T(::System::Text::RegularExpressions::Regex_CachedCodeEntry);
MARK_VAL_T(::System::Text::RegularExpressions::Regex_CachedCodeEntryKey);
// Dependencies System.Text.RegularExpressions.RegexOptions
namespace System::Text::RegularExpressions {
// Is value type: true
// CS Name: System.Text.RegularExpressions.Regex/CachedCodeEntryKey
struct CORDL_TYPE Regex_CachedCodeEntryKey {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::System::Text::RegularExpressions::Regex_CachedCodeEntryKey>"
  constexpr operator ::System::IEquatable_1<::System::Text::RegularExpressions::Regex_CachedCodeEntryKey>*();

  /// @brief Method Equals, addr 0x6164dd4, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6164e68, size 0x68, virtual true, abstract: false, final true
  inline bool Equals(::System::Text::RegularExpressions::Regex_CachedCodeEntryKey other);

  /// @brief Method GetHashCode, addr 0x6164ed0, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x6164cac, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::RegularExpressions::RegexOptions options, ::StringW cultureKey, ::StringW pattern);

  /// @brief Convert to "::System::IEquatable_1<::System::Text::RegularExpressions::Regex_CachedCodeEntryKey>"
  constexpr ::System::IEquatable_1<::System::Text::RegularExpressions::Regex_CachedCodeEntryKey>* i___System__IEquatable_1___System__Text__RegularExpressions__Regex_CachedCodeEntryKey_();

  /// @brief Method op_Equality, addr 0x6162a88, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Text::RegularExpressions::Regex_CachedCodeEntryKey left, ::System::Text::RegularExpressions::Regex_CachedCodeEntryKey right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Regex_CachedCodeEntryKey();

  // Ctor Parameters [CppParam { name: "_options", ty: "::System::Text::RegularExpressions::RegexOptions", modifiers: "", def_value: None }, CppParam { name: "_cultureKey", ty: "::StringW", modifiers:
  // "", def_value: None }, CppParam { name: "_pattern", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr Regex_CachedCodeEntryKey(::System::Text::RegularExpressions::RegexOptions _options, ::StringW _cultureKey, ::StringW _pattern) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11076 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field _options, offset: 0x0, size: 0x4, def value: None
  ::System::Text::RegularExpressions::RegexOptions _options;

  /// @brief Field _cultureKey, offset: 0x8, size: 0x8, def value: None
  ::StringW _cultureKey;

  /// @brief Field _pattern, offset: 0x10, size: 0x8, def value: None
  ::StringW _pattern;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Text::RegularExpressions::Regex_CachedCodeEntryKey, _options) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex_CachedCodeEntryKey, _cultureKey) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex_CachedCodeEntryKey, _pattern) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::Regex_CachedCodeEntryKey, 0x18>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
// Dependencies System.Object, System.Text.RegularExpressions.Regex::CachedCodeEntryKey
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: System.Text.RegularExpressions.Regex/CachedCodeEntry
class CORDL_TYPE Regex_CachedCodeEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field Capnames, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_Capnames, put = __cordl_internal_set_Capnames)) ::System::Collections::Hashtable* Capnames;

  /// @brief Field Caps, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Caps, put = __cordl_internal_set_Caps)) ::System::Collections::Hashtable* Caps;

  /// @brief Field Capsize, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_Capsize, put = __cordl_internal_set_Capsize)) int32_t Capsize;

  /// @brief Field Capslist, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_Capslist, put = __cordl_internal_set_Capslist)) ::ArrayW<::StringW, ::Array<::StringW>*> Capslist;

  /// @brief Field Code, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Code, put = __cordl_internal_set_Code)) ::System::Text::RegularExpressions::RegexCode* Code;

  /// @brief Field Key, offset 0x20, size 0x18
  __declspec(property(get = __cordl_internal_get_Key, put = __cordl_internal_set_Key)) ::System::Text::RegularExpressions::Regex_CachedCodeEntryKey Key;

  /// @brief Field Next, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next)) ::System::Text::RegularExpressions::Regex_CachedCodeEntry* Next;

  /// @brief Field Previous, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Previous, put = __cordl_internal_set_Previous)) ::System::Text::RegularExpressions::Regex_CachedCodeEntry* Previous;

  /// @brief Field ReplRef, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_ReplRef, put = __cordl_internal_set_ReplRef)) ::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* ReplRef;

  /// @brief Field Runnerref, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_Runnerref, put = __cordl_internal_set_Runnerref)) ::System::Text::RegularExpressions::ExclusiveReference* Runnerref;

  static inline ::System::Text::RegularExpressions::Regex_CachedCodeEntry* New_ctor(::System::Text::RegularExpressions::Regex_CachedCodeEntryKey key, ::System::Collections::Hashtable* capnames,
                                                                                    ::ArrayW<::StringW, ::Array<::StringW>*> capslist, ::System::Text::RegularExpressions::RegexCode* code,
                                                                                    ::System::Collections::Hashtable* caps, int32_t capsize,
                                                                                    ::System::Text::RegularExpressions::ExclusiveReference* runner,
                                                                                    ::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* replref);

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_Capnames() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_Capnames();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_Caps() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_Caps();

  constexpr int32_t const& __cordl_internal_get_Capsize() const;

  constexpr int32_t& __cordl_internal_get_Capsize();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_Capslist() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_Capslist();

  constexpr ::System::Text::RegularExpressions::RegexCode* const& __cordl_internal_get_Code() const;

  constexpr ::System::Text::RegularExpressions::RegexCode*& __cordl_internal_get_Code();

  constexpr ::System::Text::RegularExpressions::Regex_CachedCodeEntryKey const& __cordl_internal_get_Key() const;

  constexpr ::System::Text::RegularExpressions::Regex_CachedCodeEntryKey& __cordl_internal_get_Key();

  constexpr ::System::Text::RegularExpressions::Regex_CachedCodeEntry* const& __cordl_internal_get_Next() const;

  constexpr ::System::Text::RegularExpressions::Regex_CachedCodeEntry*& __cordl_internal_get_Next();

  constexpr ::System::Text::RegularExpressions::Regex_CachedCodeEntry* const& __cordl_internal_get_Previous() const;

  constexpr ::System::Text::RegularExpressions::Regex_CachedCodeEntry*& __cordl_internal_get_Previous();

  constexpr ::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* const& __cordl_internal_get_ReplRef() const;

  constexpr ::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>*& __cordl_internal_get_ReplRef();

  constexpr ::System::Text::RegularExpressions::ExclusiveReference* const& __cordl_internal_get_Runnerref() const;

  constexpr ::System::Text::RegularExpressions::ExclusiveReference*& __cordl_internal_get_Runnerref();

  constexpr void __cordl_internal_set_Capnames(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_Caps(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_Capsize(int32_t value);

  constexpr void __cordl_internal_set_Capslist(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_Code(::System::Text::RegularExpressions::RegexCode* value);

  constexpr void __cordl_internal_set_Key(::System::Text::RegularExpressions::Regex_CachedCodeEntryKey value);

  constexpr void __cordl_internal_set_Next(::System::Text::RegularExpressions::Regex_CachedCodeEntry* value);

  constexpr void __cordl_internal_set_Previous(::System::Text::RegularExpressions::Regex_CachedCodeEntry* value);

  constexpr void __cordl_internal_set_ReplRef(::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* value);

  constexpr void __cordl_internal_set_Runnerref(::System::Text::RegularExpressions::ExclusiveReference* value);

  /// @brief Method .ctor, addr 0x61630c0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::RegularExpressions::Regex_CachedCodeEntryKey key, ::System::Collections::Hashtable* capnames, ::ArrayW<::StringW, ::Array<::StringW>*> capslist,
                    ::System::Text::RegularExpressions::RegexCode* code, ::System::Collections::Hashtable* caps, int32_t capsize, ::System::Text::RegularExpressions::ExclusiveReference* runner,
                    ::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* replref);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Regex_CachedCodeEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Regex_CachedCodeEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Regex_CachedCodeEntry(Regex_CachedCodeEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Regex_CachedCodeEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Regex_CachedCodeEntry(Regex_CachedCodeEntry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11077 };

  /// @brief Field Next, offset: 0x10, size: 0x8, def value: None
  ::System::Text::RegularExpressions::Regex_CachedCodeEntry* ___Next;

  /// @brief Field Previous, offset: 0x18, size: 0x8, def value: None
  ::System::Text::RegularExpressions::Regex_CachedCodeEntry* ___Previous;

  /// @brief Field Key, offset: 0x20, size: 0x18, def value: None
  ::System::Text::RegularExpressions::Regex_CachedCodeEntryKey ___Key;

  /// @brief Field Code, offset: 0x38, size: 0x8, def value: None
  ::System::Text::RegularExpressions::RegexCode* ___Code;

  /// @brief Field Caps, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___Caps;

  /// @brief Field Capnames, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___Capnames;

  /// @brief Field Capslist, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___Capslist;

  /// @brief Field Capsize, offset: 0x58, size: 0x4, def value: None
  int32_t ___Capsize;

  /// @brief Field Runnerref, offset: 0x60, size: 0x8, def value: None
  ::System::Text::RegularExpressions::ExclusiveReference* ___Runnerref;

  /// @brief Field ReplRef, offset: 0x68, size: 0x8, def value: None
  ::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* ___ReplRef;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::RegularExpressions::Regex_CachedCodeEntry, ___Next) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex_CachedCodeEntry, ___Previous) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex_CachedCodeEntry, ___Key) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex_CachedCodeEntry, ___Code) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex_CachedCodeEntry, ___Caps) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex_CachedCodeEntry, ___Capnames) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex_CachedCodeEntry, ___Capslist) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex_CachedCodeEntry, ___Capsize) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex_CachedCodeEntry, ___Runnerref) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex_CachedCodeEntry, ___ReplRef) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::Regex_CachedCodeEntry, 0x70>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
// Dependencies System.Object, System.Text.RegularExpressions.RegexOptions, System.TimeSpan
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: System.Text.RegularExpressions.Regex
class CORDL_TYPE Regex : public ::System::Object {
public:
  // Declarations
  using CachedCodeEntry = ::System::Text::RegularExpressions::Regex_CachedCodeEntry;

  using CachedCodeEntryKey = ::System::Text::RegularExpressions::Regex_CachedCodeEntryKey;

  /// @brief Field InfiniteMatchTimeout, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InfiniteMatchTimeout, put = setStaticF_InfiniteMatchTimeout)) ::System::TimeSpan InfiniteMatchTimeout;

  __declspec(property(get = get_Options)) ::System::Text::RegularExpressions::RegexOptions Options;

  __declspec(property(get = get_RightToLeft)) bool RightToLeft;

  /// @brief Field _code, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__code, put = __cordl_internal_set__code)) ::System::Text::RegularExpressions::RegexCode* _code;

  /// @brief Field _refsInitialized, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__refsInitialized, put = __cordl_internal_set__refsInitialized)) bool _refsInitialized;

  /// @brief Field _replref, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__replref, put = __cordl_internal_set__replref)) ::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* _replref;

  /// @brief Field _runnerref, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__runnerref, put = __cordl_internal_set__runnerref)) ::System::Text::RegularExpressions::ExclusiveReference* _runnerref;

  /// @brief Field capnames, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_capnames, put = __cordl_internal_set_capnames)) ::System::Collections::Hashtable* capnames;

  /// @brief Field caps, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_caps, put = __cordl_internal_set_caps)) ::System::Collections::Hashtable* caps;

  /// @brief Field capsize, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_capsize, put = __cordl_internal_set_capsize)) int32_t capsize;

  /// @brief Field capslist, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_capslist, put = __cordl_internal_set_capslist)) ::ArrayW<::StringW, ::Array<::StringW>*> capslist;

  /// @brief Field factory, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_factory, put = __cordl_internal_set_factory)) ::System::Text::RegularExpressions::RegexRunnerFactory* factory;

  /// @brief Field internalMatchTimeout, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_internalMatchTimeout, put = __cordl_internal_set_internalMatchTimeout)) ::System::TimeSpan internalMatchTimeout;

  /// @brief Field pattern, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_pattern, put = __cordl_internal_set_pattern)) ::StringW pattern;

  /// @brief Field roptions, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_roptions, put = __cordl_internal_set_roptions)) ::System::Text::RegularExpressions::RegexOptions roptions;

  /// @brief Field s_cache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_cache, put = setStaticF_s_cache)) ::System::Collections::Generic::Dictionary_2<::System::Text::RegularExpressions::Regex_CachedCodeEntryKey,
                                                                                                                        ::System::Text::RegularExpressions::Regex_CachedCodeEntry*>* s_cache;

  /// @brief Field s_cacheCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_cacheCount, put = setStaticF_s_cacheCount)) int32_t s_cacheCount;

  /// @brief Field s_cacheFirst, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_cacheFirst, put = setStaticF_s_cacheFirst)) ::System::Text::RegularExpressions::Regex_CachedCodeEntry* s_cacheFirst;

  /// @brief Field s_cacheLast, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_cacheLast, put = setStaticF_s_cacheLast)) ::System::Text::RegularExpressions::Regex_CachedCodeEntry* s_cacheLast;

  /// @brief Field s_cacheSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_cacheSize, put = setStaticF_s_cacheSize)) int32_t s_cacheSize;

  /// @brief Field s_defaultMatchTimeout, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_defaultMatchTimeout, put = setStaticF_s_defaultMatchTimeout)) ::System::TimeSpan s_defaultMatchTimeout;

  /// @brief Field s_maximumMatchTimeout, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_maximumMatchTimeout, put = setStaticF_s_maximumMatchTimeout)) ::System::TimeSpan s_maximumMatchTimeout;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method FillCacheDictionary, addr 0x61630e8, size 0x10c, virtual false, abstract: false, final false
  inline void FillCacheDictionary();

  /// @brief Method GetCachedCode, addr 0x616298c, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::Regex_CachedCodeEntry* GetCachedCode(::System::Text::RegularExpressions::Regex_CachedCodeEntryKey key, bool isToAdd);

  /// @brief Method GetCachedCodeEntryInternal, addr 0x6162ab8, size 0x438, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::Regex_CachedCodeEntry* GetCachedCodeEntryInternal(::System::Text::RegularExpressions::Regex_CachedCodeEntryKey key, bool isToAdd);

  /// @brief Method GroupNameFromNumber, addr 0x61600e4, size 0x120, virtual false, abstract: false, final false
  inline ::StringW GroupNameFromNumber(int32_t i);

  /// @brief Method GroupNumberFromName, addr 0x615fd40, size 0x120, virtual false, abstract: false, final false
  inline int32_t GroupNumberFromName(::StringW name);

  /// @brief Method InitDefaultMatchTimeout, addr 0x61647a4, size 0x230, virtual false, abstract: false, final false
  static inline ::System::TimeSpan InitDefaultMatchTimeout();

  /// @brief Method InitializeReferences, addr 0x6164cb8, size 0x100, virtual false, abstract: false, final false
  inline void InitializeReferences();

  /// @brief Method IsMatch, addr 0x6163874, size 0x84, virtual false, abstract: false, final false
  inline bool IsMatch(::StringW input);

  /// @brief Method IsMatch, addr 0x61633dc, size 0x78, virtual false, abstract: false, final false
  static inline bool IsMatch(::StringW input, ::StringW pattern);

  /// @brief Method IsMatch, addr 0x6163454, size 0x90, virtual false, abstract: false, final false
  static inline bool IsMatch(::StringW input, ::StringW pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout);

  /// @brief Method IsMatch, addr 0x6163904, size 0x7c, virtual false, abstract: false, final false
  inline bool IsMatch(::StringW input, int32_t startat);

  /// @brief Method LookupCachedAndPromote, addr 0x6162ef0, size 0x1d0, virtual false, abstract: false, final false
  static inline ::System::Text::RegularExpressions::Regex_CachedCodeEntry* LookupCachedAndPromote(::System::Text::RegularExpressions::Regex_CachedCodeEntryKey key);

  /// @brief Method Match, addr 0x6163a88, size 0x74, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::Match* Match(::StringW input);

  /// @brief Method Match, addr 0x6163980, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Text::RegularExpressions::Match* Match(::StringW input, ::StringW pattern);

  /// @brief Method Match, addr 0x61639f8, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Text::RegularExpressions::Match* Match(::StringW input, ::StringW pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout);

  /// @brief Method Match, addr 0x6163afc, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::Match* Match(::StringW input, int32_t startat);

  /// @brief Method Matches, addr 0x6163b68, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::MatchCollection* Matches(::StringW input, int32_t startat);

  static inline ::System::Text::RegularExpressions::Regex* New_ctor();

  static inline ::System::Text::RegularExpressions::Regex* New_ctor(::StringW pattern);

  static inline ::System::Text::RegularExpressions::Regex* New_ctor(::StringW pattern, ::System::Text::RegularExpressions::RegexOptions options);

  static inline ::System::Text::RegularExpressions::Regex* New_ctor(::StringW pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout, bool addToCache);

  /// @brief Method Replace, addr 0x6163c34, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW Replace(::StringW input, ::StringW pattern, ::StringW replacement);

  /// @brief Method Replace, addr 0x6163d4c, size 0x8c, virtual false, abstract: false, final false
  static inline ::StringW Replace(::StringW input, ::StringW pattern, ::StringW replacement, ::System::Text::RegularExpressions::RegexOptions options);

  /// @brief Method Replace, addr 0x6163cb4, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW Replace(::StringW input, ::StringW pattern, ::StringW replacement, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout);

  /// @brief Method Replace, addr 0x6163dd8, size 0x6c, virtual false, abstract: false, final false
  inline ::StringW Replace(::StringW input, ::StringW replacement);

  /// @brief Method Replace, addr 0x6163e44, size 0xd8, virtual false, abstract: false, final false
  inline ::StringW Replace(::StringW input, ::StringW replacement, int32_t count, int32_t startat);

  /// @brief Method Run, addr 0x6160f18, size 0x2b4, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::Match* Run(bool quick, int32_t prevlen, ::StringW input, int32_t beginning, int32_t length, int32_t startat);

  /// @brief Method Split, addr 0x6163f1c, size 0x6c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> Split(::StringW input);

  /// @brief Method Split, addr 0x6163f88, size 0xcc, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> Split(::StringW input, int32_t count, int32_t startat);

  /// @brief Method Split, addr 0x6164054, size 0x5f4, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> Split(::System::Text::RegularExpressions::Regex* regex, ::StringW input, int32_t count, int32_t startat);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x6164c74, size 0x38, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ToString, addr 0x6164dc0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetCacheValue, addr 0x61631f4, size 0x104, virtual false, abstract: false, final false
  static inline bool TryGetCacheValue(::System::Text::RegularExpressions::Regex_CachedCodeEntryKey key, ::ByRef<::System::Text::RegularExpressions::Regex_CachedCodeEntry*> entry);

  /// @brief Method TryGetCacheValueSmall, addr 0x61632f8, size 0xe4, virtual false, abstract: false, final false
  static inline bool TryGetCacheValueSmall(::System::Text::RegularExpressions::Regex_CachedCodeEntryKey key, ::ByRef<::System::Text::RegularExpressions::Regex_CachedCodeEntry*> entry);

  /// @brief Method UseOptionInvariant, addr 0x6164dc8, size 0xc, virtual false, abstract: false, final false
  inline bool UseOptionInvariant();

  /// @brief Method UseOptionR, addr 0x61638f8, size 0xc, virtual false, abstract: false, final false
  inline bool UseOptionR();

  /// @brief Method ValidateMatchTimeout, addr 0x61649d4, size 0x140, virtual false, abstract: false, final false
  static inline void ValidateMatchTimeout(::System::TimeSpan matchTimeout);

  constexpr ::System::Text::RegularExpressions::RegexCode* const& __cordl_internal_get__code() const;

  constexpr ::System::Text::RegularExpressions::RegexCode*& __cordl_internal_get__code();

  constexpr bool const& __cordl_internal_get__refsInitialized() const;

  constexpr bool& __cordl_internal_get__refsInitialized();

  constexpr ::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* const& __cordl_internal_get__replref() const;

  constexpr ::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>*& __cordl_internal_get__replref();

  constexpr ::System::Text::RegularExpressions::ExclusiveReference* const& __cordl_internal_get__runnerref() const;

  constexpr ::System::Text::RegularExpressions::ExclusiveReference*& __cordl_internal_get__runnerref();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_capnames() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_capnames();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_caps() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_caps();

  constexpr int32_t const& __cordl_internal_get_capsize() const;

  constexpr int32_t& __cordl_internal_get_capsize();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_capslist() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_capslist();

  constexpr ::System::Text::RegularExpressions::RegexRunnerFactory* const& __cordl_internal_get_factory() const;

  constexpr ::System::Text::RegularExpressions::RegexRunnerFactory*& __cordl_internal_get_factory();

  constexpr ::System::TimeSpan const& __cordl_internal_get_internalMatchTimeout() const;

  constexpr ::System::TimeSpan& __cordl_internal_get_internalMatchTimeout();

  constexpr ::StringW const& __cordl_internal_get_pattern() const;

  constexpr ::StringW& __cordl_internal_get_pattern();

  constexpr ::System::Text::RegularExpressions::RegexOptions const& __cordl_internal_get_roptions() const;

  constexpr ::System::Text::RegularExpressions::RegexOptions& __cordl_internal_get_roptions();

  constexpr void __cordl_internal_set__code(::System::Text::RegularExpressions::RegexCode* value);

  constexpr void __cordl_internal_set__refsInitialized(bool value);

  constexpr void __cordl_internal_set__replref(::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* value);

  constexpr void __cordl_internal_set__runnerref(::System::Text::RegularExpressions::ExclusiveReference* value);

  constexpr void __cordl_internal_set_capnames(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_caps(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_capsize(int32_t value);

  constexpr void __cordl_internal_set_capslist(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_factory(::System::Text::RegularExpressions::RegexRunnerFactory* value);

  constexpr void __cordl_internal_set_internalMatchTimeout(::System::TimeSpan value);

  constexpr void __cordl_internal_set_pattern(::StringW value);

  constexpr void __cordl_internal_set_roptions(::System::Text::RegularExpressions::RegexOptions value);

  /// @brief Method .ctor, addr 0x6164b14, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6164b78, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW pattern);

  /// @brief Method .ctor, addr 0x6164bf4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW pattern, ::System::Text::RegularExpressions::RegexOptions options);

  /// @brief Method .ctor, addr 0x61634e4, size 0x390, virtual false, abstract: false, final false
  inline void _ctor(::StringW pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout, bool addToCache);

  static inline ::System::TimeSpan getStaticF_InfiniteMatchTimeout();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Text::RegularExpressions::Regex_CachedCodeEntryKey, ::System::Text::RegularExpressions::Regex_CachedCodeEntry*>*
  getStaticF_s_cache();

  static inline int32_t getStaticF_s_cacheCount();

  static inline ::System::Text::RegularExpressions::Regex_CachedCodeEntry* getStaticF_s_cacheFirst();

  static inline ::System::Text::RegularExpressions::Regex_CachedCodeEntry* getStaticF_s_cacheLast();

  static inline int32_t getStaticF_s_cacheSize();

  static inline ::System::TimeSpan getStaticF_s_defaultMatchTimeout();

  static inline ::System::TimeSpan getStaticF_s_maximumMatchTimeout();

  /// @brief Method get_Options, addr 0x6164db8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexOptions get_Options();

  /// @brief Method get_RightToLeft, addr 0x6164648, size 0xc, virtual false, abstract: false, final false
  inline bool get_RightToLeft();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  static inline void setStaticF_InfiniteMatchTimeout(::System::TimeSpan value);

  static inline void
  setStaticF_s_cache(::System::Collections::Generic::Dictionary_2<::System::Text::RegularExpressions::Regex_CachedCodeEntryKey, ::System::Text::RegularExpressions::Regex_CachedCodeEntry*>* value);

  static inline void setStaticF_s_cacheCount(int32_t value);

  static inline void setStaticF_s_cacheFirst(::System::Text::RegularExpressions::Regex_CachedCodeEntry* value);

  static inline void setStaticF_s_cacheLast(::System::Text::RegularExpressions::Regex_CachedCodeEntry* value);

  static inline void setStaticF_s_cacheSize(int32_t value);

  static inline void setStaticF_s_defaultMatchTimeout(::System::TimeSpan value);

  static inline void setStaticF_s_maximumMatchTimeout(::System::TimeSpan value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Regex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Regex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Regex(Regex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Regex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Regex(Regex const&) = delete;

  /// @brief Field CacheDictionarySwitchLimit offset 0xffffffff size 0x4
  static constexpr int32_t CacheDictionarySwitchLimit{ static_cast<int32_t>(0xa) };

  /// @brief Field DefaultMatchTimeout_ConfigKeyName offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultMatchTimeout_ConfigKeyName{ u"REGEX_DEFAULT_MATCH_TIMEOUT" };

  /// @brief Field MaxOptionShift offset 0xffffffff size 0x4
  static constexpr int32_t MaxOptionShift{ static_cast<int32_t>(0xa) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11078 };

  /// @brief Field internalMatchTimeout, offset: 0x10, size: 0x8, def value: None
  ::System::TimeSpan ___internalMatchTimeout;

  /// @brief Field pattern, offset: 0x18, size: 0x8, def value: None
  ::StringW ___pattern;

  /// @brief Field roptions, offset: 0x20, size: 0x4, def value: None
  ::System::Text::RegularExpressions::RegexOptions ___roptions;

  /// @brief Field factory, offset: 0x28, size: 0x8, def value: None
  ::System::Text::RegularExpressions::RegexRunnerFactory* ___factory;

  /// @brief Field caps, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___caps;

  /// @brief Field capnames, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___capnames;

  /// @brief Field capslist, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___capslist;

  /// @brief Field capsize, offset: 0x48, size: 0x4, def value: None
  int32_t ___capsize;

  /// @brief Field _runnerref, offset: 0x50, size: 0x8, def value: None
  ::System::Text::RegularExpressions::ExclusiveReference* ____runnerref;

  /// @brief Field _replref, offset: 0x58, size: 0x8, def value: None
  ::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* ____replref;

  /// @brief Field _code, offset: 0x60, size: 0x8, def value: None
  ::System::Text::RegularExpressions::RegexCode* ____code;

  /// @brief Field _refsInitialized, offset: 0x68, size: 0x1, def value: None
  bool ____refsInitialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::RegularExpressions::Regex, ___internalMatchTimeout) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex, ___pattern) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex, ___roptions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex, ___factory) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex, ___caps) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex, ___capnames) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex, ___capslist) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex, ___capsize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex, ____runnerref) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex, ____replref) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex, ____code) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Regex, ____refsInitialized) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::Regex, 0x70>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::Regex);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::Regex*, "System.Text.RegularExpressions", "Regex");
NEED_NO_BOX(::System::Text::RegularExpressions::Regex_CachedCodeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::Regex_CachedCodeEntry*, "System.Text.RegularExpressions", "Regex/CachedCodeEntry");
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::Regex_CachedCodeEntryKey, "System.Text.RegularExpressions", "Regex/CachedCodeEntryKey");
