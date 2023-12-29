#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_TOPNodeData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_TOPNodeData)
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace HoudiniEngineUnity {
struct __HEU_TOPNodeData__PDGState;
}
namespace HoudiniEngineUnity {
class HEU_TOPWorkResult;
}
namespace HoudiniEngineUnity {
class HEU_WorkItemTally;
}
namespace HoudiniEngineUnity {
class TOPNodeTags;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct __HEU_TOPNodeData__PDGState;
}
namespace HoudiniEngineUnity {
class HEU_TOPNodeData;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_TOPNodeData);
// Type: ::PDGState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9698))
// CS Name: ::HEU_TOPNodeData::PDGState
struct CORDL_TYPE __HEU_TOPNodeData__PDGState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_TOPNodeData__PDGState_Unwrapped
  enum struct ____HEU_TOPNodeData__PDGState_Unwrapped : int32_t {
    __E_NONE = static_cast<int32_t>(0x0),
    __E_DIRTIED = static_cast<int32_t>(0x1),
    __E_DIRTYING = static_cast<int32_t>(0x2),
    __E_COOKING = static_cast<int32_t>(0x3),
    __E_COOK_COMPLETE = static_cast<int32_t>(0x4),
    __E_COOK_FAILED = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_TOPNodeData__PDGState_Unwrapped() const noexcept {
    return static_cast<____HEU_TOPNodeData__PDGState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_TOPNodeData__PDGState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_TOPNodeData__PDGState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NONE value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState const NONE;

  /// @brief Field DIRTIED value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState const DIRTIED;

  /// @brief Field DIRTYING value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState const DIRTYING;

  /// @brief Field COOKING value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState const COOKING;

  /// @brief Field COOK_COMPLETE value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState const COOK_COMPLETE;

  /// @brief Field COOK_FAILED value: static_cast<int32_t>(0x5)
  static ::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState const COOK_FAILED;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_TOPNodeData
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9698))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9699))
// CS Name: ::HoudiniEngineUnity::HEU_TOPNodeData*
class CORDL_TYPE HEU_TOPNodeData : public ::System::Object {
public:
  // Declarations
  using PDGState = ::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState;

  /// @brief Field _nodeID, offset 0x10, size 0x4
  __declspec(property(get = __get__nodeID, put = __set__nodeID)) int32_t _nodeID;

  /// @brief Field _nodeName, offset 0x18, size 0x8
  __declspec(property(get = __get__nodeName, put = __set__nodeName))::StringW _nodeName;

  /// @brief Field _parentName, offset 0x20, size 0x8
  __declspec(property(get = __get__parentName, put = __set__parentName))::StringW _parentName;

  /// @brief Field _workResultParentGO, offset 0x28, size 0x8
  __declspec(property(get = __get__workResultParentGO, put = __set__workResultParentGO))::UnityEngine::GameObject* _workResultParentGO;

  /// @brief Field _workResults, offset 0x30, size 0x8
  __declspec(property(get = __get__workResults, put = __set__workResults))::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPWorkResult*>* _workResults;

  /// @brief Field _tags, offset 0x38, size 0x8
  __declspec(property(get = __get__tags, put = __set__tags))::HoudiniEngineUnity::TOPNodeTags* _tags;

  /// @brief Field _showResults, offset 0x40, size 0x1
  __declspec(property(get = __get__showResults, put = __set__showResults)) bool _showResults;

  /// @brief Field _pdgState, offset 0x44, size 0x4
  __declspec(property(get = __get__pdgState, put = __set__pdgState))::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState _pdgState;

  /// @brief Field _workItemTally, offset 0x48, size 0x8
  __declspec(property(get = __get__workItemTally, put = __set__workItemTally))::HoudiniEngineUnity::HEU_WorkItemTally* _workItemTally;

  constexpr int32_t& __get__nodeID();

  constexpr int32_t const& __get__nodeID() const;

  constexpr void __set__nodeID(int32_t value);

  constexpr ::StringW& __get__nodeName();

  constexpr ::StringW const& __get__nodeName() const;

  constexpr void __set__nodeName(::StringW value);

  constexpr ::StringW& __get__parentName();

  constexpr ::StringW const& __get__parentName() const;

  constexpr void __set__parentName(::StringW value);

  constexpr ::UnityEngine::GameObject*& __get__workResultParentGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__workResultParentGO() const;

  constexpr void __set__workResultParentGO(::UnityEngine::GameObject* value);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPWorkResult*>*& __get__workResults();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPWorkResult*>*> const& __get__workResults() const;

  constexpr void __set__workResults(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPWorkResult*>* value);

  constexpr ::HoudiniEngineUnity::TOPNodeTags*& __get__tags();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::TOPNodeTags*> const& __get__tags() const;

  constexpr void __set__tags(::HoudiniEngineUnity::TOPNodeTags* value);

  constexpr bool& __get__showResults();

  constexpr bool const& __get__showResults() const;

  constexpr void __set__showResults(bool value);

  constexpr ::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState& __get__pdgState();

  constexpr ::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState const& __get__pdgState() const;

  constexpr void __set__pdgState(::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState value);

  constexpr ::HoudiniEngineUnity::HEU_WorkItemTally*& __get__workItemTally();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_WorkItemTally*> const& __get__workItemTally() const;

  constexpr void __set__workItemTally(::HoudiniEngineUnity::HEU_WorkItemTally* value);

  /// @brief Method Reset addr 0x2045f9c size 0x24 virtual false final false
  inline void Reset();

  /// @brief Method AreAllWorkItemsComplete addr 0x2045fc0 size 0x4c virtual false final false
  inline bool AreAllWorkItemsComplete();

  /// @brief Method AnyWorkItemsFailed addr 0x2045d7c size 0x24 virtual false final false
  inline bool AnyWorkItemsFailed();

  /// @brief Method AnyWorkItemsPending addr 0x2046054 size 0x58 virtual false final false
  inline bool AnyWorkItemsPending();

  static inline ::HoudiniEngineUnity::HEU_TOPNodeData* New_ctor();

  /// @brief Method .ctor addr 0x204456c size 0xe4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_TOPNodeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_TOPNodeData(HEU_TOPNodeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_TOPNodeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_TOPNodeData(HEU_TOPNodeData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_TOPNodeData();

public:
  /// @brief Field _nodeID, offset: 0x10, size: 0x4, def value: None
  int32_t ____nodeID;

  /// @brief Field _nodeName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____nodeName;

  /// @brief Field _parentName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____parentName;

  /// @brief Field _workResultParentGO, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____workResultParentGO;

  /// @brief Field _workResults, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPWorkResult*>* ____workResults;

  /// @brief Field _tags, offset: 0x38, size: 0x8, def value: None
  ::HoudiniEngineUnity::TOPNodeTags* ____tags;

  /// @brief Field _showResults, offset: 0x40, size: 0x1, def value: None
  bool ____showResults;

  /// @brief Field _pdgState, offset: 0x44, size: 0x4, def value: None
  ::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState ____pdgState;

  /// @brief Field _workItemTally, offset: 0x48, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_WorkItemTally* ____workItemTally;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_TOPNodeData, 0x50>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_TOPNodeData, ____nodeID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_TOPNodeData, ____nodeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_TOPNodeData, ____parentName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_TOPNodeData, ____workResultParentGO) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_TOPNodeData, ____workResults) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_TOPNodeData, ____tags) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_TOPNodeData, ____showResults) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_TOPNodeData, ____pdgState) == 0x44, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_TOPNodeData, ____workItemTally) == 0x48, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState, "HoudiniEngineUnity", "HEU_TOPNodeData/PDGState");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_TOPNodeData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_TOPNodeData*, "HoudiniEngineUnity", "HEU_TOPNodeData");
