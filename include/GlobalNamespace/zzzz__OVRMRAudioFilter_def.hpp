#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMRAudioFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMRAudioFilter)
namespace GlobalNamespace {
class OVRExternalComposition;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMRAudioFilter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRMRAudioFilter);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRMRAudioFilter
class CORDL_TYPE OVRMRAudioFilter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field composition, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_composition, put = __cordl_internal_set_composition)) ::GlobalNamespace::OVRExternalComposition* composition;

  /// @brief Field running, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_running, put = __cordl_internal_set_running)) bool running;

  static inline ::GlobalNamespace::OVRMRAudioFilter* New_ctor();

  /// @brief Method OnAudioFilterRead, addr 0x3f96be4, size 0x18, virtual false, abstract: false, final false
  inline void OnAudioFilterRead(::ArrayW<float_t, ::Array<float_t>*> data, int32_t channels);

  /// @brief Method Start, addr 0x3f96bd8, size 0xc, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::OVRExternalComposition* const& __cordl_internal_get_composition() const;

  constexpr ::GlobalNamespace::OVRExternalComposition*& __cordl_internal_get_composition();

  constexpr bool const& __cordl_internal_get_running() const;

  constexpr bool& __cordl_internal_get_running();

  constexpr void __cordl_internal_set_composition(::GlobalNamespace::OVRExternalComposition* value);

  constexpr void __cordl_internal_set_running(bool value);

  /// @brief Method .ctor, addr 0x3f96bfc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMRAudioFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRMRAudioFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRMRAudioFilter(OVRMRAudioFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRMRAudioFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMRAudioFilter(OVRMRAudioFilter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7824 };

  /// @brief Field running, offset: 0x20, size: 0x1, def value: None
  bool ___running;

  /// @brief Field composition, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OVRExternalComposition* ___composition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMRAudioFilter, ___running) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMRAudioFilter, ___composition) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMRAudioFilter, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRMRAudioFilter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMRAudioFilter*, "", "OVRMRAudioFilter");
