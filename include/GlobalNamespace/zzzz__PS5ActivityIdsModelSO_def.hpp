#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PS5ActivityIdsModelSO)
namespace GlobalNamespace {
class CompetetiveActivitySO;
}
namespace GlobalNamespace {
class ProgressActivitySO;
}
// Forward declare root types
namespace GlobalNamespace {
class PS5ActivityIdsModelSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5ActivityIdsModelSO);
// Type: ::PS5ActivityIdsModelSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15857))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4561))
// CS Name: ::PS5ActivityIdsModelSO*
class CORDL_TYPE PS5ActivityIdsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _progressActivities, offset 0x18, size 0x8
  __declspec(
      property(get = __cordl_internal_get__progressActivities,
               put = __cordl_internal_set__progressActivities))::ArrayW<::UnityW<::GlobalNamespace::ProgressActivitySO>, ::Array<::UnityW<::GlobalNamespace::ProgressActivitySO>>*> _progressActivities;

  /// @brief Field _competetiveActivities, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__competetiveActivities,
                      put = __cordl_internal_set__competetiveActivities))::ArrayW<::UnityW<::GlobalNamespace::CompetetiveActivitySO>,
                                                                                  ::Array<::UnityW<::GlobalNamespace::CompetetiveActivitySO>>*> _competetiveActivities;

  __declspec(property(get = get_progressActivities))::ArrayW<::UnityW<::GlobalNamespace::ProgressActivitySO>, ::Array<::UnityW<::GlobalNamespace::ProgressActivitySO>>*> progressActivities;

  __declspec(property(get = get_competetiveActivities))::ArrayW<::UnityW<::GlobalNamespace::CompetetiveActivitySO>, ::Array<::UnityW<::GlobalNamespace::CompetetiveActivitySO>>*> competetiveActivities;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::ProgressActivitySO>, ::Array<::UnityW<::GlobalNamespace::ProgressActivitySO>>*>& __cordl_internal_get__progressActivities();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::ProgressActivitySO>, ::Array<::UnityW<::GlobalNamespace::ProgressActivitySO>>*> const& __cordl_internal_get__progressActivities() const;

  constexpr void __cordl_internal_set__progressActivities(::ArrayW<::UnityW<::GlobalNamespace::ProgressActivitySO>, ::Array<::UnityW<::GlobalNamespace::ProgressActivitySO>>*> value);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::CompetetiveActivitySO>, ::Array<::UnityW<::GlobalNamespace::CompetetiveActivitySO>>*>& __cordl_internal_get__competetiveActivities();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::CompetetiveActivitySO>, ::Array<::UnityW<::GlobalNamespace::CompetetiveActivitySO>>*> const& __cordl_internal_get__competetiveActivities() const;

  constexpr void __cordl_internal_set__competetiveActivities(::ArrayW<::UnityW<::GlobalNamespace::CompetetiveActivitySO>, ::Array<::UnityW<::GlobalNamespace::CompetetiveActivitySO>>*> value);

  /// @brief Method get_progressActivities, addr 0x2368298, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::ProgressActivitySO>, ::Array<::UnityW<::GlobalNamespace::ProgressActivitySO>>*> get_progressActivities();

  /// @brief Method get_competetiveActivities, addr 0x23682a0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::CompetetiveActivitySO>, ::Array<::UnityW<::GlobalNamespace::CompetetiveActivitySO>>*> get_competetiveActivities();

  static inline ::GlobalNamespace::PS5ActivityIdsModelSO* New_ctor();

  /// @brief Method .ctor, addr 0x23682a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PS5ActivityIdsModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS5ActivityIdsModelSO(PS5ActivityIdsModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS5ActivityIdsModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS5ActivityIdsModelSO(PS5ActivityIdsModelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS5ActivityIdsModelSO();

public:
  /// @brief Field _progressActivities, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::ProgressActivitySO>, ::Array<::UnityW<::GlobalNamespace::ProgressActivitySO>>*> ____progressActivities;

  /// @brief Field _competetiveActivities, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::CompetetiveActivitySO>, ::Array<::UnityW<::GlobalNamespace::CompetetiveActivitySO>>*> ____competetiveActivities;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5ActivityIdsModelSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5ActivityIdsModelSO, ____progressActivities) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS5ActivityIdsModelSO, ____competetiveActivities) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5ActivityIdsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5ActivityIdsModelSO*, "", "PS5ActivityIdsModelSO");
