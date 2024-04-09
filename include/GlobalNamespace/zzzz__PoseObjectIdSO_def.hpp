#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PoseObjectIdSO)
// Forward declare root types
namespace GlobalNamespace {
class PoseObjectIdSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PoseObjectIdSO);
// Type: ::PoseObjectIdSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PoseObjectIdSO*
class CORDL_TYPE PoseObjectIdSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _serializedId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__serializedId, put = __cordl_internal_set__serializedId))::StringW _serializedId;

  __declspec(property(get = get_id))::StringW id;

  static inline ::GlobalNamespace::PoseObjectIdSO* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__serializedId() const;

  constexpr ::StringW& __cordl_internal_get__serializedId();

  constexpr void __cordl_internal_set__serializedId(::StringW value);

  /// @brief Method .ctor, addr 0x25849d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_id, addr 0x25849d0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_id();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoseObjectIdSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PoseObjectIdSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoseObjectIdSO(PoseObjectIdSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoseObjectIdSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoseObjectIdSO(PoseObjectIdSO const&) = delete;

  /// @brief Field _serializedId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____serializedId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PoseObjectIdSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PoseObjectIdSO, ____serializedId) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PoseObjectIdSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PoseObjectIdSO*, "", "PoseObjectIdSO");
