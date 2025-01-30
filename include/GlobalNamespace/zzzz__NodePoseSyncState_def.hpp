#pragma once
// IWYU pragma private; include "GlobalNamespace/NodePoseSyncState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IEquatableByReference_1_def.hpp"
#include "GlobalNamespace/zzzz__IStateTable_3_def.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NodePoseSyncState)
namespace GlobalNamespace {
struct NodePoseSyncState_NodePose;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
struct NodePoseSyncState_NodePose;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NodePoseSyncState_NodePose);
MARK_VAL_T(::GlobalNamespace::NodePoseSyncState);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: NodePoseSyncState/NodePose
struct CORDL_TYPE NodePoseSyncState_NodePose {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NodePoseSyncState_NodePose_Unwrapped
  enum struct __NodePoseSyncState_NodePose_Unwrapped : int32_t {
    __E_Head = static_cast<int32_t>(0x0),
    __E_LeftController = static_cast<int32_t>(0x1),
    __E_RightController = static_cast<int32_t>(0x2),
    __E_Count = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NodePoseSyncState_NodePose_Unwrapped() const noexcept {
    return static_cast<__NodePoseSyncState_NodePose_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NodePoseSyncState_NodePose();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NodePoseSyncState_NodePose(int32_t value__) noexcept;

  /// @brief Field Count value: I32(3)
  static ::GlobalNamespace::NodePoseSyncState_NodePose const Count;

  /// @brief Field Head value: I32(0)
  static ::GlobalNamespace::NodePoseSyncState_NodePose const Head;

  /// @brief Field LeftController value: I32(1)
  static ::GlobalNamespace::NodePoseSyncState_NodePose const LeftController;

  /// @brief Field RightController value: I32(2)
  static ::GlobalNamespace::NodePoseSyncState_NodePose const RightController;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14981 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NodePoseSyncState_NodePose, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NodePoseSyncState_NodePose, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IEquatableByReference`1<T>, IStateTable`3<TStateTable, TType, TState>, LiteNetLib.Utils.INetSerializable, NodePoseSyncState::NodePose, PoseSerializable
namespace GlobalNamespace {
// Is value type: true
// CS Name: NodePoseSyncState
struct CORDL_TYPE NodePoseSyncState {
public:
  // Declarations
  using NodePose = ::GlobalNamespace::NodePoseSyncState_NodePose;

  /// @brief Convert operator to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::NodePoseSyncState>"
  constexpr operator ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::NodePoseSyncState>*();

  /// @brief Convert operator to "::GlobalNamespace::IStateTable_3<::GlobalNamespace::NodePoseSyncState,::GlobalNamespace::NodePoseSyncState_NodePose,::GlobalNamespace::PoseSerializable>"
  constexpr operator ::GlobalNamespace::IStateTable_3<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::NodePoseSyncState_NodePose, ::GlobalNamespace::PoseSerializable>*();

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*();

  /// @brief Method ApplyDelta, addr 0x22e8a04, size 0x110, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NodePoseSyncState ApplyDelta(::ByRef<::GlobalNamespace::NodePoseSyncState> delta);

  /// @brief Method Deserialize, addr 0x22e8784, size 0x40, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals, addr 0x22e8860, size 0x94, virtual false, abstract: false, final false
  inline bool Equals(::ByRef<::GlobalNamespace::NodePoseSyncState> other);

  /// @brief Method GetDelta, addr 0x22e88f4, size 0x110, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NodePoseSyncState GetDelta(::ByRef<::GlobalNamespace::NodePoseSyncState> latest);

  /// @brief Method GetSize, addr 0x22e8b14, size 0x48, virtual true, abstract: false, final true
  inline int32_t GetSize();

  /// @brief Method GetState, addr 0x22e8814, size 0x4c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::PoseSerializable GetState(::GlobalNamespace::NodePoseSyncState_NodePose nodePose);

  /// @brief Method IEquatableByReference<NodePoseSyncState>.Equals, addr 0x22e8bbc, size 0x4, virtual true, abstract: false, final true
  inline bool IEquatableByReference_NodePoseSyncState__Equals(::ByRef<::GlobalNamespace::NodePoseSyncState> other);

  /// @brief Method IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.ApplyDelta, addr 0x22e8b8c, size 0x30, virtual true, abstract: false, final true
  inline ::GlobalNamespace::NodePoseSyncState IStateTable_NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable__ApplyDelta(::ByRef<::GlobalNamespace::NodePoseSyncState> delta);

  /// @brief Method IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.GetDelta, addr 0x22e8b5c, size 0x30, virtual true, abstract: false, final true
  inline ::GlobalNamespace::NodePoseSyncState IStateTable_NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable__GetDelta(::ByRef<::GlobalNamespace::NodePoseSyncState> stateTable);

  /// @brief Method Serialize, addr 0x22e8744, size 0x40, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method SetState, addr 0x22e87c4, size 0x50, virtual true, abstract: false, final true
  inline void SetState(::GlobalNamespace::NodePoseSyncState_NodePose nodePose, ::GlobalNamespace::PoseSerializable pose);

  /// @brief Convert to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::NodePoseSyncState>"
  constexpr ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::NodePoseSyncState>* i___GlobalNamespace__IEquatableByReference_1___GlobalNamespace__NodePoseSyncState_();

  /// @brief Convert to "::GlobalNamespace::IStateTable_3<::GlobalNamespace::NodePoseSyncState,::GlobalNamespace::NodePoseSyncState_NodePose,::GlobalNamespace::PoseSerializable>"
  constexpr ::GlobalNamespace::IStateTable_3<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::NodePoseSyncState_NodePose, ::GlobalNamespace::PoseSerializable>*
  i___GlobalNamespace__IStateTable_3___GlobalNamespace__NodePoseSyncState___GlobalNamespace__NodePoseSyncState_NodePose___GlobalNamespace__PoseSerializable_();

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NodePoseSyncState();

  // Ctor Parameters [CppParam { name: "_head", ty: "::GlobalNamespace::PoseSerializable", modifiers: "", def_value: None }, CppParam { name: "_leftController", ty:
  // "::GlobalNamespace::PoseSerializable", modifiers: "", def_value: None }, CppParam { name: "_rightController", ty: "::GlobalNamespace::PoseSerializable", modifiers: "", def_value: None }]
  constexpr NodePoseSyncState(::GlobalNamespace::PoseSerializable _head, ::GlobalNamespace::PoseSerializable _leftController, ::GlobalNamespace::PoseSerializable _rightController) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14982 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field _head, offset: 0x0, size: 0x18, def value: None
  ::GlobalNamespace::PoseSerializable _head;

  /// @brief Field _leftController, offset: 0x18, size: 0x18, def value: None
  ::GlobalNamespace::PoseSerializable _leftController;

  /// @brief Field _rightController, offset: 0x30, size: 0x18, def value: None
  ::GlobalNamespace::PoseSerializable _rightController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NodePoseSyncState, _head) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NodePoseSyncState, _leftController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NodePoseSyncState, _rightController) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NodePoseSyncState, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NodePoseSyncState_NodePose, "", "NodePoseSyncState/NodePose");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NodePoseSyncState, "", "NodePoseSyncState");
