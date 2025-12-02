#pragma once
// IWYU pragma private; include "TMPro/TMP_Asset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/zzzz__FaceInfo_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_Asset)
namespace UnityEngine::TextCore {
struct FaceInfo;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace TMPro {
class TMP_Asset;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_Asset);
// Dependencies UnityEngine.ScriptableObject, UnityEngine.TextCore.FaceInfo
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_Asset
class CORDL_TYPE TMP_Asset : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_faceInfo, put = set_faceInfo)) ::UnityEngine::TextCore::FaceInfo faceInfo;

  __declspec(property(get = get_hashCode, put = set_hashCode)) int32_t hashCode;

  __declspec(property(get = get_instanceID)) int32_t instanceID;

  /// @brief Field m_FaceInfo, offset 0x28, size 0x60
  __declspec(property(get = __cordl_internal_get_m_FaceInfo, put = __cordl_internal_set_m_FaceInfo)) ::UnityEngine::TextCore::FaceInfo m_FaceInfo;

  /// @brief Field m_HashCode, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HashCode, put = __cordl_internal_set_m_HashCode)) int32_t m_HashCode;

  /// @brief Field m_InstanceID, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InstanceID, put = __cordl_internal_set_m_InstanceID)) int32_t m_InstanceID;

  /// @brief Field m_Material, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Material, put = __cordl_internal_set_m_Material)) ::UnityW<::UnityEngine::Material> m_Material;

  /// @brief Field m_MaterialHashCode, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaterialHashCode, put = __cordl_internal_set_m_MaterialHashCode)) int32_t m_MaterialHashCode;

  /// @brief Field m_Version, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) ::StringW m_Version;

  __declspec(property(get = get_material, put = set_material)) ::UnityW<::UnityEngine::Material> material;

  __declspec(property(get = get_materialHashCode, put = set_materialHashCode)) int32_t materialHashCode;

  __declspec(property(get = get_version, put = set_version)) ::StringW version;

  static inline ::TMPro::TMP_Asset* New_ctor();

  constexpr ::UnityEngine::TextCore::FaceInfo const& __cordl_internal_get_m_FaceInfo() const;

  constexpr ::UnityEngine::TextCore::FaceInfo& __cordl_internal_get_m_FaceInfo();

  constexpr int32_t const& __cordl_internal_get_m_HashCode() const;

  constexpr int32_t& __cordl_internal_get_m_HashCode();

  constexpr int32_t const& __cordl_internal_get_m_InstanceID() const;

  constexpr int32_t& __cordl_internal_get_m_InstanceID();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_Material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_Material();

  constexpr int32_t const& __cordl_internal_get_m_MaterialHashCode() const;

  constexpr int32_t& __cordl_internal_get_m_MaterialHashCode();

  constexpr ::StringW const& __cordl_internal_get_m_Version() const;

  constexpr ::StringW& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_FaceInfo(::UnityEngine::TextCore::FaceInfo value);

  constexpr void __cordl_internal_set_m_HashCode(int32_t value);

  constexpr void __cordl_internal_set_m_InstanceID(int32_t value);

  constexpr void __cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_MaterialHashCode(int32_t value);

  constexpr void __cordl_internal_set_m_Version(::StringW value);

  /// @brief Method .ctor, addr 0x6729ed0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_faceInfo, addr 0x6729da8, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::FaceInfo get_faceInfo();

  /// @brief Method get_hashCode, addr 0x6729d24, size 0x7c, virtual false, abstract: false, final false
  inline int32_t get_hashCode();

  /// @brief Method get_instanceID, addr 0x6729cfc, size 0x28, virtual false, abstract: false, final false
  inline int32_t get_instanceID();

  /// @brief Method get_material, addr 0x6729dc4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_material();

  /// @brief Method get_materialHashCode, addr 0x6729dd4, size 0xf4, virtual false, abstract: false, final false
  inline int32_t get_materialHashCode();

  /// @brief Method get_version, addr 0x6729cec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_version();

  /// @brief Method set_faceInfo, addr 0x6729db8, size 0xc, virtual false, abstract: false, final false
  inline void set_faceInfo(::UnityEngine::TextCore::FaceInfo value);

  /// @brief Method set_hashCode, addr 0x6729da0, size 0x8, virtual false, abstract: false, final false
  inline void set_hashCode(int32_t value);

  /// @brief Method set_material, addr 0x6729dcc, size 0x8, virtual false, abstract: false, final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method set_materialHashCode, addr 0x6729ec8, size 0x8, virtual false, abstract: false, final false
  inline void set_materialHashCode(int32_t value);

  /// @brief Method set_version, addr 0x6729cf4, size 0x8, virtual false, abstract: false, final false
  inline void set_version(::StringW value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15838 };

  /// @brief Field m_Version, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_Version;

  /// @brief Field m_InstanceID, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_InstanceID;

  /// @brief Field m_HashCode, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_HashCode;

  /// @brief Field m_FaceInfo, offset: 0x28, size: 0x60, def value: None
  ::UnityEngine::TextCore::FaceInfo ___m_FaceInfo;

  /// @brief Field m_Material, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_Material;

  /// @brief Field m_MaterialHashCode, offset: 0x90, size: 0x4, def value: None
  int32_t ___m_MaterialHashCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_Asset, ___m_Version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Asset, ___m_InstanceID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Asset, ___m_HashCode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Asset, ___m_FaceInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Asset, ___m_Material) == 0x88, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_Asset, ___m_MaterialHashCode) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_Asset, 0x98>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_Asset);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Asset*, "TMPro", "TMP_Asset");
