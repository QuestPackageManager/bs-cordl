#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/RichPresenceDefinitionSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RichPresenceDefinitionSO)
namespace OculusStudios::Platform::Core {
class IRichPresenceDefinition;
}
namespace OculusStudios::Platform::Core {
struct RichPresenceRuntimeInstance;
}
// Forward declare root types
namespace OculusStudios::Platform::Core {
class RichPresenceDefinitionSO;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Core::RichPresenceDefinitionSO);
// Dependencies UnityEngine.ScriptableObject
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.RichPresenceDefinitionSO
class CORDL_TYPE RichPresenceDefinitionSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _activity, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__activity, put = __cordl_internal_set__activity)) ::StringW _activity;

  /// @brief Field _id, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__id, put = __cordl_internal_set__id)) ::StringW _id;

  /// @brief Field _imageIdLarge, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__imageIdLarge, put = __cordl_internal_set__imageIdLarge)) ::StringW _imageIdLarge;

  /// @brief Field _imageIdSmall, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__imageIdSmall, put = __cordl_internal_set__imageIdSmall)) ::StringW _imageIdSmall;

  __declspec(property(get = get_activity)) ::StringW activity;

  __declspec(property(get = get_id)) ::StringW id;

  __declspec(property(get = get_imageIdLarge)) ::StringW imageIdLarge;

  __declspec(property(get = get_imageIdSmall)) ::StringW imageIdSmall;

  /// @brief Convert operator to "::OculusStudios::Platform::Core::IRichPresenceDefinition"
  constexpr operator ::OculusStudios::Platform::Core::IRichPresenceDefinition*() noexcept;

  /// @brief Method CreateRuntime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::OculusStudios::Platform::Core::RichPresenceRuntimeInstance CreateRuntime();

  static inline ::OculusStudios::Platform::Core::RichPresenceDefinitionSO* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__activity() const;

  constexpr ::StringW& __cordl_internal_get__activity();

  constexpr ::StringW const& __cordl_internal_get__id() const;

  constexpr ::StringW& __cordl_internal_get__id();

  constexpr ::StringW const& __cordl_internal_get__imageIdLarge() const;

  constexpr ::StringW& __cordl_internal_get__imageIdLarge();

  constexpr ::StringW const& __cordl_internal_get__imageIdSmall() const;

  constexpr ::StringW& __cordl_internal_get__imageIdSmall();

  constexpr void __cordl_internal_set__activity(::StringW value);

  constexpr void __cordl_internal_set__id(::StringW value);

  constexpr void __cordl_internal_set__imageIdLarge(::StringW value);

  constexpr void __cordl_internal_set__imageIdSmall(::StringW value);

  /// @brief Method .ctor, addr 0x5d7ff0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activity, addr 0x5d7fef4, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_activity();

  /// @brief Method get_id, addr 0x5d7feec, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_id();

  /// @brief Method get_imageIdLarge, addr 0x5d7ff04, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_imageIdLarge();

  /// @brief Method get_imageIdSmall, addr 0x5d7fefc, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_imageIdSmall();

  /// @brief Convert to "::OculusStudios::Platform::Core::IRichPresenceDefinition"
  constexpr ::OculusStudios::Platform::Core::IRichPresenceDefinition* i___OculusStudios__Platform__Core__IRichPresenceDefinition() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RichPresenceDefinitionSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RichPresenceDefinitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RichPresenceDefinitionSO(RichPresenceDefinitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RichPresenceDefinitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RichPresenceDefinitionSO(RichPresenceDefinitionSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22172 };

  /// @brief Field _id, offset: 0x18, size: 0x8, def value: None
  ::StringW ____id;

  /// @brief Field _activity, offset: 0x20, size: 0x8, def value: None
  ::StringW ____activity;

  /// @brief Field _imageIdSmall, offset: 0x28, size: 0x8, def value: None
  ::StringW ____imageIdSmall;

  /// @brief Field _imageIdLarge, offset: 0x30, size: 0x8, def value: None
  ::StringW ____imageIdLarge;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Core::RichPresenceDefinitionSO, ____id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::RichPresenceDefinitionSO, ____activity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::RichPresenceDefinitionSO, ____imageIdSmall) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::RichPresenceDefinitionSO, ____imageIdLarge) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Core::RichPresenceDefinitionSO, 0x38>, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
NEED_NO_BOX(::OculusStudios::Platform::Core::RichPresenceDefinitionSO);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::RichPresenceDefinitionSO*, "OculusStudios.Platform.Core", "RichPresenceDefinitionSO");
