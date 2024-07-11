#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_AttributeData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AttributeData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_AttributeData)
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct __HEU_AttributeData__AttributeState;
}
namespace HoudiniEngineUnity {
struct __HEU_AttributeData__AttributeType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct __HEU_AttributeData__AttributeState;
}
namespace HoudiniEngineUnity {
struct __HEU_AttributeData__AttributeType;
}
namespace HoudiniEngineUnity {
class HEU_AttributeData;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_AttributeData__AttributeState);
MARK_VAL_T(::HoudiniEngineUnity::__HEU_AttributeData__AttributeType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AttributeData);
// Type: ::AttributeType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HEU_AttributeData::AttributeType
struct CORDL_TYPE __HEU_AttributeData__AttributeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_AttributeData__AttributeType_Unwrapped
  enum struct ____HEU_AttributeData__AttributeType_Unwrapped : int32_t {
    __E_UNDEFINED = static_cast<int32_t>(0xffffffff),
    __E_BOOL = static_cast<int32_t>(0x0),
    __E_INT = static_cast<int32_t>(0x1),
    __E_FLOAT = static_cast<int32_t>(0x2),
    __E_STRING = static_cast<int32_t>(0x3),
    __E_MAX = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_AttributeData__AttributeType_Unwrapped() const noexcept {
    return static_cast<____HEU_AttributeData__AttributeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_AttributeData__AttributeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_AttributeData__AttributeType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BOOL value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType const BOOL;

  /// @brief Field FLOAT value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType const FLOAT;

  /// @brief Field INT value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType const INT;

  /// @brief Field MAX value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType const MAX;

  /// @brief Field STRING value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType const STRING;

  /// @brief Field UNDEFINED value: static_cast<int32_t>(0xffffffff)
  static ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType const UNDEFINED;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_AttributeData__AttributeType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_AttributeData__AttributeType, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: ::AttributeState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HEU_AttributeData::AttributeState
struct CORDL_TYPE __HEU_AttributeData__AttributeState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_AttributeData__AttributeState_Unwrapped
  enum struct ____HEU_AttributeData__AttributeState_Unwrapped : int32_t {
    __E_INVALID = static_cast<int32_t>(0x0),
    __E_SYNCED = static_cast<int32_t>(0x1),
    __E_LOCAL_DIRTY = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_AttributeData__AttributeState_Unwrapped() const noexcept {
    return static_cast<____HEU_AttributeData__AttributeState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_AttributeData__AttributeState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_AttributeData__AttributeState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field INVALID value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_AttributeData__AttributeState const INVALID;

  /// @brief Field LOCAL_DIRTY value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_AttributeData__AttributeState const LOCAL_DIRTY;

  /// @brief Field SYNCED value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_AttributeData__AttributeState const SYNCED;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_AttributeData__AttributeState, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_AttributeData__AttributeState, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_AttributeData
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 100, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_AttributeData*
class CORDL_TYPE HEU_AttributeData : public ::System::Object {
public:
  // Declarations
  using AttributeState = ::HoudiniEngineUnity::__HEU_AttributeData__AttributeState;

  using AttributeType = ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType;

  /// @brief Field _attributeInfo, offset 0x10, size 0x28
  __declspec(property(get = __cordl_internal_get__attributeInfo, put = __cordl_internal_set__attributeInfo))::HoudiniEngineUnity::HAPI_AttributeInfo _attributeInfo;

  /// @brief Field _attributeState, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__attributeState, put = __cordl_internal_set__attributeState))::HoudiniEngineUnity::__HEU_AttributeData__AttributeState _attributeState;

  /// @brief Field _attributeType, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__attributeType, put = __cordl_internal_set__attributeType))::HoudiniEngineUnity::__HEU_AttributeData__AttributeType _attributeType;

  /// @brief Field _floatValues, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__floatValues, put = __cordl_internal_set__floatValues))::ArrayW<float_t, ::Array<float_t>*> _floatValues;

  /// @brief Field _intValues, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__intValues, put = __cordl_internal_set__intValues))::ArrayW<int32_t, ::Array<int32_t>*> _intValues;

  /// @brief Field _name, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name))::StringW _name;

  /// @brief Field _stringValues, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__stringValues, put = __cordl_internal_set__stringValues))::ArrayW<::StringW, ::Array<::StringW>*> _stringValues;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributeData*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributeData*>*() noexcept;

  /// @brief Method CopyValuesTo, addr 0x258f924, size 0x124, virtual false, abstract: false, final false
  inline void CopyValuesTo(::HoudiniEngineUnity::HEU_AttributeData* destAttrData);

  /// @brief Method IsColorAttribute, addr 0x258f8b4, size 0x70, virtual false, abstract: false, final false
  inline bool IsColorAttribute();

  /// @brief Method IsEquivalentTo, addr 0x258fa48, size 0x328, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_AttributeData* other);

  static inline ::HoudiniEngineUnity::HEU_AttributeData* New_ctor();

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& __cordl_internal_get__attributeInfo() const;

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& __cordl_internal_get__attributeInfo();

  constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeState const& __cordl_internal_get__attributeState() const;

  constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeState& __cordl_internal_get__attributeState();

  constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType const& __cordl_internal_get__attributeType() const;

  constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType& __cordl_internal_get__attributeType();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__floatValues() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__floatValues();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__intValues() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__intValues();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__stringValues() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__stringValues();

  constexpr void __cordl_internal_set__attributeInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value);

  constexpr void __cordl_internal_set__attributeState(::HoudiniEngineUnity::__HEU_AttributeData__AttributeState value);

  constexpr void __cordl_internal_set__attributeType(::HoudiniEngineUnity::__HEU_AttributeData__AttributeType value);

  constexpr void __cordl_internal_set__floatValues(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__intValues(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__stringValues(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x258fd70, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _attributeInfo, offset: 0x10, size: 0x28, def value: None
  ::HoudiniEngineUnity::HAPI_AttributeInfo ____attributeInfo;

  /// @brief Field _name, offset: 0x38, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _attributeType, offset: 0x40, size: 0x4, def value: None
  ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType ____attributeType;

  /// @brief Field _intValues, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____intValues;

  /// @brief Field _floatValues, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____floatValues;

  /// @brief Field _stringValues, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____stringValues;

  /// @brief Field _attributeState, offset: 0x60, size: 0x4, def value: None
  ::HoudiniEngineUnity::__HEU_AttributeData__AttributeState ____attributeState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AttributeData, 0x68>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributeData, ____attributeInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributeData, ____name) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributeData, ____attributeType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributeData, ____intValues) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributeData, ____floatValues) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributeData, ____stringValues) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributeData, ____attributeState) == 0x60, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_AttributeData__AttributeState, "HoudiniEngineUnity", "HEU_AttributeData/AttributeState");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_AttributeData__AttributeType, "HoudiniEngineUnity", "HEU_AttributeData/AttributeType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AttributeData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AttributeData*, "HoudiniEngineUnity", "HEU_AttributeData");
