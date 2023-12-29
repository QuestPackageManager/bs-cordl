#pragma once
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
// Type: UnityEngine.Timeline::TrackClipTypeAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14186))
// CS Name: ::UnityEngine.Timeline::TrackClipTypeAttribute*
class CORDL_TYPE TrackClipTypeAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field inspectedType, offset 0x10, size 0x8
  __declspec(property(get = __get_inspectedType, put = __set_inspectedType))::System::Type* inspectedType;

  /// @brief Field allowAutoCreate, offset 0x18, size 0x1
  __declspec(property(get = __get_allowAutoCreate, put = __set_allowAutoCreate)) bool allowAutoCreate;

  constexpr ::System::Type*& __get_inspectedType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_inspectedType() const;

  constexpr void __set_inspectedType(::System::Type* value);

  constexpr bool& __get_allowAutoCreate();

  constexpr bool const& __get_allowAutoCreate() const;

  constexpr void __set_allowAutoCreate(bool value);

  static inline ::UnityEngine::Timeline::TrackClipTypeAttribute* New_ctor(::System::Type* clipClass);

  /// @brief Method .ctor addr 0x2aea914 size 0x30 virtual false final false
  inline void _ctor(::System::Type* clipClass);

  static inline ::UnityEngine::Timeline::TrackClipTypeAttribute* New_ctor(::System::Type* clipClass, bool allowAutoCreate);

  /// @brief Method .ctor addr 0x2aea944 size 0x28 virtual false final false
  inline void _ctor(::System::Type* clipClass, bool allowAutoCreate);

  // Ctor Parameters [CppParam { name: "", ty: "TrackClipTypeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackClipTypeAttribute(TrackClipTypeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackClipTypeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackClipTypeAttribute(TrackClipTypeAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackClipTypeAttribute();

public:
  /// @brief Field inspectedType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___inspectedType;

  /// @brief Field allowAutoCreate, offset: 0x18, size: 0x1, def value: None
  bool ___allowAutoCreate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TrackClipTypeAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackClipTypeAttribute, ___inspectedType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackClipTypeAttribute, ___allowAutoCreate) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TrackClipTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TrackClipTypeAttribute*, "UnityEngine.Timeline", "TrackClipTypeAttribute");
