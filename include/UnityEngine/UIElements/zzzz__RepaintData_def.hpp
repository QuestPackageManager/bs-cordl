#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(RepaintData)
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Event;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RepaintData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::RepaintData);
// Type: UnityEngine.UIElements::RepaintData
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10165)), TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(2613)),
// TypeDefinitionIndex(TypeDefinitionIndex(10245))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6867)) CS Name: ::UnityEngine.UIElements::RepaintData*
class CORDL_TYPE RepaintData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <currentOffset>k__BackingField, offset 0x10, size 0x40
  __declspec(property(get = __get__currentOffset_k__BackingField, put = __set__currentOffset_k__BackingField))::UnityEngine::Matrix4x4 _currentOffset_k__BackingField;

  /// @brief Field <mousePosition>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __get__mousePosition_k__BackingField, put = __set__mousePosition_k__BackingField))::UnityEngine::Vector2 _mousePosition_k__BackingField;

  /// @brief Field <currentWorldClip>k__BackingField, offset 0x58, size 0x10
  __declspec(property(get = __get__currentWorldClip_k__BackingField, put = __set__currentWorldClip_k__BackingField))::UnityEngine::Rect _currentWorldClip_k__BackingField;

  /// @brief Field <repaintEvent>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __get__repaintEvent_k__BackingField, put = __set__repaintEvent_k__BackingField))::UnityEngine::Event* _repaintEvent_k__BackingField;

  __declspec(property(get = get_currentOffset))::UnityEngine::Matrix4x4 currentOffset;

  __declspec(property(get = get_currentWorldClip))::UnityEngine::Rect currentWorldClip;

  __declspec(property(get = get_repaintEvent, put = set_repaintEvent))::UnityEngine::Event* repaintEvent;

  constexpr ::UnityEngine::Matrix4x4& __get__currentOffset_k__BackingField();

  constexpr ::UnityEngine::Matrix4x4 const& __get__currentOffset_k__BackingField() const;

  constexpr void __set__currentOffset_k__BackingField(::UnityEngine::Matrix4x4 value);

  constexpr ::UnityEngine::Vector2& __get__mousePosition_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __get__mousePosition_k__BackingField() const;

  constexpr void __set__mousePosition_k__BackingField(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Rect& __get__currentWorldClip_k__BackingField();

  constexpr ::UnityEngine::Rect const& __get__currentWorldClip_k__BackingField() const;

  constexpr void __set__currentWorldClip_k__BackingField(::UnityEngine::Rect value);

  constexpr ::UnityEngine::Event*& __get__repaintEvent_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Event*> const& __get__repaintEvent_k__BackingField() const;

  constexpr void __set__repaintEvent_k__BackingField(::UnityEngine::Event* value);

  /// @brief Method get_currentOffset addr 0x2dc8714 size 0x14 virtual false final false
  inline ::UnityEngine::Matrix4x4 get_currentOffset();

  /// @brief Method get_currentWorldClip addr 0x2dc8728 size 0xc virtual false final false
  inline ::UnityEngine::Rect get_currentWorldClip();

  /// @brief Method get_repaintEvent addr 0x2dc8734 size 0x8 virtual false final false
  inline ::UnityEngine::Event* get_repaintEvent();

  /// @brief Method set_repaintEvent addr 0x2dc873c size 0x8 virtual false final false
  inline void set_repaintEvent(::UnityEngine::Event* value);

  static inline ::UnityEngine::UIElements::RepaintData* New_ctor();

  /// @brief Method .ctor addr 0x2dc8744 size 0x60 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RepaintData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RepaintData(RepaintData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RepaintData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RepaintData(RepaintData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RepaintData();

public:
  /// @brief Field <currentOffset>k__BackingField, offset: 0x10, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ____currentOffset_k__BackingField;

  /// @brief Field <mousePosition>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____mousePosition_k__BackingField;

  /// @brief Field <currentWorldClip>k__BackingField, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Rect ____currentWorldClip_k__BackingField;

  /// @brief Field <repaintEvent>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Event* ____repaintEvent_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RepaintData, 0x70>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::RepaintData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RepaintData*, "UnityEngine.UIElements", "RepaintData");
