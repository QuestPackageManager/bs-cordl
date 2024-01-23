#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
struct __Regex__CachedCodeEntryKey;
}
namespace System::Text::RegularExpressions {
class __Regex__CachedCodeEntry;
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
class __Regex__CachedCodeEntry;
}
namespace System::Text::RegularExpressions {
struct __Regex__CachedCodeEntryKey;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::Regex);
MARK_REF_PTR_T(::System::Text::RegularExpressions::__Regex__CachedCodeEntry);
MARK_VAL_T(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey);
// Type: ::CachedCodeEntryKey
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8925))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8911))
// CS Name: ::Regex::CachedCodeEntryKey
struct CORDL_TYPE __Regex__CachedCodeEntryKey {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey>"
  constexpr operator ::System::IEquatable_1<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey>*();

  /// @brief Convert to "::System::IEquatable_1<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey>"
  constexpr ::System::IEquatable_1<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey>* i___System__IEquatable_1___System__Text__RegularExpressions____Regex__CachedCodeEntryKey_();

  /// @brief Method .ctor, addr 0x2953b70, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::RegularExpressions::RegexOptions options, ::StringW cultureKey, ::StringW pattern);

  /// @brief Method Equals, addr 0x2953c9c, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2953d2c, size 0x68, virtual true, abstract: false, final true
  inline bool Equals(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey other);

  /// @brief Method op_Equality, addr 0x2951800, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey left, ::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey right);

  /// @brief Method GetHashCode, addr 0x2953d94, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "_options", ty: "::System::Text::RegularExpressions::RegexOptions", modifiers: "", def_value: None }, CppParam { name: "_cultureKey", ty: "::StringW", modifiers:
  // "", def_value: None }, CppParam { name: "_pattern", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __Regex__CachedCodeEntryKey(::System::Text::RegularExpressions::RegexOptions _options, ::StringW _cultureKey, ::StringW _pattern) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Regex__CachedCodeEntryKey();

  /// @brief Field _options, offset: 0x0, size: 0x4, def value: None
  ::System::Text::RegularExpressions::RegexOptions _options;

  /// @brief Field _cultureKey, offset: 0x8, size: 0x8, def value: None
  ::StringW _cultureKey;

  /// @brief Field _pattern, offset: 0x10, size: 0x8, def value: None
  ::StringW _pattern;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey, _options) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey, _cultureKey) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey, _pattern) == 0x10, "Offset mismatch!");

} // namespace System::Text::RegularExpressions
// Type: ::CachedCodeEntry
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8911))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8912))
// CS Name: ::Regex::CachedCodeEntry*
class CORDL_TYPE __Regex__CachedCodeEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field Next, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next))::System::Text::RegularExpressions::__Regex__CachedCodeEntry* Next;

  /// @brief Field Previous, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Previous, put = __cordl_internal_set_Previous))::System::Text::RegularExpressions::__Regex__CachedCodeEntry* Previous;

  /// @brief Field Key, offset 0x20, size 0x18
  __declspec(property(get = __cordl_internal_get_Key, put = __cordl_internal_set_Key))::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey Key;

  /// @brief Field Code, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Code, put = __cordl_internal_set_Code))::System::Text::RegularExpressions::RegexCode* Code;

  /// @brief Field Caps, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Caps, put = __cordl_internal_set_Caps))::System::Collections::Hashtable* Caps;

  /// @brief Field Capnames, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_Capnames, put = __cordl_internal_set_Capnames))::System::Collections::Hashtable* Capnames;

  /// @brief Field Capslist, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_Capslist, put = __cordl_internal_set_Capslist))::ArrayW<::StringW, ::Array<::StringW>*> Capslist;

  /// @brief Field Capsize, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_Capsize, put = __cordl_internal_set_Capsize)) int32_t Capsize;

  /// @brief Field Runnerref, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_Runnerref, put = __cordl_internal_set_Runnerref))::System::Text::RegularExpressions::ExclusiveReference* Runnerref;

  /// @brief Field ReplRef, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_ReplRef, put = __cordl_internal_set_ReplRef))::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* ReplRef;

  constexpr ::System::Text::RegularExpressions::__Regex__CachedCodeEntry*& __cordl_internal_get_Next();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::__Regex__CachedCodeEntry*> const& __cordl_internal_get_Next() const;

  constexpr void __cordl_internal_set_Next(::System::Text::RegularExpressions::__Regex__CachedCodeEntry* value);

  constexpr ::System::Text::RegularExpressions::__Regex__CachedCodeEntry*& __cordl_internal_get_Previous();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::__Regex__CachedCodeEntry*> const& __cordl_internal_get_Previous() const;

  constexpr void __cordl_internal_set_Previous(::System::Text::RegularExpressions::__Regex__CachedCodeEntry* value);

  constexpr ::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey& __cordl_internal_get_Key();

  constexpr ::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey const& __cordl_internal_get_Key() const;

  constexpr void __cordl_internal_set_Key(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey value);

  constexpr ::System::Text::RegularExpressions::RegexCode*& __cordl_internal_get_Code();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexCode*> const& __cordl_internal_get_Code() const;

  constexpr void __cordl_internal_set_Code(::System::Text::RegularExpressions::RegexCode* value);

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_Caps();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_Caps() const;

  constexpr void __cordl_internal_set_Caps(::System::Collections::Hashtable* value);

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_Capnames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_Capnames() const;

  constexpr void __cordl_internal_set_Capnames(::System::Collections::Hashtable* value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_Capslist();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_Capslist() const;

  constexpr void __cordl_internal_set_Capslist(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr int32_t& __cordl_internal_get_Capsize();

  constexpr int32_t const& __cordl_internal_get_Capsize() const;

  constexpr void __cordl_internal_set_Capsize(int32_t value);

  constexpr ::System::Text::RegularExpressions::ExclusiveReference*& __cordl_internal_get_Runnerref();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::ExclusiveReference*> const& __cordl_internal_get_Runnerref() const;

  constexpr void __cordl_internal_set_Runnerref(::System::Text::RegularExpressions::ExclusiveReference* value);

  constexpr ::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>*& __cordl_internal_get_ReplRef();

  constexpr ::cordl_internals::to_const_pointer<::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>*> const& __cordl_internal_get_ReplRef() const;

  constexpr void __cordl_internal_set_ReplRef(::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* value);

  static inline ::System::Text::RegularExpressions::__Regex__CachedCodeEntry* New_ctor(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey key, ::System::Collections::Hashtable* capnames,
                                                                                       ::ArrayW<::StringW, ::Array<::StringW>*> capslist, ::System::Text::RegularExpressions::RegexCode* code,
                                                                                       ::System::Collections::Hashtable* caps, int32_t capsize,
                                                                                       ::System::Text::RegularExpressions::ExclusiveReference* runner,
                                                                                       ::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* replref);

  /// @brief Method .ctor, addr 0x2951f84, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey key, ::System::Collections::Hashtable* capnames, ::ArrayW<::StringW, ::Array<::StringW>*> capslist,
                    ::System::Text::RegularExpressions::RegexCode* code, ::System::Collections::Hashtable* caps, int32_t capsize, ::System::Text::RegularExpressions::ExclusiveReference* runner,
                    ::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* replref);

  // Ctor Parameters [CppParam { name: "", ty: "__Regex__CachedCodeEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Regex__CachedCodeEntry(__Regex__CachedCodeEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Regex__CachedCodeEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Regex__CachedCodeEntry(__Regex__CachedCodeEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Regex__CachedCodeEntry();

public:
  /// @brief Field Next, offset: 0x10, size: 0x8, def value: None
  ::System::Text::RegularExpressions::__Regex__CachedCodeEntry* ___Next;

  /// @brief Field Previous, offset: 0x18, size: 0x8, def value: None
  ::System::Text::RegularExpressions::__Regex__CachedCodeEntry* ___Previous;

  /// @brief Field Key, offset: 0x20, size: 0x18, def value: None
  ::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey ___Key;

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
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::__Regex__CachedCodeEntry, 0x70>, "Size mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__Regex__CachedCodeEntry, ___Next) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__Regex__CachedCodeEntry, ___Previous) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__Regex__CachedCodeEntry, ___Key) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__Regex__CachedCodeEntry, ___Code) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__Regex__CachedCodeEntry, ___Caps) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__Regex__CachedCodeEntry, ___Capnames) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__Regex__CachedCodeEntry, ___Capslist) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__Regex__CachedCodeEntry, ___Capsize) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__Regex__CachedCodeEntry, ___Runnerref) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::__Regex__CachedCodeEntry, ___ReplRef) == 0x68, "Offset mismatch!");

} // namespace System::Text::RegularExpressions
// Type: System.Text.RegularExpressions::Regex
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 105, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2484)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8925))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8913))
// CS Name: ::System.Text.RegularExpressions::Regex*
class CORDL_TYPE Regex : public ::System::Object {
public:
  // Declarations
  using CachedCodeEntry = ::System::Text::RegularExpressions::__Regex__CachedCodeEntry;

  using CachedCodeEntryKey = ::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey;

  /// @brief Field internalMatchTimeout, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_internalMatchTimeout, put = __cordl_internal_set_internalMatchTimeout))::System::TimeSpan internalMatchTimeout;

  /// @brief Field pattern, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_pattern, put = __cordl_internal_set_pattern))::StringW pattern;

  /// @brief Field roptions, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_roptions, put = __cordl_internal_set_roptions))::System::Text::RegularExpressions::RegexOptions roptions;

  /// @brief Field factory, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_factory, put = __cordl_internal_set_factory))::System::Text::RegularExpressions::RegexRunnerFactory* factory;

  /// @brief Field caps, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_caps, put = __cordl_internal_set_caps))::System::Collections::Hashtable* caps;

  /// @brief Field capnames, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_capnames, put = __cordl_internal_set_capnames))::System::Collections::Hashtable* capnames;

  /// @brief Field capslist, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_capslist, put = __cordl_internal_set_capslist))::ArrayW<::StringW, ::Array<::StringW>*> capslist;

  /// @brief Field capsize, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_capsize, put = __cordl_internal_set_capsize)) int32_t capsize;

  /// @brief Field _runnerref, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__runnerref, put = __cordl_internal_set__runnerref))::System::Text::RegularExpressions::ExclusiveReference* _runnerref;

  /// @brief Field _replref, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__replref, put = __cordl_internal_set__replref))::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* _replref;

  /// @brief Field _code, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__code, put = __cordl_internal_set__code))::System::Text::RegularExpressions::RegexCode* _code;

  /// @brief Field _refsInitialized, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__refsInitialized, put = __cordl_internal_set__refsInitialized)) bool _refsInitialized;

  /// @brief Field s_cacheSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_cacheSize, put = setStaticF_s_cacheSize)) int32_t s_cacheSize;

  /// @brief Field s_cache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cache, put = setStaticF_s_cache))::System::Collections::Generic::Dictionary_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey,
                                                                                                                              ::System::Text::RegularExpressions::__Regex__CachedCodeEntry*>* s_cache;

  /// @brief Field s_cacheCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_cacheCount, put = setStaticF_s_cacheCount)) int32_t s_cacheCount;

  /// @brief Field s_cacheFirst, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cacheFirst, put = setStaticF_s_cacheFirst))::System::Text::RegularExpressions::__Regex__CachedCodeEntry* s_cacheFirst;

  /// @brief Field s_cacheLast, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cacheLast, put = setStaticF_s_cacheLast))::System::Text::RegularExpressions::__Regex__CachedCodeEntry* s_cacheLast;

  /// @brief Field s_maximumMatchTimeout, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_maximumMatchTimeout, put = setStaticF_s_maximumMatchTimeout))::System::TimeSpan s_maximumMatchTimeout;

  /// @brief Field s_defaultMatchTimeout, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_defaultMatchTimeout, put = setStaticF_s_defaultMatchTimeout))::System::TimeSpan s_defaultMatchTimeout;

  /// @brief Field InfiniteMatchTimeout, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InfiniteMatchTimeout, put = setStaticF_InfiniteMatchTimeout))::System::TimeSpan InfiniteMatchTimeout;

  __declspec(property(get = get_Options))::System::Text::RegularExpressions::RegexOptions Options;

  __declspec(property(get = get_RightToLeft)) bool RightToLeft;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  constexpr ::System::TimeSpan& __cordl_internal_get_internalMatchTimeout();

  constexpr ::System::TimeSpan const& __cordl_internal_get_internalMatchTimeout() const;

  constexpr void __cordl_internal_set_internalMatchTimeout(::System::TimeSpan value);

  constexpr ::StringW& __cordl_internal_get_pattern();

  constexpr ::StringW const& __cordl_internal_get_pattern() const;

  constexpr void __cordl_internal_set_pattern(::StringW value);

  constexpr ::System::Text::RegularExpressions::RegexOptions& __cordl_internal_get_roptions();

  constexpr ::System::Text::RegularExpressions::RegexOptions const& __cordl_internal_get_roptions() const;

  constexpr void __cordl_internal_set_roptions(::System::Text::RegularExpressions::RegexOptions value);

  constexpr ::System::Text::RegularExpressions::RegexRunnerFactory*& __cordl_internal_get_factory();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexRunnerFactory*> const& __cordl_internal_get_factory() const;

  constexpr void __cordl_internal_set_factory(::System::Text::RegularExpressions::RegexRunnerFactory* value);

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_caps();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_caps() const;

  constexpr void __cordl_internal_set_caps(::System::Collections::Hashtable* value);

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_capnames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_capnames() const;

  constexpr void __cordl_internal_set_capnames(::System::Collections::Hashtable* value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_capslist();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_capslist() const;

  constexpr void __cordl_internal_set_capslist(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr int32_t& __cordl_internal_get_capsize();

  constexpr int32_t const& __cordl_internal_get_capsize() const;

  constexpr void __cordl_internal_set_capsize(int32_t value);

  constexpr ::System::Text::RegularExpressions::ExclusiveReference*& __cordl_internal_get__runnerref();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::ExclusiveReference*> const& __cordl_internal_get__runnerref() const;

  constexpr void __cordl_internal_set__runnerref(::System::Text::RegularExpressions::ExclusiveReference* value);

  constexpr ::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>*& __cordl_internal_get__replref();

  constexpr ::cordl_internals::to_const_pointer<::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>*> const& __cordl_internal_get__replref() const;

  constexpr void __cordl_internal_set__replref(::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* value);

  constexpr ::System::Text::RegularExpressions::RegexCode*& __cordl_internal_get__code();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexCode*> const& __cordl_internal_get__code() const;

  constexpr void __cordl_internal_set__code(::System::Text::RegularExpressions::RegexCode* value);

  constexpr bool& __cordl_internal_get__refsInitialized();

  constexpr bool const& __cordl_internal_get__refsInitialized() const;

  constexpr void __cordl_internal_set__refsInitialized(bool value);

  static inline void setStaticF_s_cacheSize(int32_t value);

  static inline int32_t getStaticF_s_cacheSize();

  static inline void setStaticF_s_cache(
      ::System::Collections::Generic::Dictionary_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey, ::System::Text::RegularExpressions::__Regex__CachedCodeEntry*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey, ::System::Text::RegularExpressions::__Regex__CachedCodeEntry*>*
  getStaticF_s_cache();

  static inline void setStaticF_s_cacheCount(int32_t value);

  static inline int32_t getStaticF_s_cacheCount();

  static inline void setStaticF_s_cacheFirst(::System::Text::RegularExpressions::__Regex__CachedCodeEntry* value);

  static inline ::System::Text::RegularExpressions::__Regex__CachedCodeEntry* getStaticF_s_cacheFirst();

  static inline void setStaticF_s_cacheLast(::System::Text::RegularExpressions::__Regex__CachedCodeEntry* value);

  static inline ::System::Text::RegularExpressions::__Regex__CachedCodeEntry* getStaticF_s_cacheLast();

  static inline void setStaticF_s_maximumMatchTimeout(::System::TimeSpan value);

  static inline ::System::TimeSpan getStaticF_s_maximumMatchTimeout();

  static inline void setStaticF_s_defaultMatchTimeout(::System::TimeSpan value);

  static inline ::System::TimeSpan getStaticF_s_defaultMatchTimeout();

  static inline void setStaticF_InfiniteMatchTimeout(::System::TimeSpan value);

  static inline ::System::TimeSpan getStaticF_InfiniteMatchTimeout();

  /// @brief Method GetCachedCode, addr 0x2951708, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::__Regex__CachedCodeEntry* GetCachedCode(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey key, bool isToAdd);

  /// @brief Method GetCachedCodeEntryInternal, addr 0x2951830, size 0x4b8, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::__Regex__CachedCodeEntry* GetCachedCodeEntryInternal(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey key, bool isToAdd);

  /// @brief Method FillCacheDictionary, addr 0x2951ffc, size 0x104, virtual false, abstract: false, final false
  inline void FillCacheDictionary();

  /// @brief Method TryGetCacheValue, addr 0x2952100, size 0x11c, virtual false, abstract: false, final false
  static inline bool TryGetCacheValue(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey key, ByRef<::System::Text::RegularExpressions::__Regex__CachedCodeEntry*> entry);

  /// @brief Method TryGetCacheValueSmall, addr 0x295221c, size 0xd4, virtual false, abstract: false, final false
  static inline bool TryGetCacheValueSmall(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey key, ByRef<::System::Text::RegularExpressions::__Regex__CachedCodeEntry*> entry);

  /// @brief Method LookupCachedAndPromote, addr 0x2951ce8, size 0x29c, virtual false, abstract: false, final false
  static inline ::System::Text::RegularExpressions::__Regex__CachedCodeEntry* LookupCachedAndPromote(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey key);

  /// @brief Method IsMatch, addr 0x29522f0, size 0x74, virtual false, abstract: false, final false
  static inline bool IsMatch(::StringW input, ::StringW pattern);

  /// @brief Method IsMatch, addr 0x2952364, size 0x8c, virtual false, abstract: false, final false
  static inline bool IsMatch(::StringW input, ::StringW pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout);

  /// @brief Method IsMatch, addr 0x2952768, size 0x70, virtual false, abstract: false, final false
  inline bool IsMatch(::StringW input);

  /// @brief Method IsMatch, addr 0x29527e4, size 0x80, virtual false, abstract: false, final false
  inline bool IsMatch(::StringW input, int32_t startat);

  /// @brief Method Match, addr 0x2952864, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Text::RegularExpressions::Match* Match(::StringW input, ::StringW pattern);

  /// @brief Method Match, addr 0x29528d8, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Text::RegularExpressions::Match* Match(::StringW input, ::StringW pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout);

  /// @brief Method Match, addr 0x2952964, size 0x70, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::Match* Match(::StringW input);

  /// @brief Method Match, addr 0x29529d4, size 0x74, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::Match* Match(::StringW input, int32_t startat);

  /// @brief Method Matches, addr 0x2952a48, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::MatchCollection* Matches(::StringW input, int32_t startat);

  /// @brief Method Replace, addr 0x2952b1c, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW Replace(::StringW input, ::StringW pattern, ::StringW replacement);

  /// @brief Method Replace, addr 0x2952c2c, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW Replace(::StringW input, ::StringW pattern, ::StringW replacement, ::System::Text::RegularExpressions::RegexOptions options);

  /// @brief Method Replace, addr 0x2952b98, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW Replace(::StringW input, ::StringW pattern, ::StringW replacement, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout);

  /// @brief Method Replace, addr 0x2952cb4, size 0x74, virtual false, abstract: false, final false
  inline ::StringW Replace(::StringW input, ::StringW replacement);

  /// @brief Method Replace, addr 0x2952d28, size 0xe0, virtual false, abstract: false, final false
  inline ::StringW Replace(::StringW input, ::StringW replacement, int32_t count, int32_t startat);

  /// @brief Method Split, addr 0x2952e08, size 0x74, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> Split(::StringW input);

  /// @brief Method Split, addr 0x2952e7c, size 0xc4, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> Split(::StringW input, int32_t count, int32_t startat);

  /// @brief Method Split, addr 0x2952f40, size 0x61c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> Split(::System::Text::RegularExpressions::Regex* regex, ::StringW input, int32_t count, int32_t startat);

  /// @brief Method ValidateMatchTimeout, addr 0x29538e0, size 0x15c, virtual false, abstract: false, final false
  static inline void ValidateMatchTimeout(::System::TimeSpan matchTimeout);

  /// @brief Method InitDefaultMatchTimeout, addr 0x29536a0, size 0x240, virtual false, abstract: false, final false
  static inline ::System::TimeSpan InitDefaultMatchTimeout();

  static inline ::System::Text::RegularExpressions::Regex* New_ctor(::StringW pattern);

  /// @brief Method .ctor, addr 0x2953a3c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW pattern);

  static inline ::System::Text::RegularExpressions::Regex* New_ctor(::StringW pattern, ::System::Text::RegularExpressions::RegexOptions options);

  /// @brief Method .ctor, addr 0x2953ab4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW pattern, ::System::Text::RegularExpressions::RegexOptions options);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x2953b30, size 0x40, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Text::RegularExpressions::Regex* New_ctor(::StringW pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout, bool addToCache);

  /// @brief Method .ctor, addr 0x29523f0, size 0x378, virtual false, abstract: false, final false
  inline void _ctor(::StringW pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout, bool addToCache);

  /// @brief Method get_Options, addr 0x2953c80, size 0x8, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexOptions get_Options();

  /// @brief Method get_RightToLeft, addr 0x295355c, size 0xc, virtual false, abstract: false, final false
  inline bool get_RightToLeft();

  /// @brief Method ToString, addr 0x2953c88, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method GroupNameFromNumber, addr 0x294ed38, size 0x148, virtual false, abstract: false, final false
  inline ::StringW GroupNameFromNumber(int32_t i);

  /// @brief Method GroupNumberFromName, addr 0x294e904, size 0x14c, virtual false, abstract: false, final false
  inline int32_t GroupNumberFromName(::StringW name);

  /// @brief Method InitializeReferences, addr 0x2953b7c, size 0x104, virtual false, abstract: false, final false
  inline void InitializeReferences();

  /// @brief Method Run, addr 0x294fbe4, size 0x290, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::Match* Run(bool quick, int32_t prevlen, ::StringW input, int32_t beginning, int32_t length, int32_t startat);

  /// @brief Method UseOptionR, addr 0x29527d8, size 0xc, virtual false, abstract: false, final false
  inline bool UseOptionR();

  /// @brief Method UseOptionInvariant, addr 0x2953c90, size 0xc, virtual false, abstract: false, final false
  inline bool UseOptionInvariant();

  // Ctor Parameters [CppParam { name: "", ty: "Regex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Regex(Regex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Regex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Regex(Regex const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Regex();

public:
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

  /// @brief Field CacheDictionarySwitchLimit offset 0xffffffff size 0x4
  static constexpr int32_t CacheDictionarySwitchLimit{ static_cast<int32_t>(0xa) };

  /// @brief Field DefaultMatchTimeout_ConfigKeyName offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultMatchTimeout_ConfigKeyName{ u"REGEX_DEFAULT_MATCH_TIMEOUT" };

  /// @brief Field MaxOptionShift offset 0xffffffff size 0x4
  static constexpr int32_t MaxOptionShift{ static_cast<int32_t>(0xa) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::Regex, 0x70>, "Size mismatch!");

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

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::Regex);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::Regex*, "System.Text.RegularExpressions", "Regex");
NEED_NO_BOX(::System::Text::RegularExpressions::__Regex__CachedCodeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::__Regex__CachedCodeEntry*, "System.Text.RegularExpressions", "Regex/CachedCodeEntry");
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::__Regex__CachedCodeEntryKey, "System.Text.RegularExpressions", "Regex/CachedCodeEntryKey");
