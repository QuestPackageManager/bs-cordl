#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TrackMediaType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineAsset_def.hpp"
CORDL_MODULE_EXPORT(TrackMediaType)
namespace UnityEngine::Timeline {
struct __TimelineAsset__MediaType;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TrackMediaType;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TrackMediaType);
// Type: UnityEngine.Timeline::TrackMediaType
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::TrackMediaType*
class CORDL_TYPE TrackMediaType : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field m_MediaType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MediaType, put = __cordl_internal_set_m_MediaType)) ::UnityEngine::Timeline::__TimelineAsset__MediaType m_MediaType;

  static inline ::UnityEngine::Timeline::TrackMediaType* New_ctor(::UnityEngine::Timeline::__TimelineAsset__MediaType mt);

  constexpr ::UnityEngine::Timeline::__TimelineAsset__MediaType const& __cordl_internal_get_m_MediaType() const;

  constexpr ::UnityEngine::Timeline::__TimelineAsset__MediaType& __cordl_internal_get_m_MediaType();

  constexpr void __cordl_internal_set_m_MediaType(::UnityEngine::Timeline::__TimelineAsset__MediaType value);

  /// @brief Method .ctor, addr 0x47c7ea8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Timeline::__TimelineAsset__MediaType mt);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackMediaType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrackMediaType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackMediaType(TrackMediaType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackMediaType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackMediaType(TrackMediaType const&) = delete;

  /// @brief Field m_MediaType, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Timeline::__TimelineAsset__MediaType ___m_MediaType;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15837 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TrackMediaType, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackMediaType, ___m_MediaType) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TrackMediaType);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TrackMediaType*, "UnityEngine.Timeline", "TrackMediaType");
