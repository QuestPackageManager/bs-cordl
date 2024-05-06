#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/LanguagePackInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LanguagePackInfo)
// Forward declare root types
namespace Oculus::Platform::Models {
class LanguagePackInfo;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LanguagePackInfo);
// Type: Oculus.Platform.Models::LanguagePackInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::LanguagePackInfo*
class CORDL_TYPE LanguagePackInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field EnglishName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_EnglishName, put = __cordl_internal_set_EnglishName))::StringW EnglishName;

  /// @brief Field NativeName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_NativeName, put = __cordl_internal_set_NativeName))::StringW NativeName;

  /// @brief Field Tag, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Tag, put = __cordl_internal_set_Tag))::StringW Tag;

  static inline ::Oculus::Platform::Models::LanguagePackInfo* New_ctor(void* o);

  constexpr ::StringW const& __cordl_internal_get_EnglishName() const;

  constexpr ::StringW& __cordl_internal_get_EnglishName();

  constexpr ::StringW const& __cordl_internal_get_NativeName() const;

  constexpr ::StringW& __cordl_internal_get_NativeName();

  constexpr ::StringW const& __cordl_internal_get_Tag() const;

  constexpr ::StringW& __cordl_internal_get_Tag();

  constexpr void __cordl_internal_set_EnglishName(::StringW value);

  constexpr void __cordl_internal_set_NativeName(::StringW value);

  constexpr void __cordl_internal_set_Tag(::StringW value);

  /// @brief Method .ctor, addr 0x2ada8a4, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(void* o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LanguagePackInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LanguagePackInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LanguagePackInfo(LanguagePackInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LanguagePackInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LanguagePackInfo(LanguagePackInfo const&) = delete;

  /// @brief Field EnglishName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___EnglishName;

  /// @brief Field NativeName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___NativeName;

  /// @brief Field Tag, offset: 0x20, size: 0x8, def value: None
  ::StringW ___Tag;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LanguagePackInfo, 0x28>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LanguagePackInfo, ___EnglishName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LanguagePackInfo, ___NativeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LanguagePackInfo, ___Tag) == 0x20, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LanguagePackInfo);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LanguagePackInfo*, "Oculus.Platform.Models", "LanguagePackInfo");
