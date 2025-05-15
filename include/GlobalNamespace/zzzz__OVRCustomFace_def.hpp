#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRCustomFace.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRFace_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRCustomFace)
namespace GlobalNamespace {
struct OVRCustomFace_RetargetingType;
}
namespace GlobalNamespace {
struct OVRFaceExpressions_FaceExpression;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRCustomFace_RetargetingType;
}
namespace GlobalNamespace {
class OVRCustomFace;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRCustomFace_RetargetingType);
MARK_REF_PTR_T(::GlobalNamespace::OVRCustomFace);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRCustomFace/RetargetingType
struct CORDL_TYPE OVRCustomFace_RetargetingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRCustomFace_RetargetingType_Unwrapped
  enum struct __OVRCustomFace_RetargetingType_Unwrapped : int32_t {
    __E_OculusFace = static_cast<int32_t>(0x0),
    __E_Custom = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRCustomFace_RetargetingType_Unwrapped() const noexcept {
    return static_cast<__OVRCustomFace_RetargetingType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRCustomFace_RetargetingType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRCustomFace_RetargetingType(int32_t value__) noexcept;

  /// @brief Field Custom value: I32(1)
  static ::GlobalNamespace::OVRCustomFace_RetargetingType const Custom;

  /// @brief Field OculusFace value: I32(0)
  static ::GlobalNamespace::OVRCustomFace_RetargetingType const OculusFace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8403 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRCustomFace_RetargetingType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRCustomFace_RetargetingType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRCustomFace::RetargetingType, OVRFace
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRCustomFace
class CORDL_TYPE OVRCustomFace : public ::GlobalNamespace::OVRFace {
public:
  // Declarations
  using RetargetingType = ::GlobalNamespace::OVRCustomFace_RetargetingType;

  __declspec(property(get = get_AllowDuplicateMapping, put = set_AllowDuplicateMapping)) bool AllowDuplicateMapping;

  __declspec(property(get = get_Mappings, put = set_Mappings)) ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*> Mappings;

  __declspec(property(get = get_RetargetingValue, put = set_RetargetingValue)) ::GlobalNamespace::OVRCustomFace_RetargetingType RetargetingValue;

  /// @brief Field _allowDuplicateMapping, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__allowDuplicateMapping, put = __cordl_internal_set__allowDuplicateMapping)) bool _allowDuplicateMapping;

  /// @brief Field _mappings, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__mappings,
                      put = __cordl_internal_set__mappings)) ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*>
      _mappings;

  /// @brief Field retargetingType, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_retargetingType, put = __cordl_internal_set_retargetingType)) ::GlobalNamespace::OVRCustomFace_RetargetingType retargetingType;

  /// @brief Method GetCustomBlendShapeNameAndExpressionPairs, addr 0x402f9d8, size 0x138, virtual true, abstract: false, final false
  inline ::System::ValueTuple_2<::ArrayW<::StringW, ::Array<::StringW>*>,
                                ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*>>
  GetCustomBlendShapeNameAndExpressionPairs();

  /// @brief Method GetFaceExpression, addr 0x402f9a8, size 0x30, virtual true, abstract: false, final false
  inline ::GlobalNamespace::OVRFaceExpressions_FaceExpression GetFaceExpression(int32_t blendShapeIndex);

  static inline ::GlobalNamespace::OVRCustomFace* New_ctor();

  /// @brief Method Start, addr 0x402f954, size 0x4, virtual true, abstract: false, final false
  inline void Start();

  constexpr bool const& __cordl_internal_get__allowDuplicateMapping() const;

  constexpr bool& __cordl_internal_get__allowDuplicateMapping();

  constexpr ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*> const& __cordl_internal_get__mappings() const;

  constexpr ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*>& __cordl_internal_get__mappings();

  constexpr ::GlobalNamespace::OVRCustomFace_RetargetingType const& __cordl_internal_get_retargetingType() const;

  constexpr ::GlobalNamespace::OVRCustomFace_RetargetingType& __cordl_internal_get_retargetingType();

  constexpr void __cordl_internal_set__allowDuplicateMapping(bool value);

  constexpr void __cordl_internal_set__mappings(::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*> value);

  constexpr void __cordl_internal_set_retargetingType(::GlobalNamespace::OVRCustomFace_RetargetingType value);

  /// @brief Method .ctor, addr 0x402fb10, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AllowDuplicateMapping, addr 0x402f940, size 0x8, virtual false, abstract: false, final false
  inline bool get_AllowDuplicateMapping();

  /// @brief Method get_Mappings, addr 0x402f920, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*> get_Mappings();

  /// @brief Method get_RetargetingValue, addr 0x402f930, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRCustomFace_RetargetingType get_RetargetingValue();

  /// @brief Method set_AllowDuplicateMapping, addr 0x402f948, size 0xc, virtual false, abstract: false, final false
  inline void set_AllowDuplicateMapping(bool value);

  /// @brief Method set_Mappings, addr 0x402f928, size 0x8, virtual false, abstract: false, final false
  inline void set_Mappings(::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*> value);

  /// @brief Method set_RetargetingValue, addr 0x402f938, size 0x8, virtual false, abstract: false, final false
  inline void set_RetargetingValue(::GlobalNamespace::OVRCustomFace_RetargetingType value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8404 };

  /// @brief Field _mappings, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::OVRFaceExpressions_FaceExpression, ::Array<::GlobalNamespace::OVRFaceExpressions_FaceExpression>*> ____mappings;

  /// @brief Field retargetingType, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::OVRCustomFace_RetargetingType ___retargetingType;

  /// @brief Field _allowDuplicateMapping, offset: 0x44, size: 0x1, def value: None
  bool ____allowDuplicateMapping;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRCustomFace, ____mappings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCustomFace, ___retargetingType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCustomFace, ____allowDuplicateMapping) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRCustomFace, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCustomFace_RetargetingType, "", "OVRCustomFace/RetargetingType");
NEED_NO_BOX(::GlobalNamespace::OVRCustomFace);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCustomFace*, "", "OVRCustomFace");
