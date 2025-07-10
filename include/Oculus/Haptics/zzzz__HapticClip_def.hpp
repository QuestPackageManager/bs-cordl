#pragma once
// IWYU pragma private; include "Oculus/Haptics/HapticClip.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HapticClip)
// Forward declare root types
namespace Oculus::Haptics {
class HapticClip;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Haptics::HapticClip);
// Dependencies UnityEngine.ScriptableObject
namespace Oculus::Haptics {
// Is value type: false
// CS Name: Oculus.Haptics.HapticClip
class CORDL_TYPE HapticClip : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field json, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_json, put = __cordl_internal_set_json)) ::StringW json;

  static inline ::Oculus::Haptics::HapticClip* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_json() const;

  constexpr ::StringW& __cordl_internal_get_json();

  constexpr void __cordl_internal_set_json(::StringW value);

  /// @brief Method .ctor, addr 0x3f54b78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HapticClip();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HapticClip", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HapticClip(HapticClip&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HapticClip", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HapticClip(HapticClip const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18779 };

  /// @brief Field json, offset: 0x18, size: 0x8, def value: None
  ::StringW ___json;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Haptics::HapticClip, ___json) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Haptics::HapticClip, 0x20>, "Size mismatch!");

} // namespace Oculus::Haptics
NEED_NO_BOX(::Oculus::Haptics::HapticClip);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Haptics::HapticClip*, "Oculus.Haptics", "HapticClip");
