#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_Asset)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace TMPro {
class TMP_Asset;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_Asset);
// Type: TMPro::TMP_Asset
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMPro::TMP_Asset*
class CORDL_TYPE TMP_Asset : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field hashCode, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_hashCode, put = __cordl_internal_set_hashCode)) int32_t hashCode;

  __declspec(property(get = get_instanceID)) int32_t instanceID;

  /// @brief Field m_InstanceID, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InstanceID, put = __cordl_internal_set_m_InstanceID)) int32_t m_InstanceID;

  /// @brief Field material, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material))::UnityW<::UnityEngine::Material> material;

  /// @brief Field materialHashCode, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_materialHashCode, put = __cordl_internal_set_materialHashCode)) int32_t materialHashCode;

  static inline ::TMPro::TMP_Asset* New_ctor();

  constexpr int32_t const& __cordl_internal_get_hashCode() const;

  constexpr int32_t& __cordl_internal_get_hashCode();

  constexpr int32_t const& __cordl_internal_get_m_InstanceID() const;

  constexpr int32_t& __cordl_internal_get_m_InstanceID();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr int32_t const& __cordl_internal_get_materialHashCode() const;

  constexpr int32_t& __cordl_internal_get_materialHashCode();

  constexpr void __cordl_internal_set_hashCode(int32_t value);

  constexpr void __cordl_internal_set_m_InstanceID(int32_t value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_materialHashCode(int32_t value);

  /// @brief Method .ctor, addr 0x312c004, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_instanceID, addr 0x312bfdc, size 0x28, virtual false, abstract: false, final false
  inline int32_t get_instanceID();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_Asset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_Asset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_Asset(TMP_Asset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_Asset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_Asset(TMP_Asset const&) = delete;

  /// @brief Field m_InstanceID, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_InstanceID;

  /// @brief Field hashCode, offset: 0x1c, size: 0x4, def value: None
  int32_t ___hashCode;

  /// @brief Field material, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field materialHashCode, offset: 0x28, size: 0x4, def value: None
  int32_t ___materialHashCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Asset, 0x30>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_Asset, ___m_InstanceID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Asset, ___hashCode) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Asset, ___material) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Asset, ___materialHashCode) == 0x28, "Offset mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_Asset);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Asset*, "TMPro", "TMP_Asset");
