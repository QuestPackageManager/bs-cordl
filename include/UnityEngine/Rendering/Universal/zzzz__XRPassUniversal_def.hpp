#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/XRPassUniversal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
CORDL_MODULE_EXPORT(XRPassUniversal)
namespace UnityEngine::Experimental::Rendering {
struct XRPassCreateInfo;
}
namespace UnityEngine::Experimental::Rendering {
class XRPass;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class XRPassUniversal;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::XRPassUniversal);
// Dependencies UnityEngine.Experimental.Rendering.XRPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.XRPassUniversal
class CORDL_TYPE XRPassUniversal : public ::UnityEngine::Experimental::Rendering::XRPass {
public:
  // Declarations
  /// @brief Field <canFoveateIntermediatePasses>k__BackingField, offset 0x737, size 0x1
  __declspec(property(get = __cordl_internal_get__canFoveateIntermediatePasses_k__BackingField,
                      put = __cordl_internal_set__canFoveateIntermediatePasses_k__BackingField)) bool _canFoveateIntermediatePasses_k__BackingField;

  /// @brief Field <canMarkLateLatch>k__BackingField, offset 0x735, size 0x1
  __declspec(property(get = __cordl_internal_get__canMarkLateLatch_k__BackingField, put = __cordl_internal_set__canMarkLateLatch_k__BackingField)) bool _canMarkLateLatch_k__BackingField;

  /// @brief Field <hasMarkedLateLatch>k__BackingField, offset 0x736, size 0x1
  __declspec(property(get = __cordl_internal_get__hasMarkedLateLatch_k__BackingField, put = __cordl_internal_set__hasMarkedLateLatch_k__BackingField)) bool _hasMarkedLateLatch_k__BackingField;

  /// @brief Field <isLateLatchEnabled>k__BackingField, offset 0x734, size 0x1
  __declspec(property(get = __cordl_internal_get__isLateLatchEnabled_k__BackingField, put = __cordl_internal_set__isLateLatchEnabled_k__BackingField)) bool _isLateLatchEnabled_k__BackingField;

  __declspec(property(get = get_canFoveateIntermediatePasses, put = set_canFoveateIntermediatePasses)) bool canFoveateIntermediatePasses;

  __declspec(property(get = get_canMarkLateLatch, put = set_canMarkLateLatch)) bool canMarkLateLatch;

  __declspec(property(get = get_hasMarkedLateLatch, put = set_hasMarkedLateLatch)) bool hasMarkedLateLatch;

  __declspec(property(get = get_isLateLatchEnabled, put = set_isLateLatchEnabled)) bool isLateLatchEnabled;

  /// @brief Method Create, addr 0x673067c, size 0xec, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::XRPass* Create(::UnityEngine::Experimental::Rendering::XRPassCreateInfo createInfo);

  static inline ::UnityEngine::Rendering::Universal::XRPassUniversal* New_ctor();

  /// @brief Method Release, addr 0x6730768, size 0x74, virtual true, abstract: false, final false
  inline void Release();

  constexpr bool const& __cordl_internal_get__canFoveateIntermediatePasses_k__BackingField() const;

  constexpr bool& __cordl_internal_get__canFoveateIntermediatePasses_k__BackingField();

  constexpr bool const& __cordl_internal_get__canMarkLateLatch_k__BackingField() const;

  constexpr bool& __cordl_internal_get__canMarkLateLatch_k__BackingField();

  constexpr bool const& __cordl_internal_get__hasMarkedLateLatch_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasMarkedLateLatch_k__BackingField();

  constexpr bool const& __cordl_internal_get__isLateLatchEnabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isLateLatchEnabled_k__BackingField();

  constexpr void __cordl_internal_set__canFoveateIntermediatePasses_k__BackingField(bool value);

  constexpr void __cordl_internal_set__canMarkLateLatch_k__BackingField(bool value);

  constexpr void __cordl_internal_set__hasMarkedLateLatch_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isLateLatchEnabled_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x673081c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_canFoveateIntermediatePasses, addr 0x673080c, size 0x8, virtual false, abstract: false, final false
  inline bool get_canFoveateIntermediatePasses();

  /// @brief Method get_canMarkLateLatch, addr 0x67307ec, size 0x8, virtual false, abstract: false, final false
  inline bool get_canMarkLateLatch();

  /// @brief Method get_hasMarkedLateLatch, addr 0x67307fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasMarkedLateLatch();

  /// @brief Method get_isLateLatchEnabled, addr 0x67307dc, size 0x8, virtual false, abstract: false, final false
  inline bool get_isLateLatchEnabled();

  /// @brief Method set_canFoveateIntermediatePasses, addr 0x6730814, size 0x8, virtual false, abstract: false, final false
  inline void set_canFoveateIntermediatePasses(bool value);

  /// @brief Method set_canMarkLateLatch, addr 0x67307f4, size 0x8, virtual false, abstract: false, final false
  inline void set_canMarkLateLatch(bool value);

  /// @brief Method set_hasMarkedLateLatch, addr 0x6730804, size 0x8, virtual false, abstract: false, final false
  inline void set_hasMarkedLateLatch(bool value);

  /// @brief Method set_isLateLatchEnabled, addr 0x67307e4, size 0x8, virtual false, abstract: false, final false
  inline void set_isLateLatchEnabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRPassUniversal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRPassUniversal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRPassUniversal(XRPassUniversal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRPassUniversal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRPassUniversal(XRPassUniversal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13023 };

  /// @brief Field <isLateLatchEnabled>k__BackingField, offset: 0x734, size: 0x1, def value: None
  bool ____isLateLatchEnabled_k__BackingField;

  /// @brief Field <canMarkLateLatch>k__BackingField, offset: 0x735, size: 0x1, def value: None
  bool ____canMarkLateLatch_k__BackingField;

  /// @brief Field <hasMarkedLateLatch>k__BackingField, offset: 0x736, size: 0x1, def value: None
  bool ____hasMarkedLateLatch_k__BackingField;

  /// @brief Field <canFoveateIntermediatePasses>k__BackingField, offset: 0x737, size: 0x1, def value: None
  bool ____canFoveateIntermediatePasses_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPassUniversal, ____isLateLatchEnabled_k__BackingField) == 0x734, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPassUniversal, ____canMarkLateLatch_k__BackingField) == 0x735, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPassUniversal, ____hasMarkedLateLatch_k__BackingField) == 0x736, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPassUniversal, ____canFoveateIntermediatePasses_k__BackingField) == 0x737, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::XRPassUniversal, 0x738>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::XRPassUniversal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::XRPassUniversal*, "UnityEngine.Rendering.Universal", "XRPassUniversal");
