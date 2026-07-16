#pragma once
// IWYU pragma private; include "GlobalNamespace/IDspTimeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IDspTimeProvider)
// Forward declare root types
namespace GlobalNamespace {
class IDspTimeProvider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IDspTimeProvider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IDspTimeProvider*, "", "IDspTimeProvider");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IDspTimeProvider
class CORDL_TYPE IDspTimeProvider {
public:
  // Declarations
  __declspec(property(get = get_dspTime)) double_t dspTime;

  /// @brief Method get_dspTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline double_t get_dspTime();

  // Ctor Parameters [CppParam { name: "", ty: "IDspTimeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDspTimeProvider(IDspTimeProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5567 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
