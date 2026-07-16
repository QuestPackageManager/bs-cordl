#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRScene.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OVRScene)
namespace GlobalNamespace {
struct OVRSemanticLabels_Classification;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRScene;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRScene*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRScene*, "", "OVRScene");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRScene
class CORDL_TYPE OVRScene : public ::System::Object {
public:
  // Declarations
  /// @brief Method RequestSpaceSetup, addr 0x5e15f70, size 0x108, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<bool> RequestSpaceSetup();

  /// @brief Method RequestSpaceSetup, addr 0x5e16078, size 0x5c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<bool> RequestSpaceSetup(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSemanticLabels_Classification>* classifications);

  /// @brief Method RequestSpaceSetup, addr 0x5e15e6c, size 0x104, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTask_1<bool> RequestSpaceSetup(::StringW labels);

  /// @brief Method ValidateRequestString, addr 0x5e160d4, size 0x2d8, virtual false, abstract: false, final false
  static inline void ValidateRequestString(::System::Collections::Generic::IEnumerable_1<::StringW>* labels, ::StringW paramName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRScene();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRScene", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRScene(OVRScene&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRScene", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRScene(OVRScene const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7092 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRScene) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
