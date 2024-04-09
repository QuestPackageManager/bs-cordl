#pragma once
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
// Type: ::OVRProgressIndicator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRProgressIndicator*
class CORDL_TYPE OVRProgressIndicator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field currentProgress, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_currentProgress, put = __cordl_internal_set_currentProgress)) float_t currentProgress;

  /// @brief Field progressImage, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_progressImage, put = __cordl_internal_set_progressImage))::UnityW<::UnityEngine::MeshRenderer> progressImage;

  /// @brief Method Awake, addr 0x2a8e820, size 0x20, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::OVRProgressIndicator* New_ctor();

  /// @brief Method Update, addr 0x2a8e840, size 0x6c, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get_currentProgress() const;

  constexpr float_t& __cordl_internal_get_currentProgress();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_progressImage() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_progressImage();

  constexpr void __cordl_internal_set_currentProgress(float_t value);

  constexpr void __cordl_internal_set_progressImage(::UnityW<::UnityEngine::MeshRenderer> value);

  /// @brief Method .ctor, addr 0x2a8e8ac, size 0x14, virtual false, abstract: false, final false
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

  /// @brief Field progressImage, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___progressImage;

  /// @brief Field currentProgress, offset: 0x20, size: 0x4, def value: None
  float_t ___currentProgress;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRProgressIndicator, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRProgressIndicator, ___progressImage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRProgressIndicator, ___currentProgress) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRProgressIndicator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRProgressIndicator*, "", "OVRProgressIndicator");
