#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpaceQuery.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpaceQuery)
namespace GlobalNamespace {
template <typename T> struct OVREnumerable_1;
}
namespace GlobalNamespace {
struct OVRPlugin_Result;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryActionType;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryInfo2;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryInfo;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryType;
}
namespace GlobalNamespace {
struct OVRSpaceQuery_Options;
}
namespace GlobalNamespace {
struct OVRSpaceQuery_QueryInfoUnion;
}
namespace GlobalNamespace {
struct OVRSpace_StorageLocation;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
struct Guid;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSpaceQuery;
}
namespace GlobalNamespace {
struct OVRSpaceQuery_Options;
}
namespace GlobalNamespace {
struct OVRSpaceQuery_QueryInfoUnion;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSpaceQuery);
MARK_VAL_T(::GlobalNamespace::OVRSpaceQuery_Options);
MARK_VAL_T(::GlobalNamespace::OVRSpaceQuery_QueryInfoUnion);
// Dependencies OVRPlugin::SpaceQueryInfo, OVRPlugin::SpaceQueryInfo2
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpaceQuery/QueryInfoUnion
struct CORDL_TYPE OVRSpaceQuery_QueryInfoUnion {
public:
  // Declarations
  /// @brief Field V1, offset 0x0, size 0x40
  __declspec(property(get = __cordl_internal_get_V1, put = __cordl_internal_set_V1)) ::GlobalNamespace::OVRPlugin_SpaceQueryInfo V1;

  /// @brief Field V2, offset 0x0, size 0x50
  __declspec(property(get = __cordl_internal_get_V2, put = __cordl_internal_set_V2)) ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 V2;

  constexpr ::GlobalNamespace::OVRPlugin_SpaceQueryInfo const& __cordl_internal_get_V1() const;

  constexpr ::GlobalNamespace::OVRPlugin_SpaceQueryInfo& __cordl_internal_get_V1();

  constexpr ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 const& __cordl_internal_get_V2() const;

  constexpr ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2& __cordl_internal_get_V2();

  constexpr void __cordl_internal_set_V1(::GlobalNamespace::OVRPlugin_SpaceQueryInfo value);

  constexpr void __cordl_internal_set_V2(::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpaceQuery_QueryInfoUnion();

  // Ctor Parameters [CppParam { name: "V1", ty: "::GlobalNamespace::OVRPlugin_SpaceQueryInfo", modifiers: "", def_value: None }, CppParam { name: "V2", ty:
  // "::GlobalNamespace::OVRPlugin_SpaceQueryInfo2", modifiers: "", def_value: None }]
  constexpr OVRSpaceQuery_QueryInfoUnion(::GlobalNamespace::OVRPlugin_SpaceQueryInfo V1, ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 V2) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___V1_padding[0x0];
      /// @brief Field V1, offset: 0x0, size: 0x40, def value: None
      ::GlobalNamespace::OVRPlugin_SpaceQueryInfo ___V1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___V1_padding_forAlignment[0x0];
      /// @brief Field V1, offset: 0x0, size: 0x40, def value: None
      ::GlobalNamespace::OVRPlugin_SpaceQueryInfo ___V1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___V2_padding[0x0];
      /// @brief Field V2, offset: 0x0, size: 0x50, def value: None
      ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 ___V2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___V2_padding_forAlignment[0x0];
      /// @brief Field V2, offset: 0x0, size: 0x50, def value: None
      ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 ___V2_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7682 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpaceQuery_QueryInfoUnion, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::SpaceComponentType, OVRPlugin::SpaceQueryActionType, OVRPlugin::SpaceQueryType, OVRSpace::StorageLocation, System.Guid, System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpaceQuery/Options
struct CORDL_TYPE OVRSpaceQuery_Options {
public:
  // Declarations
  __declspec(property(get = get_ActionType, put = set_ActionType)) ::GlobalNamespace::OVRPlugin_SpaceQueryActionType ActionType;

  __declspec(property(get = get_ComponentFilter, put = set_ComponentFilter)) ::GlobalNamespace::OVRPlugin_SpaceComponentType ComponentFilter;

  __declspec(property(get = get_GroupFilter, put = set_GroupFilter)) ::System::Nullable_1<::System::Guid> GroupFilter;

  __declspec(property(get = get_Location, put = set_Location)) ::GlobalNamespace::OVRSpace_StorageLocation Location;

  __declspec(property(get = get_MaxResults, put = set_MaxResults)) int32_t MaxResults;

  __declspec(property(get = get_QueryType, put = set_QueryType)) ::GlobalNamespace::OVRPlugin_SpaceQueryType QueryType;

  __declspec(property(get = get_Timeout, put = set_Timeout)) double_t Timeout;

  __declspec(property(get = get_UuidFilter, put = set_UuidFilter)) ::System::Collections::Generic::IEnumerable_1<::System::Guid>* UuidFilter;

  /// @brief Method ToQueryInfo, addr 0x5cbde3c, size 0x1cc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo ToQueryInfo();

  /// @brief Method ToQueryInfo2, addr 0x5cbe008, size 0x228, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 ToQueryInfo2();

  /// @brief Method TryQuerySpaces, addr 0x5cbe230, size 0x88, virtual false, abstract: false, final false
  inline bool TryQuerySpaces(::ByRef<uint64_t> requestId);

  /// @brief Method ValidateSingleFilter, addr 0x5cbdb44, size 0xc4, virtual false, abstract: false, final false
  static inline void ValidateSingleFilter(::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuidFilter, ::GlobalNamespace::OVRPlugin_SpaceComponentType componentFilter,
                                          ::System::Nullable_1<::System::Guid> groupFilter);

  /// @brief Method get_ActionType, addr 0x5cbdae8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_SpaceQueryActionType get_ActionType();

  /// @brief Method get_ComponentFilter, addr 0x5cbdaf8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_SpaceComponentType get_ComponentFilter();

  /// @brief Method get_GroupFilter, addr 0x5cbddd4, size 0x14, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::Guid> get_GroupFilter();

  /// @brief Method get_Location, addr 0x5cbdac8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRSpace_StorageLocation get_Location();

  /// @brief Method get_MaxResults, addr 0x5cbdaa8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxResults();

  /// @brief Method get_QueryType, addr 0x5cbdad8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_SpaceQueryType get_QueryType();

  /// @brief Method get_Timeout, addr 0x5cbdab8, size 0x8, virtual false, abstract: false, final false
  inline double_t get_Timeout();

  /// @brief Method get_UuidFilter, addr 0x5cbdc08, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Guid>* get_UuidFilter();

  /// @brief Method set_ActionType, addr 0x5cbdaf0, size 0x8, virtual false, abstract: false, final false
  inline void set_ActionType(::GlobalNamespace::OVRPlugin_SpaceQueryActionType value);

  /// @brief Method set_ComponentFilter, addr 0x5cbdb00, size 0x44, virtual false, abstract: false, final false
  inline void set_ComponentFilter(::GlobalNamespace::OVRPlugin_SpaceComponentType value);

  /// @brief Method set_GroupFilter, addr 0x5cbdde8, size 0x54, virtual false, abstract: false, final false
  inline void set_GroupFilter(::System::Nullable_1<::System::Guid> value);

  /// @brief Method set_Location, addr 0x5cbdad0, size 0x8, virtual false, abstract: false, final false
  inline void set_Location(::GlobalNamespace::OVRSpace_StorageLocation value);

  /// @brief Method set_MaxResults, addr 0x5cbdab0, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxResults(int32_t value);

  /// @brief Method set_QueryType, addr 0x5cbdae0, size 0x8, virtual false, abstract: false, final false
  inline void set_QueryType(::GlobalNamespace::OVRPlugin_SpaceQueryType value);

  /// @brief Method set_Timeout, addr 0x5cbdac0, size 0x8, virtual false, abstract: false, final false
  inline void set_Timeout(double_t value);

  /// @brief Method set_UuidFilter, addr 0x5cbdc10, size 0x1c4, virtual false, abstract: false, final false
  inline void set_UuidFilter(::System::Collections::Generic::IEnumerable_1<::System::Guid>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpaceQuery_Options();

  // Ctor Parameters [CppParam { name: "_MaxResults_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Timeout_k__BackingField", ty: "double_t", modifiers: "",
  // def_value: None }, CppParam { name: "_Location_k__BackingField", ty: "::GlobalNamespace::OVRSpace_StorageLocation", modifiers: "", def_value: None }, CppParam { name:
  // "_QueryType_k__BackingField", ty: "::GlobalNamespace::OVRPlugin_SpaceQueryType", modifiers: "", def_value: None }, CppParam { name: "_ActionType_k__BackingField", ty:
  // "::GlobalNamespace::OVRPlugin_SpaceQueryActionType", modifiers: "", def_value: None }, CppParam { name: "_componentType", ty: "::GlobalNamespace::OVRPlugin_SpaceComponentType", modifiers: "",
  // def_value: None }, CppParam { name: "_uuidFilter", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: None }, CppParam { name: "_groupFilter", ty:
  // "::System::Nullable_1<::System::Guid>", modifiers: "", def_value: None }]
  constexpr OVRSpaceQuery_Options(int32_t _MaxResults_k__BackingField, double_t _Timeout_k__BackingField, ::GlobalNamespace::OVRSpace_StorageLocation _Location_k__BackingField,
                                  ::GlobalNamespace::OVRPlugin_SpaceQueryType _QueryType_k__BackingField, ::GlobalNamespace::OVRPlugin_SpaceQueryActionType _ActionType_k__BackingField,
                                  ::GlobalNamespace::OVRPlugin_SpaceComponentType _componentType, ::System::Collections::Generic::IEnumerable_1<::System::Guid>* _uuidFilter,
                                  ::System::Nullable_1<::System::Guid> _groupFilter) noexcept;

  /// @brief Field MaxUuidCount offset 0xffffffff size 0x4
  static constexpr int32_t MaxUuidCount{ static_cast<int32_t>(0x400) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7683 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <MaxResults>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _MaxResults_k__BackingField;

  /// @brief Field <Timeout>k__BackingField, offset: 0x8, size: 0x8, def value: None
  double_t _Timeout_k__BackingField;

  /// @brief Field <Location>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::OVRSpace_StorageLocation _Location_k__BackingField;

  /// @brief Field <QueryType>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_SpaceQueryType _QueryType_k__BackingField;

  /// @brief Field <ActionType>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_SpaceQueryActionType _ActionType_k__BackingField;

  /// @brief Field _componentType, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::OVRPlugin_SpaceComponentType _componentType;

  /// @brief Field _uuidFilter, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::System::Guid>* _uuidFilter;

  /// @brief Field _groupFilter, offset: 0x28, size: 0x14, def value: None
  ::System::Nullable_1<::System::Guid> _groupFilter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpaceQuery_Options, _MaxResults_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpaceQuery_Options, _Timeout_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpaceQuery_Options, _Location_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpaceQuery_Options, _QueryType_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpaceQuery_Options, _ActionType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpaceQuery_Options, _componentType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpaceQuery_Options, _uuidFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpaceQuery_Options, _groupFilter) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpaceQuery_Options, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPlugin::SpaceQueryInfo2, OVRPlugin::SpaceStorageLocation, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSpaceQuery
class CORDL_TYPE OVRSpaceQuery : public ::System::Object {
public:
  // Declarations
  using Options = ::GlobalNamespace::OVRSpaceQuery_Options;

  using QueryInfoUnion = ::GlobalNamespace::OVRSpaceQuery_QueryInfoUnion;

  /// @brief Field s_ComponentTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ComponentTypes,
                      put = setStaticF_s_ComponentTypes)) ::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType, ::Array<::GlobalNamespace::OVRPlugin_SpaceComponentType>*>
      s_ComponentTypes;

  /// @brief Field s_Ids, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Ids, put = setStaticF_s_Ids)) ::ArrayW<::System::Guid, ::Array<::System::Guid>*> s_Ids;

  /// @brief Field s_TemplateQuery, offset 0xffffffff, size 0x50
  __declspec(property(get = getStaticF_s_TemplateQuery, put = setStaticF_s_TemplateQuery)) ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 s_TemplateQuery;

  /// @brief Method AppendAnchors, addr 0x5cbc9bc, size 0x2a0, virtual false, abstract: false, final false
  static inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> AppendAnchors(::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2> query,
                                                                                                     ::System::Collections::Generic::IEnumerable_1<::System::Guid>* anchorIds);

  /// @brief Method ForAnchors, addr 0x5cbc92c, size 0x90, virtual false, abstract: false, final false
  static inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> ForAnchors(::System::Collections::Generic::IEnumerable_1<::System::Guid>* anchorIds,
                                                                                                  ::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2> query);

  /// @brief Method ForAnchorsThrow, addr 0x5cbcf3c, size 0x1b0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 ForAnchorsThrow(::System::Collections::Generic::IEnumerable_1<::System::Guid>* anchorIds, ::StringW argName);

  /// @brief Method ForAnchorsUnchecked, addr 0x5cbcc5c, size 0x230, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 ForAnchorsUnchecked(::GlobalNamespace::OVREnumerable_1<::System::Guid> anchorIds);

  /// @brief Method ForComponent, addr 0x5cbd0ec, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> ForComponent(::GlobalNamespace::OVRPlugin_SpaceComponentType type,
                                                                                                    ::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2> query);

  /// @brief Method ForComponentThrow, addr 0x5cbd298, size 0x1a8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 ForComponentThrow(::GlobalNamespace::OVRPlugin_SpaceComponentType type, ::StringW argName);

  /// @brief Method ForComponentUnchecked, addr 0x5cbd1b4, size 0xe4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 ForComponentUnchecked(::GlobalNamespace::OVRPlugin_SpaceComponentType type);

  /// @brief Method ForGroup, addr 0x5cbd440, size 0x150, virtual false, abstract: false, final false
  static inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> ForGroup(::System::Guid groupUuid, ::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2> query,
                                                                                                ::System::Collections::Generic::IEnumerable_1<::System::Guid>* anchorIds);

  /// @brief Method ForGroupThrow, addr 0x5cbd7c8, size 0x1c8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 ForGroupThrow(::System::Guid groupUuid, ::StringW argName, ::System::Collections::Generic::IEnumerable_1<::System::Guid>* anchorIds);

  /// @brief Method ForGroupUnchecked, addr 0x5cbd590, size 0x238, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 ForGroupUnchecked(::System::Guid groupUuid, ::GlobalNamespace::OVREnumerable_1<::System::Guid> anchorIds);

  /// @brief Method PostProcessQuery, addr 0x5cbce8c, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result, ::StringW> PostProcessQuery(::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2> query,
                                                                                                        ::GlobalNamespace::OVRPlugin_Result result, ::ByRef<::StringW> why);

  /// @brief Method ToV1, addr 0x5cbd990, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo ToV1(::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2> query2);

  /// @brief Method ToV2, addr 0x5cbd9a4, size 0x38, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 ToV2(::ByRef<::GlobalNamespace::OVRPlugin_SpaceQueryInfo> query1);

  static inline ::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType, ::Array<::GlobalNamespace::OVRPlugin_SpaceComponentType>*> getStaticF_s_ComponentTypes();

  static inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> getStaticF_s_Ids();

  static inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 getStaticF_s_TemplateQuery();

  static inline void setStaticF_s_ComponentTypes(::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType, ::Array<::GlobalNamespace::OVRPlugin_SpaceComponentType>*> value);

  static inline void setStaticF_s_Ids(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value);

  static inline void setStaticF_s_TemplateQuery(::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpaceQuery();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSpaceQuery", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSpaceQuery(OVRSpaceQuery&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSpaceQuery", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSpaceQuery(OVRSpaceQuery const&) = delete;

  /// @brief Field DefaultStorageLocation value: I32(2)
  static ::GlobalNamespace::OVRPlugin_SpaceStorageLocation const DefaultStorageLocation;

  /// @brief Field DefaultTimeout offset 0xffffffff size 0x8
  static constexpr double_t DefaultTimeout{ static_cast<double_t>(0.0) };

  /// @brief Field MaxResultsForAnchors offset 0xffffffff size 0x4
  static constexpr int32_t MaxResultsForAnchors{ static_cast<int32_t>(0x400) };

  /// @brief Field MaxResultsForGroup offset 0xffffffff size 0x4
  static constexpr int32_t MaxResultsForGroup{ static_cast<int32_t>(0x400) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7684 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpaceQuery, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSpaceQuery);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpaceQuery*, "", "OVRSpaceQuery");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpaceQuery_Options, "", "OVRSpaceQuery/Options");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpaceQuery_QueryInfoUnion, "", "OVRSpaceQuery/QueryInfoUnion");
