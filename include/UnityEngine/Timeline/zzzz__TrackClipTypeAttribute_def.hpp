#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TrackClipTypeAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(TrackClipTypeAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TrackClipTypeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TrackClipTypeAttribute);
// Dependencies System.Attribute
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TrackClipTypeAttribute
class CORDL_TYPE TrackClipTypeAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field allowAutoCreate, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_allowAutoCreate, put = __cordl_internal_set_allowAutoCreate)) bool allowAutoCreate;

  /// @brief Field inspectedType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_inspectedType, put = __cordl_internal_set_inspectedType)) ::System::Type* inspectedType;

  static inline ::UnityEngine::Timeline::TrackClipTypeAttribute* New_ctor(::System::Type* clipClass);

  static inline ::UnityEngine::Timeline::TrackClipTypeAttribute* New_ctor(::System::Type* clipClass, bool allowAutoCreate);

  constexpr bool const& __cordl_internal_get_allowAutoCreate() const;

  constexpr bool& __cordl_internal_get_allowAutoCreate();

  constexpr ::System::Type* const& __cordl_internal_get_inspectedType() const;

  constexpr ::System::Type*& __cordl_internal_get_inspectedType();

  constexpr void __cordl_internal_set_allowAutoCreate(bool value);

  constexpr void __cordl_internal_set_inspectedType(::System::Type* value);

  /// @brief Method .ctor, addr 0x482c448, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* clipClass);

  /// @brief Method .ctor, addr 0x482c478, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* clipClass, bool allowAutoCreate);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackClipTypeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrackClipTypeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackClipTypeAttribute(TrackClipTypeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackClipTypeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackClipTypeAttribute(TrackClipTypeAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15876 };

  /// @brief Field inspectedType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___inspectedType;

  /// @brief Field allowAutoCreate, offset: 0x18, size: 0x1, def value: None
  bool ___allowAutoCreate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::TrackClipTypeAttribute, ___inspectedType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackClipTypeAttribute, ___allowAutoCreate) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TrackClipTypeAttribute, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TrackClipTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TrackClipTypeAttribute*, "UnityEngine.Timeline", "TrackClipTypeAttribute");
