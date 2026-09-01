#pragma once
// IWYU pragma private; include "GlobalNamespace\HardwareCategories.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HardwareCategory_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HardwareCategories)
namespace GlobalNamespace {
struct HardwareCategory;
}
// Forward declare root types
namespace GlobalNamespace {
class HardwareCategories;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HardwareCategories*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HardwareCategories*, "", "HardwareCategories");
// Dependencies HardwareCategory, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HardwareCategories
class CORDL_TYPE HardwareCategories : public ::System::Object {
public:
  // Declarations
  /// @brief Field _isPlatformOverriden, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__isPlatformOverriden, put = setStaticF__isPlatformOverriden)) bool _isPlatformOverriden;

  /// @brief Field _platformOverride, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__platformOverride, put = setStaticF__platformOverride)) ::GlobalNamespace::HardwareCategory _platformOverride;

  /// @brief Method ClearPlatformOverride, addr 0x328df7c, size 0x4c, virtual false, abstract: false, final false
  static inline void ClearPlatformOverride();

  /// @brief Method GetHardwareCategory, addr 0x328dfcc, size 0xbc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::HardwareCategory GetHardwareCategory();

  /// @brief Method GetHardwareCategoryWithEditorOverride, addr 0x328dfc8, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::HardwareCategory GetHardwareCategoryWithEditorOverride();

  /// @brief Method GetPlatformOverride, addr 0x328decc, size 0x58, virtual false, abstract: false, final false
  static inline bool GetPlatformOverride(::by_ref<::GlobalNamespace::HardwareCategory> hardwareCategory);

  /// @brief Method SetPlatformOverride, addr 0x328df24, size 0x58, virtual false, abstract: false, final false
  static inline void SetPlatformOverride(::GlobalNamespace::HardwareCategory hardwareCategory);

  static inline bool getStaticF__isPlatformOverriden();

  static inline ::GlobalNamespace::HardwareCategory getStaticF__platformOverride();

  static inline void setStaticF__isPlatformOverriden(bool value);

  static inline void setStaticF__platformOverride(::GlobalNamespace::HardwareCategory value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HardwareCategories();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HardwareCategories", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HardwareCategories(HardwareCategories&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HardwareCategories", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HardwareCategories(HardwareCategories const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22037 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HardwareCategories) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
