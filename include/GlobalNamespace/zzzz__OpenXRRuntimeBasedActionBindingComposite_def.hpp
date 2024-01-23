#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRRuntimeBasedActionBindingComposite)
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
// Forward declare root types
namespace GlobalNamespace {
class OpenXRRuntimeBasedActionBindingComposite;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite);
// Type: ::OpenXRRuntimeBasedActionBindingComposite
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6190)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6190), inst: 391 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14437))
// CS Name: ::OpenXRRuntimeBasedActionBindingComposite*
class CORDL_TYPE OpenXRRuntimeBasedActionBindingComposite : public ::UnityEngine::InputSystem::InputBindingComposite_1<float_t> {
public:
  // Declarations
  /// @brief Field oculusRuntime, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_oculusRuntime, put = __cordl_internal_set_oculusRuntime)) int32_t oculusRuntime;

  /// @brief Field otherRuntimes, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_otherRuntimes, put = __cordl_internal_set_otherRuntimes)) int32_t otherRuntimes;

  constexpr int32_t& __cordl_internal_get_oculusRuntime();

  constexpr int32_t const& __cordl_internal_get_oculusRuntime() const;

  constexpr void __cordl_internal_set_oculusRuntime(int32_t value);

  constexpr int32_t& __cordl_internal_get_otherRuntimes();

  constexpr int32_t const& __cordl_internal_get_otherRuntimes() const;

  constexpr void __cordl_internal_set_otherRuntimes(int32_t value);

  /// @brief Method ReadValue, addr 0x20ff28c, size 0x8, virtual true, abstract: false, final false
  inline float_t ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method EvaluateMagnitude, addr 0x20ff294, size 0xc, virtual true, abstract: false, final false
  inline float_t EvaluateMagnitude(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method Init, addr 0x20ff308, size 0x4, virtual false, abstract: false, final false
  static inline void Init();

  static inline ::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite* New_ctor();

  /// @brief Method .ctor, addr 0x20ff30c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRRuntimeBasedActionBindingComposite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRRuntimeBasedActionBindingComposite(OpenXRRuntimeBasedActionBindingComposite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRRuntimeBasedActionBindingComposite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRRuntimeBasedActionBindingComposite(OpenXRRuntimeBasedActionBindingComposite const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRRuntimeBasedActionBindingComposite();

public:
  /// @brief Field oculusRuntime, offset: 0x10, size: 0x4, def value: None
  int32_t ___oculusRuntime;

  /// @brief Field otherRuntimes, offset: 0x14, size: 0x4, def value: None
  int32_t ___otherRuntimes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite, ___oculusRuntime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite, ___otherRuntimes) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*, "", "OpenXRRuntimeBasedActionBindingComposite");
