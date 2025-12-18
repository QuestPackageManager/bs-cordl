#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteBasicCutInfoHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteBasicCutInfoHelper)
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteBasicCutInfoHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteBasicCutInfoHelper);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteBasicCutInfoHelper
class CORDL_TYPE NoteBasicCutInfoHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetBasicCutInfo, addr 0x367deb8, size 0x18c, virtual false, abstract: false, final false
  static inline void GetBasicCutInfo(::UnityEngine::Transform* noteTransform, ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteCutDirection cutDirection,
                                     ::GlobalNamespace::SaberType saberType, float_t saberBladeSpeed, ::UnityEngine::Vector3 cutDirVec, float_t cutAngleTolerance, ::ByRef<bool> directionOK,
                                     ::ByRef<bool> speedOK, ::ByRef<bool> saberTypeOK, ::ByRef<float_t> cutDirDeviation, ::ByRef<float_t> cutDirAngle);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteBasicCutInfoHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteBasicCutInfoHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteBasicCutInfoHelper(NoteBasicCutInfoHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteBasicCutInfoHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteBasicCutInfoHelper(NoteBasicCutInfoHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20867 };

  /// @brief Field kMinBladeSpeedForCut offset 0xffffffff size 0x4
  static constexpr float_t kMinBladeSpeedForCut{ static_cast<float_t>(2.0f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteBasicCutInfoHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteBasicCutInfoHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteBasicCutInfoHelper*, "", "NoteBasicCutInfoHelper");
