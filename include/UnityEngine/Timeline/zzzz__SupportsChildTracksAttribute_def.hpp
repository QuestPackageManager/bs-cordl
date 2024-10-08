#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/SupportsChildTracksAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SupportsChildTracksAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class SupportsChildTracksAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::SupportsChildTracksAttribute);
// Type: UnityEngine.Timeline::SupportsChildTracksAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::SupportsChildTracksAttribute*
class CORDL_TYPE SupportsChildTracksAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field childType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_childType, put = __cordl_internal_set_childType)) ::System::Type* childType;

  /// @brief Field levels, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_levels, put = __cordl_internal_set_levels)) int32_t levels;

  static inline ::UnityEngine::Timeline::SupportsChildTracksAttribute* New_ctor(::System::Type* childType, int32_t levels);

  constexpr ::System::Type*& __cordl_internal_get_childType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_childType() const;

  constexpr int32_t const& __cordl_internal_get_levels() const;

  constexpr int32_t& __cordl_internal_get_levels();

  constexpr void __cordl_internal_set_childType(::System::Type* value);

  constexpr void __cordl_internal_set_levels(int32_t value);

  /// @brief Method .ctor, addr 0x47b3878, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* childType, int32_t levels);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SupportsChildTracksAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SupportsChildTracksAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SupportsChildTracksAttribute(SupportsChildTracksAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SupportsChildTracksAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SupportsChildTracksAttribute(SupportsChildTracksAttribute const&) = delete;

  /// @brief Field childType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___childType;

  /// @brief Field levels, offset: 0x18, size: 0x4, def value: None
  int32_t ___levels;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15834 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::SupportsChildTracksAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::SupportsChildTracksAttribute, ___childType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::SupportsChildTracksAttribute, ___levels) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::SupportsChildTracksAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::SupportsChildTracksAttribute*, "UnityEngine.Timeline", "SupportsChildTracksAttribute");
