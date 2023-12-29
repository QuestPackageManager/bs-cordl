#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_ShelfToolData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_ShelfToolData)
namespace HoudiniEngineUnity {
struct __HEU_ShelfToolData__ToolType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct __HEU_ShelfToolData__ToolType;
}
namespace HoudiniEngineUnity {
class HEU_ShelfToolData;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_ShelfToolData);
// Type: ::ToolType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9783))
// CS Name: ::HEU_ShelfToolData::ToolType
struct CORDL_TYPE __HEU_ShelfToolData__ToolType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_ShelfToolData__ToolType_Unwrapped
  enum struct ____HEU_ShelfToolData__ToolType_Unwrapped : int32_t {
    __E_GENERATOR = static_cast<int32_t>(0x0),
    __E_OPERATOR_SINGLE = static_cast<int32_t>(0x1),
    __E_OPERATOR_MULTI = static_cast<int32_t>(0x2),
    __E_BATCH = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_ShelfToolData__ToolType_Unwrapped() const noexcept {
    return static_cast<____HEU_ShelfToolData__ToolType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_ShelfToolData__ToolType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_ShelfToolData__ToolType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field GENERATOR value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType const GENERATOR;

  /// @brief Field OPERATOR_SINGLE value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType const OPERATOR_SINGLE;

  /// @brief Field OPERATOR_MULTI value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType const OPERATOR_MULTI;

  /// @brief Field BATCH value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType const BATCH;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_ShelfToolData
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9783))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9784))
// CS Name: ::HoudiniEngineUnity::HEU_ShelfToolData*
class CORDL_TYPE HEU_ShelfToolData : public ::System::Object {
public:
  // Declarations
  using ToolType = ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType;

  /// @brief Field _name, offset 0x10, size 0x8
  __declspec(property(get = __get__name, put = __set__name))::StringW _name;

  /// @brief Field _toolType, offset 0x18, size 0x4
  __declspec(property(get = __get__toolType, put = __set__toolType))::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType _toolType;

  /// @brief Field _toolTip, offset 0x20, size 0x8
  __declspec(property(get = __get__toolTip, put = __set__toolTip))::StringW _toolTip;

  /// @brief Field _iconPath, offset 0x28, size 0x8
  __declspec(property(get = __get__iconPath, put = __set__iconPath))::StringW _iconPath;

  /// @brief Field _assetPath, offset 0x30, size 0x8
  __declspec(property(get = __get__assetPath, put = __set__assetPath))::StringW _assetPath;

  /// @brief Field _helpURL, offset 0x38, size 0x8
  __declspec(property(get = __get__helpURL, put = __set__helpURL))::StringW _helpURL;

  /// @brief Field _targets, offset 0x40, size 0x8
  __declspec(property(get = __get__targets, put = __set__targets))::ArrayW<::StringW, ::Array<::StringW>*> _targets;

  /// @brief Field _jsonPath, offset 0x48, size 0x8
  __declspec(property(get = __get__jsonPath, put = __set__jsonPath))::StringW _jsonPath;

  constexpr ::StringW& __get__name();

  constexpr ::StringW const& __get__name() const;

  constexpr void __set__name(::StringW value);

  constexpr ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType& __get__toolType();

  constexpr ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType const& __get__toolType() const;

  constexpr void __set__toolType(::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType value);

  constexpr ::StringW& __get__toolTip();

  constexpr ::StringW const& __get__toolTip() const;

  constexpr void __set__toolTip(::StringW value);

  constexpr ::StringW& __get__iconPath();

  constexpr ::StringW const& __get__iconPath() const;

  constexpr void __set__iconPath(::StringW value);

  constexpr ::StringW& __get__assetPath();

  constexpr ::StringW const& __get__assetPath() const;

  constexpr void __set__assetPath(::StringW value);

  constexpr ::StringW& __get__helpURL();

  constexpr ::StringW const& __get__helpURL() const;

  constexpr void __set__helpURL(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__targets();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__targets() const;

  constexpr void __set__targets(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::StringW& __get__jsonPath();

  constexpr ::StringW const& __get__jsonPath() const;

  constexpr void __set__jsonPath(::StringW value);

  static inline ::HoudiniEngineUnity::HEU_ShelfToolData* New_ctor();

  /// @brief Method .ctor addr 0x2078d00 size 0x5c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ShelfToolData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_ShelfToolData(HEU_ShelfToolData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ShelfToolData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_ShelfToolData(HEU_ShelfToolData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ShelfToolData();

public:
  /// @brief Field _name, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _toolType, offset: 0x18, size: 0x4, def value: None
  ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType ____toolType;

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
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ShelfToolData, 0x50>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ShelfToolData, ____name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ShelfToolData, ____toolType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ShelfToolData, ____toolTip) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ShelfToolData, ____iconPath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ShelfToolData, ____assetPath) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ShelfToolData, ____helpURL) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ShelfToolData, ____targets) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ShelfToolData, ____jsonPath) == 0x48, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType, "HoudiniEngineUnity", "HEU_ShelfToolData/ToolType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ShelfToolData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ShelfToolData*, "HoudiniEngineUnity", "HEU_ShelfToolData");
