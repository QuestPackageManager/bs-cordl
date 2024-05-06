#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NotKeyableAttribute)
// Forward declare root types
namespace UnityEngine::Timeline {
class NotKeyableAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::NotKeyableAttribute);
// Type: UnityEngine.Timeline::NotKeyableAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::NotKeyableAttribute*
class CORDL_TYPE NotKeyableAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::Timeline::NotKeyableAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x33a3a6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotKeyableAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotKeyableAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotKeyableAttribute(NotKeyableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotKeyableAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotKeyableAttribute(NotKeyableAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::NotKeyableAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::NotKeyableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::NotKeyableAttribute*, "UnityEngine.Timeline", "NotKeyableAttribute");
