#pragma once
// IWYU pragma private; include "GlobalNamespace/OpenXRRuntimeBasedActionBindingComposite.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
// Dependencies UnityEngine.InputSystem.InputBindingComposite`1<TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: OpenXRRuntimeBasedActionBindingComposite
class CORDL_TYPE OpenXRRuntimeBasedActionBindingComposite : public ::UnityEngine::InputSystem::InputBindingComposite_1<float_t> {
public:
  // Declarations
  /// @brief Field oculusRuntime, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_oculusRuntime, put = __cordl_internal_set_oculusRuntime)) int32_t oculusRuntime;

  /// @brief Field otherRuntimes, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_otherRuntimes, put = __cordl_internal_set_otherRuntimes)) int32_t otherRuntimes;

  /// @brief Method EvaluateMagnitude, addr 0x56a8f78, size 0xc, virtual true, abstract: false, final false
  inline float_t EvaluateMagnitude(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method Init, addr 0x56a8ff4, size 0x4, virtual false, abstract: false, final false
  static inline void Init();

  static inline ::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite* New_ctor();

  /// @brief Method ReadOculusRuntimeValue, addr 0x56a8ec0, size 0x5c, virtual false, abstract: false, final false
  inline float_t ReadOculusRuntimeValue(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method ReadOtherRuntimeValue, addr 0x56a8f1c, size 0x5c, virtual false, abstract: false, final false
  inline float_t ReadOtherRuntimeValue(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method ReadValue, addr 0x56a8e3c, size 0x84, virtual true, abstract: false, final false
  inline float_t ReadValue(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  constexpr int32_t const& __cordl_internal_get_oculusRuntime() const;

  constexpr int32_t& __cordl_internal_get_oculusRuntime();

  constexpr int32_t const& __cordl_internal_get_otherRuntimes() const;

  constexpr int32_t& __cordl_internal_get_otherRuntimes();

  constexpr void __cordl_internal_set_oculusRuntime(int32_t value);

  constexpr void __cordl_internal_set_otherRuntimes(int32_t value);

  /// @brief Method .ctor, addr 0x56a8ff8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRRuntimeBasedActionBindingComposite();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRRuntimeBasedActionBindingComposite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRRuntimeBasedActionBindingComposite(OpenXRRuntimeBasedActionBindingComposite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRRuntimeBasedActionBindingComposite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRRuntimeBasedActionBindingComposite(OpenXRRuntimeBasedActionBindingComposite const&) = delete;

  /// @brief Field OCULUS_RUNTIME_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString OCULUS_RUNTIME_NAME{ u"Oculus" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20318 };

  /// @brief Field oculusRuntime, offset: 0x10, size: 0x4, def value: None
  int32_t ___oculusRuntime;

  /// @brief Field otherRuntimes, offset: 0x14, size: 0x4, def value: None
  int32_t ___otherRuntimes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite, ___oculusRuntime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite, ___otherRuntimes) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*, "", "OpenXRRuntimeBasedActionBindingComposite");
