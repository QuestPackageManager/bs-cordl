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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15529))
// CS Name: ::LocalizationProvider*
class CORDL_TYPE LocalizationProvider : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _localization, offset 0x18, size 0x8
  __declspec(property(get = __get__localization, put = __set__localization))::Polyglot::Localization* _localization;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::GlobalNamespace::LocalizationProvider* _instance;

  __declspec(property(get = get_localization))::Polyglot::Localization* localization;

  constexpr ::Polyglot::Localization*& __get__localization();

  constexpr ::cordl_internals::to_const_pointer<::Polyglot::Localization*> const& __get__localization() const;

  constexpr void __set__localization(::Polyglot::Localization* value);

  static inline void setStaticF__instance(::GlobalNamespace::LocalizationProvider* value);

  static inline ::GlobalNamespace::LocalizationProvider* getStaticF__instance();

  /// @brief Method get_localization addr 0x2685c88 size 0x8 virtual false final false
  inline ::Polyglot::Localization* get_localization();

  /// @brief Method get_Instance addr 0x2685c90 size 0x94 virtual false final false
  static inline ::GlobalNamespace::LocalizationProvider* get_Instance();

  /// @brief Method set_Instance addr 0x2685e0c size 0x4c virtual false final false
  static inline void set_Instance(::GlobalNamespace::LocalizationProvider* value);

  /// @brief Method get_HasInstance addr 0x2685d24 size 0xe8 virtual false final false
  static inline bool get_HasInstance();

  static inline ::GlobalNamespace::LocalizationProvider* New_ctor();

  /// @brief Method .ctor addr 0x2685e58 size 0x8 virtual false final false
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
  ::Polyglot::Localization* ____localization;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalizationProvider, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationProvider, ____localization) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalizationProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizationProvider*, "", "LocalizationProvider");
