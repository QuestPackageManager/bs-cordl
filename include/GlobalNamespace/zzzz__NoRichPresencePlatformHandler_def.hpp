#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NoRichPresencePlatformHandler)
namespace GlobalNamespace {
class IRichPresenceData;
}
namespace GlobalNamespace {
class IRichPresencePlatformHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class NoRichPresencePlatformHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoRichPresencePlatformHandler);
// Type: ::NoRichPresencePlatformHandler
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5245))
// CS Name: ::NoRichPresencePlatformHandler*
class CORDL_TYPE NoRichPresencePlatformHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field <currentPresenceApiName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__currentPresenceApiName_k__BackingField,
                      put = __cordl_internal_set__currentPresenceApiName_k__BackingField))::StringW _currentPresenceApiName_k__BackingField;

  __declspec(property(get = get_currentPresenceApiName, put = set_currentPresenceApiName))::StringW currentPresenceApiName;

  /// @brief Convert operator to "::GlobalNamespace::IRichPresencePlatformHandler"
  constexpr operator ::GlobalNamespace::IRichPresencePlatformHandler*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IRichPresencePlatformHandler"
  constexpr ::GlobalNamespace::IRichPresencePlatformHandler* i___GlobalNamespace__IRichPresencePlatformHandler() noexcept;

  constexpr ::StringW& __cordl_internal_get__currentPresenceApiName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__currentPresenceApiName_k__BackingField() const;

  constexpr void __cordl_internal_set__currentPresenceApiName_k__BackingField(::StringW value);

  /// @brief Method get_currentPresenceApiName, addr 0x2336f84, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_currentPresenceApiName();

  /// @brief Method set_currentPresenceApiName, addr 0x2336f8c, size 0x8, virtual false, abstract: false, final false
  inline void set_currentPresenceApiName(::StringW value);

  /// @brief Method SetPresence, addr 0x2336f94, size 0xa8, virtual true, abstract: false, final true
  inline void SetPresence(::GlobalNamespace::IRichPresenceData* richPresenceData);

  /// @brief Method Clear, addr 0x233703c, size 0x50, virtual true, abstract: false, final true
  inline void Clear();

  static inline ::GlobalNamespace::NoRichPresencePlatformHandler* New_ctor();

  /// @brief Method .ctor, addr 0x233708c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoRichPresencePlatformHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoRichPresencePlatformHandler(NoRichPresencePlatformHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoRichPresencePlatformHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoRichPresencePlatformHandler(NoRichPresencePlatformHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoRichPresencePlatformHandler();

public:
  /// @brief Field <currentPresenceApiName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____currentPresenceApiName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoRichPresencePlatformHandler, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoRichPresencePlatformHandler, ____currentPresenceApiName_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoRichPresencePlatformHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoRichPresencePlatformHandler*, "", "NoRichPresencePlatformHandler");
