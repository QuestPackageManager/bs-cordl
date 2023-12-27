#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AchievementUpdate)
// Forward declare root types
namespace Oculus::Platform::Models {
class AchievementUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AchievementUpdate);
// Type: Oculus.Platform.Models::AchievementUpdate
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13411))
// CS Name: ::Oculus.Platform.Models::AchievementUpdate*
class CORDL_TYPE AchievementUpdate : public ::System::Object {
public:
  // Declarations
  /// @brief Field JustUnlocked, offset 0x10, size 0x1
  __declspec(property(get = __get_JustUnlocked, put = __set_JustUnlocked)) bool JustUnlocked;

  /// @brief Field Name, offset 0x18, size 0x8
  __declspec(property(get = __get_Name, put = __set_Name))::StringW Name;

  constexpr bool& __get_JustUnlocked();

  constexpr bool const& __get_JustUnlocked() const;

  constexpr void __set_JustUnlocked(bool value);

  constexpr ::StringW& __get_Name();

  constexpr ::StringW const& __get_Name() const;

  constexpr void __set_Name(::StringW value);

  static inline ::Oculus::Platform::Models::AchievementUpdate* New_ctor(void* o);

  /// @brief Method .ctor addr 0x2703d5c size 0x8c virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "AchievementUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AchievementUpdate(AchievementUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AchievementUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AchievementUpdate(AchievementUpdate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AchievementUpdate();

public:
  /// @brief Field JustUnlocked, offset: 0x10, size: 0x1, def value: None
  bool ___JustUnlocked;

  /// @brief Field Name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___Name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AchievementUpdate, 0x20>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AchievementUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AchievementUpdate*, "Oculus.Platform.Models", "AchievementUpdate");
