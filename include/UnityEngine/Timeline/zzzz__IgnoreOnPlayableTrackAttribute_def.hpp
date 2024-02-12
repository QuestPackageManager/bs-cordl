#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(IgnoreOnPlayableTrackAttribute)
// Forward declare root types
namespace UnityEngine::Timeline {
class IgnoreOnPlayableTrackAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute);
// Type: UnityEngine.Timeline::IgnoreOnPlayableTrackAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2547))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13873))
// CS Name: ::UnityEngine.Timeline::IgnoreOnPlayableTrackAttribute*
class CORDL_TYPE IgnoreOnPlayableTrackAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2c6b2c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IgnoreOnPlayableTrackAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IgnoreOnPlayableTrackAttribute(IgnoreOnPlayableTrackAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IgnoreOnPlayableTrackAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IgnoreOnPlayableTrackAttribute(IgnoreOnPlayableTrackAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoreOnPlayableTrackAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute*, "UnityEngine.Timeline", "IgnoreOnPlayableTrackAttribute");
