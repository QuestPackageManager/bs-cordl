#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__MoveDirection_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(AxisEventData)
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine::EventSystems {
struct MoveDirection;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class AxisEventData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::AxisEventData);
// Type: UnityEngine.EventSystems::AxisEventData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8987)), TypeDefinitionIndex(TypeDefinitionIndex(13063)), TypeDefinitionIndex(TypeDefinitionIndex(13105))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13061))
// CS Name: ::UnityEngine.EventSystems::AxisEventData*
class CORDL_TYPE AxisEventData : public ::UnityEngine::EventSystems::BaseEventData {
public:
  // Declarations
  /// @brief Field <moveVector>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__moveVector_k__BackingField, put = __cordl_internal_set__moveVector_k__BackingField))::UnityEngine::Vector2 _moveVector_k__BackingField;

  /// @brief Field <moveDir>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__moveDir_k__BackingField, put = __cordl_internal_set__moveDir_k__BackingField))::UnityEngine::EventSystems::MoveDirection _moveDir_k__BackingField;

  __declspec(property(get = get_moveVector, put = set_moveVector))::UnityEngine::Vector2 moveVector;

  __declspec(property(get = get_moveDir, put = set_moveDir))::UnityEngine::EventSystems::MoveDirection moveDir;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__moveVector_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__moveVector_k__BackingField() const;

  constexpr void __cordl_internal_set__moveVector_k__BackingField(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::EventSystems::MoveDirection& __cordl_internal_get__moveDir_k__BackingField();

  constexpr ::UnityEngine::EventSystems::MoveDirection const& __cordl_internal_get__moveDir_k__BackingField() const;

  constexpr void __cordl_internal_set__moveDir_k__BackingField(::UnityEngine::EventSystems::MoveDirection value);

  /// @brief Method get_moveVector, addr 0x2db3760, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_moveVector();

  /// @brief Method set_moveVector, addr 0x2db3768, size 0x8, virtual false, abstract: false, final false
  inline void set_moveVector(::UnityEngine::Vector2 value);

  /// @brief Method get_moveDir, addr 0x2db3770, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::MoveDirection get_moveDir();

  /// @brief Method set_moveDir, addr 0x2db3778, size 0x8, virtual false, abstract: false, final false
  inline void set_moveDir(::UnityEngine::EventSystems::MoveDirection value);

  static inline ::UnityEngine::EventSystems::AxisEventData* New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  /// @brief Method .ctor, addr 0x2db3780, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  // Ctor Parameters [CppParam { name: "", ty: "AxisEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AxisEventData(AxisEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AxisEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AxisEventData(AxisEventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AxisEventData();

public:
  /// @brief Field <moveVector>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____moveVector_k__BackingField;

  /// @brief Field <moveDir>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::EventSystems::MoveDirection ____moveDir_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::AxisEventData, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::AxisEventData, ____moveVector_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::AxisEventData, ____moveDir_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::AxisEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::AxisEventData*, "UnityEngine.EventSystems", "AxisEventData");
