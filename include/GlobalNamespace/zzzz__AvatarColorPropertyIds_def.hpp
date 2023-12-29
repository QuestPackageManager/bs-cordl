#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarColorPropertyIds)
// Forward declare root types
namespace GlobalNamespace {
class AvatarColorPropertyIds;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarColorPropertyIds);
// Type: ::AvatarColorPropertyIds
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4074))
// CS Name: ::AvatarColorPropertyIds*
class CORDL_TYPE AvatarColorPropertyIds : public ::System::Object {
public:
  // Declarations
  /// @brief Field colorPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_colorPropertyId, put = setStaticF_colorPropertyId)) int32_t colorPropertyId;

  /// @brief Field rimLightColorPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_rimLightColorPropertyId, put = setStaticF_rimLightColorPropertyId)) int32_t rimLightColorPropertyId;

  /// @brief Field uvColorsPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_uvColorsPropertyId, put = setStaticF_uvColorsPropertyId)) int32_t uvColorsPropertyId;

  /// @brief Field uvRimLightColorsPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_uvRimLightColorsPropertyId, put = setStaticF_uvRimLightColorsPropertyId)) int32_t uvRimLightColorsPropertyId;

  /// @brief Field segmentToHighlightPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_segmentToHighlightPropertyId, put = setStaticF_segmentToHighlightPropertyId)) int32_t segmentToHighlightPropertyId;

  static inline void setStaticF_colorPropertyId(int32_t value);

  static inline int32_t getStaticF_colorPropertyId();

  static inline void setStaticF_rimLightColorPropertyId(int32_t value);

  static inline int32_t getStaticF_rimLightColorPropertyId();

  static inline void setStaticF_uvColorsPropertyId(int32_t value);

  static inline int32_t getStaticF_uvColorsPropertyId();

  static inline void setStaticF_uvRimLightColorsPropertyId(int32_t value);

  static inline int32_t getStaticF_uvRimLightColorsPropertyId();

  static inline void setStaticF_segmentToHighlightPropertyId(int32_t value);

  static inline int32_t getStaticF_segmentToHighlightPropertyId();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarColorPropertyIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarColorPropertyIds(AvatarColorPropertyIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarColorPropertyIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarColorPropertyIds(AvatarColorPropertyIds const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarColorPropertyIds();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarColorPropertyIds, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarColorPropertyIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarColorPropertyIds*, "", "AvatarColorPropertyIds");
