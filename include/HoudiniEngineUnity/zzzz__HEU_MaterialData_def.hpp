#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_MaterialData_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_MaterialData)
namespace HoudiniEngineUnity {
struct HAPI_ImageInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_MaterialInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_NodeInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_ParmInfo;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct __HEU_MaterialData__Source;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct __HEU_MaterialData__Source;
}
namespace HoudiniEngineUnity {
class HEU_MaterialData;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_MaterialData__Source);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_MaterialData);
// Type: ::Source
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HEU_MaterialData::Source
struct CORDL_TYPE __HEU_MaterialData__Source {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_MaterialData__Source_Unwrapped
  enum struct ____HEU_MaterialData__Source_Unwrapped : int32_t {
    __E_DEFAULT = static_cast<int32_t>(0x0),
    __E_HOUDINI = static_cast<int32_t>(0x1),
    __E_UNITY = static_cast<int32_t>(0x2),
    __E_SUBSTANCE = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_MaterialData__Source_Unwrapped() const noexcept {
    return static_cast<____HEU_MaterialData__Source_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_MaterialData__Source();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_MaterialData__Source(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field DEFAULT value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_MaterialData__Source const DEFAULT;

  /// @brief Field HOUDINI value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_MaterialData__Source const HOUDINI;

  /// @brief Field SUBSTANCE value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::__HEU_MaterialData__Source const SUBSTANCE;

  /// @brief Field UNITY value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_MaterialData__Source const UNITY;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_MaterialData__Source, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_MaterialData__Source, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_MaterialData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_MaterialData*
class CORDL_TYPE HEU_MaterialData : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using Source = ::HoudiniEngineUnity::__HEU_MaterialData__Source;

  /// @brief Field _material, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__material, put = __cordl_internal_set__material))::UnityW<::UnityEngine::Material> _material;

  /// @brief Field _materialKey, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__materialKey, put = __cordl_internal_set__materialKey)) int32_t _materialKey;

  /// @brief Field _materialSource, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__materialSource, put = __cordl_internal_set__materialSource))::HoudiniEngineUnity::__HEU_MaterialData__Source _materialSource;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>*() noexcept;

  /// @brief Method GetMaterialAlpha, addr 0x230114c, size 0x1d8, virtual false, abstract: false, final false
  static inline bool GetMaterialAlpha(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID,
                                      ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*> parameters, float_t defaultValue, ByRef<float_t> alpha);

  /// @brief Method GetSupportedFileFormat, addr 0x2301324, size 0x124, virtual false, abstract: false, final false
  static inline ::StringW GetSupportedFileFormat(::HoudiniEngineUnity::HEU_SessionBase* session, ByRef<::HoudiniEngineUnity::HAPI_ImageInfo> imageInfo);

  /// @brief Method GetTextureFileNameFromMaterialParam, addr 0x2300a90, size 0x24c, virtual false, abstract: false, final false
  static inline ::StringW GetTextureFileNameFromMaterialParam(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID, ::HoudiniEngineUnity::HAPI_ParmInfo parmInfo);

  /// @brief Method IsEquivalentTo, addr 0x2301448, size 0x1c8, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_MaterialData* other);

  /// @brief Method IsExistingMaterial, addr 0x22ff4e8, size 0x14, virtual false, abstract: false, final false
  inline bool IsExistingMaterial();

  /// @brief Method IsTransparentMaterial, addr 0x230043c, size 0x30, virtual false, abstract: false, final false
  static inline bool IsTransparentMaterial(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID,
                                           ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*> parameters);

  static inline ::HoudiniEngineUnity::HEU_MaterialData* New_ctor();

  /// @brief Method UpdateMaterialFromHoudini, addr 0x22ff4fc, size 0xf40, virtual false, abstract: false, final false
  inline void UpdateMaterialFromHoudini(::HoudiniEngineUnity::HAPI_MaterialInfo materialInfo, ::StringW assetCacheFolderPath);

  /// @brief Method UseLegacyShaders, addr 0x23004b8, size 0x5d8, virtual false, abstract: false, final false
  inline void UseLegacyShaders(::HoudiniEngineUnity::HAPI_MaterialInfo materialInfo, ::StringW assetCacheFolderPath, ::HoudiniEngineUnity::HEU_SessionBase* session,
                               ::HoudiniEngineUnity::HAPI_NodeInfo nodeInfo, ::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo, ::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*> parmInfos);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material();

  constexpr int32_t const& __cordl_internal_get__materialKey() const;

  constexpr int32_t& __cordl_internal_get__materialKey();

  constexpr ::HoudiniEngineUnity::__HEU_MaterialData__Source const& __cordl_internal_get__materialSource() const;

  constexpr ::HoudiniEngineUnity::__HEU_MaterialData__Source& __cordl_internal_get__materialSource();

  constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__materialKey(int32_t value);

  constexpr void __cordl_internal_set__materialSource(::HoudiniEngineUnity::__HEU_MaterialData__Source value);

  /// @brief Method .ctor, addr 0x2301610, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_MaterialData__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_MaterialData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_MaterialData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_MaterialData(HEU_MaterialData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_MaterialData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_MaterialData(HEU_MaterialData const&) = delete;

  /// @brief Field _material, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____material;

  /// @brief Field _materialSource, offset: 0x20, size: 0x4, def value: None
  ::HoudiniEngineUnity::__HEU_MaterialData__Source ____materialSource;

  /// @brief Field _materialKey, offset: 0x24, size: 0x4, def value: None
  int32_t ____materialKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_MaterialData, 0x28>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_MaterialData, ____material) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_MaterialData, ____materialSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_MaterialData, ____materialKey) == 0x24, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_MaterialData__Source, "HoudiniEngineUnity", "HEU_MaterialData/Source");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_MaterialData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_MaterialData*, "HoudiniEngineUnity", "HEU_MaterialData");
