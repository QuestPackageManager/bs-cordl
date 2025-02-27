#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRProgressIndicator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRProgressIndicator)
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRProgressIndicator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRProgressIndicator);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRProgressIndicator
class CORDL_TYPE OVRProgressIndicator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field currentProgress, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_currentProgress, put = __cordl_internal_set_currentProgress)) float_t currentProgress;

  /// @brief Field progressImage, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_progressImage, put = __cordl_internal_set_progressImage)) ::UnityW<::UnityEngine::MeshRenderer> progressImage;

  /// @brief Method Awake, addr 0x404d234, size 0x20, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::OVRProgressIndicator* New_ctor();

  /// @brief Method Update, addr 0x404d254, size 0x6c, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get_currentProgress() const;

  constexpr float_t& __cordl_internal_get_currentProgress();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_progressImage() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_progressImage();

  constexpr void __cordl_internal_set_currentProgress(float_t value);

  constexpr void __cordl_internal_set_progressImage(::UnityW<::UnityEngine::MeshRenderer> value);

  /// @brief Method .ctor, addr 0x404d2c0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRProgressIndicator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRProgressIndicator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRProgressIndicator(OVRProgressIndicator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRProgressIndicator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRProgressIndicator(OVRProgressIndicator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8471 };

  /// @brief Field progressImage, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___progressImage;

  /// @brief Field currentProgress, offset: 0x28, size: 0x4, def value: None
  float_t ___currentProgress;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRProgressIndicator, ___progressImage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRProgressIndicator, ___currentProgress) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRProgressIndicator, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRProgressIndicator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRProgressIndicator*, "", "OVRProgressIndicator");
