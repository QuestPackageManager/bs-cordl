#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightGroupTranslationXTransform_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupTranslationYTransform_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupTranslationZTransform_def.hpp"
#include "GlobalNamespace/zzzz__LightTransformGroup_3_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(LightTranslationGroup)
namespace GlobalNamespace {
class IEditTimeValidated;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class LightTranslationGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightTranslationGroup);
// Type: ::LightTranslationGroup
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(4943)), TypeDefinitionIndex(TypeDefinitionIndex(4937)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4943), inst: 3960 }), TypeDefinitionIndex(TypeDefinitionIndex(4936)), TypeDefinitionIndex(TypeDefinitionIndex(4938))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4944)) CS Name: ::LightTranslationGroup*
class CORDL_TYPE LightTranslationGroup : public ::GlobalNamespace::LightTransformGroup_3<::GlobalNamespace::LightGroupTranslationXTransform*, ::GlobalNamespace::LightGroupTranslationYTransform*,
                                                                                         ::GlobalNamespace::LightGroupTranslationZTransform*> {
public:
  // Declarations
  /// @brief Field _xTranslationLimits, offset 0x40, size 0x8
  __declspec(property(get = __get__xTranslationLimits, put = __set__xTranslationLimits))::UnityEngine::Vector2 _xTranslationLimits;

  /// @brief Field _yTranslationLimits, offset 0x48, size 0x8
  __declspec(property(get = __get__yTranslationLimits, put = __set__yTranslationLimits))::UnityEngine::Vector2 _yTranslationLimits;

  /// @brief Field _zTranslationLimits, offset 0x50, size 0x8
  __declspec(property(get = __get__zTranslationLimits, put = __set__zTranslationLimits))::UnityEngine::Vector2 _zTranslationLimits;

  /// @brief Field _xDistributionLimits, offset 0x58, size 0x8
  __declspec(property(get = __get__xDistributionLimits, put = __set__xDistributionLimits))::UnityEngine::Vector2 _xDistributionLimits;

  /// @brief Field _yDistributionLimits, offset 0x60, size 0x8
  __declspec(property(get = __get__yDistributionLimits, put = __set__yDistributionLimits))::UnityEngine::Vector2 _yDistributionLimits;

  /// @brief Field _zDistributionLimits, offset 0x68, size 0x8
  __declspec(property(get = __get__zDistributionLimits, put = __set__zDistributionLimits))::UnityEngine::Vector2 _zDistributionLimits;

  __declspec(property(get = get_xTranslationLimits))::UnityEngine::Vector2 xTranslationLimits;

  __declspec(property(get = get_yTranslationLimits))::UnityEngine::Vector2 yTranslationLimits;

  __declspec(property(get = get_zTranslationLimits))::UnityEngine::Vector2 zTranslationLimits;

  __declspec(property(get = get_xDistributionLimits))::UnityEngine::Vector2 xDistributionLimits;

  __declspec(property(get = get_yDistributionLimits))::UnityEngine::Vector2 yDistributionLimits;

  __declspec(property(get = get_zDistributionLimits))::UnityEngine::Vector2 zDistributionLimits;

  /// @brief Convert operator to "::GlobalNamespace::IEditTimeValidated"
  constexpr operator ::GlobalNamespace::IEditTimeValidated*() noexcept;

  constexpr ::UnityEngine::Vector2& __get__xTranslationLimits();

  constexpr ::UnityEngine::Vector2 const& __get__xTranslationLimits() const;

  constexpr void __set__xTranslationLimits(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get__yTranslationLimits();

  constexpr ::UnityEngine::Vector2 const& __get__yTranslationLimits() const;

  constexpr void __set__yTranslationLimits(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get__zTranslationLimits();

  constexpr ::UnityEngine::Vector2 const& __get__zTranslationLimits() const;

  constexpr void __set__zTranslationLimits(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get__xDistributionLimits();

  constexpr ::UnityEngine::Vector2 const& __get__xDistributionLimits() const;

  constexpr void __set__xDistributionLimits(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get__yDistributionLimits();

  constexpr ::UnityEngine::Vector2 const& __get__yDistributionLimits() const;

  constexpr void __set__yDistributionLimits(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get__zDistributionLimits();

  constexpr ::UnityEngine::Vector2 const& __get__zDistributionLimits() const;

  constexpr void __set__zDistributionLimits(::UnityEngine::Vector2 value);

  /// @brief Method get_xTranslationLimits, addr 0x23aa7e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_xTranslationLimits();

  /// @brief Method get_yTranslationLimits, addr 0x23aa7f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_yTranslationLimits();

  /// @brief Method get_zTranslationLimits, addr 0x23aa7f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_zTranslationLimits();

  /// @brief Method get_xDistributionLimits, addr 0x23aa800, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_xDistributionLimits();

  /// @brief Method get_yDistributionLimits, addr 0x23aa808, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_yDistributionLimits();

  /// @brief Method get_zDistributionLimits, addr 0x23aa810, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_zDistributionLimits();

  /// @brief Method __Validate, addr 0x23aa818, size 0x21c, virtual false, abstract: false, final false
  inline bool __Validate();

  static inline ::GlobalNamespace::LightTranslationGroup* New_ctor();

  /// @brief Method .ctor, addr 0x23aaa34, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTranslationGroup(LightTranslationGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTranslationGroup(LightTranslationGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationGroup();

public:
  /// @brief Field _xTranslationLimits, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____xTranslationLimits;

  /// @brief Field _yTranslationLimits, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____yTranslationLimits;

  /// @brief Field _zTranslationLimits, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____zTranslationLimits;

  /// @brief Field _xDistributionLimits, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____xDistributionLimits;

  /// @brief Field _yDistributionLimits, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____yDistributionLimits;

  /// @brief Field _zDistributionLimits, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____zDistributionLimits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightTranslationGroup, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroup, ____xTranslationLimits) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroup, ____yTranslationLimits) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroup, ____zTranslationLimits) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroup, ____xDistributionLimits) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroup, ____yDistributionLimits) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroup, ____zDistributionLimits) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightTranslationGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationGroup*, "", "LightTranslationGroup");
