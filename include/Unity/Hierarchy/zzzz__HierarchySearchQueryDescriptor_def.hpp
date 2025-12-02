#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchySearchQueryDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::Unity::Hierarchy::HierarchySearchQueryDescriptor);
MARK_REF_PTR_T(::Unity::Hierarchy::HierarchySearchQueryDescriptor___c);
// Dependencies System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchySearchQueryDescriptor/<>c
class CORDL_TYPE HierarchySearchQueryDescriptor___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Unity::Hierarchy::HierarchySearchQueryDescriptor___c* __9;

  /// @brief Field <>9__33_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__33_0, put = setStaticF___9__33_0)) ::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>* __9__33_0;

  /// @brief Field <>9__33_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__33_1, put = setStaticF___9__33_1)) ::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>* __9__33_1;

  static inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor___c* New_ctor();

  /// @brief Method <.ctor>b__33_0, addr 0x69073d8, size 0xc4, virtual false, abstract: false, final false
  inline bool __ctor_b__33_0(::Unity::Hierarchy::HierarchySearchFilter f);

  /// @brief Method <.ctor>b__33_1, addr 0x690749c, size 0xb8, virtual false, abstract: false, final false
  inline bool __ctor_b__33_1(::Unity::Hierarchy::HierarchySearchFilter f);

  /// @brief Method .ctor, addr 0x69073d4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor___c* getStaticF___9();

  static inline ::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>* getStaticF___9__33_0();

  static inline ::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>* getStaticF___9__33_1();

  static inline void setStaticF___9(::Unity::Hierarchy::HierarchySearchQueryDescriptor___c* value);

  static inline void setStaticF___9__33_0(::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>* value);

  static inline void setStaticF___9__33_1(::System::Func_2<::Unity::Hierarchy::HierarchySearchFilter, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchySearchQueryDescriptor___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchySearchQueryDescriptor___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchySearchQueryDescriptor___c(HierarchySearchQueryDescriptor___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchySearchQueryDescriptor___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchySearchQueryDescriptor___c(HierarchySearchQueryDescriptor___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21737 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchySearchQueryDescriptor___c, 0x10>, "Size mismatch!");

} // namespace Unity::Hierarchy
// Dependencies System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchySearchQueryDescriptor
class CORDL_TYPE HierarchySearchQueryDescriptor : public ::System::Object {
public:
  // Declarations
  using __c = ::Unity::Hierarchy::HierarchySearchQueryDescriptor___c;

  __declspec(property(get = get_Filters, put = set_Filters)) ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter, ::Array<::Unity::Hierarchy::HierarchySearchFilter>*> Filters;

  __declspec(property(put = set_Invalid)) bool Invalid;

  __declspec(property(put = set_Strict)) bool Strict;

  __declspec(property(get = get_SystemFilters, put = set_SystemFilters)) ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter, ::Array<::Unity::Hierarchy::HierarchySearchFilter>*> SystemFilters;

  __declspec(property(get = get_TextValues, put = set_TextValues)) ::ArrayW<::StringW, ::Array<::StringW>*> TextValues;

  /// @brief Field <Filters>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Filters_k__BackingField,
                      put = __cordl_internal_set__Filters_k__BackingField)) ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter, ::Array<::Unity::Hierarchy::HierarchySearchFilter>*>
      _Filters_k__BackingField;

  /// @brief Field <Invalid>k__BackingField, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__Invalid_k__BackingField, put = __cordl_internal_set__Invalid_k__BackingField)) bool _Invalid_k__BackingField;

  /// @brief Field <Strict>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__Strict_k__BackingField, put = __cordl_internal_set__Strict_k__BackingField)) bool _Strict_k__BackingField;

  /// @brief Field <SystemFilters>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__SystemFilters_k__BackingField,
                      put = __cordl_internal_set__SystemFilters_k__BackingField)) ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter, ::Array<::Unity::Hierarchy::HierarchySearchFilter>*>
      _SystemFilters_k__BackingField;

  /// @brief Field <TextValues>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__TextValues_k__BackingField, put = __cordl_internal_set__TextValues_k__BackingField)) ::ArrayW<::StringW, ::Array<::StringW>*>
      _TextValues_k__BackingField;

  /// @brief Field s_Empty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Empty, put = setStaticF_s_Empty)) ::Unity::Hierarchy::HierarchySearchQueryDescriptor* s_Empty;

  /// @brief Field s_InvalidQuery, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InvalidQuery, put = setStaticF_s_InvalidQuery)) ::Unity::Hierarchy::HierarchySearchQueryDescriptor* s_InvalidQuery;

  /// @brief Field s_SystemFilters, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SystemFilters, put = setStaticF_s_SystemFilters)) ::System::Collections::Generic::HashSet_1<::StringW>* s_SystemFilters;

  /// @brief Method BuildFilterQuery, addr 0x6907004, size 0x68, virtual false, abstract: false, final false
  inline ::StringW BuildFilterQuery();

  /// @brief Method BuildQuery, addr 0x6906ec8, size 0x13c, virtual false, abstract: false, final false
  inline ::StringW BuildQuery();

  /// @brief Method BuildSystemFilterQuery, addr 0x690706c, size 0x68, virtual false, abstract: false, final false
  inline ::StringW BuildSystemFilterQuery();

  /// @brief Method BuildTextQuery, addr 0x69070d4, size 0x11c, virtual false, abstract: false, final false
  inline ::StringW BuildTextQuery();

  static inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor* New_ctor(::ArrayW<::Unity::Hierarchy::HierarchySearchFilter, ::Array<::Unity::Hierarchy::HierarchySearchFilter>*> filters,
                                                                             ::ArrayW<::StringW, ::Array<::StringW>*> textValues);

  /// @brief Method ToString, addr 0x6906ec4, size 0x4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Where, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> Where(::System::Collections::Generic::IEnumerable_1<T>* src, ::System::Func_2<T, bool>* pred);

  constexpr ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter, ::Array<::Unity::Hierarchy::HierarchySearchFilter>*> const& __cordl_internal_get__Filters_k__BackingField() const;

  constexpr ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter, ::Array<::Unity::Hierarchy::HierarchySearchFilter>*>& __cordl_internal_get__Filters_k__BackingField();

  constexpr bool const& __cordl_internal_get__Invalid_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Invalid_k__BackingField();

  constexpr bool const& __cordl_internal_get__Strict_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Strict_k__BackingField();

  constexpr ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter, ::Array<::Unity::Hierarchy::HierarchySearchFilter>*> const& __cordl_internal_get__SystemFilters_k__BackingField() const;

  constexpr ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter, ::Array<::Unity::Hierarchy::HierarchySearchFilter>*>& __cordl_internal_get__SystemFilters_k__BackingField();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__TextValues_k__BackingField() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__TextValues_k__BackingField();

  constexpr void __cordl_internal_set__Filters_k__BackingField(::ArrayW<::Unity::Hierarchy::HierarchySearchFilter, ::Array<::Unity::Hierarchy::HierarchySearchFilter>*> value);

  constexpr void __cordl_internal_set__Invalid_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Strict_k__BackingField(bool value);

  constexpr void __cordl_internal_set__SystemFilters_k__BackingField(::ArrayW<::Unity::Hierarchy::HierarchySearchFilter, ::Array<::Unity::Hierarchy::HierarchySearchFilter>*> value);

  constexpr void __cordl_internal_set__TextValues_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x6906b20, size 0x3a4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Unity::Hierarchy::HierarchySearchFilter, ::Array<::Unity::Hierarchy::HierarchySearchFilter>*> filters, ::ArrayW<::StringW, ::Array<::StringW>*> textValues);

  static inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor* getStaticF_s_Empty();

  static inline ::Unity::Hierarchy::HierarchySearchQueryDescriptor* getStaticF_s_InvalidQuery();

  static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF_s_SystemFilters();

  /// @brief Method get_Filters, addr 0x6906af0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter, ::Array<::Unity::Hierarchy::HierarchySearchFilter>*> get_Filters();

  /// @brief Method get_SystemFilters, addr 0x6906ae0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter, ::Array<::Unity::Hierarchy::HierarchySearchFilter>*> get_SystemFilters();

  /// @brief Method get_TextValues, addr 0x6906b00, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_TextValues();

  static inline void setStaticF_s_Empty(::Unity::Hierarchy::HierarchySearchQueryDescriptor* value);

  static inline void setStaticF_s_InvalidQuery(::Unity::Hierarchy::HierarchySearchQueryDescriptor* value);

  static inline void setStaticF_s_SystemFilters(::System::Collections::Generic::HashSet_1<::StringW>* value);

  /// @brief Method set_Filters, addr 0x6906af8, size 0x8, virtual false, abstract: false, final false
  inline void set_Filters(::ArrayW<::Unity::Hierarchy::HierarchySearchFilter, ::Array<::Unity::Hierarchy::HierarchySearchFilter>*> value);

  /// @brief Method set_Invalid, addr 0x6906b18, size 0x8, virtual false, abstract: false, final false
  inline void set_Invalid(bool value);

  /// @brief Method set_Strict, addr 0x6906b10, size 0x8, virtual false, abstract: false, final false
  inline void set_Strict(bool value);

  /// @brief Method set_SystemFilters, addr 0x6906ae8, size 0x8, virtual false, abstract: false, final false
  inline void set_SystemFilters(::ArrayW<::Unity::Hierarchy::HierarchySearchFilter, ::Array<::Unity::Hierarchy::HierarchySearchFilter>*> value);

  /// @brief Method set_TextValues, addr 0x6906b08, size 0x8, virtual false, abstract: false, final false
  inline void set_TextValues(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchySearchQueryDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchySearchQueryDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchySearchQueryDescriptor(HierarchySearchQueryDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchySearchQueryDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchySearchQueryDescriptor(HierarchySearchQueryDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21738 };

  /// @brief Field <SystemFilters>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter, ::Array<::Unity::Hierarchy::HierarchySearchFilter>*> ____SystemFilters_k__BackingField;

  /// @brief Field <Filters>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::Unity::Hierarchy::HierarchySearchFilter, ::Array<::Unity::Hierarchy::HierarchySearchFilter>*> ____Filters_k__BackingField;

  /// @brief Field <TextValues>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____TextValues_k__BackingField;

  /// @brief Field <Strict>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____Strict_k__BackingField;

  /// @brief Field <Invalid>k__BackingField, offset: 0x29, size: 0x1, def value: None
  bool ____Invalid_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchySearchQueryDescriptor, ____SystemFilters_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchySearchQueryDescriptor, ____Filters_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchySearchQueryDescriptor, ____TextValues_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchySearchQueryDescriptor, ____Strict_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchySearchQueryDescriptor, ____Invalid_k__BackingField) == 0x29, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchySearchQueryDescriptor, 0x30>, "Size mismatch!");

} // namespace Unity::Hierarchy
NEED_NO_BOX(::Unity::Hierarchy::HierarchySearchQueryDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchySearchQueryDescriptor*, "Unity.Hierarchy", "HierarchySearchQueryDescriptor");
NEED_NO_BOX(::Unity::Hierarchy::HierarchySearchQueryDescriptor___c);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchySearchQueryDescriptor___c*, "Unity.Hierarchy", "HierarchySearchQueryDescriptor/<>c");
