#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/AchievementUpdate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AchievementUpdate)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class AchievementUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AchievementUpdate);
// Type: Oculus.Platform.Models::AchievementUpdate
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::AchievementUpdate*
class CORDL_TYPE AchievementUpdate : public ::System::Object {
public:
  // Declarations
  /// @brief Field JustUnlocked, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_JustUnlocked, put = __cordl_internal_set_JustUnlocked)) bool JustUnlocked;

  /// @brief Field Name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name)) ::StringW Name;

  static inline ::Oculus::Platform::Models::AchievementUpdate* New_ctor(::System::IntPtr o);

  constexpr bool const& __cordl_internal_get_JustUnlocked() const;

  constexpr bool& __cordl_internal_get_JustUnlocked();

  constexpr ::StringW const& __cordl_internal_get_Name() const;

  constexpr ::StringW& __cordl_internal_get_Name();

  constexpr void __cordl_internal_set_JustUnlocked(bool value);

  constexpr void __cordl_internal_set_Name(::StringW value);

  /// @brief Method .ctor, addr 0x3f2daa8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AchievementUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AchievementUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AchievementUpdate(AchievementUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AchievementUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AchievementUpdate(AchievementUpdate const&) = delete;

  /// @brief Field JustUnlocked, offset: 0x10, size: 0x1, def value: None
  bool ___JustUnlocked;

  /// @brief Field Name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15458 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AchievementUpdate, 0x20>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AchievementUpdate, ___JustUnlocked) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AchievementUpdate, ___Name) == 0x18, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AchievementUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AchievementUpdate*, "Oculus.Platform.Models", "AchievementUpdate");
