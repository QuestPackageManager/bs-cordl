#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/EnumInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumInfo)
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class EnumInfo;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::EnumInfo);
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.EnumInfo
class CORDL_TYPE EnumInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field IsFlags, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_IsFlags, put = __cordl_internal_set_IsFlags)) bool IsFlags;

  /// @brief Field Names, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Names, put = __cordl_internal_set_Names)) ::ArrayW<::StringW, ::Array<::StringW>*> Names;

  /// @brief Field ResolvedNames, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ResolvedNames, put = __cordl_internal_set_ResolvedNames)) ::ArrayW<::StringW, ::Array<::StringW>*> ResolvedNames;

  /// @brief Field Values, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Values, put = __cordl_internal_set_Values)) ::ArrayW<uint64_t, ::Array<uint64_t>*> Values;

  static inline ::Newtonsoft::Json::Utilities::EnumInfo* New_ctor(bool isFlags, ::ArrayW<uint64_t, ::Array<uint64_t>*> values, ::ArrayW<::StringW, ::Array<::StringW>*> names,
                                                                  ::ArrayW<::StringW, ::Array<::StringW>*> resolvedNames);

  constexpr bool const& __cordl_internal_get_IsFlags() const;

  constexpr bool& __cordl_internal_get_IsFlags();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_Names() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_Names();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_ResolvedNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_ResolvedNames();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_Values() const;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_Values();

  constexpr void __cordl_internal_set_IsFlags(bool value);

  constexpr void __cordl_internal_set_Names(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_ResolvedNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_Values(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  /// @brief Method .ctor, addr 0x5b113d4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool isFlags, ::ArrayW<uint64_t, ::Array<uint64_t>*> values, ::ArrayW<::StringW, ::Array<::StringW>*> names, ::ArrayW<::StringW, ::Array<::StringW>*> resolvedNames);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumInfo(EnumInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumInfo(EnumInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13384 };

  /// @brief Field IsFlags, offset: 0x10, size: 0x1, def value: None
  bool ___IsFlags;

  /// @brief Field Values, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___Values;

  /// @brief Field Names, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___Names;

  /// @brief Field ResolvedNames, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___ResolvedNames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::EnumInfo, ___IsFlags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::EnumInfo, ___Values) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::EnumInfo, ___Names) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::EnumInfo, ___ResolvedNames) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::EnumInfo, 0x30>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::EnumInfo);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::EnumInfo*, "Newtonsoft.Json.Utilities", "EnumInfo");
