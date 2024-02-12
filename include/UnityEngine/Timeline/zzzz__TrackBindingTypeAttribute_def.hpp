#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackBindingFlags_def.hpp"
CORDL_MODULE_EXPORT(TrackBindingTypeAttribute)
namespace System {
class Type;
}
namespace UnityEngine::Timeline {
struct TrackBindingFlags;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TrackBindingTypeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TrackBindingTypeAttribute);
// Type: UnityEngine.Timeline::TrackBindingTypeAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2547)), TypeDefinitionIndex(TypeDefinitionIndex(13870))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13871))
// CS Name: ::UnityEngine.Timeline::TrackBindingTypeAttribute*
class CORDL_TYPE TrackBindingTypeAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Type* type;

  /// @brief Field flags, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_flags, put = __cordl_internal_set_flags))::UnityEngine::Timeline::TrackBindingFlags flags;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_type() const;

  constexpr void __cordl_internal_set_type(::System::Type* value);

  constexpr ::UnityEngine::Timeline::TrackBindingFlags& __cordl_internal_get_flags();

  constexpr ::UnityEngine::Timeline::TrackBindingFlags const& __cordl_internal_get_flags() const;

  constexpr void __cordl_internal_set_flags(::UnityEngine::Timeline::TrackBindingFlags value);

  static inline ::UnityEngine::Timeline::TrackBindingTypeAttribute* New_ctor(::System::Type* type);

  /// @brief Method .ctor, addr 0x2c6b234, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  static inline ::UnityEngine::Timeline::TrackBindingTypeAttribute* New_ctor(::System::Type* type, ::UnityEngine::Timeline::TrackBindingFlags flags);

  /// @brief Method .ctor, addr 0x2c6b264, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::UnityEngine::Timeline::TrackBindingFlags flags);

  // Ctor Parameters [CppParam { name: "", ty: "TrackBindingTypeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackBindingTypeAttribute(TrackBindingTypeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackBindingTypeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackBindingTypeAttribute(TrackBindingTypeAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackBindingTypeAttribute();

public:
  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field flags, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Timeline::TrackBindingFlags ___flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TrackBindingTypeAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackBindingTypeAttribute, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackBindingTypeAttribute, ___flags) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TrackBindingTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TrackBindingTypeAttribute*, "UnityEngine.Timeline", "TrackBindingTypeAttribute");
