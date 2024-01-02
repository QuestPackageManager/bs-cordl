#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentTypeSO)
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentTypeSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentTypeSO);
// Type: ::EnvironmentTypeSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4182))
// CS Name: ::EnvironmentTypeSO*
class CORDL_TYPE EnvironmentTypeSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _typeNameLocalizationKey, offset 0x18, size 0x8
  __declspec(property(get = __get__typeNameLocalizationKey, put = __set__typeNameLocalizationKey))::StringW _typeNameLocalizationKey;

  __declspec(property(get = get_typeNameLocalizationKey))::StringW typeNameLocalizationKey;

  constexpr ::StringW& __get__typeNameLocalizationKey();

  constexpr ::StringW const& __get__typeNameLocalizationKey() const;

  constexpr void __set__typeNameLocalizationKey(::StringW value);

  /// @brief Method get_typeNameLocalizationKey, addr 0x23230f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_typeNameLocalizationKey();

  static inline ::GlobalNamespace::EnvironmentTypeSO* New_ctor();

  /// @brief Method .ctor, addr 0x2323100, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTypeSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentTypeSO(EnvironmentTypeSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTypeSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentTypeSO(EnvironmentTypeSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentTypeSO();

public:
  /// @brief Field _typeNameLocalizationKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ____typeNameLocalizationKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentTypeSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentTypeSO, ____typeNameLocalizationKey) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentTypeSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentTypeSO*, "", "EnvironmentTypeSO");
