#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/zzzz__VisualEffectObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualEffectAsset)
// Forward declare root types
namespace UnityEngine::VFX {
class VisualEffectAsset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::VFX::VisualEffectAsset);
// Dependencies UnityEngine.VFX.VisualEffectObject
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VisualEffectAsset
class CORDL_TYPE VisualEffectAsset : public ::UnityEngine::VFX::VisualEffectObject {
public:
  // Declarations
  /// @brief Field PlayEventID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_PlayEventID, put = setStaticF_PlayEventID)) int32_t PlayEventID;

  /// @brief Field StopEventID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_StopEventID, put = setStaticF_StopEventID)) int32_t StopEventID;

  static inline int32_t getStaticF_PlayEventID();

  static inline int32_t getStaticF_StopEventID();

  static inline void setStaticF_PlayEventID(int32_t value);

  static inline void setStaticF_StopEventID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualEffectAsset(VisualEffectAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualEffectAsset(VisualEffectAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22616 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::VFX::VisualEffectAsset, 0x18>, "Size mismatch!");

} // namespace UnityEngine::VFX
NEED_NO_BOX(::UnityEngine::VFX::VisualEffectAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VFX::VisualEffectAsset*, "UnityEngine.VFX", "VisualEffectAsset");
