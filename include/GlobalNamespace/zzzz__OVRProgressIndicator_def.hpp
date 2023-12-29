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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8931))
// CS Name: ::OVRProgressIndicator*
class CORDL_TYPE OVRProgressIndicator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field progressImage, offset 0x18, size 0x8
  __declspec(property(get = __get_progressImage, put = __set_progressImage))::UnityEngine::MeshRenderer* progressImage;

  /// @brief Field currentProgress, offset 0x20, size 0x4
  __declspec(property(get = __get_currentProgress, put = __set_currentProgress)) float_t currentProgress;

  constexpr ::UnityEngine::MeshRenderer*& __get_progressImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& __get_progressImage() const;

  constexpr void __set_progressImage(::UnityEngine::MeshRenderer* value);

  constexpr float_t& __get_currentProgress();

  constexpr float_t const& __get_currentProgress() const;

  constexpr void __set_currentProgress(float_t value);

  /// @brief Method Awake addr 0x2644394 size 0x20 virtual false final false
  inline void Awake();

  /// @brief Method Update addr 0x26443b4 size 0x6c virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::OVRProgressIndicator* New_ctor();

  /// @brief Method .ctor addr 0x2644420 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRProgressIndicator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRProgressIndicator(OVRProgressIndicator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRProgressIndicator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRProgressIndicator(OVRProgressIndicator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRProgressIndicator();

public:
  /// @brief Field progressImage, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::MeshRenderer* ___progressImage;

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
