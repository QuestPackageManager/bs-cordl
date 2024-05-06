#pragma once
// IWYU pragma private; include "GlobalNamespace/BakedLightUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BakedLightUtils)
// Forward declare root types
namespace GlobalNamespace {
class BakedLightUtils;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BakedLightUtils);
// Type: ::BakedLightUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BakedLightUtils*
class CORDL_TYPE BakedLightUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field _stencilCompPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__stencilCompPropertyId, put = setStaticF__stencilCompPropertyId)) int32_t _stencilCompPropertyId;

  /// @brief Field _stencilPassOpPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__stencilPassOpPropertyId, put = setStaticF__stencilPassOpPropertyId)) int32_t _stencilPassOpPropertyId;

  /// @brief Field _stencilRefValuePropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__stencilRefValuePropertyId, put = setStaticF__stencilRefValuePropertyId)) int32_t _stencilRefValuePropertyId;

  /// @brief Field _zWritePropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__zWritePropertyId, put = setStaticF__zWritePropertyId)) int32_t _zWritePropertyId;

  /// @brief Method ValidateLoadedEnvironmentScene, addr 0x267ef44, size 0x7a0, virtual false, abstract: false, final false
  static inline void ValidateLoadedEnvironmentScene(bool validateBakedGIEnabled);

  static inline int32_t getStaticF__stencilCompPropertyId();

  static inline int32_t getStaticF__stencilPassOpPropertyId();

  static inline int32_t getStaticF__stencilRefValuePropertyId();

  static inline int32_t getStaticF__zWritePropertyId();

  static inline void setStaticF__stencilCompPropertyId(int32_t value);

  static inline void setStaticF__stencilPassOpPropertyId(int32_t value);

  static inline void setStaticF__stencilRefValuePropertyId(int32_t value);

  static inline void setStaticF__zWritePropertyId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BakedLightUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BakedLightUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BakedLightUtils(BakedLightUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BakedLightUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BakedLightUtils(BakedLightUtils const&) = delete;

  /// @brief Field kDepthOnlyShaderName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDepthOnlyShaderName{ u"Custom/SetDepthOnly" };

  /// @brief Field kMirrorParentNameToIgnore offset 0xffffffff size 0x8
  static constexpr ::ConstString kMirrorParentNameToIgnore{ u"PlayersPlace" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BakedLightUtils, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BakedLightUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakedLightUtils*, "", "BakedLightUtils");
