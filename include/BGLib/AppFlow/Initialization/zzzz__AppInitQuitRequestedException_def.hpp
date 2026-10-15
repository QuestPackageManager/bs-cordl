#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/AppInitQuitRequestedException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AppInitQuitRequestedException)
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
class AppInitQuitRequestedException;
}
// Write type traits
MARK_REF_T(::BGLib::AppFlow::Initialization::AppInitQuitRequestedException*);
DEFINE_IL2CPP_CLASS(::BGLib::AppFlow::Initialization::AppInitQuitRequestedException*, "BGLib.AppFlow.Initialization", "AppInitQuitRequestedException");
// Dependencies System.Exception
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.AppInitQuitRequestedException
class CORDL_TYPE AppInitQuitRequestedException : public ::System::Exception {
public:
  // Declarations
  /// @brief Field exitCode, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_exitCode, put = __cordl_internal_set_exitCode)) int32_t exitCode;

  static inline ::BGLib::AppFlow::Initialization::AppInitQuitRequestedException* New_ctor(int32_t exitCode);

  constexpr int32_t const& __cordl_internal_get_exitCode() const;

  constexpr int32_t& __cordl_internal_get_exitCode();

  constexpr void __cordl_internal_set_exitCode(int32_t value);

  /// @brief Method .ctor, addr 0x35b38c8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(int32_t exitCode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInitQuitRequestedException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppInitQuitRequestedException", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppInitQuitRequestedException(AppInitQuitRequestedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppInitQuitRequestedException", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppInitQuitRequestedException(AppInitQuitRequestedException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22317 };

  /// @brief Field exitCode, offset: 0x8c, size: 0x4, def value: None
  int32_t ___exitCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::AppFlow::Initialization::AppInitQuitRequestedException, ___exitCode) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::BGLib::AppFlow::Initialization::AppInitQuitRequestedException) == 0x90, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
