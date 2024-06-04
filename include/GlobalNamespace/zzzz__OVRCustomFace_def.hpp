#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRCustomFace.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRCustomFace_def.hpp"
#include "GlobalNamespace/zzzz__OVRFace_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRCustomFace)
namespace GlobalNamespace {
struct __OVRCustomFace__RetargetingType;
}
namespace GlobalNamespace {
struct __OVRFaceExpressions__FaceExpression;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRCustomFace__RetargetingType;
}
namespace GlobalNamespace {
class OVRCustomFace;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRCustomFace__RetargetingType);
MARK_REF_PTR_T(::GlobalNamespace::OVRCustomFace);
// Type: ::RetargetingType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRCustomFace::RetargetingType
struct CORDL_TYPE __OVRCustomFace__RetargetingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRCustomFace__RetargetingType_Unwrapped
  enum struct ____OVRCustomFace__RetargetingType_Unwrapped : int32_t {
    __E_OculusFace = static_cast<int32_t>(0x0),
    __E_Custom = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRCustomFace__RetargetingType_Unwrapped() const noexcept {
    return static_cast<____OVRCustomFace__RetargetingType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRCustomFace__RetargetingType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRCustomFace__RetargetingType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Custom value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRCustomFace__RetargetingType const Custom;

  /// @brief Field OculusFace value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRCustomFace__RetargetingType const OculusFace;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRCustomFace__RetargetingType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRCustomFace__RetargetingType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRCustomFace
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 61, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRCustomFace*
class CORDL_TYPE OVRCustomFace : public ::GlobalNamespace::OVRFace {
public:
  // Declarations
  using RetargetingType = ::GlobalNamespace::__OVRCustomFace__RetargetingType;

  __declspec(property(get = get_AllowDuplicateMapping, put = set_AllowDuplicateMapping)) bool AllowDuplicateMapping;

  __declspec(property(get = get_Mappings,
                      put = set_Mappings))::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> Mappings;

  __declspec(property(get = get_RetargetingValue, put = set_RetargetingValue))::GlobalNamespace::__OVRCustomFace__RetargetingType RetargetingValue;

  /// @brief Field _allowDuplicateMapping, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get__allowDuplicateMapping, put = __cordl_internal_set__allowDuplicateMapping)) bool _allowDuplicateMapping;

  /// @brief Field _mappings, offset 0x30, size 0x8
  __declspec(
      property(get = __cordl_internal_get__mappings,
               put = __cordl_internal_set__mappings))::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> _mappings;

  /// @brief Field retargetingType, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_retargetingType, put = __cordl_internal_set_retargetingType))::GlobalNamespace::__OVRCustomFace__RetargetingType retargetingType;

  /// @brief Method GetCustomBlendShapeNameAndExpressionPairs, addr 0x2b9f3a0, size 0x138, virtual true, abstract: false, final false
  inline ::System::ValueTuple_2<::ArrayW<::StringW, ::Array<::StringW>*>,
                                ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>>
  GetCustomBlendShapeNameAndExpressionPairs();

  /// @brief Method GetFaceExpression, addr 0x2b9f370, size 0x30, virtual true, abstract: false, final false
  inline ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GetFaceExpression(int32_t blendShapeIndex);

  static inline ::GlobalNamespace::OVRCustomFace* New_ctor();

  /// @brief Method Start, addr 0x2b9f31c, size 0x4, virtual true, abstract: false, final false
  inline void Start();

  constexpr bool const& __cordl_internal_get__allowDuplicateMapping() const;

  constexpr bool& __cordl_internal_get__allowDuplicateMapping();

  constexpr ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> const& __cordl_internal_get__mappings() const;

  constexpr ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>& __cordl_internal_get__mappings();

  constexpr ::GlobalNamespace::__OVRCustomFace__RetargetingType const& __cordl_internal_get_retargetingType() const;

  constexpr ::GlobalNamespace::__OVRCustomFace__RetargetingType& __cordl_internal_get_retargetingType();

  constexpr void __cordl_internal_set__allowDuplicateMapping(bool value);

  constexpr void __cordl_internal_set__mappings(::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> value);

  constexpr void __cordl_internal_set_retargetingType(::GlobalNamespace::__OVRCustomFace__RetargetingType value);

  /// @brief Method .ctor, addr 0x2b9f4d8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AllowDuplicateMapping, addr 0x2b9f308, size 0x8, virtual false, abstract: false, final false
  inline bool get_AllowDuplicateMapping();

  /// @brief Method get_Mappings, addr 0x2b9f2e8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> get_Mappings();

  /// @brief Method get_RetargetingValue, addr 0x2b9f2f8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRCustomFace__RetargetingType get_RetargetingValue();

  /// @brief Method set_AllowDuplicateMapping, addr 0x2b9f310, size 0xc, virtual false, abstract: false, final false
  inline void set_AllowDuplicateMapping(bool value);

  /// @brief Method set_Mappings, addr 0x2b9f2f0, size 0x8, virtual false, abstract: false, final false
  inline void set_Mappings(::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> value);

  /// @brief Method set_RetargetingValue, addr 0x2b9f300, size 0x8, virtual false, abstract: false, final false
  inline void set_RetargetingValue(::GlobalNamespace::__OVRCustomFace__RetargetingType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRCustomFace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRCustomFace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRCustomFace(OVRCustomFace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRCustomFace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRCustomFace(OVRCustomFace const&) = delete;

  /// @brief Field _mappings, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> ____mappings;

  /// @brief Field retargetingType, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::__OVRCustomFace__RetargetingType ___retargetingType;

  /// @brief Field _allowDuplicateMapping, offset: 0x3c, size: 0x1, def value: None
  bool ____allowDuplicateMapping;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRCustomFace, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCustomFace, ____mappings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCustomFace, ___retargetingType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCustomFace, ____allowDuplicateMapping) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRCustomFace__RetargetingType, "", "OVRCustomFace/RetargetingType");
NEED_NO_BOX(::GlobalNamespace::OVRCustomFace);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCustomFace*, "", "OVRCustomFace");
