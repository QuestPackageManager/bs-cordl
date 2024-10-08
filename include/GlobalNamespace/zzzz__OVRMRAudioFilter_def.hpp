#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMRAudioFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: ::OVRMRAudioFilter
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRMRAudioFilter*
class CORDL_TYPE OVRMRAudioFilter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field composition, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_composition, put = __cordl_internal_set_composition)) ::GlobalNamespace::OVRExternalComposition* composition;

  /// @brief Field running, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_running, put = __cordl_internal_set_running)) bool running;

  static inline ::GlobalNamespace::OVRMRAudioFilter* New_ctor();

  /// @brief Method OnAudioFilterRead, addr 0x3f25a34, size 0x18, virtual false, abstract: false, final false
  inline void OnAudioFilterRead(::ArrayW<float_t, ::Array<float_t>*> data, int32_t channels);

  /// @brief Method Start, addr 0x3f25a28, size 0xc, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::OVRExternalComposition*& __cordl_internal_get_composition();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRExternalComposition*> const& __cordl_internal_get_composition() const;

  constexpr bool const& __cordl_internal_get_running() const;

  constexpr bool& __cordl_internal_get_running();

  constexpr void __cordl_internal_set_composition(::GlobalNamespace::OVRExternalComposition* value);

  constexpr void __cordl_internal_set_running(bool value);

  /// @brief Method .ctor, addr 0x3f25a4c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field running, offset: 0x20, size: 0x1, def value: None
  bool ___running;

  /// @brief Field composition, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OVRExternalComposition* ___composition;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7789 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMRAudioFilter, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMRAudioFilter, ___running) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMRAudioFilter, ___composition) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRMRAudioFilter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMRAudioFilter*, "", "OVRMRAudioFilter");
