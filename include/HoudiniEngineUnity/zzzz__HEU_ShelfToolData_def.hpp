#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_ShelfToolData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_ShelfToolData)
namespace HoudiniEngineUnity {
struct HEU_ShelfToolData_ToolType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_ShelfToolData_ToolType;
}
namespace HoudiniEngineUnity {
class HEU_ShelfToolData;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HEU_ShelfToolData_ToolType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_ShelfToolData);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_ShelfToolData/ToolType
struct CORDL_TYPE HEU_ShelfToolData_ToolType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_ShelfToolData_ToolType_Unwrapped
  enum struct __HEU_ShelfToolData_ToolType_Unwrapped : int32_t {
    __E_GENERATOR = static_cast<int32_t>(0x0),
    __E_OPERATOR_SINGLE = static_cast<int32_t>(0x1),
    __E_OPERATOR_MULTI = static_cast<int32_t>(0x2),
    __E_BATCH = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_ShelfToolData_ToolType_Unwrapped() const noexcept {
    return static_cast<__HEU_ShelfToolData_ToolType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ShelfToolData_ToolType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_ShelfToolData_ToolType(int32_t value__) noexcept;

  /// @brief Field BATCH value: I32(3)
  static ::HoudiniEngineUnity::HEU_ShelfToolData_ToolType const BATCH;

  /// @brief Field GENERATOR value: I32(0)
  static ::HoudiniEngineUnity::HEU_ShelfToolData_ToolType const GENERATOR;

  /// @brief Field OPERATOR_MULTI value: I32(2)
  static ::HoudiniEngineUnity::HEU_ShelfToolData_ToolType const OPERATOR_MULTI;

  /// @brief Field OPERATOR_SINGLE value: I32(1)
  static ::HoudiniEngineUnity::HEU_ShelfToolData_ToolType const OPERATOR_SINGLE;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11843 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_ShelfToolData_ToolType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ShelfToolData_ToolType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.HEU_ShelfToolData::ToolType, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_ShelfToolData
class CORDL_TYPE HEU_ShelfToolData : public ::System::Object {
public:
  // Declarations
  using ToolType = ::HoudiniEngineUnity::HEU_ShelfToolData_ToolType;

  /// @brief Field _assetPath, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__assetPath, put = __cordl_internal_set__assetPath)) ::StringW _assetPath;

  /// @brief Field _helpURL, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__helpURL, put = __cordl_internal_set__helpURL)) ::StringW _helpURL;

  /// @brief Field _iconPath, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__iconPath, put = __cordl_internal_set__iconPath)) ::StringW _iconPath;

  /// @brief Field _jsonPath, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__jsonPath, put = __cordl_internal_set__jsonPath)) ::StringW _jsonPath;

  /// @brief Field _name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  /// @brief Field _targets, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__targets, put = __cordl_internal_set__targets)) ::ArrayW<::StringW, ::Array<::StringW>*> _targets;

  /// @brief Field _toolTip, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__toolTip, put = __cordl_internal_set__toolTip)) ::StringW _toolTip;

  /// @brief Field _toolType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__toolType, put = __cordl_internal_set__toolType)) ::HoudiniEngineUnity::HEU_ShelfToolData_ToolType _toolType;

  static inline ::HoudiniEngineUnity::HEU_ShelfToolData* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__assetPath() const;

  constexpr ::StringW& __cordl_internal_get__assetPath();

  constexpr ::StringW const& __cordl_internal_get__helpURL() const;

  constexpr ::StringW& __cordl_internal_get__helpURL();

  constexpr ::StringW const& __cordl_internal_get__iconPath() const;

  constexpr ::StringW& __cordl_internal_get__iconPath();

  constexpr ::StringW const& __cordl_internal_get__jsonPath() const;

  constexpr ::StringW& __cordl_internal_get__jsonPath();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__targets() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__targets();

  constexpr ::StringW const& __cordl_internal_get__toolTip() const;

  constexpr ::StringW& __cordl_internal_get__toolTip();

  constexpr ::HoudiniEngineUnity::HEU_ShelfToolData_ToolType const& __cordl_internal_get__toolType() const;

  constexpr ::HoudiniEngineUnity::HEU_ShelfToolData_ToolType& __cordl_internal_get__toolType();

  constexpr void __cordl_internal_set__assetPath(::StringW value);

  constexpr void __cordl_internal_set__helpURL(::StringW value);

  constexpr void __cordl_internal_set__iconPath(::StringW value);

  constexpr void __cordl_internal_set__jsonPath(::StringW value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__targets(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__toolTip(::StringW value);

  constexpr void __cordl_internal_set__toolType(::HoudiniEngineUnity::HEU_ShelfToolData_ToolType value);

  /// @brief Method .ctor, addr 0x3a9325c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ShelfToolData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_ShelfToolData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_ShelfToolData(HEU_ShelfToolData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ShelfToolData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_ShelfToolData(HEU_ShelfToolData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11844 };

  /// @brief Field _name, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _toolType, offset: 0x18, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_ShelfToolData_ToolType ____toolType;

  /// @brief Field _toolTip, offset: 0x20, size: 0x8, def value: None
  ::StringW ____toolTip;

  /// @brief Field _iconPath, offset: 0x28, size: 0x8, def value: None
  ::StringW ____iconPath;

  /// @brief Field _assetPath, offset: 0x30, size: 0x8, def value: None
  ::StringW ____assetPath;

  /// @brief Field _helpURL, offset: 0x38, size: 0x8, def value: None
  ::StringW ____helpURL;

  /// @brief Field _targets, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____targets;

  /// @brief Field _jsonPath, offset: 0x48, size: 0x8, def value: None
  ::StringW ____jsonPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_ShelfToolData, ____name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ShelfToolData, ____toolType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ShelfToolData, ____toolTip) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ShelfToolData, ____iconPath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ShelfToolData, ____assetPath) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ShelfToolData, ____helpURL) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ShelfToolData, ____targets) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ShelfToolData, ____jsonPath) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ShelfToolData, 0x50>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ShelfToolData_ToolType, "HoudiniEngineUnity", "HEU_ShelfToolData/ToolType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ShelfToolData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ShelfToolData*, "HoudiniEngineUnity", "HEU_ShelfToolData");
