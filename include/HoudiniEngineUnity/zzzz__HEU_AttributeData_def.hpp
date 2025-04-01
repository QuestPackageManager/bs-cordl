#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_AttributeData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_AttributeData)
namespace HoudiniEngineUnity {
struct HEU_AttributeData_AttributeState;
}
namespace HoudiniEngineUnity {
struct HEU_AttributeData_AttributeType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_AttributeData_AttributeState;
}
namespace HoudiniEngineUnity {
struct HEU_AttributeData_AttributeType;
}
namespace HoudiniEngineUnity {
class HEU_AttributeData;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HEU_AttributeData_AttributeState);
MARK_VAL_T(::HoudiniEngineUnity::HEU_AttributeData_AttributeType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AttributeData);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_AttributeData/AttributeType
struct CORDL_TYPE HEU_AttributeData_AttributeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_AttributeData_AttributeType_Unwrapped
  enum struct __HEU_AttributeData_AttributeType_Unwrapped : int32_t {
    __E_UNDEFINED = static_cast<int32_t>(0xffffffff),
    __E_BOOL = static_cast<int32_t>(0x0),
    __E_INT = static_cast<int32_t>(0x1),
    __E_FLOAT = static_cast<int32_t>(0x2),
    __E_STRING = static_cast<int32_t>(0x3),
    __E_MAX = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_AttributeData_AttributeType_Unwrapped() const noexcept {
    return static_cast<__HEU_AttributeData_AttributeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AttributeData_AttributeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_AttributeData_AttributeType(int32_t value__) noexcept;

  /// @brief Field BOOL value: I32(0)
  static ::HoudiniEngineUnity::HEU_AttributeData_AttributeType const BOOL;

  /// @brief Field FLOAT value: I32(2)
  static ::HoudiniEngineUnity::HEU_AttributeData_AttributeType const FLOAT;

  /// @brief Field INT value: I32(1)
  static ::HoudiniEngineUnity::HEU_AttributeData_AttributeType const INT;

  /// @brief Field MAX value: I32(4)
  static ::HoudiniEngineUnity::HEU_AttributeData_AttributeType const MAX;

  /// @brief Field STRING value: I32(3)
  static ::HoudiniEngineUnity::HEU_AttributeData_AttributeType const STRING;

  /// @brief Field UNDEFINED value: I32(-1)
  static ::HoudiniEngineUnity::HEU_AttributeData_AttributeType const UNDEFINED;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11648 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributeData_AttributeType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AttributeData_AttributeType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_AttributeData/AttributeState
struct CORDL_TYPE HEU_AttributeData_AttributeState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_AttributeData_AttributeState_Unwrapped
  enum struct __HEU_AttributeData_AttributeState_Unwrapped : int32_t {
    __E_INVALID = static_cast<int32_t>(0x0),
    __E_SYNCED = static_cast<int32_t>(0x1),
    __E_LOCAL_DIRTY = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_AttributeData_AttributeState_Unwrapped() const noexcept {
    return static_cast<__HEU_AttributeData_AttributeState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AttributeData_AttributeState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_AttributeData_AttributeState(int32_t value__) noexcept;

  /// @brief Field INVALID value: I32(0)
  static ::HoudiniEngineUnity::HEU_AttributeData_AttributeState const INVALID;

  /// @brief Field LOCAL_DIRTY value: I32(2)
  static ::HoudiniEngineUnity::HEU_AttributeData_AttributeState const LOCAL_DIRTY;

  /// @brief Field SYNCED value: I32(1)
  static ::HoudiniEngineUnity::HEU_AttributeData_AttributeState const SYNCED;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11649 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributeData_AttributeState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AttributeData_AttributeState, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.HAPI_AttributeInfo, HoudiniEngineUnity.HEU_AttributeData::AttributeState, HoudiniEngineUnity.HEU_AttributeData::AttributeType, HoudiniEngineUnity.IEquivable`1<T>,
// System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_AttributeData
class CORDL_TYPE HEU_AttributeData : public ::System::Object {
public:
  // Declarations
  using AttributeState = ::HoudiniEngineUnity::HEU_AttributeData_AttributeState;

  using AttributeType = ::HoudiniEngineUnity::HEU_AttributeData_AttributeType;

  /// @brief Field _attributeInfo, offset 0x10, size 0x28
  __declspec(property(get = __cordl_internal_get__attributeInfo, put = __cordl_internal_set__attributeInfo)) ::HoudiniEngineUnity::HAPI_AttributeInfo _attributeInfo;

  /// @brief Field _attributeState, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__attributeState, put = __cordl_internal_set__attributeState)) ::HoudiniEngineUnity::HEU_AttributeData_AttributeState _attributeState;

  /// @brief Field _attributeType, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__attributeType, put = __cordl_internal_set__attributeType)) ::HoudiniEngineUnity::HEU_AttributeData_AttributeType _attributeType;

  /// @brief Field _floatValues, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__floatValues, put = __cordl_internal_set__floatValues)) ::ArrayW<float_t, ::Array<float_t>*> _floatValues;

  /// @brief Field _intValues, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__intValues, put = __cordl_internal_set__intValues)) ::ArrayW<int32_t, ::Array<int32_t>*> _intValues;

  /// @brief Field _name, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  /// @brief Field _stringValues, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__stringValues, put = __cordl_internal_set__stringValues)) ::ArrayW<::StringW, ::Array<::StringW>*> _stringValues;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributeData*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributeData*>*() noexcept;

  /// @brief Method CopyValuesTo, addr 0x3a31338, size 0x124, virtual false, abstract: false, final false
  inline void CopyValuesTo(::HoudiniEngineUnity::HEU_AttributeData* destAttrData);

  /// @brief Method IsColorAttribute, addr 0x3a312c8, size 0x70, virtual false, abstract: false, final false
  inline bool IsColorAttribute();

  /// @brief Method IsEquivalentTo, addr 0x3a3145c, size 0x328, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_AttributeData* other);

  static inline ::HoudiniEngineUnity::HEU_AttributeData* New_ctor();

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& __cordl_internal_get__attributeInfo() const;

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& __cordl_internal_get__attributeInfo();

  constexpr ::HoudiniEngineUnity::HEU_AttributeData_AttributeState const& __cordl_internal_get__attributeState() const;

  constexpr ::HoudiniEngineUnity::HEU_AttributeData_AttributeState& __cordl_internal_get__attributeState();

  constexpr ::HoudiniEngineUnity::HEU_AttributeData_AttributeType const& __cordl_internal_get__attributeType() const;

  constexpr ::HoudiniEngineUnity::HEU_AttributeData_AttributeType& __cordl_internal_get__attributeType();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__floatValues() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__floatValues();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__intValues() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__intValues();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__stringValues() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__stringValues();

  constexpr void __cordl_internal_set__attributeInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value);

  constexpr void __cordl_internal_set__attributeState(::HoudiniEngineUnity::HEU_AttributeData_AttributeState value);

  constexpr void __cordl_internal_set__attributeType(::HoudiniEngineUnity::HEU_AttributeData_AttributeType value);

  constexpr void __cordl_internal_set__floatValues(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__intValues(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__stringValues(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x3a31784, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributeData*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributeData*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_AttributeData__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AttributeData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_AttributeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_AttributeData(HEU_AttributeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AttributeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_AttributeData(HEU_AttributeData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11650 };

  /// @brief Field _attributeInfo, offset: 0x10, size: 0x28, def value: None
  ::HoudiniEngineUnity::HAPI_AttributeInfo ____attributeInfo;

  /// @brief Field _name, offset: 0x38, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _attributeType, offset: 0x40, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_AttributeData_AttributeType ____attributeType;

  /// @brief Field _intValues, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____intValues;

  /// @brief Field _floatValues, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____floatValues;

  /// @brief Field _stringValues, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____stringValues;

  /// @brief Field _attributeState, offset: 0x60, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_AttributeData_AttributeState ____attributeState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributeData, ____attributeInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributeData, ____name) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributeData, ____attributeType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributeData, ____intValues) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributeData, ____floatValues) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributeData, ____stringValues) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributeData, ____attributeState) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AttributeData, 0x68>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AttributeData_AttributeState, "HoudiniEngineUnity", "HEU_AttributeData/AttributeState");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AttributeData_AttributeType, "HoudiniEngineUnity", "HEU_AttributeData/AttributeType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AttributeData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AttributeData*, "HoudiniEngineUnity", "HEU_AttributeData");
