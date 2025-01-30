#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_OutputAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeOwner_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_StorageType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_OutputAttribute)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_OutputAttribute;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_OutputAttribute);
// Dependencies HoudiniEngineUnity.HAPI_AttributeOwner, HoudiniEngineUnity.HAPI_StorageType, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_OutputAttribute
class CORDL_TYPE HEU_OutputAttribute : public ::System::Object {
public:
  // Declarations
  /// @brief Field _class, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__class, put = __cordl_internal_set__class)) ::HoudiniEngineUnity::HAPI_AttributeOwner _class;

  /// @brief Field _count, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int32_t _count;

  /// @brief Field _floatValues, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__floatValues, put = __cordl_internal_set__floatValues)) ::ArrayW<float_t, ::Array<float_t>*> _floatValues;

  /// @brief Field _intValues, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__intValues, put = __cordl_internal_set__intValues)) ::ArrayW<int32_t, ::Array<int32_t>*> _intValues;

  /// @brief Field _name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  /// @brief Field _stringValues, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__stringValues, put = __cordl_internal_set__stringValues)) ::ArrayW<::StringW, ::Array<::StringW>*> _stringValues;

  /// @brief Field _tupleSize, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__tupleSize, put = __cordl_internal_set__tupleSize)) int32_t _tupleSize;

  /// @brief Field _type, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::HoudiniEngineUnity::HAPI_StorageType _type;

  static inline ::HoudiniEngineUnity::HEU_OutputAttribute* New_ctor();

  constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner const& __cordl_internal_get__class() const;

  constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner& __cordl_internal_get__class();

  constexpr int32_t const& __cordl_internal_get__count() const;

  constexpr int32_t& __cordl_internal_get__count();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__floatValues() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__floatValues();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__intValues() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__intValues();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__stringValues() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__stringValues();

  constexpr int32_t const& __cordl_internal_get__tupleSize() const;

  constexpr int32_t& __cordl_internal_get__tupleSize();

  constexpr ::HoudiniEngineUnity::HAPI_StorageType const& __cordl_internal_get__type() const;

  constexpr ::HoudiniEngineUnity::HAPI_StorageType& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__class(::HoudiniEngineUnity::HAPI_AttributeOwner value);

  constexpr void __cordl_internal_set__count(int32_t value);

  constexpr void __cordl_internal_set__floatValues(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__intValues(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__stringValues(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__tupleSize(int32_t value);

  constexpr void __cordl_internal_set__type(::HoudiniEngineUnity::HAPI_StorageType value);

  /// @brief Method .ctor, addr 0x3a3cf54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_OutputAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_OutputAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_OutputAttribute(HEU_OutputAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_OutputAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_OutputAttribute(HEU_OutputAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11651 };

  /// @brief Field _name, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _class, offset: 0x18, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_AttributeOwner ____class;

  /// @brief Field _type, offset: 0x1c, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_StorageType ____type;

  /// @brief Field _count, offset: 0x20, size: 0x4, def value: None
  int32_t ____count;

  /// @brief Field _tupleSize, offset: 0x24, size: 0x4, def value: None
  int32_t ____tupleSize;

  /// @brief Field _intValues, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____intValues;

  /// @brief Field _floatValues, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____floatValues;

  /// @brief Field _stringValues, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____stringValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_OutputAttribute, ____name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_OutputAttribute, ____class) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_OutputAttribute, ____type) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_OutputAttribute, ____count) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_OutputAttribute, ____tupleSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_OutputAttribute, ____intValues) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_OutputAttribute, ____floatValues) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_OutputAttribute, ____stringValues) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_OutputAttribute, 0x40>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_OutputAttribute);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_OutputAttribute*, "HoudiniEngineUnity", "HEU_OutputAttribute");
