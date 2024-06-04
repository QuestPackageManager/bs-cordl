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
// Type: System.Globalization::CompareInfo
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// CS Name: ::System.Globalization::CompareInfo*
class CORDL_TYPE CompareInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Invariant, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Invariant, put = setStaticF_Invariant))::System::Globalization::CompareInfo* Invariant;

  __declspec(property(get = get_Name))::StringW Name;

  /// @brief Field _sortName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sortName, put = __cordl_internal_set__sortName))::StringW _sortName;

  /// @brief Field collator, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_collator, put = __cordl_internal_set_collator))::System::Globalization::ISimpleCollator* collator;

  /// @brief Field collators, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_collators, put = setStaticF_collators))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Globalization::ISimpleCollator*>* collators;

  /// @brief Field culture, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_culture, put = __cordl_internal_set_culture)) int32_t culture;

  /// @brief Field m_SortVersion, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortVersion, put = __cordl_internal_set_m_SortVersion))::System::Globalization::SortVersion* m_SortVersion;

  /// @brief Field m_name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_name, put = __cordl_internal_set_m_name))::StringW m_name;

  /// @brief Field managedCollation, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_managedCollation, put = setStaticF_managedCollation)) bool managedCollation;

  /// @brief Field managedCollationChecked, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_managedCollationChecked, put = setStaticF_managedCollationChecked)) bool managedCollationChecked;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Method Compare, addr 0x28ea0c0, size 0x560, virtual true, abstract: false, final false
  inline int32_t Compare(::StringW string1, int32_t offset1, int32_t length1, ::StringW string2, int32_t offset2, int32_t length2, ::System::Globalization::CompareOptions options);

  /// @brief Method Compare, addr 0x28e94e8, size 0x10, virtual true, abstract: false, final false
  inline int32_t Compare(::StringW string1, ::StringW string2);

  /// @brief Method Compare, addr 0x28e94f8, size 0x2a8, virtual true, abstract: false, final false
  inline int32_t Compare(::StringW string1, ::StringW string2, ::System::Globalization::CompareOptions options);

  /// @brief Method Compare, addr 0x28e9a90, size 0x3a0, virtual false, abstract: false, final false
  inline int32_t Compare(::System::ReadOnlySpan_1<char16_t> string1, ::StringW string2, ::System::Globalization::CompareOptions options);

  /// @brief Method CompareOptionIgnoreCase, addr 0x28e9e94, size 0x13c, virtual false, abstract: false, final false
  inline int32_t CompareOptionIgnoreCase(::System::ReadOnlySpan_1<char16_t> string1, ::System::ReadOnlySpan_1<char16_t> string2);

  /// @brief Method CompareOrdinalIgnoreCase, addr 0x28ea620, size 0x174, virtual false, abstract: false, final false
  static inline int32_t CompareOrdinalIgnoreCase(::StringW strA, int32_t indexA, int32_t lengthA, ::StringW strB, int32_t indexB, int32_t lengthB);

  /// @brief Method CompareOrdinalIgnoreCase, addr 0x28e97a0, size 0x1f4, virtual false, abstract: false, final false
  static inline int32_t CompareOrdinalIgnoreCase(::System::ReadOnlySpan_1<char16_t> strA, ::System::ReadOnlySpan_1<char16_t> strB);

  /// @brief Method CompareString, addr 0x28e9e30, size 0x64, virtual false, abstract: false, final false
  inline int32_t CompareString(::System::ReadOnlySpan_1<char16_t> string1, ::StringW string2, ::System::Globalization::CompareOptions options);

  /// @brief Method CompareString, addr 0x28e9fd0, size 0xf0, virtual false, abstract: false, final false
  inline int32_t CompareString(::System::ReadOnlySpan_1<char16_t> string1, ::System::ReadOnlySpan_1<char16_t> string2, ::System::Globalization::CompareOptions options);

  /// @brief Method CompareStringOrdinalIgnoreCase, addr 0x28ea794, size 0x160, virtual false, abstract: false, final false
  static inline int32_t CompareStringOrdinalIgnoreCase(::cordl_internals::Ptr<char16_t> pString1, int32_t length1, ::cordl_internals::Ptr<char16_t> pString2, int32_t length2);

  /// @brief Method CreateSortKey, addr 0x28ebb04, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Globalization::SortKey* CreateSortKey(::StringW source, ::System::Globalization::CompareOptions options);

  /// @brief Method CreateSortKeyCore, addr 0x28ec8d8, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Globalization::SortKey* CreateSortKeyCore(::StringW source, ::System::Globalization::CompareOptions options);

  /// @brief Method EndsWith, addr 0x28eaeb0, size 0x170, virtual false, abstract: false, final false
  inline bool EndsWith(::StringW source, ::StringW suffix, ::System::Globalization::CompareOptions options);

  /// @brief Method EndsWith, addr 0x28eb024, size 0x60, virtual false, abstract: false, final false
  inline bool EndsWith(::System::ReadOnlySpan_1<char16_t> source, ::System::ReadOnlySpan_1<char16_t> suffix, ::System::Globalization::CompareOptions options);

  /// @brief Method Equals, addr 0x28ebbc4, size 0xc0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetCollator, addr 0x28ec5a4, size 0x334, virtual false, abstract: false, final false
  inline ::System::Globalization::ISimpleCollator* GetCollator();

  /// @brief Method GetCompareInfo, addr 0x28e9260, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::Globalization::CompareInfo* GetCompareInfo(::StringW name);

  /// @brief Method GetHashCode, addr 0x28ebc84, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetHashCode, addr 0x28ec2fc, size 0x104, virtual true, abstract: false, final false
  inline int32_t GetHashCode(::StringW source, ::System::Globalization::CompareOptions options);

  /// @brief Method GetHashCodeOfString, addr 0x28ec128, size 0x1a8, virtual false, abstract: false, final false
  inline int32_t GetHashCodeOfString(::StringW source, ::System::Globalization::CompareOptions options);

  /// @brief Method GetHashCodeOfStringCore, addr 0x28ec2d0, size 0x2c, virtual false, abstract: false, final false
  inline int32_t GetHashCodeOfStringCore(::StringW source, ::System::Globalization::CompareOptions options);

  /// @brief Method GetIgnoreCaseHash, addr 0x28ebcac, size 0x47c, virtual false, abstract: false, final false
  static inline int32_t GetIgnoreCaseHash(::StringW source);

  /// @brief Method GetSortKey, addr 0x28eba3c, size 0xc8, virtual true, abstract: false, final false
  inline ::System::Globalization::SortKey* GetSortKey(::StringW source, ::System::Globalization::CompareOptions options);

  /// @brief Method IndexOf, addr 0x28eb084, size 0x70, virtual true, abstract: false, final false
  inline int32_t IndexOf(::StringW source, ::StringW value, ::System::Globalization::CompareOptions options);

  /// @brief Method IndexOf, addr 0x28eb0f4, size 0x2c4, virtual true, abstract: false, final false
  inline int32_t IndexOf(::StringW source, ::StringW value, int32_t startIndex, int32_t count, ::System::Globalization::CompareOptions options);

  /// @brief Method IndexOfCore, addr 0x28eb4b8, size 0x5c, virtual false, abstract: false, final false
  inline int32_t IndexOfCore(::StringW source, ::StringW target, int32_t startIndex, int32_t count, ::System::Globalization::CompareOptions options, ::cordl_internals::Ptr<int32_t> matchLengthPtr);

  /// @brief Method IndexOfOrdinal, addr 0x28eb3b8, size 0x100, virtual false, abstract: false, final false
  inline int32_t IndexOfOrdinal(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase);

  /// @brief Method IndexOfOrdinalCore, addr 0x28eb514, size 0x20, virtual false, abstract: false, final false
  static inline int32_t IndexOfOrdinalCore(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase);

  /// @brief Method InitSort, addr 0x28e9244, size 0x1c, virtual false, abstract: false, final false
  inline void InitSort(::System::Globalization::CultureInfo* culture);

  /// @brief Method InvariantCreateSortKey, addr 0x28e8f74, size 0x29c, virtual false, abstract: false, final false
  inline ::System::Globalization::SortKey* InvariantCreateSortKey(::StringW source, ::System::Globalization::CompareOptions options);

  /// @brief Method InvariantFindString, addr 0x28e8b64, size 0x32c, virtual false, abstract: false, final false
  static inline int32_t InvariantFindString(::cordl_internals::Ptr<char16_t> source, int32_t sourceCount, ::cordl_internals::Ptr<char16_t> value, int32_t valueCount, bool ignoreCase, bool start);

  /// @brief Method InvariantIndexOf, addr 0x28e8aa0, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t InvariantIndexOf(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase);

  /// @brief Method InvariantLastIndexOf, addr 0x28e8e90, size 0xcc, virtual false, abstract: false, final false
  static inline int32_t InvariantLastIndexOf(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase);

  /// @brief Method InvariantToUpper, addr 0x28e8f5c, size 0x18, virtual false, abstract: false, final false
  static inline char16_t InvariantToUpper(char16_t c);

  /// @brief Method IsPrefix, addr 0x28ea8f4, size 0x224, virtual true, abstract: false, final false
  inline bool IsPrefix(::StringW source, ::StringW prefix, ::System::Globalization::CompareOptions options);

  /// @brief Method IsSuffix, addr 0x28eac8c, size 0x224, virtual true, abstract: false, final false
  inline bool IsSuffix(::StringW source, ::StringW suffix, ::System::Globalization::CompareOptions options);

  /// @brief Method IsSuffix, addr 0x28eb020, size 0x4, virtual false, abstract: false, final false
  inline bool IsSuffix(::System::ReadOnlySpan_1<char16_t> source, ::System::ReadOnlySpan_1<char16_t> suffix, ::System::Globalization::CompareOptions options);

  /// @brief Method LastIndexOf, addr 0x28eb534, size 0x74, virtual true, abstract: false, final false
  inline int32_t LastIndexOf(::StringW source, ::StringW value, ::System::Globalization::CompareOptions options);

  /// @brief Method LastIndexOf, addr 0x28eb5a8, size 0x35c, virtual true, abstract: false, final false
  inline int32_t LastIndexOf(::StringW source, ::StringW value, int32_t startIndex, int32_t count, ::System::Globalization::CompareOptions options);

  /// @brief Method LastIndexOfCore, addr 0x28eba04, size 0x18, virtual false, abstract: false, final false
  inline int32_t LastIndexOfCore(::StringW source, ::StringW target, int32_t startIndex, int32_t count, ::System::Globalization::CompareOptions options);

  /// @brief Method LastIndexOfOrdinal, addr 0x28eb904, size 0x100, virtual false, abstract: false, final false
  inline int32_t LastIndexOfOrdinal(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase);

  /// @brief Method LastIndexOfOrdinalCore, addr 0x28eba1c, size 0x20, virtual false, abstract: false, final false
  static inline int32_t LastIndexOfOrdinalCore(::StringW source, ::StringW value, int32_t startIndex, int32_t count, bool ignoreCase);

  static inline ::System::Globalization::CompareInfo* New_ctor();

  static inline ::System::Globalization::CompareInfo* New_ctor(::System::Globalization::CultureInfo* culture);

  /// @brief Method OnDeserialized, addr 0x28e9328, size 0xa4, virtual false, abstract: false, final false
  inline void OnDeserialized();

  /// @brief Method OnDeserialized, addr 0x28e93cc, size 0x4, virtual false, abstract: false, final false
  inline void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method OnDeserializing, addr 0x28e931c, size 0x8, virtual false, abstract: false, final false
  inline void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method OnSerializing, addr 0x28e93d0, size 0x8c, virtual false, abstract: false, final false
  inline void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method StartsWith, addr 0x28eab18, size 0x174, virtual false, abstract: false, final false
  inline bool StartsWith(::StringW source, ::StringW prefix, ::System::Globalization::CompareOptions options);

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x28e9324, size 0x4, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method ToString, addr 0x28ec400, size 0x60, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get__sortName() const;

  constexpr ::StringW& __cordl_internal_get__sortName();

  constexpr ::System::Globalization::ISimpleCollator*& __cordl_internal_get_collator();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::ISimpleCollator*> const& __cordl_internal_get_collator() const;

  constexpr int32_t const& __cordl_internal_get_culture() const;

  constexpr int32_t& __cordl_internal_get_culture();

  constexpr ::System::Globalization::SortVersion*& __cordl_internal_get_m_SortVersion();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::SortVersion*> const& __cordl_internal_get_m_SortVersion() const;

  constexpr ::StringW const& __cordl_internal_get_m_name() const;

  constexpr ::StringW& __cordl_internal_get_m_name();

  constexpr void __cordl_internal_set__sortName(::StringW value);

  constexpr void __cordl_internal_set_collator(::System::Globalization::ISimpleCollator* value);

  constexpr void __cordl_internal_set_culture(int32_t value);

  constexpr void __cordl_internal_set_m_SortVersion(::System::Globalization::SortVersion* value);

  constexpr void __cordl_internal_set_m_name(::StringW value);

  /// @brief Method .ctor, addr 0x28ecf78, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x28e9210, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::CultureInfo* culture);

  static inline ::System::Globalization::CompareInfo* getStaticF_Invariant();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Globalization::ISimpleCollator*>* getStaticF_collators();

  static inline bool getStaticF_managedCollation();

  static inline bool getStaticF_managedCollationChecked();

  /// @brief Method get_Name, addr 0x28e945c, size 0x8c, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_UseManagedCollation, addr 0x28ec460, size 0x144, virtual false, abstract: false, final false
  static inline bool get_UseManagedCollation();

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  /// @brief Method internal_compare, addr 0x28ecd30, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t internal_compare(::StringW str1, int32_t offset1, int32_t length1, ::StringW str2, int32_t offset2, int32_t length2, ::System::Globalization::CompareOptions options);

  /// @brief Method internal_compare_icall, addr 0x28ecee4, size 0x4, virtual false, abstract: false, final false
  static inline int32_t internal_compare_icall(::cordl_internals::Ptr<char16_t> str1, int32_t length1, ::cordl_internals::Ptr<char16_t> str2, int32_t length2,
                                               ::System::Globalization::CompareOptions options);

  /// @brief Method internal_compare_managed, addr 0x28ecde4, size 0x100, virtual false, abstract: false, final false
  inline int32_t internal_compare_managed(::StringW str1, int32_t offset1, int32_t length1, ::StringW str2, int32_t offset2, int32_t length2, ::System::Globalization::CompareOptions options);

  /// @brief Method internal_compare_switch, addr 0x28e9994, size 0xfc, virtual false, abstract: false, final false
  inline int32_t internal_compare_switch(::StringW str1, int32_t offset1, int32_t length1, ::StringW str2, int32_t offset2, int32_t length2, ::System::Globalization::CompareOptions options);

  /// @brief Method internal_index, addr 0x28ecb50, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t internal_index(::StringW source, int32_t sindex, int32_t count, ::StringW value, bool first);

  /// @brief Method internal_index_icall, addr 0x28ecee8, size 0x8, virtual false, abstract: false, final false
  static inline int32_t internal_index_icall(::cordl_internals::Ptr<char16_t> source, int32_t sindex, int32_t count, ::cordl_internals::Ptr<char16_t> value, int32_t value_length, bool first);

  /// @brief Method internal_index_managed, addr 0x28ecc04, size 0x12c, virtual false, abstract: false, final false
  inline int32_t internal_index_managed(::StringW s1, int32_t sindex, int32_t count, ::StringW s2, ::System::Globalization::CompareOptions opt, bool first);

  /// @brief Method internal_index_switch, addr 0x28eca14, size 0x13c, virtual false, abstract: false, final false
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

  /// @brief Field ValidCompareMaskOffFlags value: static_cast<int32_t>(0xdfffffe0)
  static ::System::Globalization::CompareOptions const ValidCompareMaskOffFlags;

  /// @brief Field ValidHashCodeOfStringMaskOffFlags value: static_cast<int32_t>(0xffffffe0)
  static ::System::Globalization::CompareOptions const ValidHashCodeOfStringMaskOffFlags;

  /// @brief Field ValidIndexMaskOffFlags value: static_cast<int32_t>(0xffffffe0)
  static ::System::Globalization::CompareOptions const ValidIndexMaskOffFlags;

  /// @brief Field ValidSortkeyCtorMaskOffFlags value: static_cast<int32_t>(0xdfffffe0)
  static ::System::Globalization::CompareOptions const ValidSortkeyCtorMaskOffFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::CompareInfo, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::CompareInfo, ___m_name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CompareInfo, ____sortName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CompareInfo, ___m_SortVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CompareInfo, ___culture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CompareInfo, ___collator) == 0x30, "Offset mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::CompareInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CompareInfo*, "System.Globalization", "CompareInfo");
