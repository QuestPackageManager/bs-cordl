#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PS5ActivityDataSO)
// Forward declare root types
namespace GlobalNamespace {
class PS5ActivityDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5ActivityDataSO);
// Type: ::PS5ActivityDataSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4560))
// CS Name: ::PS5ActivityDataSO*
class CORDL_TYPE PS5ActivityDataSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _activityId, offset 0x18, size 0x8
  __declspec(property(get = __get__activityId, put = __set__activityId))::StringW _activityId;

  __declspec(property(get = get_activityId))::StringW activityId;

  constexpr ::StringW& __get__activityId();

  constexpr ::StringW const& __get__activityId() const;

  constexpr void __set__activityId(::StringW value);

  /// @brief Method get_activityId addr 0x2368290 size 0x8 virtual false final false
  inline ::StringW get_activityId();

  static inline ::GlobalNamespace::PS5ActivityDataSO* New_ctor();

  /// @brief Method .ctor addr 0x2368270 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PS5ActivityDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS5ActivityDataSO(PS5ActivityDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS5ActivityDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS5ActivityDataSO(PS5ActivityDataSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS5ActivityDataSO();

public:
  /// @brief Field _activityId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____activityId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5ActivityDataSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5ActivityDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5ActivityDataSO*, "", "PS5ActivityDataSO");
