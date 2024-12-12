#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpaceQuery.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpaceQuery)
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryActionType;
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
struct OVRSpace_StorageLocation;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSpaceQuery;
}
namespace GlobalNamespace {
struct OVRSpaceQuery_Options;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSpaceQuery);
MARK_VAL_T(::GlobalNamespace::OVRSpaceQuery_Options);
// Dependencies OVRPlugin::SpaceComponentType, OVRPlugin::SpaceQueryActionType, OVRPlugin::SpaceQueryType, OVRSpace::StorageLocation
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpaceQuery/Options
struct CORDL_TYPE OVRSpaceQuery_Options {
public:
  // Declarations
  __declspec(property(get = get_ActionType, put = set_ActionType)) ::GlobalNamespace::OVRPlugin_SpaceQueryActionType ActionType;

  __declspec(property(get = get_ComponentFilter, put = set_ComponentFilter)) ::GlobalNamespace::OVRPlugin_SpaceComponentType ComponentFilter;

  /// @brief Field ComponentTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ComponentTypes,
                      put = setStaticF_ComponentTypes)) ::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType, ::Array<::GlobalNamespace::OVRPlugin_SpaceComponentType>*>
      ComponentTypes;

  /// @brief Field Ids, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Ids, put = setStaticF_Ids)) ::ArrayW<::System::Guid, ::Array<::System::Guid>*> Ids;

  __declspec(property(get = get_Location, put = set_Location)) ::GlobalNamespace::OVRSpace_StorageLocation Location;

  __declspec(property(get = get_MaxResults, put = set_MaxResults)) int32_t MaxResults;

  __declspec(property(get = get_QueryType, put = set_QueryType)) ::GlobalNamespace::OVRPlugin_SpaceQueryType QueryType;

  __declspec(property(get = get_Timeout, put = set_Timeout)) double_t Timeout;

  __declspec(property(get = get_UuidFilter, put = set_UuidFilter)) ::System::Collections::Generic::IEnumerable_1<::System::Guid>* UuidFilter;

  /// @brief Method ToQueryInfo, addr 0x40130b8, size 0x368, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo ToQueryInfo();

  /// @brief Method TryQuerySpaces, addr 0x4013420, size 0x178, virtual false, abstract: false, final false
  inline bool TryQuerySpaces(::ByRef<uint64_t> requestId);

  /// @brief Method ValidateSingleFilter, addr 0x4012df0, size 0x58, virtual false, abstract: false, final false
  static inline void ValidateSingleFilter(::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuidFilter, ::GlobalNamespace::OVRPlugin_SpaceComponentType componentFilter);

  /// @brief Method .ctor, addr 0x401302c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRSpaceQuery_Options other);

  static inline ::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType, ::Array<::GlobalNamespace::OVRPlugin_SpaceComponentType>*> getStaticF_ComponentTypes();

  static inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> getStaticF_Ids();

  /// @brief Method get_ActionType, addr 0x4012d68, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_SpaceQueryActionType get_ActionType();

  /// @brief Method get_ComponentFilter, addr 0x4012d78, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_SpaceComponentType get_ComponentFilter();

  /// @brief Method get_Location, addr 0x4012d48, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRSpace_StorageLocation get_Location();

  /// @brief Method get_MaxResults, addr 0x4012d28, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxResults();

  /// @brief Method get_QueryType, addr 0x4012d58, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_SpaceQueryType get_QueryType();

  /// @brief Method get_Timeout, addr 0x4012d38, size 0x8, virtual false, abstract: false, final false
  inline double_t get_Timeout();

  /// @brief Method get_UuidFilter, addr 0x4012e48, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Guid>* get_UuidFilter();

  static inline void setStaticF_ComponentTypes(::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType, ::Array<::GlobalNamespace::OVRPlugin_SpaceComponentType>*> value);

  static inline void setStaticF_Ids(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value);

  /// @brief Method set_ActionType, addr 0x4012d70, size 0x8, virtual false, abstract: false, final false
  inline void set_ActionType(::GlobalNamespace::OVRPlugin_SpaceQueryActionType value);

  /// @brief Method set_ComponentFilter, addr 0x4012d80, size 0x70, virtual false, abstract: false, final false
  inline void set_ComponentFilter(::GlobalNamespace::OVRPlugin_SpaceComponentType value);

  /// @brief Method set_Location, addr 0x4012d50, size 0x8, virtual false, abstract: false, final false
  inline void set_Location(::GlobalNamespace::OVRSpace_StorageLocation value);

  /// @brief Method set_MaxResults, addr 0x4012d30, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxResults(int32_t value);

  /// @brief Method set_QueryType, addr 0x4012d60, size 0x8, virtual false, abstract: false, final false
  inline void set_QueryType(::GlobalNamespace::OVRPlugin_SpaceQueryType value);

  /// @brief Method set_Timeout, addr 0x4012d40, size 0x8, virtual false, abstract: false, final false
  inline void set_Timeout(double_t value);

  /// @brief Method set_UuidFilter, addr 0x4012e50, size 0x1dc, virtual false, abstract: false, final false
  inline void set_UuidFilter(::System::Collections::Generic::IEnumerable_1<::System::Guid>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpaceQuery_Options();

  // Ctor Parameters [CppParam { name: "_MaxResults_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Timeout_k__BackingField", ty: "double_t", modifiers: "",
  // def_value: None }, CppParam { name: "_Location_k__BackingField", ty: "::GlobalNamespace::OVRSpace_StorageLocation", modifiers: "", def_value: None }, CppParam { name:
  // "_QueryType_k__BackingField", ty: "::GlobalNamespace::OVRPlugin_SpaceQueryType", modifiers: "", def_value: None }, CppParam { name: "_ActionType_k__BackingField", ty:
  // "::GlobalNamespace::OVRPlugin_SpaceQueryActionType", modifiers: "", def_value: None }, CppParam { name: "_componentType", ty: "::GlobalNamespace::OVRPlugin_SpaceComponentType", modifiers: "",
  // def_value: None }, CppParam { name: "_uuidFilter", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: None }]
  constexpr OVRSpaceQuery_Options(int32_t _MaxResults_k__BackingField, double_t _Timeout_k__BackingField, ::GlobalNamespace::OVRSpace_StorageLocation _Location_k__BackingField,
                                  ::GlobalNamespace::OVRPlugin_SpaceQueryType _QueryType_k__BackingField, ::GlobalNamespace::OVRPlugin_SpaceQueryActionType _ActionType_k__BackingField,
                                  ::GlobalNamespace::OVRPlugin_SpaceComponentType _componentType, ::System::Collections::Generic::IEnumerable_1<::System::Guid>* _uuidFilter) noexcept;

  /// @brief Field MaxUuidCount offset 0xffffffff size 0x4
  static constexpr int32_t MaxUuidCount{ static_cast<int32_t>(0x400) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8303 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

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

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpaceQuery_Options, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSpaceQuery
class CORDL_TYPE OVRSpaceQuery : public ::System::Object {
public:
  // Declarations
  using Options = ::GlobalNamespace::OVRSpaceQuery_Options;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8304 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpaceQuery, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSpaceQuery);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpaceQuery*, "", "OVRSpaceQuery");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpaceQuery_Options, "", "OVRSpaceQuery/Options");
