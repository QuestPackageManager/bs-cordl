#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ApplicationVersion)
// Forward declare root types
namespace Oculus::Platform::Models {
class ApplicationVersion;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::ApplicationVersion);
// Type: Oculus.Platform.Models::ApplicationVersion
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13416))
// CS Name: ::Oculus.Platform.Models::ApplicationVersion*
class CORDL_TYPE ApplicationVersion : public ::System::Object {
public:
  // Declarations
  /// @brief Field CurrentCode, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_CurrentCode, put = __cordl_internal_set_CurrentCode)) int32_t CurrentCode;

  /// @brief Field CurrentName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CurrentName, put = __cordl_internal_set_CurrentName))::StringW CurrentName;

  /// @brief Field LatestCode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_LatestCode, put = __cordl_internal_set_LatestCode)) int32_t LatestCode;

  /// @brief Field LatestName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_LatestName, put = __cordl_internal_set_LatestName))::StringW LatestName;

  /// @brief Field ReleaseDate, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_ReleaseDate, put = __cordl_internal_set_ReleaseDate)) int64_t ReleaseDate;

  /// @brief Field Size, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Size, put = __cordl_internal_set_Size))::StringW Size;

  constexpr int32_t& __cordl_internal_get_CurrentCode();

  constexpr int32_t const& __cordl_internal_get_CurrentCode() const;

  constexpr void __cordl_internal_set_CurrentCode(int32_t value);

  constexpr ::StringW& __cordl_internal_get_CurrentName();

  constexpr ::StringW const& __cordl_internal_get_CurrentName() const;

  constexpr void __cordl_internal_set_CurrentName(::StringW value);

  constexpr int32_t& __cordl_internal_get_LatestCode();

  constexpr int32_t const& __cordl_internal_get_LatestCode() const;

  constexpr void __cordl_internal_set_LatestCode(int32_t value);

  constexpr ::StringW& __cordl_internal_get_LatestName();

  constexpr ::StringW const& __cordl_internal_get_LatestName() const;

  constexpr void __cordl_internal_set_LatestName(::StringW value);

  constexpr int64_t& __cordl_internal_get_ReleaseDate();

  constexpr int64_t const& __cordl_internal_get_ReleaseDate() const;

  constexpr void __cordl_internal_set_ReleaseDate(int64_t value);

  constexpr ::StringW& __cordl_internal_get_Size();

  constexpr ::StringW const& __cordl_internal_get_Size() const;

  constexpr void __cordl_internal_set_Size(::StringW value);

  static inline ::Oculus::Platform::Models::ApplicationVersion* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x27044c0, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "ApplicationVersion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ApplicationVersion(ApplicationVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ApplicationVersion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ApplicationVersion(ApplicationVersion const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ApplicationVersion();

public:
  /// @brief Field CurrentCode, offset: 0x10, size: 0x4, def value: None
  int32_t ___CurrentCode;

  /// @brief Field CurrentName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___CurrentName;

  /// @brief Field LatestCode, offset: 0x20, size: 0x4, def value: None
  int32_t ___LatestCode;

  /// @brief Field LatestName, offset: 0x28, size: 0x8, def value: None
  ::StringW ___LatestName;

  /// @brief Field ReleaseDate, offset: 0x30, size: 0x8, def value: None
  int64_t ___ReleaseDate;

  /// @brief Field Size, offset: 0x38, size: 0x8, def value: None
  ::StringW ___Size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::ApplicationVersion, 0x40>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ApplicationVersion, ___CurrentCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ApplicationVersion, ___CurrentName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ApplicationVersion, ___LatestCode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ApplicationVersion, ___LatestName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ApplicationVersion, ___ReleaseDate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ApplicationVersion, ___Size) == 0x38, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::ApplicationVersion);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::ApplicationVersion*, "Oculus.Platform.Models", "ApplicationVersion");
