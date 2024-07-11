#pragma once
// IWYU pragma private; include "GlobalNamespace/DisableSpatializerOnUnsupportedPlatforms.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DisableSpatializerOnUnsupportedPlatforms)
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class DisableSpatializerOnUnsupportedPlatforms;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms);
// Type: ::DisableSpatializerOnUnsupportedPlatforms
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DisableSpatializerOnUnsupportedPlatforms*
class CORDL_TYPE DisableSpatializerOnUnsupportedPlatforms : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioSource, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource, put = __cordl_internal_set__audioSource))::UnityW<::UnityEngine::AudioSource> _audioSource;

  static inline ::GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms* New_ctor();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource();

  constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value);

  /// @brief Method .ctor, addr 0x2633734, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisableSpatializerOnUnsupportedPlatforms();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisableSpatializerOnUnsupportedPlatforms", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisableSpatializerOnUnsupportedPlatforms(DisableSpatializerOnUnsupportedPlatforms&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisableSpatializerOnUnsupportedPlatforms", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisableSpatializerOnUnsupportedPlatforms(DisableSpatializerOnUnsupportedPlatforms const&) = delete;

  /// @brief Field _audioSource, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms, ____audioSource) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms*, "", "DisableSpatializerOnUnsupportedPlatforms");
