#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRFace_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRCustomFace)
namespace GlobalNamespace {
struct __OVRFaceExpressions__FaceExpression;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRCustomFace;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRCustomFace);
// Type: ::OVRCustomFace
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8889))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8874))
// CS Name: ::OVRCustomFace*
class CORDL_TYPE OVRCustomFace : public ::GlobalNamespace::OVRFace {
public:
  // Declarations
  /// @brief Field _mappings, offset 0x30, size 0x8
  __declspec(property(get = __get__mappings,
                      put = __set__mappings))::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> _mappings;

  __declspec(property(get = get_Mappings,
                      put = set_Mappings))::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> Mappings;

  constexpr ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*>& __get__mappings();

  constexpr ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> const& __get__mappings() const;

  constexpr void __set__mappings(::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> value);

  /// @brief Method get_Mappings addr 0x263556c size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> get_Mappings();

  /// @brief Method set_Mappings addr 0x2635574 size 0x8 virtual false final false
  inline void set_Mappings(::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> value);

  /// @brief Method Start addr 0x263557c size 0x4 virtual true final false
  inline void Start();

  /// @brief Method GetFaceExpression addr 0x26355d0 size 0x30 virtual true final false
  inline ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GetFaceExpression(int32_t blendShapeIndex);

  static inline ::GlobalNamespace::OVRCustomFace* New_ctor();

  /// @brief Method .ctor addr 0x2635600 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRCustomFace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRCustomFace(OVRCustomFace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRCustomFace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRCustomFace(OVRCustomFace const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRCustomFace();

public:
  /// @brief Field _mappings, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, ::Array<::GlobalNamespace::__OVRFaceExpressions__FaceExpression>*> ____mappings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRCustomFace, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCustomFace, ____mappings) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRCustomFace);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCustomFace*, "", "OVRCustomFace");
