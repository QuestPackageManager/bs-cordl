#pragma once
// IWYU pragma private; include "System/Globalization/CompareInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CompareInfo)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Globalization {
struct CompareOptions;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Globalization {
class ISimpleCollator;
}
namespace System::Globalization {
class SortKey;
}
namespace System::Globalization {
class SortVersion;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::Globalization {
class CompareInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::CompareInfo);
// Dependencies System.Globalization.CompareOptions, System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.CompareInfo
class CORDL_TYPE CompareInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Invariant, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Invariant, put = setStaticF_Invariant)) ::System::Globalization::CompareInfo* Invariant;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field _sortName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sortName, put = __cordl_internal_set__sortName)) ::StringW _sortName;

  /// @brief Field collator, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_collator, put = __cordl_internal_set_collator)) ::System::Globalization::ISimpleCollator* collator;

  /// @brief Field collators, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_collators, put = setStaticF_collators)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Globalization::ISimpleCollator*>* collators;

  /// @brief Field culture, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_culture, put = __cordl_internal_set_culture)) int32_t culture;

  /// @brief Field m_SortVersion, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortVersion, put = __cordl_internal_set_m_SortVersion)) ::System::Globalization::SortVersion* m_SortVersion;

  /// @brief Field m_name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_name, put = __cordl_internal_set_m_name)) ::StringW m_name;

  /// @brief Field managedCollation, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_managedCollation, put = setStaticF_managedCollation)) bool managedCollation;

  /// @brief Field managedCollationChecked, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_managedCollationChecked, put = setStaticF_managedCollationChecked)) bool managedCollationChecked;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Method Compare, addr 0x59e5c8c, size 0x4e8, virtual true, abstract: false, final false
  inline int32_t Compare(::StringW string1, int32_t offset1, int32_t length1, ::StringW string2, int32_t offset2, int32_t length2, ::System::Globalization::CompareOptions options);

  /// @brief Method Compare, addr 0x59e50a8, size 0x10, virtual true, abstract: false, final false
  inline int32_t Compare(::StringW string1, ::StringW string2);

  /// @brief Method Compare, addr 0x59e50b8, size 0x2b8, virtual true, abstract: false, final false
  inline int32_t Compare(::StringW string1, ::StringW string2, ::System::Globalization::CompareOptions options);

  /// @brief Method Compare, addr 0x59e5654, size 0x39c, virtual false, abstract: false, final false
  inline int32_t Compare(::System::ReadOnlySpan_1<char16_t> string1, ::StringW string2, ::System::Globalization::CompareOptions options);

  /// @brief Method CompareOptionIgnoreCase, addr 0x59e5a54, size 0x164, virtual false, abstract: false, final false
  inline int32_t CompareOptionIgnoreCase(::System::ReadOnlySpan_1<char16_t> string1, ::System::ReadOnlySpan_1<char16_t> string2);

  /// @brief Method CompareOrdinalIgnoreCase, addr 0x59e6174, size 0x138, virtual false, abstract: false, final false
  static inline int32_t CompareOrdinalIgnoreCase(::StringW strA, int32_t indexA, int32_t lengthA, ::StringW strB, int32_t indexB, int32_t lengthB);

  /// @brief Method CompareOrdinalIgnoreCase, addr 0x59e5370, size 0x1e4, virtual false, abstract: false, final false
  static inline int32_t CompareOrdinalIgnoreCase(::System::ReadOnlySpan_1<char16_t> strA, ::System::ReadOnlySpan_1<char16_t> strB);

  /// @brief Method CompareString, addr 0x59e59f0, size 0x64, virtual false, abstract: false, final false
  inline int32_t CompareString(::System::ReadOnlySpan_1<char16_t> string1, ::StringW string2, ::System::Globalization::CompareOptions options);

  /// @brief Method CompareString, addr 0x59e5bb8, size 0xd4, virtual false, abstract: false, final false
  inline int32_t CompareString(::System::ReadOnlySpan_1<char16_t> string1, ::System::ReadOnlySpan_1<char16_t> string2, ::System::Globalization::CompareOptions options);

  /// @brief Method CompareStringOrdinalIgnoreCase, addr 0x59e62ac, size 0x184, virtual false, abstract: false, final false
  static inline int32_t CompareStringOrdinalIgnoreCase(char16_t* pString1, int32_t length1, char16_t* pString2, int32_t length2);

  /// @brief Method CreateSortKey, addr 0x59e7a3c, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Globalization::SortKey* CreateSortKey(::StringW source, ::System::Globalization::CompareOptions options);

  /// @brief Method CreateSortKeyCore, addr 0x59e88e4, size 0x144, virtual false, abstract: false, final false
  inline ::System::Globalization::SortKey* CreateSortKeyCore(::StringW source, ::System::Globalization::CompareOptions options);

  /// @brief Method EndsWith, addr 0x59e6a0c, size 0x178, virtual false, abstract: false, final false
  inline bool EndsWith(::StringW source, ::StringW suffix, ::System::Globalization::CompareOptions options);

  /// @brief Method EndsWith, addr 0x59e6b88, size 0x58, virtual false, abstract: false, final false
  inline bool EndsWith(::System::ReadOnlySpan_1<char16_t> source, ::System::ReadOnlySpan_1<char16_t> suffix, ::System::Globalization::CompareOptions options);

  /// @brief Method Equals, addr 0x59e7af4, size 0xc0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetCollator, addr 0x59e8560, size 0x384, virtual false, abstract: false, final false
  inline ::System::Globalization::ISimpleCollator* GetCollator();

  /// @brief Method GetCompareInfo, addr 0x59e4e14, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::Globalization::CompareInfo* GetCompareInfo(::StringW name);

  /// @brief Method GetHashCode, addr 0x59e7bb4, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetHashCode, addr 0x59e8290, size 0x104, virtual true, abstract: false, final false
  inline int32_t GetHashCode(::StringW source, ::System::Globalization::CompareOptions options);

  /// @brief Method GetHashCodeOfString, addr 0x59e80a4, size 0x1c0, virtual false, abstract: false, final false
  inline int32_t GetHashCodeOfString(::StringW source, ::System::Globalization::CompareOptions options);

  /// @brief Method GetHashCodeOfStringCore, addr 0x59e8264, size 0x2c, virtual false, abstract: false, final false
  inline int32_t GetHashCodeOfStringCore(::StringW source, ::System::Globalization::CompareOptions options);

  /// @brief Method GetIgnoreCaseHash, addr 0x59e7bdc, size 0x4c8, virtual false, abstract: false, final false
  static inline int32_t GetIgnoreCaseHash(::StringW source);

  /// @brief Method GetSortKey, addr 0x59e796c, size 0xd0, virtual true, abstract: false, final false
  inline ::System::Globalization::SortKey* GetSortKey(::StringW source, ::System::Globalization::CompareOptions options);

  /// @brief Method IndexOf, addr 0x59e6c4c, size 0x6c, virtual true, abstract: false, final false
  inline int32_t IndexOf(::StringW source, ::StringW value, ::System::Globalization::CompareOptions options);

  /// @brief Method IndexOf, addr 0x59e713c, size 0x2cc, virtual true, abstract: false, final false
  inline int32_t IndexOf(::StringW source, ::StringW value, int32_t startIndex, int32_t count, ::System::Globalization::CompareOptions options);

  /// @brief Method IndexOf, addr 0x59e6be0, size 0x6c, virtual true, abstract: false, final false
  inline int32_t IndexOf(::StringW source, char16_t value, ::System::Globalization::CompareOptions options);

  /// @brief Method IndexOf, addr 0x59e6cb8, size 0x2fc, virtual true, abstract: false, final false
  inline int32_t IndexOf(::StringW source, char16_t value, int32_t startIndex, int32_t count, ::System::Globalization::CompareOptions options);

  /// @brief Method IndexOfCore, addr 0x59e70e8, size 0x54, virtual false, abstract: false, final false
  inline int32_t IndexOfCore(::StringW source, ::StringW target, int32_t startIndex, int32_t count, ::System::Globalization::CompareOptions options, int32_t* matchLengthPtr);

  /// @brief Method IndexOfOrdinal, addr 0x59e6fb4, size 0x134, virtual false, abstract: false, final false
  inline int32_t IndexOfOrdinal(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase);

  /// @brief Method IndexOfOrdinalCore, addr 0x59e7408, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t IndexOfOrdinalCore(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase);

  /// @brief Method InitSort, addr 0x59e4dfc, size 0x18, virtual false, abstract: false, final false
  inline void InitSort(::System::Globalization::CultureInfo* culture);

  /// @brief Method InvariantCreateSortKey, addr 0x59e4b5c, size 0x288, virtual false, abstract: false, final false
  inline ::System::Globalization::SortKey* InvariantCreateSortKey(::StringW source, ::System::Globalization::CompareOptions options);

  /// @brief Method InvariantFindString, addr 0x59e4694, size 0x3f4, virtual false, abstract: false, final false
  static inline int32_t InvariantFindString(char16_t* source, int32_t sourceCount, char16_t* value, int32_t valueCount, bool ignoreCase, bool start);

  /// @brief Method InvariantIndexOf, addr 0x59e45e0, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t InvariantIndexOf(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase);

  /// @brief Method InvariantLastIndexOf, addr 0x59e4a88, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t InvariantLastIndexOf(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase);

  /// @brief Method InvariantToUpper, addr 0x59e4b44, size 0x18, virtual false, abstract: false, final false
  static inline char16_t InvariantToUpper(char16_t c);

  /// @brief Method IsPrefix, addr 0x59e6430, size 0x230, virtual true, abstract: false, final false
  inline bool IsPrefix(::StringW source, ::StringW prefix, ::System::Globalization::CompareOptions options);

  /// @brief Method IsSuffix, addr 0x59e67dc, size 0x230, virtual true, abstract: false, final false
  inline bool IsSuffix(::StringW source, ::StringW suffix, ::System::Globalization::CompareOptions options);

  /// @brief Method IsSuffix, addr 0x59e6b84, size 0x4, virtual false, abstract: false, final false
  inline bool IsSuffix(::System::ReadOnlySpan_1<char16_t> source, ::System::ReadOnlySpan_1<char16_t> suffix, ::System::Globalization::CompareOptions options);

  /// @brief Method LastIndexOf, addr 0x59e7434, size 0x6c, virtual true, abstract: false, final false
  inline int32_t LastIndexOf(::StringW source, ::StringW value, ::System::Globalization::CompareOptions options);

  /// @brief Method LastIndexOf, addr 0x59e74a0, size 0x354, virtual true, abstract: false, final false
  inline int32_t LastIndexOf(::StringW source, ::StringW value, int32_t startIndex, int32_t count, ::System::Globalization::CompareOptions options);

  /// @brief Method LastIndexOfCore, addr 0x59e7928, size 0x18, virtual false, abstract: false, final false
  inline int32_t LastIndexOfCore(::StringW source, ::StringW target, int32_t startIndex, int32_t count, ::System::Globalization::CompareOptions options);

  /// @brief Method LastIndexOfOrdinal, addr 0x59e77f4, size 0x134, virtual false, abstract: false, final false
  inline int32_t LastIndexOfOrdinal(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase);

  /// @brief Method LastIndexOfOrdinalCore, addr 0x59e7940, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t LastIndexOfOrdinalCore(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase);

  static inline ::System::Globalization::CompareInfo* New_ctor();

  static inline ::System::Globalization::CompareInfo* New_ctor(::System::Globalization::CultureInfo* culture);

  /// @brief Method OnDeserialized, addr 0x59e4edc, size 0xac, virtual false, abstract: false, final false
  inline void OnDeserialized();

  /// @brief Method OnDeserialized, addr 0x59e4f88, size 0x4, virtual false, abstract: false, final false
  inline void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method OnDeserializing, addr 0x59e4ed0, size 0x8, virtual false, abstract: false, final false
  inline void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method OnSerializing, addr 0x59e4f8c, size 0x90, virtual false, abstract: false, final false
  inline void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method StartsWith, addr 0x59e6660, size 0x17c, virtual false, abstract: false, final false
  inline bool StartsWith(::StringW source, ::StringW prefix, ::System::Globalization::CompareOptions options);

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x59e4ed8, size 0x4, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method ToString, addr 0x59e8394, size 0x64, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get__sortName() const;

  constexpr ::StringW& __cordl_internal_get__sortName();

  constexpr ::System::Globalization::ISimpleCollator* const& __cordl_internal_get_collator() const;

  constexpr ::System::Globalization::ISimpleCollator*& __cordl_internal_get_collator();

  constexpr int32_t const& __cordl_internal_get_culture() const;

  constexpr int32_t& __cordl_internal_get_culture();

  constexpr ::System::Globalization::SortVersion* const& __cordl_internal_get_m_SortVersion() const;

  constexpr ::System::Globalization::SortVersion*& __cordl_internal_get_m_SortVersion();

  constexpr ::StringW const& __cordl_internal_get_m_name() const;

  constexpr ::StringW& __cordl_internal_get_m_name();

  constexpr void __cordl_internal_set__sortName(::StringW value);

  constexpr void __cordl_internal_set_collator(::System::Globalization::ISimpleCollator* value);

  constexpr void __cordl_internal_set_culture(int32_t value);

  constexpr void __cordl_internal_set_m_SortVersion(::System::Globalization::SortVersion* value);

  constexpr void __cordl_internal_set_m_name(::StringW value);

  /// @brief Method .ctor, addr 0x59e8fc4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x59e4de4, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::CultureInfo* culture);

  static inline ::System::Globalization::CompareInfo* getStaticF_Invariant();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Globalization::ISimpleCollator*>* getStaticF_collators();

  static inline bool getStaticF_managedCollation();

  static inline bool getStaticF_managedCollationChecked();

  /// @brief Method get_Name, addr 0x59e501c, size 0x8c, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_UseManagedCollation, addr 0x59e83f8, size 0x168, virtual false, abstract: false, final false
  static inline bool get_UseManagedCollation();

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  /// @brief Method internal_compare, addr 0x59e8d70, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t internal_compare(::StringW str1, int32_t offset1, int32_t length1, ::StringW str2, int32_t offset2, int32_t length2, ::System::Globalization::CompareOptions options);

  /// @brief Method internal_compare_icall, addr 0x59e8f2c, size 0x4, virtual false, abstract: false, final false
  static inline int32_t internal_compare_icall(char16_t* str1, int32_t length1, char16_t* str2, int32_t length2, ::System::Globalization::CompareOptions options);

  /// @brief Method internal_compare_managed, addr 0x59e8e20, size 0x10c, virtual false, abstract: false, final false
  inline int32_t internal_compare_managed(::StringW str1, int32_t offset1, int32_t length1, ::StringW str2, int32_t offset2, int32_t length2, ::System::Globalization::CompareOptions options);

  /// @brief Method internal_compare_switch, addr 0x59e5554, size 0x100, virtual false, abstract: false, final false
  inline int32_t internal_compare_switch(::StringW str1, int32_t offset1, int32_t length1, ::StringW str2, int32_t offset2, int32_t length2, ::System::Globalization::CompareOptions options);

  /// @brief Method internal_index, addr 0x59e8b80, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t internal_index(::StringW source, int32_t sindex, int32_t count, ::StringW value, bool first);

  /// @brief Method internal_index_icall, addr 0x59e8f30, size 0x4, virtual false, abstract: false, final false
  static inline int32_t internal_index_icall(char16_t* source, int32_t sindex, int32_t count, char16_t* value, int32_t value_length, bool first);

  /// @brief Method internal_index_managed, addr 0x59e8c28, size 0x148, virtual false, abstract: false, final false
  inline int32_t internal_index_managed(::StringW s1, int32_t sindex, int32_t count, ::StringW s2, ::System::Globalization::CompareOptions opt, bool first);

  /// @brief Method internal_index_switch, addr 0x59e8a28, size 0x158, virtual false, abstract: false, final false
  inline int32_t internal_index_switch(::StringW s1, int32_t sindex, int32_t count, ::StringW s2, ::System::Globalization::CompareOptions opt, bool first);

  static inline void setStaticF_Invariant(::System::Globalization::CompareInfo* value);

  static inline void setStaticF_collators(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Globalization::ISimpleCollator*>* value);

  static inline void setStaticF_managedCollation(bool value);

  static inline void setStaticF_managedCollationChecked(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompareInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompareInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompareInfo(CompareInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompareInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompareInfo(CompareInfo const&) = delete;

  /// @brief Field ValidCompareMaskOffFlags value: I32(-536870944)
  static ::System::Globalization::CompareOptions const ValidCompareMaskOffFlags;

  /// @brief Field ValidHashCodeOfStringMaskOffFlags value: I32(-32)
  static ::System::Globalization::CompareOptions const ValidHashCodeOfStringMaskOffFlags;

  /// @brief Field ValidIndexMaskOffFlags value: I32(-32)
  static ::System::Globalization::CompareOptions const ValidIndexMaskOffFlags;

  /// @brief Field ValidSortkeyCtorMaskOffFlags value: I32(-536870944)
  static ::System::Globalization::CompareOptions const ValidSortkeyCtorMaskOffFlags;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3584 };

  /// @brief Field m_name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_name;

  /// @brief Field _sortName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____sortName;

  /// @brief Field m_SortVersion, offset: 0x20, size: 0x8, def value: None
  ::System::Globalization::SortVersion* ___m_SortVersion;

  /// @brief Field culture, offset: 0x28, size: 0x4, def value: None
  int32_t ___culture;

  /// @brief Field collator, offset: 0x30, size: 0x8, def value: None
  ::System::Globalization::ISimpleCollator* ___collator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::CompareInfo, ___m_name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CompareInfo, ____sortName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CompareInfo, ___m_SortVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CompareInfo, ___culture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CompareInfo, ___collator) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::CompareInfo, 0x38>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::CompareInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CompareInfo*, "System.Globalization", "CompareInfo");
