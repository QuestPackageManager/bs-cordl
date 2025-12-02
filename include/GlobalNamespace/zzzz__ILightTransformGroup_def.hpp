#pragma once
// IWYU pragma private; include "GlobalNamespace/ILightTransformGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ILightTransformGroup)
namespace GlobalNamespace {
class ILightGroup;
}
namespace GlobalNamespace {
struct LightTransformGroupType;
}
// Forward declare root types
namespace GlobalNamespace {
class ILightTransformGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ILightTransformGroup);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ILightTransformGroup
class CORDL_TYPE ILightTransformGroup {
public:
  // Declarations
  __declspec(property(get = get_mirrorX)) bool mirrorX;

  __declspec(property(get = get_mirrorY)) bool mirrorY;

  __declspec(property(get = get_mirrorZ)) bool mirrorZ;

  __declspec(property(get = get_transformGroupType)) ::GlobalNamespace::LightTransformGroupType transformGroupType;

  __declspec(property(get = get_xTransformsCount)) int32_t xTransformsCount;

  __declspec(property(get = get_yTransformsCount)) int32_t yTransformsCount;

  __declspec(property(get = get_zTransformsCount)) int32_t zTransformsCount;

  /// @brief Convert operator to "::GlobalNamespace::ILightGroup"
  constexpr operator ::GlobalNamespace::ILightGroup*() noexcept;

  /// @brief Method get_mirrorX, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_mirrorX();

  /// @brief Method get_mirrorY, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_mirrorY();

  /// @brief Method get_mirrorZ, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_mirrorZ();

  /// @brief Method get_transformGroupType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::LightTransformGroupType get_transformGroupType();

  /// @brief Method get_xTransformsCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_xTransformsCount();

  /// @brief Method get_yTransformsCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_yTransformsCount();

  /// @brief Method get_zTransformsCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_zTransformsCount();

  /// @brief Convert to "::GlobalNamespace::ILightGroup"
  constexpr ::GlobalNamespace::ILightGroup* i___GlobalNamespace__ILightGroup() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ILightTransformGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILightTransformGroup(ILightTransformGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5893 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ILightTransformGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILightTransformGroup*, "", "ILightTransformGroup");
