#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderPassEventsEnumValues.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderPassEventsEnumValues)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class RenderPassEventsEnumValues;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::RenderPassEventsEnumValues);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.RenderPassEventsEnumValues
class CORDL_TYPE RenderPassEventsEnumValues : public ::System::Object {
public:
  // Declarations
  /// @brief Field values, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_values, put = setStaticF_values)) ::ArrayW<int32_t, ::Array<int32_t>*> values;

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_values();

  static inline void setStaticF_values(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPassEventsEnumValues();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderPassEventsEnumValues", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderPassEventsEnumValues(RenderPassEventsEnumValues&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderPassEventsEnumValues", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderPassEventsEnumValues(RenderPassEventsEnumValues const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12856 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderPassEventsEnumValues, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::RenderPassEventsEnumValues);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderPassEventsEnumValues*, "UnityEngine.Rendering.Universal", "RenderPassEventsEnumValues");
