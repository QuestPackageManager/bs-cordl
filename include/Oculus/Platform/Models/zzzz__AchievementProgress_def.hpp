#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AchievementProgress)
// Forward declare root types
namespace Oculus::Platform::Models {
class AchievementProgress;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AchievementProgress);
// Type: Oculus.Platform.Models::AchievementProgress
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13409))
// CS Name: ::Oculus.Platform.Models::AchievementProgress*
class CORDL_TYPE AchievementProgress : public ::System::Object {
public:
  // Declarations
  /// @brief Field Bitfield, offset 0x10, size 0x8
  __declspec(property(get = __get_Bitfield, put = __set_Bitfield))::StringW Bitfield;

  /// @brief Field Count, offset 0x18, size 0x8
  __declspec(property(get = __get_Count, put = __set_Count)) uint64_t Count;

  /// @brief Field IsUnlocked, offset 0x20, size 0x1
  __declspec(property(get = __get_IsUnlocked, put = __set_IsUnlocked)) bool IsUnlocked;

  /// @brief Field Name, offset 0x28, size 0x8
  __declspec(property(get = __get_Name, put = __set_Name))::StringW Name;

  /// @brief Field UnlockTime, offset 0x30, size 0x8
  __declspec(property(get = __get_UnlockTime, put = __set_UnlockTime))::System::DateTime UnlockTime;

  constexpr ::StringW& __get_Bitfield();

  constexpr ::StringW const& __get_Bitfield() const;

  constexpr void __set_Bitfield(::StringW value);

  constexpr uint64_t& __get_Count();

  constexpr uint64_t const& __get_Count() const;

  constexpr void __set_Count(uint64_t value);

  constexpr bool& __get_IsUnlocked();

  constexpr bool const& __get_IsUnlocked() const;

  constexpr void __set_IsUnlocked(bool value);

  constexpr ::StringW& __get_Name();

  constexpr ::StringW const& __get_Name() const;

  constexpr void __set_Name(::StringW value);

  constexpr ::System::DateTime& __get_UnlockTime();

  constexpr ::System::DateTime const& __get_UnlockTime() const;

  constexpr void __set_UnlockTime(::System::DateTime value);

  static inline ::Oculus::Platform::Models::AchievementProgress* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x2703a44, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "AchievementProgress", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AchievementProgress(AchievementProgress&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AchievementProgress", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AchievementProgress(AchievementProgress const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AchievementProgress();

public:
  /// @brief Field Bitfield, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Bitfield;

  /// @brief Field Count, offset: 0x18, size: 0x8, def value: None
  uint64_t ___Count;

  /// @brief Field IsUnlocked, offset: 0x20, size: 0x1, def value: None
  bool ___IsUnlocked;

  /// @brief Field Name, offset: 0x28, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief Field UnlockTime, offset: 0x30, size: 0x8, def value: None
  ::System::DateTime ___UnlockTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AchievementProgress, 0x38>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AchievementProgress, ___Bitfield) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AchievementProgress, ___Count) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AchievementProgress, ___IsUnlocked) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AchievementProgress, ___Name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AchievementProgress, ___UnlockTime) == 0x30, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AchievementProgress);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AchievementProgress*, "Oculus.Platform.Models", "AchievementProgress");
