#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RepaintData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(RepaintData)
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RepaintData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::RepaintData);
// Dependencies System.Object, UnityEngine.Matrix4x4, UnityEngine.Rect, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RepaintData
class CORDL_TYPE RepaintData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <currentOffset>k__BackingField, offset 0x10, size 0x40
  __declspec(property(get = __cordl_internal_get__currentOffset_k__BackingField, put = __cordl_internal_set__currentOffset_k__BackingField)) ::UnityEngine::Matrix4x4 _currentOffset_k__BackingField;

  /// @brief Field <currentWorldClip>k__BackingField, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__currentWorldClip_k__BackingField,
                      put = __cordl_internal_set__currentWorldClip_k__BackingField)) ::UnityEngine::Rect _currentWorldClip_k__BackingField;

  /// @brief Field <mousePosition>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__mousePosition_k__BackingField, put = __cordl_internal_set__mousePosition_k__BackingField)) ::UnityEngine::Vector2 _mousePosition_k__BackingField;

  /// @brief Field <repaintEvent>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__repaintEvent_k__BackingField, put = __cordl_internal_set__repaintEvent_k__BackingField)) ::UnityEngine::Event* _repaintEvent_k__BackingField;

  __declspec(property(get = get_currentOffset)) ::UnityEngine::Matrix4x4 currentOffset;

  __declspec(property(get = get_currentWorldClip)) ::UnityEngine::Rect currentWorldClip;

  __declspec(property(get = get_repaintEvent, put = set_repaintEvent)) ::UnityEngine::Event* repaintEvent;

  static inline ::UnityEngine::UIElements::RepaintData* New_ctor();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get__currentOffset_k__BackingField() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get__currentOffset_k__BackingField();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get__currentWorldClip_k__BackingField() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get__currentWorldClip_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__mousePosition_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__mousePosition_k__BackingField();

  constexpr ::UnityEngine::Event* const& __cordl_internal_get__repaintEvent_k__BackingField() const;

  constexpr ::UnityEngine::Event*& __cordl_internal_get__repaintEvent_k__BackingField();

  constexpr void __cordl_internal_set__currentOffset_k__BackingField(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set__currentWorldClip_k__BackingField(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set__mousePosition_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__repaintEvent_k__BackingField(::UnityEngine::Event* value);

  /// @brief Method .ctor, addr 0x4a42d64, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_currentOffset, addr 0x4a42d34, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_currentOffset();

  /// @brief Method get_currentWorldClip, addr 0x4a42d48, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_currentWorldClip();

  /// @brief Method get_repaintEvent, addr 0x4a42d54, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Event* get_repaintEvent();

  /// @brief Method set_repaintEvent, addr 0x4a42d5c, size 0x8, virtual false, abstract: false, final false
  inline void set_repaintEvent(::UnityEngine::Event* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RepaintData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RepaintData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RepaintData(RepaintData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RepaintData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RepaintData(RepaintData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6008 };

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
static_assert(offsetof(::UnityEngine::UIElements::RepaintData, ____currentOffset_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RepaintData, ____mousePosition_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RepaintData, ____currentWorldClip_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RepaintData, ____repaintEvent_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RepaintData, 0x70>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::RepaintData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RepaintData*, "UnityEngine.UIElements", "RepaintData");
