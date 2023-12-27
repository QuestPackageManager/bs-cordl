#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextAsset)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextAsset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextAsset);
// Type: UnityEngine.TextCore.Text::TextAsset
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13724))
// CS Name: ::UnityEngine.TextCore.Text::TextAsset*
class CORDL_TYPE TextAsset : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field m_Version, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Version, put = __set_m_Version))::StringW m_Version;

  /// @brief Field m_InstanceID, offset 0x20, size 0x4
  __declspec(property(get = __get_m_InstanceID, put = __set_m_InstanceID)) int32_t m_InstanceID;

  /// @brief Field m_HashCode, offset 0x24, size 0x4
  __declspec(property(get = __get_m_HashCode, put = __set_m_HashCode)) int32_t m_HashCode;

  /// @brief Field m_Material, offset 0x28, size 0x8
  __declspec(property(get = __get_m_Material, put = __set_m_Material))::UnityEngine::Material* m_Material;

  /// @brief Field m_MaterialHashCode, offset 0x30, size 0x4
  __declspec(property(get = __get_m_MaterialHashCode, put = __set_m_MaterialHashCode)) int32_t m_MaterialHashCode;

  __declspec(property(get = get_version, put = set_version))::StringW version;

  __declspec(property(get = get_instanceID)) int32_t instanceID;

  __declspec(property(get = get_hashCode, put = set_hashCode)) int32_t hashCode;

  __declspec(property(get = get_material, put = set_material))::UnityEngine::Material* material;

  __declspec(property(get = get_materialHashCode, put = set_materialHashCode)) int32_t materialHashCode;

  constexpr ::StringW& __get_m_Version();

  constexpr ::StringW const& __get_m_Version() const;

  constexpr void __set_m_Version(::StringW value);

  constexpr int32_t& __get_m_InstanceID();

  constexpr int32_t const& __get_m_InstanceID() const;

  constexpr void __set_m_InstanceID(int32_t value);

  constexpr int32_t& __get_m_HashCode();

  constexpr int32_t const& __get_m_HashCode() const;

  constexpr void __set_m_HashCode(int32_t value);

  constexpr ::UnityEngine::Material*& __get_m_Material();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get_m_Material() const;

  constexpr void __set_m_Material(::UnityEngine::Material* value);

  constexpr int32_t& __get_m_MaterialHashCode();

  constexpr int32_t const& __get_m_MaterialHashCode() const;

  constexpr void __set_m_MaterialHashCode(int32_t value);

  /// @brief Method get_version addr 0x2d4a728 size 0x8 virtual false final false
  inline ::StringW get_version();

  /// @brief Method set_version addr 0x2d4a730 size 0x8 virtual false final false
  inline void set_version(::StringW value);

  /// @brief Method get_instanceID addr 0x2d4a320 size 0x28 virtual false final false
  inline int32_t get_instanceID();

  /// @brief Method get_hashCode addr 0x2d4a348 size 0x30 virtual false final false
  inline int32_t get_hashCode();

  /// @brief Method set_hashCode addr 0x2d4a738 size 0x8 virtual false final false
  inline void set_hashCode(int32_t value);

  /// @brief Method get_material addr 0x2d4a740 size 0x8 virtual false final false
  inline ::UnityEngine::Material* get_material();

  /// @brief Method set_material addr 0x2d4a748 size 0x8 virtual false final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method get_materialHashCode addr 0x2d4a750 size 0x98 virtual false final false
  inline int32_t get_materialHashCode();

  /// @brief Method set_materialHashCode addr 0x2d4a7e8 size 0x8 virtual false final false
  inline void set_materialHashCode(int32_t value);

  static inline ::UnityEngine::TextCore::Text::TextAsset* New_ctor();

  /// @brief Method .ctor addr 0x2d4a7f0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TextAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextAsset(TextAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextAsset(TextAsset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextAsset();

public:
  /// @brief Field m_Version, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_Version;

  /// @brief Field m_InstanceID, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_InstanceID;

  /// @brief Field m_HashCode, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_HashCode;

  /// @brief Field m_Material, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Material* ___m_Material;

  /// @brief Field m_MaterialHashCode, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_MaterialHashCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextAsset, 0x38>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextAsset*, "UnityEngine.TextCore.Text", "TextAsset");
