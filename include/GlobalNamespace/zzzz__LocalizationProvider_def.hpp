#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(LocalizationProvider)
namespace Polyglot {
class Localization;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalizationProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalizationProvider);
// Type: ::LocalizationProvider
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10210))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15545))
// CS Name: ::LocalizationProvider*
class CORDL_TYPE LocalizationProvider : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _localization, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__localization, put = __cordl_internal_set__localization))::UnityW<::Polyglot::Localization> _localization;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::UnityW<::GlobalNamespace::LocalizationProvider> _instance;

  __declspec(property(get = get_localization))::UnityW<::Polyglot::Localization> localization;

  constexpr ::UnityW<::Polyglot::Localization>& __cordl_internal_get__localization();

  constexpr ::UnityW<::Polyglot::Localization> const& __cordl_internal_get__localization() const;

  constexpr void __cordl_internal_set__localization(::UnityW<::Polyglot::Localization> value);

  static inline void setStaticF__instance(::UnityW<::GlobalNamespace::LocalizationProvider> value);

  static inline ::UnityW<::GlobalNamespace::LocalizationProvider> getStaticF__instance();

  /// @brief Method get_localization, addr 0x28008ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Polyglot::Localization> get_localization();

  /// @brief Method get_Instance, addr 0x28008b4, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::LocalizationProvider> get_Instance();

  /// @brief Method set_Instance, addr 0x2800a30, size 0x4c, virtual false, abstract: false, final false
  static inline void set_Instance(::GlobalNamespace::LocalizationProvider* value);

  /// @brief Method get_HasInstance, addr 0x2800948, size 0xe8, virtual false, abstract: false, final false
  static inline bool get_HasInstance();

  static inline ::GlobalNamespace::LocalizationProvider* New_ctor();

  /// @brief Method .ctor, addr 0x2800a7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizationProvider(LocalizationProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizationProvider(LocalizationProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizationProvider();

public:
  /// @brief Field _localization, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::Polyglot::Localization> ____localization;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalizationProvider, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationProvider, ____localization) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalizationProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizationProvider*, "", "LocalizationProvider");
