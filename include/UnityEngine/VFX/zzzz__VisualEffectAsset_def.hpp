#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/zzzz__VisualEffectObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualEffectAsset)
namespace System {
struct IntPtr;
}
namespace UnityEngine::VFX {
struct VFXSpace;
}
// Forward declare root types
namespace UnityEngine::VFX {
class VisualEffectAsset;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::VisualEffectAsset*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectAsset*, "UnityEngine.VFX", "VisualEffectAsset");
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

  /// @brief Method GetExposedSpace, addr 0x6e2a680, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::VFX::VFXSpace GetExposedSpace(int32_t nameID);

  /// @brief Method GetExposedSpace_Injected, addr 0x6e2a738, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::VFXSpace GetExposedSpace_Injected(::System::IntPtr _unity_self, int32_t nameID);

  static inline ::UnityEngine::VFX::VisualEffectAsset* New_ctor();

  /// @brief Method .ctor, addr 0x6e2a77c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

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

  /// @brief Field PlayEventName offset 0xffffffff size 0x8
  static constexpr ::ConstString PlayEventName{ u"OnPlay" };

  /// @brief Field StopEventName offset 0xffffffff size 0x8
  static constexpr ::ConstString StopEventName{ u"OnStop" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22328 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::VisualEffectAsset) == 0x18, "Size mismatch!");

} // namespace UnityEngine::VFX
