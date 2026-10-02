#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchySearchQueryDescriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchySearchFilter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HierarchySearchQueryDescriptor)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Unity::Hierarchy {
struct HierarchySearchFilter;
}
namespace Unity::Hierarchy {
class HierarchySearchQueryDescriptor___c;
}
// Forward declare root types
namespace Unity::Hierarchy {
class HierarchySearchQueryDescriptor;
}
namespace Unity::Hierarchy {
class HierarchySearchQueryDescriptor___c;
}
// Write type traits
MARK_REF_T(::Unity::Hierarchy::HierarchySearchQueryDescriptor*);
MARK_REF_T(::Unity::Hierarchy::HierarchySearchQueryDescriptor___c*);
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchySearchQueryDescriptor*, "Unity.Hierarchy", "HierarchySearchQueryDescriptor");
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchySearchQueryDescriptor___c*, "Unity.Hierarchy", "HierarchySearchQueryDescriptor/<>c");
// [CompilerGenerated]
// Dependencies System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchySearchQueryDescriptor/<>c
class CORDL_TYPE HierarchySearchQueryDescriptor___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Unity::Hierarchy::HierarchySearchQueryDescriptor___c* __9;

  /// @brief Field <>9__36_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__36_0, put = setStaticF___9__36_0)) ::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>* __9__36_0;

  /// @brief Field <>9__36_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__36_1, put = setStaticF___9__36_1)) ::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>* __9__36_1;

  static inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor___c* New_ctor();

  /// @brief Method <.ctor>b__36_0, addr 0x6f99970, size 0xc4, virtual false, abstract: false, final false
  inline bool __ctor_b__36_0(::Unity::Hierarchy::HierarchySearchFilter f);

  /// @brief Method <.ctor>b__36_1, addr 0x6f99a34, size 0xb8, virtual false, abstract: false, final false
  inline bool __ctor_b__36_1(::Unity::Hierarchy::HierarchySearchFilter f);

  /// @brief Method .ctor, addr 0x6f9996c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor___c* getStaticF___9();

  static inline ::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>* getStaticF___9__36_0();

  static inline ::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>* getStaticF___9__36_1();

  static inline void setStaticF___9(::Unity::Hierarchy::HierarchySearchQueryDescriptor___c* value);

  static inline void setStaticF___9__36_0(::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>* value);

  static inline void setStaticF___9__36_1(::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchySearchQueryDescriptor___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchySearchQueryDescriptor___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchySearchQueryDescriptor___c(HierarchySearchQueryDescriptor___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchySearchQueryDescriptor___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchySearchQueryDescriptor___c(HierarchySearchQueryDescriptor___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22611 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Hierarchy::HierarchySearchQueryDescriptor___c) == 0x10, "Size mismatch!");

} // namespace Unity::Hierarchy
// [NativeHeader("Modules/HierarchyCore/Public/HierarchySearch.h")]
// [NativeAsStruct]
// [RequiredByNativeCode]
// Dependencies System.Object, Unity.Hierarchy.HierarchySearchFilter
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchySearchQueryDescriptor
class CORDL_TYPE HierarchySearchQueryDescriptor : public ::System::Object {
public:
  // Declarations
  using __c = ::Unity::Hierarchy::HierarchySearchQueryDescriptor___c;

  __declspec(property(get = get_Filters, put = set_Filters)) ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> Filters;

  __declspec(property(put = set_Invalid)) bool Invalid;

  __declspec(property(get = get_Query)) ::StringW Query;

  __declspec(property(put = set_Strict)) bool Strict;

  __declspec(property(get = get_SystemFilters, put = set_SystemFilters)) ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> SystemFilters;

  __declspec(property(get = get_TextValues, put = set_TextValues)) ::ArrayW<::StringW> TextValues;

  /// @brief Field <Filters>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Filters_k__BackingField, put = __cordl_internal_set__Filters_k__BackingField)) ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter>
      _Filters_k__BackingField;

  /// @brief Field <Invalid>k__BackingField, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__Invalid_k__BackingField, put = __cordl_internal_set__Invalid_k__BackingField)) bool _Invalid_k__BackingField;

  /// @brief Field <Strict>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__Strict_k__BackingField, put = __cordl_internal_set__Strict_k__BackingField)) bool _Strict_k__BackingField;

  /// @brief Field <SystemFilters>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__SystemFilters_k__BackingField, put = __cordl_internal_set__SystemFilters_k__BackingField)) ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter>
      _SystemFilters_k__BackingField;

  /// @brief Field <TextValues>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__TextValues_k__BackingField, put = __cordl_internal_set__TextValues_k__BackingField)) ::ArrayW<::StringW> _TextValues_k__BackingField;

  /// @brief Field m_Query, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Query, put = __cordl_internal_set_m_Query)) ::StringW m_Query;

  /// @brief Field s_Empty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Empty, put = setStaticF_s_Empty)) ::Unity::Hierarchy::HierarchySearchQueryDescriptor* s_Empty;

  /// @brief Field s_InvalidQuery, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InvalidQuery, put = setStaticF_s_InvalidQuery)) ::Unity::Hierarchy::HierarchySearchQueryDescriptor* s_InvalidQuery;

  /// @brief Field s_SystemFilters, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SystemFilters, put = setStaticF_s_SystemFilters)) ::System::Collections::Generic::HashSet_1<::StringW>* s_SystemFilters;

  /// [VisibleToOtherModules(new[] { "UnityEditor.HierarchyModule" })]
  /// @brief Method BuildFilterQuery, addr 0x6f9959c, size 0x68, virtual false, abstract: false, final false
  inline ::StringW BuildFilterQuery();

  /// @brief Method BuildQuery, addr 0x6f990b8, size 0x13c, virtual false, abstract: false, final false
  inline ::StringW BuildQuery();

  /// @brief Method BuildSystemFilterQuery, addr 0x6f99604, size 0x68, virtual false, abstract: false, final false
  inline ::StringW BuildSystemFilterQuery();

  /// @brief Method BuildTextQuery, addr 0x6f9966c, size 0x11c, virtual false, abstract: false, final false
  inline ::StringW BuildTextQuery();

  static inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor* New_ctor(::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> filters, ::ArrayW<::StringW> textValues);

  /// @brief Method ToString, addr 0x6f99598, size 0x4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Where, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T> Where(::System::Collections::Generic::IEnumerable_1<T>* src, ::System::Func_2<T, bool>* pred);

  constexpr ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> const& __cordl_internal_get__Filters_k__BackingField() const;

  constexpr ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter>& __cordl_internal_get__Filters_k__BackingField();

  constexpr bool const& __cordl_internal_get__Invalid_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Invalid_k__BackingField();

  constexpr bool const& __cordl_internal_get__Strict_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Strict_k__BackingField();

  constexpr ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> const& __cordl_internal_get__SystemFilters_k__BackingField() const;

  constexpr ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter>& __cordl_internal_get__SystemFilters_k__BackingField();

  constexpr ::ArrayW<::StringW> const& __cordl_internal_get__TextValues_k__BackingField() const;

  constexpr ::ArrayW<::StringW>& __cordl_internal_get__TextValues_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get_m_Query() const;

  constexpr ::StringW& __cordl_internal_get_m_Query();

  constexpr void __cordl_internal_set__Filters_k__BackingField(::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> value);

  constexpr void __cordl_internal_set__Invalid_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Strict_k__BackingField(bool value);

  constexpr void __cordl_internal_set__SystemFilters_k__BackingField(::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> value);

  constexpr void __cordl_internal_set__TextValues_k__BackingField(::ArrayW<::StringW> value);

  constexpr void __cordl_internal_set_m_Query(::StringW value);

  /// @brief Method .ctor, addr 0x6f991f4, size 0x3a4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> filters, ::ArrayW<::StringW> textValues);

  static inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor* getStaticF_s_Empty();

  static inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor* getStaticF_s_InvalidQuery();

  static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF_s_SystemFilters();

  /// [CompilerGenerated]
  /// @brief Method get_Filters, addr 0x6f98fec, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> get_Filters();

  /// @brief Method get_Query, addr 0x6f9901c, size 0x9c, virtual false, abstract: false, final false
  inline ::StringW get_Query();

  /// [CompilerGenerated]
  /// @brief Method get_SystemFilters, addr 0x6f98fdc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> get_SystemFilters();

  /// [CompilerGenerated]
  /// @brief Method get_TextValues, addr 0x6f98ffc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> get_TextValues();

  static inline void setStaticF_s_Empty(::Unity::Hierarchy::HierarchySearchQueryDescriptor* value);

  static inline void setStaticF_s_InvalidQuery(::Unity::Hierarchy::HierarchySearchQueryDescriptor* value);

  static inline void setStaticF_s_SystemFilters(::System::Collections::Generic::HashSet_1<::StringW>* value);

  /// [CompilerGenerated]
  /// @brief Method set_Filters, addr 0x6f98ff4, size 0x8, virtual false, abstract: false, final false
  inline void set_Filters(::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> value);

  /// [CompilerGenerated]
  /// @brief Method set_Invalid, addr 0x6f99014, size 0x8, virtual false, abstract: false, final false
  inline void set_Invalid(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_Strict, addr 0x6f9900c, size 0x8, virtual false, abstract: false, final false
  inline void set_Strict(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_SystemFilters, addr 0x6f98fe4, size 0x8, virtual false, abstract: false, final false
  inline void set_SystemFilters(::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> value);

  /// [CompilerGenerated]
  /// @brief Method set_TextValues, addr 0x6f99004, size 0x8, virtual false, abstract: false, final false
  inline void set_TextValues(::ArrayW<::StringW> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchySearchQueryDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchySearchQueryDescriptor", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchySearchQueryDescriptor(HierarchySearchQueryDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchySearchQueryDescriptor", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchySearchQueryDescriptor(HierarchySearchQueryDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22612 };

  /// @brief Field m_Query, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Query;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <SystemFilters>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> ____SystemFilters_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <Filters>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter> ____Filters_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <TextValues>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW> ____TextValues_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <Strict>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____Strict_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <Invalid>k__BackingField, offset: 0x31, size: 0x1, def value: None
  bool ____Invalid_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchySearchQueryDescriptor, ___m_Query) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchySearchQueryDescriptor, ____SystemFilters_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchySearchQueryDescriptor, ____Filters_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchySearchQueryDescriptor, ____TextValues_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchySearchQueryDescriptor, ____Strict_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchySearchQueryDescriptor, ____Invalid_k__BackingField) == 0x31, "Offset mismatch!");

static_assert(sizeof(::Unity::Hierarchy::HierarchySearchQueryDescriptor) == 0x38, "Size mismatch!");

} // namespace Unity::Hierarchy
