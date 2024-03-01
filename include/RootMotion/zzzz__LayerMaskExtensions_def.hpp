#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LayerMaskExtensions)
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace RootMotion {
class LayerMaskExtensions;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::LayerMaskExtensions);
// Type: RootMotion::LayerMaskExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// CS Name: ::RootMotion::LayerMaskExtensions*
class CORDL_TYPE LayerMaskExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddToMask, addr 0x131a31c, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::LayerMask AddToMask(::UnityEngine::LayerMask original, ::ArrayW<::StringW, ::Array<::StringW>*> layerNames);

  /// @brief Method Contains, addr 0x131a148, size 0x4c, virtual false, abstract: false, final false
  static inline bool Contains(::UnityEngine::LayerMask mask, int32_t layer);

  /// @brief Method Create, addr 0x131a194, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::LayerMask Create(::ArrayW<::StringW, ::Array<::StringW>*> layerNames);

  /// @brief Method Create, addr 0x131a250, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::LayerMask Create(::ArrayW<int32_t, ::Array<int32_t>*> layerNumbers);

  /// @brief Method Inverse, addr 0x131a2f4, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::LayerMask Inverse(::UnityEngine::LayerMask original);

  /// @brief Method LayerNumbersToMask, addr 0x131a264, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::LayerMask LayerNumbersToMask(::ArrayW<int32_t, ::Array<int32_t>*> layerNumbers);

  /// @brief Method MaskToNames, addr 0x131a3d0, size 0x154, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> MaskToNames(::UnityEngine::LayerMask original);

  /// @brief Method MaskToNumbers, addr 0x131a524, size 0x138, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> MaskToNumbers(::UnityEngine::LayerMask original);

  /// @brief Method MaskToString, addr 0x131a65c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW MaskToString(::UnityEngine::LayerMask original);

  /// @brief Method MaskToString, addr 0x131a6b4, size 0x24, virtual false, abstract: false, final false
  static inline ::StringW MaskToString(::UnityEngine::LayerMask original, ::StringW delimiter);

  /// @brief Method NamesToMask, addr 0x131a1a8, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::LayerMask NamesToMask(::ArrayW<::StringW, ::Array<::StringW>*> layerNames);

  /// @brief Method RemoveFromMask, addr 0x131a368, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::LayerMask RemoveFromMask(::UnityEngine::LayerMask original, ::ArrayW<::StringW, ::Array<::StringW>*> layerNames);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayerMaskExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayerMaskExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayerMaskExtensions(LayerMaskExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayerMaskExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayerMaskExtensions(LayerMaskExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::LayerMaskExtensions, 0x10>, "Size mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::LayerMaskExtensions);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::LayerMaskExtensions*, "RootMotion", "LayerMaskExtensions");
